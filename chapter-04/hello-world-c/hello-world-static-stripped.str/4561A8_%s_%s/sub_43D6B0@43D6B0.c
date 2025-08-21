const char *__fastcall sub_43D6B0(char *a1, const char *a2, const char *a3, int a4, __int64 a5, unsigned int a6)
{
  char *v6; // x19
  bool v10; // zf
  const char *v11; // x4
  _QWORD *v14; // x2
  _QWORD *v15; // x28
  int v16; // w0
  const char *v17; // x24
  char *v18; // x19
  _BYTE *v19; // x26
  int v20; // w0
  bool v21; // zf
  _BYTE *v22; // x0
  _BYTE *v23; // x23
  __int64 v24; // x0
  unsigned __int64 v25; // x1
  unsigned __int16 v26; // w0
  _QWORD *v27; // x1
  _WORD *v28; // x0
  __int64 v29; // x19
  __int64 v30; // x0
  unsigned __int64 v31; // x1
  unsigned __int16 v32; // w0
  __int64 *v33; // x1
  int v34; // w0
  bool v35; // zf
  const char *v36; // x0
  int v37; // w24
  const char *v38; // x4
  __int64 v39; // x0
  __int64 v40; // x20
  unsigned __int64 v41; // x21
  const char *v42; // x20
  char *v43; // x1
  int v44; // t1
  int *v46; // x0
  __int64 v47; // x0
  __int64 v48; // x27
  __int64 v49; // x0
  const char *v50; // x4
  const char *v51; // x4
  __int64 v52; // x0
  __int64 v53; // x2
  __int64 v54; // x0
  __int64 v55; // x23
  char *v56; // x25
  __int64 *v57; // x24
  __int64 v58; // x0
  __int64 v59; // x21
  unsigned __int64 v60; // x20
  const char *v61; // x21
  const char *v62; // x22
  __int64 v63; // x0
  __int64 v64; // x25
  __int64 v65; // x0
  __int64 v66; // x23
  unsigned __int64 v67; // x26
  __int16 *v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x5
  long double v72; // q0
  long double v73; // q1
  long double v74; // q2
  long double v75; // q3
  long double v76; // q4
  long double v77; // q5
  long double v78; // q6
  long double v79; // q7
  __int64 v80; // x24
  __int64 v81; // x3
  __int64 v82; // x19
  __int64 v83; // x0
  const char *v84; // x4
  __int64 v85; // x1
  int v86; // w3
  int v87; // w0
  __int64 v89; // [xsp+0h] [xbp-200E0h] BYREF
  char v90; // [xsp+10h] [xbp-200D0h] BYREF
  __int64 v91; // [xsp+400h] [xbp-1FCE0h]
  _QWORD v92[2]; // [xsp+10000h] [xbp-100E0h] BYREF
  _BYTE v93[1008]; // [xsp+10010h] [xbp-100D0h] BYREF
  __int64 v94; // [xsp+10400h] [xbp-FCE0h]
  _BYTE v95[24]; // [xsp+20000h] [xbp-E0h] BYREF
  const char *v96; // [xsp+20018h] [xbp-C8h]
  _BYTE *v97; // [xsp+20020h] [xbp-C0h]
  __int64 v98; // [xsp+20028h] [xbp-B8h]
  __int64 v99; // [xsp+20030h] [xbp-B0h]
  char *v100; // [xsp+20038h] [xbp-A8h]
  int *v101; // [xsp+20040h] [xbp-A0h]
  unsigned __int64 StatusReg; // [xsp+20048h] [xbp-98h]
  __int64 v103; // [xsp+20050h] [xbp-90h]
  const char *v104; // [xsp+20058h] [xbp-88h]
  __int64 v105; // [xsp+20060h] [xbp-80h]
  __int64 *v106; // [xsp+20068h] [xbp-78h]
  int v107; // [xsp+20070h] [xbp-70h]
  int v108; // [xsp+20074h] [xbp-6Ch]
  const char *v109; // [xsp+20078h] [xbp-68h]
  const char *v110; // [xsp+20088h] [xbp-58h] BYREF
  __int64 v111; // [xsp+20090h] [xbp-50h] BYREF
  char *v112; // [xsp+20098h] [xbp-48h] BYREF
  unsigned int v113; // [xsp+200A0h] [xbp-40h]
  __int64 v114; // [xsp+200A8h] [xbp-38h]
  __int64 v115; // [xsp+200B8h] [xbp-28h]
  const char *v116; // [xsp+200D0h] [xbp-10h]
  __int64 v117; // [xsp+200D8h] [xbp-8h]

  v117 = qword_48DD60;
  v104 = a3;
  v105 = a5;
  v108 = a4;
  v110 = 0;
  if ( !a2 )
  {
    v11 = 0;
    goto LABEL_13;
  }
  if ( a6 > 0xC || a6 == 6 )
  {
    if ( a4 )
      v10 = a5 == 1;
    else
      v10 = 1;
    if ( !v10 )
    {
LABEL_49:
      v11 = v104;
      goto LABEL_13;
    }
LABEL_12:
    v11 = a2;
    goto LABEL_13;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v103 = 40;
  v107 = *(_DWORD *)(StatusReg + 40);
  sub_42DD20(dword_4968B8);
  sub_42DD20(dword_496B60);
  v113 = a6;
  v115 = 0;
  v116 = a2;
  if ( !a1 )
    a1 = off_491928;
  v112 = a1;
  v99 = sub_448BF0(a6);
  v114 = v99;
  sub_42DD20(&dword_496B60[14]);
  v6 = (char *)sub_431690(&v112, &qword_496BD0, sub_43CDF0);
  v100 = v6;
  sub_42DFB0(&dword_496B60[14]);
  if ( v6 )
  {
    v14 = *(_QWORD **)v6;
    if ( *(_DWORD *)(*(_QWORD *)v6 + 24LL) == (_DWORD)qword_496940 )
    {
      v38 = (const char *)v14[5];
      if ( v108 )
      {
        v39 = v14[4];
        v109 = (const char *)v14[5];
        v6 = *(char **)(v39 + 16);
        v40 = v14[6];
        v41 = sub_43CC10(*((_QWORD *)v6 + 23), v105);
        v38 = v109;
        if ( v41 < *((_QWORD *)v6 + 24) )
        {
          v42 = &v109[v40];
          v6 = (char *)v109;
          do
          {
            if ( --v41 == -1 )
              goto LABEL_102;
            v6 += ifunc_40DFD0(v6) + 1;
          }
          while ( v6 < v42 );
          v38 = v109;
        }
      }
      goto LABEL_57;
    }
  }
  v15 = (_QWORD *)qword_496BD8;
  if ( qword_496BD8 )
  {
    while ( 1 )
    {
      v16 = sub_42F240(a1, v15 + 3);
      if ( !v16 )
        break;
      if ( v16 < 0 )
      {
        v15 = 0;
        v17 = "/usr/share/locale";
        goto LABEL_25;
      }
      v15 = (_QWORD *)*v15;
      if ( !v15 )
        goto LABEL_53;
    }
    v17 = (const char *)v15[1];
    if ( *v17 == 47 )
      goto LABEL_25;
    v36 = (const char *)sub_4305A0(0, 0);
    v6 = (char *)v36;
    if ( v36 )
    {
      v37 = sub_431DF0(&v110, 2, "%s/%s", v36, v17);
      sub_40C1A0(v6);
      if ( (v37 & 0x80000000) == 0 )
      {
        v17 = v110;
        goto LABEL_25;
      }
    }
LABEL_45:
    sub_40C1A0(v110);
    sub_42DFB0(dword_496B60);
    sub_42DFB0(dword_4968B8);
    *(_DWORD *)(StatusReg + v103) = v107;
    if ( v108 )
      v35 = v105 == 1;
    else
      v35 = 1;
    if ( !v35 )
      goto LABEL_49;
    goto LABEL_12;
  }
LABEL_53:
  v17 = "/usr/share/locale";
LABEL_25:
  v18 = &aLcCollate[(unsigned __int8)asc_45B298[a6]];
  v19 = (_BYTE *)sub_448BF0(a6);
  if ( *v19 == 67 && ((v20 = (unsigned __int8)v19[1], v20 != 46) ? (v21 = v20 == 0) : (v21 = 1), v21)
    || (v22 = (_BYTE *)sub_422890("LANGUAGE"), (v23 = v22) == 0)
    || !*v22 )
  {
    v23 = v19;
  }
  v98 = ifunc_40DFD0(a1);
  v24 = ifunc_40DFD0(v18) + v98 + 20;
  v25 = v24 & 0xFFFFFFFFFFFF0000LL;
  v26 = v24 & 0xFFF0;
  v27 = &v95[-v25];
  if ( v95 != (_BYTE *)v27 )
  {
    do
      v94 = 0;
    while ( v92 != v27 );
  }
  v92[0] = 0;
  if ( v26 >= 0x400uLL )
    v94 = 0;
  v28 = (_WORD *)sub_42EFC0(v93, v18);
  v29 = v98;
  *v28 = 47;
  *(_DWORD *)(j_ifunc_40DC90((char *)v28 + 1, a1, v29) + v29) = 7302446;
  v30 = ifunc_40DFD0(v23) + 16;
  v31 = v30 & 0xFFFFFFFFFFFF0000LL;
  v32 = v30 & 0xFFF0;
  v33 = (_QWORD *)((char *)v92 - v31);
  if ( v92 != v33 )
  {
    do
      v91 = 0;
    while ( &v89 != v33 );
  }
  v89 = 0;
  if ( v32 >= 0x400uLL )
    v91 = 0;
  v109 = "POSIX";
  v6 = &v90;
  v106 = &v111;
  v101 = &dword_491570;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_42:
      while ( 1 )
      {
        v34 = (unsigned __int8)*v23;
        if ( v34 != 58 )
          break;
        ++v23;
      }
      if ( !*v23 )
      {
        *(_WORD *)v6 = 67;
        goto LABEL_45;
      }
      v43 = v6;
      do
      {
        *v43++ = v34;
        v44 = (unsigned __int8)*++v23;
        v34 = v44;
      }
      while ( v44 != 58 && v34 != 0 );
      v46 = v101;
      *v43 = 0;
      if ( !*v46 || !sub_42F180(v6, 47) )
      {
        if ( *v6 == 67 )
        {
          v87 = (unsigned __int8)v6[1];
          if ( v87 == 46 || v87 == 0 )
            goto LABEL_45;
        }
        if ( !(unsigned int)sub_42F240(v6, v109) )
          goto LABEL_45;
        v47 = sub_41F380(v17, v6, v93, v15);
        v48 = v47;
        if ( v47 )
          break;
      }
    }
    v49 = sub_43CE70(v47, v15, a2, 1, v106);
    v50 = (const char *)v49;
    if ( v49 )
      break;
    v54 = *(_QWORD *)(v48 + 32);
    if ( v54 )
    {
      v96 = v17;
      v97 = v23;
      v55 = 0;
      v56 = v6;
      v57 = v106;
      v6 = (char *)(v48 + 32);
      while ( 1 )
      {
        v58 = sub_43CE70(v54, v15, a2, 1, v57);
        if ( v58 == -1 )
          goto LABEL_45;
        if ( v58 )
        {
          v50 = (const char *)v58;
          v48 = *(_QWORD *)(v48 + 8LL * (int)v55 + 32);
          goto LABEL_77;
        }
        ++v55;
        v54 = *(_QWORD *)&v6[8 * v55];
        if ( !v54 )
        {
          v17 = v96;
          v23 = v97;
          v6 = v56;
          goto LABEL_42;
        }
      }
    }
  }
  if ( v49 == -1 )
    goto LABEL_45;
LABEL_77:
  v109 = v50;
  sub_40C1A0(v110);
  v51 = v109;
  if ( v100 )
  {
    v52 = *(_QWORD *)v100;
    v53 = v111;
    *(_DWORD *)(v52 + 24) = qword_496940;
    *(_QWORD *)(v52 + 32) = v48;
    *(_QWORD *)(v52 + 40) = v51;
    *(_QWORD *)(v52 + 48) = v53;
  }
  else
  {
    v63 = ifunc_40DFD0(a2);
    v64 = v99;
    v6 = (char *)(v63 + 1);
    v65 = ifunc_40DFD0(v99);
    v66 = v98;
    v67 = (unsigned __int64)&v6[v65 + 58 + v98];
    v80 = sub_40B890(v67, v72, v73, v74, v75, v76, v77, v78, v79, v98 + 58, v68, v69, v70, v71);
    v51 = v109;
    if ( v80 )
    {
      v81 = v67 < 0x38 ? 56LL : v67;
      v82 = _mempcpy_chk(v80 + 56, a2, v6, v81 - 56, v109);
      j_ifunc_40DC90(v82, a1, v66 + 1);
      v83 = sub_4430C0(v82 + v66 + 1, v64);
      v84 = v109;
      v85 = v111;
      *(_QWORD *)v80 = v82;
      v86 = qword_496940;
      *(_DWORD *)(v80 + 8) = a6;
      *(_QWORD *)(v80 + 16) = v83;
      *(_DWORD *)(v80 + 24) = v86;
      *(_QWORD *)(v80 + 32) = v48;
      *(_QWORD *)(v80 + 40) = v84;
      *(_QWORD *)(v80 + 48) = v85;
      sub_42E1E0((__int64)&dword_496B60[14]);
      v6 = (char *)sub_4314B4(v80, &qword_496BD0, sub_43CDF0);
      sub_42DFB0(&dword_496B60[14]);
      v51 = v109;
      if ( !v6 || *(_QWORD *)v6 != v80 )
      {
        sub_40C1A0(v80);
        v51 = v109;
      }
    }
  }
  *(_DWORD *)(StatusReg + v103) = v107;
  if ( v108 )
  {
    v6 = *(char **)(v48 + 16);
    v109 = v51;
    v59 = v111;
    v60 = sub_43CC10(*((_QWORD *)v6 + 23), v105);
    v51 = v109;
    if ( v60 < *((_QWORD *)v6 + 24) )
    {
      v61 = &v109[v59];
      v6 = (char *)v109;
      v62 = v109;
      while ( --v60 != -1 )
      {
        v6 += ifunc_40DFD0(v6) + 1;
        if ( v6 >= v61 )
        {
          v51 = v62;
          goto LABEL_80;
        }
      }
      v51 = v6;
    }
  }
LABEL_80:
  v109 = v51;
  sub_42DFB0(dword_496B60);
  sub_42DFB0(dword_4968B8);
  v11 = v109;
LABEL_13:
  while ( v117 != qword_48DD60 )
  {
    sub_412340();
LABEL_102:
    v38 = v6;
LABEL_57:
    v109 = v38;
    sub_42DFB0(dword_496B60);
    sub_42DFB0(dword_4968B8);
    v11 = v109;
    *(_DWORD *)(StatusReg + v103) = v107;
  }
  return v11;
}
