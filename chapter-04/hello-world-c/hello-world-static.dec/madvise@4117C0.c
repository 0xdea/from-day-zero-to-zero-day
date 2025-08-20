unsigned __int64 __fastcall madvise(void *a1, size_t a2, int a3)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_madvise, a1, a2, a3);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
    return _syscall_error();
  return result;
}
