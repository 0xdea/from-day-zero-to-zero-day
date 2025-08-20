__int64 __fastcall _pthread_disable_asynccancel(__int64 result)
{
  atomic_uint *v1; // x20
  unsigned int i; // w19
  unsigned int v3; // w21
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  double v7; // d0
  double v8; // d1
  double v9; // d2
  double v10; // d3
  double v11; // d4
  double v12; // d5
  double v13; // d6
  double v14; // d7
  unsigned __int64 v15; // x0

  if ( (result & 2) == 0 )
  {
    v1 = (atomic_uint *)(_ReadStatusReg(TPIDR_EL0) - 1592);
    for ( i = *(_DWORD *)v1; ; i = result )
    {
      v3 = i & 0xFFFFFFFD;
      result = _aarch64_cas4_acq(i, i & 0xFFFFFFFD, v1);
      if ( (_DWORD)result == i )
        break;
    }
    if ( (i & 0xC) == 4 )
    {
      do
      {
        v15 = linux_eabi_syscall(__NR_futex, v1, (void *)0x80, (void *)v3, 0, v4, v5, v6);
        if ( v15 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v15 != -11 && (_DWORD)v15 != -4 )
          _libc_fatal(
            (__int64)"The futex facility returned an unexpected error code.\n",
            v7,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14);
        v3 = *(_DWORD *)v1;
        result = *(_DWORD *)v1 & 0xC;
      }
      while ( (_DWORD)result == 4 );
    }
  }
  return result;
}
