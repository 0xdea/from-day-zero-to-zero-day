__int64 __fastcall sub_4425F0(void *a1, unsigned int a2, unsigned int a3, _QWORD *a4, int a5, __int64 a6, void *a7)
{
  unsigned __int64 v8; // x20
  void *v9; // x19
  int v10; // w19
  unsigned int v12; // w6
  void *v13; // [xsp+38h] [xbp+38h]

  if ( a4 )
    goto LABEL_15;
  do
  {
    if ( a3 > 1 )
      return 22;
    v8 = a2;
    v9 = (void *)(int)(((a3 << 8) ^ 0x100 | 0x89) ^ a5);
    if ( byte_490F08 )
    {
      v10 = linux_eabi_syscall(__NR_futex, a1, v9, (void *)a2, a4, 0, (void *)0xFFFFFFFFLL, a7);
    }
    else
    {
      v13 = a4;
      v12 = sub_42C5F0();
      v10 = linux_eabi_syscall(__NR_futex, a1, v9, (void *)v8, v13, 0, (void *)0xFFFFFFFFLL, (void *)v12);
      sub_42C680(v12);
    }
    if ( v10 <= 0 )
    {
      if ( v10 < -22 )
      {
        if ( v10 == -110 || v10 == -75 )
          return (unsigned int)-v10;
      }
      else if ( ((0x440801uLL >> ((unsigned __int8)v10 + 22)) & 1) != 0 )
      {
        return (unsigned int)-v10;
      }
    }
    sub_401A30("The futex facility returned an unexpected error code.\n");
LABEL_15:
    ;
  }
  while ( (*a4 & 0x8000000000000000LL) == 0 );
  return 110;
}
