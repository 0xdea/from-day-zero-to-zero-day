__pid_t getpid()
{
  return linux_eabi_syscall(__NR_getpid);
}
