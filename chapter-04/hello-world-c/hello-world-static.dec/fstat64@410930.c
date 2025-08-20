unsigned __int64 __fastcall fstat64(int a1, struct stat *a2)
{
  unsigned __int64 result; // x0
  int v3; // w3

  result = linux_eabi_syscall(__NR_fstat, a1, a2);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    v3 = -(int)result;
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v3;
  }
  return result;
}
