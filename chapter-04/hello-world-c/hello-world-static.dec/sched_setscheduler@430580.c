unsigned __int64 __fastcall sched_setscheduler(__pid_t a1, int a2, const struct sched_param *a3)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_sched_setscheduler, a1, a2, a3);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
    return _syscall_error(result);
  return result;
}
