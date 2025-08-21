__int64 *__fastcall sub_43E8A4(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        double *a6)
{
  int v8; // w21
  int v9; // w0
  double v10; // x0
  __int64 v11; // x4
  unsigned __int64 StatusReg; // x3
  const char *v13; // x1
  const char *v14; // x22
  __int64 v15; // x0
  __int16 v16; // w2
  int v17; // w2
  unsigned int v18; // w1
  int v19; // w24
  _BOOL4 v20; // w23
  bool v21; // zf
  _BYTE *v22; // x0
  __int64 *result; // x0
  _BYTE *v26; // x0
  __int64 v27; // x2
  int v28; // w21
  int v29; // w27
  int v30; // w1
  __int64 v31; // x1
  _QWORD *v32; // x0
  _QWORD *v33; // x3
  _QWORD *v34; // x3
  unsigned __int16 v35; // w1
  int v36; // w4
  int v37; // w4
  __int64 v38; // x21
  __int64 v39; // x2
  _QWORD *v40; // x24
  int v41; // w22
  int v42; // w25
  int v43; // w28
  int v44; // w0
  __int64 v45; // x1
  __int64 v46; // x1
  _BYTE *v47; // x0
  int v48; // w1
  unsigned __int64 *v49; // x0
  unsigned __int64 v50; // x3
  unsigned __int64 v51; // x1
  unsigned __int64 v52; // x25
  unsigned __int64 *v53; // x5
  unsigned __int64 *v54; // x1
  __int64 v55; // x21
  unsigned __int64 v56; // x4
  unsigned __int64 v57; // t1
  unsigned __int64 v58; // x4
  int v59; // w6
  int v60; // w23
  unsigned __int64 v61; // x2
  int v62; // w1
  __int64 v63; // x0
  int v64; // w27
  int v65; // w2
  int v66; // w22
  signed int v67; // w24
  __int16 v68; // w3
  char v69; // w28
  unsigned __int64 v70; // x0
  int v71; // w1
  unsigned __int64 v72; // x21
  int v73; // w0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  void *v77; // x4
  void *v78; // x5
  void *v79; // x6
  double v80; // d0
  double v81; // d1
  double v82; // d2
  double v83; // d3
  double v84; // d4
  double v85; // d5
  double v86; // d6
  double v87; // d7
  __int64 *v89; // x1
  char *v90; // x23
  char *v91; // x4
  bool v92; // cc
  char *v93; // x27
  int v94; // w25
  int v95; // w26
  char v96; // w0
  unsigned __int8 v97; // w5
  __int64 v98; // x0
  __int64 v99; // x1
  char *v100; // x1
  int v101; // w0
  int v102; // w22
  __int64 v103; // x0
  __int64 v104; // x1
  int v105; // w5
  _BOOL4 v106; // w7
  __int64 v107; // x2
  unsigned __int64 *v108; // x6
  unsigned __int64 *v109; // x6
  unsigned __int64 v110; // x2
  int v112; // w2
  bool v113; // zf
  char *v114; // x0
  int v115; // w3
  int v116; // t1
  int v118; // w3
  int v120; // w3
  int v121; // w2
  int v122; // w6
  _BYTE *v123; // x3
  char v124; // w0
  int v125; // w1
  int k; // w0
  int v127; // w4
  __int16 v128; // w21
  __int16 v129; // w0
  int v130; // w25
  unsigned int v131; // w2
  unsigned __int64 v132; // x22
  int v133; // w25
  char *v135; // x22
  char *v136; // x26
  char *v137; // x0
  char v138; // w1
  _BYTE *v139; // x0
  double v140; // d0
  double v141; // d1
  double v142; // d2
  double v143; // d3
  double v144; // d4
  double v145; // d5
  double v146; // d6
  double v147; // d7
  _BYTE *v148; // x0
  int v149; // w1
  __int64 v150; // x0
  __int64 v151; // x1
  _BYTE *v152; // x0
  char *v153; // x0
  char *v154; // x6
  __int16 v155; // w3
  int v156; // w0
  _BYTE *v157; // x0
  __int64 v158; // x0
  __int64 v159; // x2
  __int64 v160; // x28
  unsigned __int64 v161; // x2
  char v162; // w0
  __int64 v163; // x2
  unsigned __int64 *v164; // x6
  __int64 i; // x1
  __int64 v166; // x1
  unsigned __int64 *v167; // x3
  __int64 j; // x0
  int v169; // w0
  int v170; // w2
  int v171; // w0
  __int64 v172; // x0
  unsigned __int64 *v173; // x1
  __int64 v174; // x2
  int v175; // w5
  char *v176; // x25
  int v177; // w27
  int v178; // w22
  __int64 v179; // x0
  unsigned __int64 *v180; // x1
  __int64 v181; // x2
  int v182; // w5
  __int64 v183; // x2
  __int64 v184; // x8
  unsigned __int64 *v185; // x9
  unsigned __int64 v186; // x4
  int v187; // w26
  int v188; // w28
  int v189; // w6
  int v190; // w0
  unsigned __int64 v191; // x3
  int v192; // w0
  unsigned __int64 *v193; // x0
  __int64 v194; // x3
  unsigned __int64 *v195; // x6
  __int64 v196; // x4
  unsigned __int64 v197; // x5
  unsigned __int64 v198; // t1
  __int64 v199; // x28
  __int64 v200; // x0
  int v201; // w3
  __int64 v202; // x0
  unsigned __int64 *v203; // x1
  __int64 v204; // x2
  int v205; // w4
  int v206; // w24
  __int64 v207; // x22
  __int64 v208; // x23
  __int64 v209; // x22
  __int64 v210; // x21
  __int64 v211; // x23
  __int64 v212; // x0
  unsigned __int64 v213; // x5
  int v214; // w3
  int v215; // w5
  bool v216; // zf
  __int64 v217; // x3
  unsigned __int64 *v218; // x5
  unsigned __int64 *v219; // x4
  __int64 v220; // x1
  __int64 v221; // x28
  __int64 v222; // x0
  __int64 v223; // x1
  __int64 v224; // x0
  unsigned __int64 v225; // x1
  __int16 v226; // w0
  __int64 v228; // x7
  __int64 v229; // x2
  unsigned __int64 v230; // x2
  unsigned __int64 v231; // x6
  unsigned __int64 v232; // x5
  __int64 v233; // [xsp+0h] [xbp-40110h] BYREF
  char v234; // [xsp+10h] [xbp-40100h] BYREF
  __int64 v235; // [xsp+400h] [xbp-3FD10h]
  _QWORD v236[2]; // [xsp+10000h] [xbp-30110h] BYREF
  char v237; // [xsp+10010h] [xbp-30100h] BYREF
  __int64 v238; // [xsp+10400h] [xbp-2FD10h]
  _QWORD v239[2]; // [xsp+20000h] [xbp-20110h] BYREF
  char v240; // [xsp+20010h] [xbp-20100h] BYREF
  __int64 v241; // [xsp+20400h] [xbp-1FD10h]
  _QWORD v242[2]; // [xsp+30000h] [xbp-10110h] BYREF
  _QWORD v243[126]; // [xsp+30010h] [xbp-10100h] BYREF
  __int64 v244; // [xsp+30400h] [xbp-FD10h]
  _BYTE v245[24]; // [xsp+40000h] [xbp-110h] BYREF
  unsigned __int64 v246; // [xsp+40018h] [xbp-F8h]
  int v247; // [xsp+40020h] [xbp-F0h]
  int v248; // [xsp+40024h] [xbp-ECh]
  unsigned __int64 v249; // [xsp+40028h] [xbp-E8h]
  char *v250; // [xsp+40030h] [xbp-E0h]
  unsigned __int64 v251; // [xsp+40038h] [xbp-D8h]
  int v252; // [xsp+40040h] [xbp-D0h]
  int v253; // [xsp+40044h] [xbp-CCh]
  __int64 v254; // [xsp+40048h] [xbp-C8h]
  long double v255; // [xsp+40050h] [xbp-C0h]
  long double v256; // [xsp+40060h] [xbp-B0h]
  int v257; // [xsp+40070h] [xbp-A0h]
  int v258; // [xsp+40074h] [xbp-9Ch]
  int v259; // [xsp+40078h] [xbp-98h]
  int v260; // [xsp+4007Ch] [xbp-94h]
  unsigned int v261; // [xsp+40084h] [xbp-8Ch] BYREF
  int v262[5]; // [xsp+40088h] [xbp-88h] BYREF
  int v263; // [xsp+4009Ch] [xbp-74h]
  int v264; // [xsp+400A0h] [xbp-70h] BYREF
  int v265; // [xsp+400A4h] [xbp-6Ch]
  int v266; // [xsp+400A8h] [xbp-68h] BYREF
  unsigned __int64 *v267; // [xsp+400B0h] [xbp-60h]
  __int64 v268; // [xsp+400B8h] [xbp-58h]
  unsigned __int64 *v269; // [xsp+400C0h] [xbp-50h]
  __int64 v270; // [xsp+400C8h] [xbp-48h]
  unsigned __int64 *v271; // [xsp+400D0h] [xbp-40h]
  __int64 v272; // [xsp+400D8h] [xbp-38h]
  __int128 v273; // [xsp+400E0h] [xbp-30h] BYREF
  _BYTE v274[16]; // [xsp+400F8h] [xbp-18h] BYREF
  __int64 v275; // [xsp+40108h] [xbp-8h]

  v8 = *(unsigned __int16 *)(a5 + 12);
  v275 = qword_48DD60;
  v254 = a2;
  v259 = a3;
  v260 = a4;
  if ( (v8 & 0x100) != 0 )
    v9 = 4;
  else
    v9 = 1;
  v257 = v9;
  v261 = 0;
  v264 = 0;
  if ( (v8 & 1) == 0 )
  {
    if ( fabs(*a6) <= 1.79769313e308 )
    {
      v27 = sub_44A380(v274, 2, &v266, &v261);
      v28 = ((_DWORD)v27 << 6) - 52;
      goto LABEL_40;
    }
    v10 = *a6;
    v11 = *(int *)(a5 + 8);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v13 = "INF";
    v14 = "inf";
LABEL_11:
    v15 = *(_QWORD *)&v10 >> 63;
    v16 = *(_WORD *)(*(_QWORD *)(StatusReg + 72) + 2 * v11);
    v261 = v15;
    v21 = (v16 & 0x100) == 0;
    v17 = *(_DWORD *)(a5 + 4);
    if ( !v21 )
      v14 = v13;
    v18 = ((v8 ^ 0x20u) >> 5) & 1;
    if ( (_DWORD)v15 )
    {
      v19 = v17 - 4;
      v20 = v17 - 4 > 0;
      v21 = v17 - 4 <= 0 || v18 == 0;
      if ( v21 )
        goto LABEL_19;
    }
    else
    {
      v19 = v17 - 3;
      if ( (*(_DWORD *)(a5 + 12) & 0x50) != 0 )
        v19 = v17 - 4;
      v20 = v19 > 0;
      if ( v19 <= 0 || v18 == 0 )
      {
        if ( (v8 & 0x40) != 0 )
          goto LABEL_78;
        goto LABEL_36;
      }
    }
    sub_43E240(a1, 0x20u, v19);
    if ( !v261 )
    {
      LOWORD(v8) = *(_WORD *)(a5 + 12);
      v20 = 1;
      if ( (v8 & 0x40) != 0 )
      {
LABEL_78:
        v47 = *(_BYTE **)(a1 + 8);
        if ( v47 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 43);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v47 + 1;
          *v47 = 43;
        }
        goto LABEL_21;
      }
LABEL_36:
      if ( (v8 & 0x10) != 0 )
      {
        v26 = *(_BYTE **)(a1 + 8);
        if ( v26 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 32);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v26 + 1;
          *v26 = 32;
        }
      }
      goto LABEL_21;
    }
    v20 = 1;
LABEL_19:
    v22 = *(_BYTE **)(a1 + 8);
    if ( v22 == *(_BYTE **)(a1 + 16) )
    {
      sub_43E2F0(a1, 45);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v22 + 1;
      *v22 = 45;
    }
LABEL_21:
    sub_43E650(a1, (__int64)v14, 3u);
    if ( (*(_WORD *)(a5 + 12) & 0x20LL) != 0 && v20 )
      sub_43E240(a1, 0x20u, v19);
    goto LABEL_26;
  }
  v256 = *(long double *)a6;
  if ( (unsigned int)((__int64 (*)(void))sub_44D7B0)() )
  {
    v10 = *((double *)&v256 + 1);
    v11 = *(int *)(a5 + 8);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v13 = "NAN";
    v14 = "nan";
    goto LABEL_11;
  }
  *(_QWORD *)&v255 = *(_QWORD *)&v256;
  *((_QWORD *)&v255 + 1) = *((_QWORD *)&v256 + 1) & 0x7FFFFFFFFFFFFFFFLL;
  if ( !(unsigned int)sub_44D7B0(v255, *(long double *)&xmmword_45A930)
    && (int)sub_44D650(v255, *(long double *)&xmmword_45A930) > 0 )
  {
    v10 = *((double *)&v256 + 1);
    v11 = *(int *)(a5 + 8);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v13 = "INF";
    v14 = "inf";
    goto LABEL_11;
  }
  v27 = sub_44A400(v274, 2, &v266, &v261, v256);
  v28 = ((_DWORD)v27 << 6) - 112;
LABEL_40:
  v29 = v266;
  v268 = v27;
  if ( v266 >= 0 )
    v30 = v266;
  else
    v30 = -v266;
  v31 = 8LL * (((v30 + 63) >> 6) + 4) + 15;
  v32 = &v245[-(v31 & 0xFFFFFFFFFFFF0000LL)];
  if ( v245 != (_BYTE *)v32 )
  {
    do
      v244 = 0;
    while ( v242 != v32 );
  }
  v242[0] = 0;
  if ( ((unsigned __int16)v31 & 0xFFF0u) >= 0x400uLL )
    v244 = 0;
  v33 = (_QWORD *)((char *)v242 - (v31 & 0xFFFFFFFFFFFF0000LL));
  v267 = v243;
  if ( v242 != v33 )
  {
    do
      v241 = 0;
    while ( v239 != v33 );
  }
  v239[0] = 0;
  if ( ((unsigned __int16)v31 & 0xFFF0u) >= 0x400uLL )
    v241 = 0;
  v34 = (_QWORD *)((char *)v239 - (v31 & 0xFFFFFFFFFFFF0000LL));
  v271 = (unsigned __int64 *)&v240;
  v35 = v31 & 0xFFF0;
  if ( v239 != v34 )
  {
    do
      v238 = 0;
    while ( v236 != v34 );
  }
  v236[0] = 0;
  if ( v35 >= 0x400uLL )
    v238 = 0;
  v269 = (unsigned __int64 *)&v237;
  v270 = 0;
  if ( v266 <= 2 )
  {
    if ( (v266 & 0x80000000) == 0 )
    {
      if ( v266 + v28 > 63 )
        sub_41F250(
          "0 <= p.exponent && p.exponent < 3 && p.exponent + to_shift < BITS_PER_MP_LIMB",
          (__int64)"printf_fp.c",
          0x28Fu,
          (__int64)"__printf_fp_buffer_1");
      v150 = sub_4492F0(v243);
      v151 = v268++;
      v267[v151] = v150;
      v266 = 0;
      goto LABEL_92;
    }
    v172 = sub_4492F0(v243);
    v173 = v267;
    v174 = v268++;
    v267[v174] = v172;
    if ( v172 != 1 && (v173[v268 - 2] || *v173) )
      sub_41F250(
        "cy == 1 || (p.frac[p.fracsize - 2] == 0 && p.frac[0] == 0)",
        (__int64)"printf_fp.c",
        0x1F5u,
        (__int64)"__printf_fp_buffer_1");
    v175 = -v266;
    v176 = (char *)&unk_46AF88;
    v177 = 12;
    v178 = 0;
    v264 = 1;
    v266 = -v266;
    while ( 1 )
    {
      v190 = *((_DWORD *)v176 - 1);
      v176 -= 24;
      if ( v190 > v175 )
        goto LABEL_323;
      if ( v268 < *((_QWORD *)v176 + 1) - 1LL )
        v179 = sub_449350(v271, (char *)&unk_46AFC0 + 8 * *(_QWORD *)v176 + 8);
      else
        v179 = sub_449350(v271, v267);
      v180 = v271;
      if ( v179 )
        v181 = v268 + *((_QWORD *)v176 + 1) + 1;
      else
        v181 = v268 + *((_QWORD *)v176 + 1);
      v182 = *((_DWORD *)v176 + 4);
      v183 = v181 - 2;
      v272 = v183;
      v184 = v183;
      v185 = &v271[v183 - 1];
      v186 = __clz(*v185);
      v187 = v186;
      v188 = ~(_DWORD)v186 + (((_DWORD)v183 - (_DWORD)v268 + 1) << 6);
      if ( v188 > v182 )
        sub_41F250("incr <= powers->p_expo", (__int64)"printf_fp.c", 0x217u, (__int64)"__printf_fp_buffer_1");
      v189 = v266;
      v175 = v266;
      if ( v188 == v266 + 3 )
      {
        if ( (int)v186 > 60 )
        {
          *(_QWORD *)&v256 = v186;
          v273 = xmmword_45A940;
          sub_4492F0(&v273);
          v189 = v266;
          LODWORD(v186) = LODWORD(v256);
          v175 = v266;
          if ( v188 > v266 + 2 )
          {
            if ( v188 != v266 + 3 )
              goto LABEL_323;
            v180 = v271;
            v183 = v272;
            v191 = *((_QWORD *)&v273 + 1);
            v184 = v272;
            v185 = &v271[v272 - 1];
LABEL_330:
            if ( *v185 >= v191 && (*v185 != v191 || v180[v184 - 2] >= (unsigned __int64)v273) )
            {
              v175 = v189;
              goto LABEL_323;
            }
            v192 = v189 - v188;
            v178 |= 1 << v177;
            v266 = v189 - v188;
LABEL_335:
            v187 = v186 - v192;
            goto LABEL_336;
          }
          v180 = v271;
          v183 = v272;
        }
        else
        {
          v191 = 10LL << (60 - (unsigned __int8)v186);
          *(_QWORD *)&v273 = 0;
          *((_QWORD *)&v273 + 1) = v191;
          if ( v188 > v266 + 2 )
            goto LABEL_330;
        }
      }
      else if ( v188 > v266 + 2 )
      {
        goto LABEL_323;
      }
      v192 = v189 - v188;
      v266 = v189 - v188;
      v178 |= 1 << v177;
      if ( v189 - v188 < 0 )
        goto LABEL_335;
LABEL_336:
      if ( !*v180 )
      {
        v193 = v180 + 1;
        v194 = 1;
        do
        {
          v195 = v193;
          v196 = v194;
          v198 = *v193++;
          v197 = v198;
          ++v194;
        }
        while ( !v198 );
        if ( v187 != 63 )
        {
          if ( (int)__clz(__rbit64(v197)) < 63 - v187 )
          {
            v199 = (int)v196 - 1;
            sub_44A210(v267, &v180[v196 - 1], v183 - v199);
            v175 = v266;
            v268 = v272 - v199;
            goto LABEL_323;
          }
          v221 = (int)v196;
          v180 = v195;
          v183 -= (int)v196;
LABEL_408:
          sub_44A210(v267, v180, v183);
          v175 = v266;
          v268 = v272 - v221;
          goto LABEL_323;
        }
        v183 -= (int)v196;
        v217 = (int)v196;
        goto LABEL_403;
      }
      if ( v187 == 63 )
      {
        v217 = 0;
        v196 = 0;
LABEL_403:
        if ( v183 > 0 )
        {
          v218 = v267;
          v219 = &v180[v196];
          v220 = 0;
          do
          {
            v218[v220] = v219[v220];
            ++v220;
            v183 = v272 - v217;
          }
          while ( v220 < v272 - v217 );
        }
        v175 = v266;
        v268 = v183;
        goto LABEL_323;
      }
      v221 = 0;
      if ( 63 - v187 <= (int)__clz(__rbit64(*v180)) )
        goto LABEL_408;
      v224 = sub_4492F0(v267);
      v268 = v272 + 1;
      v175 = v266;
      v267[v272] = v224;
LABEL_323:
      if ( !--v177 )
      {
        if ( v175 <= 0 )
        {
LABEL_345:
          v266 = v178;
          goto LABEL_92;
        }
        v200 = sub_449700(v271, v267, v268, 10);
        v272 = v268;
        if ( !v200 || v271[v268 - 1] <= 0x13 )
        {
          if ( v266 > 4 )
            v201 = 4;
          else
            v201 = v266;
          if ( (int)__clz(__rbit64(*v271)) >= v201 )
          {
            sub_44A210(v267, v271, v268);
            v203 = v267;
          }
          else
          {
            v202 = sub_4492F0(v267);
            v203 = v267;
            if ( v202 )
            {
              v204 = v272++;
              v267[v204] = v202;
            }
          }
          v268 = v272;
          v178 |= 1u;
          if ( v203[v272 - 1] > 9 )
            sub_41F250("p.frac[p.fracsize - 1] < 10", (__int64)"printf_fp.c", 0x285u, (__int64)"__printf_fp_buffer_1");
          goto LABEL_345;
        }
LABEL_430:
        sub_41F250(
          "cy == 0 || p.tmp[p.tmpsize - 1] < 20",
          (__int64)"printf_fp.c",
          0x277u,
          (__int64)"__printf_fp_buffer_1");
      }
      if ( v175 <= 0 )
        goto LABEL_345;
    }
  }
  v36 = v266 + v28 + 63;
  if ( v266 + v28 >= 0 )
    v36 = v266 + v28;
  v37 = v36 >> 6;
  if ( (((_BYTE)v266 + (_BYTE)v28) & 0x3F) != 0 )
  {
    v158 = sub_4492F0(&v243[v37]);
    v29 = v266;
    v38 = (v28 + v266) / 64;
    v159 = v38 + v268;
    v268 += v38;
    if ( v158 )
    {
      v268 = v159 + 1;
      v267[v159] = v158;
    }
  }
  else
  {
    v38 = v37;
    if ( v27 > 0 )
    {
      j_ifunc_40DC90(&v243[v37], v274, 8 * v27);
      v27 = v268;
    }
    v268 = v38 + v27;
  }
  if ( v38 > 0 )
    ifunc_40DE70(v267, 0, 8 * v38);
  v39 = v270;
  v40 = &unk_46AF88;
  v41 = 0;
  v42 = 12;
  v43 = 0;
  while ( 1 )
  {
    v44 = *((_DWORD *)v40 - 2);
    v40 -= 3;
    if ( v43 + v44 - 1 > v29 )
      goto LABEL_73;
    if ( v39 )
    {
      v98 = sub_449350(v271, v269);
      v99 = v270 + v40[1];
      if ( v98 )
        v46 = v99 - 1;
      else
        v46 = v99 - 2;
      v272 = v46;
    }
    else
    {
      if ( (*(_WORD *)(a5 + 12) & 1) != 0 )
      {
        v100 = (char *)&unk_46AFC0 + 8 * *v40;
        v272 = v40[1] + 1LL;
        j_ifunc_40DC90(v271 + 1, v100, 8 * v272);
        v101 = v266;
        *v271 = 0;
        v266 = v101 + 64;
      }
      else
      {
        v45 = *v40;
        v272 = v40[1];
        j_ifunc_40DC90(v271, (char *)&unk_46AFC0 + 8 * v45, 8 * v272);
      }
      v46 = v272;
    }
    if ( v268 > v46 )
      goto LABEL_84;
    if ( v268 == v46 && (sub_448C20(v267, v271, v46) & 0x80000000) == 0 )
      break;
    v39 = v270;
LABEL_73:
    if ( --v42 == -1 )
      goto LABEL_85;
LABEL_74:
    v29 = v266;
  }
  v46 = v272;
LABEL_84:
  v270 = v46;
  j_ifunc_40DC90(v269, v271, 8 * v46);
  v39 = v270;
  v48 = 1 << v42--;
  v41 |= v48;
  v43 = ((_DWORD)v270 << 6) - 129 - __clz(v269[v270 - 1]);
  if ( v42 != -1 )
    goto LABEL_74;
LABEL_85:
  v266 = v41;
  if ( v39 <= 0 )
    goto LABEL_92;
  v49 = v269;
  v50 = *v269;
  v51 = v269[v39 - 1];
  v52 = __clz(v51);
  if ( *v269 )
  {
    if ( (v51 & 0x8000000000000000LL) != 0 )
      goto LABEL_92;
    v56 = *v269;
    v54 = v269;
    v55 = 0;
    v60 = 0;
    v213 = *v267;
LABEL_373:
    v214 = __clz(__rbit64(v56));
    v205 = v214;
    if ( v213 )
    {
      v215 = __clz(__rbit64(v213));
      if ( v214 > v215 )
        v205 = v215;
      else
        v205 = v214;
    }
LABEL_362:
    v206 = 64 - v52;
    if ( v60 )
    {
      v207 = v60;
      if ( v205 < v206 )
      {
        v210 = v55 * 8 - 8;
        v211 = v60 - 1;
        sub_44A210(v269, (char *)v269 + v210, v39 - v211);
        v270 -= v207;
        sub_44A210(v267, (char *)v267 + v210, v268 - v211);
        v212 = v268 - v211;
        if ( !v267[v268 - v211 - 1] )
          v212 = v268 - v207;
        v268 = v212;
        goto LABEL_92;
      }
    }
    else
    {
      v207 = 0;
      if ( v205 < v206 )
      {
        sub_4492F0(v269);
        v222 = sub_4492F0(v267);
        if ( v222 )
        {
          v223 = v268++;
          v267[v223] = v222;
        }
        goto LABEL_92;
      }
    }
    sub_44A210(v269, v54, v39 - v207);
    v208 = v60 + 1;
    v270 -= v208;
    sub_44A210(v267, &v267[v55], v268 - v207);
    v209 = v268 - v207;
    if ( !v267[v209 - 1] )
      v209 = v268 - v208;
    v268 = v209;
    goto LABEL_92;
  }
  v53 = v267;
  v54 = v269;
  v55 = 0;
  do
  {
    v58 = v267[v55];
    v59 = v50;
    if ( v58 )
    {
      v60 = v50;
      if ( v52 )
      {
        v205 = __clz(__rbit64(v58));
        goto LABEL_362;
      }
      if ( !(_DWORD)v50 )
        goto LABEL_92;
      goto LABEL_296;
    }
    v57 = v54[1];
    ++v54;
    v56 = v57;
    ++v50;
    ++v55;
  }
  while ( !v57 );
  v60 = v59 + 1;
  if ( v52 )
  {
    v213 = v267[v55];
    goto LABEL_373;
  }
LABEL_296:
  v163 = v39 - v60;
  if ( v163 > 0 )
  {
    v164 = &v269[v50];
    for ( i = 0; i < v163; ++i )
    {
      v49[i] = v164[i];
      v163 = v270 - v60;
    }
  }
  v270 = v163;
  v166 = v268 - v60;
  if ( v166 > 0 )
  {
    v167 = &v53[v50];
    for ( j = 0; j < v166; ++j )
    {
      v53[j] = v167[j];
      v166 = v268 - v60;
    }
  }
  v268 = v166;
LABEL_92:
  v61 = _ReadStatusReg(TPIDR_EL0);
  v62 = *(_DWORD *)(a5 + 8);
  v258 = *(_DWORD *)a5;
  v63 = *(_QWORD *)(v61 + 88);
  v246 = v61;
  v252 = *(_DWORD *)(a5 + 4);
  v253 = (unsigned __int8)*(_DWORD *)(v63 + 4LL * v62);
  if ( v253 == 101 )
  {
    v66 = v258;
    v265 = v62;
    if ( v258 < 0 )
    {
      v251 = 14;
      v67 = 1;
      v66 = 6;
      v69 = 1;
      LODWORD(v256) = 6;
      v258 = 0x7FFFFFFF;
      v249 = 16;
      goto LABEL_112;
    }
    v251 = v258 + 8LL;
    goto LABEL_251;
  }
  if ( v253 == 102 )
  {
    v265 = 102;
    if ( v258 < 0 )
    {
      v70 = 6;
      v258 = 6;
    }
    else
    {
      v70 = v258;
    }
    if ( !v264 )
    {
      v251 = v266 + 2LL + v70;
      if ( v251 > 0xFFFFFFFFFFFFFFFCLL )
      {
LABEL_265:
        *(_DWORD *)(v246 + 40) = 34;
LABEL_266:
        *(_DWORD *)(a1 + 32) = 0;
        goto LABEL_26;
      }
      v67 = v266 + 1;
      v69 = 1;
      LODWORD(v256) = v258;
      v66 = v258;
      v258 = 0x7FFFFFFF;
LABEL_107:
      if ( v251 >= v70 )
        goto LABEL_108;
      goto LABEL_265;
    }
    v66 = v258;
    v251 = v70 + 2;
LABEL_251:
    v69 = 1;
    v67 = 1;
    LODWORD(v256) = v258;
    v258 = 0x7FFFFFFF;
    goto LABEL_108;
  }
  if ( v258 )
    v64 = v258;
  else
    v64 = 1;
  if ( v258 < 0 )
    v65 = 6;
  else
    v65 = v64;
  v258 = v65;
  if ( !v264 )
  {
    if ( v65 <= v266 )
      goto LABEL_274;
    v67 = v266 + 1;
    v66 = v258 - (v266 + 1);
LABEL_103:
    v68 = *(_WORD *)(a5 + 12);
    v69 = 0;
    v265 = 102;
    v251 = v258 + 5LL;
    v70 = v66;
    if ( (v68 & 8) != 0 )
      v71 = v66;
    else
      v71 = 0;
    LODWORD(v256) = v71;
    goto LABEL_107;
  }
  if ( v266 <= 4 )
  {
    v66 = v258;
    v67 = 0;
    goto LABEL_103;
  }
LABEL_274:
  v155 = *(_WORD *)(a5 + 12);
  v69 = 0;
  v66 = v258 - 1;
  v67 = 1;
  v265 = v62 - 2;
  v251 = v258 - 1 + 8LL;
  if ( (v155 & 8) != 0 )
    v156 = v258 - 1;
  else
    v156 = 0;
  LODWORD(v256) = v156;
LABEL_108:
  v249 = v251 + 2;
  v72 = v251 + 2;
  v73 = ((__int64 (__fastcall *)(unsigned __int64))loc_4424A0)(v251 + 2);
  if ( v72 > 0x8000 && v73 == 0 )
  {
    v250 = (char *)sub_40B890(v249, v80, v81, v82, v83, v84, v85, v86, v87, v74, v75, v76, v77, v78, v79);
    if ( v250 )
    {
      v247 = 0;
      goto LABEL_117;
    }
    goto LABEL_266;
  }
LABEL_112:
  v89 = (_QWORD *)((char *)v236 - ((v249 + 15) & 0xFFFFFFFFFFFF0000LL));
  if ( v236 != v89 )
  {
    do
      v235 = 0;
    while ( &v233 != v89 );
  }
  v233 = 0;
  if ( (((_WORD)v249 + 15) & 0xFFF0u) >= 0x400uLL )
    v235 = 0;
  v250 = &v234;
  v247 = 1;
LABEL_117:
  v90 = v250 + 2;
  if ( v264 )
  {
    if ( v265 != 102 )
    {
      if ( v67 != 1 )
        sub_41F250("p.expsign == 0 || intdig_max == 1", (__int64)"printf_fp.c", 0x2FDu, (__int64)"__printf_fp_buffer_1");
      *v90 = sub_43E710((__int64)&v264);
LABEL_121:
      v91 = &v90[v67];
      goto LABEL_122;
    }
    v161 = (unsigned __int64)v250;
    v93 = v250 + 4;
    v67 = 0;
    --v266;
    v162 = v260;
    v250[2] = 48;
    *(_BYTE *)(v161 + 3) = v162;
  }
  else
  {
    if ( v67 > 0 )
    {
      v160 = 0;
      do
        v90[v160++] = sub_43E710((__int64)&v264);
      while ( v67 > (int)v160 );
      goto LABEL_121;
    }
    v91 = v250 + 2;
    v67 = 0;
LABEL_122:
    v92 = (*(_WORD *)(a5 + 12) & 8) == 0 && SLODWORD(v256) <= 0;
    if ( !v92 || v66 > 0 && (v268 > 1 || *v267) )
    {
      v69 = 1;
      *v91 = v260;
      v93 = v91 + 1;
    }
    else
    {
      v93 = v91;
      v69 = 1;
    }
  }
  v94 = LODWORD(v256);
  v95 = 0;
  LODWORD(v255) = 0;
  while ( v95 < v94 || v95 < v66 && (v268 > 1 || *v267) )
  {
    v96 = sub_43E710((__int64)&v264);
    v97 = v69 ^ 1;
    *v93++ = v96;
    ++v95;
    v69 = 1;
    if ( ((v96 == 48) & v97) != 0 )
    {
      ++v66;
      v69 = 0;
      if ( SLODWORD(v256) > 0 )
        v94 = ++LODWORD(v255) + LODWORD(v256);
    }
  }
  v102 = (unsigned __int8)*(v93 - 1);
  if ( v260 == v102 )
    LOBYTE(v102) = *(v93 - 2);
  v248 = v94;
  v103 = (unsigned __int8)sub_43E710((__int64)&v264);
  v105 = v248;
  v106 = (_DWORD)v103 != 48 && (_DWORD)v103 != 53;
  if ( (_DWORD)v103 == 48 || (_DWORD)v103 == 53 )
  {
    v107 = v268;
    if ( v268 == 1 )
    {
      v108 = v267;
      if ( *v267 )
      {
        if ( !v270 )
          goto LABEL_147;
        goto LABEL_150;
      }
    }
    else
    {
      if ( v270 )
        goto LABEL_150;
      if ( v268 )
      {
        v108 = v267;
LABEL_147:
        v109 = v108 - 1;
        while ( !v109[v107] )
        {
          if ( !--v107 )
            goto LABEL_151;
        }
LABEL_150:
        v106 = 1;
      }
    }
  }
LABEL_151:
  v110 = _ReadStatusReg(FPCR) & 0xC00000;
  if ( (_DWORD)v110 == 0x800000 )
  {
    if ( !v261 )
      goto LABEL_236;
LABEL_155:
    if ( (unsigned int)v103 > 0x34 || v106 )
      goto LABEL_159;
LABEL_236:
    v122 = v265;
LABEL_237:
    if ( v95 > v105 )
      goto LABEL_182;
    goto LABEL_183;
  }
  if ( (unsigned int)v110 > 0x800000 )
  {
    if ( (_DWORD)v110 != 12582912 )
      sub_4002C0(v103, v104, v110, v261);
    goto LABEL_236;
  }
  if ( (_DWORD)v110 )
  {
    if ( !v261 )
      goto LABEL_155;
    goto LABEL_236;
  }
  if ( (unsigned int)v103 <= 0x34 || !(v106 | v102 & 1) )
    goto LABEL_236;
LABEL_159:
  v112 = (unsigned __int8)*(v93 - 1);
  if ( !v95 )
  {
    v114 = v93;
LABEL_253:
    v153 = &v114[-((unsigned __int8)*(v114 - 1) == v260) - 1];
    if ( v90 > v153 )
      goto LABEL_303;
    v154 = v250 + 1;
    do
    {
      if ( *v153 != 57 )
        break;
      *v153-- = 48;
    }
    while ( v153 != v154 );
    if ( v90 > v153 )
    {
LABEL_303:
      v122 = v265;
      if ( v265 == 102 )
      {
        if ( v67 == v258 )
        {
          v225 = (unsigned __int64)v250;
          v226 = *(_WORD *)(a5 + 12);
          *v250 = 49;
          *(_BYTE *)(v225 + 1) = v260;
          if ( (v226 & 8) == 0 && v95 == 0 )
          {
            v95 = v258;
          }
          else
          {
            v95 += 1 + v258;
            *(_BYTE *)(v225 + v258 + 2) = 48;
          }
          v90 = v250;
          v251 = v249;
          v228 = *(int *)(a5 + 8);
          v67 = 1;
          v229 = *(_QWORD *)(v246 + 72);
          ++v266;
          if ( (*(_WORD *)(v229 + 2 * v228) & 0x100) != 0 )
            v122 = 69;
          else
            v122 = 101;
          v265 = v122;
        }
        else
        {
          ++v67;
          v90 = v250 + 1;
          v251 = v249 - 1;
          v250[1] = 49;
        }
      }
      else
      {
        v169 = v266;
        if ( v264 )
          v170 = -1;
        else
          v170 = 1;
        v250[2] = 49;
        v266 = v169 + v170;
        if ( !(v169 + v170) )
          v264 = 0;
      }
      if ( v67 + v95 > v258 )
      {
        v171 = v67 + v95 - v258;
        v95 = v258 - v67;
        v93 -= v171;
      }
    }
    else
    {
      ++*v153;
      v122 = v265;
    }
    goto LABEL_237;
  }
  v113 = v112 != 57 || v260 == 57;
  v114 = v93 - 1;
  if ( v113 )
  {
    v118 = 0;
  }
  else
  {
    do
    {
      v115 = (int)v114;
      *v114 = 48;
      v116 = (unsigned __int8)*--v114;
      v112 = v116;
    }
    while ( v116 == 57 && v260 != 57 );
    v118 = (_DWORD)v93 - v115;
  }
  v120 = SLODWORD(v255) > 0 && v118 == LODWORD(v256);
  LODWORD(v255) -= v120;
  if ( v260 == v112 )
  {
    v121 = (unsigned __int8)*v114;
    if ( v253 == 103 && v265 == 102 && (*(_WORD *)(a5 + 12) & 8) != 0 && v114 == v250 + 3 )
      LODWORD(v255) -= v250[2] == 48;
  }
  else
  {
    v121 = (unsigned __int8)(v112 + 1);
    *v114 = v121;
  }
  v105 = LODWORD(v255) + LODWORD(v256);
  if ( v260 == v121 )
    goto LABEL_253;
  v122 = v265;
  if ( v95 <= v105 )
    goto LABEL_186;
  do
  {
LABEL_182:
    if ( *(v93 - 1) != 48 )
      break;
    --v95;
    --v93;
  }
  while ( v95 > v105 );
LABEL_183:
  if ( !v95 && (*(_WORD *)(a5 + 12) & 8) == 0 )
    v93 -= (unsigned __int8)*(v93 - 1) == v260;
LABEL_186:
  if ( v122 != 102 )
  {
    if ( v264 && (v253 == 103 ? (v216 = v266 == 4) : (v216 = 0), v216) )
    {
      if ( v93 < v90 + 1 )
        sub_41F250("wcp >= wstartp + 1", (__int64)"printf_fp.c", 0x3AEu, (__int64)"__printf_fp_buffer_1");
      if ( *v90 != 49 )
        sub_41F250("wstartp[0] == '1'", (__int64)"printf_fp.c", 0x3AFu, (__int64)"__printf_fp_buffer_1");
      sub_412300((__int64)v90, (__int64)"0.0001", 6u, v251);
      v90[1] = v260;
      if ( v93 >= v90 + 2 )
      {
        v230 = v93 - (v90 + 2);
        v93 += 4;
        if ( v251 < v249 )
          v231 = v249;
        else
          v231 = v251;
        v232 = v231 - v251 + 6;
        if ( v232 < v231 )
          v232 = v231;
        sub_412320((__int64)(v90 + 6), 48, v230, v232 - v231 + v251 - 6);
      }
      else
      {
        v93 += 5;
      }
    }
    else
    {
      *v93 = v122;
      v123 = v93 + 2;
      if ( v264 )
        v124 = 45;
      else
        v124 = 43;
      v93[1] = v124;
      v125 = v266;
      if ( v266 <= 9 )
      {
        v93[2] = 48;
        v123 = v93 + 3;
        LOBYTE(v125) = v266;
      }
      else
      {
        for ( k = 10; k <= v266; k *= 10 )
          ;
        do
        {
          v127 = k;
          k /= 0xAu;
          *v123++ = v125 / k + 48;
          v125 = v266 % k;
          v266 %= k;
        }
        while ( v127 > 109 );
      }
      *v123 = v125 + 48;
      v93 = v123 + 1;
    }
  }
  v128 = *(_WORD *)(a5 + 12);
  LOBYTE(v129) = v128;
  if ( v259 && (v128 & 0x80) != 0 )
  {
    sub_43E060((__int64)v262, v257, v254, v67);
    v128 = *(_WORD *)(a5 + 12);
    v130 = v263;
    LOBYTE(v129) = v128;
  }
  else
  {
    v130 = 0;
    v263 = 0;
  }
  v131 = v261;
  v132 = v93 - v90;
  if ( v261 )
  {
    v133 = v252 - 1 - v132 - v130;
    if ( (v128 & 0x20) == 0 )
    {
      v149 = *(_DWORD *)(a5 + 16);
      if ( v149 != 48 )
        goto LABEL_231;
    }
    goto LABEL_246;
  }
  if ( (*(_DWORD *)(a5 + 12) & 0x50) == 0 )
  {
    v133 = v252 - v132 - v130;
    if ( (v128 & 0x20) == 0 )
      goto LABEL_230;
    goto LABEL_203;
  }
  v133 = v252 - 1 - v132 - v130;
  if ( (v128 & 0x20) != 0 )
    goto LABEL_202;
LABEL_230:
  v149 = *(_DWORD *)(a5 + 16);
  if ( v149 == 48 )
  {
LABEL_202:
    LOBYTE(v129) = v128;
LABEL_203:
    if ( (v128 & 0x40) != 0 )
    {
      v157 = *(_BYTE **)(a1 + 8);
      if ( v157 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, 43);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v157 + 1;
        *v157 = 43;
      }
      v129 = *(_WORD *)(a5 + 12);
    }
    else if ( (v128 & 0x10) != 0 )
    {
      v148 = *(_BYTE **)(a1 + 8);
      if ( v148 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, 32);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v148 + 1;
        *v148 = 32;
      }
      v129 = *(_WORD *)(a5 + 12);
    }
    goto LABEL_205;
  }
LABEL_231:
  if ( v133 > 0 )
  {
    sub_43E240(a1, v149, (unsigned int)v133);
    v131 = v261;
  }
  if ( !v131 )
  {
    v128 = *(_WORD *)(a5 + 12);
    LOBYTE(v129) = v128;
    goto LABEL_203;
  }
LABEL_246:
  v152 = *(_BYTE **)(a1 + 8);
  if ( v152 == *(_BYTE **)(a1 + 16) )
  {
    sub_43E2F0(a1, 45);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v152 + 1;
    *v152 = 45;
  }
  v129 = *(_WORD *)(a5 + 12);
LABEL_205:
  if ( (v129 & 0x20) == 0 && *(_DWORD *)(a5 + 16) == 48 && v133 > 0 )
    sub_43E240(a1, 0x30u, (unsigned int)v133);
  if ( v263 && v67 )
  {
    v135 = &v90[v67];
    v136 = v90;
    while ( 1 )
    {
      if ( (sub_43E140(v262) & 1) == 0 )
        goto LABEL_214;
      v139 = *(_BYTE **)(a1 + 8);
      if ( v139 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, v259);
LABEL_214:
        v137 = *(char **)(a1 + 8);
        v138 = *v136;
        if ( v137 != *(char **)(a1 + 16) )
          goto LABEL_215;
LABEL_219:
        ++v136;
        sub_43E2F0(a1, v138);
        if ( v136 == v135 )
        {
LABEL_220:
          v90 += (unsigned int)v67;
          v132 = v93 - v90;
          break;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v139 + 1;
        *v139 = v259;
        v137 = *(char **)(a1 + 8);
        v138 = *v136;
        if ( v137 == *(char **)(a1 + 16) )
          goto LABEL_219;
LABEL_215:
        *(_QWORD *)(a1 + 8) = v137 + 1;
        ++v136;
        *v137 = v138;
        if ( v136 == v135 )
          goto LABEL_220;
      }
    }
  }
  sub_43E650(a1, (__int64)v90, v132);
  if ( (*(_WORD *)(a5 + 12) & 0x20) != 0 && v133 > 0 )
    sub_43E240(a1, *(_BYTE *)(a5 + 16), (unsigned int)v133);
  if ( !v247 )
    sub_40C1A0((unsigned __int64)v250, v140, v141, v142, v143, v144, v145, v146, v147);
LABEL_26:
  result = &qword_48DD60;
  if ( v275 != qword_48DD60 )
  {
    sub_412340();
    goto LABEL_430;
  }
  return result;
}
