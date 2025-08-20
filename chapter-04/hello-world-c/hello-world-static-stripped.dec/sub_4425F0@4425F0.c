__int64 __fastcall sub_4425F0(
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
  unsigned __int64 v16; // x20
  void *v17; // x19
  int v18; // w19
  unsigned int v20; // w6

  if ( a4 && (*a4 & 0x8000000000000000LL) != 0 )
    return 110;
  if ( a3 > 1 )
    return 22;
  v16 = a2;
  v17 = (void *)(int)(((a3 << 8) ^ 0x100 | 0x89) ^ a5);
  if ( byte_490F08 )
  {
    v18 = linux_eabi_syscall(__NR_futex, a1, v17, (void *)a2, a4, 0, (void *)0xFFFFFFFFLL, a15);
  }
  else
  {
    v20 = sub_42C5F0();
    v18 = linux_eabi_syscall(__NR_futex, a1, v17, (void *)v16, a4, 0, (void *)0xFFFFFFFFLL, (void *)v20);
    sub_42C680(v20);
  }
  if ( v18 > 0 )
    goto LABEL_14;
  if ( v18 < -22 )
  {
    if ( v18 == -110 || v18 == -75 )
      return (unsigned int)-v18;
LABEL_14:
    sub_401A30((__int64)"The futex facility returned an unexpected error code.\n", a6, a7, a8, a9, a10, a11, a12, a13);
  }
  if ( ((0x440801uLL >> ((unsigned __int8)v18 + 22)) & 1) == 0 )
    goto LABEL_14;
  return (unsigned int)-v18;
}
