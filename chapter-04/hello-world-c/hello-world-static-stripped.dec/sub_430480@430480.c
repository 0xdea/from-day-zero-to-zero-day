unsigned __int64 __fastcall sub_430480(__pid_t a1, struct sched_param *a2)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_sched_getparam, a1, a2);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -(int)result;
    return -1;
  }
  return result;
}
