__int64 __fastcall sub_442710(
        void *a1,
        int a2,
        void *a3,
        unsigned int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        __int64 a13,
        __int64 a14,
        void *a15)
{
  unsigned __int64 v15; // x4
  unsigned __int64 v16; // x5
  signed __int64 v17; // x0

  v15 = a4;
  v16 = a4 ^ 0x86;
  if ( a2 )
  {
    v15 = a4 ^ 0x8D;
    if ( a3 )
      v16 = (unsigned int)v15;
    else
      v16 = (unsigned int)v16;
  }
  v17 = linux_eabi_syscall(__NR_futex, a1, (void *)(int)v16, 0, a3, (void *)v15, (void *)v16, a15);
  if ( (_DWORD)v17 == -38 )
    return 22;
  if ( (_DWORD)v17 != -110
    && ((_DWORD)v17 != 0 && (unsigned int)v17 < 0xFFFFFFDD || ((0x981002001uLL >> ((unsigned __int8)v17 + 35)) & 1) == 0) )
  {
    sub_401A30((__int64)"The futex facility returned an unexpected error code.\n", a5, a6, a7, a8, a9, a10, a11, a12);
  }
  return (unsigned int)-(int)v17;
}
