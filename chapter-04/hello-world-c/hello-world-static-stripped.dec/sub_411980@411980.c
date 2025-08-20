unsigned __int64 __fastcall sub_411980(void *a1, size_t a2, size_t a3, char a4)
{
  unsigned __int64 result; // x0
  int v5; // w3

  if ( (a4 & 2) == 0 )
  {
    result = (unsigned __int64)linux_eabi_syscall(__NR_mremap, a1, a2, a3, a4);
    if ( result <= 0xFFFFFFFFFFFFF000LL )
      return result;
LABEL_5:
    v5 = -(int)result;
    result = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v5;
    return result;
  }
  result = (unsigned __int64)linux_eabi_syscall(__NR_mremap, a1, a2, a3, a4);
  if ( result > 0xFFFFFFFFFFFFF000LL )
    goto LABEL_5;
  return result;
}
