__int64 __fastcall brk(void *a1)
{
  __int64 result; // x0

  _curbrk = linux_eabi_syscall(__NR_brk, a1);
  if ( (unsigned __int64)a1 <= _curbrk )
    return 0;
  result = 0xFFFFFFFFLL;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
  return result;
}
