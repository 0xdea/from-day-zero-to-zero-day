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
  unsigned __int64 v10; // x0
  __int64 v11; // x4
  unsigned __int64 StatusReg; // x3
  const char *v13; // x1
  const char *v14; // x22
  unsigned __int64 v15; // x0
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
  int v67; // w24
  __int16 v68; // w3
  char v69; // w28
  unsigned __int64 v70; // x0
  int v71; // w1
  unsigned __int64 v72; // x21
  int v73; // w0
  __int64 v74; // x1
  __int16 *v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  __int64 v78; // x5
  long double v79; // q0
  long double v80; // q1
  long double v81; // q2
  long double v82; // q3
  long double v83; // q4
  long double v84; // q5
  long double v85; // q6
  long double v86; // q7
  __int64 *v88; // x1
  char *v89; // x23
  char *v90; // x4
  bool v91; // cc
  char *v92; // x27
  int v93; // w25
  int v94; // w26
  char v95; // w0
  unsigned __int8 v96; // w5
  __int64 v97; // x0
  __int64 v98; // x1
  char *v99; // x1
  int v100; // w0
  int v101; // w22
  __int64 v102; // x0
  int v103; // w5
  _BOOL4 v104; // w7
  __int64 v105; // x2
  unsigned __int64 *v106; // x6
  unsigned __int64 *v107; // x6
  unsigned __int64 v108; // x2
  int v110; // w2
  bool v111; // zf
  char *v112; // x0
  int v113; // w3
  int v114; // t1
  int v116; // w3
  int v118; // w3
  int v119; // w2
  int v120; // w6
  _BYTE *v121; // x3
  char v122; // w0
  int v123; // w1
  int k; // w0
  int v125; // w4
  __int16 v126; // w21
  __int16 v127; // w0
  int v128; // w25
  int v129; // w2
  unsigned __int64 v130; // x22
  int v131; // w25
  char *v133; // x22
  char *v134; // x26
  char *v135; // x0
  char v136; // w1
  _BYTE *v137; // x0
  _BYTE *v138; // x0
  int v139; // w1
  __int64 v140; // x0
  __int64 v141; // x1
  _BYTE *v142; // x0
  char *v143; // x0
  char *v144; // x6
  __int16 v145; // w3
  int v146; // w0
  _BYTE *v147; // x0
  __int64 v148; // x0
  __int64 v149; // x2
  __int64 v150; // x28
  char *v151; // x2
  char v152; // w0
  __int64 v153; // x2
  unsigned __int64 *v154; // x6
  __int64 i; // x1
  __int64 v156; // x1
  unsigned __int64 *v157; // x3
  __int64 j; // x0
  int v159; // w0
  int v160; // w2
  int v161; // w0
  __int64 v162; // x0
  unsigned __int64 *v163; // x1
  __int64 v164; // x2
  int v165; // w5
  char *v166; // x25
  int v167; // w27
  int v168; // w22
  __int64 v169; // x0
  unsigned __int64 *v170; // x1
  __int64 v171; // x2
  int v172; // w5
  __int64 v173; // x2
  __int64 v174; // x8
  unsigned __int64 *v175; // x9
  unsigned __int64 v176; // x4
  int v177; // w26
  int v178; // w28
  int v179; // w6
  int v180; // w0
  unsigned __int64 v181; // x3
  int v182; // w0
  unsigned __int64 *v183; // x0
  __int64 v184; // x3
  unsigned __int64 *v185; // x6
  __int64 v186; // x4
  unsigned __int64 v187; // x5
  unsigned __int64 v188; // t1
  __int64 v189; // x28
  __int64 v190; // x0
  int v191; // w3
  __int64 v192; // x0
  unsigned __int64 *v193; // x1
  __int64 v194; // x2
  int v195; // w4
  int v196; // w24
  __int64 v197; // x22
  __int64 v198; // x23
  __int64 v199; // x22
  __int64 v200; // x21
  __int64 v201; // x23
  __int64 v202; // x0
  unsigned __int64 v203; // x5
  int v204; // w3
  int v205; // w5
  bool v206; // zf
  __int64 v207; // x4
  __int64 v208; // x3
  unsigned __int64 *v209; // x5
  unsigned __int64 *v210; // x4
  __int64 v211; // x1
  __int64 v212; // x28
  __int64 v213; // x0
  __int64 v214; // x1
  __int64 v215; // x0
  char *v216; // x1
  __int16 v217; // w0
  __int64 v219; // x7
  __int64 v220; // x2
  signed __int64 v221; // x2
  unsigned __int64 v222; // x6
  unsigned __int64 v223; // x5
  __int64 v224; // [xsp+0h] [xbp-40110h] BYREF
  char v225; // [xsp+10h] [xbp-40100h] BYREF
  __int64 v226; // [xsp+400h] [xbp-3FD10h]
  _QWORD v227[2]; // [xsp+10000h] [xbp-30110h] BYREF
  char v228; // [xsp+10010h] [xbp-30100h] BYREF
  __int64 v229; // [xsp+10400h] [xbp-2FD10h]
  _QWORD v230[2]; // [xsp+20000h] [xbp-20110h] BYREF
  char v231; // [xsp+20010h] [xbp-20100h] BYREF
  __int64 v232; // [xsp+20400h] [xbp-1FD10h]
  _QWORD v233[2]; // [xsp+30000h] [xbp-10110h] BYREF
  _QWORD v234[126]; // [xsp+30010h] [xbp-10100h] BYREF
  __int64 v235; // [xsp+30400h] [xbp-FD10h]
  _BYTE v236[24]; // [xsp+40000h] [xbp-110h] BYREF
  unsigned __int64 v237; // [xsp+40018h] [xbp-F8h]
  int v238; // [xsp+40020h] [xbp-F0h]
  int v239; // [xsp+40024h] [xbp-ECh]
  unsigned __int64 v240; // [xsp+40028h] [xbp-E8h]
  char *v241; // [xsp+40030h] [xbp-E0h]
  unsigned __int64 v242; // [xsp+40038h] [xbp-D8h]
  int v243; // [xsp+40040h] [xbp-D0h]
  int v244; // [xsp+40044h] [xbp-CCh]
  __int64 v245; // [xsp+40048h] [xbp-C8h]
  long double v246; // [xsp+40050h] [xbp-C0h]
  long double v247; // [xsp+40060h] [xbp-B0h]
  unsigned int v248; // [xsp+40070h] [xbp-A0h]
  int v249; // [xsp+40074h] [xbp-9Ch]
  int v250; // [xsp+40078h] [xbp-98h]
  int v251; // [xsp+4007Ch] [xbp-94h]
  int v252; // [xsp+40084h] [xbp-8Ch] BYREF
  int v253[5]; // [xsp+40088h] [xbp-88h] BYREF
  int v254; // [xsp+4009Ch] [xbp-74h]
  int v255; // [xsp+400A0h] [xbp-70h] BYREF
  int v256; // [xsp+400A4h] [xbp-6Ch]
  int v257; // [xsp+400A8h] [xbp-68h] BYREF
  unsigned __int64 *v258; // [xsp+400B0h] [xbp-60h]
  __int64 v259; // [xsp+400B8h] [xbp-58h]
  unsigned __int64 *v260; // [xsp+400C0h] [xbp-50h]
  __int64 v261; // [xsp+400C8h] [xbp-48h]
  unsigned __int64 *v262; // [xsp+400D0h] [xbp-40h]
  __int64 v263; // [xsp+400D8h] [xbp-38h]
  __int128 v264; // [xsp+400E0h] [xbp-30h] BYREF
  _BYTE v265[16]; // [xsp+400F8h] [xbp-18h] BYREF
  __int64 v266; // [xsp+40108h] [xbp-8h]

  v8 = *(unsigned __int16 *)(a5 + 12);
  v266 = qword_48DD60;
  v245 = a2;
  v250 = a3;
  v251 = a4;
  if ( (v8 & 0x100) != 0 )
    v9 = 4;
  else
    v9 = 1;
  v248 = v9;
  v252 = 0;
  v255 = 0;
  if ( (v8 & 1) == 0 )
  {
    if ( fabs(*a6) <= 1.79769313e308 )
    {
      v27 = sub_44A380(v265, 2, &v257, &v252);
      v28 = ((_DWORD)v27 << 6) - 52;
      goto LABEL_40;
    }
    v10 = *(_QWORD *)a6;
    v11 = *(int *)(a5 + 8);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v13 = "INF";
    v14 = "inf";
LABEL_11:
    v15 = v10 >> 63;
    v16 = *(_WORD *)(*(_QWORD *)(StatusReg + 72) + 2 * v11);
    v252 = v15;
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
    if ( !v252 )
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
  v247 = *(long double *)a6;
  if ( (unsigned int)sub_44D7B0(v247, v247) )
  {
    v10 = *((_QWORD *)&v247 + 1);
    v11 = *(int *)(a5 + 8);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v13 = "NAN";
    v14 = "nan";
    goto LABEL_11;
  }
  *(_QWORD *)&v246 = *(_QWORD *)&v247;
  *((_QWORD *)&v246 + 1) = *((_QWORD *)&v247 + 1) & 0x7FFFFFFFFFFFFFFFLL;
  if ( !(unsigned int)sub_44D7B0(v246, *(long double *)&xmmword_45A930)
    && (int)sub_44D650(v246, *(long double *)&xmmword_45A930) > 0 )
  {
    v10 = *((_QWORD *)&v247 + 1);
    v11 = *(int *)(a5 + 8);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v13 = "INF";
    v14 = "inf";
    goto LABEL_11;
  }
  v27 = sub_44A400(v265, 2, &v257, &v252, v247);
  v28 = ((_DWORD)v27 << 6) - 112;
LABEL_40:
  v29 = v257;
  v259 = v27;
  if ( v257 >= 0 )
    v30 = v257;
  else
    v30 = -v257;
  v31 = 8LL * (((v30 + 63) >> 6) + 4) + 15;
  v32 = &v236[-(v31 & 0xFFFFFFFFFFFF0000LL)];
  if ( v236 != (_BYTE *)v32 )
  {
    do
      v235 = 0;
    while ( v233 != v32 );
  }
  v233[0] = 0;
  if ( ((unsigned __int16)v31 & 0xFFF0u) >= 0x400uLL )
    v235 = 0;
  v33 = (_QWORD *)((char *)v233 - (v31 & 0xFFFFFFFFFFFF0000LL));
  v258 = v234;
  if ( v233 != v33 )
  {
    do
      v232 = 0;
    while ( v230 != v33 );
  }
  v230[0] = 0;
  if ( ((unsigned __int16)v31 & 0xFFF0u) >= 0x400uLL )
    v232 = 0;
  v34 = (_QWORD *)((char *)v230 - (v31 & 0xFFFFFFFFFFFF0000LL));
  v262 = (unsigned __int64 *)&v231;
  v35 = v31 & 0xFFF0;
  if ( v230 != v34 )
  {
    do
      v229 = 0;
    while ( v227 != v34 );
  }
  v227[0] = 0;
  if ( v35 >= 0x400uLL )
    v229 = 0;
  v260 = (unsigned __int64 *)&v228;
  v261 = 0;
  if ( v257 <= 2 )
  {
    if ( (v257 & 0x80000000) == 0 )
    {
      if ( v257 + v28 > 63 )
        sub_41F250(
          "0 <= p.exponent && p.exponent < 3 && p.exponent + to_shift < BITS_PER_MP_LIMB",
          (__int64)"printf_fp.c",
          0x28Fu,
          (__int64)"__printf_fp_buffer_1");
      v140 = sub_4492F0(v234);
      v141 = v259++;
      v258[v141] = v140;
      v257 = 0;
      goto LABEL_92;
    }
    v162 = sub_4492F0(v234);
    v163 = v258;
    v164 = v259++;
    v258[v164] = v162;
    if ( v162 != 1 && (v163[v259 - 2] || *v163) )
      sub_41F250(
        "cy == 1 || (p.frac[p.fracsize - 2] == 0 && p.frac[0] == 0)",
        (__int64)"printf_fp.c",
        0x1F5u,
        (__int64)"__printf_fp_buffer_1");
    v165 = -v257;
    v166 = (char *)&unk_46AF88;
    v167 = 12;
    v168 = 0;
    v255 = 1;
    v257 = -v257;
    while ( 1 )
    {
      v180 = *((_DWORD *)v166 - 1);
      v166 -= 24;
      if ( v180 > v165 )
        goto LABEL_323;
      if ( v259 < *((_QWORD *)v166 + 1) - 1LL )
        v169 = sub_449350(v262, (char *)&unk_46AFC0 + 8 * *(_QWORD *)v166 + 8);
      else
        v169 = sub_449350(v262, v258);
      v170 = v262;
      if ( v169 )
        v171 = v259 + *((_QWORD *)v166 + 1) + 1;
      else
        v171 = v259 + *((_QWORD *)v166 + 1);
      v172 = *((_DWORD *)v166 + 4);
      v173 = v171 - 2;
      v263 = v173;
      v174 = v173;
      v175 = &v262[v173 - 1];
      v176 = __clz(*v175);
      v177 = v176;
      v178 = ~(_DWORD)v176 + (((_DWORD)v173 - (_DWORD)v259 + 1) << 6);
      if ( v178 > v172 )
        sub_41F250("incr <= powers->p_expo", (__int64)"printf_fp.c", 0x217u, (__int64)"__printf_fp_buffer_1");
      v179 = v257;
      v165 = v257;
      if ( v178 == v257 + 3 )
      {
        if ( (int)v176 > 60 )
        {
          *(_QWORD *)&v247 = v176;
          v264 = xmmword_45A940;
          sub_4492F0(&v264);
          v179 = v257;
          LODWORD(v176) = LODWORD(v247);
          v165 = v257;
          if ( v178 > v257 + 2 )
          {
            if ( v178 != v257 + 3 )
              goto LABEL_323;
            v170 = v262;
            v173 = v263;
            v181 = *((_QWORD *)&v264 + 1);
            v174 = v263;
            v175 = &v262[v263 - 1];
LABEL_330:
            if ( *v175 >= v181 && (*v175 != v181 || v170[v174 - 2] >= (unsigned __int64)v264) )
            {
              v165 = v179;
              goto LABEL_323;
            }
            v182 = v179 - v178;
            v168 |= 1 << v167;
            v257 = v179 - v178;
LABEL_335:
            v177 = v176 - v182;
            goto LABEL_336;
          }
          v170 = v262;
          v173 = v263;
        }
        else
        {
          v181 = 10LL << (60 - (unsigned __int8)v176);
          *(_QWORD *)&v264 = 0;
          *((_QWORD *)&v264 + 1) = v181;
          if ( v178 > v257 + 2 )
            goto LABEL_330;
        }
      }
      else if ( v178 > v257 + 2 )
      {
        goto LABEL_323;
      }
      v182 = v179 - v178;
      v257 = v179 - v178;
      v168 |= 1 << v167;
      if ( v179 - v178 < 0 )
        goto LABEL_335;
LABEL_336:
      if ( !*v170 )
      {
        v183 = v170 + 1;
        v184 = 1;
        do
        {
          v185 = v183;
          v186 = v184;
          v188 = *v183++;
          v187 = v188;
          ++v184;
        }
        while ( !v188 );
        if ( v177 != 63 )
        {
          if ( (int)__clz(__rbit64(v187)) < 63 - v177 )
          {
            v189 = (int)v186 - 1;
            sub_44A210(v258, &v170[v186 - 1], v173 - v189);
            v165 = v257;
            v259 = v263 - v189;
            goto LABEL_323;
          }
          v212 = (int)v186;
          v170 = v185;
          v173 -= (int)v186;
LABEL_407:
          sub_44A210(v258, v170, v173);
          v165 = v257;
          v259 = v263 - v212;
          goto LABEL_323;
        }
        v173 -= (int)v186;
        v208 = (int)v186;
        goto LABEL_402;
      }
      if ( v177 == 63 )
      {
        v208 = 0;
        v186 = 0;
LABEL_402:
        if ( v173 > 0 )
        {
          v209 = v258;
          v210 = &v170[v186];
          v211 = 0;
          do
          {
            v209[v211] = v210[v211];
            ++v211;
            v173 = v263 - v208;
          }
          while ( v211 < v263 - v208 );
        }
        v165 = v257;
        v259 = v173;
        goto LABEL_323;
      }
      v212 = 0;
      if ( 63 - v177 <= (int)__clz(__rbit64(*v170)) )
        goto LABEL_407;
      v215 = sub_4492F0(v258);
      v259 = v263 + 1;
      v165 = v257;
      v258[v263] = v215;
LABEL_323:
      if ( !--v167 )
      {
        if ( v165 <= 0 )
        {
LABEL_345:
          v257 = v168;
          goto LABEL_92;
        }
        v190 = sub_449700(v262, v258, v259, 10);
        v263 = v259;
        if ( !v190 || v262[v259 - 1] <= 0x13 )
        {
          v191 = v257;
          if ( v257 > 4 )
            v191 = 4;
          if ( (int)__clz(__rbit64(*v262)) >= v191 )
          {
            sub_44A210(v258, v262, v259);
            v193 = v258;
          }
          else
          {
            v192 = sub_4492F0(v258);
            v193 = v258;
            if ( v192 )
            {
              v194 = v263++;
              v258[v194] = v192;
            }
          }
          v259 = v263;
          v168 |= 1u;
          if ( v193[v263 - 1] > 9 )
            sub_41F250("p.frac[p.fracsize - 1] < 10", (__int64)"printf_fp.c", 0x285u, (__int64)"__printf_fp_buffer_1");
          goto LABEL_345;
        }
LABEL_429:
        sub_41F250(
          "cy == 0 || p.tmp[p.tmpsize - 1] < 20",
          (__int64)"printf_fp.c",
          0x277u,
          (__int64)"__printf_fp_buffer_1");
      }
      if ( v165 <= 0 )
        goto LABEL_345;
    }
  }
  v36 = v257 + v28 + 63;
  if ( v257 + v28 >= 0 )
    v36 = v257 + v28;
  v37 = v36 >> 6;
  if ( (((_BYTE)v257 + (_BYTE)v28) & 0x3F) != 0 )
  {
    v148 = sub_4492F0(&v234[v37]);
    v29 = v257;
    v38 = (v28 + v257) / 64;
    v149 = v38 + v259;
    v259 += v38;
    if ( v148 )
    {
      v259 = v149 + 1;
      v258[v149] = v148;
    }
  }
  else
  {
    v38 = v37;
    if ( v27 > 0 )
    {
      j_ifunc_40DC90(&v234[v37], v265, 8 * v27);
      v27 = v259;
    }
    v259 = v38 + v27;
  }
  if ( v38 > 0 )
    ifunc_40DE70(v258, 0, 8 * v38);
  v39 = v261;
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
      v97 = sub_449350(v262, v260);
      v98 = v261 + v40[1];
      if ( v97 )
        v46 = v98 - 1;
      else
        v46 = v98 - 2;
      v263 = v46;
    }
    else
    {
      if ( (*(_WORD *)(a5 + 12) & 1) != 0 )
      {
        v99 = (char *)&unk_46AFC0 + 8 * *v40;
        v263 = v40[1] + 1LL;
        j_ifunc_40DC90(v262 + 1, v99, 8 * v263);
        v100 = v257;
        *v262 = 0;
        v257 = v100 + 64;
      }
      else
      {
        v45 = *v40;
        v263 = v40[1];
        j_ifunc_40DC90(v262, (char *)&unk_46AFC0 + 8 * v45, 8 * v263);
      }
      v46 = v263;
    }
    if ( v259 > v46 )
      goto LABEL_84;
    if ( v259 == v46 && (sub_448C20(v258, v262, v46) & 0x80000000) == 0 )
      break;
    v39 = v261;
LABEL_73:
    if ( --v42 == -1 )
      goto LABEL_85;
LABEL_74:
    v29 = v257;
  }
  v46 = v263;
LABEL_84:
  v261 = v46;
  j_ifunc_40DC90(v260, v262, 8 * v46);
  v39 = v261;
  v48 = 1 << v42--;
  v41 |= v48;
  v43 = ((_DWORD)v261 << 6) - 129 - __clz(v260[v261 - 1]);
  if ( v42 != -1 )
    goto LABEL_74;
LABEL_85:
  v257 = v41;
  if ( v39 <= 0 )
    goto LABEL_92;
  v49 = v260;
  v50 = *v260;
  v51 = v260[v39 - 1];
  v52 = __clz(v51);
  if ( *v260 )
  {
    if ( (v51 & 0x8000000000000000LL) != 0 )
      goto LABEL_92;
    v56 = *v260;
    v54 = v260;
    v55 = 0;
    v60 = 0;
    v203 = *v258;
LABEL_372:
    v204 = __clz(__rbit64(v56));
    v195 = v204;
    if ( v203 )
    {
      v205 = __clz(__rbit64(v203));
      if ( v204 > v205 )
        v195 = v205;
      else
        v195 = v204;
    }
LABEL_361:
    v196 = 64 - v52;
    if ( v60 )
    {
      v197 = v60;
      if ( v195 < v196 )
      {
        v200 = v55 * 8 - 8;
        v201 = v60 - 1;
        sub_44A210(v260, (char *)v260 + v200, v39 - v201);
        v261 -= v197;
        sub_44A210(v258, (char *)v258 + v200, v259 - v201);
        v202 = v259 - v201;
        if ( !v258[v259 - v201 - 1] )
          v202 = v259 - v197;
        v259 = v202;
        goto LABEL_92;
      }
    }
    else
    {
      v197 = 0;
      if ( v195 < v196 )
      {
        sub_4492F0(v260);
        v213 = sub_4492F0(v258);
        if ( v213 )
        {
          v214 = v259++;
          v258[v214] = v213;
        }
        goto LABEL_92;
      }
    }
    sub_44A210(v260, v54, v39 - v197);
    v198 = v60 + 1;
    v261 -= v198;
    sub_44A210(v258, &v258[v55], v259 - v197);
    v199 = v259 - v197;
    if ( !v258[v199 - 1] )
      v199 = v259 - v198;
    v259 = v199;
    goto LABEL_92;
  }
  v53 = v258;
  v54 = v260;
  v55 = 0;
  do
  {
    v58 = v258[v55];
    v59 = v50;
    if ( v58 )
    {
      v60 = v50;
      if ( v52 )
      {
        v195 = __clz(__rbit64(v58));
        goto LABEL_361;
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
    v203 = v258[v55];
    goto LABEL_372;
  }
LABEL_296:
  v153 = v39 - v60;
  if ( v153 > 0 )
  {
    v154 = &v260[v50];
    for ( i = 0; i < v153; ++i )
    {
      v49[i] = v154[i];
      v153 = v261 - v60;
    }
  }
  v261 = v153;
  v156 = v259 - v60;
  if ( v156 > 0 )
  {
    v157 = &v53[v50];
    for ( j = 0; j < v156; ++j )
    {
      v53[j] = v157[j];
      v156 = v259 - v60;
    }
  }
  v259 = v156;
LABEL_92:
  v61 = _ReadStatusReg(TPIDR_EL0);
  v62 = *(_DWORD *)(a5 + 8);
  v249 = *(_DWORD *)a5;
  v63 = *(_QWORD *)(v61 + 88);
  v237 = v61;
  v243 = *(_DWORD *)(a5 + 4);
  v244 = (unsigned __int8)*(_DWORD *)(v63 + 4LL * v62);
  if ( v244 == 101 )
  {
    v66 = v249;
    v256 = v62;
    if ( v249 < 0 )
    {
      v242 = 14;
      v67 = 1;
      v66 = 6;
      v69 = 1;
      LODWORD(v247) = 6;
      v249 = 0x7FFFFFFF;
      v240 = 16;
      goto LABEL_112;
    }
    v242 = v249 + 8LL;
    goto LABEL_251;
  }
  if ( v244 == 102 )
  {
    v256 = 102;
    if ( v249 < 0 )
    {
      v70 = 6;
      v249 = 6;
    }
    else
    {
      v70 = v249;
    }
    if ( !v255 )
    {
      v242 = v257 + 2LL + v70;
      if ( v242 > 0xFFFFFFFFFFFFFFFCLL )
      {
LABEL_265:
        *(_DWORD *)(v237 + 40) = 34;
LABEL_266:
        *(_DWORD *)(a1 + 32) = 0;
        goto LABEL_26;
      }
      v67 = v257 + 1;
      v69 = 1;
      LODWORD(v247) = v249;
      v66 = v249;
      v249 = 0x7FFFFFFF;
LABEL_107:
      if ( v242 >= v70 )
        goto LABEL_108;
      goto LABEL_265;
    }
    v66 = v249;
    v242 = v70 + 2;
LABEL_251:
    v69 = 1;
    v67 = 1;
    LODWORD(v247) = v249;
    v249 = 0x7FFFFFFF;
    goto LABEL_108;
  }
  if ( v249 )
    v64 = v249;
  else
    v64 = 1;
  if ( v249 < 0 )
    v65 = 6;
  else
    v65 = v64;
  v249 = v65;
  if ( !v255 )
  {
    if ( v65 <= v257 )
      goto LABEL_274;
    v67 = v257 + 1;
    v66 = v249 - (v257 + 1);
LABEL_103:
    v68 = *(_WORD *)(a5 + 12);
    v69 = 0;
    v256 = 102;
    v242 = v249 + 5LL;
    v70 = v66;
    if ( (v68 & 8) != 0 )
      v71 = v66;
    else
      v71 = 0;
    LODWORD(v247) = v71;
    goto LABEL_107;
  }
  if ( v257 <= 4 )
  {
    v66 = v249;
    v67 = 0;
    goto LABEL_103;
  }
LABEL_274:
  v145 = *(_WORD *)(a5 + 12);
  v69 = 0;
  v66 = v249 - 1;
  v67 = 1;
  v256 = v62 - 2;
  v242 = v249 - 1 + 8LL;
  if ( (v145 & 8) != 0 )
    v146 = v249 - 1;
  else
    v146 = 0;
  LODWORD(v247) = v146;
LABEL_108:
  v240 = v242 + 2;
  v72 = v242 + 2;
  v73 = ((__int64 (__fastcall *)(unsigned __int64))loc_4424A0)(v242 + 2);
  if ( v72 > 0x8000 && v73 == 0 )
  {
    v241 = (char *)sub_40B890(v240, v79, v80, v81, v82, v83, v84, v85, v86, v74, v75, v76, v77, v78);
    if ( v241 )
    {
      v238 = 0;
      goto LABEL_117;
    }
    goto LABEL_266;
  }
LABEL_112:
  v88 = (_QWORD *)((char *)v227 - ((v240 + 15) & 0xFFFFFFFFFFFF0000LL));
  if ( v227 != v88 )
  {
    do
      v226 = 0;
    while ( &v224 != v88 );
  }
  v224 = 0;
  if ( (((_WORD)v240 + 15) & 0xFFF0u) >= 0x400uLL )
    v226 = 0;
  v241 = &v225;
  v238 = 1;
LABEL_117:
  v89 = v241 + 2;
  if ( v255 )
  {
    if ( v256 != 102 )
    {
      if ( v67 != 1 )
        sub_41F250("p.expsign == 0 || intdig_max == 1", (__int64)"printf_fp.c", 0x2FDu, (__int64)"__printf_fp_buffer_1");
      *v89 = sub_43E710(&v255);
LABEL_121:
      v90 = &v89[v67];
      goto LABEL_122;
    }
    v151 = v241;
    v92 = v241 + 4;
    v67 = 0;
    --v257;
    v152 = v251;
    v241[2] = 48;
    v151[3] = v152;
  }
  else
  {
    if ( v67 > 0 )
    {
      v150 = 0;
      do
        v89[v150++] = sub_43E710(&v255);
      while ( v67 > (int)v150 );
      goto LABEL_121;
    }
    v90 = v241 + 2;
    v67 = 0;
LABEL_122:
    v91 = (*(_WORD *)(a5 + 12) & 8) == 0 && SLODWORD(v247) <= 0;
    if ( !v91 || v66 > 0 && (v259 > 1 || *v258) )
    {
      v69 = 1;
      *v90 = v251;
      v92 = v90 + 1;
    }
    else
    {
      v92 = v90;
      v69 = 1;
    }
  }
  v93 = LODWORD(v247);
  v94 = 0;
  LODWORD(v246) = 0;
  while ( v94 < v93 || v94 < v66 && (v259 > 1 || *v258) )
  {
    v95 = sub_43E710(&v255);
    v96 = v69 ^ 1;
    *v92++ = v95;
    ++v94;
    v69 = 1;
    if ( ((v95 == 48) & v96) != 0 )
    {
      ++v66;
      v69 = 0;
      if ( SLODWORD(v247) > 0 )
        v93 = ++LODWORD(v246) + LODWORD(v247);
    }
  }
  v101 = (unsigned __int8)*(v92 - 1);
  if ( v251 == v101 )
    LOBYTE(v101) = *(v92 - 2);
  v239 = v93;
  v102 = (unsigned __int8)sub_43E710(&v255);
  v103 = v239;
  v104 = (_DWORD)v102 != 48 && (_DWORD)v102 != 53;
  if ( (_DWORD)v102 == 48 || (_DWORD)v102 == 53 )
  {
    v105 = v259;
    if ( v259 == 1 )
    {
      v106 = v258;
      if ( *v258 )
      {
        if ( !v261 )
          goto LABEL_147;
        goto LABEL_150;
      }
    }
    else
    {
      if ( v261 )
        goto LABEL_150;
      if ( v259 )
      {
        v106 = v258;
LABEL_147:
        v107 = v106 - 1;
        while ( !v107[v105] )
        {
          if ( !--v105 )
            goto LABEL_151;
        }
LABEL_150:
        v104 = 1;
      }
    }
  }
LABEL_151:
  v108 = _ReadStatusReg(FPCR) & 0xC00000;
  if ( (_DWORD)v108 == 0x800000 )
  {
    if ( !v252 )
      goto LABEL_236;
LABEL_155:
    if ( (unsigned int)v102 > 0x34 || v104 )
      goto LABEL_159;
LABEL_236:
    v120 = v256;
LABEL_237:
    if ( v94 > v103 )
      goto LABEL_182;
    goto LABEL_183;
  }
  if ( (unsigned int)v108 > 0x800000 )
  {
    if ( (_DWORD)v108 != 12582912 )
      sub_4002C0(v102);
    goto LABEL_236;
  }
  if ( (_DWORD)v108 )
  {
    if ( !v252 )
      goto LABEL_155;
    goto LABEL_236;
  }
  if ( (unsigned int)v102 <= 0x34 || !(v104 | v101 & 1) )
    goto LABEL_236;
LABEL_159:
  v110 = (unsigned __int8)*(v92 - 1);
  if ( !v94 )
  {
    v112 = v92;
LABEL_253:
    v143 = &v112[-((unsigned __int8)*(v112 - 1) == v251) - 1];
    if ( v89 > v143 )
      goto LABEL_303;
    v144 = v241 + 1;
    do
    {
      if ( *v143 != 57 )
        break;
      *v143-- = 48;
    }
    while ( v143 != v144 );
    if ( v89 > v143 )
    {
LABEL_303:
      v120 = v256;
      if ( v256 == 102 )
      {
        if ( v67 == v249 )
        {
          v216 = v241;
          v217 = *(_WORD *)(a5 + 12);
          *v241 = 49;
          v216[1] = v251;
          if ( (v217 & 8) == 0 && v94 == 0 )
          {
            v94 = v249;
          }
          else
          {
            v94 += 1 + v249;
            v216[v249 + 2] = 48;
          }
          v89 = v241;
          v242 = v240;
          v219 = *(int *)(a5 + 8);
          v67 = 1;
          v220 = *(_QWORD *)(v237 + 72);
          ++v257;
          if ( (*(_WORD *)(v220 + 2 * v219) & 0x100) != 0 )
            v120 = 69;
          else
            v120 = 101;
          v256 = v120;
        }
        else
        {
          ++v67;
          v89 = v241 + 1;
          v242 = v240 - 1;
          v241[1] = 49;
        }
      }
      else
      {
        v159 = v257;
        if ( v255 )
          v160 = -1;
        else
          v160 = 1;
        v241[2] = 49;
        v257 = v159 + v160;
        if ( !(v159 + v160) )
          v255 = 0;
      }
      if ( v67 + v94 > v249 )
      {
        v161 = v67 + v94 - v249;
        v94 = v249 - v67;
        v92 -= v161;
      }
    }
    else
    {
      ++*v143;
      v120 = v256;
    }
    goto LABEL_237;
  }
  v111 = v110 != 57 || v251 == 57;
  v112 = v92 - 1;
  if ( v111 )
  {
    v116 = 0;
  }
  else
  {
    do
    {
      v113 = (int)v112;
      *v112 = 48;
      v114 = (unsigned __int8)*--v112;
      v110 = v114;
    }
    while ( v114 == 57 && v251 != 57 );
    v116 = (_DWORD)v92 - v113;
  }
  v118 = SLODWORD(v246) > 0 && v116 == LODWORD(v247);
  LODWORD(v246) -= v118;
  if ( v251 == v110 )
  {
    v119 = (unsigned __int8)*v112;
    if ( v244 == 103 && v256 == 102 && (*(_WORD *)(a5 + 12) & 8) != 0 && v112 == v241 + 3 )
      LODWORD(v246) -= v241[2] == 48;
  }
  else
  {
    v119 = (unsigned __int8)(v110 + 1);
    *v112 = v119;
  }
  v103 = LODWORD(v246) + LODWORD(v247);
  if ( v251 == v119 )
    goto LABEL_253;
  v120 = v256;
  if ( v94 <= v103 )
    goto LABEL_186;
  do
  {
LABEL_182:
    if ( *(v92 - 1) != 48 )
      break;
    --v94;
    --v92;
  }
  while ( v94 > v103 );
LABEL_183:
  if ( !v94 && (*(_WORD *)(a5 + 12) & 8) == 0 )
    v92 -= (unsigned __int8)*(v92 - 1) == v251;
LABEL_186:
  if ( v120 != 102 )
  {
    if ( v255 && (v244 == 103 ? (v206 = v257 == 4) : (v206 = 0), v206) )
    {
      if ( v92 < v89 + 1 )
        sub_41F250("wcp >= wstartp + 1", (__int64)"printf_fp.c", 0x3AEu, (__int64)"__printf_fp_buffer_1");
      if ( *v89 != 49 )
        sub_41F250("wstartp[0] == '1'", (__int64)"printf_fp.c", 0x3AFu, (__int64)"__printf_fp_buffer_1");
      sub_412300(v89, "0.0001", 6, v242);
      v89[1] = v251;
      if ( v92 >= v89 + 2 )
      {
        v221 = v92 - (v89 + 2);
        v92 += 4;
        if ( v242 < v240 )
          v222 = v240;
        else
          v222 = v242;
        v223 = v222 - v242 + 6;
        if ( v223 < v222 )
          v223 = v222;
        sub_412320(v89 + 6, 48, v221, v223 - v222 + v242 - 6, v207, v223, v222);
      }
      else
      {
        v92 += 5;
      }
    }
    else
    {
      *v92 = v120;
      v121 = v92 + 2;
      if ( v255 )
        v122 = 45;
      else
        v122 = 43;
      v92[1] = v122;
      v123 = v257;
      if ( v257 <= 9 )
      {
        v92[2] = 48;
        v121 = v92 + 3;
        LOBYTE(v123) = v257;
      }
      else
      {
        for ( k = 10; k <= v257; k *= 10 )
          ;
        do
        {
          v125 = k;
          k /= 0xAu;
          *v121++ = v123 / k + 48;
          v123 = v257 % k;
          v257 %= k;
        }
        while ( v125 > 109 );
      }
      *v121 = v123 + 48;
      v92 = v121 + 1;
    }
  }
  v126 = *(_WORD *)(a5 + 12);
  LOBYTE(v127) = v126;
  if ( v250 && (v126 & 0x80) != 0 )
  {
    sub_43E060(v253, v248, v245, (unsigned int)v67);
    v126 = *(_WORD *)(a5 + 12);
    v128 = v254;
    LOBYTE(v127) = v126;
  }
  else
  {
    v128 = 0;
    v254 = 0;
  }
  v129 = v252;
  v130 = v92 - v89;
  if ( v252 )
  {
    v131 = v243 - 1 - v130 - v128;
    if ( (v126 & 0x20) == 0 )
    {
      v139 = *(_DWORD *)(a5 + 16);
      if ( v139 != 48 )
        goto LABEL_231;
    }
    goto LABEL_246;
  }
  if ( (*(_DWORD *)(a5 + 12) & 0x50) == 0 )
  {
    v131 = v243 - v130 - v128;
    if ( (v126 & 0x20) == 0 )
      goto LABEL_230;
    goto LABEL_203;
  }
  v131 = v243 - 1 - v130 - v128;
  if ( (v126 & 0x20) != 0 )
    goto LABEL_202;
LABEL_230:
  v139 = *(_DWORD *)(a5 + 16);
  if ( v139 == 48 )
  {
LABEL_202:
    LOBYTE(v127) = v126;
LABEL_203:
    if ( (v126 & 0x40) != 0 )
    {
      v147 = *(_BYTE **)(a1 + 8);
      if ( v147 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, 43);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v147 + 1;
        *v147 = 43;
      }
      v127 = *(_WORD *)(a5 + 12);
    }
    else if ( (v126 & 0x10) != 0 )
    {
      v138 = *(_BYTE **)(a1 + 8);
      if ( v138 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, 32);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v138 + 1;
        *v138 = 32;
      }
      v127 = *(_WORD *)(a5 + 12);
    }
    goto LABEL_205;
  }
LABEL_231:
  if ( v131 > 0 )
  {
    sub_43E240(a1, v139, (unsigned int)v131);
    v129 = v252;
  }
  if ( !v129 )
  {
    v126 = *(_WORD *)(a5 + 12);
    LOBYTE(v127) = v126;
    goto LABEL_203;
  }
LABEL_246:
  v142 = *(_BYTE **)(a1 + 8);
  if ( v142 == *(_BYTE **)(a1 + 16) )
  {
    sub_43E2F0(a1, 45);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v142 + 1;
    *v142 = 45;
  }
  v127 = *(_WORD *)(a5 + 12);
LABEL_205:
  if ( (v127 & 0x20) == 0 && *(_DWORD *)(a5 + 16) == 48 && v131 > 0 )
    sub_43E240(a1, 0x30u, (unsigned int)v131);
  if ( v254 && v67 )
  {
    v133 = &v89[v67];
    v134 = v89;
    while ( 1 )
    {
      if ( (sub_43E140(v253) & 1) == 0 )
        goto LABEL_214;
      v137 = *(_BYTE **)(a1 + 8);
      if ( v137 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, v250);
LABEL_214:
        v135 = *(char **)(a1 + 8);
        v136 = *v134;
        if ( v135 != *(char **)(a1 + 16) )
          goto LABEL_215;
LABEL_219:
        ++v134;
        sub_43E2F0(a1, v136);
        if ( v134 == v133 )
        {
LABEL_220:
          v89 += (unsigned int)v67;
          v130 = v92 - v89;
          break;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v137 + 1;
        *v137 = v250;
        v135 = *(char **)(a1 + 8);
        v136 = *v134;
        if ( v135 == *(char **)(a1 + 16) )
          goto LABEL_219;
LABEL_215:
        *(_QWORD *)(a1 + 8) = v135 + 1;
        ++v134;
        *v135 = v136;
        if ( v134 == v133 )
          goto LABEL_220;
      }
    }
  }
  sub_43E650(a1, (__int64)v89, v130);
  if ( (*(_WORD *)(a5 + 12) & 0x20) != 0 && v131 > 0 )
    sub_43E240(a1, *(_BYTE *)(a5 + 16), (unsigned int)v131);
  if ( !v238 )
    sub_40C1A0(v241);
LABEL_26:
  result = &qword_48DD60;
  if ( v266 != qword_48DD60 )
  {
    sub_412340();
    goto LABEL_429;
  }
  return result;
}
