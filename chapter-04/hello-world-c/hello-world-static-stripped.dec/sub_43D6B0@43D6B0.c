const char *__fastcall sub_43D6B0(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        const char *a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  char *v6; // x19
  bool v10; // zf
  const char *v11; // x4
  _QWORD *v14; // x2
  _QWORD *v15; // x28
  int v16; // w0
  __int64 v17; // x2
  __int64 v18; // x3
  void *v19; // x4
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
  const char *v30; // x24
  char *v31; // x19
  unsigned __int8 *v32; // x26
  int v33; // w0
  bool v34; // zf
  unsigned __int8 *v35; // x0
  unsigned __int8 *v36; // x23
  __int64 v37; // x0
  unsigned __int64 v38; // x1
  unsigned __int16 v39; // w0
  _QWORD *v40; // x1
  char *v41; // x0
  __int64 v42; // x19
  __int64 v43; // x0
  double v44; // d0
  double v45; // d1
  double v46; // d2
  double v47; // d3
  double v48; // d4
  double v49; // d5
  double v50; // d6
  double v51; // d7
  unsigned __int64 v52; // x1
  unsigned __int16 v53; // w0
  __int64 *v54; // x1
  int v55; // w0
  bool v56; // zf
  const char *v57; // x0
  int v58; // w24
  double v59; // d0
  double v60; // d1
  double v61; // d2
  double v62; // d3
  double v63; // d4
  double v64; // d5
  double v65; // d6
  double v66; // d7
  const char *v67; // x4
  __int64 v68; // x0
  __int64 v69; // x20
  unsigned __int64 v70; // x21
  const char *v71; // x20
  char *v72; // x1
  int v73; // t1
  int *v75; // x0
  char *v76; // x0
  char *v77; // x27
  __int64 v78; // x0
  const char *v79; // x4
  const char *v80; // x4
  __int64 v81; // x0
  __int64 v82; // x2
  __int64 v83; // x0
  __int64 v84; // x23
  char *v85; // x25
  __int64 *v86; // x24
  __int64 v87; // x0
  __int64 v88; // x21
  unsigned __int64 v89; // x20
  const char *v90; // x21
  const char *v91; // x22
  __int64 v92; // x0
  __int64 v93; // x25
  __int64 v94; // x0
  __int64 v95; // x23
  __int64 v96; // x2
  __int64 v97; // x3
  void *v98; // x4
  void *v99; // x5
  void *v100; // x6
  double v101; // d0
  double v102; // d1
  double v103; // d2
  double v104; // d3
  double v105; // d4
  double v106; // d5
  double v107; // d6
  double v108; // d7
  __int64 v109; // x24
  __int64 v110; // x19
  __int64 v111; // x0
  const char *v112; // x4
  __int64 v113; // x1
  int v114; // w3
  __int64 v115; // x3
  void *v116; // x4
  void *v117; // x5
  void *v118; // x6
  double v119; // d0
  double v120; // d1
  double v121; // d2
  double v122; // d3
  double v123; // d4
  double v124; // d5
  double v125; // d6
  double v126; // d7
  double v127; // d0
  double v128; // d1
  double v129; // d2
  double v130; // d3
  double v131; // d4
  double v132; // d5
  double v133; // d6
  double v134; // d7
  int v135; // w0
  __int64 v137; // [xsp+0h] [xbp-200E0h] BYREF
  char v138; // [xsp+10h] [xbp-200D0h] BYREF
  __int64 v139; // [xsp+400h] [xbp-1FCE0h]
  _QWORD v140[2]; // [xsp+10000h] [xbp-100E0h] BYREF
  _QWORD v141[126]; // [xsp+10010h] [xbp-100D0h] BYREF
  __int64 v142; // [xsp+10400h] [xbp-FCE0h]
  _BYTE v143[24]; // [xsp+20000h] [xbp-E0h] BYREF
  const char *v144; // [xsp+20018h] [xbp-C8h]
  unsigned __int8 *v145; // [xsp+20020h] [xbp-C0h]
  __int64 v146; // [xsp+20028h] [xbp-B8h]
  __int64 v147; // [xsp+20030h] [xbp-B0h]
  char *v148; // [xsp+20038h] [xbp-A8h]
  int *v149; // [xsp+20040h] [xbp-A0h]
  unsigned __int64 StatusReg; // [xsp+20048h] [xbp-98h]
  __int64 v151; // [xsp+20050h] [xbp-90h]
  const char *v152; // [xsp+20058h] [xbp-88h]
  unsigned __int64 v153; // [xsp+20060h] [xbp-80h]
  __int64 *v154; // [xsp+20068h] [xbp-78h]
  int v155; // [xsp+20070h] [xbp-70h]
  int v156; // [xsp+20074h] [xbp-6Ch]
  const char *v157; // [xsp+20078h] [xbp-68h]
  const char *v158; // [xsp+20088h] [xbp-58h] BYREF
  __int64 v159; // [xsp+20090h] [xbp-50h] BYREF
  unsigned __int64 *v160; // [xsp+20098h] [xbp-48h] BYREF
  unsigned int v161; // [xsp+200A0h] [xbp-40h]
  __int64 v162; // [xsp+200A8h] [xbp-38h]
  __int64 v163; // [xsp+200B8h] [xbp-28h]
  unsigned __int64 *v164; // [xsp+200D0h] [xbp-10h]
  __int64 v165; // [xsp+200D8h] [xbp-8h]

  v165 = qword_48DD60;
  v152 = a3;
  v153 = a5;
  v156 = a4;
  v158 = 0;
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
      v11 = v152;
      goto LABEL_13;
    }
LABEL_12:
    v11 = (const char *)a2;
    goto LABEL_13;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v151 = 40;
  v155 = *(_DWORD *)(StatusReg + 40);
  sub_42DD20(dword_4968B8);
  sub_42DD20(dword_496B60);
  v161 = a6;
  v163 = 0;
  v164 = a2;
  if ( !a1 )
    a1 = (unsigned __int64 *)off_491928;
  v160 = a1;
  v147 = sub_448BF0(a6);
  v162 = v147;
  sub_42DD20(&dword_496B60[14]);
  v6 = (char *)sub_431690((__int64)&v160, &qword_496BD0, (__int64 (__fastcall *)(__int64, _QWORD))sub_43CDF0);
  v148 = v6;
  sub_42DFB0(&dword_496B60[14]);
  if ( v6 )
  {
    v14 = *(_QWORD **)v6;
    if ( *(_DWORD *)(*(_QWORD *)v6 + 24LL) == (_DWORD)qword_496940 )
    {
      v67 = (const char *)v14[5];
      if ( v156 )
      {
        v68 = v14[4];
        v157 = (const char *)v14[5];
        v6 = *(char **)(v68 + 16);
        v69 = v14[6];
        v70 = sub_43CC10(*((int **)v6 + 23), v153);
        v67 = v157;
        if ( v70 < *((_QWORD *)v6 + 24) )
        {
          v71 = &v157[v69];
          v6 = (char *)v157;
          do
          {
            if ( --v70 == -1 )
              goto LABEL_99;
            v6 += ifunc_40DFD0(v6) + 1;
          }
          while ( v6 < v71 );
          v67 = v157;
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
      v16 = sub_42F240(a1, (unsigned __int64)(v15 + 3));
      if ( !v16 )
        break;
      if ( v16 < 0 )
      {
        v15 = 0;
        v30 = "/usr/share/locale";
        goto LABEL_25;
      }
      v15 = (_QWORD *)*v15;
      if ( !v15 )
        goto LABEL_53;
    }
    v30 = (const char *)v15[1];
    if ( *v30 == 47 )
      goto LABEL_25;
    v57 = (const char *)sub_4305A0(0, 0, v22, v23, v24, v25, v26, v27, v28, v29, v17, v18, v19, v20, v21);
    v6 = (char *)v57;
    if ( v57 )
    {
      v58 = sub_431DF0((__int64)&v158, 2, "%s/%s", v57, v30);
      sub_40C1A0((unsigned __int64)v6, v59, v60, v61, v62, v63, v64, v65, v66);
      if ( (v58 & 0x80000000) == 0 )
      {
        v30 = v158;
        goto LABEL_25;
      }
    }
LABEL_45:
    sub_40C1A0((unsigned __int64)v158, v44, v45, v46, v47, v48, v49, v50, v51);
    sub_42DFB0(dword_496B60);
    sub_42DFB0(dword_4968B8);
    *(_DWORD *)(StatusReg + v151) = v155;
    if ( v156 )
      v56 = v153 == 1;
    else
      v56 = 1;
    if ( !v56 )
      goto LABEL_49;
    goto LABEL_12;
  }
LABEL_53:
  v30 = "/usr/share/locale";
LABEL_25:
  v31 = &aLcCollate[(unsigned __int8)asc_45B298[a6]];
  v32 = (unsigned __int8 *)sub_448BF0(a6);
  if ( *v32 == 67 && ((v33 = v32[1], v33 != 46) ? (v34 = v33 == 0) : (v34 = 1), v34)
    || (v35 = sub_422890("LANGUAGE"), (v36 = v35) == 0)
    || !*v35 )
  {
    v36 = v32;
  }
  v146 = ifunc_40DFD0(a1);
  v37 = ifunc_40DFD0(v31) + v146 + 20;
  v38 = v37 & 0xFFFFFFFFFFFF0000LL;
  v39 = v37 & 0xFFF0;
  v40 = &v143[-v38];
  if ( v143 != (_BYTE *)v40 )
  {
    do
      v142 = 0;
    while ( v140 != v40 );
  }
  v140[0] = 0;
  if ( v39 >= 0x400uLL )
    v142 = 0;
  v41 = sub_42EFC0(v141, (unsigned __int64)v31);
  v42 = v146;
  *(_WORD *)v41 = 47;
  *(_DWORD *)(j_ifunc_40DC90(v41 + 1, a1, v42) + v42) = 7302446;
  v43 = ifunc_40DFD0(v36) + 16;
  v52 = v43 & 0xFFFFFFFFFFFF0000LL;
  v53 = v43 & 0xFFF0;
  v54 = (_QWORD *)((char *)v140 - v52);
  if ( v140 != v54 )
  {
    do
      v139 = 0;
    while ( &v137 != v54 );
  }
  v137 = 0;
  if ( v53 >= 0x400uLL )
    v139 = 0;
  v157 = "POSIX";
  v6 = &v138;
  v154 = &v159;
  v149 = &dword_491570;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_42:
      while ( 1 )
      {
        v55 = *v36;
        if ( v55 != 58 )
          break;
        ++v36;
      }
      if ( !*v36 )
      {
        *(_WORD *)v6 = 67;
        goto LABEL_45;
      }
      v72 = v6;
      do
      {
        *v72++ = v55;
        v73 = *++v36;
        v55 = v73;
      }
      while ( v73 != 58 && v55 != 0 );
      v75 = v149;
      *v72 = 0;
      if ( !*v75 || !sub_42F180((__int64)v6, 0x2Fu) )
      {
        if ( *v6 == 67 )
        {
          v135 = (unsigned __int8)v6[1];
          if ( v135 == 46 || v135 == 0 )
            goto LABEL_45;
        }
        if ( !(unsigned int)sub_42F240((unsigned __int64 *)v6, (unsigned __int64)v157) )
          goto LABEL_45;
        v76 = (char *)sub_41F380((__int64)v30, (unsigned __int64)v6, (__int64)v141, (__int64)v15);
        v77 = v76;
        if ( v76 )
          break;
      }
    }
    v78 = sub_43CE70((__int64)v76, (unsigned __int64)v15, a2, 1, v154);
    v79 = (const char *)v78;
    if ( v78 )
      break;
    v83 = *((_QWORD *)v77 + 4);
    if ( v83 )
    {
      v144 = v30;
      v145 = v36;
      v84 = 0;
      v85 = v6;
      v86 = v154;
      v6 = v77 + 32;
      while ( 1 )
      {
        v87 = sub_43CE70(v83, (unsigned __int64)v15, a2, 1, v86);
        if ( v87 == -1 )
          goto LABEL_45;
        if ( v87 )
        {
          v79 = (const char *)v87;
          v77 = *(char **)&v77[8 * (int)v84 + 32];
          goto LABEL_77;
        }
        ++v84;
        v83 = *(_QWORD *)&v6[8 * v84];
        if ( !v83 )
        {
          v30 = v144;
          v36 = v145;
          v6 = v85;
          goto LABEL_42;
        }
      }
    }
  }
  if ( v78 == -1 )
    goto LABEL_45;
LABEL_77:
  v157 = v79;
  sub_40C1A0((unsigned __int64)v158, v44, v45, v46, v47, v48, v49, v50, v51);
  v80 = v157;
  if ( v148 )
  {
    v81 = *(_QWORD *)v148;
    v82 = v159;
    *(_DWORD *)(v81 + 24) = qword_496940;
    *(_QWORD *)(v81 + 32) = v77;
    *(_QWORD *)(v81 + 40) = v80;
    *(_QWORD *)(v81 + 48) = v82;
  }
  else
  {
    v92 = ifunc_40DFD0(a2);
    v93 = v147;
    v6 = (char *)(v92 + 1);
    v94 = ifunc_40DFD0(v147);
    v95 = v146;
    v109 = sub_40B890(
             (unsigned __int64)&v6[v94 + 58 + v146],
             v101,
             v102,
             v103,
             v104,
             v105,
             v106,
             v107,
             v108,
             v146 + 58,
             v96,
             v97,
             v98,
             v99,
             v100);
    v80 = v157;
    if ( v109 )
    {
      v110 = _mempcpy_chk(v109 + 56, a2);
      j_ifunc_40DC90(v110, a1, v95 + 1);
      v111 = sub_4430C0(v110 + v95 + 1, v93);
      v112 = v157;
      v113 = v159;
      *(_QWORD *)v109 = v110;
      v114 = qword_496940;
      *(_DWORD *)(v109 + 8) = a6;
      *(_QWORD *)(v109 + 16) = v111;
      *(_DWORD *)(v109 + 24) = v114;
      *(_QWORD *)(v109 + 32) = v77;
      *(_QWORD *)(v109 + 40) = v112;
      *(_QWORD *)(v109 + 48) = v113;
      sub_42E1E0((__int64)&dword_496B60[14]);
      v6 = (char *)sub_4314B4(
                     v109,
                     (unsigned __int64 *)&qword_496BD0,
                     (unsigned __int64)sub_43CDF0,
                     v115,
                     v116,
                     v117,
                     v118,
                     v119,
                     v120,
                     v121,
                     v122,
                     v123,
                     v124,
                     v125,
                     v126);
      sub_42DFB0(&dword_496B60[14]);
      v80 = v157;
      if ( !v6 || *(_QWORD *)v6 != v109 )
      {
        sub_40C1A0(v109, v127, v128, v129, v130, v131, v132, v133, v134);
        v80 = v157;
      }
    }
  }
  *(_DWORD *)(StatusReg + v151) = v155;
  if ( v156 )
  {
    v6 = (char *)*((_QWORD *)v77 + 2);
    v157 = v80;
    v88 = v159;
    v89 = sub_43CC10(*((int **)v6 + 23), v153);
    v80 = v157;
    if ( v89 < *((_QWORD *)v6 + 24) )
    {
      v90 = &v157[v88];
      v6 = (char *)v157;
      v91 = v157;
      while ( --v89 != -1 )
      {
        v6 += ifunc_40DFD0(v6) + 1;
        if ( v6 >= v90 )
        {
          v80 = v91;
          goto LABEL_80;
        }
      }
      v80 = v6;
    }
  }
LABEL_80:
  v157 = v80;
  sub_42DFB0(dword_496B60);
  sub_42DFB0(dword_4968B8);
  v11 = v157;
LABEL_13:
  while ( v165 != qword_48DD60 )
  {
    sub_412340();
LABEL_99:
    v67 = v6;
LABEL_57:
    v157 = v67;
    sub_42DFB0(dword_496B60);
    sub_42DFB0(dword_4968B8);
    v11 = v157;
    *(_DWORD *)(StatusReg + v151) = v155;
  }
  return v11;
}
