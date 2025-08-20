const char *__fastcall sub_44AA60(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  const char *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v12; // x19
  unsigned __int64 v13; // x1
  int v14; // w3
  const char *v15; // x22
  const char *v16; // x0
  int v17; // w0
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  const char *result; // x0
  const char *v27; // x20
  const char *v28; // x0
  int v29; // w0
  int v30; // w0
  int v31; // w0
  __int64 v32; // x0
  __int64 v33; // x1
  const char *v34; // [xsp+0h] [xbp-10h] BYREF
  __int64 v35; // [xsp+8h] [xbp-8h]
  const char *v36; // [xsp+30h] [xbp+20h]
  __int64 v37; // [xsp+38h] [xbp+28h]
  __int64 v38; // [xsp+40h] [xbp+30h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v35 = qword_48DD60;
  v12 = *(_QWORD *)(StatusReg + 96);
  if ( !v12 )
    goto LABEL_25;
  if ( v12 == -1 )
  {
    result = "out of memory";
    *(_QWORD *)(StatusReg + 96) = 0;
    goto LABEL_10;
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( !v13 )
    goto LABEL_25;
  if ( (*(_BYTE *)(v12 + 5) & 1) != 0 )
  {
    *(_QWORD *)(StatusReg + 96) = 0;
    v31 = *(unsigned __int8 *)(v12 + 4);
    if ( v31 == 1 )
    {
      sub_4323C4(v13, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    else if ( v31 == 2 )
    {
      sub_40C1A0(v13, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    sub_40C1A0(v12, a1, a2, a3, a4, a5, a6, a7, a8);
LABEL_25:
    result = 0;
    goto LABEL_10;
  }
  v14 = *(_DWORD *)v12;
  v37 = v9;
  v8 = *(const char **)(v12 + 8);
  if ( v14 )
  {
    v15 = ": ";
    *(_DWORD *)(StatusReg + 40) = v14;
    if ( !*v8 )
      v15 = "";
    v16 = (const char *)sub_43CBF0((__int64)"libc", v13, 5u);
    v17 = sub_44D280(&v34, "%s%s%s: %m", v8, v15, v16);
    *(_DWORD *)(StatusReg + 40) = *(_DWORD *)v12;
    *(_BYTE *)(v12 + 5) = 1;
    if ( v17 < 0 )
    {
LABEL_9:
      v9 = v37;
      result = *(const char **)(v12 + 16);
      goto LABEL_10;
    }
  }
  else
  {
    v27 = ": ";
    if ( !*v8 )
      v27 = "";
    v28 = (const char *)sub_43CBF0((__int64)"libc", v13, 5u);
    v29 = sub_44D280(&v34, "%s%s%s", v8, v27, v28);
    *(_BYTE *)(v12 + 5) = 1;
    if ( v29 < 0 )
      goto LABEL_9;
  }
  v30 = *(unsigned __int8 *)(v12 + 4);
  if ( v30 == 1 )
  {
    sub_4323C4(*(_QWORD *)(v12 + 16), v18, v19, v20, v21, v22, v23, v24, v25);
  }
  else if ( v30 == 2 )
  {
    sub_40C1A0(*(_QWORD *)(v12 + 16), v18, v19, v20, v21, v22, v23, v24, v25);
  }
  result = v34;
  *(_BYTE *)(v12 + 4) = 2;
  v9 = v37;
  *(_QWORD *)(v12 + 16) = result;
LABEL_10:
  if ( v35 != qword_48DD60 )
  {
    v36 = v8;
    v37 = v9;
    v38 = v10;
    v32 = sub_412340();
    return (const char *)sub_44AC50(v32, v33);
  }
  return result;
}
