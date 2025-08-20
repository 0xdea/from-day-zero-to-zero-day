__int64 __fastcall sub_410830(clockid_t a1, struct timespec *a2)
{
  int v2; // w0
  int v4; // w0

  if ( off_48F788 )
  {
    v2 = off_48F788();
    if ( v2 )
    {
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -v2;
      return 0xFFFFFFFFLL;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v4 = linux_eabi_syscall(__NR_clock_gettime, a1, a2);
    if ( v4 )
    {
      if ( v4 == -38 )
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 38;
      else
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -v4;
      return 0xFFFFFFFFLL;
    }
    else
    {
      return 0;
    }
  }
}
