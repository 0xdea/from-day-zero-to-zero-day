__int64 __fastcall openat64(int a1, const char *a2, int a3)
{
  int v4; // w20
  int v5; // w19
  unsigned __int64 v6; // x0
  unsigned int v7; // w19
  unsigned int v9; // w4
  unsigned __int64 v10; // x0

  if ( (a3 & 0x40) != 0 || (a3 & ((a3 & 0x40) + 4210688)) == 0x404000 )
  {
    v4 = a1;
    v5 = a3;
    if ( _libc_single_threaded )
    {
LABEL_4:
      v6 = linux_eabi_syscall(__NR_openat, v4, a2, v5);
      if ( v6 > 0xFFFFFFFFFFFFF000LL )
      {
        v7 = -1;
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -(int)v6;
      }
      else
      {
        return (unsigned int)v6;
      }
      return v7;
    }
  }
  else
  {
    v4 = a1;
    v5 = a3;
    if ( _libc_single_threaded )
      goto LABEL_4;
  }
  v9 = _pthread_enable_asynccancel();
  v10 = linux_eabi_syscall(__NR_openat, v4, a2, v5);
  if ( v10 > 0xFFFFFFFFFFFFF000LL )
  {
    v7 = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -(int)v10;
  }
  else
  {
    v7 = v10;
  }
  _pthread_disable_asynccancel(v9);
  return v7;
}
