unsigned __int64 __fastcall sub_410D20(
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
  __int64 v9; // x30
  unsigned __int64 result; // x0
  unsigned int v11; // w0
  int v12; // w1
  int v13; // w3
  int v14; // w0
  int v15; // w1
  void *v16; // x2
  unsigned int v17; // w0
  int v18; // w1
  int v19; // w3
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int v23; // [xsp+0h] [xbp-50h] BYREF
  unsigned int v24; // [xsp+4h] [xbp-4Ch]
  __int64 v25; // [xsp+8h] [xbp-48h]
  __int64 *v26; // [xsp+10h] [xbp-40h]
  __int64 v27; // [xsp+18h] [xbp-38h]
  int v28; // [xsp+20h] [xbp-30h] BYREF
  unsigned int v29; // [xsp+24h] [xbp-2Ch]
  char *v30; // [xsp+28h] [xbp-28h]
  char *v31; // [xsp+30h] [xbp-20h]
  char *v32; // [xsp+38h] [xbp-18h]
  int v33; // [xsp+40h] [xbp-10h]
  int v34; // [xsp+44h] [xbp-Ch]
  __int64 v35; // [xsp+48h] [xbp-8h]
  __int64 v36; // [xsp+50h] [xbp+0h] BYREF
  char v37; // [xsp+60h] [xbp+10h] BYREF
  void *v38; // [xsp+68h] [xbp+18h]

  v38 = a3;
  v35 = qword_48DD60;
  v30 = &a9;
  v31 = &a9;
  v32 = &v37;
  v33 = -8;
  v34 = 0;
  if ( a2 == 9 )
  {
    v11 = linux_eabi_syscall(__NR_fcntl, a1, 16, &v28);
    if ( v11 > 0xFFFFF000 )
    {
      v12 = -v11;
      result = 0xFFFFFFFFLL;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v12;
    }
    else if ( v28 == 2 )
    {
      result = -v29;
    }
    else
    {
      result = v29;
    }
  }
  else
  {
    result = linux_eabi_syscall(__NR_fcntl, a1, a2, a3);
    if ( result > 0xFFFFFFFFFFFFF000LL )
    {
      v13 = -(int)result;
      result = 0xFFFFFFFFLL;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v13;
    }
  }
  if ( v35 != qword_48DD60 )
  {
    v14 = sub_412340(result, &qword_48DD60, 0, v35 - qword_48DD60);
    v26 = &v36;
    v27 = v9;
    v25 = qword_48DD60;
    if ( v15 == 9 )
    {
      v17 = linux_eabi_syscall(__NR_fcntl, v14, 16, &v23);
      if ( v17 > 0xFFFFF000 )
      {
        v18 = -v17;
        result = 0xFFFFFFFFLL;
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v18;
      }
      else if ( v23 == 2 )
      {
        result = -v24;
      }
      else
      {
        result = v24;
      }
    }
    else
    {
      result = linux_eabi_syscall(__NR_fcntl, v14, v15, v16);
      if ( result > 0xFFFFFFFFFFFFF000LL )
      {
        v19 = -(int)result;
        result = 0xFFFFFFFFLL;
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v19;
      }
    }
    if ( v25 != qword_48DD60 )
    {
      v20 = sub_412340(result, &qword_48DD60, 0, v25 - qword_48DD60);
      return sub_410EE0(v20, v21, v22);
    }
  }
  return result;
}
