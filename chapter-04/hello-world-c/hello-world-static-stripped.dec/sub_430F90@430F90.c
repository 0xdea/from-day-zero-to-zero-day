unsigned __int64 __fastcall sub_430F90(int a1, void *a2, size_t a3, __off64_t a4)
{
  unsigned __int64 result; // x0
  int v5; // w3

  result = linux_eabi_syscall(__NR_pread64, a1, a2, a3, a4);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    v5 = -(int)result;
    result = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v5;
  }
  return result;
}
