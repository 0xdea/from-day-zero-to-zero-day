__int64 __fastcall open64(const char *a1, int a2)
{
  int v3; // w19
  unsigned __int64 v4; // x0
  unsigned int v5; // w19
  unsigned int v7; // w4
  unsigned __int64 v8; // x0

  if ( (a2 & 0x40) != 0 || (a2 & ((a2 & 0x40) + 4210688)) == 0x404000 )
  {
    v3 = a2;
    if ( _libc_single_threaded )
    {
LABEL_4:
      v4 = linux_eabi_syscall(__NR_openat, -100, a1, v3);
      if ( v4 > 0xFFFFFFFFFFFFF000LL )
      {
        v5 = -1;
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -(int)v4;
      }
      else
      {
        return (unsigned int)v4;
      }
      return v5;
    }
  }
  else
  {
    v3 = a2;
    if ( _libc_single_threaded )
      goto LABEL_4;
  }
  v7 = _pthread_enable_asynccancel();
  v8 = linux_eabi_syscall(__NR_openat, -100, a1, v3);
  if ( v8 > 0xFFFFFFFFFFFFF000LL )
  {
    v5 = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -(int)v8;
  }
  else
  {
    v5 = v8;
  }
  _pthread_disable_asynccancel(v7);
  return v5;
}
