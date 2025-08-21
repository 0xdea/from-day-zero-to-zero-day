const char *__fastcall sub_43D6B0(char *a1, const char *a2, const char *a3, int a4, __int64 a5, unsigned int a6)
{
  char *v6; // x19
  bool v10; // zf
  const char *v11; // x4
  _QWORD *v14; // x2
  _QWORD *v15; // x28
  int v16; // w0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  long double v21; // q0
  long double v22; // q1
  long double v23; // q2
  long double v24; // q3
  long double v25; // q4
  long double v26; // q5
  long double v27; // q6
  long double v28; // q7
  const char *v29; // x24
  char *v30; // x19
  _BYTE *v31; // x26
  int v32; // w0
  bool v33; // zf
  _BYTE *v34; // x0
  _BYTE *v35; // x23
  __int64 v36; // x0
  unsigned __int64 v37; // x1
  unsigned __int16 v38; // w0
  _QWORD *v39; // x1
  _WORD *v40; // x0
  __int64 v41; // x19
  __int64 v42; // x0
  unsigned __int64 v43; // x1
  unsigned __int16 v44; // w0
  __int64 *v45; // x1
  int v46; // w0
  bool v47; // zf
  const char *v48; // x0
  int v49; // w24
  const char *v50; // x4
  __int64 v51; // x0
  __int64 v52; // x20
  unsigned __int64 v53; // x21
  const char *v54; // x20
  char *v55; // x1
  int v56; // t1
  int *v58; // x0
  __int64 v59; // x0
  __int64 v60; // x27
  __int64 v61; // x0
  const char *v62; // x4
  const char *v63; // x4
  __int64 v64; // x0
  __int64 v65; // x2
  __int64 v66; // x0
  __int64 v67; // x23
  char *v68; // x25
  __int64 *v69; // x24
  __int64 v70; // x0
  __int64 v71; // x21
  unsigned __int64 v72; // x20
  const char *v73; // x21
  const char *v74; // x22
  __int64 v75; // x0
  __int64 v76; // x25
  __int64 v77; // x0
  __int64 v78; // x23
  unsigned __int64 v79; // x26
  __int16 *v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  __int64 v83; // x5
  long double v84; // q0
  long double v85; // q1
  long double v86; // q2
  long double v87; // q3
  long double v88; // q4
  long double v89; // q5
  long double v90; // q6
  long double v91; // q7
  __int64 v92; // x24
  __int64 v93; // x3
  __int64 v94; // x19
  __int64 v95; // x0
  const char *v96; // x4
  __int64 v97; // x1
  int v98; // w3
  int v99; // w0
  __int64 v101; // [xsp+0h] [xbp-200E0h] BYREF
  char v102; // [xsp+10h] [xbp-200D0h] BYREF
  __int64 v103; // [xsp+400h] [xbp-1FCE0h]
  _QWORD v104[2]; // [xsp+10000h] [xbp-100E0h] BYREF
  _BYTE v105[1008]; // [xsp+10010h] [xbp-100D0h] BYREF
  __int64 v106; // [xsp+10400h] [xbp-FCE0h]
  _BYTE v107[24]; // [xsp+20000h] [xbp-E0h] BYREF
  const char *v108; // [xsp+20018h] [xbp-C8h]
  _BYTE *v109; // [xsp+20020h] [xbp-C0h]
  __int64 v110; // [xsp+20028h] [xbp-B8h]
  __int64 v111; // [xsp+20030h] [xbp-B0h]
  char *v112; // [xsp+20038h] [xbp-A8h]
  int *v113; // [xsp+20040h] [xbp-A0h]
  unsigned __int64 StatusReg; // [xsp+20048h] [xbp-98h]
  __int64 v115; // [xsp+20050h] [xbp-90h]
  const char *v116; // [xsp+20058h] [xbp-88h]
  __int64 v117; // [xsp+20060h] [xbp-80h]
  __int64 *v118; // [xsp+20068h] [xbp-78h]
  int v119; // [xsp+20070h] [xbp-70h]
  int v120; // [xsp+20074h] [xbp-6Ch]
  const char *v121; // [xsp+20078h] [xbp-68h]
  const char *v122; // [xsp+20088h] [xbp-58h] BYREF
  __int64 v123; // [xsp+20090h] [xbp-50h] BYREF
  char *v124; // [xsp+20098h] [xbp-48h] BYREF
  unsigned int v125; // [xsp+200A0h] [xbp-40h]
  __int64 v126; // [xsp+200A8h] [xbp-38h]
  __int64 v127; // [xsp+200B8h] [xbp-28h]
  const char *v128; // [xsp+200D0h] [xbp-10h]
  __int64 v129; // [xsp+200D8h] [xbp-8h]

  v129 = qword_48DD60;
  v116 = a3;
  v117 = a5;
  v120 = a4;
  v122 = 0;
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
      v11 = v116;
      goto LABEL_13;
    }
LABEL_12:
    v11 = a2;
    goto LABEL_13;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v115 = 40;
  v119 = *(_DWORD *)(StatusReg + 40);
  sub_42DD20(dword_4968B8);
  sub_42DD20(dword_496B60);
  v125 = a6;
  v127 = 0;
  v128 = a2;
  if ( !a1 )
    a1 = off_491928;
  v124 = a1;
  v111 = sub_448BF0(a6);
  v126 = v111;
  sub_42DD20(&dword_496B60[14]);
  v6 = (char *)sub_431690(&v124, &qword_496BD0, sub_43CDF0);
  v112 = v6;
  sub_42DFB0(&dword_496B60[14]);
  if ( v6 )
  {
    v14 = *(_QWORD **)v6;
    if ( *(_DWORD *)(*(_QWORD *)v6 + 24LL) == (_DWORD)qword_496940 )
    {
      v50 = (const char *)v14[5];
      if ( v120 )
      {
        v51 = v14[4];
        v121 = (const char *)v14[5];
        v6 = *(char **)(v51 + 16);
        v52 = v14[6];
        v53 = sub_43CC10(*((_QWORD *)v6 + 23), v117);
        v50 = v121;
        if ( v53 < *((_QWORD *)v6 + 24) )
        {
          v54 = &v121[v52];
          v6 = (char *)v121;
          do
          {
            if ( --v53 == -1 )
              goto LABEL_102;
            v6 += ifunc_40DFD0(v6) + 1;
          }
          while ( v6 < v54 );
          v50 = v121;
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
        v29 = "/usr/share/locale";
        goto LABEL_25;
      }
      v15 = (_QWORD *)*v15;
      if ( !v15 )
        goto LABEL_53;
    }
    v29 = (const char *)v15[1];
    if ( *v29 == 47 )
      goto LABEL_25;
    v48 = (const char *)sub_4305A0(0, 0, v21, v22, v23, v24, v25, v26, v27, v28, v17, v18, v19, v20);
    v6 = (char *)v48;
    if ( v48 )
    {
      v49 = sub_431DF0(&v122, 2, "%s/%s", v48, v29);
      sub_40C1A0(v6);
      if ( (v49 & 0x80000000) == 0 )
      {
        v29 = v122;
        goto LABEL_25;
      }
    }
LABEL_45:
    sub_40C1A0(v122);
    sub_42DFB0(dword_496B60);
    sub_42DFB0(dword_4968B8);
    *(_DWORD *)(StatusReg + v115) = v119;
    if ( v120 )
      v47 = v117 == 1;
    else
      v47 = 1;
    if ( !v47 )
      goto LABEL_49;
    goto LABEL_12;
  }
LABEL_53:
  v29 = "/usr/share/locale";
LABEL_25:
  v30 = &aLcCollate[(unsigned __int8)asc_45B298[a6]];
  v31 = (_BYTE *)sub_448BF0(a6);
  if ( *v31 == 67 && ((v32 = (unsigned __int8)v31[1], v32 != 46) ? (v33 = v32 == 0) : (v33 = 1), v33)
    || (v34 = (_BYTE *)sub_422890("LANGUAGE"), (v35 = v34) == 0)
    || !*v34 )
  {
    v35 = v31;
  }
  v110 = ifunc_40DFD0(a1);
  v36 = ifunc_40DFD0(v30) + v110 + 20;
  v37 = v36 & 0xFFFFFFFFFFFF0000LL;
  v38 = v36 & 0xFFF0;
  v39 = &v107[-v37];
  if ( v107 != (_BYTE *)v39 )
  {
    do
      v106 = 0;
    while ( v104 != v39 );
  }
  v104[0] = 0;
  if ( v38 >= 0x400uLL )
    v106 = 0;
  v40 = (_WORD *)sub_42EFC0(v105, v30);
  v41 = v110;
  *v40 = 47;
  *(_DWORD *)(j_ifunc_40DC90((char *)v40 + 1, a1, v41) + v41) = 7302446;
  v42 = ifunc_40DFD0(v35) + 16;
  v43 = v42 & 0xFFFFFFFFFFFF0000LL;
  v44 = v42 & 0xFFF0;
  v45 = (_QWORD *)((char *)v104 - v43);
  if ( v104 != v45 )
  {
    do
      v103 = 0;
    while ( &v101 != v45 );
  }
  v101 = 0;
  if ( v44 >= 0x400uLL )
    v103 = 0;
  v121 = "POSIX";
  v6 = &v102;
  v118 = &v123;
  v113 = &dword_491570;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_42:
      while ( 1 )
      {
        v46 = (unsigned __int8)*v35;
        if ( v46 != 58 )
          break;
        ++v35;
      }
      if ( !*v35 )
      {
        *(_WORD *)v6 = 67;
        goto LABEL_45;
      }
      v55 = v6;
      do
      {
        *v55++ = v46;
        v56 = (unsigned __int8)*++v35;
        v46 = v56;
      }
      while ( v56 != 58 && v46 != 0 );
      v58 = v113;
      *v55 = 0;
      if ( !*v58 || !sub_42F180(v6, 47) )
      {
        if ( *v6 == 67 )
        {
          v99 = (unsigned __int8)v6[1];
          if ( v99 == 46 || v99 == 0 )
            goto LABEL_45;
        }
        if ( !(unsigned int)sub_42F240(v6, v121) )
          goto LABEL_45;
        v59 = sub_41F380(v29, v6, v105, v15);
        v60 = v59;
        if ( v59 )
          break;
      }
    }
    v61 = sub_43CE70(v59, (__int64)v15, (__int64)a2, 1, v118);
    v62 = (const char *)v61;
    if ( v61 )
      break;
    v66 = *(_QWORD *)(v60 + 32);
    if ( v66 )
    {
      v108 = v29;
      v109 = v35;
      v67 = 0;
      v68 = v6;
      v69 = v118;
      v6 = (char *)(v60 + 32);
      while ( 1 )
      {
        v70 = sub_43CE70(v66, (__int64)v15, (__int64)a2, 1, v69);
        if ( v70 == -1 )
          goto LABEL_45;
        if ( v70 )
        {
          v62 = (const char *)v70;
          v60 = *(_QWORD *)(v60 + 8LL * (int)v67 + 32);
          goto LABEL_77;
        }
        ++v67;
        v66 = *(_QWORD *)&v6[8 * v67];
        if ( !v66 )
        {
          v29 = v108;
          v35 = v109;
          v6 = v68;
          goto LABEL_42;
        }
      }
    }
  }
  if ( v61 == -1 )
    goto LABEL_45;
LABEL_77:
  v121 = v62;
  sub_40C1A0(v122);
  v63 = v121;
  if ( v112 )
  {
    v64 = *(_QWORD *)v112;
    v65 = v123;
    *(_DWORD *)(v64 + 24) = qword_496940;
    *(_QWORD *)(v64 + 32) = v60;
    *(_QWORD *)(v64 + 40) = v63;
    *(_QWORD *)(v64 + 48) = v65;
  }
  else
  {
    v75 = ifunc_40DFD0(a2);
    v76 = v111;
    v6 = (char *)(v75 + 1);
    v77 = ifunc_40DFD0(v111);
    v78 = v110;
    v79 = (unsigned __int64)&v6[v77 + 58 + v110];
    v92 = sub_40B890(v79, v84, v85, v86, v87, v88, v89, v90, v91, v110 + 58, v80, v81, v82, v83);
    v63 = v121;
    if ( v92 )
    {
      v93 = v79 < 0x38 ? 56LL : v79;
      v94 = _mempcpy_chk(v92 + 56, a2, v6, v93 - 56, v121);
      j_ifunc_40DC90(v94, a1, v78 + 1);
      v95 = sub_4430C0(v94 + v78 + 1, v76);
      v96 = v121;
      v97 = v123;
      *(_QWORD *)v92 = v94;
      v98 = qword_496940;
      *(_DWORD *)(v92 + 8) = a6;
      *(_QWORD *)(v92 + 16) = v95;
      *(_DWORD *)(v92 + 24) = v98;
      *(_QWORD *)(v92 + 32) = v60;
      *(_QWORD *)(v92 + 40) = v96;
      *(_QWORD *)(v92 + 48) = v97;
      sub_42E1E0((__int64)&dword_496B60[14]);
      v6 = (char *)sub_4314B4(v92, &qword_496BD0, sub_43CDF0);
      sub_42DFB0(&dword_496B60[14]);
      v63 = v121;
      if ( !v6 || *(_QWORD *)v6 != v92 )
      {
        sub_40C1A0(v92);
        v63 = v121;
      }
    }
  }
  *(_DWORD *)(StatusReg + v115) = v119;
  if ( v120 )
  {
    v6 = *(char **)(v60 + 16);
    v121 = v63;
    v71 = v123;
    v72 = sub_43CC10(*((_QWORD *)v6 + 23), v117);
    v63 = v121;
    if ( v72 < *((_QWORD *)v6 + 24) )
    {
      v73 = &v121[v71];
      v6 = (char *)v121;
      v74 = v121;
      while ( --v72 != -1 )
      {
        v6 += ifunc_40DFD0(v6) + 1;
        if ( v6 >= v73 )
        {
          v63 = v74;
          goto LABEL_80;
        }
      }
      v63 = v6;
    }
  }
LABEL_80:
  v121 = v63;
  sub_42DFB0(dword_496B60);
  sub_42DFB0(dword_4968B8);
  v11 = v121;
LABEL_13:
  while ( v129 != qword_48DD60 )
  {
    sub_412340();
LABEL_102:
    v50 = v6;
LABEL_57:
    v121 = v50;
    sub_42DFB0(dword_496B60);
    sub_42DFB0(dword_4968B8);
    v11 = v121;
    *(_DWORD *)(StatusReg + v115) = v119;
  }
  return v11;
}
