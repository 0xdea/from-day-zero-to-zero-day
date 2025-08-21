char *__fastcall getcwd(
        char *a1,
        unsigned __int64 a2,
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
  __int64 v19; // x23
  __int64 v20; // x24
  __int64 v21; // x25
  __int64 v22; // x26
  __int64 v23; // x27
  __int64 v24; // x28
  __int64 v25; // x3
  __int64 *v26; // x2
  int v27; // w0
  char *v28; // x0
  char *v29; // x19
  double v30; // d0
  double v31; // d1
  double v32; // d2
  double v33; // d3
  double v34; // d4
  double v35; // d5
  double v36; // d6
  double v37; // d7
  __dev_t st_dev; // x26
  __ino_t st_ino; // x27
  unsigned __int64 StatusReg; // x21
  int *v41; // x23
  unsigned int v42; // w24
  int v43; // w0
  __dev_t v44; // x28
  _BOOL4 v45; // w20
  __int64 v46; // x0
  double v47; // d0
  double v48; // d1
  double v49; // d2
  double v50; // d3
  double v51; // d4
  double v52; // d5
  double v53; // d6
  double v54; // d7
  __int64 v55; // x19
  __int64 v56; // x20
  __int64 v57; // x3
  void *v58; // x4
  void *v59; // x5
  void *v60; // x6
  unsigned __int64 v61; // x26
  double v62; // d0
  double v63; // d1
  double v64; // d2
  double v65; // d3
  double v66; // d4
  double v67; // d5
  double v68; // d6
  double v69; // d7
  __int64 v70; // x2
  __int64 v71; // x0
  __int64 v72; // x3
  double v73; // d0
  double v74; // d1
  double v75; // d2
  double v76; // d3
  double v77; // d4
  double v78; // d5
  double v79; // d6
  double v80; // d7
  bool v81; // zf
  int v82; // w0
  int v84; // w19
  bool v85; // zf
  bool v86; // zf
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  void *v90; // x4
  void *v91; // x5
  void *v92; // x6
  double v93; // d0
  double v94; // d1
  double v95; // d2
  double v96; // d3
  double v97; // d4
  double v98; // d5
  double v99; // d6
  double v100; // d7
  __int64 v101; // x0
  unsigned __int64 v102; // x19
  __int64 v103; // x2
  __int64 v104; // x3
  void *v105; // x4
  void *v106; // x5
  void *v107; // x6
  double v108; // d0
  double v109; // d1
  double v110; // d2
  double v111; // d3
  double v112; // d4
  double v113; // d5
  double v114; // d6
  double v115; // d7
  __int64 v116; // x0
  double v117; // d0
  double v118; // d1
  double v119; // d2
  double v120; // d3
  double v121; // d4
  double v122; // d5
  double v123; // d6
  double v124; // d7
  char *v125; // [xsp+0h] [xbp-F0h]
  __int128 v126; // [xsp+8h] [xbp-E8h]
  unsigned __int64 v127; // [xsp+18h] [xbp-D8h]
  __int64 v128; // [xsp+18h] [xbp-D8h]
  unsigned __int64 v129; // [xsp+20h] [xbp-D0h]
  __int64 v130; // [xsp+30h] [xbp-C0h]
  unsigned __int64 v131; // [xsp+30h] [xbp-C0h]
  __ino_t v132; // [xsp+38h] [xbp-B8h]
  __dev_t v133; // [xsp+40h] [xbp-B0h]
  __ino_t v134; // [xsp+48h] [xbp-A8h]
  _BOOL4 v135; // [xsp+50h] [xbp-A0h]
  _BOOL4 v136; // [xsp+54h] [xbp-9Ch]
  __int64 v137; // [xsp+58h] [xbp-98h]
  struct stat v138; // [xsp+68h] [xbp-88h] BYREF
  __int64 v139; // [xsp+100h] [xbp+10h]
  __int64 v140; // [xsp+108h] [xbp+18h]
  __int64 v141; // [xsp+110h] [xbp+20h]
  __int64 v142; // [xsp+118h] [xbp+28h]
  __int64 v143; // [xsp+120h] [xbp+30h]
  __int64 v144; // [xsp+128h] [xbp+38h]
  __int64 v145; // [xsp+130h] [xbp+40h]
  __int64 v146; // [xsp+138h] [xbp+48h]
  __int64 v147; // [xsp+140h] [xbp+50h]
  __int64 v148; // [xsp+148h] [xbp+58h]

  v25 = (__int64)a1;
  v26 = &_stack_chk_guard;
  *(_QWORD *)&v126 = a1;
  *((_QWORD *)&v126 + 1) = a2;
  if ( a2 )
  {
    v125 = a1;
    if ( a1 )
      goto LABEL_7;
  }
  else
  {
    if ( a1 )
    {
LABEL_57:
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
      return 0;
    }
    v27 = getpagesize();
    if ( v27 < 4096 )
      v27 = 4096;
    a2 = v27;
  }
  v127 = a2;
  v125 = (char *)malloc(a2, a3, a4, a5, a6, a7, a8, a9, a10, a2, (__int64)v26, v25, a13, a14, a15);
  a2 = v127;
  if ( !v125 )
    return 0;
LABEL_7:
  v28 = linux_eabi_syscall(__NR_getcwd, v125, a2);
  if ( (unsigned __int64)v28 > 0xFFFFFFFFFFFFF000LL )
  {
    v141 = v17;
    v142 = v18;
    v82 = -(int)v28;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v82;
  }
  else
  {
    if ( (int)v28 > 0 )
    {
      if ( *v125 == 47 )
      {
        if ( v126 == 0 )
          *(_QWORD *)&v126 = realloc(
                               (__int64)v125,
                               (int)v28,
                               a3,
                               a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               a9,
                               a10,
                               *((__int64 *)&v126 + 1),
                               v25,
                               a13,
                               a14,
                               a15);
        v101 = v126;
        if ( !(_QWORD)v126 )
          return v125;
        return (char *)v101;
      }
      goto LABEL_10;
    }
    if ( !(_DWORD)v28 )
      goto LABEL_10;
    v141 = v17;
    v142 = v18;
    v82 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  }
  if ( v82 != 36 )
  {
    if ( v82 == 34 && v126 == 0 )
    {
      v139 = v15;
      v140 = v16;
      v143 = v19;
      v144 = v20;
      v145 = v21;
      v146 = v22;
      v147 = v23;
      v148 = v24;
      _libc_assert_fail(
        "errno != ERANGE || buf != NULL || size != 0",
        (__int64)"../sysdeps/unix/sysv/linux/getcwd.c",
        0x7Bu,
        (__int64)"__getcwd");
    }
    if ( (_QWORD)v126 )
      return 0;
LABEL_54:
    free((__int64)v125, a3, a4, a5, a6, a7, a8, a9, a10);
    return 0;
  }
  v17 = v141;
  v18 = v142;
LABEL_10:
  if ( v126 == 0 )
  {
    free((__int64)v125, a3, a4, a5, a6, a7, a8, a9, a10);
    v125 = (char *)malloc(0x1000u, v93, v94, v95, v96, v97, v98, v99, v100, v87, v88, v89, v90, v91, v92);
    if ( !v125 )
      return 0;
    v128 = 0;
    v129 = 4096;
    v141 = v17;
    v142 = v18;
    goto LABEL_14;
  }
  if ( *((_QWORD *)&v126 + 1) == 1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
    if ( (_QWORD)v126 )
      return 0;
    goto LABEL_54;
  }
  if ( !*((_QWORD *)&v126 + 1) )
    goto LABEL_57;
  v128 = (__int64)v125;
  v129 = *((_QWORD *)&v126 + 1);
  v141 = v17;
  v142 = v18;
LABEL_14:
  v29 = &v125[v129];
  v125[v129 - 1] = 0;
  if ( (lstat64(".", &v138) & 0x80000000) != 0
    || (st_dev = v138.st_dev, st_ino = v138.st_ino, (lstat64("/", &v138) & 0x80000000) != 0) )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v84 = *(_DWORD *)(StatusReg + 40);
    goto LABEL_71;
  }
  v130 = (__int64)(v29 - 1);
  v133 = v138.st_dev;
  v134 = v138.st_ino;
  v135 = st_ino != v138.st_ino || st_dev != v138.st_dev;
  v136 = v135;
  if ( !v135 )
    goto LABEL_97;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v41 = 0;
  v42 = -100;
  while ( 2 )
  {
    v43 = openat64(v42, "..", 0);
    v42 = v43;
    if ( v43 < 0 )
    {
      v136 = 0;
      v84 = *(_DWORD *)(StatusReg + 40);
      if ( !v41 )
        goto LABEL_71;
      goto LABEL_103;
    }
    if ( (unsigned int)fstat64(v43, &v138) )
    {
      v84 = *(_DWORD *)(StatusReg + 40);
      if ( !v41 )
        goto LABEL_94;
LABEL_103:
      closedir(v41, v30, v31, v32, v33, v34, v35, v36, v37);
      if ( v136 )
        goto LABEL_94;
LABEL_71:
      if ( !v128 )
        free((__int64)v125, v30, v31, v32, v33, v34, v35, v36, v37);
      *(_DWORD *)(StatusReg + 40) = v84;
      if ( (_QWORD)v126 )
        v86 = 1;
      else
        v86 = *((_QWORD *)&v126 + 1) == 0;
      if ( !v86 )
        free(v128, v30, v31, v32, v33, v34, v35, v36, v37);
      return 0;
    }
    if ( v41 && (unsigned int)closedir(v41, v30, v31, v32, v33, v34, v35, v36, v37)
      || (v44 = v138.st_dev, v132 = v138.st_ino, (v41 = (int *)fdopendir(v42)) == 0) )
    {
      v84 = *(_DWORD *)(StatusReg + 40);
LABEL_94:
      _close_nocancel(v42);
      goto LABEL_71;
    }
    v45 = v135;
    do
    {
LABEL_24:
      *(_DWORD *)(StatusReg + 40) = 0;
      v46 = readdir64((__int64)v41);
      if ( v46 )
      {
LABEL_25:
        if ( *(_BYTE *)(v46 + 19) != 46 )
          goto LABEL_26;
        goto LABEL_60;
      }
      while ( 1 )
      {
        v84 = *(_DWORD *)(StatusReg + 40);
        if ( v84 )
          v85 = 1;
        else
          v85 = !v45;
        if ( v85 )
          goto LABEL_68;
        rewinddir(v41);
        v46 = readdir64((__int64)v41);
        if ( !v46 )
        {
          v84 = *(_DWORD *)(StatusReg + 40);
LABEL_68:
          if ( !v84 )
          {
            v84 = 2;
            *(_DWORD *)(StatusReg + 40) = 2;
          }
          closedir(v41, v47, v48, v49, v50, v51, v52, v53, v54);
          goto LABEL_71;
        }
        v45 = 0;
        if ( *(_BYTE *)(v46 + 19) != 46 )
          break;
LABEL_60:
        if ( !*(_BYTE *)(v46 + 20) )
          goto LABEL_24;
        if ( (*(_QWORD *)(v46 + 16) & 0xFFFF00000000LL) != 0x2E00000000LL )
        {
LABEL_26:
          if ( !v45 )
            break;
          if ( *(_QWORD *)v46 == st_ino || v44 != st_dev )
          {
            v45 = *(_QWORD *)v46 == st_ino || v44 != st_dev;
            break;
          }
          goto LABEL_24;
        }
        *(_DWORD *)(StatusReg + 40) = 0;
        v46 = readdir64((__int64)v41);
        if ( v46 )
          goto LABEL_25;
      }
      v55 = v46 + 19;
    }
    while ( (unsigned int)fstatat64(v42, v46 + 19, &v138, 256)
         || (v138.st_nlink & 0xF000) != 0x4000
         || v138.st_dev != st_dev
         || v138.st_ino != st_ino );
    v56 = v130 - (_QWORD)v125;
    v61 = strlen(v55);
    if ( v130 - (__int64)v125 <= v61 )
    {
      if ( *((_QWORD *)&v126 + 1) )
      {
        v84 = 34;
        *(_DWORD *)(StatusReg + 40) = 34;
        closedir(v41, v62, v63, v64, v65, v66, v67, v68, v69);
        goto LABEL_71;
      }
      if ( v61 < v129 )
        v70 = v129;
      else
        v70 = v61;
      v137 = v70;
      v131 = v70 + v129;
      if ( __CFADD__(v70, v129)
        || (v71 = realloc((__int64)v125, v70 + v129, v62, v63, v64, v65, v66, v67, v68, v69, v70, v57, v58, v59, v60)) == 0 )
      {
        *(_DWORD *)(StatusReg + 40) = 12;
        closedir(v41, v62, v63, v64, v65, v66, v67, v68, v69);
        if ( !v128 )
          free((__int64)v125, v117, v118, v119, v120, v121, v122, v123, v124);
        *(_DWORD *)(StatusReg + 40) = 12;
        return 0;
      }
      v125 = (char *)v71;
      v129 = v131;
      v130 = j_memcpy(v71 + v56 + v137);
    }
    v72 = j_memcpy(v130 - v61);
    *(_BYTE *)(v72 - 1) = 47;
    v81 = v133 == v44 && v134 == v132;
    v130 = v72 - 1;
    if ( !v81 )
    {
      st_ino = v132;
      st_dev = v44;
      continue;
    }
    break;
  }
  if ( (unsigned int)closedir(v41, v73, v74, v75, v76, v77, v78, v79, v80) )
  {
    v84 = *(_DWORD *)(StatusReg + 40);
    goto LABEL_71;
  }
  v29 = &v125[v129];
LABEL_97:
  if ( (char *)v130 == &v125[v129 - 1] )
    *(_BYTE *)--v130 = 47;
  v102 = (unsigned __int64)&v29[-v130];
  j_memmove(v125, v130, v102);
  if ( !*((_QWORD *)&v126 + 1) )
  {
    if ( v102 >= v129 )
      return v125;
    v128 = realloc((__int64)v125, v102, v108, v109, v110, v111, v112, v113, v114, v115, v103, v104, v105, v106, v107);
  }
  v116 = v128;
  if ( !v128 )
    return v125;
  return (char *)v116;
}
