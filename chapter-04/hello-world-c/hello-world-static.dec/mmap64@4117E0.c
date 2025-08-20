unsigned __int64 __fastcall mmap64(void *a1, size_t a2, int a3, int a4, int a5, __off_t a6)
{
  unsigned __int64 result; // x0
  int v7; // w3

  if ( (a6 & 0xFFF) != 0 )
  {
    result = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  }
  else
  {
    result = (unsigned __int64)linux_eabi_syscall(__NR_mmap, a1, a2, a3, a4, a5, a6);
    if ( result > 0xFFFFFFFFFFFFF000LL )
    {
      v7 = -(int)result;
      result = -1;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v7;
    }
  }
  return result;
}
