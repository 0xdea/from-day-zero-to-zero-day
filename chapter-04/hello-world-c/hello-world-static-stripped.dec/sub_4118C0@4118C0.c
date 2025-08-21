unsigned __int64 __fastcall sub_4118C0(void *a1, size_t a2)
{
  unsigned __int64 result; // x0

  result = linux_eabi_syscall(__NR_munmap, a1, a2);
  if ( result >= 0xFFFFFFFFFFFFF001LL )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -(int)result;
    return -1;
  }
  return result;
}
