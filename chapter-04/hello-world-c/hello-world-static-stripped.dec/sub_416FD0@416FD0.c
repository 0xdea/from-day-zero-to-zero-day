__int64 *sub_416FD0()
{
  __int64 v0; // x19
  __int64 v1; // x20
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x25
  __int64 v7; // x26
  __int64 v8; // x27
  __int64 v9; // x28
  __int64 *result; // x0
  __int64 v11; // x24
  __int64 v12; // x2
  __int64 v13; // x3
  void *v14; // x4
  void *v15; // x5
  void *v16; // x6
  double v17; // d0
  double v18; // d1
  double v19; // d2
  double v20; // d3
  double v21; // d4
  double v22; // d5
  double v23; // d6
  double v24; // d7
  __int64 v25; // x1
  __int64 i; // x23
  __int64 v27; // x22
  __int64 v28; // x0
  const char *v29; // x21
  char *v30; // x19
  __int64 v31; // x19
  double v32; // d0
  double v33; // d1
  double v34; // d2
  double v35; // d3
  double v36; // d4
  double v37; // d5
  double v38; // d6
  double v39; // d7
  __int64 j; // x27
  unsigned __int64 v41; // x0
  __int64 v42; // x0
  double v43; // d0
  double v44; // d1
  double v45; // d2
  double v46; // d3
  double v47; // d4
  double v48; // d5
  double v49; // d6
  double v50; // d7
  unsigned __int64 *v51; // x19
  __int64 v52; // x0
  const char *v53; // x20
  __int64 k; // x0
  __int64 v55; // x21
  __int64 v56; // x0
  __int64 v57; // x3
  void *v58; // x4
  void *v59; // x5
  void *v60; // x6
  double v61; // d0
  double v62; // d1
  double v63; // d2
  double v64; // d3
  double v65; // d4
  double v66; // d5
  double v67; // d6
  double v68; // d7
  _QWORD *v69; // x19
  __int64 v70; // x23
  int v71; // w0
  __int64 v72; // x0
  int v73; // [xsp+Ch] [xbp-B4h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-B0h]
  unsigned __int64 v75[2]; // [xsp+28h] [xbp-98h] BYREF
  char v76[16]; // [xsp+38h] [xbp-88h] BYREF
  int v77; // [xsp+48h] [xbp-78h]
  __int64 v78; // [xsp+B8h] [xbp-8h]
  __int64 v79; // [xsp+D0h] [xbp+10h]
  __int64 v80; // [xsp+D8h] [xbp+18h]
  __int64 v81; // [xsp+E0h] [xbp+20h]
  __int64 v82; // [xsp+E8h] [xbp+28h]
  __int64 v83; // [xsp+F0h] [xbp+30h]
  __int64 v84; // [xsp+F8h] [xbp+38h]
  __int64 v85; // [xsp+100h] [xbp+40h]
  __int64 v86; // [xsp+108h] [xbp+48h]
  __int64 v87; // [xsp+110h] [xbp+50h]
  __int64 v88; // [xsp+118h] [xbp+58h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v73 = *(_DWORD *)(StatusReg + 40);
  v78 = qword_48DD60;
  if ( !(unsigned int)sub_41DA90(&qword_48DD60, 0) )
    goto LABEL_2;
  v87 = v8;
  v79 = v0;
  v80 = v1;
  v81 = v2;
  v82 = v3;
  v83 = v4;
  v11 = 16;
  sub_4163D0();
  v25 = qword_496878;
  for ( i = *(_QWORD *)qword_496878; i; v11 += 16 )
  {
    v27 = *(_QWORD *)(v25 + 8);
    v28 = sub_40B890(v27 + 16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v12, v13, v14, v15, v16);
    v29 = (const char *)v28;
    if ( v28 )
    {
      v30 = (char *)(j_ifunc_40DC90(v28, i, v27) + v27);
      strcpy(v30, "gconv-modules");
      sub_416CC0((__int64)v29, i, v27);
      strcpy(v30 + 13, ".d");
      v31 = sub_430130(v29);
      if ( v31 )
      {
LABEL_7:
        for ( j = sub_4302C0(v31); j; j = sub_4302C0(v31) )
        {
          if ( (*(_BYTE *)(j + 18) & 0xF7) != 0 )
            goto LABEL_7;
          v41 = ifunc_40DFD0(j + 19);
          if ( v41 <= 5
            || (unsigned int)sub_42F240(j + 19 + v41 - 5, ".conf")
            || (sub_431DF0(v75, 2, "%s/%s", v29, (const char *)(j + 19)) & 0x80000000) != 0 )
          {
            goto LABEL_7;
          }
          v42 = v75[0];
          if ( !*(_BYTE *)(j + 18) )
          {
            if ( (unsigned int)sub_430D20(v75[0], v76) == -1 || (v77 & 0xF000) != 0x8000 )
              goto LABEL_15;
            v42 = v75[0];
          }
          sub_416CC0(v42, i, v27);
LABEL_15:
          sub_40C1A0(v75[0], v43, v44, v45, v46, v47, v48, v49, v50);
        }
        v32 = sub_430220(v31);
      }
      sub_40C1A0((unsigned __int64)v29, v32, v33, v34, v35, v36, v37, v38, v39);
    }
    v25 = qword_496878 + v11;
    i = *(_QWORD *)(qword_496878 + v11);
  }
  v51 = (unsigned __int64 *)&off_491578;
  do
  {
    while ( 1 )
    {
      v75[0] = *v51;
      if ( !sub_431690(v75, &qword_496860, sub_4153B0) )
        break;
      v51 += 7;
      if ( v51 == (unsigned __int64 *)&unk_491818 )
        goto LABEL_23;
    }
    v52 = (__int64)v51;
    v51 += 7;
    sub_416760(v52, 0);
  }
  while ( v51 != (unsigned __int64 *)&unk_491818 );
LABEL_23:
  v53 = "UCS4//";
  for ( k = 6; ; k = ifunc_40DFD0(v70) )
  {
    v55 = (__int64)&v53[k + 1];
    v56 = ifunc_40DFD0(v55);
    v69 = (_QWORD *)qword_496858;
    v5 = v55 + v56;
    v70 = v55 + v56 + 1;
LABEL_25:
    if ( v69 )
    {
      while ( 1 )
      {
        v71 = sub_42F240(v53, *v69);
        if ( !v71 )
          break;
        if ( v71 < 0 )
        {
          v69 = (_QWORD *)v69[4];
          goto LABEL_25;
        }
        v69 = (_QWORD *)v69[6];
        if ( !v69 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      sub_416C00((__int64)v53, v55, v70, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68);
    }
    if ( !*(_BYTE *)(v5 + 1) )
      break;
    v53 = (const char *)v70;
  }
  v0 = v79;
  v1 = v80;
  v2 = v81;
  v3 = v82;
  v4 = v83;
  v8 = v87;
LABEL_2:
  result = &qword_48DD60;
  *(_DWORD *)(StatusReg + 40) = v73;
  if ( v78 != qword_48DD60 )
  {
    v79 = v0;
    v80 = v1;
    v81 = v2;
    v82 = v3;
    v83 = v4;
    v84 = v5;
    v85 = v6;
    v86 = v7;
    v87 = v8;
    v88 = v9;
    v72 = sub_412340();
    return (__int64 *)sub_4172F0(v72);
  }
  return result;
}
