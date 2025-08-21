__int64 sub_43A0A0()
{
  __int64 v0; // x1
  __int64 v1; // x2
  __int64 v2; // x3
  void *v3; // x4
  void *v4; // x5
  void *v5; // x6
  __int64 *v6; // x22
  unsigned __int64 v7; // x21
  __int64 *v8; // x19
  void *v9; // x4
  void *v10; // x5
  void *v11; // x6
  unsigned __int64 v12; // x0
  void *v13; // x4
  void *v14; // x5
  void *v15; // x6
  unsigned __int64 v16; // x0
  __int64 result; // x0

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_4967B8) )
    sub_406F40(dword_4967B8, v0, v1, v2, v3, v4, v5);
  v6 = &qword_4967F0;
  v7 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v8 = (__int64 *)qword_4967F0;
  if ( (__int64 *)qword_4967F0 != &qword_4967F0 )
    goto LABEL_4;
  while ( 1 )
  {
    v6 = &qword_4967E0;
    v8 = (__int64 *)qword_4967E0;
    if ( (__int64 *)qword_4967E0 == &qword_4967E0 )
      break;
    while ( (__int64 *)v7 == v8 - 24
         || !*((_DWORD *)v8 - 47)
         || _aarch64_cas4_acq(1u, 2u, (atomic_uint *)((char *)v8 - 188)) != 1 )
    {
LABEL_24:
      v8 = (__int64 *)*v8;
      if ( v8 == &qword_4967E0 )
        goto LABEL_25;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = linux_eabi_syscall(__NR_futex, (char *)v8 - 188, (void *)0x80, (void *)2, 0, v13, v14, v15);
        if ( v16 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v16 != -11 )
          break;
        if ( *((_DWORD *)v8 - 47) != 2 )
          goto LABEL_24;
      }
      if ( (_DWORD)v16 != -4 )
        break;
      if ( *((_DWORD *)v8 - 47) != 2 )
        goto LABEL_24;
    }
LABEL_12:
    sub_401A30("The futex facility returned an unexpected error code.\n");
LABEL_13:
    while ( 1 )
    {
      v8 = (__int64 *)*v8;
      if ( v8 == v6 )
        break;
LABEL_4:
      if ( (__int64 *)v7 != v8 - 24
        && *((_DWORD *)v8 - 47)
        && _aarch64_cas4_acq(1u, 2u, (atomic_uint *)((char *)v8 - 188)) == 1 )
      {
        while ( 1 )
        {
          v12 = linux_eabi_syscall(__NR_futex, (char *)v8 - 188, (void *)0x80, (void *)2, 0, v9, v10, v11);
          if ( v12 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v12 != -11 && (_DWORD)v12 != -4 )
            goto LABEL_12;
          if ( *((_DWORD *)v8 - 47) != 2 )
            goto LABEL_13;
        }
      }
    }
  }
LABEL_25:
  result = _aarch64_swp4_rel(0, (atomic_uint *)dword_4967B8);
  if ( (int)result > 1 )
    return sub_407040(dword_4967B8);
  return result;
}
