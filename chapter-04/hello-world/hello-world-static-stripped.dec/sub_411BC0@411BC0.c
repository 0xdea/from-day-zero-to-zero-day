unsigned __int64 __fastcall sub_411BC0(struct sysinfo *a1)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_sysinfo, a1);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -(int)result;
    return -1;
  }
  return result;
}
