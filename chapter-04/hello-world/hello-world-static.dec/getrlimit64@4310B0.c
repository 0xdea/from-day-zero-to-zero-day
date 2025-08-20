unsigned __int64 __fastcall getrlimit64(enum __rlimit_resource a1, struct rlimit64 *a2)
{
  unsigned __int64 result; // x0
  int v3; // w3

  result = linux_eabi_syscall(__NR_prlimit64, 0, a1, 0, a2);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    v3 = -(int)result;
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v3;
  }
  return result;
}
