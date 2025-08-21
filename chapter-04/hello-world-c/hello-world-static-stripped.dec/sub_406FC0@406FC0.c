__int64 __fastcall sub_406FC0(
        _DWORD *a1,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 result; // x0
  unsigned __int64 v18; // x0

  if ( *a1 == 2 )
    goto LABEL_3;
  while ( 1 )
  {
    result = _aarch64_swp4_acq(2, a1);
    if ( !(_DWORD)result )
      break;
LABEL_3:
    v18 = linux_eabi_syscall(__NR_futex, a1, (void *)(a2 ^ 0x80), (void *)2, 0, a13, a14, a15);
    if ( v18 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v18 != -11 && (_DWORD)v18 != -4 )
      sub_401A30((__int64)"The futex facility returned an unexpected error code.\n", a3, a4, a5, a6, a7, a8, a9, a10);
  }
  return result;
}
