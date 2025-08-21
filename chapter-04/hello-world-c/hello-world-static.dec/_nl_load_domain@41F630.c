__int64 *__fastcall nl_load_domain(__int64 a1, __int64 a2)
{
  unsigned __int64 StatusReg; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  double v11; // d0
  double v12; // d1
  double v13; // d2
  double v14; // d3
  double v15; // d4
  double v16; // d5
  double v17; // d6
  double v18; // d7
  int v19; // w0
  int v20; // w2
  const char *v21; // x0
  int v22; // w0
  int v23; // w25
  int v24; // w28
  size_t st_size; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  void *v29; // x4
  void *v30; // x5
  void *v31; // x6
  int *v32; // x27
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  __int64 v41; // x2
  __int64 v42; // x3
  void *v43; // x4
  void *v44; // x5
  void *v45; // x6
  double v46; // d1
  double v47; // d2
  double v48; // d3
  double v49; // d4
  double v50; // d5
  double v51; // d6
  double v52; // d7
  int v53; // w25
  _BOOL4 v54; // w21
  __int64 v56; // x3
  void *v57; // x5
  void *v58; // x6
  __int64 v59; // x18
  uint64x2_t v60; // q0
  uint64x2_t v61; // q1
  double v62; // d2
  double v63; // d3
  double v64; // d4
  double v65; // d5
  double v66; // d6
  double v67; // d7
  signed int v68; // w0
  int v69; // w0
  __int64 v70; // x2
  unsigned int v71; // w8
  unsigned int v72; // w23
  int8x8_t v73; // d0
  unsigned int v74; // w9
  char *v75; // x9
  unsigned int v76; // w21
  unsigned int v77; // w11
  __int64 v78; // x0
  __int64 v79; // x26
  void *v80; // x5
  unsigned __int64 v81; // x6
  __int64 v82; // x7
  void *v83; // x4
  __int64 v84; // x3
  char *v85; // x9
  unsigned int v86; // w0
  unsigned int v87; // w1
  unsigned __int8 *v88; // x0
  int v89; // w1
  char *v90; // x1
  __int64 v91; // x8
  unsigned int v92; // w3
  unsigned int v93; // w10
  unsigned int *v94; // x3
  unsigned int *v95; // x10
  unsigned int *v96; // x23
  unsigned int v97; // w22
  __int64 v98; // x24
  _QWORD *v99; // x20
  int v100; // w26
  __int64 i; // x1
  unsigned int *v102; // x28
  __int64 j; // x3
  unsigned int v104; // w2
  __int64 v105; // x27
  __int64 v106; // x0
  unsigned int v107; // w0
  uint32x2_t v108; // d0
  __int64 msg; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  void *v114; // x4
  void *v115; // x5
  void *v116; // x6
  __int64 v117; // x0
  double v118; // d0
  double v119; // d1
  double v120; // d2
  double v121; // d3
  double v122; // d4
  double v123; // d5
  double v124; // d6
  double v125; // d7
  double v126; // d0
  double v127; // d1
  double v128; // d2
  double v129; // d3
  double v130; // d4
  double v131; // d5
  double v132; // d6
  double v133; // d7
  __int64 v134; // x9
  __int64 v135; // x0
  char *v136; // x23
  size_t v137; // x26
  signed __int64 nocancel; // x0
  double v139; // d0
  __int64 v141; // x7
  __int64 v142; // x0
  __int64 v143; // x26
  __int64 v144; // x2
  unsigned __int64 v145; // x11
  unsigned __int64 v146; // x1
  unsigned __int64 v147; // x15
  __int64 v148; // x16
  __int64 v149; // x5
  __int64 v150; // x8
  __int64 v151; // x23
  __int64 v152; // x0
  unsigned __int64 v153; // x13
  unsigned __int64 v154; // x0
  __int64 v155; // x30
  unsigned __int64 v156; // x14
  __int64 v157; // x24
  unsigned __int64 v158; // x1
  unsigned __int64 v159; // x0
  unsigned __int64 v160; // x13
  unsigned int v161; // w17
  unsigned __int64 v162; // x0
  unsigned __int64 v163; // x13
  char *v164; // x9
  unsigned int *v165; // x10
  unsigned __int64 v166; // x1
  __int64 v167; // x3
  unsigned __int64 v168; // x0
  __int64 v169; // x14
  size_t v170; // x13
  unsigned __int64 v171; // x21
  __int64 v172; // x22
  __int64 v173; // x7
  __int64 v174; // x26
  int v175; // w12
  __int64 v176; // x0
  char *v177; // x0
  int v178; // w1
  __int64 v179; // x5
  _QWORD *v180; // x1
  int v181; // w6
  unsigned int *v182; // x20
  __int64 m; // x28
  __int64 v184; // x18
  char *k; // x0
  unsigned int v186; // w5
  __int64 v187; // x26
  __int64 v188; // x0
  unsigned int v189; // w1
  _QWORD *v190; // x20
  int v191; // w21
  unsigned int v192; // w0
  unsigned int v193; // w4
  unsigned int v194; // w1
  int *v195; // x2
  unsigned int v196; // w3
  unsigned int v197; // w8
  unsigned int n; // w4
  unsigned int v199; // w2
  bool v200; // cc
  __int64 v201; // x0
  int v202; // w0
  __int64 v203; // x0
  __int64 v204; // x0
  unsigned int *v205; // x20
  unsigned __int64 v206; // x23
  unsigned __int64 v207; // x21
  unsigned int v208; // w0
  unsigned int v209; // w24
  __int64 v210; // x24
  unsigned __int64 v211; // x0
  __int64 v212; // x1
  unsigned __int64 v213; // x24
  unsigned __int64 v214; // x1
  unsigned __int64 v215; // x0
  __int64 v216; // x27
  unsigned __int64 v217; // x7
  unsigned __int64 v218; // x1
  int v219; // w1
  char *v220; // [xsp+0h] [xbp-150h]
  unsigned int *v221; // [xsp+0h] [xbp-150h]
  size_t v222; // [xsp+0h] [xbp-150h]
  int v223; // [xsp+0h] [xbp-150h]
  unsigned int v224; // [xsp+1Ch] [xbp-134h]
  unsigned int v225; // [xsp+1Ch] [xbp-134h]
  int *v226; // [xsp+20h] [xbp-130h]
  __int64 v227; // [xsp+20h] [xbp-130h]
  char *v228; // [xsp+28h] [xbp-128h]
  __int64 v229; // [xsp+28h] [xbp-128h]
  unsigned __int64 v230; // [xsp+28h] [xbp-128h]
  unsigned __int64 v231; // [xsp+28h] [xbp-128h]
  unsigned int v232; // [xsp+28h] [xbp-128h]
  __int64 v233; // [xsp+30h] [xbp-120h]
  __int64 v234; // [xsp+30h] [xbp-120h]
  unsigned int *v235; // [xsp+38h] [xbp-118h]
  unsigned int *v236; // [xsp+38h] [xbp-118h]
  int v237; // [xsp+40h] [xbp-110h]
  size_t v238; // [xsp+40h] [xbp-110h]
  size_t v239; // [xsp+48h] [xbp-108h]
  int *v240; // [xsp+48h] [xbp-108h]
  __int64 v241; // [xsp+50h] [xbp-100h]
  __int64 v242; // [xsp+50h] [xbp-100h]
  __int64 v243; // [xsp+58h] [xbp-F8h]
  int v244; // [xsp+58h] [xbp-F8h]
  __int64 v245; // [xsp+60h] [xbp-F0h]
  __int64 v246; // [xsp+60h] [xbp-F0h]
  unsigned int *v247; // [xsp+68h] [xbp-E8h]
  unsigned __int64 v248; // [xsp+68h] [xbp-E8h]
  char *v249; // [xsp+70h] [xbp-E0h]
  __int64 v250; // [xsp+78h] [xbp-D8h]
  __int64 v251; // [xsp+80h] [xbp-D0h]
  char *v252; // [xsp+80h] [xbp-D0h]
  __int64 v253; // [xsp+88h] [xbp-C8h]
  __int64 v254; // [xsp+88h] [xbp-C8h]
  _QWORD *v255; // [xsp+90h] [xbp-C0h]
  __int64 v256; // [xsp+98h] [xbp-B8h]
  __int64 v257; // [xsp+A0h] [xbp-B0h]
  __int64 v258; // [xsp+A8h] [xbp-A8h]
  char v259[8]; // [xsp+B0h] [xbp-A0h] BYREF
  _QWORD v260[2]; // [xsp+B8h] [xbp-98h] BYREF
  struct stat v261; // [xsp+C8h] [xbp-88h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( qword_496938 != StatusReg - 1856 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&lock_0_0) )
      _lll_lock_wait_private(&lock_0_0, v11, v12, v13, v14, v15, v16, v17, v18, v5, v6, v7, v8, v9, v10);
    qword_496938 = StatusReg - 1856;
  }
  v19 = *(_DWORD *)(a1 + 8);
  v20 = dword_496934++;
  if ( v19 )
    goto LABEL_59;
  v21 = *(const char **)a1;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !v21 )
    goto LABEL_58;
  v22 = _open_nocancel(v21, 0);
  v23 = v22;
  if ( v22 == -1 )
  {
    v20 = dword_496934 - 1;
    goto LABEL_58;
  }
  v24 = fstat64(v22, &v261);
  if ( v24 )
    goto LABEL_71;
  st_size = v261.st_size;
  if ( v261.st_size <= 0x2FuLL )
    goto LABEL_71;
  v32 = (int *)mmap64(0, v261.st_size, 1, 2, v23, 0);
  if ( v32 != (int *)-1LL )
  {
    _close_nocancel(v23);
    v53 = *v32;
    v54 = *v32 != -1794895138;
    if ( *v32 != -1794895138 && v53 != -569244523 )
    {
      munmap(v32, st_size);
      v20 = dword_496934 - 1;
      goto LABEL_58;
    }
    v24 = 1;
    goto LABEL_17;
  }
  v135 = malloc(st_size, v33, v34, v35, v36, v37, v38, v39, v40, v26, v27, v28, v29, v30, v31);
  v32 = (int *)v135;
  if ( !v135 )
  {
LABEL_71:
    _close_nocancel(v23);
LABEL_57:
    v20 = dword_496934 - 1;
    goto LABEL_58;
  }
  v136 = (char *)v135;
  v137 = st_size;
  do
  {
    while ( 1 )
    {
      nocancel = _read_nocancel(v23, v136, v137);
      if ( nocancel > 0 )
        break;
      if ( nocancel != -1 || *(_DWORD *)(StatusReg + 40) != 4 )
        goto LABEL_71;
    }
    v136 += nocancel;
    v137 -= nocancel;
  }
  while ( v137 );
  _close_nocancel(v23);
  v53 = *v32;
  v54 = *v32 != -1794895138;
  if ( *v32 != -1794895138 && v53 != -569244523 )
  {
    free((__int64)v32, v139, v46, v47, v48, v49, v50, v51, v52);
    goto LABEL_57;
  }
LABEL_17:
  v59 = malloc(
          0xC8u,
          vdupq_n_s64((unsigned __int64)v32).n128_f64[0],
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          2500072158LL,
          v41,
          v42,
          v43,
          v44,
          v45);
  if ( !v59 )
    goto LABEL_57;
  v68 = v32[1];
  *(_QWORD *)v59 = v32;
  *(_DWORD *)(v59 + 8) = v24;
  *(_QWORD *)(v59 + 16) = st_size;
  *(_QWORD *)(a1 + 16) = v59;
  *(_DWORD *)(v59 + 24) = v54;
  *(_QWORD *)(v59 + 32) = 0;
  if ( v53 != -1794895138 )
  {
    v69 = bswap32(v68);
    LOWORD(v70) = v69;
    if ( (unsigned int)(v69 >> 16) > 1 )
      goto LABEL_64;
    v61 = vdupq_n_s64((unsigned __int64)v32);
    v71 = v32[5];
    *(_DWORD *)(v59 + 40) = bswap32(v32[2]);
    v72 = bswap32(v71);
    v73.n64_u64[0] = *(unsigned __int64 *)(v32 + 3);
    *(_DWORD *)(v59 + 88) = v72;
    v60 = vaddw_u32(v61, vrev32_s8(v73));
    *(uint64x2_t *)(v59 + 48) = v60;
    if ( v72 > 2 )
    {
      v74 = v32[6];
      *(_DWORD *)(v59 + 104) = 1;
      v75 = (char *)v32 + bswap32(v74);
      *(_QWORD *)(v59 + 96) = v75;
      if ( (_WORD)v69 )
      {
        v70 = (unsigned int)v32[9];
        if ( (_DWORD)v70 )
        {
          v76 = bswap32(v70);
          v77 = bswap32(v32[7]);
          v78 = bswap32(v32[8]);
          goto LABEL_24;
        }
      }
LABEL_54:
      *(_DWORD *)(v59 + 64) = 0;
      *(_QWORD *)(v59 + 72) = 0;
      *(_QWORD *)(v59 + 80) = 0;
      goto LABEL_55;
    }
LABEL_53:
    *(_QWORD *)(v59 + 96) = 0;
    *(_DWORD *)(v59 + 104) = v54;
    if ( (_WORD)v70 )
      goto LABEL_64;
    goto LABEL_54;
  }
  v70 = (unsigned int)v68;
  if ( (unsigned int)(v68 >> 16) > 1 )
    goto LABEL_64;
  v61 = vdupq_n_s64((unsigned __int64)v32);
  v72 = v32[5];
  *(_DWORD *)(v59 + 40) = v32[2];
  v108.n64_u64[0] = *(unsigned __int64 *)(v32 + 3);
  *(_DWORD *)(v59 + 88) = v72;
  v60 = vaddw_u32(v61, v108);
  *(uint64x2_t *)(v59 + 48) = v60;
  if ( v72 <= 2 )
    goto LABEL_53;
  v134 = (unsigned int)v32[6];
  *(_DWORD *)(v59 + 104) = 0;
  v75 = (char *)v32 + v134;
  *(_QWORD *)(v59 + 96) = v75;
  if ( !(_WORD)v68 )
    goto LABEL_54;
  v76 = v32[9];
  if ( !v76 )
    goto LABEL_54;
  v77 = v32[7];
  v78 = (unsigned int)v32[8];
LABEL_24:
  v79 = v77;
  v220 = (char *)v32 + v78;
  v224 = v77;
  v228 = v75;
  v82 = calloc(
          v77,
          8u,
          v60.n128_f64[0],
          v61.n128_f64[0],
          v62,
          v63,
          v64,
          v65,
          v66,
          v67,
          v70,
          v56,
          (char *)v32 + v78,
          v57,
          v58);
  if ( !v82 )
    goto LABEL_64;
  v83 = v220;
  v84 = 0;
  v85 = v228;
  if ( v224 )
  {
    do
    {
      v86 = *(_DWORD *)&v220[v84 + 4];
      v87 = *(_DWORD *)&v220[v84];
      if ( v53 == -1794895138 )
      {
        v88 = (unsigned __int8 *)v32 + v86;
      }
      else
      {
        v87 = bswap32(v87);
        v88 = (unsigned __int8 *)v32 + bswap32(v86);
      }
      if ( !v87 || v88[v87 - 1] )
      {
        free(v82, v60.n128_f64[0], v61.n128_f64[0], v62, v63, v64, v65, v66, v67);
        goto LABEL_64;
      }
      v89 = *v88;
      if ( v89 == 80 )
      {
        v80 = (void *)v88[1];
        v90 = 0;
        if ( (_DWORD)v80 == 82 )
        {
          v80 = (void *)v88[2];
          if ( (_DWORD)v80 == 73 )
          {
            v80 = (void *)v88[3];
            v81 = (unsigned __int8)((_BYTE)v80 - 88);
            if ( (unsigned int)v81 <= 0x20 )
            {
              v81 = 0x120821001uLL >> v81;
              if ( (v81 & 1) != 0 )
              {
                v81 = v88[4];
                switch ( (_DWORD)v81 )
                {
                  case '8':
                    if ( !v88[5] )
                    {
                      switch ( (_DWORD)v80 )
                      {
                        case 'd':
                          v90 = "d";
                          break;
                        case 'i':
                          v90 = "i";
                          break;
                        case 'o':
                          v90 = "o";
                          break;
                        case 'u':
                          v90 = "u";
                          break;
                        default:
                          v90 = "x";
                          if ( (_DWORD)v80 != 120 )
                            v90 = "X";
                          break;
                      }
                    }
                    break;
                  case '1':
                    v81 = v88[5];
                    if ( (_DWORD)v81 == 54 )
                    {
                      if ( v88[6] )
                      {
                        v90 = 0;
                      }
                      else
                      {
                        switch ( (_DWORD)v80 )
                        {
                          case 'd':
                            v90 = "d";
                            break;
                          case 'i':
                            v90 = "i";
                            break;
                          case 'o':
                            v90 = "o";
                            break;
                          case 'u':
                            v90 = "u";
                            break;
                          default:
                            v90 = "x";
                            if ( (_DWORD)v80 != 120 )
                              v90 = "X";
                            break;
                        }
                      }
                    }
                    break;
                  case '3':
                    v81 = v88[5];
                    v90 = 0;
                    if ( (_DWORD)v81 == 50 && !v88[6] )
                    {
                      switch ( (_DWORD)v80 )
                      {
                        case 'd':
                          v90 = "d";
                          break;
                        case 'i':
                          v90 = "i";
                          break;
                        case 'o':
                          v90 = "o";
                          break;
                        case 'u':
                          v90 = "u";
                          break;
                        default:
                          v90 = "x";
                          if ( (_DWORD)v80 != 120 )
                            v90 = "X";
                          break;
                      }
                    }
                    break;
                  case '6':
                    if ( v88[5] == 52 )
                    {
                      if ( v88[6] )
                      {
                        v90 = 0;
                      }
                      else
                      {
                        switch ( (_DWORD)v80 )
                        {
                          case 'd':
                            v90 = "ld";
                            break;
                          case 'i':
                            v90 = "li";
                            break;
                          case 'o':
                            v90 = "lo";
                            break;
                          case 'u':
                            v90 = "lu";
                            break;
                          default:
                            v90 = "lx";
                            if ( (_DWORD)v80 != 120 )
                              v90 = "lX";
                            break;
                        }
                      }
                    }
                    else
                    {
                      v90 = 0;
                    }
                    break;
                  case 'L':
                    if ( v88[5] == 69 )
                    {
                      if ( v88[6] == 65 )
                      {
                        if ( v88[7] == 83 )
                        {
                          if ( v88[8] == 84 )
                          {
                            v219 = v88[9];
                            switch ( v219 )
                            {
                              case '8':
                                if ( v88[10] )
                                {
                                  v90 = 0;
                                }
                                else
                                {
                                  switch ( (_DWORD)v80 )
                                  {
                                    case 'd':
                                      v90 = "d";
                                      break;
                                    case 'i':
                                      v90 = "i";
                                      break;
                                    case 'o':
                                      v90 = "o";
                                      break;
                                    case 'u':
                                      v90 = "u";
                                      break;
                                    default:
                                      v90 = "x";
                                      if ( (_DWORD)v80 != 120 )
                                        v90 = "X";
                                      break;
                                  }
                                }
                                break;
                              case '1':
                                if ( v88[10] == 54 )
                                {
                                  if ( v88[11] )
                                  {
                                    v90 = 0;
                                  }
                                  else
                                  {
                                    switch ( (_DWORD)v80 )
                                    {
                                      case 'd':
                                        v90 = "d";
                                        break;
                                      case 'i':
                                        v90 = "i";
                                        break;
                                      case 'o':
                                        v90 = "o";
                                        break;
                                      case 'u':
                                        v90 = "u";
                                        break;
                                      default:
                                        v90 = "x";
                                        if ( (_DWORD)v80 != 120 )
                                          v90 = "X";
                                        break;
                                    }
                                  }
                                }
                                else
                                {
                                  v90 = 0;
                                }
                                break;
                              case '3':
                                if ( v88[10] == 50 )
                                {
                                  if ( v88[11] )
                                  {
                                    v90 = 0;
                                  }
                                  else
                                  {
                                    switch ( (_DWORD)v80 )
                                    {
                                      case 'd':
                                        v90 = "d";
                                        break;
                                      case 'i':
                                        v90 = "i";
                                        break;
                                      case 'o':
                                        v90 = "o";
                                        break;
                                      case 'u':
                                        v90 = "u";
                                        break;
                                      default:
                                        v90 = "x";
                                        if ( (_DWORD)v80 != 120 )
                                          v90 = "X";
                                        break;
                                    }
                                  }
                                }
                                else
                                {
                                  v90 = 0;
                                }
                                break;
                              case '6':
                                if ( v88[10] == 52 )
                                {
                                  if ( v88[11] )
                                  {
                                    v90 = 0;
                                  }
                                  else
                                  {
                                    switch ( (_DWORD)v80 )
                                    {
                                      case 'd':
                                        v90 = "ld";
                                        break;
                                      case 'i':
                                        v90 = "li";
                                        break;
                                      case 'o':
                                        v90 = "lo";
                                        break;
                                      case 'u':
                                        v90 = "lu";
                                        break;
                                      default:
                                        v90 = "lx";
                                        if ( (_DWORD)v80 != 120 )
                                          v90 = "lX";
                                        break;
                                    }
                                  }
                                }
                                else
                                {
                                  v90 = 0;
                                }
                                break;
                              default:
                                v90 = 0;
                                break;
                            }
                          }
                          else
                          {
                            v90 = 0;
                          }
                        }
                        else
                        {
                          v90 = 0;
                        }
                      }
                      else
                      {
                        v90 = 0;
                      }
                    }
                    else
                    {
                      v90 = 0;
                    }
                    break;
                  case 'F':
                    v81 = v88[5];
                    v90 = 0;
                    if ( (_DWORD)v81 == 65 )
                    {
                      v81 = v88[6];
                      if ( (_DWORD)v81 == 83 )
                      {
                        v81 = v88[7];
                        if ( (_DWORD)v81 == 84 )
                        {
                          v81 = v88[8];
                          switch ( (_DWORD)v81 )
                          {
                            case '8':
                              if ( !v88[9] )
                              {
                                switch ( (_DWORD)v80 )
                                {
                                  case 'd':
                                    v90 = "d";
                                    break;
                                  case 'i':
                                    v90 = "i";
                                    break;
                                  case 'o':
                                    v90 = "o";
                                    break;
                                  case 'u':
                                    v90 = "u";
                                    break;
                                  default:
                                    v90 = "x";
                                    if ( (_DWORD)v80 != 120 )
                                      v90 = "X";
                                    break;
                                }
                              }
                              break;
                            case '1':
                              v81 = v88[9];
                              if ( (_DWORD)v81 == 54 )
                              {
                                if ( v88[10] )
                                {
                                  v90 = 0;
                                }
                                else
                                {
                                  switch ( (_DWORD)v80 )
                                  {
                                    case 'd':
                                      v90 = "ld";
                                      break;
                                    case 'i':
                                      v90 = "li";
                                      break;
                                    case 'o':
                                      v90 = "lo";
                                      break;
                                    case 'u':
                                      v90 = "lu";
                                      break;
                                    default:
                                      v90 = "lx";
                                      if ( (_DWORD)v80 != 120 )
                                        v90 = "lX";
                                      break;
                                  }
                                }
                              }
                              break;
                            case '3':
                              if ( v88[9] == 50 )
                              {
                                if ( v88[10] )
                                {
                                  v90 = 0;
                                }
                                else
                                {
                                  switch ( (_DWORD)v80 )
                                  {
                                    case 'd':
                                      v90 = "ld";
                                      break;
                                    case 'i':
                                      v90 = "li";
                                      break;
                                    case 'o':
                                      v90 = "lo";
                                      break;
                                    case 'u':
                                      v90 = "lu";
                                      break;
                                    default:
                                      v90 = "lx";
                                      if ( (_DWORD)v80 != 120 )
                                        v90 = "lX";
                                      break;
                                  }
                                }
                              }
                              else
                              {
                                v90 = 0;
                              }
                              break;
                            case '6':
                              if ( v88[9] == 52 )
                              {
                                if ( v88[10] )
                                {
                                  v90 = 0;
                                }
                                else
                                {
                                  switch ( (_DWORD)v80 )
                                  {
                                    case 'd':
                                      v90 = "ld";
                                      break;
                                    case 'i':
                                      v90 = "li";
                                      break;
                                    case 'o':
                                      v90 = "lo";
                                      break;
                                    case 'u':
                                      v90 = "lu";
                                      break;
                                    default:
                                      v90 = "lx";
                                      if ( (_DWORD)v80 != 120 )
                                        v90 = "lX";
                                      break;
                                  }
                                }
                              }
                              else
                              {
                                v90 = 0;
                              }
                              break;
                            default:
                              v90 = 0;
                              break;
                          }
                        }
                      }
                    }
                    break;
                  case 'M':
                    v81 = v88[5];
                    v90 = 0;
                    if ( (_DWORD)v81 == 65 )
                    {
                      v81 = v88[6];
                      if ( (_DWORD)v81 == 88 && !v88[7] )
                      {
                        switch ( (_DWORD)v80 )
                        {
                          case 'd':
                            v90 = "ld";
                            break;
                          case 'i':
                            v90 = "li";
                            break;
                          case 'o':
                            v90 = "lo";
                            break;
                          case 'u':
                            v90 = "lu";
                            break;
                          default:
                            v90 = "lx";
                            if ( (_DWORD)v80 != 120 )
                              v90 = "lX";
                            break;
                        }
                      }
                    }
                    break;
                  case 'P':
                    v81 = v88[5];
                    v90 = 0;
                    if ( (_DWORD)v81 == 84 )
                    {
                      v81 = v88[6];
                      if ( (_DWORD)v81 == 82 && !v88[7] )
                      {
                        switch ( (_DWORD)v80 )
                        {
                          case 'd':
                            v90 = "ld";
                            break;
                          case 'i':
                            v90 = "li";
                            break;
                          case 'o':
                            v90 = "lo";
                            break;
                          case 'u':
                            v90 = "lu";
                            break;
                          default:
                            v90 = "lx";
                            if ( (_DWORD)v80 != 120 )
                              v90 = "lX";
                            break;
                        }
                      }
                    }
                    break;
                  default:
                    v90 = 0;
                    break;
                }
              }
            }
          }
        }
      }
      else if ( v89 == 73 )
      {
        if ( v88[1] )
          v90 = 0;
        else
          v90 = "I";
      }
      else
      {
        v90 = 0;
      }
      *(_QWORD *)(v82 + v84) = v90;
      v84 += 8;
    }
    while ( 8 * v79 != v84 );
  }
  v91 = 4LL * v72;
  v92 = v32[10];
  v93 = v32[11];
  if ( v53 == -1794895138 )
  {
    v94 = (unsigned int *)((char *)v32 + v92);
    v95 = (unsigned int *)((char *)v32 + v93);
  }
  else
  {
    v94 = (unsigned int *)((char *)v32 + bswap32(v92));
    v95 = (unsigned int *)((char *)v32 + bswap32(v93));
  }
  v96 = v94;
  v239 = st_size;
  v97 = v224;
  v253 = a2;
  v98 = v82;
  v221 = v95;
  v225 = 0;
  v226 = v32;
  v229 = v91;
  v235 = &v94[v76];
  v237 = v24;
  v243 = a1;
  v245 = (__int64)v94;
  v247 = v95;
  v249 = v85;
  v251 = v91;
  do
  {
    v99 = v260;
    if ( v53 != -1794895138 )
    {
      v100 = 0;
      i = (__int64)v226 + bswap32(*v96);
      if ( *(_DWORD *)(i + 8) == -1 )
        goto LABEL_41;
      goto LABEL_43;
    }
    v100 = 0;
    for ( i = (__int64)v226 + *v96; ; i = (__int64)v226 + *v221 )
    {
      v105 = 0;
      if ( *(_DWORD *)(i + 8) != -1 )
        goto LABEL_43;
LABEL_76:
      *v99 = v105;
      if ( v100 )
        break;
      ++v99;
      if ( v53 != -1794895138 )
      {
        while ( 1 )
        {
          v100 = 1;
          i = (__int64)v226 + bswap32(*v221);
          if ( *(_DWORD *)(i + 8) != -1 )
            break;
LABEL_41:
          *v99++ = 0;
          if ( v100 )
            goto LABEL_107;
        }
LABEL_43:
        v102 = (unsigned int *)(i + 4);
        for ( j = 0; ; j = strlen(v106) + v105 )
        {
          v107 = *v102;
          v104 = v102[1];
          if ( v53 == -1794895138 )
          {
            v105 = j + v107;
          }
          else
          {
            v104 = bswap32(v104);
            v105 = bswap32(v107) + j;
          }
          if ( v104 == -1 )
            goto LABEL_76;
          if ( v104 >= v97 )
            break;
          v106 = *(_QWORD *)(v98 + 8LL * v104);
          if ( !v106 )
            goto LABEL_108;
          v102 += 2;
        }
        st_size = v239;
        v32 = v226;
        a1 = v243;
        v24 = v237;
        free(v98, v60.n128_f64[0], v61.n128_f64[0], v62, v63, v64, v65, v66, v67);
LABEL_64:
        v117 = 0;
        goto LABEL_65;
      }
      v100 = 1;
    }
LABEL_107:
    ++v225;
    i = v229;
    v229 += v260[0] + v260[1];
LABEL_108:
    ++v96;
    ++v221;
  }
  while ( v96 != v235 );
  v141 = v98;
  a1 = v243;
  v24 = v237;
  v32 = v226;
  st_size = v239;
  a2 = v253;
  if ( !v225 )
  {
    *(_DWORD *)(v59 + 64) = 0;
    *(_QWORD *)(v59 + 72) = 0;
    *(_QWORD *)(v59 + 80) = 0;
    goto LABEL_111;
  }
  v241 = v141;
  v230 = v229 + 32LL * v225;
  v142 = malloc(
           v230,
           v60.n128_f64[0],
           v61.n128_f64[0],
           v62,
           v63,
           v64,
           v65,
           v66,
           v67,
           i,
           4LL * v76,
           v245,
           v83,
           v80,
           (void *)v81);
  v143 = v142;
  if ( !v142 )
    goto LABEL_64;
  v144 = 4LL * v76;
  v145 = v230;
  v146 = 16LL * v225;
  v147 = v142 + v146;
  v148 = v253;
  v149 = v142 + 32LL * v225;
  v150 = v251;
  v151 = v59;
  if ( v146 < v230 )
    v152 = v230;
  else
    v152 = 16LL * v225;
  v153 = v152 - v146;
  v154 = v146 - v152;
  v155 = v149;
  if ( v153 < v230 )
    v156 = v230;
  else
    v156 = v153;
  v157 = 0;
  v158 = v146 + v156;
  *(_QWORD *)(v59 + 32) = v143;
  v159 = v154 + v158;
  v160 = v153 - v158;
  v161 = 0;
  if ( v159 < v156 )
    v159 = v156;
  v162 = v159 + v160;
  if ( v162 < v230 )
    v163 = v230;
  else
    v163 = v162;
  v164 = v249;
  v165 = v247;
  v166 = v163 + v251 - v162;
  v167 = v245;
  v168 = v162 - (v163 + v251);
  if ( v166 < v163 )
    v166 = v163;
  v169 = v243;
  v170 = v239;
  v171 = v166 + v168;
  v172 = v241;
  v173 = v143;
  v174 = v149 + v251;
  v175 = v237;
  do
  {
    v176 = *(unsigned int *)(v167 + v157);
    if ( v53 != -1794895138 )
    {
      v177 = (char *)v32 + bswap32(v176);
      if ( *((_DWORD *)v177 + 2) != -1 )
      {
        v178 = 0;
        goto LABEL_159;
      }
      goto LABEL_149;
    }
    v177 = (char *)v32 + v176;
    v178 = 0;
    if ( *((_DWORD *)v177 + 2) != -1 )
    {
LABEL_159:
      while ( 2 )
      {
        for ( k = v177 + 4; ; k += 8 )
        {
          v186 = *((_DWORD *)k + 1);
          if ( v53 != -1794895138 )
            v186 = bswap32(v186);
          if ( v186 == -1 )
            break;
          if ( !*(_QWORD *)(v172 + 8LL * v186) )
            goto LABEL_168;
        }
        if ( v178 )
        {
LABEL_151:
          v179 = 16LL * v161;
          if ( v53 != -1794895138 )
          {
            v180 = (_QWORD *)(v173 + v179);
            v181 = 0;
            v182 = (unsigned int *)((char *)v32 + bswap32(*(_DWORD *)(v167 + v157)));
            m = (__int64)v32 + bswap32(*v182);
            goto LABEL_153;
          }
          goto LABEL_189;
        }
LABEL_149:
        if ( v53 != -1794895138 )
        {
          v178 = 1;
          v177 = (char *)v32 + bswap32(*(unsigned int *)((char *)v165 + v157));
          if ( *((_DWORD *)v177 + 2) == -1 )
            goto LABEL_151;
          continue;
        }
        break;
      }
    }
    v178 = 1;
    v177 = (char *)v32 + *(unsigned int *)((char *)v165 + v157);
    if ( *((_DWORD *)v177 + 2) != -1 )
      goto LABEL_159;
    v179 = 16LL * v161;
LABEL_189:
    v203 = *(unsigned int *)(v167 + v157);
    v180 = (_QWORD *)(v173 + v179);
    v181 = 0;
    v182 = (unsigned int *)((char *)v32 + v203);
    for ( m = (__int64)v32 + *(unsigned int *)((char *)v32 + v203);
          ;
          m = (__int64)v32 + *(unsigned int *)((char *)v32 + v204) )
    {
      if ( v182[2] != -1 )
        goto LABEL_193;
      *v180 = v182[1];
      v180[1] = m;
LABEL_155:
      if ( v181 )
        break;
      if ( v53 != -1794895138 )
      {
        v180 = (_QWORD *)(v147 + v179);
        v181 = 1;
        v184 = bswap32(*(unsigned int *)((char *)v165 + v157));
        v182 = (unsigned int *)((char *)v32 + v184);
        m = (__int64)v32 + bswap32(*(int *)((char *)v32 + (unsigned int)v184));
LABEL_153:
        if ( v182[2] == -1 )
        {
          *v180 = bswap32(v182[1]);
          v180[1] = m;
          goto LABEL_155;
        }
LABEL_193:
        v205 = v182 + 1;
        v242 = v151;
        v206 = v171;
        v207 = v145;
        v223 = v175;
        v180[1] = v174;
        v227 = v179;
        v232 = v161;
        v234 = v167;
        v236 = v165;
        v238 = v170;
        v240 = v32;
        v244 = v181;
        v246 = v173;
        v248 = v147;
        v250 = v157;
        v252 = v164;
        v254 = v144;
        v255 = v180;
        v256 = v150;
        v257 = v169;
        v258 = v148;
        while ( 1 )
        {
          v208 = *v205;
          v209 = v205[1];
          if ( v53 != -1794895138 )
          {
            v208 = bswap32(v208);
            v209 = bswap32(v209);
          }
          if ( v208 )
          {
            v216 = v208;
            _memcpy_chk(v174, m, v208, v206);
            if ( v207 < v206 )
              v217 = v206;
            else
              v217 = v207;
            v174 += v216;
            m += v216;
            v218 = v216 + v217 - v206;
            if ( v218 < v217 )
              v218 = v217;
            v206 = v218 + v206 - (v216 + v217);
          }
          if ( v209 == -1 )
            break;
          v210 = *(_QWORD *)(v172 + 8LL * v209);
          v205 += 2;
          v211 = strlen(v210);
          v212 = v210;
          v213 = v211;
          _memcpy_chk(v174, v212, v211, v206);
          if ( v207 < v206 )
            v214 = v206;
          else
            v214 = v207;
          v174 += v213;
          v215 = v213 + v214 - v206;
          if ( v215 < v214 )
            v215 = v214;
          v206 = v215 + v206 - (v213 + v214);
        }
        v150 = v256;
        v145 = v207;
        v179 = v227;
        v171 = v206;
        v167 = v234;
        v165 = v236;
        v170 = v238;
        v32 = v240;
        v151 = v242;
        *v255 = v174 - v255[1];
        v173 = v246;
        v147 = v248;
        v157 = v250;
        v164 = v252;
        v144 = v254;
        v169 = v257;
        v148 = v258;
        v175 = v223;
        v161 = v232;
        v181 = v244;
        goto LABEL_155;
      }
      v204 = *(unsigned int *)((char *)v165 + v157);
      v180 = (_QWORD *)(v147 + v179);
      v181 = 1;
      v182 = (unsigned int *)((char *)v32 + v204);
    }
    ++v161;
LABEL_168:
    v157 += 4;
  }
  while ( v157 != v144 );
  v187 = v173;
  v24 = v175;
  v59 = v151;
  a2 = v148;
  v188 = 0;
  if ( v225 != v161 )
    abort(0, v225, v144, v167);
  while ( 1 )
  {
    v189 = *(_DWORD *)&v164[v188];
    if ( v53 != -1794895138 )
      break;
    *(_DWORD *)(v155 + v188) = v189;
    v188 += 4;
    if ( v188 == v150 )
      goto LABEL_176;
  }
  while ( 1 )
  {
    *(_DWORD *)(v155 + v188) = bswap32(v189);
    v188 += 4;
    if ( v188 == v150 )
      break;
    v189 = *(_DWORD *)&v164[v188];
  }
LABEL_176:
  v222 = v170;
  v233 = v169;
  v190 = (_QWORD *)(v173 + 8);
  v191 = 0;
  v231 = v147;
  do
  {
    v192 = _hash_string(*v190);
    v193 = *(_DWORD *)(v151 + 88);
    v194 = v192 % v193;
    v195 = (int *)(v155 + 4LL * (v192 % v193));
    v196 = v192 % (v193 - 2) + 1;
    v197 = v193 - v196;
    for ( n = v196 - v193; *v195; v195 = (int *)(v155 + 4 * v201) )
    {
      v199 = v194 + n;
      v200 = v197 > v194;
      v194 += v196;
      if ( v200 )
        v201 = v194;
      else
        v201 = v199;
      if ( !v200 )
        v194 = v199;
    }
    v190 += 2;
    v202 = *(_DWORD *)(v151 + 40) + 1 + v191++;
    *v195 = v202;
  }
  while ( v225 != v191 );
  v141 = v172;
  st_size = v222;
  *(_DWORD *)(v151 + 64) = v225;
  a1 = v233;
  *(_QWORD *)(v151 + 72) = v187;
  *(_QWORD *)(v151 + 80) = v231;
  *(_QWORD *)(v151 + 96) = v155;
  *(_DWORD *)(v151 + 104) = 0;
LABEL_111:
  free(v141, v60.n128_f64[0], v61.n128_f64[0], v62, v63, v64, v65, v66, v67);
LABEL_55:
  *(_QWORD *)(v59 + 112) = 0;
  *(_QWORD *)(v59 + 120) = 0;
  pthread_rwlock_init(v59 + 128, 0);
  msg = nl_find_msg(a1, a2, &qword_456B08, 0, v259);
  if ( msg != -1 )
  {
    _gettext_extract_plural(msg, v59 + 184, v59 + 192);
    goto LABEL_57;
  }
  v117 = *(_QWORD *)(v59 + 32);
LABEL_65:
  free(v117, v60.n128_f64[0], v61.n128_f64[0], v62, v63, v64, v65, v66, v67);
  if ( v24 )
    munmap(v32, st_size);
  else
    free((__int64)v32, v118, v119, v120, v121, v122, v123, v124, v125);
  free(v59, v126, v127, v128, v129, v130, v131, v132, v133);
  v20 = dword_496934 - 1;
  *(_QWORD *)(a1 + 16) = 0;
LABEL_58:
  *(_DWORD *)(a1 + 8) = 1;
LABEL_59:
  dword_496934 = v20;
  if ( !v20 )
  {
    qword_496938 = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&lock_0_0) > 1 )
      _lll_lock_wake_private(&lock_0_0, v111, v112, v113, v114, v115, v116);
  }
  return &_stack_chk_guard;
}
