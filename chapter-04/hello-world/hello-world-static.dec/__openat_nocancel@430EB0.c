unsigned __int64 __fastcall _openat_nocancel(int a1, const char *a2, int a3)
{
  unsigned __int64 result; // x0
  int v4; // w3

  if ( (a3 & 0x40) == 0 && (a3 & ((a3 & 0x40) + 4210688)) != 0x404000 )
  {
    result = linux_eabi_syscall(__NR_openat, a1, a2, a3);
    if ( result <= 0xFFFFFFFFFFFFF000LL )
      return result;
LABEL_6:
    v4 = -(int)result;
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v4;
    return result;
  }
  result = linux_eabi_syscall(__NR_openat, a1, a2, a3);
  if ( result > 0xFFFFFFFFFFFFF000LL )
    goto LABEL_6;
  return result;
}
