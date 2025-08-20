unsigned __int64 __fastcall _write_nocancel(int a1, const void *a2, size_t a3)
{
  unsigned __int64 result; // x0
  int v4; // w3

  result = linux_eabi_syscall(__NR_write, a1, a2, a3);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    v4 = -(int)result;
    result = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v4;
  }
  return result;
}
