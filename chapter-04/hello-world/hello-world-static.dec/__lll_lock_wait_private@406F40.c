__int64 __fastcall _lll_lock_wait_private(
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
  __int64 result; // x0
  unsigned __int64 v17; // x0

  if ( *a1 == 2 )
    goto LABEL_3;
  while ( 1 )
  {
    result = _aarch64_swp4_acq(2, a1);
    if ( !(_DWORD)result )
      break;
LABEL_3:
    v17 = linux_eabi_syscall(__NR_futex, a1, (void *)0x80, (void *)2, 0, a13, a14, a15);
    if ( v17 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v17 != -11 && (_DWORD)v17 != -4 )
      _libc_fatal((__int64)"The futex facility returned an unexpected error code.\n", a2, a3, a4, a5, a6, a7, a8, a9);
  }
  return result;
}
