unsigned __int64 __fastcall _fcntl64_nocancel(
        int a1,
        int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 result; // x0
  unsigned int v10; // w0
  int v11; // w1
  int v12; // w3
  int v13; // [xsp+0h] [xbp-30h] BYREF
  unsigned int v14; // [xsp+4h] [xbp-2Ch]
  char *v15; // [xsp+8h] [xbp-28h]
  char *v16; // [xsp+10h] [xbp-20h]
  char *v17; // [xsp+18h] [xbp-18h]
  int v18; // [xsp+20h] [xbp-10h]
  int v19; // [xsp+24h] [xbp-Ch]
  char v20; // [xsp+40h] [xbp+10h] BYREF
  void *v21; // [xsp+48h] [xbp+18h]

  v21 = a3;
  v15 = &a9;
  v16 = &a9;
  v17 = &v20;
  v18 = -8;
  v19 = 0;
  if ( a2 == 9 )
  {
    v10 = linux_eabi_syscall(__NR_fcntl, a1, 16, &v13);
    if ( v10 > 0xFFFFF000 )
    {
      v11 = -v10;
      result = 0xFFFFFFFFLL;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v11;
    }
    else if ( v13 == 2 )
    {
      return -v14;
    }
    else
    {
      return v14;
    }
  }
  else
  {
    result = linux_eabi_syscall(__NR_fcntl, a1, a2, a3);
    if ( result > 0xFFFFFFFFFFFFF000LL )
    {
      v12 = -(int)result;
      result = 0xFFFFFFFFLL;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v12;
    }
  }
  return result;
}
