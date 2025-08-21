__int64 *sub_416FD0()
{
  __int64 v0; // x19
  __int64 v1; // x20
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x23
  const char *v5; // x24
  __int64 v6; // x25
  __int64 v7; // x26
  __int64 v8; // x27
  __int64 v9; // x28
  __int64 *result; // x0
  __int64 v11; // x24
  __int16 *v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  long double v16; // q0
  long double v17; // q1
  long double v18; // q2
  long double v19; // q3
  long double v20; // q4
  long double v21; // q5
  long double v22; // q6
  long double v23; // q7
  __int64 v24; // x1
  __int64 i; // x23
  __int64 v26; // x22
  __int64 v27; // x0
  const char *v28; // x21
  char *v29; // x19
  __int64 v30; // x19
  __int64 j; // x27
  unsigned __int64 v32; // x0
  __int64 v33; // x0
  _UNKNOWN **v34; // x19
  long double v35; // q0
  const char *v36; // x20
  __int64 k; // x0
  const char *v38; // x21
  __int64 v39; // x0
  _QWORD *v40; // x19
  __int64 v41; // x23
  int v42; // w0
  __int64 v43; // x0
  int v44; // [xsp+Ch] [xbp-B4h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-B0h]
  _QWORD v46[2]; // [xsp+28h] [xbp-98h] BYREF
  char v47[16]; // [xsp+38h] [xbp-88h] BYREF
  int v48; // [xsp+48h] [xbp-78h]
  __int64 v49; // [xsp+B8h] [xbp-8h]
  __int64 v50; // [xsp+D0h] [xbp+10h]
  __int64 v51; // [xsp+D8h] [xbp+18h]
  __int64 v52; // [xsp+E0h] [xbp+20h]
  __int64 v53; // [xsp+E8h] [xbp+28h]
  __int64 v54; // [xsp+F0h] [xbp+30h]
  const char *v55; // [xsp+F8h] [xbp+38h]
  __int64 v56; // [xsp+100h] [xbp+40h]
  __int64 v57; // [xsp+108h] [xbp+48h]
  __int64 v58; // [xsp+110h] [xbp+50h]
  __int64 v59; // [xsp+118h] [xbp+58h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v44 = *(_DWORD *)(StatusReg + 40);
  v49 = qword_48DD60;
  if ( !(unsigned int)sub_41DA90(&qword_48DD60, 0) )
    goto LABEL_2;
  v58 = v8;
  v50 = v0;
  v51 = v1;
  v52 = v2;
  v53 = v3;
  v54 = v4;
  v11 = 16;
  sub_4163D0();
  v24 = qword_496878;
  for ( i = *(_QWORD *)qword_496878; i; v11 += 16 )
  {
    v26 = *(_QWORD *)(v24 + 8);
    v27 = sub_40B890(v26 + 16, v16, v17, v18, v19, v20, v21, v22, v23, v24, v12, v13, v14, v15);
    v28 = (const char *)v27;
    if ( v27 )
    {
      v29 = (char *)(j_ifunc_40DC90(v27, i, v26) + v26);
      strcpy(v29, "gconv-modules");
      sub_416CC0(v28, i, v26);
      strcpy(v29 + 13, ".d");
      v30 = sub_430130(v28);
      if ( v30 )
      {
LABEL_7:
        for ( j = sub_4302C0(v30); j; j = sub_4302C0(v30) )
        {
          if ( (*(_BYTE *)(j + 18) & 0xF7) != 0 )
            goto LABEL_7;
          v32 = ifunc_40DFD0(j + 19);
          if ( v32 <= 5
            || (unsigned int)sub_42F240(j + 19 + v32 - 5, ".conf")
            || (sub_431DF0(v46, 2, "%s/%s", v28, (const char *)(j + 19)) & 0x80000000) != 0 )
          {
            goto LABEL_7;
          }
          v33 = v46[0];
          if ( !*(_BYTE *)(j + 18) )
          {
            if ( (unsigned int)sub_430D20(v46[0], v47) == -1 || (v48 & 0xF000) != 0x8000 )
              goto LABEL_15;
            v33 = v46[0];
          }
          sub_416CC0(v33, i, v26);
LABEL_15:
          sub_40C1A0(v46[0]);
        }
        sub_430220(v30);
      }
      sub_40C1A0(v28);
    }
    v24 = qword_496878 + v11;
    i = *(_QWORD *)(qword_496878 + v11);
  }
  v34 = &off_491578;
  do
  {
    while ( 1 )
    {
      v46[0] = *v34;
      if ( !sub_431690(v46, &qword_496860, sub_4153B0) )
        break;
      v34 += 7;
      if ( v34 == (_UNKNOWN **)&unk_491818 )
        goto LABEL_23;
    }
    v34 += 7;
    sub_416760(v35);
  }
  while ( v34 != (_UNKNOWN **)&unk_491818 );
LABEL_23:
  v36 = "UCS4//";
  for ( k = 6; ; k = ifunc_40DFD0(v41) )
  {
    v38 = &v36[k + 1];
    v39 = ifunc_40DFD0(v38);
    v40 = (_QWORD *)qword_496858;
    v5 = &v38[v39];
    v41 = (__int64)&v38[v39 + 1];
LABEL_25:
    if ( v40 )
    {
      while ( 1 )
      {
        v42 = sub_42F240(v36, *v40);
        if ( !v42 )
          break;
        if ( v42 < 0 )
        {
          v40 = (_QWORD *)v40[4];
          goto LABEL_25;
        }
        v40 = (_QWORD *)v40[6];
        if ( !v40 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      sub_416C00(v36, v38, v41);
    }
    if ( !v5[1] )
      break;
    v36 = (const char *)v41;
  }
  v0 = v50;
  v1 = v51;
  v2 = v52;
  v3 = v53;
  v4 = v54;
  v8 = v58;
LABEL_2:
  result = &qword_48DD60;
  *(_DWORD *)(StatusReg + 40) = v44;
  if ( v49 != qword_48DD60 )
  {
    v50 = v0;
    v51 = v1;
    v52 = v2;
    v53 = v3;
    v54 = v4;
    v55 = v5;
    v56 = v6;
    v57 = v7;
    v58 = v8;
    v59 = v9;
    v43 = sub_412340();
    return (__int64 *)sub_4172F0(v43);
  }
  return result;
}
