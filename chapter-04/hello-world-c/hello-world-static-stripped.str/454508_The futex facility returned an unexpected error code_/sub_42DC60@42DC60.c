unsigned __int64 __fastcall sub_42DC60(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  unsigned __int64 result; // x0
  unsigned int *v8; // x0
  void (__fastcall *v9)(__int64); // x1
  __int64 v10; // x2
  __int64 v11; // x3

  *a1 = 0;
  result = linux_eabi_syscall(__NR_futex, a1, (void *)0x81, (void *)0x7FFFFFFF, 0, a5, a6, a7);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    result = (unsigned int)(result + 22);
    if ( (result & 0xFFFFFFF7) != 0 )
    {
      v8 = (unsigned int *)sub_401A30("The futex facility returned an unexpected error code.\n");
      return sub_42DCA4(v8, v9, v10, v11);
    }
  }
  return result;
}
