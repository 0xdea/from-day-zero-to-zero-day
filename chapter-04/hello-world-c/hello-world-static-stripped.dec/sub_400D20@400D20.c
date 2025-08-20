unsigned __int64 sub_400D20()
{
  __int64 *v0; // x28
  unsigned __int64 v1; // x0
  unsigned __int64 v2; // x2
  __int64 v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  _QWORD *v7; // x19
  __int64 *v8; // x4
  __int64 v9; // x0
  __int64 v10; // x27
  unsigned __int64 result; // x0
  ssize_t v12; // x0
  signed __int64 v13; // x0
  __int64 v14; // x7
  unsigned __int64 v15; // x22
  unsigned __int64 v16; // x25
  __int64 v17; // x20
  unsigned __int64 v18; // x24
  __int64 v19; // x21
  unsigned __int64 v20; // x27
  __int64 v21; // [xsp+60h] [xbp+60h]
  __int64 v22; // [xsp+68h] [xbp+68h]
  __int64 v23; // [xsp+70h] [xbp+70h]
  __int64 v24; // [xsp+78h] [xbp+78h]

  v0 = off_4914A8;
  sub_412ED0();
  v1 = qword_496760;
  v2 = qword_496760 + 56 * qword_496768;
  if ( qword_496760 < v2 )
  {
    while ( *(_DWORD *)v1 != 7 )
    {
      v1 += 56LL;
      if ( v1 >= v2 )
      {
        v19 = 0;
        sub_412760(0);
        v20 = 0;
        v21 = 0;
        goto LABEL_18;
      }
    }
    v20 = *(_QWORD *)(v1 + 40);
    v18 = *(_QWORD *)(v1 + 48);
    v17 = 32;
    if ( v18 >= 0x20 )
      v17 = *(_QWORD *)(v1 + 48);
    v23 = v17 - 1;
    v21 = *(_QWORD *)(v1 + 32);
    if ( v18 )
      v15 = *(_QWORD *)(v1 + 48);
    else
      v15 = 1;
    v19 = *v0 + *(_QWORD *)(v1 + 16);
    v24 = -v17;
    sub_412760(0);
    if ( v18 )
    {
      v16 = (v18 + 15) / v18 * v15;
      v14 = v16;
      goto LABEL_12;
    }
LABEL_18:
    v14 = 16;
    v15 = 1;
    v16 = 16;
    v17 = 32;
    v18 = 0;
    v24 = -32;
    v23 = 31;
  }
  else
  {
    sub_412760(0);
    v14 = 16;
    v15 = 1;
    v16 = 16;
    v17 = 32;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v24 = -32;
    v23 = 31;
  }
LABEL_12:
  v22 = v14;
  v3 = sub_414730(qword_491988 + 1856 + v20 + v17 + v16);
  if ( !v3 )
  {
    v12 = linux_eabi_syscall(__NR_write, 2, "Fatal glibc error: Cannot allocate TLS block\n", 0x2Du);
    v13 = linux_eabi_syscall(
            __NR_exit_group,
            (void *)0x7F,
            "Fatal glibc error: Cannot allocate TLS block\n",
            (void *)0x2D,
            0,
            v4,
            v5,
            v6);
  }
  v0[146] = v22;
  v7 = (_QWORD *)((v3 + 1856 + v23) & v24);
  qword_491990 = 62;
  qword_4919B0 = (__int64)v7 + v16;
  qword_4919B8 = 0;
  j_ifunc_40DC90();
  *v7 = &unk_4919A0;
  _WriteStatusReg(TPIDR_EL0, (unsigned __int64)v7);
  sub_412F04();
  qword_491DB8 = (__int64)v0;
  v8 = v0 + 141;
  qword_491D90 = 64;
  qword_4921C0 = v17;
  qword_4921C8 = 1;
  v8[2] = v20;
  v8[3] = v18;
  if ( v18 )
    v20 = v20 + v18 - 1;
  v9 = qword_491988;
  qword_4921A0 = 1;
  qword_4921A8 = (__int64)&qword_491D90;
  *v8 = v19;
  v0[142] = v21;
  v10 = v16 + v20 / v15 * v15;
  v0[147] = 1;
  result = (v9 + 31 + v10) & 0xFFFFFFFFFFFFFFE0LL;
  qword_4921B0 = result;
  qword_4921B8 = v10;
  return result;
}
