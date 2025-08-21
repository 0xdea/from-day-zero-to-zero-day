__int64 __fastcall sub_443F80(int a1, const char *a2, struct stat *a3, int a4)
{
  unsigned int v4; // w0
  __int64 result; // x0
  int v6; // w1

  v4 = linux_eabi_syscall(__NR_fstatat, a1, a2, a3, a4);
  if ( v4 <= 0xFFFFF000 )
    return 0;
  v6 = -v4;
  result = 0xFFFFFFFFLL;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v6;
  return result;
}
