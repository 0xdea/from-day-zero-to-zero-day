unsigned __int64 __fastcall sub_410CD0(int a1)
{
  unsigned __int64 result; // x0
  int v2; // w3

  result = linux_eabi_syscall(__NR_close, a1);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    v2 = -(int)result;
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v2;
  }
  return result;
}
