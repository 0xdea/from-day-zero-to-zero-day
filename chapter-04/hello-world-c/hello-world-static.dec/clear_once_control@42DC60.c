unsigned __int64 __fastcall clear_once_control(
        _DWORD *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  unsigned __int64 result; // x0

  *a1 = 0;
  result = linux_eabi_syscall(__NR_futex, a1, (void *)0x81, (void *)0x7FFFFFFF, 0, a13, a14, a15);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    result = (unsigned int)(result + 22);
    if ( (result & 0xFFFFFFF7) != 0 )
      _libc_fatal((__int64)"The futex facility returned an unexpected error code.\n", a2, a3, a4, a5, a6, a7, a8, a9);
  }
  return result;
}
