__int64 __fastcall _futex_abstimed_wait64(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        void *a7)
{
  signed __int64 v7; // x0

  if ( !a4 || (*a4 & 0x8000000000000000LL) == 0 )
  {
    if ( a3 > 1 )
      return 22;
    v7 = linux_eabi_syscall(
           __NR_futex,
           a1,
           (void *)(int)(((a3 << 8) ^ 0x100 | 0x89) ^ a5),
           (void *)a2,
           a4,
           0,
           (void *)0xFFFFFFFFLL,
           a7);
    if ( (int)v7 <= 0 )
    {
      if ( (int)v7 < -22 )
      {
        if ( (_DWORD)v7 == -110 || (_DWORD)v7 == -75 )
          return (unsigned int)-(int)v7;
      }
      else if ( ((0x440801uLL >> ((unsigned __int8)v7 + 22)) & 1) != 0 )
      {
        return (unsigned int)-(int)v7;
      }
    }
    _libc_fatal("The futex facility returned an unexpected error code.\n");
  }
  return 110;
}
