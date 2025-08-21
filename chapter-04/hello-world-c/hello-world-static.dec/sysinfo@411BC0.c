unsigned __int64 __fastcall sysinfo(struct sysinfo *a1)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_sysinfo, a1);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
    return _syscall_error();
  return result;
}
