__int64 *__fastcall sub_41F630(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x18
  __int64 v3; // x25
  __int64 v4; // x26
  _DWORD *v5; // x27
  __int64 v6; // x28
  _DWORD *v7; // x19
  _DWORD *st_size; // x22
  unsigned __int64 StatusReg; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  void *v15; // x4
  void *v16; // x5
  void *v17; // x6
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  char *v26; // x23
  int v27; // w0
  int v28; // w2
  const char *v29; // x0
  int v30; // w0
  int v31; // w25
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  void *v35; // x4
  void *v36; // x5
  void *v37; // x6
  double v38; // d0
  double v39; // d1
  double v40; // d2
  double v41; // d3
  double v42; // d4
  double v43; // d5
  double v44; // d6
  double v45; // d7
  __int64 v46; // x2
  __int64 v47; // x3
  void *v48; // x4
  void *v49; // x5
  void *v50; // x6
  double v51; // d1
  double v52; // d2
  double v53; // d3
  double v54; // d4
  double v55; // d5
  double v56; // d6
  double v57; // d7
  __int64 v59; // x3
  void *v60; // x5
  void *v61; // x6
  uint64x2_t v62; // q0
  uint64x2_t v63; // q1
  double v64; // d2
  double v65; // d3
  double v66; // d4
  double v67; // d5
  double v68; // d6
  double v69; // d7
  signed int v70; // w0
  int v71; // w0
  __int64 v72; // x2
  unsigned int v73; // w8
  int8x8_t v74; // d0
  unsigned int v75; // w9
  char *v76; // x9
  unsigned int v77; // w11
  __int64 v78; // x0
  __int64 v79; // x26
  void *v80; // x5
  unsigned __int64 v81; // x6
  unsigned __int64 v82; // x7
  unsigned int v83; // w11
  __int64 v84; // x2
  char *v85; // x4
  __int64 v86; // x3
  char *v87; // x9
  char *v88; // x13
  const char *v89; // x10
  int v90; // w8
  unsigned int v91; // w0
  unsigned int v92; // w1
  unsigned __int8 *v93; // x0
  int v94; // w1
  char *v95; // x1
  __int64 v96; // x8
  unsigned int v97; // w3
  unsigned int v98; // w10
  char *v99; // x3
  unsigned int *v100; // x10
  __int64 v101; // x2
  unsigned int v102; // w22
  _QWORD *v103; // x20
  int v104; // w26
  __int64 j; // x1
  unsigned int *v106; // x28
  __int64 k; // x3
  unsigned int v108; // w2
  __int64 v109; // x27
  __int64 v110; // x0
  unsigned int v111; // w0
  uint32x2_t v112; // d0
  __int64 v113; // x0
  __int64 *result; // x0
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  void *v118; // x4
  void *v119; // x5
  void *v120; // x6
  unsigned __int64 i; // x0
  double v122; // d0
  double v123; // d1
  double v124; // d2
  double v125; // d3
  double v126; // d4
  double v127; // d5
  double v128; // d6
  double v129; // d7
  double v130; // d0
  double v131; // d1
  double v132; // d2
  double v133; // d3
  double v134; // d4
  double v135; // d5
  double v136; // d6
  double v137; // d7
  __int64 v138; // x9
  __int64 v139; // x0
  size_t v140; // x26
  signed __int64 v141; // x0
  double v142; // d0
  unsigned __int64 v144; // x7
  __int64 v145; // x0
  __int64 v146; // x26
  __int64 v147; // x2
  unsigned __int64 v148; // x11
  unsigned __int64 v149; // x1
  unsigned __int64 v150; // x15
  unsigned __int64 v151; // x16
  __int64 v152; // x5
  __int64 v153; // x8
  unsigned __int64 v154; // x23
  __int64 v155; // x0
  unsigned __int64 v156; // x13
  unsigned __int64 v157; // x0
  __int64 v158; // x30
  unsigned __int64 v159; // x14
  __int64 v160; // x24
  unsigned __int64 v161; // x1
  unsigned __int64 v162; // x0
  unsigned __int64 v163; // x13
  unsigned int v164; // w17
  unsigned __int64 v165; // x0
  unsigned __int64 v166; // x13
  char *v167; // x9
  unsigned int *v168; // x10
  unsigned __int64 v169; // x1
  __int64 v170; // x3
  unsigned __int64 v171; // x0
  __int64 v172; // x14
  void *v173; // x13
  unsigned __int64 v174; // x21
  unsigned __int64 v175; // x22
  __int64 v176; // x7
  __int64 v177; // x26
  int v178; // w12
  __int64 v179; // x0
  char *v180; // x0
  int v181; // w1
  __int64 v182; // x5
  _QWORD *v183; // x1
  int v184; // w6
  unsigned int *v185; // x20
  __int64 n; // x28
  __int64 v187; // x18
  char *m; // x0
  unsigned int v189; // w5
  __int64 v190; // x26
  __int64 v191; // x0
  unsigned int v192; // w1
  _QWORD *v193; // x20
  unsigned int v194; // w0
  unsigned int v195; // w4
  unsigned int v196; // w1
  _DWORD *v197; // x2
  unsigned int v198; // w3
  unsigned int v199; // w8
  unsigned int ii; // w4
  unsigned int v201; // w2
  bool v202; // cc
  __int64 v203; // x0
  int v204; // w0
  __int64 v205; // x0
  __int64 v206; // x0
  unsigned int *v207; // x20
  unsigned __int64 v208; // x23
  unsigned __int64 v209; // x21
  unsigned int v210; // w0
  unsigned int v211; // w24
  __int64 v212; // x24
  unsigned __int64 v213; // x0
  __int64 v214; // x1
  unsigned __int64 v215; // x24
  unsigned __int64 v216; // x1
  unsigned __int64 v217; // x0
  __int64 v218; // x27
  unsigned __int64 v219; // x7
  unsigned __int64 v220; // x1
  int v221; // w1
  char *v222; // [xsp+0h] [xbp-150h]
  unsigned int *v223; // [xsp+0h] [xbp-150h]
  _DWORD *v224; // [xsp+0h] [xbp-150h]
  int v225; // [xsp+0h] [xbp-150h]
  unsigned int v226; // [xsp+1Ch] [xbp-134h]
  unsigned int v227; // [xsp+1Ch] [xbp-134h]
  _DWORD *v228; // [xsp+20h] [xbp-130h]
  __int64 v229; // [xsp+20h] [xbp-130h]
  char *v230; // [xsp+28h] [xbp-128h]
  __int64 v231; // [xsp+28h] [xbp-128h]
  unsigned __int64 v232; // [xsp+28h] [xbp-128h]
  unsigned __int64 v233; // [xsp+28h] [xbp-128h]
  unsigned int v234; // [xsp+28h] [xbp-128h]
  __int64 v235; // [xsp+30h] [xbp-120h]
  __int64 v236; // [xsp+30h] [xbp-120h]
  char *v237; // [xsp+38h] [xbp-118h]
  unsigned int *v238; // [xsp+38h] [xbp-118h]
  int v239; // [xsp+40h] [xbp-110h]
  void *v240; // [xsp+40h] [xbp-110h]
  _DWORD *v241; // [xsp+48h] [xbp-108h]
  _DWORD *v242; // [xsp+48h] [xbp-108h]
  unsigned __int64 v243; // [xsp+50h] [xbp-100h]
  unsigned __int64 v244; // [xsp+50h] [xbp-100h]
  __int64 v245; // [xsp+58h] [xbp-F8h]
  int v246; // [xsp+58h] [xbp-F8h]
  __int64 v247; // [xsp+60h] [xbp-F0h]
  __int64 v248; // [xsp+60h] [xbp-F0h]
  unsigned int *v249; // [xsp+68h] [xbp-E8h]
  unsigned __int64 v250; // [xsp+68h] [xbp-E8h]
  char *v251; // [xsp+70h] [xbp-E0h]
  __int64 v252; // [xsp+78h] [xbp-D8h]
  __int64 v253; // [xsp+78h] [xbp-D8h]
  __int64 v254; // [xsp+80h] [xbp-D0h]
  char *v255; // [xsp+80h] [xbp-D0h]
  unsigned __int64 v256; // [xsp+88h] [xbp-C8h]
  __int64 v257; // [xsp+88h] [xbp-C8h]
  _QWORD *v258; // [xsp+90h] [xbp-C0h]
  __int64 v259; // [xsp+98h] [xbp-B8h]
  __int64 v260; // [xsp+A0h] [xbp-B0h]
  unsigned __int64 v261; // [xsp+A8h] [xbp-A8h]
  char v262[8]; // [xsp+B0h] [xbp-A0h] BYREF
  _QWORD v263[2]; // [xsp+B8h] [xbp-98h] BYREF
  struct stat v264; // [xsp+C8h] [xbp-88h] BYREF
  __int64 v265; // [xsp+190h] [xbp+40h]
  __int64 v266; // [xsp+198h] [xbp+48h]
  _DWORD *v267; // [xsp+1A0h] [xbp+50h]
  __int64 v268; // [xsp+1A8h] [xbp+58h]

  v7 = &unk_496000;
  st_size = &dword_496930;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v264.__unused[1] = qword_48DD60;
  if ( qword_496938 != StatusReg - 1856 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&dword_496930) )
      sub_406F40(&dword_496930, v18, v19, v20, v21, v22, v23, v24, v25, v12, v13, v14, v15, v16, v17);
    qword_496938 = StatusReg - 1856;
  }
  v26 = (char *)&dword_496930;
  v27 = *(_DWORD *)(a1 + 8);
  v28 = dword_496934++;
  if ( v27 )
    goto LABEL_60;
  v29 = *(const char **)a1;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !v29 )
    goto LABEL_59;
  v265 = v3;
  v266 = v4;
  v30 = sub_410EE0(v29, 0);
  v31 = v30;
  if ( v30 == -1 )
  {
    v3 = v265;
    v4 = v266;
    v28 = dword_496934 - 1;
    goto LABEL_59;
  }
  v267 = v5;
  v268 = v6;
  LODWORD(v6) = sub_410930(v30, &v264);
  if ( (_DWORD)v6 )
    goto LABEL_73;
  st_size = (_DWORD *)v264.st_size;
  if ( v264.st_size <= 0x2FuLL )
    goto LABEL_73;
  v5 = (_DWORD *)sub_4117E0(0, v264.st_size, 1, 2, v31, 0);
  if ( v5 != (_DWORD *)-1LL )
  {
    sub_410CD0(v31);
    LODWORD(v3) = *v5;
    LODWORD(StatusReg) = *v5 != -1794895138;
    if ( *v5 != -1794895138 && (_DWORD)v3 != -569244523 )
    {
      sub_4118C0(v5, (size_t)st_size);
      v3 = v265;
      v4 = v266;
      v28 = dword_496934 - 1;
      v5 = v267;
      v6 = v268;
      goto LABEL_59;
    }
    LODWORD(v6) = 1;
    goto LABEL_17;
  }
  v139 = sub_40B890((unsigned __int64)st_size, v38, v39, v40, v41, v42, v43, v44, v45, v32, v33, v34, v35, v36, v37);
  v5 = (_DWORD *)v139;
  if ( !v139 )
  {
LABEL_73:
    sub_410CD0(v31);
    goto LABEL_58;
  }
  v26 = (char *)v139;
  v140 = (size_t)st_size;
  do
  {
    while ( 1 )
    {
      v141 = sub_410FC0(v31, v26, v140);
      if ( v141 > 0 )
        break;
      if ( v141 != -1 || *(_DWORD *)(StatusReg + 40) != 4 )
        goto LABEL_73;
    }
    v26 += v141;
    v140 -= v141;
  }
  while ( v140 );
  sub_410CD0(v31);
  LODWORD(v3) = *v5;
  LODWORD(StatusReg) = *v5 != -1794895138;
  if ( *v5 != -1794895138 && (_DWORD)v3 != -569244523 )
  {
    sub_40C1A0((unsigned __int64)v5, v142, v51, v52, v53, v54, v55, v56, v57);
    goto LABEL_58;
  }
LABEL_17:
  v2 = sub_40B890(
         0xC8u,
         vdupq_n_s64((unsigned __int64)v5).n128_f64[0],
         v51,
         v52,
         v53,
         v54,
         v55,
         v56,
         v57,
         2500072158LL,
         v46,
         v47,
         v48,
         v49,
         v50);
  if ( !v2 )
    goto LABEL_58;
  v70 = v5[1];
  *(_QWORD *)v2 = v5;
  *(_DWORD *)(v2 + 8) = v6;
  *(_QWORD *)(v2 + 16) = st_size;
  *(_QWORD *)(a1 + 16) = v2;
  *(_DWORD *)(v2 + 24) = StatusReg;
  *(_QWORD *)(v2 + 32) = 0;
  if ( (_DWORD)v3 == -1794895138 )
  {
    v72 = (unsigned int)v70;
    if ( (unsigned int)(v70 >> 16) > 1 )
      goto LABEL_66;
    v63 = vdupq_n_s64((unsigned __int64)v5);
    LODWORD(v26) = v5[5];
    *(_DWORD *)(v2 + 40) = v5[2];
    v112.n64_u64[0] = *(unsigned __int64 *)(v5 + 3);
    *(_DWORD *)(v2 + 88) = (_DWORD)v26;
    v62 = vaddw_u32(v63, v112);
    *(uint64x2_t *)(v2 + 48) = v62;
    if ( (unsigned int)v26 > 2 )
    {
      v138 = (unsigned int)v5[6];
      *(_DWORD *)(v2 + 104) = 0;
      v76 = (char *)v5 + v138;
      *(_QWORD *)(v2 + 96) = v76;
      if ( (_WORD)v70 )
      {
        LODWORD(StatusReg) = v5[9];
        if ( (_DWORD)StatusReg )
        {
          v77 = v5[7];
          v78 = (unsigned int)v5[8];
LABEL_24:
          v79 = v77;
          v222 = (char *)v5 + v78;
          v226 = v77;
          v230 = v76;
          v82 = sub_40CCB0(
                  v77,
                  8u,
                  v62.n128_f64[0],
                  v63.n128_f64[0],
                  v64,
                  v65,
                  v66,
                  v67,
                  v68,
                  v69,
                  v72,
                  v59,
                  (char *)v5 + v78,
                  v60,
                  v61);
          if ( v82 )
          {
            v83 = v226;
            v84 = 8 * v79;
            v85 = v222;
            v86 = 0;
            v87 = v230;
            v88 = v222 + 4;
            if ( v226 )
            {
              v89 = "I";
              v90 = -1794895138;
              goto LABEL_27;
            }
            goto LABEL_37;
          }
          goto LABEL_66;
        }
      }
      goto LABEL_55;
    }
  }
  else
  {
    v71 = bswap32(v70);
    LOWORD(v72) = v71;
    if ( (unsigned int)(v71 >> 16) > 1 )
      goto LABEL_66;
    v63 = vdupq_n_s64((unsigned __int64)v5);
    v73 = v5[5];
    *(_DWORD *)(v2 + 40) = bswap32(v5[2]);
    LODWORD(v26) = bswap32(v73);
    v74.n64_u64[0] = *(unsigned __int64 *)(v5 + 3);
    *(_DWORD *)(v2 + 88) = (_DWORD)v26;
    v62 = vaddw_u32(v63, vrev32_s8(v74));
    *(uint64x2_t *)(v2 + 48) = v62;
    if ( (unsigned int)v26 > 2 )
    {
      v75 = v5[6];
      *(_DWORD *)(v2 + 104) = 1;
      v76 = (char *)v5 + bswap32(v75);
      *(_QWORD *)(v2 + 96) = v76;
      if ( (_WORD)v71 )
      {
        v72 = (unsigned int)v5[9];
        if ( (_DWORD)v72 )
        {
          LODWORD(StatusReg) = bswap32(v72);
          v77 = bswap32(v5[7]);
          v78 = bswap32(v5[8]);
          goto LABEL_24;
        }
      }
      goto LABEL_55;
    }
  }
  *(_QWORD *)(v2 + 96) = 0;
  *(_DWORD *)(v2 + 104) = StatusReg;
  if ( (_WORD)v72 )
    goto LABEL_66;
LABEL_55:
  *(_DWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 80) = 0;
LABEL_56:
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  sub_42DCD0(v2 + 128, 0);
  v113 = sub_43CE70(a1, a2, "", 0, v262);
  if ( v113 != -1 )
  {
    sub_422520(v113, v2 + 184, v2 + 192);
LABEL_58:
    v3 = v265;
    v4 = v266;
    v5 = v267;
    v6 = v268;
    v28 = v7[589] - 1;
    goto LABEL_59;
  }
  for ( i = *(_QWORD *)(v2 + 32); ; i = 0 )
  {
    sub_40C1A0(i, v62.n128_f64[0], v63.n128_f64[0], v64, v65, v66, v67, v68, v69);
    if ( (_DWORD)v6 )
      sub_4118C0(v5, (size_t)st_size);
    else
      sub_40C1A0((unsigned __int64)v5, v122, v123, v124, v125, v126, v127, v128, v129);
    sub_40C1A0(v2, v130, v131, v132, v133, v134, v135, v136, v137);
    v3 = v265;
    v4 = v266;
    v5 = v267;
    v6 = v268;
    v28 = v7[589] - 1;
    *(_QWORD *)(a1 + 16) = 0;
LABEL_59:
    *(_DWORD *)(a1 + 8) = 1;
LABEL_60:
    v7 += 588;
    v7[1] = v28;
    if ( !v28 )
    {
      *((_QWORD *)v7 + 1) = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v7) > 1 )
        sub_407040(v7, v115, v116, v117, v118, v119, v120);
    }
    result = &qword_48DD60;
    if ( v264.__unused[1] == qword_48DD60 )
      break;
    v265 = v3;
    v266 = v4;
    v267 = v5;
    v268 = v6;
    v93 = (unsigned __int8 *)sub_412340();
LABEL_216:
    if ( v93[6] == 65 )
    {
      if ( v93[7] == 83 )
      {
        if ( v93[8] == 84 )
        {
          v221 = v93[9];
          switch ( v221 )
          {
            case '8':
              if ( v93[10] )
              {
                v95 = 0;
              }
              else
              {
                switch ( (_DWORD)v80 )
                {
                  case 'd':
                    v95 = "d";
                    break;
                  case 'i':
                    v95 = "i";
                    break;
                  case 'o':
                    v95 = "o";
                    break;
                  case 'u':
                    v95 = "u";
                    break;
                  default:
                    v95 = "x";
                    if ( (_DWORD)v80 != 120 )
                      v95 = "X";
                    break;
                }
              }
              break;
            case '1':
              if ( v93[10] == 54 )
              {
                if ( v93[11] )
                {
                  v95 = 0;
                }
                else
                {
                  switch ( (_DWORD)v80 )
                  {
                    case 'd':
                      v95 = "d";
                      break;
                    case 'i':
                      v95 = "i";
                      break;
                    case 'o':
                      v95 = "o";
                      break;
                    case 'u':
                      v95 = "u";
                      break;
                    default:
                      v95 = "x";
                      if ( (_DWORD)v80 != 120 )
                        v95 = "X";
                      break;
                  }
                }
              }
              else
              {
                v95 = 0;
              }
              break;
            case '3':
              if ( v93[10] == 50 )
              {
                if ( v93[11] )
                {
                  v95 = 0;
                }
                else
                {
                  switch ( (_DWORD)v80 )
                  {
                    case 'd':
                      v95 = "d";
                      break;
                    case 'i':
                      v95 = "i";
                      break;
                    case 'o':
                      v95 = "o";
                      break;
                    case 'u':
                      v95 = "u";
                      break;
                    default:
                      v95 = "x";
                      if ( (_DWORD)v80 != 120 )
                        v95 = "X";
                      break;
                  }
                }
              }
              else
              {
                v95 = 0;
              }
              break;
            case '6':
              if ( v93[10] == 52 )
              {
                if ( v93[11] )
                {
                  v95 = 0;
                }
                else
                {
                  switch ( (_DWORD)v80 )
                  {
                    case 'd':
                      v95 = "ld";
                      break;
                    case 'i':
                      v95 = "li";
                      break;
                    case 'o':
                      v95 = "lo";
                      break;
                    case 'u':
                      v95 = "lu";
                      break;
                    default:
                      v95 = "lx";
                      if ( (_DWORD)v80 != 120 )
                        v95 = "lX";
                      break;
                  }
                }
              }
              else
              {
                v95 = 0;
              }
              break;
            default:
              v95 = 0;
              break;
          }
        }
        else
        {
          v95 = 0;
        }
      }
      else
      {
        v95 = 0;
      }
    }
    else
    {
      v95 = 0;
    }
    while ( 1 )
    {
      *(_QWORD *)(v82 + v86) = v95;
      v86 += 8;
      if ( v84 == v86 )
        break;
LABEL_27:
      v91 = *(_DWORD *)&v88[v86];
      v92 = *(_DWORD *)&v85[v86];
      if ( (_DWORD)v3 == v90 )
      {
        v93 = (unsigned __int8 *)v5 + v91;
      }
      else
      {
        v92 = bswap32(v92);
        v93 = (unsigned __int8 *)v5 + bswap32(v91);
      }
      if ( !v92 || v93[v92 - 1] )
      {
        sub_40C1A0(v82, v62.n128_f64[0], v63.n128_f64[0], v64, v65, v66, v67, v68, v69);
        goto LABEL_66;
      }
      v94 = *v93;
      if ( v94 == 80 )
      {
        v80 = (void *)v93[1];
        v95 = 0;
        if ( (_DWORD)v80 == 82 )
        {
          v80 = (void *)v93[2];
          if ( (_DWORD)v80 == 73 )
          {
            v80 = (void *)v93[3];
            v81 = (unsigned __int8)((_BYTE)v80 - 88);
            if ( (unsigned int)v81 <= 0x20 )
            {
              v81 = 0x120821001uLL >> v81;
              if ( (v81 & 1) != 0 )
              {
                v81 = v93[4];
                switch ( (_DWORD)v81 )
                {
                  case '8':
                    if ( !v93[5] )
                    {
                      switch ( (_DWORD)v80 )
                      {
                        case 'd':
                          v95 = "d";
                          break;
                        case 'i':
                          v95 = "i";
                          break;
                        case 'o':
                          v95 = "o";
                          break;
                        case 'u':
                          v95 = "u";
                          break;
                        default:
                          v95 = "x";
                          if ( (_DWORD)v80 != 120 )
                            v95 = "X";
                          break;
                      }
                    }
                    break;
                  case '1':
                    v81 = v93[5];
                    if ( (_DWORD)v81 == 54 )
                    {
                      if ( v93[6] )
                      {
                        v95 = 0;
                      }
                      else
                      {
                        switch ( (_DWORD)v80 )
                        {
                          case 'd':
                            v95 = "d";
                            break;
                          case 'i':
                            v95 = "i";
                            break;
                          case 'o':
                            v95 = "o";
                            break;
                          case 'u':
                            v95 = "u";
                            break;
                          default:
                            v95 = "x";
                            if ( (_DWORD)v80 != 120 )
                              v95 = "X";
                            break;
                        }
                      }
                    }
                    break;
                  case '3':
                    v81 = v93[5];
                    v95 = 0;
                    if ( (_DWORD)v81 == 50 && !v93[6] )
                    {
                      switch ( (_DWORD)v80 )
                      {
                        case 'd':
                          v95 = "d";
                          break;
                        case 'i':
                          v95 = "i";
                          break;
                        case 'o':
                          v95 = "o";
                          break;
                        case 'u':
                          v95 = "u";
                          break;
                        default:
                          v95 = "x";
                          if ( (_DWORD)v80 != 120 )
                            v95 = "X";
                          break;
                      }
                    }
                    break;
                  case '6':
                    if ( v93[5] == 52 )
                    {
                      if ( v93[6] )
                      {
                        v95 = 0;
                      }
                      else
                      {
                        switch ( (_DWORD)v80 )
                        {
                          case 'd':
                            v95 = "ld";
                            break;
                          case 'i':
                            v95 = "li";
                            break;
                          case 'o':
                            v95 = "lo";
                            break;
                          case 'u':
                            v95 = "lu";
                            break;
                          default:
                            v95 = "lx";
                            if ( (_DWORD)v80 != 120 )
                              v95 = "lX";
                            break;
                        }
                      }
                    }
                    else
                    {
                      v95 = 0;
                    }
                    break;
                  case 'L':
                    if ( v93[5] == 69 )
                      goto LABEL_216;
                    v95 = 0;
                    break;
                  case 'F':
                    v81 = v93[5];
                    v95 = 0;
                    if ( (_DWORD)v81 == 65 )
                    {
                      v81 = v93[6];
                      if ( (_DWORD)v81 == 83 )
                      {
                        v81 = v93[7];
                        if ( (_DWORD)v81 == 84 )
                        {
                          v81 = v93[8];
                          switch ( (_DWORD)v81 )
                          {
                            case '8':
                              if ( !v93[9] )
                              {
                                switch ( (_DWORD)v80 )
                                {
                                  case 'd':
                                    v95 = "d";
                                    break;
                                  case 'i':
                                    v95 = "i";
                                    break;
                                  case 'o':
                                    v95 = "o";
                                    break;
                                  case 'u':
                                    v95 = "u";
                                    break;
                                  default:
                                    v95 = "x";
                                    if ( (_DWORD)v80 != 120 )
                                      v95 = "X";
                                    break;
                                }
                              }
                              break;
                            case '1':
                              v81 = v93[9];
                              if ( (_DWORD)v81 == 54 )
                              {
                                if ( v93[10] )
                                {
                                  v95 = 0;
                                }
                                else
                                {
                                  switch ( (_DWORD)v80 )
                                  {
                                    case 'd':
                                      v95 = "ld";
                                      break;
                                    case 'i':
                                      v95 = "li";
                                      break;
                                    case 'o':
                                      v95 = "lo";
                                      break;
                                    case 'u':
                                      v95 = "lu";
                                      break;
                                    default:
                                      v95 = "lx";
                                      if ( (_DWORD)v80 != 120 )
                                        v95 = "lX";
                                      break;
                                  }
                                }
                              }
                              break;
                            case '3':
                              if ( v93[9] == 50 )
                              {
                                if ( v93[10] )
                                {
                                  v95 = 0;
                                }
                                else
                                {
                                  switch ( (_DWORD)v80 )
                                  {
                                    case 'd':
                                      v95 = "ld";
                                      break;
                                    case 'i':
                                      v95 = "li";
                                      break;
                                    case 'o':
                                      v95 = "lo";
                                      break;
                                    case 'u':
                                      v95 = "lu";
                                      break;
                                    default:
                                      v95 = "lx";
                                      if ( (_DWORD)v80 != 120 )
                                        v95 = "lX";
                                      break;
                                  }
                                }
                              }
                              else
                              {
                                v95 = 0;
                              }
                              break;
                            case '6':
                              if ( v93[9] == 52 )
                              {
                                if ( v93[10] )
                                {
                                  v95 = 0;
                                }
                                else
                                {
                                  switch ( (_DWORD)v80 )
                                  {
                                    case 'd':
                                      v95 = "ld";
                                      break;
                                    case 'i':
                                      v95 = "li";
                                      break;
                                    case 'o':
                                      v95 = "lo";
                                      break;
                                    case 'u':
                                      v95 = "lu";
                                      break;
                                    default:
                                      v95 = "lx";
                                      if ( (_DWORD)v80 != 120 )
                                        v95 = "lX";
                                      break;
                                  }
                                }
                              }
                              else
                              {
                                v95 = 0;
                              }
                              break;
                            default:
                              v95 = 0;
                              break;
                          }
                        }
                      }
                    }
                    break;
                  case 'M':
                    v81 = v93[5];
                    v95 = 0;
                    if ( (_DWORD)v81 == 65 )
                    {
                      v81 = v93[6];
                      if ( (_DWORD)v81 == 88 && !v93[7] )
                      {
                        switch ( (_DWORD)v80 )
                        {
                          case 'd':
                            v95 = "ld";
                            break;
                          case 'i':
                            v95 = "li";
                            break;
                          case 'o':
                            v95 = "lo";
                            break;
                          case 'u':
                            v95 = "lu";
                            break;
                          default:
                            v95 = "lx";
                            if ( (_DWORD)v80 != 120 )
                              v95 = "lX";
                            break;
                        }
                      }
                    }
                    break;
                  case 'P':
                    v81 = v93[5];
                    v95 = 0;
                    if ( (_DWORD)v81 == 84 )
                    {
                      v81 = v93[6];
                      if ( (_DWORD)v81 == 82 && !v93[7] )
                      {
                        switch ( (_DWORD)v80 )
                        {
                          case 'd':
                            v95 = "ld";
                            break;
                          case 'i':
                            v95 = "li";
                            break;
                          case 'o':
                            v95 = "lo";
                            break;
                          case 'u':
                            v95 = "lu";
                            break;
                          default:
                            v95 = "lx";
                            if ( (_DWORD)v80 != 120 )
                              v95 = "lX";
                            break;
                        }
                      }
                    }
                    break;
                  default:
                    v95 = 0;
                    break;
                }
              }
            }
          }
        }
      }
      else if ( v94 == 73 )
      {
        if ( v93[1] )
          v95 = 0;
        else
          v95 = (char *)v89;
      }
      else
      {
        v95 = 0;
      }
    }
LABEL_37:
    v96 = 4LL * (unsigned int)v26;
    v97 = v5[10];
    v98 = v5[11];
    if ( (_DWORD)v3 == -1794895138 )
    {
      v99 = (char *)v5 + v97;
      v100 = (_DWORD *)((char *)v5 + v98);
    }
    else
    {
      v99 = (char *)v5 + bswap32(v97);
      v100 = (_DWORD *)((char *)v5 + bswap32(v98));
    }
    v101 = 4LL * (unsigned int)StatusReg;
    v26 = v99;
    v241 = st_size;
    v102 = v83;
    LODWORD(StatusReg) = -1794895138;
    v256 = a2;
    a2 = v82;
    v223 = v100;
    v227 = 0;
    v228 = v5;
    v231 = v96;
    v237 = &v99[v101];
    v239 = v6;
    v245 = a1;
    v247 = (__int64)v99;
    v249 = v100;
    v251 = v87;
    v252 = v101;
    v254 = v96;
    do
    {
      v103 = v263;
      if ( (_DWORD)v3 != -1794895138 )
      {
        v104 = 0;
        j = (__int64)v228 + bswap32(*(_DWORD *)v26);
        if ( *(_DWORD *)(j + 8) != -1 )
          goto LABEL_44;
        goto LABEL_42;
      }
      v104 = 0;
      for ( j = (__int64)v228 + *(unsigned int *)v26; ; j = (__int64)v228 + *v223 )
      {
        v109 = 0;
        if ( *(_DWORD *)(j + 8) != -1 )
        {
LABEL_44:
          v106 = (unsigned int *)(j + 4);
          for ( k = 0; ; k = ifunc_40DFD0(v110) + v109 )
          {
            v111 = *v106;
            v108 = v106[1];
            if ( (_DWORD)v3 == -1794895138 )
            {
              v109 = k + v111;
            }
            else
            {
              v108 = bswap32(v108);
              v109 = bswap32(v111) + k;
            }
            if ( v108 == -1 )
              break;
            if ( v108 >= v102 )
            {
              st_size = v241;
              v5 = v228;
              a1 = v245;
              LODWORD(v6) = v239;
              sub_40C1A0(a2, v62.n128_f64[0], v63.n128_f64[0], v64, v65, v66, v67, v68, v69);
              goto LABEL_66;
            }
            v110 = *(_QWORD *)(a2 + 8LL * v108);
            if ( !v110 )
              goto LABEL_110;
            v106 += 2;
          }
        }
        *v103 = v109;
        if ( v104 )
          break;
        ++v103;
        if ( (_DWORD)v3 != -1794895138 )
        {
          do
          {
            v104 = 1;
            j = (__int64)v228 + bswap32(*v223);
            if ( *(_DWORD *)(j + 8) != -1 )
              goto LABEL_44;
LABEL_42:
            *v103++ = 0;
          }
          while ( !v104 );
          break;
        }
        v104 = 1;
      }
      ++v227;
      j = v231;
      v231 += v263[0] + v263[1];
LABEL_110:
      v26 += 4;
      ++v223;
    }
    while ( v26 != v237 );
    LODWORD(StatusReg) = v227;
    v144 = a2;
    a1 = v245;
    LODWORD(v6) = v239;
    v5 = v228;
    st_size = v241;
    a2 = v256;
    if ( !v227 )
    {
      *(_DWORD *)(v2 + 64) = 0;
      *(_QWORD *)(v2 + 72) = 0;
      *(_QWORD *)(v2 + 80) = 0;
      goto LABEL_113;
    }
    v243 = v144;
    v232 = v231 + 32LL * v227;
    v145 = sub_40B890(
             v232,
             v62.n128_f64[0],
             v63.n128_f64[0],
             v64,
             v65,
             v66,
             v67,
             v68,
             v69,
             j,
             v252,
             v247,
             v85,
             v80,
             (void *)v81);
    v146 = v145;
    if ( v145 )
    {
      v147 = v252;
      v148 = v232;
      v149 = 16LL * v227;
      v150 = v145 + v149;
      v151 = v256;
      v152 = v145 + 32LL * v227;
      v153 = v254;
      v154 = v2;
      if ( v149 < v232 )
        v155 = v232;
      else
        v155 = 16LL * v227;
      v156 = v155 - v149;
      v157 = v149 - v155;
      v158 = v152;
      if ( v156 < v232 )
        v159 = v232;
      else
        v159 = v156;
      v160 = 0;
      v161 = v149 + v159;
      *(_QWORD *)(v2 + 32) = v146;
      v162 = v157 + v161;
      v163 = v156 - v161;
      v164 = 0;
      if ( v162 < v159 )
        v162 = v159;
      v165 = v162 + v163;
      if ( v165 < v232 )
        v166 = v232;
      else
        v166 = v165;
      v167 = v251;
      v168 = v249;
      v169 = v166 + v254 - v165;
      v170 = v247;
      v171 = v165 - (v166 + v254);
      if ( v169 < v166 )
        v169 = v166;
      v172 = v245;
      v173 = v241;
      v174 = v169 + v171;
      v175 = v243;
      v176 = v146;
      v177 = v152 + v254;
      v178 = v239;
      while ( 1 )
      {
        v179 = *(unsigned int *)(v170 + v160);
        if ( (_DWORD)v3 != -1794895138 )
          break;
        v180 = (char *)v5 + v179;
        v181 = 0;
        if ( *((_DWORD *)v180 + 2) == -1 )
          goto LABEL_189;
        do
        {
LABEL_161:
          for ( m = v180 + 4; ; m += 8 )
          {
            v189 = *((_DWORD *)m + 1);
            if ( (_DWORD)v3 != -1794895138 )
              v189 = bswap32(v189);
            if ( v189 == -1 )
              break;
            if ( !*(_QWORD *)(v175 + 8LL * v189) )
              goto LABEL_170;
          }
          if ( v181 )
            break;
LABEL_151:
          if ( (_DWORD)v3 == -1794895138 )
          {
LABEL_189:
            v181 = 1;
            v180 = (char *)v5 + *(unsigned int *)((char *)v168 + v160);
            if ( *((_DWORD *)v180 + 2) == -1 )
            {
              v182 = 16LL * v164;
              goto LABEL_191;
            }
            goto LABEL_161;
          }
          v181 = 1;
          v180 = (char *)v5 + bswap32(*(unsigned int *)((char *)v168 + v160));
        }
        while ( *((_DWORD *)v180 + 2) != -1 );
        v182 = 16LL * v164;
        if ( (_DWORD)v3 != -1794895138 )
        {
          v183 = (_QWORD *)(v176 + v182);
          v184 = 0;
          v185 = (_DWORD *)((char *)v5 + bswap32(*(_DWORD *)(v170 + v160)));
          n = (__int64)v5 + bswap32(*v185);
          goto LABEL_155;
        }
LABEL_191:
        v205 = *(unsigned int *)(v170 + v160);
        v183 = (_QWORD *)(v176 + v182);
        v184 = 0;
        v185 = (_DWORD *)((char *)v5 + v205);
        for ( n = (__int64)v5 + *(unsigned int *)((char *)v5 + v205);
              ;
              n = (__int64)v5 + *(unsigned int *)((char *)v5 + v206) )
        {
          if ( v185[2] != -1 )
            goto LABEL_195;
          *v183 = v185[1];
          v183[1] = n;
LABEL_157:
          if ( v184 )
            break;
          if ( (_DWORD)v3 != -1794895138 )
          {
            v183 = (_QWORD *)(v150 + v182);
            v184 = 1;
            v187 = bswap32(*(unsigned int *)((char *)v168 + v160));
            v185 = (_DWORD *)((char *)v5 + v187);
            n = (__int64)v5 + bswap32(*(_DWORD *)((char *)v5 + (unsigned int)v187));
LABEL_155:
            if ( v185[2] == -1 )
            {
              *v183 = bswap32(v185[1]);
              v183[1] = n;
              goto LABEL_157;
            }
LABEL_195:
            v207 = v185 + 1;
            v244 = v154;
            v208 = v174;
            v209 = v148;
            v225 = v178;
            v183[1] = v177;
            v229 = v182;
            v234 = v164;
            v236 = v170;
            v238 = v168;
            v240 = v173;
            v242 = v5;
            v246 = v184;
            v248 = v176;
            v250 = v150;
            v253 = v160;
            v255 = v167;
            v257 = v147;
            v258 = v183;
            v259 = v153;
            v260 = v172;
            v261 = v151;
            while ( 1 )
            {
              v210 = *v207;
              v211 = v207[1];
              if ( (_DWORD)v3 != -1794895138 )
              {
                v210 = bswap32(v210);
                v211 = bswap32(v211);
              }
              if ( v210 )
              {
                v218 = v210;
                sub_412300(v177, n, v210, v208);
                if ( v209 < v208 )
                  v219 = v208;
                else
                  v219 = v209;
                v177 += v218;
                n += v218;
                v220 = v218 + v219 - v208;
                if ( v220 < v219 )
                  v220 = v219;
                v208 = v220 + v208 - (v218 + v219);
              }
              if ( v211 == -1 )
                break;
              v212 = *(_QWORD *)(v175 + 8LL * v211);
              v207 += 2;
              v213 = ifunc_40DFD0(v212);
              v214 = v212;
              v215 = v213;
              sub_412300(v177, v214, v213, v208);
              if ( v209 < v208 )
                v216 = v208;
              else
                v216 = v209;
              v177 += v215;
              v217 = v215 + v216 - v208;
              if ( v217 < v216 )
                v217 = v216;
              v208 = v217 + v208 - (v215 + v216);
            }
            v153 = v259;
            v148 = v209;
            v182 = v229;
            v174 = v208;
            v170 = v236;
            v168 = v238;
            v173 = v240;
            v5 = v242;
            v154 = v244;
            *v258 = v177 - v258[1];
            v176 = v248;
            v150 = v250;
            v160 = v253;
            v167 = v255;
            v147 = v257;
            v172 = v260;
            v151 = v261;
            v178 = v225;
            v164 = v234;
            v184 = v246;
            goto LABEL_157;
          }
          v206 = *(unsigned int *)((char *)v168 + v160);
          v183 = (_QWORD *)(v150 + v182);
          v184 = 1;
          v185 = (_DWORD *)((char *)v5 + v206);
        }
        ++v164;
LABEL_170:
        v160 += 4;
        if ( v160 == v147 )
        {
          v190 = v176;
          LODWORD(v6) = v178;
          v2 = v154;
          a2 = v151;
          v191 = 0;
          if ( v227 != v164 )
            sub_4002C0(0, v227, v147, v170);
          while ( 1 )
          {
            v192 = *(_DWORD *)&v167[v191];
            if ( (_DWORD)v3 != -1794895138 )
              break;
            *(_DWORD *)(v158 + v191) = v192;
            v191 += 4;
            if ( v191 == v153 )
              goto LABEL_178;
          }
          while ( 1 )
          {
            *(_DWORD *)(v158 + v191) = bswap32(v192);
            v191 += 4;
            if ( v191 == v153 )
              break;
            v192 = *(_DWORD *)&v167[v191];
          }
LABEL_178:
          v224 = v173;
          v235 = v172;
          v193 = (_QWORD *)(v176 + 8);
          LODWORD(v26) = v158;
          LODWORD(StatusReg) = 0;
          v233 = v150;
          do
          {
            v194 = sub_422650(*v193);
            v195 = *(_DWORD *)(v2 + 88);
            v196 = v194 % v195;
            v197 = (_DWORD *)(v158 + 4LL * (v194 % v195));
            v198 = v194 % (v195 - 2) + 1;
            v199 = v195 - v198;
            for ( ii = v198 - v195; *v197; v197 = (_DWORD *)(v158 + 4 * v203) )
            {
              v201 = v196 + ii;
              v202 = v199 > v196;
              v196 += v198;
              if ( v202 )
                v203 = v196;
              else
                v203 = v201;
              if ( !v202 )
                v196 = v201;
            }
            v193 += 2;
            v204 = *(_DWORD *)(v2 + 40) + 1 + StatusReg;
            LODWORD(StatusReg) = StatusReg + 1;
            *v197 = v204;
          }
          while ( v227 != (_DWORD)StatusReg );
          v144 = v175;
          st_size = v224;
          *(_DWORD *)(v2 + 64) = v227;
          a1 = v235;
          *(_QWORD *)(v2 + 72) = v190;
          *(_QWORD *)(v2 + 80) = v233;
          *(_QWORD *)(v2 + 96) = v158;
          *(_DWORD *)(v2 + 104) = 0;
LABEL_113:
          sub_40C1A0(v144, v62.n128_f64[0], v63.n128_f64[0], v64, v65, v66, v67, v68, v69);
          goto LABEL_56;
        }
      }
      v180 = (char *)v5 + bswap32(v179);
      if ( *((_DWORD *)v180 + 2) != -1 )
      {
        v181 = 0;
        goto LABEL_161;
      }
      goto LABEL_151;
    }
LABEL_66:
    ;
  }
  return result;
}
