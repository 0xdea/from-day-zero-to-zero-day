unsigned __int64 __fastcall _fcntl64_nocancel_adjusted(int a1, int a2, void *a3)
{
  unsigned __int64 result; // x0
  unsigned int v4; // w0
  int v5; // w1
  int v6; // w3
  int v7; // [xsp+0h] [xbp-10h] BYREF
  unsigned int v8; // [xsp+4h] [xbp-Ch]

  if ( a2 == 9 )
  {
    v4 = linux_eabi_syscall(__NR_fcntl, a1, 16, &v7);
    if ( v4 > 0xFFFFF000 )
    {
      v5 = -v4;
      result = 0xFFFFFFFFLL;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v5;
    }
    else if ( v7 == 2 )
    {
      return -v8;
    }
    else
    {
      return v8;
    }
  }
  else
  {
    result = linux_eabi_syscall(__NR_fcntl, a1, a2, a3);
    if ( result > 0xFFFFFFFFFFFFF000LL )
    {
      v6 = -(int)result;
      result = 0xFFFFFFFFLL;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v6;
    }
  }
  return result;
}
