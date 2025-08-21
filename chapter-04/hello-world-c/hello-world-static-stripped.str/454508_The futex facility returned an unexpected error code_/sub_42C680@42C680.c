__int64 __fastcall sub_42C680(__int64 result)
{
  atomic_uint *v1; // x20
  unsigned int i; // w19
  unsigned int v3; // w21
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  unsigned __int64 v7; // x0

  if ( (result & 2) == 0 )
  {
    v1 = (atomic_uint *)(_ReadStatusReg(TPIDR_EL0) - 1592);
    for ( i = *(_DWORD *)v1; ; i = result )
    {
      v3 = i & 0xFFFFFFFD;
      result = _aarch64_cas4_acq(i, i & 0xFFFFFFFD, v1);
      if ( (_DWORD)result == i )
      {
        if ( (i & 0xC) != 4 )
          return result;
        while ( 1 )
        {
          v7 = linux_eabi_syscall(__NR_futex, v1, (void *)0x80, (void *)v3, 0, v4, v5, v6);
          if ( v7 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v7 != -11 && (_DWORD)v7 != -4 )
            break;
          v3 = *(_DWORD *)v1;
          result = *(_DWORD *)v1 & 0xC;
          if ( (_DWORD)result != 4 )
            return result;
        }
        LODWORD(result) = sub_401A30("The futex facility returned an unexpected error code.\n");
      }
    }
  }
  return result;
}
