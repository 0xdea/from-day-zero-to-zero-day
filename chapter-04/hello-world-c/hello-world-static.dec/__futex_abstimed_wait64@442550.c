__int64 __fastcall _futex_abstimed_wait64(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __int64 a14,
        void *a15)
{
  signed __int64 v15; // x0

  if ( !a4 || (*a4 & 0x8000000000000000LL) == 0 )
  {
    if ( a3 > 1 )
      return 22;
    v15 = linux_eabi_syscall(
            __NR_futex,
            a1,
            (void *)(int)(((a3 << 8) ^ 0x100 | 0x89) ^ a5),
            (void *)a2,
            a4,
            0,
            (void *)0xFFFFFFFFLL,
            a15);
    if ( (int)v15 <= 0 )
    {
      if ( (int)v15 < -22 )
      {
        if ( (_DWORD)v15 == -110 || (_DWORD)v15 == -75 )
          return (unsigned int)-(int)v15;
      }
      else if ( ((0x440801uLL >> ((unsigned __int8)v15 + 22)) & 1) != 0 )
      {
        return (unsigned int)-(int)v15;
      }
    }
    _libc_fatal((__int64)"The futex facility returned an unexpected error code.\n", a6, a7, a8, a9, a10, a11, a12, a13);
  }
  return 110;
}
