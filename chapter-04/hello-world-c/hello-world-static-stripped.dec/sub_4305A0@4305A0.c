__int64 __fastcall sub_4305A0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 v15; // x19
  __int64 v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  int *v19; // x23
  __int64 v20; // x24
  __int64 v21; // x25
  __int64 v22; // x26
  char *st_ino; // x27
  __int64 v24; // x28
  __int64 v25; // x30
  __int64 v26; // x3
  __int64 *v27; // x2
  int v28; // w0
  unsigned __int64 v29; // x1
  char *v30; // x0
  char *v31; // x19
  __dev_t st_dev; // x26
  unsigned __int64 StatusReg; // x21
  unsigned int v34; // w24
  int v35; // w0
  __dev_t v36; // x28
  _BOOL4 v37; // w20
  __int64 v38; // x0
  double v39; // d0
  double v40; // d1
  double v41; // d2
  double v42; // d3
  double v43; // d4
  double v44; // d5
  double v45; // d6
  double v46; // d7
  __int64 v47; // x19
  __int64 v48; // x20
  __int64 v49; // x3
  void *v50; // x4
  void *v51; // x5
  void *v52; // x6
  unsigned __int64 v53; // x26
  double v54; // d0
  double v55; // d1
  double v56; // d2
  double v57; // d3
  double v58; // d4
  double v59; // d5
  double v60; // d6
  double v61; // d7
  __int64 v62; // x2
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x3
  double v66; // d0
  double v67; // d1
  double v68; // d2
  double v69; // d3
  double v70; // d4
  double v71; // d5
  double v72; // d6
  double v73; // d7
  __ino_t v74; // x1
  bool v75; // zf
  int v76; // w0
  __int64 result; // x0
  int v78; // w19
  bool v79; // zf
  __int64 v80; // x0
  bool v81; // zf
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  void *v85; // x4
  void *v86; // x5
  void *v87; // x6
  double v88; // d0
  double v89; // d1
  double v90; // d2
  double v91; // d3
  double v92; // d4
  double v93; // d5
  double v94; // d6
  double v95; // d7
  char *v96; // x0
  char *v97; // x1
  unsigned __int64 v98; // x19
  __int64 v99; // x2
  __int64 v100; // x3
  void *v101; // x4
  void *v102; // x5
  void *v103; // x6
  double v104; // d0
  double v105; // d1
  double v106; // d2
  double v107; // d3
  double v108; // d4
  double v109; // d5
  double v110; // d6
  double v111; // d7
  char *v112; // x0
  double v113; // d0
  double v114; // d1
  double v115; // d2
  double v116; // d3
  double v117; // d4
  double v118; // d5
  double v119; // d6
  double v120; // d7
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x1
  _BYTE v124[64]; // [xsp+8h] [xbp-148h] BYREF
  __int64 v125; // [xsp+48h] [xbp-108h]
  __syscall_slong_t *v126; // [xsp+50h] [xbp-100h]
  __int64 v127; // [xsp+58h] [xbp-F8h]
  char *v128; // [xsp+60h] [xbp-F0h]
  __int128 v129; // [xsp+68h] [xbp-E8h]
  char *v130; // [xsp+78h] [xbp-D8h]
  unsigned __int64 v131; // [xsp+80h] [xbp-D0h]
  const char *v132; // [xsp+88h] [xbp-C8h]
  char *v133; // [xsp+90h] [xbp-C0h]
  __ino_t v134; // [xsp+98h] [xbp-B8h]
  __dev_t v135; // [xsp+A0h] [xbp-B0h]
  __ino_t v136; // [xsp+A8h] [xbp-A8h]
  _BOOL4 v137; // [xsp+B0h] [xbp-A0h]
  _BOOL4 v138; // [xsp+B4h] [xbp-9Ch]
  __int64 v139; // [xsp+B8h] [xbp-98h]
  struct stat v140; // [xsp+C8h] [xbp-88h] BYREF
  __int64 v141; // [xsp+160h] [xbp+10h]
  __int64 v142; // [xsp+168h] [xbp+18h]
  __int64 v143; // [xsp+170h] [xbp+20h]
  __int64 v144; // [xsp+178h] [xbp+28h]
  int *v145; // [xsp+180h] [xbp+30h]
  __int64 v146; // [xsp+188h] [xbp+38h]
  __int64 v147; // [xsp+190h] [xbp+40h]
  __int64 v148; // [xsp+198h] [xbp+48h]
  char *v149; // [xsp+1A0h] [xbp+50h]
  __int64 v150; // [xsp+1A8h] [xbp+58h]

  v26 = a1;
  v27 = &qword_48DD60;
  *(_QWORD *)&v129 = a1;
  v140.__unused[1] = qword_48DD60;
  *((_QWORD *)&v129 + 1) = a2;
  if ( a2 )
  {
    v29 = *((_QWORD *)&v129 + 1);
    v128 = (char *)v129;
    if ( (_QWORD)v129 )
      goto LABEL_7;
  }
  else
  {
    if ( a1 )
      goto LABEL_59;
    v28 = sub_4110B0();
    if ( v28 < 4096 )
      v28 = 4096;
    v29 = v28;
  }
  v130 = (char *)v29;
  v128 = (char *)sub_40B890(v29, a3, a4, a5, a6, a7, a8, a9, a10, v29, (__int64)v27, v26, a13, a14, a15);
  v29 = (unsigned __int64)v130;
  if ( !v128 )
    goto LABEL_56;
LABEL_7:
  v30 = linux_eabi_syscall(__NR_getcwd, v128, v29);
  if ( (unsigned __int64)v30 > 0xFFFFFFFFFFFFF000LL )
  {
    v143 = v17;
    v144 = v18;
    v76 = -(int)v30;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v76;
  }
  else
  {
    if ( (int)v30 > 0 )
    {
      if ( *v128 == 47 )
      {
        if ( v129 == 0 )
          *(_QWORD *)&v129 = sub_40C434(
                               (unsigned __int64)v128,
                               (int)v30,
                               a3,
                               a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               a9,
                               a10,
                               *((__int64 *)&v129 + 1),
                               v26,
                               a13,
                               a14,
                               a15);
        v96 = (char *)v129;
        if ( !(_QWORD)v129 )
          v96 = v128;
        v128 = v96;
        goto LABEL_57;
      }
      goto LABEL_10;
    }
    if ( !(_DWORD)v30 )
      goto LABEL_10;
    v143 = v17;
    v144 = v18;
    v76 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  }
  if ( v76 != 36 )
  {
    if ( v76 == 34 && v129 == 0 )
    {
      v141 = v15;
      v142 = v16;
      v145 = v19;
      v146 = v20;
      v147 = v21;
      v148 = v22;
      v149 = st_ino;
      v150 = v24;
      sub_41F250(
        "errno != ERANGE || buf != NULL || size != 0",
        (__int64)"../sysdeps/unix/sysv/linux/getcwd.c",
        0x7Bu,
        (__int64)"__getcwd");
    }
    if ( !(_QWORD)v129 )
      sub_40C1A0((unsigned __int64)v128, a3, a4, a5, a6, a7, a8, a9, a10);
    v17 = v143;
    v18 = v144;
    goto LABEL_56;
  }
  v17 = v143;
  v18 = v144;
LABEL_10:
  if ( v129 == 0 )
  {
    sub_40C1A0((unsigned __int64)v128, a3, a4, a5, a6, a7, a8, a9, a10);
    v128 = (char *)sub_40B890(0x1000u, v88, v89, v90, v91, v92, v93, v94, v95, v82, v83, v84, v85, v86, v87);
    if ( !v128 )
      goto LABEL_56;
    v130 = 0;
    v131 = 4096;
    v141 = v15;
    v142 = v16;
    v143 = v17;
    v144 = v18;
    v148 = v22;
    goto LABEL_14;
  }
  if ( *((_QWORD *)&v129 + 1) == 1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
    if ( (_QWORD)v129 )
      goto LABEL_56;
    v130 = v128;
LABEL_79:
    sub_40C1A0((unsigned __int64)v130, a3, a4, a5, a6, a7, a8, a9, a10);
    goto LABEL_56;
  }
  if ( !*((_QWORD *)&v129 + 1) )
  {
LABEL_59:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    goto LABEL_56;
  }
  v130 = v128;
  v131 = *((_QWORD *)&v129 + 1);
  v141 = v15;
  v142 = v16;
  v143 = v17;
  v144 = v18;
  v148 = v22;
LABEL_14:
  v31 = &v128[v131];
  v128[v131 - 1] = 0;
  if ( (sub_430D20(".", &v140) & 0x80000000) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v78 = *(_DWORD *)(StatusReg + 40);
    goto LABEL_73;
  }
  v150 = v24;
  st_dev = v140.st_dev;
  st_ino = (char *)v140.st_ino;
  if ( (sub_430D20("/", &v140) & 0x80000000) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v24 = v150;
    v78 = *(_DWORD *)(StatusReg + 40);
    goto LABEL_73;
  }
  v133 = v31 - 1;
  v135 = v140.st_dev;
  v136 = v140.st_ino;
  v137 = st_ino != (char *)v140.st_ino || st_dev != v140.st_dev;
  v138 = v137;
  if ( !v137 )
    goto LABEL_99;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v132 = "..";
  v146 = v20;
  v19 = 0;
  v34 = -100;
  while ( 2 )
  {
    v35 = sub_430D40(v34, v132, 0);
    v34 = v35;
    if ( v35 < 0 )
    {
      v138 = 0;
      v78 = *(_DWORD *)(StatusReg + 40);
      if ( !v19 )
        goto LABEL_106;
      goto LABEL_105;
    }
    if ( (unsigned int)sub_410930(v35, &v140) )
    {
      v78 = *(_DWORD *)(StatusReg + 40);
      if ( !v19 )
        goto LABEL_96;
LABEL_105:
      sub_430220(v19, a3, a4, a5, a6, a7, a8, a9, a10);
      if ( v138 )
        goto LABEL_96;
LABEL_106:
      v20 = v146;
      v24 = v150;
      goto LABEL_73;
    }
    if ( v19 && (unsigned int)sub_430220(v19, a3, a4, a5, a6, a7, a8, a9, a10)
      || (v36 = v140.st_dev, v134 = v140.st_ino, (v19 = (int *)sub_4437E0(v34)) == 0) )
    {
      v78 = *(_DWORD *)(StatusReg + 40);
LABEL_96:
      sub_410CD0(v34);
      v20 = v146;
      v24 = v150;
      goto LABEL_73;
    }
    v37 = v137;
    do
    {
LABEL_24:
      *(_DWORD *)(StatusReg + 40) = 0;
      v38 = sub_4302C0((__int64)v19);
      if ( v38 )
      {
LABEL_25:
        if ( *(_BYTE *)(v38 + 19) != 46 )
          goto LABEL_26;
        goto LABEL_62;
      }
      while ( 1 )
      {
        v78 = *(_DWORD *)(StatusReg + 40);
        if ( v78 )
          v79 = 1;
        else
          v79 = !v37;
        if ( v79 )
          goto LABEL_70;
        sub_443760(v19);
        v38 = sub_4302C0((__int64)v19);
        if ( !v38 )
        {
          v78 = *(_DWORD *)(StatusReg + 40);
LABEL_70:
          if ( !v78 )
          {
            v78 = 2;
            *(_DWORD *)(StatusReg + 40) = 2;
          }
          sub_430220(v19, v39, v40, v41, v42, v43, v44, v45, v46);
          v20 = v146;
          v24 = v150;
LABEL_73:
          if ( !v130 )
            sub_40C1A0((unsigned __int64)v128, a3, a4, a5, a6, a7, a8, a9, a10);
          v80 = v129;
          *(_DWORD *)(StatusReg + 40) = v78;
          v15 = v141;
          v16 = v142;
          v17 = v143;
          v18 = v144;
          if ( v80 )
            v81 = 1;
          else
            v81 = *((_QWORD *)&v129 + 1) == 0;
          v22 = v148;
          if ( !v81 )
            goto LABEL_79;
LABEL_56:
          v128 = 0;
          goto LABEL_57;
        }
        v37 = 0;
        if ( *(_BYTE *)(v38 + 19) != 46 )
          break;
LABEL_62:
        if ( !*(_BYTE *)(v38 + 20) )
          goto LABEL_24;
        if ( (*(_QWORD *)(v38 + 16) & 0xFFFF00000000LL) != 0x2E00000000LL )
        {
LABEL_26:
          if ( !v37 )
            break;
          if ( *(_QWORD *)v38 == (_QWORD)st_ino || v36 != st_dev )
          {
            v37 = *(_QWORD *)v38 == (_QWORD)st_ino || v36 != st_dev;
            break;
          }
          goto LABEL_24;
        }
        *(_DWORD *)(StatusReg + 40) = 0;
        v38 = sub_4302C0((__int64)v19);
        if ( v38 )
          goto LABEL_25;
      }
      v47 = v38 + 19;
    }
    while ( (unsigned int)sub_443F80(v34, v38 + 19, &v140, 256)
         || (v140.st_nlink & 0xF000) != 0x4000
         || v140.st_dev != st_dev
         || (char *)v140.st_ino != st_ino );
    v48 = v133 - v128;
    v53 = ifunc_40DFD0(v47);
    if ( v133 - v128 <= v53 )
    {
      if ( *((_QWORD *)&v129 + 1) )
      {
        v78 = 34;
        *(_DWORD *)(StatusReg + 40) = 34;
        sub_430220(v19, v54, v55, v56, v57, v58, v59, v60, v61);
        v20 = v146;
        v24 = v150;
        goto LABEL_73;
      }
      if ( v53 < v131 )
        v62 = v131;
      else
        v62 = v53;
      v139 = v62;
      v133 = (char *)(v62 + v131);
      if ( __CFADD__(v62, v131)
        || (v63 = sub_40C434(
                    (unsigned __int64)v128,
                    v62 + v131,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58,
                    v59,
                    v60,
                    v61,
                    v62,
                    v49,
                    v50,
                    v51,
                    v52),
            (st_ino = (char *)v63) == 0) )
      {
        *(_DWORD *)(StatusReg + 40) = 12;
        sub_430220(v19, v54, v55, v56, v57, v58, v59, v60, v61);
        if ( !v130 )
          sub_40C1A0((unsigned __int64)v128, v113, v114, v115, v116, v117, v118, v119, v120);
        v20 = v146;
        *(_DWORD *)(StatusReg + 40) = 12;
        v15 = v141;
        v16 = v142;
        v17 = v143;
        v18 = v144;
        v22 = v148;
        v24 = v150;
        goto LABEL_56;
      }
      v64 = j_ifunc_40DC90(v63 + v48 + v139, v63 + v48, v131 - v48);
      v128 = st_ino;
      v131 = (unsigned __int64)v133;
      v133 = (char *)v64;
    }
    v65 = j_ifunc_40DC90(&v133[-v53], v47, v53);
    v74 = v134;
    v75 = v135 == v36;
    *(_BYTE *)(v65 - 1) = 47;
    v75 = v75 && v136 == v74;
    v133 = (char *)(v65 - 1);
    if ( !v75 )
    {
      st_ino = (char *)v134;
      st_dev = v36;
      continue;
    }
    break;
  }
  if ( (unsigned int)sub_430220(v19, v66, v67, v68, v69, v70, v71, v72, v73) )
  {
    v20 = v146;
    v24 = v150;
    v78 = *(_DWORD *)(StatusReg + 40);
    goto LABEL_73;
  }
  v20 = v146;
  v31 = &v128[v131];
LABEL_99:
  v97 = v133;
  if ( v133 == &v128[v131 - 1] )
  {
    *(v133 - 1) = 47;
    v133 = v97 - 1;
  }
  v98 = v31 - v133;
  j_ifunc_40DD80(v128, v133, v98);
  if ( !*((_QWORD *)&v129 + 1) )
  {
    if ( v98 >= v131 )
    {
      v15 = v141;
      v16 = v142;
      v17 = v143;
      v18 = v144;
      v22 = v148;
      v24 = v150;
      goto LABEL_57;
    }
    v130 = (char *)sub_40C434(
                     (unsigned __int64)v128,
                     v98,
                     v104,
                     v105,
                     v106,
                     v107,
                     v108,
                     v109,
                     v110,
                     v111,
                     v99,
                     v100,
                     v101,
                     v102,
                     v103);
  }
  v112 = v130;
  v15 = v141;
  v16 = v142;
  if ( !v130 )
    v112 = v128;
  v17 = v143;
  v18 = v144;
  v128 = v112;
  v22 = v148;
  v24 = v150;
LABEL_57:
  if ( v140.__unused[1] == qword_48DD60 )
    return (__int64)v128;
  v141 = v15;
  v142 = v16;
  v143 = v17;
  v144 = v18;
  v145 = v19;
  v146 = v20;
  v147 = v21;
  v148 = v22;
  v149 = st_ino;
  v150 = v24;
  v121 = sub_412340();
  v126 = &v140.__unused[2];
  v127 = v25;
  v125 = qword_48DD60;
  result = (unsigned int)sub_430FE0(v121, v124, &qword_48DD60, 0) == 0;
  if ( v125 != qword_48DD60 )
  {
    v122 = sub_412340();
    return sub_430D20(v122, v123);
  }
  return result;
}
