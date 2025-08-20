__int64 __fastcall sub_41B030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int16 *a5,
        __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned __int64 v8; // x19
  unsigned __int64 v9; // x22
  unsigned __int16 *v10; // x24
  unsigned __int64 v11; // x25
  __int64 v12; // x26
  __int64 v13; // x30
  int v16; // w16
  __int64 v17; // x2
  unsigned __int16 *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x0
  unsigned __int64 v23; // x1
  unsigned __int64 *v24; // x0
  __int64 *v25; // x1
  unsigned __int64 v26; // x9
  unsigned int *v27; // x6
  unsigned int v28; // w0
  int v29; // w1
  unsigned __int8 *v30; // x2
  unsigned __int8 *v31; // x7
  unsigned __int64 v32; // x4
  int v33; // w3
  __int64 v34; // x14
  unsigned __int16 *v35; // x0
  unsigned __int64 v36; // x2
  int v37; // w3
  unsigned __int16 *v38; // x4
  unsigned __int16 *v39; // x1
  int v40; // w1
  unsigned int v41; // w0
  unsigned __int64 v42; // x1
  __int64 v44; // x2
  int v45; // w14
  unsigned __int16 *v46; // x2
  _DWORD *v47; // x6
  _DWORD *v48; // x4
  int v49; // w7
  unsigned __int16 *v50; // x10
  unsigned __int16 *v51; // x3
  __int64 v52; // x0
  bool v53; // zf
  unsigned __int8 *v54; // x3
  unsigned __int64 v55; // x1
  unsigned int *v56; // x4
  __int64 v57; // x0
  unsigned int v58; // w1
  unsigned int v59; // w0
  unsigned __int64 v60; // x1
  unsigned __int64 v61; // x0
  int *v62; // x6
  unsigned __int8 *v63; // x2
  unsigned __int16 *v64; // x1
  unsigned __int64 *v65; // x2
  unsigned __int16 **v66; // x4
  unsigned __int16 *v67; // x5
  int v68; // w6
  unsigned int v69; // w7
  __int64 v70; // x13
  __int64 (__fastcall *v71)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x15
  unsigned __int16 **v72; // x10
  int v73; // w11
  int v74; // w18
  unsigned __int64 v75; // x3
  unsigned __int64 v76; // x20
  unsigned __int16 *v77; // x21
  unsigned __int64 *v78; // x14
  unsigned __int64 v79; // x12
  unsigned __int16 *v80; // x24
  unsigned __int64 *v81; // x28
  unsigned __int64 *v82; // x6
  unsigned __int16 **v83; // x0
  int v84; // w0
  unsigned __int64 v85; // x2
  __int64 v86; // x3
  unsigned int *v87; // x1
  char v88; // w0
  unsigned int *v89; // x0
  unsigned __int64 v90; // x8
  bool v91; // cc
  __int64 v92; // x0
  int v93; // w1
  unsigned int *v94; // x22
  unsigned __int64 v95; // x9
  unsigned __int16 *v96; // x26
  int v97; // w7
  unsigned __int16 *v98; // x3
  unsigned int *v99; // x0
  unsigned int *v100; // x2
  unsigned __int16 *v101; // x5
  unsigned int v102; // w6
  unsigned __int16 **v103; // x0
  int v104; // w1
  unsigned int v105; // w0
  unsigned __int64 v106; // x10
  __int64 v107; // x2
  int v108; // w15
  unsigned __int16 *v109; // x2
  unsigned int v110; // w7
  int v111; // w16
  unsigned int *v112; // x0
  unsigned __int16 *v113; // x3
  unsigned int v114; // w5
  unsigned __int16 *v115; // x1
  __int64 v116; // x0
  int v117; // w7
  __int64 v118; // x0
  bool v119; // zf
  unsigned int *v120; // x3
  unsigned __int64 v121; // x1
  unsigned int *v122; // x4
  __int64 v123; // x0
  unsigned int v124; // w0
  unsigned int v125; // w0
  unsigned __int16 *v126; // x0
  unsigned __int16 *v127; // x1
  unsigned __int64 v128; // x0
  unsigned int *v129; // x2
  unsigned __int64 v130; // x1
  unsigned int *v131; // x0
  unsigned __int64 v132; // x0
  int v133; // w0
  unsigned __int16 *v134; // x1
  unsigned int v135; // w0
  __int64 (__fastcall *v136)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  signed int v137; // w0
  __int64 v138; // x8
  __int64 v139; // x1
  unsigned __int64 v140; // x1
  __int64 v141; // x0
  unsigned __int64 *v142; // x4
  _QWORD *v143; // x5
  unsigned __int64 *v144; // x1
  unsigned __int64 *v145; // x28
  char *v146; // x3
  char *v147; // x27
  int v148; // w15
  unsigned __int64 *v149; // x20
  _QWORD *v150; // x23
  __int64 v151; // x2
  __int64 v152; // x26
  unsigned __int16 **v153; // x2
  __int64 v154; // x1
  int v155; // w6
  unsigned int v156; // w7
  __int64 v157; // x0
  unsigned __int64 v158; // x1
  unsigned __int64 *v159; // x0
  __int64 *v160; // x1
  unsigned __int64 v161; // x9
  unsigned __int16 *v162; // x1
  int v163; // w0
  int v164; // w3
  char *v165; // x4
  unsigned __int8 *v166; // x7
  unsigned __int64 v167; // x6
  int v168; // w2
  __int64 v169; // x13
  unsigned __int16 *v170; // x1
  unsigned __int64 v171; // x3
  unsigned __int16 *v172; // x4
  int v173; // w0
  unsigned __int16 *v174; // x0
  __int64 *v175; // x0
  int v176; // w1
  unsigned int v177; // w0
  unsigned __int64 v178; // x1
  bool v179; // zf
  __int64 v180; // x2
  int v181; // w15
  unsigned __int16 *v182; // x3
  unsigned __int16 *v183; // x7
  unsigned __int16 *v184; // x6
  unsigned __int16 *v185; // x10
  int v186; // w2
  unsigned __int16 *v187; // x2
  __int64 v188; // x0
  unsigned __int64 v189; // x2
  unsigned __int64 v190; // x0
  unsigned __int16 *v191; // x1
  unsigned __int8 *v192; // x4
  char *v193; // x3
  unsigned __int64 v194; // x1
  unsigned int *v195; // x4
  __int64 v196; // x0
  int v197; // w1
  unsigned int v198; // w0
  __int64 v199; // x1
  unsigned int **v200; // x2
  char **v201; // x4
  char *v202; // x5
  int v203; // w6
  unsigned int v204; // w7
  __int64 v205; // x13
  __int64 v206; // x15
  char **v207; // x10
  int v208; // w11
  int v209; // w18
  unsigned __int64 v210; // x3
  unsigned __int64 v211; // x20
  char *v212; // x21
  __int64 v213; // x14
  unsigned __int64 v214; // x12
  char *v215; // x24
  unsigned int **v216; // x28
  char **v217; // x0
  unsigned __int64 *v218; // x6
  int v219; // w0
  unsigned int *v220; // x2
  unsigned int *v221; // x22
  __int64 v222; // x3
  unsigned int *v223; // x1
  unsigned __int64 v224; // x19
  char v225; // w0
  unsigned int *v226; // x0
  unsigned __int64 v227; // x8
  bool v228; // cc
  __int64 v229; // x0
  int v230; // w1
  unsigned __int64 v231; // x9
  int v232; // w7
  char *v233; // x3
  unsigned int *v234; // x1
  unsigned int *v235; // x5
  char *v236; // x6
  unsigned int v237; // w2
  char **v238; // x0
  int v239; // w1
  int v240; // w0
  unsigned __int64 v241; // x10
  __int64 v242; // x2
  int v243; // w15
  char *v244; // x3
  int v245; // w7
  int v246; // w16
  unsigned int *v247; // x2
  char *v248; // x5
  unsigned int v249; // w0
  char *v250; // x1
  __int64 v251; // x0
  unsigned int v252; // w7
  __int64 v253; // x0
  bool v254; // zf
  unsigned int v255; // w0
  char *v256; // x0
  unsigned int *v257; // x3
  unsigned __int64 v258; // x1
  unsigned int *v259; // x4
  __int64 v260; // x0
  unsigned int v261; // w0
  char *v262; // x1
  unsigned __int64 v263; // x0
  unsigned __int64 v264; // x1
  unsigned int *v265; // x0
  unsigned __int64 v266; // x1
  unsigned __int64 v267; // x0
  int v268; // w0
  char *v269; // x1
  int v270; // w0
  signed int v271; // w0
  __int64 v272; // x1
  __int64 v273; // x26
  __int64 v274; // x0
  __int64 v275; // x1
  char **v276; // [xsp+0h] [xbp-2E0h]
  __int64 v277; // [xsp+0h] [xbp-2E0h]
  char *v278; // [xsp+8h] [xbp-2D8h]
  int v279; // [xsp+8h] [xbp-2D8h]
  unsigned __int64 v280; // [xsp+8h] [xbp-2D8h]
  unsigned __int64 *v281; // [xsp+8h] [xbp-2D8h]
  unsigned int v282; // [xsp+14h] [xbp-2CCh]
  char v283; // [xsp+14h] [xbp-2CCh]
  unsigned __int64 *v284; // [xsp+18h] [xbp-2C8h]
  __int64 (__fastcall *v285)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [xsp+18h] [xbp-2C8h]
  __int64 (__fastcall *v286)(__int64, __int64, unsigned __int64 *, char *, _QWORD, char *, _QWORD, _QWORD); // [xsp+20h] [xbp-2C0h]
  __int64 v287; // [xsp+20h] [xbp-2C0h]
  __int64 v288; // [xsp+28h] [xbp-2B8h]
  __int64 v289; // [xsp+28h] [xbp-2B8h]
  __int64 v290; // [xsp+30h] [xbp-2B0h]
  unsigned __int64 v291; // [xsp+30h] [xbp-2B0h]
  char **v292; // [xsp+38h] [xbp-2A8h]
  __int64 v293; // [xsp+40h] [xbp-2A0h]
  int v294; // [xsp+48h] [xbp-298h]
  unsigned int v295; // [xsp+48h] [xbp-298h]
  int v296; // [xsp+4Ch] [xbp-294h]
  unsigned __int64 v297; // [xsp+50h] [xbp-290h] BYREF
  unsigned __int64 v298; // [xsp+58h] [xbp-288h] BYREF
  unsigned int *v299; // [xsp+60h] [xbp-280h]
  char *v300; // [xsp+68h] [xbp-278h]
  unsigned int v301; // [xsp+70h] [xbp-270h] BYREF
  _BYTE v302[4]; // [xsp+74h] [xbp-26Ch] BYREF
  __int64 v303; // [xsp+78h] [xbp-268h]
  _QWORD *v304; // [xsp+80h] [xbp-260h]
  __int64 v305; // [xsp+88h] [xbp-258h]
  unsigned __int64 v306; // [xsp+90h] [xbp-250h]
  unsigned __int64 *v307; // [xsp+98h] [xbp-248h]
  unsigned __int16 *v308; // [xsp+A0h] [xbp-240h]
  unsigned __int64 v309; // [xsp+A8h] [xbp-238h]
  _QWORD *v310; // [xsp+B0h] [xbp-230h]
  unsigned __int16 *v311; // [xsp+B8h] [xbp-228h]
  unsigned __int64 v312; // [xsp+C0h] [xbp-220h]
  __int64 v313; // [xsp+C8h] [xbp-218h]
  char *v314; // [xsp+D0h] [xbp-210h]
  unsigned __int64 *v315; // [xsp+D8h] [xbp-208h]
  unsigned __int64 v316; // [xsp+E0h] [xbp-200h]
  __int64 v317; // [xsp+E8h] [xbp-1F8h]
  __int64 (__fastcall *v318)(__int64, unsigned __int16 **, unsigned __int64 *, unsigned __int64, _QWORD, _QWORD *, _QWORD, _QWORD); // [xsp+F0h] [xbp-1F0h]
  __int64 v319; // [xsp+F8h] [xbp-1E8h]
  unsigned __int16 **v320; // [xsp+100h] [xbp-1E0h]
  unsigned __int64 *v321; // [xsp+108h] [xbp-1D8h]
  __int64 *v322; // [xsp+110h] [xbp-1D0h]
  unsigned int v323; // [xsp+118h] [xbp-1C8h]
  int v324; // [xsp+11Ch] [xbp-1C4h]
  __int64 v325; // [xsp+128h] [xbp-1B8h] BYREF
  unsigned __int64 v326; // [xsp+130h] [xbp-1B0h] BYREF
  __int64 v327; // [xsp+138h] [xbp-1A8h]
  _QWORD v328[4]; // [xsp+140h] [xbp-1A0h] BYREF
  unsigned __int16 *v329; // [xsp+160h] [xbp-180h]
  unsigned __int64 v330; // [xsp+168h] [xbp-178h]
  unsigned __int16 *v331; // [xsp+170h] [xbp-170h]
  unsigned __int16 *v332; // [xsp+178h] [xbp-168h]
  unsigned __int64 v333; // [xsp+180h] [xbp-160h]
  __int64 v334; // [xsp+188h] [xbp-158h]
  __int64 v335; // [xsp+190h] [xbp-150h]
  unsigned __int64 *v336; // [xsp+198h] [xbp-148h]
  unsigned __int16 **v337; // [xsp+1A0h] [xbp-140h]
  unsigned __int64 *v338; // [xsp+1A8h] [xbp-138h]
  __int64 (__fastcall *v339)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [xsp+1B0h] [xbp-130h]
  unsigned __int64 *v340; // [xsp+1B8h] [xbp-128h]
  __int64 (__fastcall *v341)(unsigned __int64 *, _QWORD, unsigned __int64 *, unsigned __int16 *, _QWORD, unsigned __int16 *, _QWORD, _QWORD); // [xsp+1C0h] [xbp-120h]
  unsigned __int64 *v342; // [xsp+1C8h] [xbp-118h]
  __int64 (__fastcall *v343)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [xsp+1D0h] [xbp-110h]
  unsigned __int16 **v344; // [xsp+1D8h] [xbp-108h]
  __int64 v345; // [xsp+1E0h] [xbp-100h]
  unsigned int v346; // [xsp+1E8h] [xbp-F8h]
  int v347; // [xsp+1ECh] [xbp-F4h]
  unsigned __int64 v348; // [xsp+1F0h] [xbp-F0h] BYREF
  unsigned __int64 v349; // [xsp+1F8h] [xbp-E8h] BYREF
  unsigned int *v350; // [xsp+200h] [xbp-E0h]
  unsigned __int16 *v351; // [xsp+208h] [xbp-D8h]
  unsigned int v352; // [xsp+210h] [xbp-D0h] BYREF
  _BYTE v353[4]; // [xsp+214h] [xbp-CCh] BYREF
  __int64 v354; // [xsp+218h] [xbp-C8h]
  _QWORD v355[12]; // [xsp+220h] [xbp-C0h] BYREF
  unsigned __int64 v356; // [xsp+280h] [xbp-60h]
  __int64 v357; // [xsp+288h] [xbp-58h]
  __int64 (__fastcall *v358)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD); // [xsp+290h] [xbp-50h]
  __int64 v359; // [xsp+298h] [xbp-48h]
  __int64 v360; // [xsp+2A0h] [xbp-40h]
  unsigned __int64 *v361; // [xsp+2A8h] [xbp-38h]
  __int64 *v362; // [xsp+2B0h] [xbp-30h]
  unsigned int v363; // [xsp+2B8h] [xbp-28h]
  unsigned int v364; // [xsp+2BCh] [xbp-24h]
  __int64 v365; // [xsp+2C8h] [xbp-18h] BYREF
  unsigned __int64 v366; // [xsp+2D0h] [xbp-10h] BYREF
  __int64 v367; // [xsp+2D8h] [xbp-8h]
  __int64 vars0; // [xsp+2E0h] [xbp+0h] BYREF

  v16 = *(_DWORD *)(a2 + 16);
  v17 = a2 + 48;
  v20 = a5;
  v367 = qword_48DD60;
  v21 = a1 + 104;
  v358 = 0;
  v359 = a1 + 104;
  v360 = v17;
  v363 = a8;
  v364 = a7;
  if ( (v16 & 1) == 0 )
  {
    v22 = *(_QWORD *)(a1 + 104);
    v23 = *(_QWORD *)(v21 + 40);
    v358 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v23;
    if ( v22 )
      v358 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v23 ^ qword_48DD68);
  }
  if ( v364 )
  {
    if ( !a5 )
    {
      **(_QWORD **)(a2 + 32) = 0;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
        goto LABEL_91;
      if ( v367 == qword_48DD60 )
        return v358(v359, v360, 0, 0, 0, a6, v364, v363);
      goto LABEL_114;
    }
    goto LABEL_116;
  }
  v9 = (unsigned __int64)&v365;
  if ( a5 )
    v24 = (unsigned __int64 *)a5;
  else
    v24 = (unsigned __int64 *)a2;
  if ( a6 )
    v25 = &v365;
  else
    v25 = 0;
  v26 = *(_QWORD *)(a2 + 8);
  v11 = *v24;
  v362 = v25;
  v365 = 0;
  if ( v363 )
  {
    v27 = *(unsigned int **)(a2 + 32);
    v28 = *v27;
    v29 = *v27 & 7;
    if ( v29 )
    {
      if ( a5 )
        goto LABEL_118;
      v30 = *(unsigned __int8 **)a3;
      if ( (*v27 & 7) > 4 )
        goto LABEL_117;
      v31 = *(unsigned __int8 **)a3;
      v32 = 2;
      if ( v29 == 1 )
      {
        v31 = v30 + 1;
        v32 = 1;
      }
      if ( a4 < (unsigned __int64)v31 )
      {
        *(_QWORD *)a3 = a4;
        v60 = a4 - (_QWORD)v30 + v32;
        if ( v60 <= 4 )
        {
          if ( v32 < v60 )
          {
            v61 = v32;
            v62 = (int *)(v27 + 1);
            v63 = &v30[-v32];
            do
            {
              *((_BYTE *)v62 + v61) = v63[v61];
              ++v61;
            }
            while ( v60 != v61 );
          }
          v12 = 7;
          goto LABEL_46;
        }
        goto LABEL_115;
      }
      v12 = 5;
      if ( v26 < v11 + 4 )
        goto LABEL_46;
      v33 = (unsigned __int16)(*((unsigned __int8 *)v27 + 4) | (*v30 << 8));
      if ( (unsigned __int16)(v33 + 10240) <= 0x7FFu )
      {
        if ( !v362 || (v16 & 2) == 0 )
        {
          v12 = 6;
          goto LABEL_46;
        }
        ++*v362;
      }
      else
      {
        *(_DWORD *)v11 = v33;
        v11 += 4LL;
        v28 = *v27;
        v29 = *v27 & 7;
      }
      if ( v29 <= 1 )
      {
        v34 = v365;
        v16 = *(_DWORD *)(a2 + 16);
        v10 = (unsigned __int16 *)&v30[-v29 + 2];
        *(_QWORD *)a3 = v10;
        v9 = 10240;
        *v27 = v28 & 0xFFFFFFF8;
        v361 = &v366;
        goto LABEL_23;
      }
      sub_41F250("inptr - bytebuf > (state->__count & 7)", "../iconv/loop.c", 385, "ucs2_internal_loop_single");
LABEL_113:
      sub_41F250(
        "cnt_after <= sizeof (data->__statep->__value.__wchb)",
        "../iconv/skeleton.c",
        647,
        "__gconv_transform_ucs2_internal");
      goto LABEL_114;
    }
  }
  v10 = *(unsigned __int16 **)a3;
  v34 = 0;
  v9 = 10240;
  v361 = &v366;
  while ( 1 )
  {
LABEL_23:
    if ( a6 )
      v34 += *a6;
    if ( (unsigned __int16 *)a4 == v10 )
    {
      v8 = v11;
      v35 = (unsigned __int16 *)a4;
      v12 = 4;
      goto LABEL_36;
    }
    v35 = v10 + 1;
    if ( (unsigned __int64)(v10 + 1) > a4 )
    {
      v8 = v11;
      v35 = v10;
      v12 = 7;
      goto LABEL_36;
    }
    v36 = v11 + 4;
    v8 = v11;
    if ( v11 + 4 > v26 )
    {
      v35 = v10;
      v12 = 5;
      goto LABEL_36;
    }
    v37 = *v10;
    v38 = v10;
    v12 = 4;
    if ( (unsigned __int16)(v37 + 10240) > 0x7FFu )
    {
LABEL_29:
      *(_DWORD *)v8 = v37;
      v8 = v36;
      if ( (unsigned __int16 *)a4 != v35 )
        goto LABEL_30;
LABEL_36:
      *(_QWORD *)a3 = v35;
      if ( v20 )
        goto LABEL_45;
      goto LABEL_37;
    }
    while ( 1 )
    {
      if ( !v362 || (v16 & 2) == 0 )
      {
        v35 = v38;
        v12 = 6;
        goto LABEL_36;
      }
      v12 = 6;
      ++*v362;
      if ( (unsigned __int16 *)a4 == v35 )
        goto LABEL_36;
LABEL_30:
      v39 = v35 + 1;
      if ( a4 < (unsigned __int64)(v35 + 1) )
        break;
      v36 = v8 + 4;
      if ( v26 < v8 + 4 )
      {
        v12 = 5;
        goto LABEL_36;
      }
      ++v35;
      v38 = v39 - 1;
      v37 = *(v39 - 1);
      if ( (unsigned __int16)(v37 + 10240) > 0x7FFu )
        goto LABEL_29;
    }
    *(_QWORD *)a3 = v35;
    v12 = 7;
    if ( v20 )
    {
LABEL_45:
      *(_QWORD *)v20 = v8;
      goto LABEL_46;
    }
LABEL_37:
    v40 = *(_DWORD *)(a2 + 16);
    ++*(_DWORD *)(a2 + 20);
    if ( (v40 & 1) != 0 )
    {
      v52 = *a6;
      *(_QWORD *)a2 = v8;
      *a6 = v52 + v365;
      goto LABEL_69;
    }
    v357 = v34;
    if ( v8 <= v11 )
    {
      v41 = v12;
      goto LABEL_41;
    }
    v356 = v26;
    v366 = *(_QWORD *)a2;
    v41 = v358(v359, v360, v361, v8, 0, a6, 0, v363);
    v26 = v356;
    if ( v41 != 4 )
      break;
    v41 = v12;
    if ( (_DWORD)v12 != 5 )
      goto LABEL_41;
LABEL_42:
    v10 = *(unsigned __int16 **)a3;
    v11 = *(_QWORD *)a2;
    v34 = v365;
    v16 = *(_DWORD *)(a2 + 16);
  }
  v42 = v366;
  if ( v366 == v8 )
    goto LABEL_41;
  v44 = 0;
  if ( a6 )
    v44 = *a6;
  if ( v44 + v365 == v357 )
  {
    *(_QWORD *)a3 -= (__int64)(v8 - v366) / 2;
    goto LABEL_41;
  }
  v45 = *(_DWORD *)(a2 + 16);
  if ( (unsigned __int16 *)a4 != v10 )
  {
    v46 = v10 + 1;
    if ( a4 >= (unsigned __int64)(v10 + 1) )
    {
      v47 = (_DWORD *)(v11 + 4);
      v48 = (_DWORD *)v11;
      if ( v366 >= v11 + 4 )
      {
        v49 = *v10;
        v50 = v10;
        if ( (unsigned __int16)(v49 + 10240) > 0x7FFu )
        {
LABEL_59:
          *v48 = v49;
          v48 = v47;
          goto LABEL_60;
        }
        while ( 1 )
        {
          if ( !v362 || (v45 & 2) == 0 )
          {
            v46 = v50;
LABEL_89:
            *(_QWORD *)a3 = v46;
            if ( (_DWORD *)v42 == v48 )
              goto LABEL_105;
            goto LABEL_90;
          }
          ++*v362;
LABEL_60:
          if ( (unsigned __int16 *)a4 == v46 )
          {
            *(_QWORD *)a3 = a4;
            if ( (_DWORD *)v42 == v48 )
              goto LABEL_105;
            goto LABEL_90;
          }
          v51 = v46 + 1;
          if ( a4 < (unsigned __int64)(v46 + 1) )
            goto LABEL_89;
          v47 = v48 + 1;
          if ( v42 < (unsigned __int64)(v48 + 1) )
            break;
          ++v46;
          v50 = v51 - 1;
          v49 = *(v51 - 1);
          if ( (unsigned __int16)(v49 + 10240) > 0x7FFu )
            goto LABEL_59;
        }
        *(_QWORD *)a3 = v46;
        if ( (_DWORD *)v42 != v48 )
          goto LABEL_90;
        if ( v42 != v11 )
          goto LABEL_41;
        goto LABEL_94;
      }
LABEL_106:
      *(_QWORD *)a3 = v10;
      if ( v42 != v11 )
        goto LABEL_90;
LABEL_94:
      --*(_DWORD *)(a2 + 20);
LABEL_41:
      if ( !v41 )
        goto LABEL_42;
      v12 = v41;
LABEL_69:
      if ( v363 )
        v53 = (_DWORD)v12 == 7;
      else
        v53 = 0;
      if ( !v53 )
        goto LABEL_46;
      v54 = *(unsigned __int8 **)a3;
      v55 = a4 - *(_QWORD *)a3;
      if ( v55 <= 4 )
      {
        v56 = *(unsigned int **)(a2 + 32);
        v57 = 0;
        if ( v55 )
        {
          do
          {
            *((_BYTE *)v56 + v57 + 4) = v54[v57];
            ++v57;
          }
          while ( v55 != v57 );
          v364 = v55;
        }
        v58 = v364;
        v59 = *v56 & 0xFFFFFFF8;
        *(_QWORD *)a3 = a4;
        *v56 = v59 | v58;
        goto LABEL_46;
      }
      goto LABEL_113;
    }
    *(_QWORD *)a3 = v10;
    if ( v42 != v11 )
      goto LABEL_90;
LABEL_105:
    v41 = sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_ucs2_internal");
    goto LABEL_106;
  }
  *(_QWORD *)a3 = a4;
  if ( v42 == v11 )
    goto LABEL_105;
LABEL_90:
  sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ucs2_internal");
LABEL_91:
  v12 = 0;
LABEL_46:
  if ( v367 == qword_48DD60 )
    return (unsigned int)v12;
LABEL_114:
  sub_412340();
LABEL_115:
  sub_41F250("inlen_after <= sizeof (state->__value.__wchb)", "../iconv/loop.c", 338, "ucs2_internal_loop_single");
LABEL_116:
  sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ucs2_internal");
LABEL_117:
  sub_41F250("(state->__count & 7) <= sizeof (state->__value)", "../iconv/loop.c", 309, "ucs2_internal_loop_single");
LABEL_118:
  v70 = sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_ucs2_internal");
  v71 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v64 + 24);
  v355[0] = &vars0;
  v355[1] = v13;
  v72 = v66;
  v73 = *((_DWORD *)v64 + 4);
  v355[2] = v8;
  v355[3] = a4;
  v74 = v68;
  v76 = v75;
  v355[4] = a6;
  v355[5] = v9;
  v77 = v64;
  v78 = (unsigned __int64 *)(v70 + 104);
  v355[6] = v20;
  v355[7] = v10;
  v79 = 0;
  v80 = v67;
  v355[8] = v11;
  v355[9] = v12;
  v355[10] = a3;
  v355[11] = a2;
  v81 = v65;
  v354 = qword_48DD60;
  if ( (v73 & 1) == 0 )
  {
    v79 = *(_QWORD *)(v70 + 144);
    if ( *(_QWORD *)(v70 + 104) )
      v79 ^= qword_48DD68;
  }
  if ( v68 )
  {
    if ( v66 )
      goto LABEL_272;
    **((_QWORD **)v64 + 4) = 0;
    if ( (*((_DWORD *)v64 + 4) & 1) == 0 )
    {
      if ( v354 == qword_48DD60 )
        __asm { BR              X16 }
      goto LABEL_280;
    }
LABEL_221:
    v12 = 0;
    goto LABEL_165;
  }
  v82 = &v348;
  if ( v66 )
    v83 = v66;
  else
    v83 = (unsigned __int16 **)v64;
  v11 = *((_QWORD *)v64 + 1);
  if ( !v67 )
    v82 = 0;
  v20 = *v83;
  v348 = 0;
  if ( !v69 || (a3 = *((_QWORD *)v64 + 4), (v84 = *(_DWORD *)a3 & 7) == 0) )
  {
    v94 = (unsigned int *)*v65;
    v95 = 0;
    goto LABEL_146;
  }
  if ( v66 )
  {
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs2");
    goto LABEL_280;
  }
  v85 = *v65;
  v350 = (unsigned int *)*v81;
  v351 = v20;
  if ( v84 > 4 )
  {
    sub_41F250("(state->__count & 7) <= sizeof (state->__value)", "../iconv/loop.c", 309, "internal_ucs2_loop_single");
    goto LABEL_276;
  }
  v9 = (unsigned __int64)&v352;
  v86 = a3 + 4;
  v87 = &v352;
  v8 = 0;
  do
  {
    v88 = *(_BYTE *)(v86 + v8++);
    *(_BYTE *)v87 = v88;
    v87 = (unsigned int *)((char *)v87 + 1);
  }
  while ( v8 < (*(_DWORD *)a3 & 7u) );
  if ( v76 < v85 - v8 + 4 )
  {
    *v81 = v76;
    v128 = v76 - v85 + v8;
    if ( v128 <= 4 )
    {
      v129 = (unsigned int *)(v85 + 1);
      if ( v8 < v128 )
      {
        do
        {
          v350 = v129;
          v129 = (unsigned int *)((char *)v129 + 1);
          *(_BYTE *)(v86 + v8++) = *((_BYTE *)v129 - 2);
        }
        while ( v128 != v8 );
      }
      v12 = 7;
      goto LABEL_165;
    }
    sub_41F250("inlen_after <= sizeof (state->__value.__wchb)", "../iconv/loop.c", 338, "internal_ucs2_loop_single");
    goto LABEL_271;
  }
  v89 = (unsigned int *)(v85 + 1);
  if ( v11 < (unsigned __int64)(v20 + 1) )
  {
LABEL_223:
    v12 = 5;
    goto LABEL_165;
  }
  do
  {
    v90 = v8++;
    v350 = v89;
    v91 = v8 <= 3 && v76 > (unsigned __int64)v89;
    v353[v8 - 5] = *((_BYTE *)v89 - 1);
    v89 = (unsigned int *)((char *)v89 + 1);
  }
  while ( v91 );
  v350 = &v352;
  if ( v352 <= 0xFFFF )
  {
    if ( v352 - 55296 > 0x7FF )
    {
      *v20 = v352;
      v350 = (unsigned int *)v353;
      v351 = v20 + 1;
      goto LABEL_142;
    }
    if ( v82 && (v73 & 2) != 0 )
    {
      v132 = *v82;
      v350 = (unsigned int *)v353;
      *v82 = v132 + 1;
      goto LABEL_142;
    }
LABEL_246:
    v12 = 6;
    goto LABEL_165;
  }
  if ( v352 >> 7 != 7168 )
  {
    if ( v82 )
    {
      if ( (v73 & 8) != 0 )
        goto LABEL_259;
      if ( (v73 & 2) != 0 )
      {
        v130 = *v82;
        v131 = (unsigned int *)v353;
        v350 = (unsigned int *)v353;
        *v82 = v130 + 1;
        goto LABEL_243;
      }
    }
    goto LABEL_246;
  }
  v350 = (unsigned int *)v353;
LABEL_142:
  v92 = 4;
  while ( 2 )
  {
    v93 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 7LL) >= v92 )
    {
LABEL_273:
      v131 = (unsigned int *)sub_41F250(
                               "inptr - bytebuf > (state->__count & 7)",
                               "../iconv/loop.c",
                               385,
                               "internal_ucs2_loop_single");
LABEL_274:
      v140 = *v82;
      v350 = ++v131;
      *v82 = v140 + 1;
LABEL_245:
      if ( v131 == (unsigned int *)v9 )
        goto LABEL_246;
LABEL_243:
      v92 = (__int64)v131 - v9;
      continue;
    }
    break;
  }
  v73 = *((_DWORD *)v77 + 4);
  v94 = (unsigned int *)(*v81 + v92 - (v93 & 7));
  *v81 = (unsigned __int64)v94;
  v95 = v348;
  v20 = v351;
  *(_DWORD *)a3 = v93 & 0xFFFFFFF8;
LABEL_146:
  while ( 2 )
  {
    v96 = v80;
    v80 = v77;
    v77 = v20;
    v20 = (unsigned __int16 *)v81;
    v81 = (unsigned __int64 *)v94;
    v9 = v11;
    v11 = v95;
    LODWORD(v339) = v69;
    v97 = v73;
    a3 = 0xFFFF;
    v337 = v72;
    v340 = v82;
    v341 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v79;
    v342 = v78;
    v343 = v71;
    LODWORD(v344) = v74;
    v345 = v70;
    while ( 2 )
    {
      if ( v96 )
        v11 += *(_QWORD *)v96;
      v350 = (unsigned int *)v81;
      v351 = v77;
      v98 = v77;
      v99 = (unsigned int *)v81;
      v8 = 4;
      if ( v81 == (unsigned __int64 *)v76 )
      {
LABEL_156:
        *(_QWORD *)v20 = v99;
        v103 = v337;
        if ( v337 )
          goto LABEL_164;
        goto LABEL_157;
      }
      while ( 2 )
      {
        v100 = v99 + 1;
        if ( v76 >= (unsigned __int64)(v99 + 1) )
        {
          v101 = v98 + 1;
          if ( v9 < (unsigned __int64)(v98 + 1) )
          {
            v99 = v350;
            v8 = 5;
            goto LABEL_156;
          }
          v102 = *v99;
          if ( *v99 <= 0xFFFF )
          {
            if ( v102 - 55296 <= 0x7FF )
            {
              if ( !v340 || (v97 & 2) == 0 )
              {
LABEL_178:
                v99 = v350;
                v8 = 6;
                goto LABEL_156;
              }
              ++v99;
              v8 = 6;
              v350 = v100;
              ++*v340;
            }
            else
            {
              ++v99;
              *v98++ = v102;
              v350 = v100;
              v351 = v101;
            }
            goto LABEL_155;
          }
          if ( v102 >> 7 == 7168 )
          {
            ++v99;
            v350 = v100;
          }
          else
          {
            if ( !v340 )
              goto LABEL_178;
            if ( (*((_DWORD *)v80 + 4) & 8) != 0 )
            {
              LODWORD(v338) = v97;
              v125 = sub_41D410(v345, v80);
              v8 = v125;
              v97 = (int)v338;
              if ( v125 == 6 )
              {
                v98 = v351;
                goto LABEL_171;
              }
              v99 = v350;
              v98 = v351;
              if ( (_DWORD)v8 == 5 )
                goto LABEL_156;
            }
            else
            {
LABEL_171:
              v99 = v350;
              if ( (v97 & 2) == 0 )
              {
                v8 = 6;
                goto LABEL_156;
              }
              v99 = v350 + 1;
              v8 = 6;
              ++v350;
              ++*v340;
            }
          }
LABEL_155:
          if ( (unsigned int *)v76 == v99 )
            goto LABEL_156;
          continue;
        }
        break;
      }
      *(_QWORD *)v20 = v350;
      v103 = v337;
      v8 = 7;
      if ( v337 )
      {
LABEL_164:
        v12 = (unsigned int)v8;
        *v103 = v98;
LABEL_165:
        if ( v354 == qword_48DD60 )
          return (unsigned int)v12;
LABEL_280:
        sub_412340();
        goto LABEL_281;
      }
LABEL_157:
      v104 = *((_DWORD *)v80 + 4);
      ++*((_DWORD *)v80 + 5);
      if ( (v104 & 1) != 0 )
      {
        v77 = v80;
        v80 = v96;
        v81 = (unsigned __int64 *)v20;
        v116 = *(_QWORD *)v96;
        v12 = (unsigned int)v8;
        v117 = (int)v339;
        v74 = (int)v344;
        v118 = v116 + v348;
        *(_QWORD *)v77 = v98;
        *(_QWORD *)v80 = v118;
        goto LABEL_196;
      }
      if ( v77 >= v98 )
      {
        v105 = v8;
LABEL_161:
        if ( !v105 )
          goto LABEL_162;
        v117 = (int)v339;
        v77 = v80;
        v74 = (int)v344;
        v81 = (unsigned __int64 *)v20;
        v12 = v105;
LABEL_196:
        if ( v117 )
          v119 = (_DWORD)v12 == 7;
        else
          v119 = 0;
        if ( !v119 )
          goto LABEL_165;
        v120 = (unsigned int *)*v81;
        v121 = v76 - *v81;
        if ( v121 <= 4 )
        {
          v122 = (unsigned int *)*((_QWORD *)v77 + 4);
          v123 = 0;
          if ( v121 )
          {
            do
            {
              *((_BYTE *)v122 + v123 + 4) = *((_BYTE *)v120 + v123);
              ++v123;
            }
            while ( v121 != v123 );
            v74 = v121;
          }
          v124 = *v122;
          *v81 = v76;
          *v122 = v124 & 0xFFFFFFF8 | v74;
          goto LABEL_165;
        }
LABEL_271:
        sub_41F250(
          "cnt_after <= sizeof (data->__statep->__value.__wchb)",
          "../iconv/skeleton.c",
          647,
          "__gconv_transform_internal_ucs2");
LABEL_272:
        sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_ucs2");
        goto LABEL_273;
      }
      v349 = *(_QWORD *)v80;
      v338 = (unsigned __int64 *)v98;
      v105 = v341(v342, v343, &v349, v98, 0, v96, 0, (unsigned int)v339);
      if ( v105 == 4 )
      {
        v105 = v8;
        if ( (_DWORD)v8 == 5 )
        {
LABEL_162:
          v81 = *(unsigned __int64 **)v20;
          v77 = *(unsigned __int16 **)v80;
          v11 = v348;
          v97 = *((_DWORD *)v80 + 4);
          continue;
        }
        goto LABEL_161;
      }
      break;
    }
    v106 = v349;
    if ( (unsigned __int64 *)v349 == v338 )
      goto LABEL_161;
    v107 = 0;
    if ( v96 )
      v107 = *(_QWORD *)v96;
    if ( v107 + v348 == v11 )
    {
      *(_QWORD *)v20 -= 2 * ((_QWORD)v338 - v349);
      goto LABEL_161;
    }
    v108 = *((_DWORD *)v80 + 4);
    *(_QWORD *)v20 = v81;
    v350 = (unsigned int *)v81;
    v351 = v77;
    if ( v81 == (unsigned __int64 *)v76 )
    {
      if ( (unsigned __int16 *)v106 == v77 )
        goto LABEL_258;
LABEL_220:
      sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs2");
      goto LABEL_221;
    }
    v109 = v77;
    v110 = v105;
    v111 = 4;
    v11 = 0xFFFF;
    v8 = 4294912000LL;
    do
    {
      v112 = (unsigned int *)v81 + 1;
      if ( v76 < (unsigned __int64)v81 + 4 )
      {
LABEL_218:
        v9 = (unsigned __int64)v350;
        v81 = (unsigned __int64 *)v20;
LABEL_219:
        v126 = (unsigned __int16 *)v349;
        *v81 = v9;
        if ( v126 == v109 )
          goto LABEL_258;
        goto LABEL_220;
      }
      v113 = v109 + 1;
      if ( v106 < (unsigned __int64)(v109 + 1) )
      {
        v127 = (unsigned __int16 *)v349;
        *(_QWORD *)v20 = v350;
        v105 = v110;
        if ( v127 != v109 )
          goto LABEL_220;
        goto LABEL_193;
      }
      v114 = *(_DWORD *)v81;
      if ( *(_DWORD *)v81 <= 0xFFFFu )
      {
        if ( v114 - 55296 <= 0x7FF )
        {
          if ( !v340 || (v108 & 2) == 0 )
            goto LABEL_218;
          v81 = (unsigned __int64 *)((char *)v81 + 4);
          v111 = 6;
          v350 = v112;
          ++*v340;
        }
        else
        {
          v81 = (unsigned __int64 *)((char *)v81 + 4);
          *v109++ = v114;
          v350 = v112;
          v351 = v113;
        }
        continue;
      }
      if ( v114 >> 7 == 7168 )
      {
        v81 = (unsigned __int64 *)((char *)v81 + 4);
        v350 = v112;
        continue;
      }
      if ( !v340 )
        goto LABEL_218;
      if ( (*((_DWORD *)v80 + 4) & 8) != 0 )
      {
        v338 = (unsigned __int64 *)v106;
        v346 = v110;
        v347 = v108;
        v133 = sub_41D410(v345, v80);
        v111 = v133;
        v106 = (unsigned __int64)v338;
        v110 = v346;
        v108 = v347;
        if ( v133 != 6 )
        {
          v81 = (unsigned __int64 *)v350;
          v109 = v351;
          if ( v133 == 5 )
          {
            v134 = (unsigned __int16 *)v349;
            *(_QWORD *)v20 = v350;
            v105 = v110;
            if ( v134 != v109 )
              goto LABEL_220;
            goto LABEL_193;
          }
          continue;
        }
        v109 = v351;
      }
      if ( (v108 & 2) == 0 )
      {
        v81 = (unsigned __int64 *)v20;
        v9 = (unsigned __int64)v350;
        goto LABEL_219;
      }
      v81 = (unsigned __int64 *)(v350 + 1);
      v111 = 6;
      ++v350;
      ++*v340;
    }
    while ( (unsigned __int64 *)v76 != v81 );
    v115 = (unsigned __int16 *)v349;
    *(_QWORD *)v20 = v76;
    v105 = v110;
    if ( v115 != v109 )
      goto LABEL_220;
    if ( v111 == 5 )
    {
LABEL_193:
      if ( v109 == v77 )
        --*((_DWORD *)v80 + 5);
      goto LABEL_161;
    }
LABEL_258:
    sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_ucs2");
LABEL_259:
    v337 = (unsigned __int16 **)v70;
    v338 = v82;
    v339 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v79;
    v340 = v78;
    v341 = v71;
    LODWORD(v342) = v73;
    v343 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v90;
    v344 = v72;
    LODWORD(v345) = v74;
    v346 = v69;
    v135 = sub_41D410(v70, v77);
    v70 = (__int64)v337;
    v82 = v338;
    v12 = v135;
    v79 = (unsigned __int64)v339;
    v78 = v340;
    v53 = v135 == 6;
    v71 = v341;
    v72 = v344;
    v131 = v350;
    v69 = v346;
    if ( v53 )
    {
      if ( ((unsigned __int8)v342 & 2) != 0 )
        goto LABEL_274;
      goto LABEL_245;
    }
    v136 = v343;
    if ( (_DWORD)v12 == 5 )
    {
      if ( v350 == (unsigned int *)v9 )
        goto LABEL_223;
      goto LABEL_243;
    }
    if ( v350 != (unsigned int *)v9 )
      goto LABEL_243;
    if ( (_DWORD)v12 != 7 )
      goto LABEL_277;
    if ( v8 == 4 )
    {
LABEL_276:
      sub_41F250("inend != &bytebuf[MAX_NEEDED_INPUT]", "../iconv/loop.c", 403, "internal_ucs2_loop_single");
LABEL_277:
      if ( (_DWORD)v12 )
        goto LABEL_165;
      v94 = (unsigned int *)*v81;
      v95 = v348;
      v73 = *((_DWORD *)v77 + 4);
      continue;
    }
    break;
  }
  v137 = *(_DWORD *)a3 & 0xFFFFFFF8;
  *v81 += v8 - (*(_DWORD *)a3 & 7LL);
  if ( (__int64)v8 > v137 )
  {
    if ( v8 <= 4 )
    {
      v138 = (__int64)v136 + 2;
      v139 = 1;
      *(_DWORD *)a3 = v137 | v8;
      a3 += 3;
      do
      {
        *(_BYTE *)(a3 + v139) = *(_BYTE *)(v9 + v139 - 1);
        ++v139;
      }
      while ( v139 != v138 );
      v12 = 7;
      goto LABEL_165;
    }
LABEL_281:
    sub_41F250("inend - inptr <= sizeof (state->__value.__wchb)", "../iconv/loop.c", 414, "internal_ucs2_loop_single");
  }
  v141 = sub_41F250("inend - inptr > (state->__count & ~7)", "../iconv/loop.c", 413, "internal_ucs2_loop_single");
  v328[0] = v355;
  v328[1] = v13;
  v335 = a3;
  v336 = v81;
  v145 = v144;
  v147 = v146;
  v328[2] = v8;
  v328[3] = v76;
  v148 = *((_DWORD *)v144 + 4);
  v331 = v20;
  v332 = v80;
  v149 = v142;
  v150 = v143;
  v333 = v11;
  v334 = v12;
  v152 = v151;
  v153 = (unsigned __int16 **)(v144 + 6);
  v327 = qword_48DD60;
  v154 = v141 + 104;
  v318 = 0;
  v319 = v141 + 104;
  v320 = v153;
  v323 = v156;
  v324 = v155;
  if ( (v148 & 1) == 0 )
  {
    v157 = *(_QWORD *)(v141 + 104);
    v158 = *(_QWORD *)(v154 + 40);
    v318 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v158;
    if ( v157 )
      v318 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v158 ^ qword_48DD68);
  }
  if ( v324 )
  {
    if ( v142 )
    {
      v329 = v77;
      v330 = v9;
      sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ucs2reverse_internal");
      goto LABEL_392;
    }
    *(_QWORD *)v145[4] = 0;
    if ( (v145[2] & 1) == 0 )
    {
      if ( v327 == qword_48DD60 )
        __asm { BR              X16 }
      goto LABEL_395;
    }
    v11 = 0;
    goto LABEL_334;
  }
  v329 = v77;
  v330 = v9;
  if ( v142 )
    v159 = v142;
  else
    v159 = v145;
  v77 = (unsigned __int16 *)&v325;
  if ( v143 )
    v160 = &v325;
  else
    v160 = 0;
  v80 = (unsigned __int16 *)*v159;
  v322 = v160;
  v325 = 0;
  v161 = v145[1];
  if ( v323 )
  {
    v162 = (unsigned __int16 *)v145[4];
    v163 = *(_DWORD *)v162;
    v164 = *(_DWORD *)v162 & 7;
    if ( v164 )
    {
      if ( v142 )
        goto LABEL_397;
      v165 = *(char **)v152;
      if ( (*(_DWORD *)v162 & 7u) > 4 )
        goto LABEL_396;
      v166 = *(unsigned __int8 **)v152;
      v167 = 2;
      if ( v164 == 1 )
      {
        v166 = (unsigned __int8 *)(v165 + 1);
        v167 = 1;
      }
      if ( v147 < (char *)v166 )
      {
        *(_QWORD *)v152 = v147;
        v189 = v147 - v165 + v167;
        if ( v189 <= 4 )
        {
          if ( v167 < v189 )
          {
            v190 = v167;
            v191 = v162 + 2;
            v192 = (unsigned __int8 *)&v165[-v167];
            do
            {
              *((_BYTE *)v191 + v190) = v192[v190];
              ++v190;
            }
            while ( v189 != v190 );
          }
          v77 = v329;
          v9 = v330;
          v11 = 7;
          goto LABEL_334;
        }
        goto LABEL_394;
      }
      if ( v161 < (unsigned __int64)(v80 + 2) )
      {
        v77 = v329;
        v9 = v330;
        v11 = 5;
      }
      else
      {
        v168 = (unsigned __int16)__rev16(*((unsigned __int8 *)v162 + 4) | ((unsigned __int8)*v165 << 8));
        if ( (unsigned __int16)(v168 + 10240) > 0x7FFu )
        {
          *(_DWORD *)v80 = v168;
          v80 += 2;
          v163 = *(_DWORD *)v162;
          v164 = *(_DWORD *)v162 & 7;
          goto LABEL_302;
        }
        if ( v322 && (v148 & 2) != 0 )
        {
          ++*v322;
LABEL_302:
          if ( v164 <= 1 )
          {
            v169 = v325;
            v148 = *((_DWORD *)v145 + 4);
            v77 = (unsigned __int16 *)&v165[-v164 + 2];
            *(_QWORD *)v152 = v77;
            v9 = 10240;
            *(_DWORD *)v162 = v163 & 0xFFFFFFF8;
            v321 = &v326;
            goto LABEL_304;
          }
          goto LABEL_393;
        }
        v77 = v329;
        v9 = v330;
        v11 = 6;
      }
LABEL_334:
      if ( v327 == qword_48DD60 )
        return (unsigned int)v11;
      goto LABEL_395;
    }
  }
  v77 = *(unsigned __int16 **)v152;
  v169 = 0;
  v9 = 10240;
  v321 = &v326;
LABEL_304:
  while ( 2 )
  {
    if ( v150 )
      v169 += *v150;
    if ( v147 != (char *)v77 )
    {
      v170 = v77 + 1;
      if ( v147 < (char *)v77 + 2 )
      {
        v8 = (unsigned __int64)v80;
        v170 = v77;
        v11 = 7;
        goto LABEL_317;
      }
      v171 = (unsigned __int64)(v80 + 2);
      v8 = (unsigned __int64)v80;
      if ( v161 < (unsigned __int64)(v80 + 2) )
      {
        v170 = v77;
        v11 = 5;
        goto LABEL_317;
      }
      v172 = v77;
      v173 = (unsigned __int16)__rev16(*v77);
      if ( (unsigned __int16)(v173 + 10240) <= 0x7FFu )
      {
LABEL_314:
        v175 = v322;
        if ( !v322 || (v148 & 2) == 0 )
        {
          v170 = v172;
          v11 = 6;
          goto LABEL_317;
        }
        goto LABEL_353;
      }
      while ( 1 )
      {
        *(_DWORD *)v8 = v173;
        v8 = v171;
        if ( v170 == (unsigned __int16 *)v147 )
          goto LABEL_354;
LABEL_311:
        v174 = v170 + 1;
        if ( v147 < (char *)v170 + 2 )
          break;
        v171 = v8 + 4;
        if ( v161 < v8 + 4 )
        {
          v11 = 5;
          goto LABEL_317;
        }
        ++v170;
        v172 = v174 - 1;
        v173 = (unsigned __int16)__rev16(*(v174 - 1));
        if ( (unsigned __int16)(v173 + 10240) <= 0x7FFu )
          goto LABEL_314;
      }
      *(_QWORD *)v152 = v170;
      v11 = 7;
      if ( !v149 )
        goto LABEL_318;
LABEL_326:
      v77 = v329;
      v9 = v330;
      *v149 = v8;
      goto LABEL_334;
    }
    v8 = (unsigned __int64)v80;
    v170 = (unsigned __int16 *)v147;
    v11 = 4;
LABEL_317:
    *(_QWORD *)v152 = v170;
    if ( v149 )
      goto LABEL_326;
LABEL_318:
    v176 = *((_DWORD *)v145 + 4);
    ++*((_DWORD *)v145 + 5);
    if ( (v176 & 1) != 0 )
    {
      v188 = *v150;
      *v145 = v8;
      *v150 = v188 + v325;
      goto LABEL_329;
    }
    v316 = v161;
    v317 = v169;
    if ( v8 <= (unsigned __int64)v80 )
      goto LABEL_329;
    v326 = *v145;
    v177 = v318(v319, v320, v321, v8, 0, v150, 0, v323);
    v161 = v316;
    if ( v177 == 4 )
    {
      if ( (_DWORD)v11 != 5 )
        goto LABEL_329;
LABEL_323:
      v77 = *(unsigned __int16 **)v152;
      v80 = (unsigned __int16 *)*v145;
      v169 = v325;
      v148 = *((_DWORD *)v145 + 4);
      continue;
    }
    break;
  }
  v178 = v326;
  if ( v326 == v8 )
    goto LABEL_322;
  v180 = 0;
  if ( v150 )
    v180 = *v150;
  if ( v180 + v325 == v317 )
  {
    *(_QWORD *)v152 -= (__int64)(v8 - v326) / 2;
    goto LABEL_322;
  }
  v181 = *((_DWORD *)v145 + 4);
  if ( v147 == (char *)v77 )
  {
    *(_QWORD *)v152 = v147;
    if ( (unsigned __int16 *)v178 == v80 )
    {
LABEL_379:
      sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_ucs2reverse_internal");
      goto LABEL_380;
    }
    goto LABEL_352;
  }
  v182 = v77 + 1;
  if ( v147 < (char *)v77 + 2 )
  {
    *(_QWORD *)v152 = v77;
    if ( (unsigned __int16 *)v178 == v80 )
      goto LABEL_379;
LABEL_352:
    v175 = (__int64 *)sub_41F250(
                        "outbuf == outerr",
                        "../iconv/skeleton.c",
                        594,
                        "__gconv_transform_ucs2reverse_internal");
LABEL_353:
    ++*v175;
    if ( v170 != (unsigned __int16 *)v147 )
      goto LABEL_311;
LABEL_354:
    v11 = 4;
    goto LABEL_317;
  }
  v183 = v80 + 2;
  v184 = v80;
  if ( v326 < (unsigned __int64)(v80 + 2) )
  {
    *(_QWORD *)v152 = v77;
    if ( (unsigned __int16 *)v178 == v80 )
      goto LABEL_369;
    goto LABEL_352;
  }
  v185 = v77;
  v186 = (unsigned __int16)__rev16(*v77);
  if ( (unsigned __int16)(v186 + 10240) > 0x7FFu )
  {
LABEL_343:
    *(_DWORD *)v184 = v186;
    v184 = v183;
    goto LABEL_344;
  }
  while ( 1 )
  {
    if ( !v322 || (v181 & 2) == 0 )
    {
      v182 = v185;
LABEL_351:
      *(_QWORD *)v152 = v182;
      if ( (unsigned __int16 *)v178 == v184 )
        goto LABEL_379;
      goto LABEL_352;
    }
    ++*v322;
LABEL_344:
    if ( v147 == (char *)v182 )
      goto LABEL_351;
    v187 = v182 + 1;
    if ( v147 < (char *)v182 + 2 )
      goto LABEL_351;
    v183 = v184 + 2;
    if ( v178 < (unsigned __int64)(v184 + 2) )
      break;
    ++v182;
    v185 = v187 - 1;
    v186 = (unsigned __int16)__rev16(*(v187 - 1));
    if ( (unsigned __int16)(v186 + 10240) > 0x7FFu )
      goto LABEL_343;
  }
  *(_QWORD *)v152 = v182;
  if ( (unsigned __int16 *)v178 != v184 )
    goto LABEL_352;
  if ( (unsigned __int16 *)v178 == v80 )
LABEL_369:
    --*((_DWORD *)v145 + 5);
LABEL_322:
  if ( !v177 )
    goto LABEL_323;
  v11 = v177;
LABEL_329:
  if ( v323 )
    v179 = (_DWORD)v11 == 7;
  else
    v179 = 0;
  if ( !v179 )
  {
    v77 = v329;
    v9 = v330;
    goto LABEL_334;
  }
LABEL_380:
  v193 = *(char **)v152;
  v194 = (unsigned __int64)&v147[-*(_QWORD *)v152];
  if ( v194 <= 4 )
  {
    v195 = (unsigned int *)v145[4];
    v196 = 0;
    if ( v194 )
    {
      do
      {
        *((_BYTE *)v195 + v196 + 4) = v193[v196];
        ++v196;
      }
      while ( v194 != v196 );
      v324 = v194;
    }
    v197 = v324;
    v77 = v329;
    v9 = v330;
    v198 = *v195 & 0xFFFFFFF8;
    *(_QWORD *)v152 = v147;
    *v195 = v198 | v197;
    goto LABEL_334;
  }
LABEL_392:
  sub_41F250(
    "cnt_after <= sizeof (data->__statep->__value.__wchb)",
    "../iconv/skeleton.c",
    647,
    "__gconv_transform_ucs2reverse_internal");
LABEL_393:
  sub_41F250("inptr - bytebuf > (state->__count & 7)", "../iconv/loop.c", 385, "ucs2reverse_internal_loop_single");
LABEL_394:
  sub_41F250(
    "inlen_after <= sizeof (state->__value.__wchb)",
    "../iconv/loop.c",
    338,
    "ucs2reverse_internal_loop_single");
LABEL_395:
  v329 = v77;
  v330 = v9;
  sub_412340();
LABEL_396:
  sub_41F250(
    "(state->__count & 7) <= sizeof (state->__value)",
    "../iconv/loop.c",
    309,
    "ucs2reverse_internal_loop_single",
    v165);
LABEL_397:
  v205 = sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_ucs2reverse_internal");
  v206 = v199 + 48;
  v304 = v328;
  v305 = v13;
  v207 = v201;
  v208 = *(_DWORD *)(v199 + 16);
  v306 = v8;
  v307 = v149;
  v209 = v203;
  v211 = v210;
  v308 = v77;
  v309 = v9;
  v212 = (char *)v199;
  v213 = v205 + 104;
  v310 = v150;
  v311 = v80;
  v214 = 0;
  v215 = v202;
  v314 = v147;
  v315 = v145;
  v216 = v200;
  v303 = qword_48DD60;
  if ( (v208 & 1) == 0 )
  {
    v214 = *(_QWORD *)(v205 + 144);
    if ( *(_QWORD *)(v205 + 104) )
      v214 ^= qword_48DD68;
  }
  if ( v203 )
  {
    if ( v201 )
      goto LABEL_555;
    **(_QWORD **)(v199 + 32) = 0;
    if ( (*(_DWORD *)(v199 + 16) & 1) == 0 )
    {
      if ( v303 == qword_48DD60 )
        __asm { BR              X16 }
      goto LABEL_562;
    }
LABEL_497:
    LODWORD(v147) = 0;
    goto LABEL_445;
  }
  v312 = v11;
  v313 = v152;
  if ( v201 )
    v217 = v201;
  else
    v217 = (char **)v199;
  v218 = &v297;
  v11 = *(_QWORD *)(v199 + 8);
  if ( !v202 )
    v218 = 0;
  v150 = *v217;
  v297 = 0;
  if ( v204 )
  {
    v152 = *(_QWORD *)(v199 + 32);
    v219 = *(_DWORD *)v152 & 7;
    if ( v219 )
    {
      if ( v201 )
        goto LABEL_557;
      v220 = *v200;
      v299 = *v216;
      v300 = (char *)v150;
      if ( v219 > 4 )
      {
        sub_41F250(
          "(state->__count & 7) <= sizeof (state->__value)",
          "../iconv/loop.c",
          309,
          "internal_ucs2reverse_loop_single");
      }
      else
      {
        v221 = &v301;
        v222 = v152 + 4;
        v223 = &v301;
        v224 = 0;
        do
        {
          v225 = *(_BYTE *)(v222 + v224++);
          *(_BYTE *)v223 = v225;
          v223 = (unsigned int *)((char *)v223 + 1);
        }
        while ( v224 < (*(_DWORD *)v152 & 7u) );
        if ( v211 >= (unsigned __int64)v220 - v224 + 4 )
        {
          v226 = (unsigned int *)((char *)v220 + 1);
          if ( v11 < (unsigned __int64)v150 + 2 )
          {
LABEL_499:
            v11 = v312;
            v152 = v313;
            LODWORD(v147) = 5;
            goto LABEL_445;
          }
          do
          {
            v227 = v224++;
            v299 = v226;
            v228 = v224 <= 3 && v211 > (unsigned __int64)v226;
            v302[v224 - 5] = *((_BYTE *)v226 - 1);
            v226 = (unsigned int *)((char *)v226 + 1);
          }
          while ( v228 );
          v299 = &v301;
          if ( v301 > 0xFFFF )
          {
            if ( v301 >> 7 == 7168 )
            {
              v299 = (unsigned int *)v302;
              goto LABEL_421;
            }
            if ( v218 )
            {
              if ( (v208 & 8) != 0 )
                goto LABEL_539;
              if ( (v208 & 2) != 0 )
              {
                v264 = *v218;
                v265 = (unsigned int *)v302;
                v299 = (unsigned int *)v302;
                *v218 = v264 + 1;
                goto LABEL_524;
              }
            }
          }
          else
          {
            if ( v301 - 55296 > 0x7FF )
            {
              *(_WORD *)v150 = __rev16(v301);
              v299 = (unsigned int *)v302;
              v300 = (char *)v150 + 2;
LABEL_421:
              v229 = 4;
              goto LABEL_422;
            }
            if ( v218 && (v208 & 2) != 0 )
            {
              v267 = *v218;
              v299 = (unsigned int *)v302;
              *v218 = v267 + 1;
              goto LABEL_421;
            }
          }
LABEL_526:
          v11 = v312;
          v152 = v313;
          LODWORD(v147) = 6;
          goto LABEL_445;
        }
        *v216 = (unsigned int *)v211;
        v263 = v211 - (_QWORD)v220 + v224;
        if ( v263 > 4 )
        {
          sub_41F250(
            "inlen_after <= sizeof (state->__value.__wchb)",
            "../iconv/loop.c",
            338,
            "internal_ucs2reverse_loop_single");
          goto LABEL_554;
        }
        if ( v224 < v263 )
        {
          do
          {
            v220 = (unsigned int *)((char *)v220 + 1);
            v299 = v220;
            *(_BYTE *)(v222 + v224++) = *((_BYTE *)v220 - 1);
          }
          while ( v263 != v224 );
        }
LABEL_518:
        v11 = v312;
        v152 = v313;
        LODWORD(v147) = 7;
LABEL_445:
        if ( v303 == qword_48DD60 )
          return (unsigned int)v147;
      }
LABEL_562:
      v312 = v11;
      v313 = v152;
      sub_412340();
      goto LABEL_563;
    }
  }
  v221 = *v200;
  v231 = 0;
LABEL_425:
  while ( 2 )
  {
    v147 = v215;
    v215 = v212;
    v212 = (char *)v150;
    v150 = v216;
    v216 = (unsigned int **)v11;
    v11 = v231;
    v282 = v204;
    v232 = v208;
    v152 = 0xFFFF;
    v276 = v207;
    v284 = v218;
    v286 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v214;
    v288 = v213;
    v290 = v206;
    v293 = v205;
    while ( 2 )
    {
      if ( v147 )
        v11 += *(_QWORD *)v147;
      v299 = v221;
      v300 = v212;
      v233 = v212;
      if ( (unsigned int *)v211 == v221 )
      {
        v234 = (unsigned int *)v211;
        v224 = 4;
LABEL_436:
        v238 = v276;
        *v150 = v234;
        if ( !v276 )
          goto LABEL_437;
LABEL_444:
        LODWORD(v147) = v224;
        v11 = v312;
        v152 = v313;
        *v238 = v233;
        goto LABEL_445;
      }
      v234 = v221;
      v224 = 4;
      while ( 2 )
      {
        v235 = v234 + 1;
        if ( v211 >= (unsigned __int64)(v234 + 1) )
        {
          v236 = v233 + 2;
          if ( v216 < (unsigned int **)(v233 + 2) )
          {
            v234 = v299;
            v224 = 5;
            goto LABEL_436;
          }
          v237 = *v234;
          if ( *v234 <= 0xFFFF )
          {
            if ( v237 - 55296 <= 0x7FF )
            {
              if ( !v284 || (v232 & 2) == 0 )
              {
LABEL_458:
                v234 = v299;
                v224 = 6;
                goto LABEL_436;
              }
              ++v234;
              v299 = v235;
              ++*v284;
            }
            else
            {
              ++v234;
              *(_WORD *)v233 = __rev16(v237);
              v233 += 2;
              v299 = v235;
              v300 = v236;
            }
            goto LABEL_435;
          }
          if ( v237 >> 7 == 7168 )
          {
            ++v234;
            v299 = v235;
          }
          else
          {
            if ( !v284 )
              goto LABEL_458;
            if ( (*((_DWORD *)v215 + 4) & 8) != 0 )
            {
              v279 = v232;
              v255 = sub_41D410(v293, v215);
              v224 = v255;
              v232 = v279;
              if ( v255 == 6 )
              {
                v233 = v300;
                goto LABEL_451;
              }
              v234 = v299;
              v233 = v300;
              if ( v255 == 5 )
                goto LABEL_436;
            }
            else
            {
LABEL_451:
              v234 = v299;
              if ( (v232 & 2) == 0 )
              {
                v224 = 6;
                goto LABEL_436;
              }
              v234 = v299 + 1;
              v224 = 6;
              ++v299;
              ++*v284;
            }
          }
LABEL_435:
          if ( (unsigned int *)v211 == v234 )
            goto LABEL_436;
          continue;
        }
        break;
      }
      v238 = v276;
      v224 = 7;
      *v150 = v299;
      if ( v276 )
        goto LABEL_444;
LABEL_437:
      v239 = *((_DWORD *)v215 + 4);
      ++*((_DWORD *)v215 + 5);
      if ( (v239 & 1) != 0 )
      {
        v212 = v215;
        v215 = v147;
        v216 = (unsigned int **)v150;
        v251 = *(_QWORD *)v147;
        LODWORD(v147) = v224;
        v252 = v282;
        v253 = v251 + v297;
        *(_QWORD *)v212 = v233;
        *(_QWORD *)v215 = v253;
        goto LABEL_476;
      }
      if ( v212 >= v233 )
      {
        v240 = v224;
LABEL_441:
        if ( !v240 )
        {
LABEL_442:
          v221 = (unsigned int *)*v150;
          v212 = *(char **)v215;
          v11 = v297;
          v232 = *((_DWORD *)v215 + 4);
          continue;
        }
        v252 = v282;
        v212 = v215;
        v216 = (unsigned int **)v150;
        LODWORD(v147) = v240;
LABEL_476:
        if ( v252 )
          v254 = (_DWORD)v147 == 7;
        else
          v254 = 0;
        if ( !v254 )
        {
LABEL_480:
          v11 = v312;
          v152 = v313;
          goto LABEL_445;
        }
        v257 = *v216;
        v258 = v211 - (_QWORD)*v216;
        if ( v258 <= 4 )
        {
          v259 = (unsigned int *)*((_QWORD *)v212 + 4);
          v260 = 0;
          if ( v258 )
          {
            do
            {
              *((_BYTE *)v259 + v260 + 4) = *((_BYTE *)v257 + v260);
              ++v260;
            }
            while ( v258 != v260 );
            v209 = v258;
          }
          v11 = v312;
          v152 = v313;
          v261 = *v259 & 0xFFFFFFF8;
          *v216 = (unsigned int *)v211;
          *v259 = v261 | v209;
          goto LABEL_445;
        }
LABEL_554:
        sub_41F250(
          "cnt_after <= sizeof (data->__statep->__value.__wchb)",
          "../iconv/skeleton.c",
          647,
          "__gconv_transform_internal_ucs2reverse");
LABEL_555:
        v312 = v11;
        v313 = v152;
        sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_ucs2reverse");
LABEL_556:
        sub_41F250("inptr - bytebuf > (state->__count & 7)", "../iconv/loop.c", 385, "internal_ucs2reverse_loop_single");
LABEL_557:
        sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs2reverse");
LABEL_558:
        sub_41F250("inend != &bytebuf[MAX_NEEDED_INPUT]", "../iconv/loop.c", 403, "internal_ucs2reverse_loop_single");
LABEL_559:
        if ( (_DWORD)v147 )
          goto LABEL_480;
        v221 = *v216;
        v231 = v297;
        v208 = *((_DWORD *)v212 + 4);
        goto LABEL_425;
      }
      break;
    }
    v298 = *(_QWORD *)v215;
    v278 = v233;
    v240 = v286(v288, v290, &v298, v233, 0, v147, 0, v282);
    if ( v240 == 4 )
    {
      v240 = v224;
      if ( (_DWORD)v224 == 5 )
        goto LABEL_442;
      goto LABEL_441;
    }
    v241 = v298;
    if ( (char *)v298 == v278 )
      goto LABEL_441;
    v242 = 0;
    if ( v147 )
      v242 = *(_QWORD *)v147;
    if ( v242 + v297 == v11 )
    {
      *v150 -= 2LL * (_QWORD)&v278[-v298];
      goto LABEL_441;
    }
    v243 = *((_DWORD *)v215 + 4);
    *v150 = v221;
    v299 = v221;
    v300 = v212;
    if ( (unsigned int *)v211 == v221 )
    {
      if ( (char *)v241 == v212 )
        goto LABEL_538;
LABEL_496:
      sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs2reverse");
      goto LABEL_497;
    }
    v244 = v212;
    v245 = v240;
    v246 = 4;
    v11 = 0xFFFF;
    v224 = 4294912000LL;
    do
    {
      v247 = v221 + 1;
      if ( v211 < (unsigned __int64)(v221 + 1) )
      {
LABEL_494:
        v221 = v299;
        v216 = (unsigned int **)v150;
LABEL_495:
        v256 = (char *)v298;
        *v216 = v221;
        if ( v256 == v244 )
          goto LABEL_538;
        goto LABEL_496;
      }
      v248 = v244 + 2;
      if ( v241 < (unsigned __int64)(v244 + 2) )
      {
        v262 = (char *)v298;
        *v150 = v299;
        v240 = v245;
        if ( v262 != v244 )
          goto LABEL_496;
        goto LABEL_473;
      }
      v249 = *v221;
      if ( *v221 <= 0xFFFF )
      {
        if ( v249 - 55296 <= 0x7FF )
        {
          if ( !v284 || (v243 & 2) == 0 )
            goto LABEL_494;
          ++v221;
          v299 = v247;
          ++*v284;
        }
        else
        {
          ++v221;
          *(_WORD *)v244 = __rev16(v249);
          v244 += 2;
          v299 = v247;
          v300 = v248;
        }
        continue;
      }
      if ( v249 >> 7 == 7168 )
      {
        ++v221;
        v299 = v247;
        continue;
      }
      if ( !v284 )
        goto LABEL_494;
      if ( (*((_DWORD *)v215 + 4) & 8) != 0 )
      {
        v280 = v241;
        v294 = v245;
        v296 = v243;
        v268 = sub_41D410(v293, v215);
        v246 = v268;
        v241 = v280;
        v245 = v294;
        v243 = v296;
        if ( v268 != 6 )
        {
          v221 = v299;
          v244 = v300;
          if ( v268 == 5 )
          {
            v269 = (char *)v298;
            *v150 = v299;
            v240 = v294;
            if ( v269 != v244 )
              goto LABEL_496;
            goto LABEL_473;
          }
          continue;
        }
        v244 = v300;
      }
      if ( (v243 & 2) == 0 )
      {
        v216 = (unsigned int **)v150;
        v221 = v299;
        goto LABEL_495;
      }
      v221 = v299 + 1;
      v246 = 6;
      ++v299;
      ++*v284;
    }
    while ( (unsigned int *)v211 != v221 );
    v250 = (char *)v298;
    *v150 = v211;
    v240 = v245;
    if ( v250 != v244 )
      goto LABEL_496;
    if ( v246 == 5 )
    {
LABEL_473:
      if ( v244 == v212 )
        --*((_DWORD *)v215 + 5);
      goto LABEL_441;
    }
LABEL_538:
    sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_ucs2reverse");
LABEL_539:
    v277 = v205;
    v281 = v218;
    v283 = v208;
    v285 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v214;
    v287 = v213;
    v289 = v206;
    v291 = v227;
    v292 = v207;
    v295 = v204;
    v270 = sub_41D410(v205, v212);
    v205 = v277;
    v218 = v281;
    LODWORD(v147) = v270;
    v214 = (unsigned __int64)v285;
    v213 = v287;
    v53 = v270 == 6;
    v206 = v289;
    v207 = v292;
    v265 = v299;
    v204 = v295;
    if ( v53 )
    {
      if ( (v283 & 2) == 0 )
      {
        if ( v299 == v221 )
          goto LABEL_526;
        v229 = (char *)v299 - (char *)v221;
LABEL_422:
        v230 = *(_DWORD *)v152;
        if ( (*(_DWORD *)v152 & 7LL) < v229 )
        {
          v208 = *((_DWORD *)v212 + 4);
          v221 = (unsigned int *)((char *)*v216 + v229 - (v230 & 7));
          *v216 = v221;
          v231 = v297;
          v150 = v300;
          *(_DWORD *)v152 = v230 & 0xFFFFFFF8;
          continue;
        }
        goto LABEL_556;
      }
      v266 = *v281;
      v265 = ++v299;
      *v281 = v266 + 1;
      if ( v265 == v221 )
        goto LABEL_526;
LABEL_524:
      v229 = (char *)v265 - (char *)v221;
      goto LABEL_422;
    }
    break;
  }
  if ( (_DWORD)v147 == 5 )
  {
    if ( v299 == v221 )
      goto LABEL_499;
    goto LABEL_524;
  }
  if ( v299 != v221 )
    goto LABEL_524;
  if ( (_DWORD)v147 != 7 )
    goto LABEL_559;
  if ( v224 == 4 )
    goto LABEL_558;
  v271 = *(_DWORD *)v152 & 0xFFFFFFF8;
  *v216 = (unsigned int *)((char *)*v216 + v224 - (*(_DWORD *)v152 & 7LL));
  if ( (__int64)v224 > v271 )
  {
    if ( v224 <= 4 )
    {
      v272 = 1;
      *(_DWORD *)v152 = v271 | v224;
      v273 = v152 + 3;
      do
      {
        *(_BYTE *)(v273 + v272) = *((_BYTE *)v221 + v272 - 1);
        ++v272;
      }
      while ( v291 + 2 != v272 );
      goto LABEL_518;
    }
LABEL_563:
    sub_41F250(
      "inend - inptr <= sizeof (state->__value.__wchb)",
      "../iconv/loop.c",
      414,
      "internal_ucs2reverse_loop_single");
  }
  v274 = sub_41F250("inend - inptr > (state->__count & ~7)", "../iconv/loop.c", 413, "internal_ucs2reverse_loop_single");
  return sub_41D410(v274, v275);
}
