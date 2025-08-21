__int64 __fastcall sub_4305A0(
        __int64 a1,
        __int64 a2,
        long double a3,
        long double a4,
        long double a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // x19
  __int64 v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  __int64 v20; // x25
  __int64 v21; // x26
  char *v22; // x27
  __int64 v23; // x28
  __int64 v24; // x30
  __int64 v25; // x3
  __int16 *v26; // x2
  int v27; // w0
  unsigned __int64 v28; // x1
  char *v29; // x0
  char *v30; // x19
  __int64 v31; // x26
  unsigned __int64 StatusReg; // x21
  unsigned int v33; // w24
  __int64 v34; // x0
  __int64 v35; // x28
  _BOOL4 v36; // w20
  __int64 v37; // x0
  __int64 v38; // x19
  __int64 v39; // x20
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  unsigned __int64 v43; // x26
  long double v44; // q0
  long double v45; // q1
  long double v46; // q2
  long double v47; // q3
  long double v48; // q4
  long double v49; // q5
  long double v50; // q6
  long double v51; // q7
  __int64 v52; // x2
  char *v53; // x0
  __int64 v54; // x0
  __int64 v55; // x3
  char *v56; // x1
  bool v57; // zf
  int v58; // w0
  __int64 result; // x0
  int v60; // w19
  bool v61; // zf
  __int64 v62; // x0
  bool v63; // zf
  __int64 v64; // x1
  __int16 *v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  long double v69; // q0
  long double v70; // q1
  long double v71; // q2
  long double v72; // q3
  long double v73; // q4
  long double v74; // q5
  long double v75; // q6
  long double v76; // q7
  char *v77; // x0
  char *v78; // x1
  unsigned __int64 v79; // x19
  __int64 v80; // x2
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
  char *v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  char v96[64]; // [xsp+8h] [xbp-148h] BYREF
  __int64 v97; // [xsp+48h] [xbp-108h]
  __int64 *v98; // [xsp+50h] [xbp-100h]
  __int64 v99; // [xsp+58h] [xbp-F8h]
  char *v100; // [xsp+60h] [xbp-F0h]
  __int128 v101; // [xsp+68h] [xbp-E8h]
  char *v102; // [xsp+78h] [xbp-D8h]
  unsigned __int64 v103; // [xsp+80h] [xbp-D0h]
  const char *v104; // [xsp+88h] [xbp-C8h]
  char *v105; // [xsp+90h] [xbp-C0h]
  char *v106; // [xsp+98h] [xbp-B8h]
  __int64 v107; // [xsp+A0h] [xbp-B0h]
  char *v108; // [xsp+A8h] [xbp-A8h]
  _BOOL4 v109; // [xsp+B0h] [xbp-A0h]
  _BOOL4 v110; // [xsp+B4h] [xbp-9Ch]
  __int64 v111; // [xsp+B8h] [xbp-98h]
  __int64 v112; // [xsp+C8h] [xbp-88h] BYREF
  char *v113; // [xsp+D0h] [xbp-80h]
  int v114; // [xsp+D8h] [xbp-78h]
  __int64 v115; // [xsp+148h] [xbp-8h]
  __int64 v116; // [xsp+150h] [xbp+0h] BYREF
  __int64 v117; // [xsp+160h] [xbp+10h]
  __int64 v118; // [xsp+168h] [xbp+18h]
  __int64 v119; // [xsp+170h] [xbp+20h]
  __int64 v120; // [xsp+178h] [xbp+28h]
  __int64 v121; // [xsp+180h] [xbp+30h]
  __int64 v122; // [xsp+188h] [xbp+38h]
  __int64 v123; // [xsp+190h] [xbp+40h]
  __int64 v124; // [xsp+198h] [xbp+48h]
  char *v125; // [xsp+1A0h] [xbp+50h]
  __int64 v126; // [xsp+1A8h] [xbp+58h]

  v25 = a1;
  v26 = (__int16 *)&qword_48DD60;
  *(_QWORD *)&v101 = a1;
  v115 = qword_48DD60;
  *((_QWORD *)&v101 + 1) = a2;
  if ( a2 )
  {
    v28 = *((_QWORD *)&v101 + 1);
    v100 = (char *)v101;
    if ( (_QWORD)v101 )
      goto LABEL_7;
  }
  else
  {
    if ( a1 )
      goto LABEL_59;
    v27 = sub_4110B0();
    if ( v27 < 4096 )
      v27 = 4096;
    v28 = v27;
  }
  v102 = (char *)v28;
  v100 = (char *)sub_40B890(v28, a3, a4, a5, a6, a7, a8, a9, a10, v28, v26, v25, a13, a14);
  v28 = (unsigned __int64)v102;
  if ( !v100 )
    goto LABEL_56;
LABEL_7:
  v29 = linux_eabi_syscall(__NR_getcwd, v100, v28);
  if ( (unsigned __int64)v29 > 0xFFFFFFFFFFFFF000LL )
  {
    v119 = v16;
    v120 = v17;
    v58 = -(int)v29;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v58;
  }
  else
  {
    if ( (int)v29 > 0 )
    {
      if ( *v100 == 47 )
      {
        if ( v101 == 0 )
          *(_QWORD *)&v101 = sub_40C434(
                               (__int64)v100,
                               (int)v29,
                               a3,
                               a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               a9,
                               a10,
                               *((__int64 *)&v101 + 1),
                               v25,
                               a13,
                               a14);
        v77 = (char *)v101;
        if ( !(_QWORD)v101 )
          v77 = v100;
        v100 = v77;
        goto LABEL_57;
      }
      goto LABEL_10;
    }
    if ( !(_DWORD)v29 )
      goto LABEL_10;
    v119 = v16;
    v120 = v17;
    v58 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  }
  if ( v58 != 36 )
  {
    if ( v58 == 34 && v101 == 0 )
    {
      v117 = v14;
      v118 = v15;
      v121 = v18;
      v122 = v19;
      v123 = v20;
      v124 = v21;
      v125 = v22;
      v126 = v23;
      sub_41F250(
        "errno != ERANGE || buf != NULL || size != 0",
        (__int64)"../sysdeps/unix/sysv/linux/getcwd.c",
        0x7Bu,
        (__int64)"__getcwd");
    }
    if ( !(_QWORD)v101 )
      sub_40C1A0(v100);
    v16 = v119;
    v17 = v120;
    goto LABEL_56;
  }
  v16 = v119;
  v17 = v120;
LABEL_10:
  if ( v101 == 0 )
  {
    sub_40C1A0(v100);
    v100 = (char *)sub_40B890(0x1000u, v69, v70, v71, v72, v73, v74, v75, v76, v64, v65, v66, v67, v68);
    if ( !v100 )
      goto LABEL_56;
    v102 = 0;
    v103 = 4096;
    v117 = v14;
    v118 = v15;
    v119 = v16;
    v120 = v17;
    v124 = v21;
    goto LABEL_14;
  }
  if ( *((_QWORD *)&v101 + 1) == 1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
    if ( (_QWORD)v101 )
      goto LABEL_56;
    v102 = v100;
LABEL_79:
    sub_40C1A0(v102);
    goto LABEL_56;
  }
  if ( !*((_QWORD *)&v101 + 1) )
  {
LABEL_59:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    goto LABEL_56;
  }
  v102 = v100;
  v103 = *((_QWORD *)&v101 + 1);
  v117 = v14;
  v118 = v15;
  v119 = v16;
  v120 = v17;
  v124 = v21;
LABEL_14:
  v30 = &v100[v103];
  v100[v103 - 1] = 0;
  if ( (sub_430D20(".", &v112) & 0x80000000) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v60 = *(_DWORD *)(StatusReg + 40);
    goto LABEL_73;
  }
  v126 = v23;
  v31 = v112;
  v22 = v113;
  if ( (sub_430D20("/", &v112) & 0x80000000) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v23 = v126;
    v60 = *(_DWORD *)(StatusReg + 40);
    goto LABEL_73;
  }
  v105 = v30 - 1;
  v107 = v112;
  v108 = v113;
  v109 = v22 != v113 || v31 != v112;
  v110 = v109;
  if ( !v109 )
    goto LABEL_99;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v104 = "..";
  v122 = v19;
  v18 = 0;
  v33 = -100;
  while ( 2 )
  {
    v34 = sub_430D40(v33, v104, 0);
    v33 = v34;
    if ( (v34 & 0x80000000) != 0 )
    {
      v110 = 0;
      v60 = *(_DWORD *)(StatusReg + 40);
      if ( !v18 )
        goto LABEL_106;
      goto LABEL_105;
    }
    if ( (unsigned int)sub_410930(v34, &v112) )
    {
      v60 = *(_DWORD *)(StatusReg + 40);
      if ( !v18 )
        goto LABEL_96;
LABEL_105:
      sub_430220(v18);
      if ( v110 )
        goto LABEL_96;
LABEL_106:
      v19 = v122;
      v23 = v126;
      goto LABEL_73;
    }
    if ( v18 && (unsigned int)sub_430220(v18) || (v35 = v112, v106 = v113, (v18 = sub_4437E0(v33)) == 0) )
    {
      v60 = *(_DWORD *)(StatusReg + 40);
LABEL_96:
      sub_410CD0(v33);
      v19 = v122;
      v23 = v126;
      goto LABEL_73;
    }
    v36 = v109;
    do
    {
LABEL_24:
      *(_DWORD *)(StatusReg + 40) = 0;
      v37 = sub_4302C0(v18);
      if ( v37 )
      {
LABEL_25:
        if ( *(_BYTE *)(v37 + 19) != 46 )
          goto LABEL_26;
        goto LABEL_62;
      }
      while ( 1 )
      {
        v60 = *(_DWORD *)(StatusReg + 40);
        if ( v60 )
          v61 = 1;
        else
          v61 = !v36;
        if ( v61 )
          goto LABEL_70;
        sub_443760(v18);
        v37 = sub_4302C0(v18);
        if ( !v37 )
        {
          v60 = *(_DWORD *)(StatusReg + 40);
LABEL_70:
          if ( !v60 )
          {
            v60 = 2;
            *(_DWORD *)(StatusReg + 40) = 2;
          }
          sub_430220(v18);
          v19 = v122;
          v23 = v126;
LABEL_73:
          if ( !v102 )
            sub_40C1A0(v100);
          v62 = v101;
          *(_DWORD *)(StatusReg + 40) = v60;
          v14 = v117;
          v15 = v118;
          v16 = v119;
          v17 = v120;
          if ( v62 )
            v63 = 1;
          else
            v63 = *((_QWORD *)&v101 + 1) == 0;
          v21 = v124;
          if ( !v63 )
            goto LABEL_79;
LABEL_56:
          v100 = 0;
          goto LABEL_57;
        }
        v36 = 0;
        if ( *(_BYTE *)(v37 + 19) != 46 )
          break;
LABEL_62:
        if ( !*(_BYTE *)(v37 + 20) )
          goto LABEL_24;
        if ( (*(_QWORD *)(v37 + 16) & 0xFFFF00000000LL) != 0x2E00000000LL )
        {
LABEL_26:
          if ( !v36 )
            break;
          if ( *(_QWORD *)v37 == (_QWORD)v22 || v35 != v31 )
          {
            v36 = *(_QWORD *)v37 == (_QWORD)v22 || v35 != v31;
            break;
          }
          goto LABEL_24;
        }
        *(_DWORD *)(StatusReg + 40) = 0;
        v37 = sub_4302C0(v18);
        if ( v37 )
          goto LABEL_25;
      }
      v38 = v37 + 19;
    }
    while ( (unsigned int)sub_443F80(v33, v37 + 19, &v112, 256)
         || (v114 & 0xF000) != 0x4000
         || v112 != v31
         || v113 != v22 );
    v39 = v105 - v100;
    v43 = ifunc_40DFD0(v38);
    if ( v105 - v100 <= v43 )
    {
      if ( *((_QWORD *)&v101 + 1) )
      {
        v60 = 34;
        *(_DWORD *)(StatusReg + 40) = 34;
        sub_430220(v18);
        v19 = v122;
        v23 = v126;
        goto LABEL_73;
      }
      if ( v43 < v103 )
        v52 = v103;
      else
        v52 = v43;
      v111 = v52;
      v105 = (char *)(v52 + v103);
      if ( __CFADD__(v52, v103)
        || (v53 = sub_40C434((__int64)v100, v52 + v103, v44, v45, v46, v47, v48, v49, v50, v51, v52, v40, v41, v42),
            (v22 = v53) == 0) )
      {
        *(_DWORD *)(StatusReg + 40) = 12;
        sub_430220(v18);
        if ( !v102 )
          sub_40C1A0(v100);
        v19 = v122;
        *(_DWORD *)(StatusReg + 40) = 12;
        v14 = v117;
        v15 = v118;
        v16 = v119;
        v17 = v120;
        v21 = v124;
        v23 = v126;
        goto LABEL_56;
      }
      v54 = j_ifunc_40DC90(&v53[v39 + v111], &v53[v39], v103 - v39);
      v100 = v22;
      v103 = (unsigned __int64)v105;
      v105 = (char *)v54;
    }
    v55 = j_ifunc_40DC90(&v105[-v43], v38, v43);
    v56 = v106;
    v57 = v107 == v35;
    *(_BYTE *)(v55 - 1) = 47;
    v57 = v57 && v108 == v56;
    v105 = (char *)(v55 - 1);
    if ( !v57 )
    {
      v22 = v106;
      v31 = v35;
      continue;
    }
    break;
  }
  if ( (unsigned int)sub_430220(v18) )
  {
    v19 = v122;
    v23 = v126;
    v60 = *(_DWORD *)(StatusReg + 40);
    goto LABEL_73;
  }
  v19 = v122;
  v30 = &v100[v103];
LABEL_99:
  v78 = v105;
  if ( v105 == &v100[v103 - 1] )
  {
    *(v105 - 1) = 47;
    v105 = v78 - 1;
  }
  v79 = v30 - v105;
  j_ifunc_40DD80(v100, v105, v79);
  if ( !*((_QWORD *)&v101 + 1) )
  {
    if ( v79 >= v103 )
    {
      v14 = v117;
      v15 = v118;
      v16 = v119;
      v17 = v120;
      v21 = v124;
      v23 = v126;
      goto LABEL_57;
    }
    v102 = sub_40C434((__int64)v100, v79, v84, v85, v86, v87, v88, v89, v90, v91, v80, v81, v82, v83);
  }
  v92 = v102;
  v14 = v117;
  v15 = v118;
  if ( !v102 )
    v92 = v100;
  v16 = v119;
  v17 = v120;
  v100 = v92;
  v21 = v124;
  v23 = v126;
LABEL_57:
  if ( v115 == qword_48DD60 )
    return (__int64)v100;
  v117 = v14;
  v118 = v15;
  v119 = v16;
  v120 = v17;
  v121 = v18;
  v122 = v19;
  v123 = v20;
  v124 = v21;
  v125 = v22;
  v126 = v23;
  v93 = sub_412340();
  v98 = &v116;
  v99 = v24;
  v97 = qword_48DD60;
  result = (unsigned int)sub_430FE0(v93, v96, &qword_48DD60, 0) == 0;
  if ( v97 != qword_48DD60 )
  {
    v94 = sub_412340();
    return sub_430D20(v94, v95);
  }
  return result;
}
