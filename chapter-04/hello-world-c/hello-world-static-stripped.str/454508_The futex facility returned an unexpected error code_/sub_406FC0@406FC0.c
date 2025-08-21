__int64 __fastcall sub_406FC0(_DWORD *a1, int a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  __int64 result; // x0
  unsigned __int64 v10; // x0

  if ( *a1 == 2 )
    goto LABEL_3;
  while ( 1 )
  {
    result = _aarch64_swp4_acq(2, a1);
    if ( !(_DWORD)result )
      break;
LABEL_3:
    v10 = linux_eabi_syscall(__NR_futex, a1, (void *)(a2 ^ 0x80), (void *)2, 0, a5, a6, a7);
    if ( v10 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v10 != -11 && (_DWORD)v10 != -4 )
      return sub_401A30("The futex facility returned an unexpected error code.\n");
  }
  return result;
}
