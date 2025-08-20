unsigned __int64 __fastcall sub_430580(__pid_t a1, int a2, const struct sched_param *a3)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_sched_setscheduler, a1, a2, a3);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -(int)result;
    return -1;
  }
  return result;
}
