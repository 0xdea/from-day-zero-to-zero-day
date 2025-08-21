signed __int64 __fastcall _lll_lock_wake_private(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7)
{
  return linux_eabi_syscall(__NR_futex, a1, (void *)0x81, (void *)1, 0, a5, a6, a7);
}
