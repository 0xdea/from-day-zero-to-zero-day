signed __int64 sub_43A0A0()
{
  __int64 v0; // x1
  __int64 v1; // x2
  __int64 v2; // x3
  void *v3; // x4
  void *v4; // x5
  void *v5; // x6
  double v6; // d0
  double v7; // d1
  double v8; // d2
  double v9; // d3
  double v10; // d4
  double v11; // d5
  double v12; // d6
  double v13; // d7
  unsigned __int64 v14; // x21
  __int64 *v15; // x19
  void *v16; // x4
  void *v17; // x5
  void *v18; // x6
  double v19; // d0
  double v20; // d1
  double v21; // d2
  double v22; // d3
  double v23; // d4
  double v24; // d5
  double v25; // d6
  double v26; // d7
  unsigned __int64 v27; // x0
  __int64 *v28; // x19
  void *v29; // x4
  void *v30; // x5
  void *v31; // x6
  unsigned __int64 v32; // x0
  signed __int64 result; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  void *v37; // x4
  void *v38; // x5
  void *v39; // x6

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_4967B8) )
    sub_406F40(dword_4967B8, v6, v7, v8, v9, v10, v11, v12, v13, v0, v1, v2, v3, v4, v5);
  v14 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v15 = (__int64 *)qword_4967F0;
  if ( (__int64 *)qword_4967F0 != &qword_4967F0 )
  {
    while ( (__int64 *)v14 == v15 - 24
         || !*((_DWORD *)v15 - 47)
         || _aarch64_cas4_acq(1u, 2u, (atomic_uint *)((char *)v15 - 188)) != 1 )
    {
LABEL_13:
      v15 = (__int64 *)*v15;
      if ( v15 == &qword_4967F0 )
        goto LABEL_14;
    }
    while ( 1 )
    {
      v27 = linux_eabi_syscall(__NR_futex, (char *)v15 - 188, (void *)0x80, (void *)2, 0, v16, v17, v18);
      if ( v27 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v27 != -11 && (_DWORD)v27 != -4 )
        break;
      if ( *((_DWORD *)v15 - 47) != 2 )
        goto LABEL_13;
    }
LABEL_12:
    sub_401A30(
      (__int64)"The futex facility returned an unexpected error code.\n",
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
LABEL_14:
  v28 = (__int64 *)qword_4967E0;
  if ( (__int64 *)qword_4967E0 != &qword_4967E0 )
  {
    while ( (__int64 *)v14 == v28 - 24
         || !*((_DWORD *)v28 - 47)
         || _aarch64_cas4_acq(1u, 2u, (atomic_uint *)((char *)v28 - 188)) != 1 )
    {
LABEL_24:
      v28 = (__int64 *)*v28;
      if ( v28 == &qword_4967E0 )
        goto LABEL_25;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v32 = linux_eabi_syscall(__NR_futex, (char *)v28 - 188, (void *)0x80, (void *)2, 0, v29, v30, v31);
        if ( v32 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v32 != -11 )
          break;
        if ( *((_DWORD *)v28 - 47) != 2 )
          goto LABEL_24;
      }
      if ( (_DWORD)v32 != -4 )
        goto LABEL_12;
      if ( *((_DWORD *)v28 - 47) != 2 )
        goto LABEL_24;
    }
  }
LABEL_25:
  result = _aarch64_swp4_rel(0, (atomic_uint *)dword_4967B8);
  if ( (int)result > 1 )
    return sub_407040(dword_4967B8, v34, v35, v36, v37, v38, v39);
  return result;
}
