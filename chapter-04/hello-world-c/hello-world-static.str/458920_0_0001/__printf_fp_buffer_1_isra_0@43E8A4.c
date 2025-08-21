__int64 *__fastcall _printf_fp_buffer_1_isra_0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        double *a6)
{
  int v8; // w21
  int v9; // w0
  unsigned __int64 v10; // x0
  __int64 v11; // x4
  unsigned __int64 StatusReg; // x3
  const char *v13; // x22
  unsigned __int64 v14; // x0
  __int16 v15; // w2
  int v16; // w2
  unsigned int v17; // w1
  int v18; // w24
  _BOOL4 v19; // w23
  bool v20; // zf
  _BYTE *v21; // x0
  _BYTE *v25; // x0
  __int64 v26; // x2
  int v27; // w21
  int v28; // w27
  int v29; // w1
  __int64 v30; // x1
  _QWORD *v31; // x0
  _QWORD *v32; // x3
  _QWORD *v33; // x3
  unsigned __int16 v34; // w1
  int v35; // w4
  int v36; // w4
  __int64 v37; // x21
  __int64 v38; // x2
  char *v39; // x24
  int v40; // w22
  int v41; // w25
  int v42; // w28
  int v43; // w0
  __int64 v44; // x1
  _BYTE *v45; // x0
  int v46; // w1
  unsigned __int64 *v47; // x0
  unsigned __int64 v48; // x3
  unsigned __int64 v49; // x1
  unsigned __int64 v50; // x25
  unsigned __int64 *v51; // x5
  unsigned __int64 *v52; // x1
  __int64 v53; // x21
  unsigned __int64 v54; // x4
  unsigned __int64 v55; // t1
  unsigned __int64 v56; // x4
  int v57; // w6
  int v58; // w23
  unsigned __int64 v59; // x2
  int v60; // w1
  __int64 v61; // x0
  int v62; // w27
  int v63; // w2
  int v64; // w22
  int v65; // w24
  __int16 v66; // w3
  char v67; // w28
  unsigned __int64 v68; // x0
  int v69; // w1
  unsigned __int64 v70; // x21
  int v71; // w0
  __int64 v72; // x1
  __int16 *v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x5
  __int64 *v78; // x1
  char *v79; // x23
  char *v80; // x4
  bool v81; // cc
  char *v82; // x27
  int v83; // w25
  int v84; // w26
  char v85; // w0
  unsigned __int8 v86; // w5
  __int64 v87; // x0
  __int64 v88; // x1
  int v89; // w0
  int v90; // w22
  __int64 v91; // x0
  int v92; // w5
  _BOOL4 v93; // w7
  __int64 v94; // x2
  unsigned __int64 *v95; // x6
  unsigned __int64 *v96; // x6
  unsigned __int64 v97; // x2
  int v99; // w2
  bool v100; // zf
  char *v101; // x0
  int v102; // w3
  int v103; // t1
  int v105; // w3
  int v107; // w3
  int v108; // w2
  int v109; // w6
  _BYTE *v110; // x3
  char v111; // w0
  int v112; // w1
  int k; // w0
  int v114; // w4
  __int16 v115; // w21
  __int16 v116; // w0
  int v117; // w25
  int v118; // w2
  unsigned __int64 v119; // x22
  int v120; // w25
  char *v122; // x22
  char *v123; // x26
  char *v124; // x0
  char v125; // w1
  _BYTE *v126; // x0
  _BYTE *v127; // x0
  int v128; // w1
  __int64 v129; // x0
  __int64 v130; // x1
  _BYTE *v131; // x0
  char *v132; // x0
  char *v133; // x6
  __int16 v134; // w3
  int v135; // w0
  _BYTE *v136; // x0
  __int64 v137; // x0
  __int64 v138; // x2
  __int64 v139; // x28
  char *v140; // x2
  char v141; // w0
  __int64 v142; // x2
  unsigned __int64 *v143; // x6
  __int64 i; // x1
  __int64 v145; // x1
  unsigned __int64 *v146; // x3
  __int64 j; // x0
  int v148; // w0
  int v149; // w2
  int v150; // w0
  __int64 v151; // x0
  unsigned __int64 *v152; // x1
  __int64 v153; // x2
  int v154; // w5
  char *v155; // x25
  int v156; // w27
  int v157; // w22
  __int64 v158; // x0
  unsigned __int64 *v159; // x1
  __int64 v160; // x2
  int v161; // w5
  __int64 v162; // x2
  __int64 v163; // x8
  unsigned __int64 *v164; // x9
  unsigned __int64 v165; // x4
  int v166; // w26
  int v167; // w28
  int v168; // w6
  int v169; // w0
  unsigned __int64 v170; // x3
  int v171; // w0
  unsigned __int64 *v172; // x0
  __int64 v173; // x3
  unsigned __int64 *v174; // x6
  __int64 v175; // x4
  unsigned __int64 v176; // x5
  unsigned __int64 v177; // t1
  __int64 v178; // x28
  __int64 v179; // x0
  int v180; // w3
  __int64 v181; // x0
  unsigned __int64 *v182; // x1
  __int64 v183; // x2
  int v184; // w4
  int v185; // w24
  __int64 v186; // x22
  __int64 v187; // x23
  __int64 v188; // x22
  __int64 v189; // x21
  __int64 v190; // x23
  __int64 v191; // x0
  unsigned __int64 v192; // x5
  int v193; // w3
  int v194; // w5
  bool v195; // zf
  __int64 v196; // x3
  unsigned __int64 *v197; // x5
  unsigned __int64 *v198; // x4
  __int64 v199; // x1
  __int64 v200; // x28
  __int64 v201; // x0
  __int64 v202; // x1
  __int64 v203; // x0
  char *v204; // x1
  __int16 v205; // w0
  __int64 v207; // x7
  __int64 v208; // x2
  signed __int64 v209; // x2
  unsigned __int64 v210; // x6
  unsigned __int64 v211; // x5
  __int64 v212; // [xsp+0h] [xbp-40110h] BYREF
  char v213; // [xsp+10h] [xbp-40100h] BYREF
  __int64 v214; // [xsp+400h] [xbp-3FD10h]
  _QWORD v215[2]; // [xsp+10000h] [xbp-30110h] BYREF
  char v216; // [xsp+10010h] [xbp-30100h] BYREF
  __int64 v217; // [xsp+10400h] [xbp-2FD10h]
  _QWORD v218[2]; // [xsp+20000h] [xbp-20110h] BYREF
  char v219; // [xsp+20010h] [xbp-20100h] BYREF
  __int64 v220; // [xsp+20400h] [xbp-1FD10h]
  _QWORD v221[2]; // [xsp+30000h] [xbp-10110h] BYREF
  _QWORD v222[126]; // [xsp+30010h] [xbp-10100h] BYREF
  __int64 v223; // [xsp+30400h] [xbp-FD10h]
  _BYTE v224[24]; // [xsp+40000h] [xbp-110h] BYREF
  unsigned __int64 v225; // [xsp+40018h] [xbp-F8h]
  int v226; // [xsp+40020h] [xbp-F0h]
  int v227; // [xsp+40024h] [xbp-ECh]
  unsigned __int64 v228; // [xsp+40028h] [xbp-E8h]
  char *v229; // [xsp+40030h] [xbp-E0h]
  unsigned __int64 v230; // [xsp+40038h] [xbp-D8h]
  int v231; // [xsp+40040h] [xbp-D0h]
  int v232; // [xsp+40044h] [xbp-CCh]
  __int64 v233; // [xsp+40048h] [xbp-C8h]
  long double v234; // [xsp+40050h] [xbp-C0h]
  long double v235; // [xsp+40060h] [xbp-B0h]
  unsigned int v236; // [xsp+40070h] [xbp-A0h]
  int v237; // [xsp+40074h] [xbp-9Ch]
  int v238; // [xsp+40078h] [xbp-98h]
  int v239; // [xsp+4007Ch] [xbp-94h]
  int v240; // [xsp+40084h] [xbp-8Ch] BYREF
  int v241[5]; // [xsp+40088h] [xbp-88h] BYREF
  int v242; // [xsp+4009Ch] [xbp-74h]
  int v243; // [xsp+400A0h] [xbp-70h] BYREF
  int v244; // [xsp+400A4h] [xbp-6Ch]
  int v245; // [xsp+400A8h] [xbp-68h] BYREF
  unsigned __int64 *v246; // [xsp+400B0h] [xbp-60h]
  __int64 v247; // [xsp+400B8h] [xbp-58h]
  unsigned __int64 *v248; // [xsp+400C0h] [xbp-50h]
  __int64 v249; // [xsp+400C8h] [xbp-48h]
  unsigned __int64 *v250; // [xsp+400D0h] [xbp-40h]
  __int64 v251; // [xsp+400D8h] [xbp-38h]
  __int128 v252; // [xsp+400E0h] [xbp-30h] BYREF
  _BYTE v253[16]; // [xsp+400F8h] [xbp-18h] BYREF

  v8 = *(unsigned __int16 *)(a5 + 12);
  v233 = a2;
  v238 = a3;
  v239 = a4;
  if ( (v8 & 0x100) != 0 )
    v9 = 4;
  else
    v9 = 1;
  v236 = v9;
  v240 = 0;
  v243 = 0;
  if ( (v8 & 1) != 0 )
  {
    v235 = *(long double *)a6;
    *(_QWORD *)&v234 = *(_QWORD *)&v235;
    *((_QWORD *)&v234 + 1) = *((_QWORD *)&v235 + 1) & 0x7FFFFFFFFFFFFFFFLL;
    if ( v234 > *(long double *)&xmmword_45A930 )
    {
      v10 = *((_QWORD *)&v235 + 1);
      v11 = *(int *)(a5 + 8);
      StatusReg = _ReadStatusReg(TPIDR_EL0);
      v13 = "inf";
      goto LABEL_9;
    }
    v26 = _mpn_extract_long_double(v253, 2, &v245, &v240, v235, *(long double *)&xmmword_45A930);
    v27 = ((_DWORD)v26 << 6) - 112;
  }
  else
  {
    if ( fabs(*a6) > 1.79769313e308 )
    {
      v10 = *(_QWORD *)a6;
      v11 = *(int *)(a5 + 8);
      StatusReg = _ReadStatusReg(TPIDR_EL0);
      v13 = "inf";
LABEL_9:
      v14 = v10 >> 63;
      v15 = *(_WORD *)(*(_QWORD *)(StatusReg + 72) + 2 * v11);
      v240 = v14;
      v20 = (v15 & 0x100) == 0;
      v16 = *(_DWORD *)(a5 + 4);
      if ( !v20 )
        v13 = "INF";
      v17 = ((v8 ^ 0x20u) >> 5) & 1;
      if ( (_DWORD)v14 )
      {
        v18 = v16 - 4;
        v19 = v16 - 4 > 0;
        v20 = v16 - 4 <= 0 || v17 == 0;
        if ( v20 )
          goto LABEL_17;
      }
      else
      {
        v18 = v16 - 3;
        if ( (*(_DWORD *)(a5 + 12) & 0x50) != 0 )
          v18 = v16 - 4;
        v19 = v18 > 0;
        if ( v18 <= 0 || v17 == 0 )
        {
          if ( (v8 & 0x40) != 0 )
            goto LABEL_75;
          goto LABEL_33;
        }
      }
      _printf_buffer_pad_1(a1, 0x20u, v18);
      if ( !v240 )
      {
        LOWORD(v8) = *(_WORD *)(a5 + 12);
        v19 = 1;
        if ( (v8 & 0x40) != 0 )
        {
LABEL_75:
          v45 = *(_BYTE **)(a1 + 8);
          if ( v45 == *(_BYTE **)(a1 + 16) )
          {
            _printf_buffer_putc_1(a1, 43);
          }
          else
          {
            *(_QWORD *)(a1 + 8) = v45 + 1;
            *v45 = 43;
          }
          goto LABEL_19;
        }
LABEL_33:
        if ( (v8 & 0x10) != 0 )
        {
          v25 = *(_BYTE **)(a1 + 8);
          if ( v25 == *(_BYTE **)(a1 + 16) )
          {
            _printf_buffer_putc_1(a1, 32);
          }
          else
          {
            *(_QWORD *)(a1 + 8) = v25 + 1;
            *v25 = 32;
          }
        }
        goto LABEL_19;
      }
      v19 = 1;
LABEL_17:
      v21 = *(_BYTE **)(a1 + 8);
      if ( v21 == *(_BYTE **)(a1 + 16) )
      {
        _printf_buffer_putc_1(a1, 45);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v21 + 1;
        *v21 = 45;
      }
LABEL_19:
      _printf_buffer_write(a1, (__int64)v13, 3u);
      if ( (*(_WORD *)(a5 + 12) & 0x20LL) != 0 && v19 )
        _printf_buffer_pad_1(a1, 0x20u, v18);
      return &_stack_chk_guard;
    }
    v26 = _mpn_extract_double(v253, 2, &v245, &v240);
    v27 = ((_DWORD)v26 << 6) - 52;
  }
  v28 = v245;
  v247 = v26;
  if ( v245 >= 0 )
    v29 = v245;
  else
    v29 = -v245;
  v30 = 8LL * (((v29 + 63) >> 6) + 4) + 15;
  v31 = &v224[-(v30 & 0xFFFFFFFFFFFF0000LL)];
  if ( v224 != (_BYTE *)v31 )
  {
    do
      v223 = 0;
    while ( v221 != v31 );
  }
  v221[0] = 0;
  if ( ((unsigned __int16)v30 & 0xFFF0u) >= 0x400uLL )
    v223 = 0;
  v32 = (_QWORD *)((char *)v221 - (v30 & 0xFFFFFFFFFFFF0000LL));
  v246 = v222;
  if ( v221 != v32 )
  {
    do
      v220 = 0;
    while ( v218 != v32 );
  }
  v218[0] = 0;
  if ( ((unsigned __int16)v30 & 0xFFF0u) >= 0x400uLL )
    v220 = 0;
  v33 = (_QWORD *)((char *)v218 - (v30 & 0xFFFFFFFFFFFF0000LL));
  v250 = (unsigned __int64 *)&v219;
  v34 = v30 & 0xFFF0;
  if ( v218 != v33 )
  {
    do
      v217 = 0;
    while ( v215 != v33 );
  }
  v215[0] = 0;
  if ( v34 >= 0x400uLL )
    v217 = 0;
  v248 = (unsigned __int64 *)&v216;
  v249 = 0;
  if ( v245 <= 2 )
  {
    if ( (v245 & 0x80000000) == 0 )
    {
      if ( v245 + v27 > 63 )
        _libc_assert_fail(
          "0 <= p.exponent && p.exponent < 3 && p.exponent + to_shift < BITS_PER_MP_LIMB",
          (__int64)"printf_fp.c",
          0x28Fu,
          (__int64)"__printf_fp_buffer_1");
      v129 = _mpn_lshift(v222);
      v130 = v247++;
      v246[v130] = v129;
      v245 = 0;
      goto LABEL_88;
    }
    v151 = _mpn_lshift(v222);
    v152 = v246;
    v153 = v247++;
    v246[v153] = v151;
    if ( v151 != 1 && (v152[v247 - 2] || *v152) )
      _libc_assert_fail(
        "cy == 1 || (p.frac[p.fracsize - 2] == 0 && p.frac[0] == 0)",
        (__int64)"printf_fp.c",
        0x1F5u,
        (__int64)"__printf_fp_buffer_1");
    v154 = -v245;
    v155 = (char *)&unk_46AF88;
    v156 = 12;
    v157 = 0;
    v243 = 1;
    v245 = -v245;
    while ( 1 )
    {
      v169 = *((_DWORD *)v155 - 1);
      v155 -= 24;
      if ( v169 > v154 )
        goto LABEL_319;
      if ( v247 < *((_QWORD *)v155 + 1) - 1LL )
        v158 = _mpn_mul(v250, (char *)&_tens + 8 * *(_QWORD *)v155 + 8);
      else
        v158 = _mpn_mul(v250, v246);
      v159 = v250;
      if ( v158 )
        v160 = v247 + *((_QWORD *)v155 + 1) + 1;
      else
        v160 = v247 + *((_QWORD *)v155 + 1);
      v161 = *((_DWORD *)v155 + 4);
      v162 = v160 - 2;
      v251 = v162;
      v163 = v162;
      v164 = &v250[v162 - 1];
      v165 = __clz(*v164);
      v166 = v165;
      v167 = ~(_DWORD)v165 + (((_DWORD)v162 - (_DWORD)v247 + 1) << 6);
      if ( v167 > v161 )
        _libc_assert_fail("incr <= powers->p_expo", (__int64)"printf_fp.c", 0x217u, (__int64)"__printf_fp_buffer_1");
      v168 = v245;
      v154 = v245;
      if ( v167 == v245 + 3 )
      {
        if ( (int)v165 > 60 )
        {
          *(_QWORD *)&v235 = v165;
          v252 = xmmword_45A940;
          _mpn_lshift(&v252);
          v168 = v245;
          LODWORD(v165) = LODWORD(v235);
          v154 = v245;
          if ( v167 > v245 + 2 )
          {
            if ( v167 != v245 + 3 )
              goto LABEL_319;
            v159 = v250;
            v162 = v251;
            v170 = *((_QWORD *)&v252 + 1);
            v163 = v251;
            v164 = &v250[v251 - 1];
LABEL_326:
            if ( *v164 >= v170 && (*v164 != v170 || v159[v163 - 2] >= (unsigned __int64)v252) )
            {
              v154 = v168;
              goto LABEL_319;
            }
            v171 = v168 - v167;
            v157 |= 1 << v156;
            v245 = v168 - v167;
LABEL_331:
            v166 = v165 - v171;
            goto LABEL_332;
          }
          v159 = v250;
          v162 = v251;
        }
        else
        {
          v170 = 10LL << (60 - (unsigned __int8)v165);
          *(_QWORD *)&v252 = 0;
          *((_QWORD *)&v252 + 1) = v170;
          if ( v167 > v245 + 2 )
            goto LABEL_326;
        }
      }
      else if ( v167 > v245 + 2 )
      {
        goto LABEL_319;
      }
      v171 = v168 - v167;
      v245 = v168 - v167;
      v157 |= 1 << v156;
      if ( v168 - v167 < 0 )
        goto LABEL_331;
LABEL_332:
      if ( !*v159 )
      {
        v172 = v159 + 1;
        v173 = 1;
        do
        {
          v174 = v172;
          v175 = v173;
          v177 = *v172++;
          v176 = v177;
          ++v173;
        }
        while ( !v177 );
        if ( v166 != 63 )
        {
          if ( (int)__clz(__rbit64(v176)) < 63 - v166 )
          {
            v178 = (int)v175 - 1;
            _mpn_rshift(v246, &v159[v175 - 1], v162 - v178);
            v154 = v245;
            v247 = v251 - v178;
            goto LABEL_319;
          }
          v200 = (int)v175;
          v159 = v174;
          v162 -= (int)v175;
LABEL_403:
          _mpn_rshift(v246, v159, v162);
          v154 = v245;
          v247 = v251 - v200;
          goto LABEL_319;
        }
        v162 -= (int)v175;
        v196 = (int)v175;
        goto LABEL_398;
      }
      if ( v166 == 63 )
      {
        v196 = 0;
        v175 = 0;
LABEL_398:
        if ( v162 > 0 )
        {
          v197 = v246;
          v198 = &v159[v175];
          v199 = 0;
          do
          {
            v197[v199] = v198[v199];
            ++v199;
            v162 = v251 - v196;
          }
          while ( v199 < v251 - v196 );
        }
        v154 = v245;
        v247 = v162;
        goto LABEL_319;
      }
      v200 = 0;
      if ( 63 - v166 <= (int)__clz(__rbit64(*v159)) )
        goto LABEL_403;
      v203 = _mpn_lshift(v246);
      v247 = v251 + 1;
      v154 = v245;
      v246[v251] = v203;
LABEL_319:
      if ( !--v156 )
      {
        if ( v154 > 0 )
        {
          v179 = _mpn_mul_1(v250, v246, v247, 10);
          v251 = v247;
          if ( v179 && v250[v247 - 1] > 0x13 )
            _libc_assert_fail(
              "cy == 0 || p.tmp[p.tmpsize - 1] < 20",
              (__int64)"printf_fp.c",
              0x277u,
              (__int64)"__printf_fp_buffer_1");
          v180 = v245;
          if ( v245 > 4 )
            v180 = 4;
          if ( (int)__clz(__rbit64(*v250)) >= v180 )
          {
            _mpn_rshift(v246, v250, v247);
            v182 = v246;
          }
          else
          {
            v181 = _mpn_lshift(v246);
            v182 = v246;
            if ( v181 )
            {
              v183 = v251++;
              v246[v183] = v181;
            }
          }
          v247 = v251;
          v157 |= 1u;
          if ( v182[v251 - 1] > 9 )
            _libc_assert_fail(
              "p.frac[p.fracsize - 1] < 10",
              (__int64)"printf_fp.c",
              0x285u,
              (__int64)"__printf_fp_buffer_1");
        }
LABEL_341:
        v245 = v157;
        goto LABEL_88;
      }
      if ( v154 <= 0 )
        goto LABEL_341;
    }
  }
  v35 = v245 + v27 + 63;
  if ( v245 + v27 >= 0 )
    v35 = v245 + v27;
  v36 = v35 >> 6;
  if ( (((_BYTE)v245 + (_BYTE)v27) & 0x3F) != 0 )
  {
    v137 = _mpn_lshift(&v222[v36]);
    v28 = v245;
    v37 = (v27 + v245) / 64;
    v138 = v37 + v247;
    v247 += v37;
    if ( v137 )
    {
      v247 = v138 + 1;
      v246[v138] = v137;
    }
  }
  else
  {
    v37 = v36;
    if ( v26 > 0 )
    {
      j_memcpy(&v222[v36]);
      v26 = v247;
    }
    v247 = v37 + v26;
  }
  if ( v37 > 0 )
    memset(v246, 0, 8 * v37);
  v38 = v249;
  v39 = (char *)&unk_46AF88;
  v40 = 0;
  v41 = 12;
  v42 = 0;
  while ( 1 )
  {
    v43 = *((_DWORD *)v39 - 2);
    v39 -= 24;
    if ( v42 + v43 - 1 > v28 )
      goto LABEL_70;
    if ( v38 )
    {
      v87 = _mpn_mul(v250, v248);
      v88 = v249 + *((_QWORD *)v39 + 1);
      if ( v87 )
        v44 = v88 - 1;
      else
        v44 = v88 - 2;
      v251 = v44;
    }
    else
    {
      if ( (*(_WORD *)(a5 + 12) & 1) != 0 )
      {
        v251 = *((_QWORD *)v39 + 1) + 1LL;
        j_memcpy(v250 + 1);
        v89 = v245;
        *v250 = 0;
        v245 = v89 + 64;
      }
      else
      {
        v251 = *((_QWORD *)v39 + 1);
        j_memcpy(v250);
      }
      v44 = v251;
    }
    if ( v247 > v44 )
      goto LABEL_80;
    if ( v247 == v44 && (_mpn_cmp(v246, v250, v44) & 0x80000000) == 0 )
      break;
    v38 = v249;
LABEL_70:
    if ( --v41 == -1 )
      goto LABEL_81;
LABEL_71:
    v28 = v245;
  }
  v44 = v251;
LABEL_80:
  v249 = v44;
  j_memcpy(v248);
  v38 = v249;
  v46 = 1 << v41--;
  v40 |= v46;
  v42 = ((_DWORD)v249 << 6) - 129 - __clz(v248[v249 - 1]);
  if ( v41 != -1 )
    goto LABEL_71;
LABEL_81:
  v245 = v40;
  if ( v38 <= 0 )
    goto LABEL_88;
  v47 = v248;
  v48 = *v248;
  v49 = v248[v38 - 1];
  v50 = __clz(v49);
  if ( *v248 )
  {
    if ( (v49 & 0x8000000000000000LL) != 0 )
      goto LABEL_88;
    v54 = *v248;
    v52 = v248;
    v53 = 0;
    v58 = 0;
    v192 = *v246;
LABEL_368:
    v193 = __clz(__rbit64(v54));
    v184 = v193;
    if ( v192 )
    {
      v194 = __clz(__rbit64(v192));
      if ( v193 > v194 )
        v184 = v194;
      else
        v184 = v193;
    }
LABEL_357:
    v185 = 64 - v50;
    if ( v58 )
    {
      v186 = v58;
      if ( v184 < v185 )
      {
        v189 = v53 * 8 - 8;
        v190 = v58 - 1;
        _mpn_rshift(v248, (char *)v248 + v189, v38 - v190);
        v249 -= v186;
        _mpn_rshift(v246, (char *)v246 + v189, v247 - v190);
        v191 = v247 - v190;
        if ( !v246[v247 - v190 - 1] )
          v191 = v247 - v186;
        v247 = v191;
        goto LABEL_88;
      }
    }
    else
    {
      v186 = 0;
      if ( v184 < v185 )
      {
        _mpn_lshift(v248);
        v201 = _mpn_lshift(v246);
        if ( v201 )
        {
          v202 = v247++;
          v246[v202] = v201;
        }
        goto LABEL_88;
      }
    }
    _mpn_rshift(v248, v52, v38 - v186);
    v187 = v58 + 1;
    v249 -= v187;
    _mpn_rshift(v246, &v246[v53], v247 - v186);
    v188 = v247 - v186;
    if ( !v246[v188 - 1] )
      v188 = v247 - v187;
    v247 = v188;
    goto LABEL_88;
  }
  v51 = v246;
  v52 = v248;
  v53 = 0;
  do
  {
    v56 = v246[v53];
    v57 = v48;
    if ( v56 )
    {
      v58 = v48;
      if ( v50 )
      {
        v184 = __clz(__rbit64(v56));
        goto LABEL_357;
      }
      if ( !(_DWORD)v48 )
        goto LABEL_88;
      goto LABEL_292;
    }
    v55 = v52[1];
    ++v52;
    v54 = v55;
    ++v48;
    ++v53;
  }
  while ( !v55 );
  v58 = v57 + 1;
  if ( v50 )
  {
    v192 = v246[v53];
    goto LABEL_368;
  }
LABEL_292:
  v142 = v38 - v58;
  if ( v142 > 0 )
  {
    v143 = &v248[v48];
    for ( i = 0; i < v142; ++i )
    {
      v47[i] = v143[i];
      v142 = v249 - v58;
    }
  }
  v249 = v142;
  v145 = v247 - v58;
  if ( v145 > 0 )
  {
    v146 = &v51[v48];
    for ( j = 0; j < v145; ++j )
    {
      v51[j] = v146[j];
      v145 = v247 - v58;
    }
  }
  v247 = v145;
LABEL_88:
  v59 = _ReadStatusReg(TPIDR_EL0);
  v60 = *(_DWORD *)(a5 + 8);
  v237 = *(_DWORD *)a5;
  v61 = *(_QWORD *)(v59 + 88);
  v225 = v59;
  v231 = *(_DWORD *)(a5 + 4);
  v232 = (unsigned __int8)*(_DWORD *)(v61 + 4LL * v60);
  if ( v232 == 101 )
  {
    v64 = v237;
    v244 = v60;
    if ( v237 < 0 )
    {
      v230 = 14;
      v65 = 1;
      v64 = 6;
      v67 = 1;
      LODWORD(v235) = 6;
      v237 = 0x7FFFFFFF;
      v228 = 16;
      goto LABEL_108;
    }
    v230 = v237 + 8LL;
    goto LABEL_247;
  }
  if ( v232 == 102 )
  {
    v244 = 102;
    if ( v237 < 0 )
    {
      v68 = 6;
      v237 = 6;
    }
    else
    {
      v68 = v237;
    }
    if ( !v243 )
    {
      v230 = v245 + 2LL + v68;
      if ( v230 > 0xFFFFFFFFFFFFFFFCLL )
      {
LABEL_261:
        *(_DWORD *)(v225 + 40) = 34;
LABEL_262:
        *(_DWORD *)(a1 + 32) = 0;
        return &_stack_chk_guard;
      }
      v65 = v245 + 1;
      v67 = 1;
      LODWORD(v235) = v237;
      v64 = v237;
      v237 = 0x7FFFFFFF;
LABEL_103:
      if ( v230 >= v68 )
        goto LABEL_104;
      goto LABEL_261;
    }
    v64 = v237;
    v230 = v68 + 2;
LABEL_247:
    v67 = 1;
    v65 = 1;
    LODWORD(v235) = v237;
    v237 = 0x7FFFFFFF;
    goto LABEL_104;
  }
  if ( v237 )
    v62 = v237;
  else
    v62 = 1;
  if ( v237 < 0 )
    v63 = 6;
  else
    v63 = v62;
  v237 = v63;
  if ( !v243 )
  {
    if ( v63 <= v245 )
      goto LABEL_270;
    v65 = v245 + 1;
    v64 = v237 - (v245 + 1);
LABEL_99:
    v66 = *(_WORD *)(a5 + 12);
    v67 = 0;
    v244 = 102;
    v230 = v237 + 5LL;
    v68 = v64;
    if ( (v66 & 8) != 0 )
      v69 = v64;
    else
      v69 = 0;
    LODWORD(v235) = v69;
    goto LABEL_103;
  }
  if ( v245 <= 4 )
  {
    v64 = v237;
    v65 = 0;
    goto LABEL_99;
  }
LABEL_270:
  v134 = *(_WORD *)(a5 + 12);
  v67 = 0;
  v64 = v237 - 1;
  v65 = 1;
  v244 = v60 - 2;
  v230 = v237 - 1 + 8LL;
  if ( (v134 & 8) != 0 )
    v135 = v237 - 1;
  else
    v135 = 0;
  LODWORD(v235) = v135;
LABEL_104:
  v228 = v230 + 2;
  v70 = v230 + 2;
  v71 = _libc_alloca_cutoff(v230 + 2);
  if ( v70 > 0x8000 && v71 == 0 )
  {
    v229 = (char *)malloc(v228, v72, v73, v74, v75, v76);
    if ( v229 )
    {
      v226 = 0;
      goto LABEL_113;
    }
    goto LABEL_262;
  }
LABEL_108:
  v78 = (_QWORD *)((char *)v215 - ((v228 + 15) & 0xFFFFFFFFFFFF0000LL));
  if ( v215 != v78 )
  {
    do
      v214 = 0;
    while ( &v212 != v78 );
  }
  v212 = 0;
  if ( (((_WORD)v228 + 15) & 0xFFF0u) >= 0x400uLL )
    v214 = 0;
  v229 = &v213;
  v226 = 1;
LABEL_113:
  v79 = v229 + 2;
  if ( v243 )
  {
    if ( v244 != 102 )
    {
      if ( v65 != 1 )
        _libc_assert_fail(
          "p.expsign == 0 || intdig_max == 1",
          (__int64)"printf_fp.c",
          0x2FDu,
          (__int64)"__printf_fp_buffer_1");
      *v79 = hack_digit(&v243);
LABEL_117:
      v80 = &v79[v65];
      goto LABEL_118;
    }
    v140 = v229;
    v82 = v229 + 4;
    v65 = 0;
    --v245;
    v141 = v239;
    v229[2] = 48;
    v140[3] = v141;
  }
  else
  {
    if ( v65 > 0 )
    {
      v139 = 0;
      do
        v79[v139++] = hack_digit(&v243);
      while ( v65 > (int)v139 );
      goto LABEL_117;
    }
    v80 = v229 + 2;
    v65 = 0;
LABEL_118:
    v81 = (*(_WORD *)(a5 + 12) & 8) == 0 && SLODWORD(v235) <= 0;
    if ( !v81 || v64 > 0 && (v247 > 1 || *v246) )
    {
      v67 = 1;
      *v80 = v239;
      v82 = v80 + 1;
    }
    else
    {
      v82 = v80;
      v67 = 1;
    }
  }
  v83 = LODWORD(v235);
  v84 = 0;
  LODWORD(v234) = 0;
  while ( v84 < v83 || v84 < v64 && (v247 > 1 || *v246) )
  {
    v85 = hack_digit(&v243);
    v86 = v67 ^ 1;
    *v82++ = v85;
    ++v84;
    v67 = 1;
    if ( ((v85 == 48) & v86) != 0 )
    {
      ++v64;
      v67 = 0;
      if ( SLODWORD(v235) > 0 )
        v83 = ++LODWORD(v234) + LODWORD(v235);
    }
  }
  v90 = (unsigned __int8)*(v82 - 1);
  if ( v239 == v90 )
    LOBYTE(v90) = *(v82 - 2);
  v227 = v83;
  v91 = (unsigned __int8)hack_digit(&v243);
  v92 = v227;
  v93 = (_DWORD)v91 != 48 && (_DWORD)v91 != 53;
  if ( (_DWORD)v91 == 48 || (_DWORD)v91 == 53 )
  {
    v94 = v247;
    if ( v247 == 1 )
    {
      v95 = v246;
      if ( *v246 )
      {
        if ( !v249 )
          goto LABEL_143;
        goto LABEL_146;
      }
    }
    else
    {
      if ( v249 )
        goto LABEL_146;
      if ( v247 )
      {
        v95 = v246;
LABEL_143:
        v96 = v95 - 1;
        while ( !v96[v94] )
        {
          if ( !--v94 )
            goto LABEL_147;
        }
LABEL_146:
        v93 = 1;
      }
    }
  }
LABEL_147:
  v97 = _ReadStatusReg(FPCR) & 0xC00000;
  if ( (_DWORD)v97 == 0x800000 )
  {
    if ( !v240 )
      goto LABEL_232;
LABEL_151:
    if ( (unsigned int)v91 > 0x34 || v93 )
      goto LABEL_155;
LABEL_232:
    v109 = v244;
LABEL_233:
    if ( v84 > v92 )
      goto LABEL_178;
    goto LABEL_179;
  }
  if ( (unsigned int)v97 > 0x800000 )
  {
    if ( (_DWORD)v97 != 12582912 )
      abort(v91);
    goto LABEL_232;
  }
  if ( (_DWORD)v97 )
  {
    if ( !v240 )
      goto LABEL_151;
    goto LABEL_232;
  }
  if ( (unsigned int)v91 <= 0x34 || !(v93 | v90 & 1) )
    goto LABEL_232;
LABEL_155:
  v99 = (unsigned __int8)*(v82 - 1);
  if ( !v84 )
  {
    v101 = v82;
LABEL_249:
    v132 = &v101[-((unsigned __int8)*(v101 - 1) == v239) - 1];
    if ( v79 > v132 )
      goto LABEL_299;
    v133 = v229 + 1;
    do
    {
      if ( *v132 != 57 )
        break;
      *v132-- = 48;
    }
    while ( v132 != v133 );
    if ( v79 > v132 )
    {
LABEL_299:
      v109 = v244;
      if ( v244 == 102 )
      {
        if ( v65 == v237 )
        {
          v204 = v229;
          v205 = *(_WORD *)(a5 + 12);
          *v229 = 49;
          v204[1] = v239;
          if ( (v205 & 8) == 0 && v84 == 0 )
          {
            v84 = v237;
          }
          else
          {
            v84 += 1 + v237;
            v204[v237 + 2] = 48;
          }
          v79 = v229;
          v230 = v228;
          v207 = *(int *)(a5 + 8);
          v65 = 1;
          v208 = *(_QWORD *)(v225 + 72);
          ++v245;
          if ( (*(_WORD *)(v208 + 2 * v207) & 0x100) != 0 )
            v109 = 69;
          else
            v109 = 101;
          v244 = v109;
        }
        else
        {
          ++v65;
          v79 = v229 + 1;
          v230 = v228 - 1;
          v229[1] = 49;
        }
      }
      else
      {
        v148 = v245;
        if ( v243 )
          v149 = -1;
        else
          v149 = 1;
        v229[2] = 49;
        v245 = v148 + v149;
        if ( !(v148 + v149) )
          v243 = 0;
      }
      if ( v65 + v84 > v237 )
      {
        v150 = v65 + v84 - v237;
        v84 = v237 - v65;
        v82 -= v150;
      }
    }
    else
    {
      ++*v132;
      v109 = v244;
    }
    goto LABEL_233;
  }
  v100 = v99 != 57 || v239 == 57;
  v101 = v82 - 1;
  if ( v100 )
  {
    v105 = 0;
  }
  else
  {
    do
    {
      v102 = (int)v101;
      *v101 = 48;
      v103 = (unsigned __int8)*--v101;
      v99 = v103;
    }
    while ( v103 == 57 && v239 != 57 );
    v105 = (_DWORD)v82 - v102;
  }
  v107 = SLODWORD(v234) > 0 && v105 == LODWORD(v235);
  LODWORD(v234) -= v107;
  if ( v239 == v99 )
  {
    v108 = (unsigned __int8)*v101;
    if ( v232 == 103 && v244 == 102 && (*(_WORD *)(a5 + 12) & 8) != 0 && v101 == v229 + 3 )
      LODWORD(v234) -= v229[2] == 48;
  }
  else
  {
    v108 = (unsigned __int8)(v99 + 1);
    *v101 = v108;
  }
  v92 = LODWORD(v234) + LODWORD(v235);
  if ( v239 == v108 )
    goto LABEL_249;
  v109 = v244;
  if ( v84 <= v92 )
    goto LABEL_182;
  do
  {
LABEL_178:
    if ( *(v82 - 1) != 48 )
      break;
    --v84;
    --v82;
  }
  while ( v84 > v92 );
LABEL_179:
  if ( !v84 && (*(_WORD *)(a5 + 12) & 8) == 0 )
    v82 -= (unsigned __int8)*(v82 - 1) == v239;
LABEL_182:
  if ( v109 != 102 )
  {
    if ( v243 && (v232 == 103 ? (v195 = v245 == 4) : (v195 = 0), v195) )
    {
      if ( v82 < v79 + 1 )
        _libc_assert_fail("wcp >= wstartp + 1", (__int64)"printf_fp.c", 0x3AEu, (__int64)"__printf_fp_buffer_1");
      if ( *v79 != 49 )
        _libc_assert_fail("wstartp[0] == '1'", (__int64)"printf_fp.c", 0x3AFu, (__int64)"__printf_fp_buffer_1");
      _memcpy_chk(v79, "0.0001", 6);
      v79[1] = v239;
      if ( v82 >= v79 + 2 )
      {
        v209 = v82 - (v79 + 2);
        v82 += 4;
        if ( v230 < v228 )
          v210 = v228;
        else
          v210 = v230;
        v211 = v210 - v230 + 6;
        if ( v211 < v210 )
          v211 = v210;
        _memset_chk(v79 + 6, 48, v209, v211 - v210 + v230 - 6);
      }
      else
      {
        v82 += 5;
      }
    }
    else
    {
      *v82 = v109;
      v110 = v82 + 2;
      if ( v243 )
        v111 = 45;
      else
        v111 = 43;
      v82[1] = v111;
      v112 = v245;
      if ( v245 <= 9 )
      {
        v82[2] = 48;
        v110 = v82 + 3;
        LOBYTE(v112) = v245;
      }
      else
      {
        for ( k = 10; k <= v245; k *= 10 )
          ;
        do
        {
          v114 = k;
          k /= 0xAu;
          *v110++ = v112 / k + 48;
          v112 = v245 % k;
          v245 %= k;
        }
        while ( v114 > 109 );
      }
      *v110 = v112 + 48;
      v82 = v110 + 1;
    }
  }
  v115 = *(_WORD *)(a5 + 12);
  LOBYTE(v116) = v115;
  if ( v238 && (v115 & 0x80) != 0 )
  {
    _grouping_iterator_init(v241, v236, v233, (unsigned int)v65);
    v115 = *(_WORD *)(a5 + 12);
    v117 = v242;
    LOBYTE(v116) = v115;
  }
  else
  {
    v117 = 0;
    v242 = 0;
  }
  v118 = v240;
  v119 = v82 - v79;
  if ( v240 )
  {
    v120 = v231 - 1 - v119 - v117;
    if ( (v115 & 0x20) == 0 )
    {
      v128 = *(_DWORD *)(a5 + 16);
      if ( v128 != 48 )
        goto LABEL_227;
    }
    goto LABEL_242;
  }
  if ( (*(_DWORD *)(a5 + 12) & 0x50) == 0 )
  {
    v120 = v231 - v119 - v117;
    if ( (v115 & 0x20) == 0 )
      goto LABEL_226;
    goto LABEL_199;
  }
  v120 = v231 - 1 - v119 - v117;
  if ( (v115 & 0x20) != 0 )
    goto LABEL_198;
LABEL_226:
  v128 = *(_DWORD *)(a5 + 16);
  if ( v128 == 48 )
  {
LABEL_198:
    LOBYTE(v116) = v115;
LABEL_199:
    if ( (v115 & 0x40) != 0 )
    {
      v136 = *(_BYTE **)(a1 + 8);
      if ( v136 == *(_BYTE **)(a1 + 16) )
      {
        _printf_buffer_putc_1(a1, 43);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v136 + 1;
        *v136 = 43;
      }
      v116 = *(_WORD *)(a5 + 12);
    }
    else if ( (v115 & 0x10) != 0 )
    {
      v127 = *(_BYTE **)(a1 + 8);
      if ( v127 == *(_BYTE **)(a1 + 16) )
      {
        _printf_buffer_putc_1(a1, 32);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v127 + 1;
        *v127 = 32;
      }
      v116 = *(_WORD *)(a5 + 12);
    }
    goto LABEL_201;
  }
LABEL_227:
  if ( v120 > 0 )
  {
    _printf_buffer_pad_1(a1, v128, (unsigned int)v120);
    v118 = v240;
  }
  if ( !v118 )
  {
    v115 = *(_WORD *)(a5 + 12);
    LOBYTE(v116) = v115;
    goto LABEL_199;
  }
LABEL_242:
  v131 = *(_BYTE **)(a1 + 8);
  if ( v131 == *(_BYTE **)(a1 + 16) )
  {
    _printf_buffer_putc_1(a1, 45);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v131 + 1;
    *v131 = 45;
  }
  v116 = *(_WORD *)(a5 + 12);
LABEL_201:
  if ( (v116 & 0x20) == 0 && *(_DWORD *)(a5 + 16) == 48 && v120 > 0 )
    _printf_buffer_pad_1(a1, 0x30u, (unsigned int)v120);
  if ( v242 && v65 )
  {
    v122 = &v79[v65];
    v123 = v79;
    while ( 1 )
    {
      if ( (_grouping_iterator_next(v241) & 1) == 0 )
        goto LABEL_210;
      v126 = *(_BYTE **)(a1 + 8);
      if ( v126 == *(_BYTE **)(a1 + 16) )
      {
        _printf_buffer_putc_1(a1, v238);
LABEL_210:
        v124 = *(char **)(a1 + 8);
        v125 = *v123;
        if ( v124 != *(char **)(a1 + 16) )
          goto LABEL_211;
LABEL_215:
        ++v123;
        _printf_buffer_putc_1(a1, v125);
        if ( v123 == v122 )
        {
LABEL_216:
          v79 += (unsigned int)v65;
          v119 = v82 - v79;
          break;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v126 + 1;
        *v126 = v238;
        v124 = *(char **)(a1 + 8);
        v125 = *v123;
        if ( v124 == *(char **)(a1 + 16) )
          goto LABEL_215;
LABEL_211:
        *(_QWORD *)(a1 + 8) = v124 + 1;
        ++v123;
        *v124 = v125;
        if ( v123 == v122 )
          goto LABEL_216;
      }
    }
  }
  _printf_buffer_write(a1, (__int64)v79, v119);
  if ( (*(_WORD *)(a5 + 12) & 0x20) != 0 && v120 > 0 )
    _printf_buffer_pad_1(a1, *(_BYTE *)(a5 + 16), (unsigned int)v120);
  if ( !v226 )
    free(v229);
  return &_stack_chk_guard;
}
