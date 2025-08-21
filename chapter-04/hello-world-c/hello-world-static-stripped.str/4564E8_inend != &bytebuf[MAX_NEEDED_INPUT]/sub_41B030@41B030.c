__int64 __fastcall sub_41B030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int64 *a6,
        unsigned int a7,
        unsigned int a8,
        long double a9)
{
  unsigned __int64 v9; // x19
  unsigned __int64 v10; // x22
  unsigned __int16 *v11; // x24
  unsigned __int64 v12; // x25
  __int64 v13; // x26
  __int64 v14; // x30
  int v17; // w16
  __int64 v18; // x2
  unsigned __int16 *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x0
  unsigned __int64 v24; // x1
  unsigned __int64 *v25; // x0
  __int64 *v26; // x1
  unsigned __int64 v27; // x9
  unsigned int *v28; // x6
  unsigned int v29; // w0
  int v30; // w1
  char *v31; // x2
  unsigned __int64 v32; // x7
  unsigned __int64 v33; // x4
  int v34; // w3
  __int64 v35; // x14
  unsigned __int16 *v36; // x0
  unsigned __int64 v37; // x2
  int v38; // w3
  unsigned __int16 *v39; // x4
  unsigned __int16 *v40; // x1
  int v41; // w1
  unsigned int v42; // w0
  unsigned __int64 v43; // x1
  __int64 v45; // x2
  int v46; // w14
  unsigned __int16 *v47; // x2
  _DWORD *v48; // x6
  _DWORD *v49; // x4
  int v50; // w7
  unsigned __int16 *v51; // x10
  unsigned __int16 *v52; // x3
  __int64 v53; // x0
  bool v54; // zf
  unsigned __int64 v55; // x3
  char *v56; // x1
  unsigned int *v57; // x4
  char *v58; // x0
  unsigned int v59; // w1
  unsigned int v60; // w0
  char *v61; // x1
  char *v62; // x0
  int *v63; // x6
  unsigned __int8 *v64; // x2
  _QWORD *v65; // x0
  unsigned __int16 *v66; // x1
  _QWORD *v67; // x2
  unsigned __int16 **v68; // x4
  unsigned __int16 *v69; // x5
  int v70; // w6
  unsigned int v71; // w7
  long double v72; // q0
  unsigned __int16 **v73; // x13
  __int64 (__fastcall *v74)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double); // x15
  unsigned __int16 **v75; // x10
  int v76; // w11
  int v77; // w18
  unsigned __int64 v78; // x3
  unsigned __int64 v79; // x20
  unsigned __int16 *v80; // x21
  unsigned __int64 *v81; // x14
  unsigned __int64 v82; // x12
  unsigned __int16 *v83; // x24
  _QWORD *v84; // x28
  unsigned __int64 *v85; // x6
  unsigned __int16 **v86; // x0
  int v87; // w0
  __int64 v88; // x2
  __int64 v89; // x3
  unsigned int *v90; // x1
  char v91; // w0
  unsigned int *v92; // x0
  unsigned __int64 v93; // x8
  bool v94; // cc
  __int64 v95; // x0
  int v96; // w1
  unsigned int *v97; // x22
  unsigned __int64 v98; // x9
  unsigned __int16 *v99; // x26
  int v100; // w7
  unsigned __int16 *v101; // x3
  unsigned int *v102; // x0
  unsigned int *v103; // x2
  unsigned __int16 *v104; // x5
  unsigned int v105; // w6
  unsigned __int16 **v106; // x0
  int v107; // w1
  unsigned int v108; // w0
  unsigned __int64 v109; // x10
  __int64 v110; // x2
  int v111; // w15
  unsigned __int16 *v112; // x2
  unsigned int v113; // w7
  int v114; // w16
  unsigned int *v115; // x0
  unsigned __int16 *v116; // x3
  unsigned int v117; // w5
  unsigned __int16 *v118; // x1
  __int64 v119; // x0
  int v120; // w7
  __int64 v121; // x0
  bool v122; // zf
  unsigned int *v123; // x3
  unsigned __int64 v124; // x1
  unsigned int *v125; // x4
  __int64 v126; // x0
  unsigned int v127; // w0
  unsigned int v128; // w0
  unsigned __int16 *v129; // x0
  unsigned __int16 *v130; // x1
  unsigned __int64 v131; // x0
  unsigned int *v132; // x2
  unsigned __int64 v133; // x1
  unsigned int *v134; // x0
  unsigned __int64 v135; // x0
  int v136; // w0
  unsigned __int16 *v137; // x1
  unsigned int v138; // w0
  __int64 (__fastcall *v139)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double); // x8
  signed int v140; // w0
  __int64 v141; // x8
  __int64 v142; // x1
  unsigned __int64 v143; // x1
  __int64 v144; // x0
  unsigned __int64 *v145; // x4
  _QWORD *v146; // x5
  long double v147; // q0
  unsigned __int64 *v148; // x1
  unsigned __int64 *v149; // x28
  char *v150; // x3
  char *v151; // x27
  int v152; // w15
  unsigned __int64 *v153; // x20
  _QWORD *v154; // x23
  __int64 v155; // x2
  __int64 v156; // x26
  unsigned __int16 **v157; // x2
  __int64 v158; // x1
  int v159; // w6
  unsigned int v160; // w7
  __int64 v161; // x0
  unsigned __int64 v162; // x1
  unsigned __int64 *v163; // x0
  __int64 *v164; // x1
  unsigned __int64 v165; // x9
  unsigned __int16 *v166; // x1
  int v167; // w0
  int v168; // w3
  char *v169; // x4
  unsigned __int8 *v170; // x7
  unsigned __int64 v171; // x6
  int v172; // w2
  __int64 v173; // x13
  unsigned __int16 *v174; // x1
  unsigned __int64 v175; // x3
  unsigned __int16 *v176; // x4
  int v177; // w0
  unsigned __int16 *v178; // x0
  __int64 *v179; // x0
  int v180; // w1
  unsigned int v181; // w0
  unsigned __int64 v182; // x1
  bool v183; // zf
  __int64 v184; // x2
  int v185; // w15
  unsigned __int16 *v186; // x3
  unsigned __int16 *v187; // x7
  unsigned __int16 *v188; // x6
  unsigned __int16 *v189; // x10
  int v190; // w2
  unsigned __int16 *v191; // x2
  __int64 v192; // x0
  unsigned __int64 v193; // x2
  unsigned __int64 v194; // x0
  unsigned __int16 *v195; // x1
  unsigned __int8 *v196; // x4
  char *v197; // x3
  unsigned __int64 v198; // x1
  unsigned int *v199; // x4
  __int64 v200; // x0
  int v201; // w1
  unsigned int v202; // w0
  __int64 v203; // x0
  __int64 v204; // x1
  unsigned int **v205; // x2
  char **v206; // x4
  char *v207; // x5
  int v208; // w6
  unsigned int v209; // w7
  long double v210; // q0
  __int64 v211; // x13
  __int64 v212; // x15
  char **v213; // x10
  int v214; // w11
  int v215; // w18
  unsigned __int64 v216; // x3
  unsigned __int64 v217; // x20
  char *v218; // x21
  __int64 v219; // x14
  unsigned __int64 v220; // x12
  char *v221; // x24
  unsigned int **v222; // x28
  char **v223; // x0
  unsigned __int64 *v224; // x6
  int v225; // w0
  unsigned int *v226; // x2
  unsigned int *v227; // x22
  __int64 v228; // x3
  unsigned int *v229; // x1
  unsigned __int64 v230; // x19
  char v231; // w0
  unsigned int *v232; // x0
  unsigned __int64 v233; // x8
  bool v234; // cc
  __int64 v235; // x0
  int v236; // w1
  unsigned __int64 v237; // x9
  int v238; // w7
  char *v239; // x3
  unsigned int *v240; // x1
  unsigned int *v241; // x5
  char *v242; // x6
  unsigned int v243; // w2
  char **v244; // x0
  int v245; // w1
  int v246; // w0
  unsigned __int64 v247; // x10
  __int64 v248; // x2
  int v249; // w15
  char *v250; // x3
  int v251; // w7
  int v252; // w16
  unsigned int *v253; // x2
  char *v254; // x5
  unsigned int v255; // w0
  char *v256; // x1
  __int64 v257; // x0
  unsigned int v258; // w7
  __int64 v259; // x0
  bool v260; // zf
  unsigned int v261; // w0
  char *v262; // x0
  unsigned int *v263; // x3
  unsigned __int64 v264; // x1
  unsigned int *v265; // x4
  __int64 v266; // x0
  unsigned int v267; // w0
  char *v268; // x1
  unsigned __int64 v269; // x0
  unsigned __int64 v270; // x1
  unsigned int *v271; // x0
  unsigned __int64 v272; // x1
  unsigned __int64 v273; // x0
  int v274; // w0
  char *v275; // x1
  int v276; // w0
  signed int v277; // w0
  __int64 v278; // x1
  __int64 v279; // x26
  __int64 v280; // x0
  __int64 v281; // x1
  char **v282; // [xsp+0h] [xbp-2E0h]
  __int64 v283; // [xsp+0h] [xbp-2E0h]
  char *v284; // [xsp+8h] [xbp-2D8h]
  int v285; // [xsp+8h] [xbp-2D8h]
  unsigned __int64 v286; // [xsp+8h] [xbp-2D8h]
  unsigned __int64 *v287; // [xsp+8h] [xbp-2D8h]
  unsigned int v288; // [xsp+14h] [xbp-2CCh]
  char v289; // [xsp+14h] [xbp-2CCh]
  unsigned __int64 *v290; // [xsp+18h] [xbp-2C8h]
  __int64 (__fastcall *v291)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [xsp+18h] [xbp-2C8h]
  __int64 (__fastcall *v292)(__int64, __int64, unsigned __int64 *, char *, _QWORD, char *, _QWORD, _QWORD); // [xsp+20h] [xbp-2C0h]
  __int64 v293; // [xsp+20h] [xbp-2C0h]
  __int64 v294; // [xsp+28h] [xbp-2B8h]
  __int64 v295; // [xsp+28h] [xbp-2B8h]
  __int64 v296; // [xsp+30h] [xbp-2B0h]
  unsigned __int64 v297; // [xsp+30h] [xbp-2B0h]
  char **v298; // [xsp+38h] [xbp-2A8h]
  __int64 v299; // [xsp+40h] [xbp-2A0h]
  int v300; // [xsp+48h] [xbp-298h]
  unsigned int v301; // [xsp+48h] [xbp-298h]
  int v302; // [xsp+4Ch] [xbp-294h]
  unsigned __int64 v303; // [xsp+50h] [xbp-290h] BYREF
  unsigned __int64 v304; // [xsp+58h] [xbp-288h] BYREF
  unsigned int *v305; // [xsp+60h] [xbp-280h]
  char *v306; // [xsp+68h] [xbp-278h]
  unsigned int v307; // [xsp+70h] [xbp-270h] BYREF
  _BYTE v308[4]; // [xsp+74h] [xbp-26Ch] BYREF
  __int64 v309; // [xsp+78h] [xbp-268h]
  _QWORD *v310; // [xsp+80h] [xbp-260h]
  __int64 v311; // [xsp+88h] [xbp-258h]
  unsigned __int64 v312; // [xsp+90h] [xbp-250h]
  unsigned __int64 *v313; // [xsp+98h] [xbp-248h]
  unsigned __int16 *v314; // [xsp+A0h] [xbp-240h]
  unsigned __int64 v315; // [xsp+A8h] [xbp-238h]
  _QWORD *v316; // [xsp+B0h] [xbp-230h]
  unsigned __int16 *v317; // [xsp+B8h] [xbp-228h]
  unsigned __int64 v318; // [xsp+C0h] [xbp-220h]
  __int64 v319; // [xsp+C8h] [xbp-218h]
  char *v320; // [xsp+D0h] [xbp-210h]
  unsigned __int64 *v321; // [xsp+D8h] [xbp-208h]
  unsigned __int64 v322; // [xsp+E0h] [xbp-200h]
  __int64 v323; // [xsp+E8h] [xbp-1F8h]
  __int64 (__fastcall *v324)(__int64, unsigned __int16 **, unsigned __int64 *, unsigned __int64, _QWORD, _QWORD *, _QWORD, _QWORD); // [xsp+F0h] [xbp-1F0h]
  __int64 v325; // [xsp+F8h] [xbp-1E8h]
  unsigned __int16 **v326; // [xsp+100h] [xbp-1E0h]
  unsigned __int64 *v327; // [xsp+108h] [xbp-1D8h]
  __int64 *v328; // [xsp+110h] [xbp-1D0h]
  unsigned int v329; // [xsp+118h] [xbp-1C8h]
  int v330; // [xsp+11Ch] [xbp-1C4h]
  __int64 v331; // [xsp+128h] [xbp-1B8h] BYREF
  unsigned __int64 v332; // [xsp+130h] [xbp-1B0h] BYREF
  __int64 v333; // [xsp+138h] [xbp-1A8h]
  _QWORD v334[4]; // [xsp+140h] [xbp-1A0h] BYREF
  unsigned __int16 *v335; // [xsp+160h] [xbp-180h]
  unsigned __int64 v336; // [xsp+168h] [xbp-178h]
  unsigned __int16 *v337; // [xsp+170h] [xbp-170h]
  unsigned __int16 *v338; // [xsp+178h] [xbp-168h]
  unsigned __int64 v339; // [xsp+180h] [xbp-160h]
  __int64 v340; // [xsp+188h] [xbp-158h]
  __int64 v341; // [xsp+190h] [xbp-150h]
  _QWORD *v342; // [xsp+198h] [xbp-148h]
  unsigned __int16 **v343; // [xsp+1A0h] [xbp-140h]
  unsigned __int64 *v344; // [xsp+1A8h] [xbp-138h]
  __int64 (__fastcall *v345)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double); // [xsp+1B0h] [xbp-130h]
  unsigned __int64 *v346; // [xsp+1B8h] [xbp-128h]
  __int64 (__fastcall *v347)(unsigned __int64 *, _QWORD, unsigned __int64 *, unsigned __int16 *, _QWORD, unsigned __int16 *, _QWORD, _QWORD, long double); // [xsp+1C0h] [xbp-120h]
  unsigned __int64 *v348; // [xsp+1C8h] [xbp-118h]
  __int64 (__fastcall *v349)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double); // [xsp+1D0h] [xbp-110h]
  unsigned __int16 **v350; // [xsp+1D8h] [xbp-108h]
  unsigned __int16 **v351; // [xsp+1E0h] [xbp-100h]
  unsigned int v352; // [xsp+1E8h] [xbp-F8h]
  int v353; // [xsp+1ECh] [xbp-F4h]
  unsigned __int64 v354; // [xsp+1F0h] [xbp-F0h] BYREF
  unsigned __int64 v355; // [xsp+1F8h] [xbp-E8h] BYREF
  unsigned int *v356; // [xsp+200h] [xbp-E0h]
  unsigned __int16 *v357; // [xsp+208h] [xbp-D8h]
  unsigned int v358; // [xsp+210h] [xbp-D0h] BYREF
  _BYTE v359[4]; // [xsp+214h] [xbp-CCh] BYREF
  __int64 v360; // [xsp+218h] [xbp-C8h]
  _QWORD v361[12]; // [xsp+220h] [xbp-C0h] BYREF
  unsigned __int64 v362; // [xsp+280h] [xbp-60h]
  __int64 v363; // [xsp+288h] [xbp-58h]
  __int64 (__fastcall *v364)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, long double); // [xsp+290h] [xbp-50h]
  __int64 v365; // [xsp+298h] [xbp-48h]
  __int64 v366; // [xsp+2A0h] [xbp-40h]
  unsigned __int64 *v367; // [xsp+2A8h] [xbp-38h]
  __int64 *v368; // [xsp+2B0h] [xbp-30h]
  unsigned int v369; // [xsp+2B8h] [xbp-28h]
  unsigned int v370; // [xsp+2BCh] [xbp-24h]
  __int64 v371; // [xsp+2C8h] [xbp-18h] BYREF
  unsigned __int64 v372; // [xsp+2D0h] [xbp-10h] BYREF
  __int64 v373; // [xsp+2D8h] [xbp-8h]
  __int64 vars0; // [xsp+2E0h] [xbp+0h] BYREF

  v17 = *(_DWORD *)(a2 + 16);
  v18 = a2 + 48;
  v21 = a5;
  v373 = qword_48DD60;
  v22 = a1 + 104;
  v364 = 0;
  v365 = a1 + 104;
  v366 = v18;
  v369 = a8;
  v370 = a7;
  if ( (v17 & 1) == 0 )
  {
    v23 = *(_QWORD *)(a1 + 104);
    v24 = *(_QWORD *)(v22 + 40);
    v364 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double))v24;
    if ( v23 )
      v364 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double))(v24 ^ qword_48DD68);
  }
  if ( v370 )
  {
    if ( !a5 )
    {
      **(_QWORD **)(a2 + 32) = 0;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
        goto LABEL_91;
      if ( v373 == qword_48DD60 )
        return v364(v365, v366, 0, 0, 0, a6, v370, v369, a9);
      goto LABEL_114;
    }
    goto LABEL_116;
  }
  v10 = (unsigned __int64)&v371;
  if ( a5 )
    v25 = (unsigned __int64 *)a5;
  else
    v25 = (unsigned __int64 *)a2;
  if ( a6 )
    v26 = &v371;
  else
    v26 = 0;
  v27 = *(_QWORD *)(a2 + 8);
  v12 = *v25;
  v368 = v26;
  v371 = 0;
  if ( v369 )
  {
    v28 = *(unsigned int **)(a2 + 32);
    v29 = *v28;
    v30 = *v28 & 7;
    if ( v30 )
    {
      if ( a5 )
        goto LABEL_118;
      v31 = *(char **)a3;
      if ( (*v28 & 7) > 4 )
        goto LABEL_117;
      v32 = *(_QWORD *)a3;
      v33 = 2;
      if ( v30 == 1 )
      {
        v32 = (unsigned __int64)(v31 + 1);
        v33 = 1;
      }
      if ( (unsigned __int64)a4 < v32 )
      {
        *(_QWORD *)a3 = a4;
        v61 = (char *)((char *)a4 - v31 + v33);
        if ( (unsigned __int64)v61 <= 4 )
        {
          if ( v33 < (unsigned __int64)v61 )
          {
            v62 = (char *)v33;
            v63 = (int *)(v28 + 1);
            v64 = (unsigned __int8 *)&v31[-v33];
            do
            {
              v62[(_QWORD)v63] = v62[(_QWORD)v64];
              ++v62;
            }
            while ( v61 != v62 );
          }
          v13 = 7;
          goto LABEL_46;
        }
        goto LABEL_115;
      }
      v13 = 5;
      if ( v27 < v12 + 4 )
        goto LABEL_46;
      v34 = (unsigned __int16)(*((unsigned __int8 *)v28 + 4) | ((unsigned __int8)*v31 << 8));
      if ( (unsigned __int16)(v34 + 10240) <= 0x7FFu )
      {
        if ( !v368 || (v17 & 2) == 0 )
        {
          v13 = 6;
          goto LABEL_46;
        }
        ++*v368;
      }
      else
      {
        *(_DWORD *)v12 = v34;
        v12 += 4LL;
        v29 = *v28;
        v30 = *v28 & 7;
      }
      if ( v30 <= 1 )
      {
        v35 = v371;
        v17 = *(_DWORD *)(a2 + 16);
        v11 = (unsigned __int16 *)&v31[-v30 + 2];
        *(_QWORD *)a3 = v11;
        v10 = 10240;
        *v28 = v29 & 0xFFFFFFF8;
        v367 = &v372;
        goto LABEL_23;
      }
      a9 = sub_41F250(
             "inptr - bytebuf > (state->__count & 7)",
             "../iconv/loop.c",
             385,
             "ucs2_internal_loop_single",
             *(double *)&a9);
LABEL_113:
      sub_41F250(
        "cnt_after <= sizeof (data->__statep->__value.__wchb)",
        "../iconv/skeleton.c",
        647,
        "__gconv_transform_ucs2_internal",
        *(double *)&a9);
      goto LABEL_114;
    }
  }
  v11 = *(unsigned __int16 **)a3;
  v35 = 0;
  v10 = 10240;
  v367 = &v372;
  while ( 1 )
  {
LABEL_23:
    if ( a6 )
      v35 += *a6;
    if ( a4 == v11 )
    {
      v9 = v12;
      v36 = a4;
      v13 = 4;
      goto LABEL_36;
    }
    v36 = v11 + 1;
    if ( v11 + 1 > a4 )
    {
      v9 = v12;
      v36 = v11;
      v13 = 7;
      goto LABEL_36;
    }
    v37 = v12 + 4;
    v9 = v12;
    if ( v12 + 4 > v27 )
    {
      v36 = v11;
      v13 = 5;
      goto LABEL_36;
    }
    v38 = *v11;
    v39 = v11;
    v13 = 4;
    if ( (unsigned __int16)(v38 + 10240) > 0x7FFu )
    {
LABEL_29:
      *(_DWORD *)v9 = v38;
      v9 = v37;
      if ( a4 != v36 )
        goto LABEL_30;
LABEL_36:
      *(_QWORD *)a3 = v36;
      if ( v21 )
        goto LABEL_45;
      goto LABEL_37;
    }
    while ( 1 )
    {
      if ( !v368 || (v17 & 2) == 0 )
      {
        v36 = v39;
        v13 = 6;
        goto LABEL_36;
      }
      v13 = 6;
      ++*v368;
      if ( a4 == v36 )
        goto LABEL_36;
LABEL_30:
      v40 = v36 + 1;
      if ( a4 < v36 + 1 )
        break;
      v37 = v9 + 4;
      if ( v27 < v9 + 4 )
      {
        v13 = 5;
        goto LABEL_36;
      }
      ++v36;
      v39 = v40 - 1;
      v38 = *(v40 - 1);
      if ( (unsigned __int16)(v38 + 10240) > 0x7FFu )
        goto LABEL_29;
    }
    *(_QWORD *)a3 = v36;
    v13 = 7;
    if ( v21 )
    {
LABEL_45:
      *(_QWORD *)v21 = v9;
      goto LABEL_46;
    }
LABEL_37:
    v41 = *(_DWORD *)(a2 + 16);
    ++*(_DWORD *)(a2 + 20);
    if ( (v41 & 1) != 0 )
    {
      v53 = *a6;
      *(_QWORD *)a2 = v9;
      *a6 = v53 + v371;
      goto LABEL_69;
    }
    v363 = v35;
    if ( v9 <= v12 )
    {
      v42 = v13;
      goto LABEL_41;
    }
    v362 = v27;
    v372 = *(_QWORD *)a2;
    v42 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, unsigned __int64, _QWORD, __int64 *, _QWORD, _QWORD))v364)(
            v365,
            v366,
            v367,
            v9,
            0,
            a6,
            0,
            v369);
    v27 = v362;
    if ( v42 != 4 )
      break;
    v42 = v13;
    if ( (_DWORD)v13 != 5 )
      goto LABEL_41;
LABEL_42:
    v11 = *(unsigned __int16 **)a3;
    v12 = *(_QWORD *)a2;
    v35 = v371;
    v17 = *(_DWORD *)(a2 + 16);
  }
  v43 = v372;
  if ( v372 == v9 )
    goto LABEL_41;
  v45 = 0;
  if ( a6 )
    v45 = *a6;
  if ( v45 + v371 == v363 )
  {
    *(_QWORD *)a3 -= (__int64)(v9 - v372) / 2;
    goto LABEL_41;
  }
  v46 = *(_DWORD *)(a2 + 16);
  if ( a4 != v11 )
  {
    v47 = v11 + 1;
    if ( a4 >= v11 + 1 )
    {
      v48 = (_DWORD *)(v12 + 4);
      v49 = (_DWORD *)v12;
      if ( v372 >= v12 + 4 )
      {
        v50 = *v11;
        v51 = v11;
        if ( (unsigned __int16)(v50 + 10240) > 0x7FFu )
        {
LABEL_59:
          *v49 = v50;
          v49 = v48;
          goto LABEL_60;
        }
        while ( 1 )
        {
          if ( !v368 || (v46 & 2) == 0 )
          {
            v47 = v51;
LABEL_89:
            *(_QWORD *)a3 = v47;
            if ( (_DWORD *)v43 == v49 )
              goto LABEL_105;
            goto LABEL_90;
          }
          ++*v368;
LABEL_60:
          if ( a4 == v47 )
          {
            *(_QWORD *)a3 = a4;
            if ( (_DWORD *)v43 == v49 )
              goto LABEL_105;
            goto LABEL_90;
          }
          v52 = v47 + 1;
          if ( a4 < v47 + 1 )
            goto LABEL_89;
          v48 = v49 + 1;
          if ( v43 < (unsigned __int64)(v49 + 1) )
            break;
          ++v47;
          v51 = v52 - 1;
          v50 = *(v52 - 1);
          if ( (unsigned __int16)(v50 + 10240) > 0x7FFu )
            goto LABEL_59;
        }
        *(_QWORD *)a3 = v47;
        if ( (_DWORD *)v43 != v49 )
          goto LABEL_90;
        if ( v43 != v12 )
          goto LABEL_41;
        goto LABEL_94;
      }
LABEL_106:
      *(_QWORD *)a3 = v11;
      if ( v43 != v12 )
        goto LABEL_90;
LABEL_94:
      --*(_DWORD *)(a2 + 20);
LABEL_41:
      if ( !v42 )
        goto LABEL_42;
      v13 = v42;
LABEL_69:
      if ( v369 )
        v54 = (_DWORD)v13 == 7;
      else
        v54 = 0;
      if ( !v54 )
        goto LABEL_46;
      v55 = *(_QWORD *)a3;
      v56 = (char *)a4 - *(_QWORD *)a3;
      if ( (unsigned __int64)v56 <= 4 )
      {
        v57 = *(unsigned int **)(a2 + 32);
        v58 = 0;
        if ( v56 )
        {
          do
          {
            v58[(_QWORD)(v57 + 1)] = v58[v55];
            ++v58;
          }
          while ( v56 != v58 );
          v370 = (unsigned int)v56;
        }
        v59 = v370;
        v60 = *v57 & 0xFFFFFFF8;
        *(_QWORD *)a3 = a4;
        *v57 = v60 | v59;
        goto LABEL_46;
      }
      goto LABEL_113;
    }
    *(_QWORD *)a3 = v11;
    if ( v43 != v12 )
      goto LABEL_90;
LABEL_105:
    a9 = sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_ucs2_internal");
    goto LABEL_106;
  }
  *(_QWORD *)a3 = a4;
  if ( v43 == v12 )
    goto LABEL_105;
LABEL_90:
  sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ucs2_internal");
LABEL_91:
  v13 = 0;
LABEL_46:
  if ( v373 == qword_48DD60 )
    return (unsigned int)v13;
LABEL_114:
  sub_412340();
LABEL_115:
  a9 = sub_41F250("inlen_after <= sizeof (state->__value.__wchb)", "../iconv/loop.c", 338, "ucs2_internal_loop_single");
LABEL_116:
  a9 = sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ucs2_internal", *(double *)&a9);
LABEL_117:
  a9 = sub_41F250(
         "(state->__count & 7) <= sizeof (state->__value)",
         "../iconv/loop.c",
         309,
         "ucs2_internal_loop_single",
         *(double *)&a9);
LABEL_118:
  v72 = sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_ucs2_internal", *(double *)&a9);
  v73 = (unsigned __int16 **)v65;
  v74 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double))(v66 + 24);
  v361[0] = &vars0;
  v361[1] = v14;
  v75 = v68;
  v76 = *((_DWORD *)v66 + 4);
  v361[2] = v9;
  v361[3] = a4;
  v77 = v70;
  v79 = v78;
  v361[4] = a6;
  v361[5] = v10;
  v80 = v66;
  v81 = v65 + 13;
  v361[6] = v21;
  v361[7] = v11;
  v82 = 0;
  v83 = v69;
  v361[8] = v12;
  v361[9] = v13;
  v361[10] = a3;
  v361[11] = a2;
  v84 = v67;
  v360 = qword_48DD60;
  if ( (v76 & 1) == 0 )
  {
    v82 = v65[18];
    if ( v65[13] )
      v82 ^= qword_48DD68;
  }
  if ( v70 )
  {
    if ( v68 )
      goto LABEL_272;
    **((_QWORD **)v66 + 4) = 0;
    if ( (*((_DWORD *)v66 + 4) & 1) == 0 )
    {
      if ( v360 == qword_48DD60 )
        __asm { BR              X16 }
      goto LABEL_280;
    }
LABEL_221:
    v13 = 0;
    goto LABEL_165;
  }
  v85 = &v354;
  if ( v68 )
    v86 = v68;
  else
    v86 = (unsigned __int16 **)v66;
  v12 = *((_QWORD *)v66 + 1);
  if ( !v69 )
    v85 = 0;
  v21 = *v86;
  v354 = 0;
  if ( !v71 || (a3 = *((_QWORD *)v66 + 4), (v87 = *(_DWORD *)a3 & 7) == 0) )
  {
    v97 = (unsigned int *)*v67;
    v98 = 0;
    goto LABEL_146;
  }
  if ( v68 )
  {
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs2", *(double *)&v72);
    goto LABEL_280;
  }
  v88 = *v67;
  v356 = (unsigned int *)*v84;
  v357 = v21;
  if ( v87 > 4 )
  {
    v72 = sub_41F250(
            "(state->__count & 7) <= sizeof (state->__value)",
            "../iconv/loop.c",
            309,
            "internal_ucs2_loop_single",
            *(double *)&v72);
    goto LABEL_276;
  }
  v10 = (unsigned __int64)&v358;
  v89 = a3 + 4;
  v90 = &v358;
  v9 = 0;
  do
  {
    v91 = *(_BYTE *)(v89 + v9++);
    *(_BYTE *)v90 = v91;
    v90 = (unsigned int *)((char *)v90 + 1);
  }
  while ( v9 < (*(_DWORD *)a3 & 7u) );
  if ( v79 < v88 - v9 + 4 )
  {
    *v84 = v79;
    v131 = v79 - v88 + v9;
    if ( v131 <= 4 )
    {
      v132 = (unsigned int *)(v88 + 1);
      if ( v9 < v131 )
      {
        do
        {
          v356 = v132;
          v132 = (unsigned int *)((char *)v132 + 1);
          *(_BYTE *)(v89 + v9++) = *((_BYTE *)v132 - 2);
        }
        while ( v131 != v9 );
      }
      v13 = 7;
      goto LABEL_165;
    }
    v72 = sub_41F250(
            "inlen_after <= sizeof (state->__value.__wchb)",
            "../iconv/loop.c",
            338,
            "internal_ucs2_loop_single",
            *(double *)&v72);
    goto LABEL_271;
  }
  v92 = (unsigned int *)(v88 + 1);
  if ( v12 < (unsigned __int64)(v21 + 1) )
  {
LABEL_223:
    v13 = 5;
    goto LABEL_165;
  }
  do
  {
    v93 = v9++;
    v356 = v92;
    v94 = v9 <= 3 && v79 > (unsigned __int64)v92;
    v359[v9 - 5] = *((_BYTE *)v92 - 1);
    v92 = (unsigned int *)((char *)v92 + 1);
  }
  while ( v94 );
  v356 = &v358;
  if ( v358 <= 0xFFFF )
  {
    if ( v358 - 55296 > 0x7FF )
    {
      *v21 = v358;
      v356 = (unsigned int *)v359;
      v357 = v21 + 1;
      goto LABEL_142;
    }
    if ( v85 && (v76 & 2) != 0 )
    {
      v135 = *v85;
      v356 = (unsigned int *)v359;
      *v85 = v135 + 1;
      goto LABEL_142;
    }
LABEL_246:
    v13 = 6;
    goto LABEL_165;
  }
  if ( v358 >> 7 != 7168 )
  {
    if ( v85 )
    {
      if ( (v76 & 8) != 0 )
        goto LABEL_259;
      if ( (v76 & 2) != 0 )
      {
        v133 = *v85;
        v134 = (unsigned int *)v359;
        v356 = (unsigned int *)v359;
        *v85 = v133 + 1;
        goto LABEL_243;
      }
    }
    goto LABEL_246;
  }
  v356 = (unsigned int *)v359;
LABEL_142:
  v95 = 4;
  while ( 2 )
  {
    v96 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 7LL) >= v95 )
    {
LABEL_273:
      v72 = sub_41F250(
              "inptr - bytebuf > (state->__count & 7)",
              "../iconv/loop.c",
              385,
              "internal_ucs2_loop_single",
              *(double *)&v72);
LABEL_274:
      v143 = *v85;
      v356 = ++v134;
      *v85 = v143 + 1;
LABEL_245:
      if ( v134 == (unsigned int *)v10 )
        goto LABEL_246;
LABEL_243:
      v95 = (__int64)v134 - v10;
      continue;
    }
    break;
  }
  v76 = *((_DWORD *)v80 + 4);
  v97 = (unsigned int *)(*v84 + v95 - (v96 & 7));
  *v84 = v97;
  v98 = v354;
  v21 = v357;
  *(_DWORD *)a3 = v96 & 0xFFFFFFF8;
LABEL_146:
  while ( 2 )
  {
    v99 = v83;
    v83 = v80;
    v80 = v21;
    v21 = (unsigned __int16 *)v84;
    v84 = v97;
    v10 = v12;
    v12 = v98;
    LODWORD(v345) = v71;
    v100 = v76;
    a3 = 0xFFFF;
    v343 = v75;
    v346 = v85;
    v347 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double))v82;
    v348 = v81;
    v349 = v74;
    LODWORD(v350) = v77;
    v351 = v73;
    while ( 2 )
    {
      if ( v99 )
        v12 += *(_QWORD *)v99;
      v356 = (unsigned int *)v84;
      v357 = v80;
      v101 = v80;
      v102 = (unsigned int *)v84;
      v9 = 4;
      if ( v84 == (_QWORD *)v79 )
      {
LABEL_156:
        *(_QWORD *)v21 = v102;
        v106 = v343;
        if ( v343 )
          goto LABEL_164;
        goto LABEL_157;
      }
      while ( 2 )
      {
        v103 = v102 + 1;
        if ( v79 >= (unsigned __int64)(v102 + 1) )
        {
          v104 = v101 + 1;
          if ( v10 < (unsigned __int64)(v101 + 1) )
          {
            v102 = v356;
            v9 = 5;
            goto LABEL_156;
          }
          v105 = *v102;
          if ( *v102 <= 0xFFFF )
          {
            if ( v105 - 55296 <= 0x7FF )
            {
              if ( !v346 || (v100 & 2) == 0 )
              {
LABEL_178:
                v102 = v356;
                v9 = 6;
                goto LABEL_156;
              }
              ++v102;
              v9 = 6;
              v356 = v103;
              ++*v346;
            }
            else
            {
              ++v102;
              *v101++ = v105;
              v356 = v103;
              v357 = v104;
            }
            goto LABEL_155;
          }
          if ( v105 >> 7 == 7168 )
          {
            ++v102;
            v356 = v103;
          }
          else
          {
            if ( !v346 )
              goto LABEL_178;
            if ( (*((_DWORD *)v83 + 4) & 8) != 0 )
            {
              LODWORD(v344) = v100;
              v128 = sub_41D410(v351, v83);
              v9 = v128;
              v100 = (int)v344;
              if ( v128 == 6 )
              {
                v101 = v357;
                goto LABEL_171;
              }
              v102 = v356;
              v101 = v357;
              if ( (_DWORD)v9 == 5 )
                goto LABEL_156;
            }
            else
            {
LABEL_171:
              v102 = v356;
              if ( (v100 & 2) == 0 )
              {
                v9 = 6;
                goto LABEL_156;
              }
              v102 = v356 + 1;
              v9 = 6;
              ++v356;
              ++*v346;
            }
          }
LABEL_155:
          if ( (unsigned int *)v79 == v102 )
            goto LABEL_156;
          continue;
        }
        break;
      }
      *(_QWORD *)v21 = v356;
      v106 = v343;
      v9 = 7;
      if ( v343 )
      {
LABEL_164:
        v13 = (unsigned int)v9;
        *v106 = v101;
LABEL_165:
        if ( v360 == qword_48DD60 )
          return (unsigned int)v13;
LABEL_280:
        sub_412340();
        goto LABEL_281;
      }
LABEL_157:
      v107 = *((_DWORD *)v83 + 4);
      ++*((_DWORD *)v83 + 5);
      if ( (v107 & 1) != 0 )
      {
        v80 = v83;
        v83 = v99;
        v84 = v21;
        v119 = *(_QWORD *)v99;
        v13 = (unsigned int)v9;
        v120 = (int)v345;
        v77 = (int)v350;
        v121 = v119 + v354;
        *(_QWORD *)v80 = v101;
        *(_QWORD *)v83 = v121;
        goto LABEL_196;
      }
      if ( v80 >= v101 )
      {
        v108 = v9;
LABEL_161:
        if ( !v108 )
          goto LABEL_162;
        v120 = (int)v345;
        v80 = v83;
        v77 = (int)v350;
        v84 = v21;
        v13 = v108;
LABEL_196:
        if ( v120 )
          v122 = (_DWORD)v13 == 7;
        else
          v122 = 0;
        if ( !v122 )
          goto LABEL_165;
        v123 = (unsigned int *)*v84;
        v124 = v79 - *v84;
        if ( v124 <= 4 )
        {
          v125 = (unsigned int *)*((_QWORD *)v80 + 4);
          v126 = 0;
          if ( v124 )
          {
            do
            {
              *((_BYTE *)v125 + v126 + 4) = *((_BYTE *)v123 + v126);
              ++v126;
            }
            while ( v124 != v126 );
            v77 = v124;
          }
          v127 = *v125;
          *v84 = v79;
          *v125 = v127 & 0xFFFFFFF8 | v77;
          goto LABEL_165;
        }
LABEL_271:
        v72 = sub_41F250(
                "cnt_after <= sizeof (data->__statep->__value.__wchb)",
                "../iconv/skeleton.c",
                647,
                "__gconv_transform_internal_ucs2",
                *(double *)&v72);
LABEL_272:
        v72 = sub_41F250(
                "outbufstart == NULL",
                "../iconv/skeleton.c",
                350,
                "__gconv_transform_internal_ucs2",
                *(double *)&v72);
        goto LABEL_273;
      }
      v355 = *(_QWORD *)v83;
      v344 = (unsigned __int64 *)v101;
      v108 = v347(v348, v349, &v355, v101, 0, v99, 0, (unsigned int)v345, v72);
      if ( v108 == 4 )
      {
        v108 = v9;
        if ( (_DWORD)v9 == 5 )
        {
LABEL_162:
          v84 = *(_QWORD **)v21;
          v80 = *(unsigned __int16 **)v83;
          v12 = v354;
          v100 = *((_DWORD *)v83 + 4);
          continue;
        }
        goto LABEL_161;
      }
      break;
    }
    v109 = v355;
    if ( (unsigned __int64 *)v355 == v344 )
      goto LABEL_161;
    v110 = 0;
    if ( v99 )
      v110 = *(_QWORD *)v99;
    if ( v110 + v354 == v12 )
    {
      *(_QWORD *)v21 -= 2 * ((_QWORD)v344 - v355);
      goto LABEL_161;
    }
    v111 = *((_DWORD *)v83 + 4);
    *(_QWORD *)v21 = v84;
    v356 = (unsigned int *)v84;
    v357 = v80;
    if ( v84 == (_QWORD *)v79 )
    {
      if ( (unsigned __int16 *)v109 == v80 )
        goto LABEL_258;
LABEL_220:
      sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs2");
      goto LABEL_221;
    }
    v112 = v80;
    v113 = v108;
    v114 = 4;
    v12 = 0xFFFF;
    v9 = 4294912000LL;
    do
    {
      v115 = (unsigned int *)v84 + 1;
      if ( v79 < (unsigned __int64)v84 + 4 )
      {
LABEL_218:
        v10 = (unsigned __int64)v356;
        v84 = v21;
LABEL_219:
        v129 = (unsigned __int16 *)v355;
        *v84 = v10;
        if ( v129 == v112 )
          goto LABEL_258;
        goto LABEL_220;
      }
      v116 = v112 + 1;
      if ( v109 < (unsigned __int64)(v112 + 1) )
      {
        v130 = (unsigned __int16 *)v355;
        *(_QWORD *)v21 = v356;
        v108 = v113;
        if ( v130 != v112 )
          goto LABEL_220;
        goto LABEL_193;
      }
      v117 = *(_DWORD *)v84;
      if ( *(_DWORD *)v84 <= 0xFFFFu )
      {
        if ( v117 - 55296 <= 0x7FF )
        {
          if ( !v346 || (v111 & 2) == 0 )
            goto LABEL_218;
          v84 = (_QWORD *)((char *)v84 + 4);
          v114 = 6;
          v356 = v115;
          ++*v346;
        }
        else
        {
          v84 = (_QWORD *)((char *)v84 + 4);
          *v112++ = v117;
          v356 = v115;
          v357 = v116;
        }
        continue;
      }
      if ( v117 >> 7 == 7168 )
      {
        v84 = (_QWORD *)((char *)v84 + 4);
        v356 = v115;
        continue;
      }
      if ( !v346 )
        goto LABEL_218;
      if ( (*((_DWORD *)v83 + 4) & 8) != 0 )
      {
        v344 = (unsigned __int64 *)v109;
        v352 = v113;
        v353 = v111;
        v136 = sub_41D410(v351, v83);
        v114 = v136;
        v109 = (unsigned __int64)v344;
        v113 = v352;
        v111 = v353;
        if ( v136 != 6 )
        {
          v84 = v356;
          v112 = v357;
          if ( v136 == 5 )
          {
            v137 = (unsigned __int16 *)v355;
            *(_QWORD *)v21 = v356;
            v108 = v113;
            if ( v137 != v112 )
              goto LABEL_220;
            goto LABEL_193;
          }
          continue;
        }
        v112 = v357;
      }
      if ( (v111 & 2) == 0 )
      {
        v84 = v21;
        v10 = (unsigned __int64)v356;
        goto LABEL_219;
      }
      v84 = v356 + 1;
      v114 = 6;
      ++v356;
      ++*v346;
    }
    while ( (_QWORD *)v79 != v84 );
    v118 = (unsigned __int16 *)v355;
    *(_QWORD *)v21 = v79;
    v108 = v113;
    if ( v118 != v112 )
      goto LABEL_220;
    if ( v114 == 5 )
    {
LABEL_193:
      if ( v112 == v80 )
        --*((_DWORD *)v83 + 5);
      goto LABEL_161;
    }
LABEL_258:
    sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_ucs2");
LABEL_259:
    v343 = v73;
    v344 = v85;
    v345 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double))v82;
    v346 = v81;
    v347 = v74;
    LODWORD(v348) = v76;
    v349 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double))v93;
    v350 = v75;
    LODWORD(v351) = v77;
    v352 = v71;
    v138 = sub_41D410(v73, v80);
    v73 = v343;
    v85 = v344;
    v13 = v138;
    v82 = (unsigned __int64)v345;
    v81 = v346;
    v54 = v138 == 6;
    v74 = v347;
    v75 = v350;
    v134 = v356;
    v71 = v352;
    if ( v54 )
    {
      if ( ((unsigned __int8)v348 & 2) != 0 )
        goto LABEL_274;
      goto LABEL_245;
    }
    v139 = v349;
    if ( (_DWORD)v13 == 5 )
    {
      if ( v356 == (unsigned int *)v10 )
        goto LABEL_223;
      goto LABEL_243;
    }
    if ( v356 != (unsigned int *)v10 )
      goto LABEL_243;
    if ( (_DWORD)v13 != 7 )
      goto LABEL_277;
    if ( v9 == 4 )
    {
LABEL_276:
      v72 = sub_41F250(
              "inend != &bytebuf[MAX_NEEDED_INPUT]",
              "../iconv/loop.c",
              403,
              "internal_ucs2_loop_single",
              *(double *)&v72);
LABEL_277:
      if ( (_DWORD)v13 )
        goto LABEL_165;
      v97 = (unsigned int *)*v84;
      v98 = v354;
      v76 = *((_DWORD *)v80 + 4);
      continue;
    }
    break;
  }
  v140 = *(_DWORD *)a3 & 0xFFFFFFF8;
  *v84 += v9 - (*(_DWORD *)a3 & 7LL);
  if ( (__int64)v9 > v140 )
  {
    if ( v9 <= 4 )
    {
      v141 = (__int64)v139 + 2;
      v142 = 1;
      *(_DWORD *)a3 = v140 | v9;
      a3 += 3;
      do
      {
        *(_BYTE *)(a3 + v142) = *(_BYTE *)(v10 + v142 - 1);
        ++v142;
      }
      while ( v142 != v141 );
      v13 = 7;
      goto LABEL_165;
    }
LABEL_281:
    v72 = sub_41F250(
            "inend - inptr <= sizeof (state->__value.__wchb)",
            "../iconv/loop.c",
            414,
            "internal_ucs2_loop_single");
  }
  v147 = sub_41F250(
           "inend - inptr > (state->__count & ~7)",
           "../iconv/loop.c",
           413,
           "internal_ucs2_loop_single",
           *(double *)&v72);
  v334[0] = v361;
  v334[1] = v14;
  v341 = a3;
  v342 = v84;
  v149 = v148;
  v151 = v150;
  v334[2] = v9;
  v334[3] = v79;
  v152 = *((_DWORD *)v148 + 4);
  v337 = v21;
  v338 = v83;
  v153 = v145;
  v154 = v146;
  v339 = v12;
  v340 = v13;
  v156 = v155;
  v157 = (unsigned __int16 **)(v148 + 6);
  v333 = qword_48DD60;
  v158 = v144 + 104;
  v324 = 0;
  v325 = v144 + 104;
  v326 = v157;
  v329 = v160;
  v330 = v159;
  if ( (v152 & 1) == 0 )
  {
    v161 = *(_QWORD *)(v144 + 104);
    v162 = *(_QWORD *)(v158 + 40);
    v324 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v162;
    if ( v161 )
      v324 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v162 ^ qword_48DD68);
  }
  if ( v330 )
  {
    if ( v145 )
    {
      v335 = v80;
      v336 = v10;
      v147 = sub_41F250(
               "outbufstart == NULL",
               "../iconv/skeleton.c",
               350,
               "__gconv_transform_ucs2reverse_internal",
               *(double *)&v147);
      goto LABEL_392;
    }
    *(_QWORD *)v149[4] = 0;
    if ( (v149[2] & 1) == 0 )
    {
      if ( v333 == qword_48DD60 )
        __asm { BR              X16 }
      goto LABEL_395;
    }
    v12 = 0;
    goto LABEL_334;
  }
  v335 = v80;
  v336 = v10;
  if ( v145 )
    v163 = v145;
  else
    v163 = v149;
  v80 = (unsigned __int16 *)&v331;
  if ( v146 )
    v164 = &v331;
  else
    v164 = 0;
  v83 = (unsigned __int16 *)*v163;
  v328 = v164;
  v331 = 0;
  v165 = v149[1];
  if ( v329 )
  {
    v166 = (unsigned __int16 *)v149[4];
    v167 = *(_DWORD *)v166;
    v168 = *(_DWORD *)v166 & 7;
    if ( v168 )
    {
      if ( v145 )
        goto LABEL_397;
      v169 = *(char **)v156;
      if ( (*(_DWORD *)v166 & 7u) > 4 )
        goto LABEL_396;
      v170 = *(unsigned __int8 **)v156;
      v171 = 2;
      if ( v168 == 1 )
      {
        v170 = (unsigned __int8 *)(v169 + 1);
        v171 = 1;
      }
      if ( v151 < (char *)v170 )
      {
        *(_QWORD *)v156 = v151;
        v193 = v151 - v169 + v171;
        if ( v193 <= 4 )
        {
          if ( v171 < v193 )
          {
            v194 = v171;
            v195 = v166 + 2;
            v196 = (unsigned __int8 *)&v169[-v171];
            do
            {
              *((_BYTE *)v195 + v194) = v196[v194];
              ++v194;
            }
            while ( v193 != v194 );
          }
          v80 = v335;
          v10 = v336;
          v12 = 7;
          goto LABEL_334;
        }
        goto LABEL_394;
      }
      if ( v165 < (unsigned __int64)(v83 + 2) )
      {
        v80 = v335;
        v10 = v336;
        v12 = 5;
      }
      else
      {
        v172 = (unsigned __int16)__rev16(*((unsigned __int8 *)v166 + 4) | ((unsigned __int8)*v169 << 8));
        if ( (unsigned __int16)(v172 + 10240) > 0x7FFu )
        {
          *(_DWORD *)v83 = v172;
          v83 += 2;
          v167 = *(_DWORD *)v166;
          v168 = *(_DWORD *)v166 & 7;
          goto LABEL_302;
        }
        if ( v328 && (v152 & 2) != 0 )
        {
          ++*v328;
LABEL_302:
          if ( v168 <= 1 )
          {
            v173 = v331;
            v152 = *((_DWORD *)v149 + 4);
            v80 = (unsigned __int16 *)&v169[-v168 + 2];
            *(_QWORD *)v156 = v80;
            v10 = 10240;
            *(_DWORD *)v166 = v167 & 0xFFFFFFF8;
            v327 = &v332;
            goto LABEL_304;
          }
          goto LABEL_393;
        }
        v80 = v335;
        v10 = v336;
        v12 = 6;
      }
LABEL_334:
      if ( v333 == qword_48DD60 )
        return (unsigned int)v12;
      goto LABEL_395;
    }
  }
  v80 = *(unsigned __int16 **)v156;
  v173 = 0;
  v10 = 10240;
  v327 = &v332;
LABEL_304:
  while ( 2 )
  {
    if ( v154 )
      v173 += *v154;
    if ( v151 != (char *)v80 )
    {
      v174 = v80 + 1;
      if ( v151 < (char *)v80 + 2 )
      {
        v9 = (unsigned __int64)v83;
        v174 = v80;
        v12 = 7;
        goto LABEL_317;
      }
      v175 = (unsigned __int64)(v83 + 2);
      v9 = (unsigned __int64)v83;
      if ( v165 < (unsigned __int64)(v83 + 2) )
      {
        v174 = v80;
        v12 = 5;
        goto LABEL_317;
      }
      v176 = v80;
      v177 = (unsigned __int16)__rev16(*v80);
      if ( (unsigned __int16)(v177 + 10240) <= 0x7FFu )
      {
LABEL_314:
        v179 = v328;
        if ( !v328 || (v152 & 2) == 0 )
        {
          v174 = v176;
          v12 = 6;
          goto LABEL_317;
        }
        goto LABEL_353;
      }
      while ( 1 )
      {
        *(_DWORD *)v9 = v177;
        v9 = v175;
        if ( v174 == (unsigned __int16 *)v151 )
          goto LABEL_354;
LABEL_311:
        v178 = v174 + 1;
        if ( v151 < (char *)v174 + 2 )
          break;
        v175 = v9 + 4;
        if ( v165 < v9 + 4 )
        {
          v12 = 5;
          goto LABEL_317;
        }
        ++v174;
        v176 = v178 - 1;
        v177 = (unsigned __int16)__rev16(*(v178 - 1));
        if ( (unsigned __int16)(v177 + 10240) <= 0x7FFu )
          goto LABEL_314;
      }
      *(_QWORD *)v156 = v174;
      v12 = 7;
      if ( !v153 )
        goto LABEL_318;
LABEL_326:
      v80 = v335;
      v10 = v336;
      *v153 = v9;
      goto LABEL_334;
    }
    v9 = (unsigned __int64)v83;
    v174 = (unsigned __int16 *)v151;
    v12 = 4;
LABEL_317:
    *(_QWORD *)v156 = v174;
    if ( v153 )
      goto LABEL_326;
LABEL_318:
    v180 = *((_DWORD *)v149 + 4);
    ++*((_DWORD *)v149 + 5);
    if ( (v180 & 1) != 0 )
    {
      v192 = *v154;
      *v149 = v9;
      *v154 = v192 + v331;
      goto LABEL_329;
    }
    v322 = v165;
    v323 = v173;
    if ( v9 <= (unsigned __int64)v83 )
      goto LABEL_329;
    v332 = *v149;
    v181 = v324(v325, v326, v327, v9, 0, v154, 0, v329);
    v165 = v322;
    if ( v181 == 4 )
    {
      if ( (_DWORD)v12 != 5 )
        goto LABEL_329;
LABEL_323:
      v80 = *(unsigned __int16 **)v156;
      v83 = (unsigned __int16 *)*v149;
      v173 = v331;
      v152 = *((_DWORD *)v149 + 4);
      continue;
    }
    break;
  }
  v182 = v332;
  if ( v332 == v9 )
    goto LABEL_322;
  v184 = 0;
  if ( v154 )
    v184 = *v154;
  if ( v184 + v331 == v323 )
  {
    *(_QWORD *)v156 -= (__int64)(v9 - v332) / 2;
    goto LABEL_322;
  }
  v185 = *((_DWORD *)v149 + 4);
  if ( v151 == (char *)v80 )
  {
    *(_QWORD *)v156 = v151;
    if ( (unsigned __int16 *)v182 == v83 )
    {
LABEL_379:
      v147 = sub_41F250(
               "nstatus == __GCONV_FULL_OUTPUT",
               "../iconv/skeleton.c",
               595,
               "__gconv_transform_ucs2reverse_internal");
      goto LABEL_380;
    }
    goto LABEL_352;
  }
  v186 = v80 + 1;
  if ( v151 < (char *)v80 + 2 )
  {
    *(_QWORD *)v156 = v80;
    if ( (unsigned __int16 *)v182 == v83 )
      goto LABEL_379;
LABEL_352:
    v147 = sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ucs2reverse_internal");
LABEL_353:
    ++*v179;
    if ( v174 != (unsigned __int16 *)v151 )
      goto LABEL_311;
LABEL_354:
    v12 = 4;
    goto LABEL_317;
  }
  v187 = v83 + 2;
  v188 = v83;
  if ( v332 < (unsigned __int64)(v83 + 2) )
  {
    *(_QWORD *)v156 = v80;
    if ( (unsigned __int16 *)v182 == v83 )
      goto LABEL_369;
    goto LABEL_352;
  }
  v189 = v80;
  v190 = (unsigned __int16)__rev16(*v80);
  if ( (unsigned __int16)(v190 + 10240) > 0x7FFu )
  {
LABEL_343:
    *(_DWORD *)v188 = v190;
    v188 = v187;
    goto LABEL_344;
  }
  while ( 1 )
  {
    if ( !v328 || (v185 & 2) == 0 )
    {
      v186 = v189;
LABEL_351:
      *(_QWORD *)v156 = v186;
      if ( (unsigned __int16 *)v182 == v188 )
        goto LABEL_379;
      goto LABEL_352;
    }
    ++*v328;
LABEL_344:
    if ( v151 == (char *)v186 )
      goto LABEL_351;
    v191 = v186 + 1;
    if ( v151 < (char *)v186 + 2 )
      goto LABEL_351;
    v187 = v188 + 2;
    if ( v182 < (unsigned __int64)(v188 + 2) )
      break;
    ++v186;
    v189 = v191 - 1;
    v190 = (unsigned __int16)__rev16(*(v191 - 1));
    if ( (unsigned __int16)(v190 + 10240) > 0x7FFu )
      goto LABEL_343;
  }
  *(_QWORD *)v156 = v186;
  if ( (unsigned __int16 *)v182 != v188 )
    goto LABEL_352;
  if ( (unsigned __int16 *)v182 == v83 )
LABEL_369:
    --*((_DWORD *)v149 + 5);
LABEL_322:
  if ( !v181 )
    goto LABEL_323;
  v12 = v181;
LABEL_329:
  if ( v329 )
    v183 = (_DWORD)v12 == 7;
  else
    v183 = 0;
  if ( !v183 )
  {
    v80 = v335;
    v10 = v336;
    goto LABEL_334;
  }
LABEL_380:
  v197 = *(char **)v156;
  v198 = (unsigned __int64)&v151[-*(_QWORD *)v156];
  if ( v198 <= 4 )
  {
    v199 = (unsigned int *)v149[4];
    v200 = 0;
    if ( v198 )
    {
      do
      {
        *((_BYTE *)v199 + v200 + 4) = v197[v200];
        ++v200;
      }
      while ( v198 != v200 );
      v330 = v198;
    }
    v201 = v330;
    v80 = v335;
    v10 = v336;
    v202 = *v199 & 0xFFFFFFF8;
    *(_QWORD *)v156 = v151;
    *v199 = v202 | v201;
    goto LABEL_334;
  }
LABEL_392:
  v147 = sub_41F250(
           "cnt_after <= sizeof (data->__statep->__value.__wchb)",
           "../iconv/skeleton.c",
           647,
           "__gconv_transform_ucs2reverse_internal",
           *(double *)&v147);
LABEL_393:
  v147 = sub_41F250(
           "inptr - bytebuf > (state->__count & 7)",
           "../iconv/loop.c",
           385,
           "ucs2reverse_internal_loop_single",
           *(double *)&v147);
LABEL_394:
  sub_41F250(
    "inlen_after <= sizeof (state->__value.__wchb)",
    "../iconv/loop.c",
    338,
    "ucs2reverse_internal_loop_single",
    *(double *)&v147);
LABEL_395:
  v335 = v80;
  v336 = v10;
  sub_412340();
LABEL_396:
  v147 = sub_41F250(
           "(state->__count & 7) <= sizeof (state->__value)",
           "../iconv/loop.c",
           309,
           "ucs2reverse_internal_loop_single",
           v169);
LABEL_397:
  v210 = sub_41F250(
           "outbufstart == NULL",
           "../iconv/skeleton.c",
           467,
           "__gconv_transform_ucs2reverse_internal",
           *(double *)&v147);
  v211 = v203;
  v212 = v204 + 48;
  v310 = v334;
  v311 = v14;
  v213 = v206;
  v214 = *(_DWORD *)(v204 + 16);
  v312 = v9;
  v313 = v153;
  v215 = v208;
  v217 = v216;
  v314 = v80;
  v315 = v10;
  v218 = (char *)v204;
  v219 = v203 + 104;
  v316 = v154;
  v317 = v83;
  v220 = 0;
  v221 = v207;
  v320 = v151;
  v321 = v149;
  v222 = v205;
  v309 = qword_48DD60;
  if ( (v214 & 1) == 0 )
  {
    v220 = *(_QWORD *)(v203 + 144);
    if ( *(_QWORD *)(v203 + 104) )
      v220 ^= qword_48DD68;
  }
  if ( v208 )
  {
    if ( v206 )
      goto LABEL_555;
    **(_QWORD **)(v204 + 32) = 0;
    if ( (*(_DWORD *)(v204 + 16) & 1) == 0 )
    {
      if ( v309 == qword_48DD60 )
        __asm { BR              X16 }
      goto LABEL_562;
    }
LABEL_497:
    LODWORD(v151) = 0;
    goto LABEL_445;
  }
  v318 = v12;
  v319 = v156;
  if ( v206 )
    v223 = v206;
  else
    v223 = (char **)v204;
  v224 = &v303;
  v12 = *(_QWORD *)(v204 + 8);
  if ( !v207 )
    v224 = 0;
  v154 = *v223;
  v303 = 0;
  if ( v209 )
  {
    v156 = *(_QWORD *)(v204 + 32);
    v225 = *(_DWORD *)v156 & 7;
    if ( v225 )
    {
      if ( v206 )
        goto LABEL_557;
      v226 = *v205;
      v305 = *v222;
      v306 = (char *)v154;
      if ( v225 > 4 )
      {
        sub_41F250(
          "(state->__count & 7) <= sizeof (state->__value)",
          "../iconv/loop.c",
          309,
          "internal_ucs2reverse_loop_single",
          *(double *)&v210);
      }
      else
      {
        v227 = &v307;
        v228 = v156 + 4;
        v229 = &v307;
        v230 = 0;
        do
        {
          v231 = *(_BYTE *)(v228 + v230++);
          *(_BYTE *)v229 = v231;
          v229 = (unsigned int *)((char *)v229 + 1);
        }
        while ( v230 < (*(_DWORD *)v156 & 7u) );
        if ( v217 >= (unsigned __int64)v226 - v230 + 4 )
        {
          v232 = (unsigned int *)((char *)v226 + 1);
          if ( v12 < (unsigned __int64)v154 + 2 )
          {
LABEL_499:
            v12 = v318;
            v156 = v319;
            LODWORD(v151) = 5;
            goto LABEL_445;
          }
          do
          {
            v233 = v230++;
            v305 = v232;
            v234 = v230 <= 3 && v217 > (unsigned __int64)v232;
            v308[v230 - 5] = *((_BYTE *)v232 - 1);
            v232 = (unsigned int *)((char *)v232 + 1);
          }
          while ( v234 );
          v305 = &v307;
          if ( v307 > 0xFFFF )
          {
            if ( v307 >> 7 == 7168 )
            {
              v305 = (unsigned int *)v308;
              goto LABEL_421;
            }
            if ( v224 )
            {
              if ( (v214 & 8) != 0 )
                goto LABEL_539;
              if ( (v214 & 2) != 0 )
              {
                v270 = *v224;
                v271 = (unsigned int *)v308;
                v305 = (unsigned int *)v308;
                *v224 = v270 + 1;
                goto LABEL_524;
              }
            }
          }
          else
          {
            if ( v307 - 55296 > 0x7FF )
            {
              *(_WORD *)v154 = __rev16(v307);
              v305 = (unsigned int *)v308;
              v306 = (char *)v154 + 2;
LABEL_421:
              v235 = 4;
              goto LABEL_422;
            }
            if ( v224 && (v214 & 2) != 0 )
            {
              v273 = *v224;
              v305 = (unsigned int *)v308;
              *v224 = v273 + 1;
              goto LABEL_421;
            }
          }
LABEL_526:
          v12 = v318;
          v156 = v319;
          LODWORD(v151) = 6;
          goto LABEL_445;
        }
        *v222 = (unsigned int *)v217;
        v269 = v217 - (_QWORD)v226 + v230;
        if ( v269 > 4 )
        {
          v210 = sub_41F250(
                   "inlen_after <= sizeof (state->__value.__wchb)",
                   "../iconv/loop.c",
                   338,
                   "internal_ucs2reverse_loop_single",
                   *(double *)&v210);
          goto LABEL_554;
        }
        if ( v230 < v269 )
        {
          do
          {
            v226 = (unsigned int *)((char *)v226 + 1);
            v305 = v226;
            *(_BYTE *)(v228 + v230++) = *((_BYTE *)v226 - 1);
          }
          while ( v269 != v230 );
        }
LABEL_518:
        v12 = v318;
        v156 = v319;
        LODWORD(v151) = 7;
LABEL_445:
        if ( v309 == qword_48DD60 )
          return (unsigned int)v151;
      }
LABEL_562:
      v318 = v12;
      v319 = v156;
      sub_412340();
      goto LABEL_563;
    }
  }
  v227 = *v205;
  v237 = 0;
LABEL_425:
  while ( 2 )
  {
    v151 = v221;
    v221 = v218;
    v218 = (char *)v154;
    v154 = v222;
    v222 = (unsigned int **)v12;
    v12 = v237;
    v288 = v209;
    v238 = v214;
    v156 = 0xFFFF;
    v282 = v213;
    v290 = v224;
    v292 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v220;
    v294 = v219;
    v296 = v212;
    v299 = v211;
    while ( 2 )
    {
      if ( v151 )
        v12 += *(_QWORD *)v151;
      v305 = v227;
      v306 = v218;
      v239 = v218;
      if ( (unsigned int *)v217 == v227 )
      {
        v240 = (unsigned int *)v217;
        v230 = 4;
LABEL_436:
        v244 = v282;
        *v154 = v240;
        if ( !v282 )
          goto LABEL_437;
LABEL_444:
        LODWORD(v151) = v230;
        v12 = v318;
        v156 = v319;
        *v244 = v239;
        goto LABEL_445;
      }
      v240 = v227;
      v230 = 4;
      while ( 2 )
      {
        v241 = v240 + 1;
        if ( v217 >= (unsigned __int64)(v240 + 1) )
        {
          v242 = v239 + 2;
          if ( v222 < (unsigned int **)(v239 + 2) )
          {
            v240 = v305;
            v230 = 5;
            goto LABEL_436;
          }
          v243 = *v240;
          if ( *v240 <= 0xFFFF )
          {
            if ( v243 - 55296 <= 0x7FF )
            {
              if ( !v290 || (v238 & 2) == 0 )
              {
LABEL_458:
                v240 = v305;
                v230 = 6;
                goto LABEL_436;
              }
              ++v240;
              v305 = v241;
              ++*v290;
            }
            else
            {
              ++v240;
              *(_WORD *)v239 = __rev16(v243);
              v239 += 2;
              v305 = v241;
              v306 = v242;
            }
            goto LABEL_435;
          }
          if ( v243 >> 7 == 7168 )
          {
            ++v240;
            v305 = v241;
          }
          else
          {
            if ( !v290 )
              goto LABEL_458;
            if ( (*((_DWORD *)v221 + 4) & 8) != 0 )
            {
              v285 = v238;
              v261 = sub_41D410(v299, v221);
              v230 = v261;
              v238 = v285;
              if ( v261 == 6 )
              {
                v239 = v306;
                goto LABEL_451;
              }
              v240 = v305;
              v239 = v306;
              if ( v261 == 5 )
                goto LABEL_436;
            }
            else
            {
LABEL_451:
              v240 = v305;
              if ( (v238 & 2) == 0 )
              {
                v230 = 6;
                goto LABEL_436;
              }
              v240 = v305 + 1;
              v230 = 6;
              ++v305;
              ++*v290;
            }
          }
LABEL_435:
          if ( (unsigned int *)v217 == v240 )
            goto LABEL_436;
          continue;
        }
        break;
      }
      v244 = v282;
      v230 = 7;
      *v154 = v305;
      if ( v282 )
        goto LABEL_444;
LABEL_437:
      v245 = *((_DWORD *)v221 + 4);
      ++*((_DWORD *)v221 + 5);
      if ( (v245 & 1) != 0 )
      {
        v218 = v221;
        v221 = v151;
        v222 = (unsigned int **)v154;
        v257 = *(_QWORD *)v151;
        LODWORD(v151) = v230;
        v258 = v288;
        v259 = v257 + v303;
        *(_QWORD *)v218 = v239;
        *(_QWORD *)v221 = v259;
        goto LABEL_476;
      }
      if ( v218 >= v239 )
      {
        v246 = v230;
LABEL_441:
        if ( !v246 )
        {
LABEL_442:
          v227 = (unsigned int *)*v154;
          v218 = *(char **)v221;
          v12 = v303;
          v238 = *((_DWORD *)v221 + 4);
          continue;
        }
        v258 = v288;
        v218 = v221;
        v222 = (unsigned int **)v154;
        LODWORD(v151) = v246;
LABEL_476:
        if ( v258 )
          v260 = (_DWORD)v151 == 7;
        else
          v260 = 0;
        if ( !v260 )
        {
LABEL_480:
          v12 = v318;
          v156 = v319;
          goto LABEL_445;
        }
        v263 = *v222;
        v264 = v217 - (_QWORD)*v222;
        if ( v264 <= 4 )
        {
          v265 = (unsigned int *)*((_QWORD *)v218 + 4);
          v266 = 0;
          if ( v264 )
          {
            do
            {
              *((_BYTE *)v265 + v266 + 4) = *((_BYTE *)v263 + v266);
              ++v266;
            }
            while ( v264 != v266 );
            v215 = v264;
          }
          v12 = v318;
          v156 = v319;
          v267 = *v265 & 0xFFFFFFF8;
          *v222 = (unsigned int *)v217;
          *v265 = v267 | v215;
          goto LABEL_445;
        }
LABEL_554:
        v210 = sub_41F250(
                 "cnt_after <= sizeof (data->__statep->__value.__wchb)",
                 "../iconv/skeleton.c",
                 647,
                 "__gconv_transform_internal_ucs2reverse",
                 *(double *)&v210);
LABEL_555:
        v318 = v12;
        v319 = v156;
        v210 = sub_41F250(
                 "outbufstart == NULL",
                 "../iconv/skeleton.c",
                 350,
                 "__gconv_transform_internal_ucs2reverse",
                 *(double *)&v210);
LABEL_556:
        v210 = sub_41F250(
                 "inptr - bytebuf > (state->__count & 7)",
                 "../iconv/loop.c",
                 385,
                 "internal_ucs2reverse_loop_single",
                 *(double *)&v210);
LABEL_557:
        v210 = sub_41F250(
                 "outbufstart == NULL",
                 "../iconv/skeleton.c",
                 467,
                 "__gconv_transform_internal_ucs2reverse",
                 *(double *)&v210);
LABEL_558:
        v210 = sub_41F250(
                 "inend != &bytebuf[MAX_NEEDED_INPUT]",
                 "../iconv/loop.c",
                 403,
                 "internal_ucs2reverse_loop_single",
                 *(double *)&v210);
LABEL_559:
        if ( (_DWORD)v151 )
          goto LABEL_480;
        v227 = *v222;
        v237 = v303;
        v214 = *((_DWORD *)v218 + 4);
        goto LABEL_425;
      }
      break;
    }
    v304 = *(_QWORD *)v221;
    v284 = v239;
    v246 = v292(v294, v296, &v304, v239, 0, v151, 0, v288);
    if ( v246 == 4 )
    {
      v246 = v230;
      if ( (_DWORD)v230 == 5 )
        goto LABEL_442;
      goto LABEL_441;
    }
    v247 = v304;
    if ( (char *)v304 == v284 )
      goto LABEL_441;
    v248 = 0;
    if ( v151 )
      v248 = *(_QWORD *)v151;
    if ( v248 + v303 == v12 )
    {
      *v154 -= 2LL * (_QWORD)&v284[-v304];
      goto LABEL_441;
    }
    v249 = *((_DWORD *)v221 + 4);
    *v154 = v227;
    v305 = v227;
    v306 = v218;
    if ( (unsigned int *)v217 == v227 )
    {
      if ( (char *)v247 == v218 )
        goto LABEL_538;
LABEL_496:
      sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs2reverse");
      goto LABEL_497;
    }
    v250 = v218;
    v251 = v246;
    v252 = 4;
    v12 = 0xFFFF;
    v230 = 4294912000LL;
    do
    {
      v253 = v227 + 1;
      if ( v217 < (unsigned __int64)(v227 + 1) )
      {
LABEL_494:
        v227 = v305;
        v222 = (unsigned int **)v154;
LABEL_495:
        v262 = (char *)v304;
        *v222 = v227;
        if ( v262 == v250 )
          goto LABEL_538;
        goto LABEL_496;
      }
      v254 = v250 + 2;
      if ( v247 < (unsigned __int64)(v250 + 2) )
      {
        v268 = (char *)v304;
        *v154 = v305;
        v246 = v251;
        if ( v268 != v250 )
          goto LABEL_496;
        goto LABEL_473;
      }
      v255 = *v227;
      if ( *v227 <= 0xFFFF )
      {
        if ( v255 - 55296 <= 0x7FF )
        {
          if ( !v290 || (v249 & 2) == 0 )
            goto LABEL_494;
          ++v227;
          v305 = v253;
          ++*v290;
        }
        else
        {
          ++v227;
          *(_WORD *)v250 = __rev16(v255);
          v250 += 2;
          v305 = v253;
          v306 = v254;
        }
        continue;
      }
      if ( v255 >> 7 == 7168 )
      {
        ++v227;
        v305 = v253;
        continue;
      }
      if ( !v290 )
        goto LABEL_494;
      if ( (*((_DWORD *)v221 + 4) & 8) != 0 )
      {
        v286 = v247;
        v300 = v251;
        v302 = v249;
        v274 = sub_41D410(v299, v221);
        v252 = v274;
        v247 = v286;
        v251 = v300;
        v249 = v302;
        if ( v274 != 6 )
        {
          v227 = v305;
          v250 = v306;
          if ( v274 == 5 )
          {
            v275 = (char *)v304;
            *v154 = v305;
            v246 = v300;
            if ( v275 != v250 )
              goto LABEL_496;
            goto LABEL_473;
          }
          continue;
        }
        v250 = v306;
      }
      if ( (v249 & 2) == 0 )
      {
        v222 = (unsigned int **)v154;
        v227 = v305;
        goto LABEL_495;
      }
      v227 = v305 + 1;
      v252 = 6;
      ++v305;
      ++*v290;
    }
    while ( (unsigned int *)v217 != v227 );
    v256 = (char *)v304;
    *v154 = v217;
    v246 = v251;
    if ( v256 != v250 )
      goto LABEL_496;
    if ( v252 == 5 )
    {
LABEL_473:
      if ( v250 == v218 )
        --*((_DWORD *)v221 + 5);
      goto LABEL_441;
    }
LABEL_538:
    sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_ucs2reverse");
LABEL_539:
    v283 = v211;
    v287 = v224;
    v289 = v214;
    v291 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v220;
    v293 = v219;
    v295 = v212;
    v297 = v233;
    v298 = v213;
    v301 = v209;
    v276 = sub_41D410(v211, v218);
    v211 = v283;
    v224 = v287;
    LODWORD(v151) = v276;
    v220 = (unsigned __int64)v291;
    v219 = v293;
    v54 = v276 == 6;
    v212 = v295;
    v213 = v298;
    v271 = v305;
    v209 = v301;
    if ( v54 )
    {
      if ( (v289 & 2) == 0 )
      {
        if ( v305 == v227 )
          goto LABEL_526;
        v235 = (char *)v305 - (char *)v227;
LABEL_422:
        v236 = *(_DWORD *)v156;
        if ( (*(_DWORD *)v156 & 7LL) < v235 )
        {
          v214 = *((_DWORD *)v218 + 4);
          v227 = (unsigned int *)((char *)*v222 + v235 - (v236 & 7));
          *v222 = v227;
          v237 = v303;
          v154 = v306;
          *(_DWORD *)v156 = v236 & 0xFFFFFFF8;
          continue;
        }
        goto LABEL_556;
      }
      v272 = *v287;
      v271 = ++v305;
      *v287 = v272 + 1;
      if ( v271 == v227 )
        goto LABEL_526;
LABEL_524:
      v235 = (char *)v271 - (char *)v227;
      goto LABEL_422;
    }
    break;
  }
  if ( (_DWORD)v151 == 5 )
  {
    if ( v305 == v227 )
      goto LABEL_499;
    goto LABEL_524;
  }
  if ( v305 != v227 )
    goto LABEL_524;
  if ( (_DWORD)v151 != 7 )
    goto LABEL_559;
  if ( v230 == 4 )
    goto LABEL_558;
  v277 = *(_DWORD *)v156 & 0xFFFFFFF8;
  *v222 = (unsigned int *)((char *)*v222 + v230 - (*(_DWORD *)v156 & 7LL));
  if ( (__int64)v230 > v277 )
  {
    if ( v230 <= 4 )
    {
      v278 = 1;
      *(_DWORD *)v156 = v277 | v230;
      v279 = v156 + 3;
      do
      {
        *(_BYTE *)(v279 + v278) = *((_BYTE *)v227 + v278 - 1);
        ++v278;
      }
      while ( v297 + 2 != v278 );
      goto LABEL_518;
    }
LABEL_563:
    v210 = sub_41F250(
             "inend - inptr <= sizeof (state->__value.__wchb)",
             "../iconv/loop.c",
             414,
             "internal_ucs2reverse_loop_single");
  }
  sub_41F250(
    "inend - inptr > (state->__count & ~7)",
    "../iconv/loop.c",
    413,
    "internal_ucs2reverse_loop_single",
    *(double *)&v210);
  return sub_41D410(v280, v281);
}
