unsigned __int64 __fastcall sched_getscheduler(__pid_t a1)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_sched_getscheduler, a1);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
    return _syscall_error(result);
  return result;
}
