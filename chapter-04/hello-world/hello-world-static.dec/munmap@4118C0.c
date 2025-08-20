unsigned __int64 __fastcall munmap(void *a1, size_t a2)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_munmap, a1, a2);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
    return _syscall_error();
  return result;
}
