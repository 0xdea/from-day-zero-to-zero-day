unsigned __int64 __fastcall sub_430270(int a1, void *a2, unsigned __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  unsigned __int64 result; // x0
  int v8; // w3

  if ( a3 > 0x7FFFFFFF )
    a3 = 0x7FFFFFFF;
  result = linux_eabi_syscall(__NR_getdents64, (void *)a1, a2, (void *)a3, (void *)0x7FFFFFFF, a5, a6, a7);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    v8 = -(int)result;
    result = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v8;
  }
  return result;
}
