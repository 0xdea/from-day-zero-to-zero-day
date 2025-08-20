unsigned __int64 __fastcall sub_410EE0(const char *a1, int a2)
{
  unsigned __int64 result; // x0
  int v3; // w3

  if ( (a2 & 0x40) == 0 && (a2 & ((a2 & 0x40) + 4210688)) != 0x404000 )
  {
    result = linux_eabi_syscall(__NR_openat, -100, a1, a2);
    if ( result <= 0xFFFFFFFFFFFFF000LL )
      return result;
LABEL_6:
    v3 = -(int)result;
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v3;
    return result;
  }
  result = linux_eabi_syscall(__NR_openat, -100, a1, a2);
  if ( result > 0xFFFFFFFFFFFFF000LL )
    goto LABEL_6;
  return result;
}
