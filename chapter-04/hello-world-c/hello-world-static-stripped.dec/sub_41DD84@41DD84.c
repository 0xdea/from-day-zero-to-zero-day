__int64 __fastcall sub_41DD84(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, int a5)
{
  __int64 v5; // x23
  __int64 v6; // x24
  __int64 v7; // x25
  __int64 v8; // x26
  __int64 v9; // x19
  unsigned __int16 v14; // w25
  unsigned __int16 v15; // w26
  __int64 v16; // x20
  unsigned int v17; // w21
  __int64 v19; // x2
  void *v20; // x5
  void *v21; // x6
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  void *v30; // x4
  __int64 v31; // x28
  void *v32; // x3
  __int64 v33; // x26
  __int64 v34; // x28
  __int64 v35; // x1
  _BOOL4 v36; // w0
  __int64 v37; // x25
  __int64 v38; // x3
  _WORD *v39; // x20
  __int64 v40; // x0
  unsigned __int64 v41; // x23
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  unsigned int v46; // w0
  double v47; // d0
  double v48; // d1
  double v49; // d2
  double v50; // d3
  double v51; // d4
  double v52; // d5
  double v53; // d6
  double v54; // d7
  void *v55; // x4
  unsigned int v56; // w20
  __int64 v57; // x3
  __int64 v58; // x0
  __int64 v59; // x4
  __int64 v60; // x1
  __int64 v61; // x5
  int v62; // w19
  __int64 v63; // x0
  __int64 v64; // x0
  _WORD *v65; // x27
  unsigned int v66; // w0
  __int64 v67; // x0
  __int64 v68; // x3
  void *v69; // x4
  unsigned __int16 *v70; // x8
  __int64 v71; // x2
  __int64 v72; // x19
  int v73; // w23
  int v74; // w0
  double v75; // d0
  double v76; // d1
  double v77; // d2
  double v78; // d3
  double v79; // d4
  double v80; // d5
  double v81; // d6
  double v82; // d7
  __int64 v83; // x2
  unsigned __int16 *v84; // x8
  _BYTE *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x7
  void *v88; // [xsp+0h] [xbp-50h]
  unsigned __int16 *v89; // [xsp+0h] [xbp-50h]
  void *v90; // [xsp+8h] [xbp-48h]
  void *v91; // [xsp+8h] [xbp-48h]
  __int64 v92; // [xsp+8h] [xbp-48h]
  __int64 v93; // [xsp+8h] [xbp-48h]
  __int64 v94; // [xsp+10h] [xbp-40h]
  __int64 v95; // [xsp+10h] [xbp-40h]
  void *v96; // [xsp+10h] [xbp-40h]
  unsigned __int16 *v97; // [xsp+18h] [xbp-38h]
  __int64 v98; // [xsp+20h] [xbp-30h]
  unsigned __int64 v99; // [xsp+28h] [xbp-28h]
  void *v100; // [xsp+38h] [xbp-18h] BYREF
  void *v101; // [xsp+40h] [xbp-10h] BYREF
  __int64 v102; // [xsp+48h] [xbp-8h]
  __int64 vars30; // [xsp+80h] [xbp+30h]
  __int64 vars38; // [xsp+88h] [xbp+38h]
  __int64 vars40; // [xsp+90h] [xbp+40h]
  __int64 vars48; // [xsp+98h] [xbp+48h]

  v9 = qword_496898;
  v102 = qword_48DD60;
  if ( !qword_496898 )
  {
    v17 = 2;
    goto LABEL_5;
  }
  v14 = *(_WORD *)(qword_496898 + 4);
  v15 = *(_WORD *)(qword_496898 + 10);
  if ( (unsigned int)sub_41D830(a2, &v100) )
    goto LABEL_4;
  v88 = v100;
  v16 = 12LL * ((_QWORD)v100 + 1);
  if ( (unsigned __int64)*(unsigned __int16 *)(v9 + 10) + v16 > qword_4968A0 )
    goto LABEL_4;
  v17 = sub_41D830(a1, &v101);
  if ( v17 )
    goto LABEL_4;
  v30 = v101;
  v31 = 12LL * ((_QWORD)v101 + 1);
  if ( (unsigned __int64)*(unsigned __int16 *)(v9 + 10) + v31 > qword_4968A0 )
    goto LABEL_4;
  v32 = v88;
  v33 = v9 + v15;
  v34 = v31 - 12;
  v35 = v33 + v34;
  v36 = v88 == v101;
  v89 = (unsigned __int16 *)(v33 + v34);
  if ( (a5 & v36) != 0 )
    goto LABEL_48;
  v37 = v9 + v14;
  if ( !v32 )
  {
    if ( v101 && *(_WORD *)(v33 + v34 + 8) )
    {
      v58 = sub_40B890(0xD0u, v22, v23, v24, v25, v26, v27, v28, v29, v35, v19, 0, v101, v20, v21);
      v41 = v58;
      if ( v58 )
      {
        LODWORD(v57) = 0;
        *a3 = v58;
        *a4 = 0;
        goto LABEL_23;
      }
      goto LABEL_49;
    }
LABEL_4:
    v5 = vars30;
    v6 = vars38;
    v17 = 1;
    v7 = vars40;
    v8 = vars48;
    goto LABEL_5;
  }
  v38 = v16 - 12;
  v39 = (_WORD *)(v33 + v16 - 12);
  if ( !v101 )
  {
    if ( !v39[2] )
      goto LABEL_4;
    goto LABEL_13;
  }
  if ( !v39[5]
    || (v19 = qword_496898,
        v35 = *(unsigned __int16 *)(v9 + 12) - 1LL,
        v65 = (_WORD *)(qword_496898 + v35 + (unsigned __int16)v39[5]),
        v66 = (unsigned __int16)*v65,
        !*v65) )
  {
LABEL_27:
    if ( !v39[2] )
      goto LABEL_4;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v19 = 2LL * (int)(v66 - 1);
    v35 = (unsigned __int16)v65[3 * (v66 - 1) + 1];
    if ( v101 == (void *)v35 )
      break;
    v65 += 3 * v66 + 1;
    v66 = (unsigned __int16)*v65;
    if ( !*v65 )
      goto LABEL_27;
  }
  *a4 = v66;
  v91 = v30;
  v95 = v38;
  v67 = sub_40B890(104LL * v66, v22, v23, v24, v25, v26, v27, v28, v29, 104, v66, v38, v30, v20, v21);
  *a3 = v67;
  v99 = v67;
  v69 = v91;
  v68 = v95;
  if ( !v67 )
    goto LABEL_49;
  v70 = v65 + 1;
  v71 = v67;
  v72 = v37 + *(unsigned __int16 *)(v33 + v95);
  v73 = 0;
  while ( 1 )
  {
    v96 = v69;
    v97 = v70;
    v85 = (_BYTE *)(v37 + v70[1]);
    v86 = v37 + v70[2];
    v98 = v68;
    v87 = *(unsigned __int16 *)(v33 + 12LL * *v70);
    *(_DWORD *)(v71 + 16) = 1;
    *(_QWORD *)(v71 + 24) = v72;
    v72 = v37 + v87;
    *(_QWORD *)(v71 + 32) = v37 + v87;
    *(_QWORD *)(v71 + 96) = 0;
    if ( !*v85 )
    {
      v93 = v71;
      sub_417350(v86, v71);
      v83 = v93;
      v69 = v96;
      v84 = v97;
      v68 = v98;
      goto LABEL_42;
    }
    v92 = v71;
    v74 = sub_41D920((__int64)v85, v86, (_QWORD *)v71);
    v83 = v92;
    v69 = v96;
    v84 = v97;
    v68 = v98;
    if ( v74 )
      break;
LABEL_42:
    ++v73;
    v71 = v83 + 104;
    v70 = v84 + 3;
    if ( (unsigned __int16)*v65 <= v73 )
      goto LABEL_17;
  }
  sub_40C1A0(v99, v75, v76, v77, v78, v79, v80, v81, v82);
  v30 = v96;
  v38 = v98;
  if ( !v39[2] )
    goto LABEL_4;
LABEL_28:
  if ( !v89[4] )
    goto LABEL_4;
LABEL_13:
  v90 = v30;
  v94 = v38;
  v40 = sub_40B890(0xD0u, v22, v23, v24, v25, v26, v27, v28, v29, v35, v19, v38, v30, v20, v21);
  v41 = v40;
  if ( !v40 )
  {
LABEL_49:
    v5 = vars30;
    v6 = vars38;
    v17 = 3;
    v7 = vars40;
    v8 = vars48;
    goto LABEL_5;
  }
  v42 = (unsigned __int16)v39[3];
  v43 = *(unsigned __int16 *)(v33 + v94);
  *(_DWORD *)(v40 + 16) = 1;
  *(_QWORD *)(v40 + 24) = v37 + v43;
  *(_QWORD *)(v40 + 32) = "INTERNAL";
  v44 = (unsigned __int16)v39[4];
  *a3 = v40;
  *a4 = 0;
  v45 = v37 + v44;
  *(_QWORD *)(v40 + 96) = 0;
  if ( *(_BYTE *)(v37 + v42) )
  {
    v46 = sub_41D920(v37 + v42, v45, (_QWORD *)v40);
    v55 = v90;
    v56 = v46;
    if ( !v46 )
      goto LABEL_16;
LABEL_34:
    v17 = v56;
    sub_40C1A0(v41, v47, v48, v49, v50, v51, v52, v53, v54);
    v5 = vars30;
    v6 = vars38;
    v7 = vars40;
    v8 = vars48;
    goto LABEL_5;
  }
  sub_417350(v45, v40);
  v55 = v90;
LABEL_16:
  v57 = *a4 + 1;
  *a4 = v57;
  if ( !v55 )
  {
LABEL_17:
    v5 = vars30;
    v6 = vars38;
    v7 = vars40;
    v8 = vars48;
    goto LABEL_5;
  }
LABEL_23:
  v59 = v37 + *(unsigned __int16 *)(v33 + v34);
  v60 = v41 + 104LL * (int)v57;
  v61 = v89[1];
  v62 = v57;
  v63 = v89[2];
  *(_DWORD *)(v60 + 16) = 1;
  *(_QWORD *)(v60 + 24) = "INTERNAL";
  *(_QWORD *)(v60 + 32) = v59;
  v64 = v37 + v63;
  *(_QWORD *)(v60 + 96) = 0;
  if ( *(_BYTE *)(v37 + v61) )
  {
    v56 = sub_41D920(v37 + v61, v64, (_QWORD *)v60);
    if ( v56 )
    {
      if ( v62 )
        sub_415560(v41);
      goto LABEL_34;
    }
  }
  else
  {
    sub_417350(v64, v60);
  }
  v5 = vars30;
  v6 = vars38;
  v7 = vars40;
  v8 = vars48;
  ++*a4;
LABEL_5:
  while ( v102 != qword_48DD60 )
  {
    vars30 = v5;
    vars38 = v6;
    vars40 = v7;
    vars48 = v8;
    sub_412340();
LABEL_48:
    v5 = vars30;
    v6 = vars38;
    v17 = -1;
    v7 = vars40;
    v8 = vars48;
  }
  return v17;
}
