unsigned __int64 __fastcall sched_getparam(__pid_t a1, struct sched_param *a2)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_sched_getparam, a1, a2);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
    return _syscall_error(result);
  return result;
}
