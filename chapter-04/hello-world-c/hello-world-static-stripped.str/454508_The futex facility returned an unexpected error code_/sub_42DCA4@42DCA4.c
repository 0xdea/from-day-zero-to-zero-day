__int64 __fastcall sub_42DCA4(unsigned int *a1, void (__fastcall *a2)(__int64), __int64 a3, __int64 a4)
{
  unsigned int v6; // w19
  __int64 v7; // x2
  unsigned int v8; // w22
  unsigned int v9; // w0
  void *v10; // x4
  void *v11; // x5
  void *v12; // x6
  bool v13; // zf
  unsigned __int64 v14; // x0
  __int64 v15; // x0
  void *v16; // x4
  void *v17; // x5
  void *v18; // x6
  unsigned __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x19
  __int64 v22; // x20
  __int64 v23; // x21
  __int64 v24; // x22
  char v25; // w2
  _QWORD v27[2]; // [xsp+0h] [xbp-60h] BYREF
  int v28; // [xsp+10h] [xbp-50h]
  _BYTE v29[32]; // [xsp+14h] [xbp-4Ch] BYREF
  int v30; // [xsp+34h] [xbp-2Ch]
  __int64 v31; // [xsp+38h] [xbp-28h]
  __int64 v32; // [xsp+40h] [xbp-20h]
  __int64 v33; // [xsp+48h] [xbp-18h]
  __int64 v34; // [xsp+50h] [xbp-10h]
  __int64 v35; // [xsp+58h] [xbp-8h]
  __int64 vars0; // [xsp+60h] [xbp+0h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v25 = atomic_load(a1);
  if ( (v25 & 2) != 0 )
    return 0;
  v32 = vars0;
  v33 = vars8;
  v34 = v21;
  v35 = v22;
  vars0 = v23;
  vars8 = v24;
  v31 = qword_48DD60;
  while ( 2 )
  {
    v6 = atomic_load(a1);
    do
    {
      if ( (v6 & 2) != 0 )
      {
LABEL_6:
        v7 = v31 - qword_48DD60;
        if ( v31 == qword_48DD60 )
          return 0;
        goto LABEL_19;
      }
      v8 = qword_4969A0 | 1;
      v9 = _aarch64_cas4_acq(v6, qword_4969A0 | 1, (atomic_uint *)a1);
      v13 = v9 == v6;
      v6 = v9;
    }
    while ( !v13 );
    if ( ((unsigned __int8)v9 & (v8 == v9)) == 0 )
      goto LABEL_16;
    a4 = 0;
    v14 = linux_eabi_syscall(__NR_futex, a1, (void *)0x80, (void *)v8, 0, v10, v11, v12);
    if ( v14 <= 0xFFFFFFFFFFFFF000LL || (_DWORD)v14 == -11 || (_DWORD)v14 == -4 )
      continue;
    break;
  }
  while ( 1 )
  {
    v7 = v31 - qword_48DD60;
    if ( v31 != qword_48DD60 )
      break;
    sub_401A30("The futex facility returned an unexpected error code.\n");
LABEL_16:
    v27[0] = sub_42DC60;
    v27[1] = a1;
    memset(v29, 0, sizeof(v29));
    v28 = 1;
    v30 = 0;
    v15 = sub_4424E0(&v29[4], sub_42DC30, v27);
    a2(v15);
    sub_442510(&v29[4], 0);
    atomic_store(2u, a1);
    a4 = 0;
    v19 = linux_eabi_syscall(__NR_futex, a1, (void *)0x81, (void *)0x7FFFFFFF, 0, v16, v17, v18);
    if ( v19 <= 0xFFFFFFFFFFFFF000LL || (((_DWORD)v19 + 22) & 0xFFFFFFF7) == 0 )
      goto LABEL_6;
  }
LABEL_19:
  sub_412340(&qword_48DD60, 0, v7, a4);
  v20 = sub_450A44(a1);
  return sub_42DC30(v20);
}
