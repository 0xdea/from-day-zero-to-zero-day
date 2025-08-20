unsigned __int64 __fastcall lseek64(int a1, __off_t a2, int a3)
{
  unsigned __int64 result; // x0
  int v4; // w3

  result = linux_eabi_syscall(__NR_lseek, a1, a2, a3);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    v4 = -(int)result;
    result = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v4;
  }
  return result;
}
