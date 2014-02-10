/*
  libco.armeabi (2013-04-05)
  author: Themaister
  license: public domain
*/

#define LIBCO_C
#include "libco.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

static thread_local uint32_t co_active_buffer[64];
static thread_local cothread_t co_active_handle;

// ASM
void co_switch_arm(cothread_t handle, cothread_t current);

static void crash(void) {
   assert(0); // Called only if cothread_t entrypoint returns.
}

cothread_t co_create(unsigned int size, void (*entrypoint)(void)) {
   size = (size + 1023) & ~1023;
   cothread_t handle;
#if HAVE_POSIX_MEMALIGN
   if (posix_memalign((void**)&handle, 1024, size + 256) < 0)
      return 0;
#else
   handle = memalign(1024, size + 256);
   if (!handle)
      return 0;
#endif

   uint32_t *ptr = (uint32_t*)handle;
   // Non-volatiles
   ptr[0] = 0; // r4
   ptr[1] = 0; // r5
   ptr[2] = 0; // r6
   ptr[3] = 0; // r7
   ptr[4] = 0; // r8
   ptr[5] = 0; // r9
   ptr[6] = 0; // r10
   ptr[7] = 0; // r11
   ptr[8] = 0; // r12
   ptr[9] = (uintptr_t)ptr + size + 256 - 4; // r13, stack pointer
   ptr[10] = (uintptr_t)entrypoint; // r15, PC (link register r14 gets saved here).
   memcpy(handle, &ptr, sizeof(ptr));
   return handle;
}

cothread_t co_active(void) {
   if (!co_active_handle)
      co_active_handle = co_active_buffer;
   return co_active_handle;
}

void co_delete(cothread_t handle) {
   free(handle);
}

void co_switch(cothread_t handle) {
   cothread_t co_previous_handle = co_active();
   co_switch_arm(co_active_handle = handle, co_previous_handle);
}

#ifdef __cplusplus
}
#endif

