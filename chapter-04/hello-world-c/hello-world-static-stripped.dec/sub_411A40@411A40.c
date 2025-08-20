unsigned __int64 __fastcall sub_411A40(int a1, void *a2, void *a3)
{
  unsigned __int64 result; // x0
  int v4; // w3

  result = linux_eabi_syscall(__NR_prctl, a1, a2, a3);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    v4 = -(int)result;
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v4;
  }
  return result;
}
