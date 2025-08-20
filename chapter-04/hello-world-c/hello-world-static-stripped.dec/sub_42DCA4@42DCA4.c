__int64 __fastcall sub_42DCA4(unsigned int *a1, void (__fastcall *a2)(__int64))
{
  unsigned int v4; // w19
  unsigned int v5; // w22
  unsigned int v6; // w0
  void *v7; // x4
  void *v8; // x5
  void *v9; // x6
  double v10; // d0
  double v11; // d1
  double v12; // d2
  double v13; // d3
  double v14; // d4
  double v15; // d5
  double v16; // d6
  double v17; // d7
  bool v18; // zf
  unsigned __int64 v19; // x0
  __int64 v20; // x0
  void *v21; // x4
  void *v22; // x5
  void *v23; // x6
  unsigned __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x19
  __int64 v27; // x20
  __int64 v28; // x21
  __int64 v29; // x22
  char v30; // w2
  _QWORD v32[2]; // [xsp+0h] [xbp-60h] BYREF
  int v33; // [xsp+10h] [xbp-50h]
  _BYTE v34[32]; // [xsp+14h] [xbp-4Ch] BYREF
  int v35; // [xsp+34h] [xbp-2Ch]
  __int64 v36; // [xsp+38h] [xbp-28h]
  __int64 v37; // [xsp+40h] [xbp-20h]
  __int64 v38; // [xsp+48h] [xbp-18h]
  __int64 v39; // [xsp+50h] [xbp-10h]
  __int64 v40; // [xsp+58h] [xbp-8h]
  __int64 vars0; // [xsp+60h] [xbp+0h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v30 = atomic_load(a1);
  if ( (v30 & 2) != 0 )
    return 0;
  v37 = vars0;
  v38 = vars8;
  v39 = v26;
  v40 = v27;
  vars0 = v28;
  vars8 = v29;
  v36 = qword_48DD60;
  while ( 1 )
  {
    v4 = atomic_load(a1);
    do
    {
      if ( (v4 & 2) != 0 )
        goto LABEL_6;
      v5 = qword_4969A0 | 1;
      v6 = _aarch64_cas4_acq(v4, qword_4969A0 | 1, (atomic_uint *)a1);
      v18 = v6 == v4;
      v4 = v6;
    }
    while ( !v18 );
    if ( ((unsigned __int8)v6 & (v5 == v6)) == 0 )
      break;
    v19 = linux_eabi_syscall(__NR_futex, a1, (void *)0x80, (void *)v5, 0, v7, v8, v9);
    if ( v19 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v19 != -11 && (_DWORD)v19 != -4 )
      goto LABEL_14;
  }
  v32[0] = sub_42DC60;
  v32[1] = a1;
  memset(v34, 0, sizeof(v34));
  v33 = 1;
  v35 = 0;
  v20 = sub_4424E0(&v34[4], sub_42DC30, v32);
  a2(v20);
  sub_442510(&v34[4], 0);
  atomic_store(2u, a1);
  v24 = linux_eabi_syscall(__NR_futex, a1, (void *)0x81, (void *)0x7FFFFFFF, 0, v21, v22, v23);
  if ( v24 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v24 + 22) & 0xFFFFFFF7) != 0 )
  {
LABEL_14:
    if ( v36 == qword_48DD60 )
      sub_401A30(
        (__int64)"The futex facility returned an unexpected error code.\n",
        v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    goto LABEL_19;
  }
LABEL_6:
  if ( v36 == qword_48DD60 )
    return 0;
LABEL_19:
  sub_412340();
  v25 = sub_450A44(a1);
  return sub_42DC30(v25);
}
