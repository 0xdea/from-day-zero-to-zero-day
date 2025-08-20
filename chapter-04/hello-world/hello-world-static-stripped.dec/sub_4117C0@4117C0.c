unsigned __int64 __fastcall sub_4117C0(void *a1, size_t a2, int a3)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_madvise, a1, a2, a3);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -(int)result;
    return -1;
  }
  return result;
}
