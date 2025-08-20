__int64 __fastcall sub_417420(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        __int64 *a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned __int64 v8; // x19
  unsigned __int64 v9; // x20
  __int64 v10; // x22
  __int64 *v11; // x23
  __int64 v12; // x30
  __int64 v13; // x14
  unsigned __int64 v14; // x13
  unsigned __int64 v15; // x24
  int v16; // w8
  __int64 v17; // x21
  _QWORD *v19; // x26
  unsigned __int64 v21; // x28
  unsigned __int64 v22; // x1
  __int64 *v23; // x0
  unsigned __int64 v24; // x11
  __int64 v25; // x12
  __int64 v26; // x0
  __int64 v27; // x2
  __int64 v28; // x0
  __int64 v29; // x2
  unsigned __int64 *v30; // x2
  int v31; // w1
  unsigned int v32; // w0
  unsigned __int64 v33; // x4
  unsigned int v34; // w7
  bool v35; // zf
  int *v37; // x5
  int v38; // w8
  unsigned __int64 v39; // x2
  unsigned __int64 v41; // x0
  bool v42; // cc
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x3
  __int64 v46; // x1
  unsigned __int64 v47; // x2
  _QWORD *v48; // x3
  unsigned __int64 v49; // x1
  unsigned int *v50; // x2
  __int64 v51; // x0
  unsigned int v52; // w0
  __int64 v53; // x0
  unsigned __int64 *v54; // x2
  _QWORD *v55; // x4
  unsigned __int64 v56; // x5
  int v57; // w6
  unsigned int v58; // w7
  unsigned __int64 v59; // x15
  unsigned __int64 v60; // x1
  unsigned __int64 v61; // x25
  int v62; // w16
  unsigned int *v63; // x3
  unsigned int *v64; // x20
  unsigned __int64 v65; // x21
  __int64 v66; // x3
  unsigned __int64 *v67; // x23
  unsigned __int64 v68; // x28
  unsigned __int64 v69; // x1
  unsigned __int64 *v70; // x12
  _QWORD *v71; // x0
  unsigned __int64 *v72; // x22
  unsigned __int64 v73; // x8
  unsigned __int64 v74; // x2
  unsigned __int64 v75; // x1
  unsigned __int64 v76; // x0
  unsigned int v77; // w0
  unsigned __int64 *v78; // x0
  unsigned int v79; // w0
  unsigned __int64 v80; // x2
  unsigned __int64 v81; // x8
  unsigned __int64 v82; // x10
  int v83; // w6
  unsigned int v84; // w7
  bool v85; // zf
  unsigned int *v86; // x9
  unsigned int v87; // w8
  int v88; // w13
  unsigned __int64 v89; // x0
  unsigned __int64 v90; // x2
  bool v92; // cc
  __int64 v93; // x1
  int v94; // w4
  unsigned int *v95; // x3
  unsigned int *v96; // x8
  unsigned int v97; // w1
  __int64 v98; // x0
  unsigned __int64 v99; // x3
  unsigned __int64 v100; // x1
  unsigned int *v101; // x2
  __int64 v102; // x0
  unsigned int v103; // w0
  __int64 v104; // x0
  unsigned __int64 *v105; // x3
  unsigned __int64 *v106; // x4
  unsigned int v107; // w6
  unsigned int v108; // w7
  __int64 v109; // x11
  unsigned __int64 v110; // x1
  unsigned __int64 v111; // x25
  unsigned __int64 *v112; // x2
  unsigned __int64 *v113; // x26
  int v114; // w8
  signed __int64 v115; // x20
  unsigned __int64 *v116; // x23
  unsigned __int64 *v117; // x5
  unsigned __int64 *v118; // x24
  unsigned __int64 v119; // x9
  unsigned __int64 v120; // x1
  unsigned __int64 *v121; // x0
  unsigned __int64 v122; // x0
  __int64 v123; // x3
  unsigned __int64 v124; // x1
  __int64 v125; // x2
  unsigned __int64 v126; // x3
  int v127; // w1
  unsigned int v128; // w8
  unsigned __int64 v129; // x22
  unsigned int v130; // w7
  bool v131; // zf
  int *v132; // x8
  int v133; // w13
  unsigned __int64 v134; // x2
  unsigned __int64 v135; // x0
  bool v137; // cc
  unsigned __int64 v138; // x0
  __int64 v139; // x2
  __int64 v140; // x20
  __int64 v141; // x0
  unsigned __int64 v142; // x4
  unsigned __int64 v143; // x2
  _DWORD *v144; // x6
  __int64 v145; // x0
  int v146; // w0
  __int64 v147; // x0
  unsigned __int64 *v148; // x4
  _QWORD *v149; // x5
  unsigned __int64 v150; // x1
  unsigned __int64 v151; // x28
  int v152; // w16
  unsigned __int64 v153; // x3
  unsigned __int64 v154; // x20
  unsigned __int64 *v155; // x22
  unsigned __int64 *v156; // x2
  unsigned __int64 *v157; // x24
  unsigned __int64 v158; // x2
  __int64 v159; // x1
  int v160; // w6
  unsigned int v161; // w7
  __int64 v162; // x0
  unsigned __int64 v163; // x1
  __int64 *v164; // x12
  unsigned __int64 *v165; // x0
  __int64 v166; // x13
  unsigned __int64 v167; // x0
  char *v168; // x8
  unsigned __int64 v169; // x1
  unsigned __int64 v170; // x2
  int v171; // w1
  unsigned int v172; // w0
  unsigned __int64 v173; // x1
  bool v174; // zf
  unsigned int *v175; // x3
  unsigned int v176; // w4
  unsigned __int64 v177; // x1
  unsigned __int64 v178; // x0
  bool v180; // cc
  __int64 v181; // x2
  int v182; // w6
  _DWORD *v183; // x3
  _DWORD *v184; // x2
  int v185; // w4
  __int64 v186; // x0
  unsigned __int64 v187; // x3
  unsigned __int64 v188; // x1
  unsigned int *v189; // x2
  __int64 v190; // x0
  int v191; // w1
  unsigned int v192; // w0
  __int64 v193; // x0
  unsigned int *v194; // x4
  unsigned __int64 v195; // x5
  int v196; // w6
  __int64 v197; // x1
  __int64 v198; // x26
  int v199; // w15
  _QWORD *v200; // x2
  _QWORD *v201; // x21
  __int64 v202; // x2
  unsigned int *v203; // x22
  __int64 v204; // x3
  __int64 v205; // x27
  __int64 v206; // x1
  unsigned __int64 v207; // x23
  unsigned int v208; // w7
  __int64 v209; // x0
  unsigned __int64 v210; // x1
  unsigned __int64 **v211; // x0
  __int64 *v212; // x1
  __int64 v213; // x20
  __int64 v214; // x10
  unsigned __int64 *v215; // x6
  __int64 v216; // x0
  unsigned __int64 *v217; // x19
  int v218; // w8
  __int64 v219; // x1
  int v220; // w1
  unsigned int v221; // w0
  unsigned __int64 v222; // x1
  __int64 v223; // x10
  __int64 v224; // x2
  int v225; // w7
  unsigned __int64 *v226; // x3
  __int64 v227; // x10
  unsigned __int64 *v228; // x2
  int v229; // w4
  __int64 v230; // x6
  __int64 v231; // x0
  __int64 v232; // x1
  unsigned __int64 v233; // x1
  unsigned int **v234; // x2
  unsigned __int64 *v235; // x4
  unsigned __int64 *v236; // x5
  int v237; // w6
  unsigned int v238; // w7
  __int64 v239; // x13
  unsigned __int64 v240; // x15
  unsigned __int64 *v241; // x10
  int v242; // w11
  int v243; // w18
  unsigned __int64 v244; // x3
  unsigned __int64 v245; // x20
  unsigned __int64 v246; // x21
  __int64 v247; // x14
  unsigned __int64 v248; // x12
  unsigned __int64 *v249; // x25
  unsigned int **v250; // x28
  unsigned __int64 *v251; // x0
  unsigned __int64 **v252; // x6
  unsigned int *v253; // x9
  int v254; // w0
  unsigned int *v255; // x2
  _DWORD *v256; // x3
  unsigned int *v257; // x1
  unsigned __int64 v258; // x19
  char v259; // w0
  unsigned int *v260; // x0
  unsigned __int64 v261; // x8
  bool v262; // cc
  unsigned int *v263; // x0
  __int64 v264; // x0
  unsigned int v265; // w1
  unsigned int *v266; // x22
  unsigned __int64 *v267; // x27
  unsigned int *v268; // x26
  unsigned __int64 v269; // x27
  int v270; // w7
  _BYTE *v271; // x19
  unsigned int *v272; // x0
  unsigned int *v273; // x3
  unsigned int v274; // w2
  unsigned __int64 *v275; // x0
  int v276; // w1
  unsigned int v277; // w0
  unsigned __int64 v278; // x7
  unsigned int v279; // w26
  unsigned __int64 v280; // x1
  int v281; // w19
  _BYTE *v282; // x1
  int v283; // w4
  unsigned int *v284; // x2
  unsigned int v285; // w0
  _BYTE *v286; // x2
  unsigned int v287; // w7
  unsigned __int64 v288; // x0
  bool v289; // zf
  unsigned int v290; // w0
  unsigned int *v291; // x3
  unsigned __int64 v292; // x1
  unsigned int *v293; // x4
  __int64 v294; // x0
  unsigned int v295; // w0
  _BYTE *v296; // x2
  unsigned __int64 v297; // x0
  unsigned int *v298; // x2
  unsigned __int64 *v299; // x1
  int v300; // w0
  _BYTE *v301; // x2
  unsigned int v302; // w0
  signed int v303; // w0
  __int64 v304; // x1
  unsigned __int64 *v305; // x1
  unsigned __int64 *v306; // [xsp+0h] [xbp-420h]
  __int64 v307; // [xsp+0h] [xbp-420h]
  unsigned int v308; // [xsp+8h] [xbp-418h]
  unsigned __int64 **v309; // [xsp+8h] [xbp-418h]
  unsigned int *v310; // [xsp+10h] [xbp-410h]
  __int64 (__fastcall *v311)(__int64, unsigned __int64, _BYTE **, _BYTE *, _QWORD, unsigned __int64 *, _QWORD, _QWORD); // [xsp+18h] [xbp-408h]
  __int64 (__fastcall *v312)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [xsp+18h] [xbp-408h]
  __int64 v313; // [xsp+20h] [xbp-400h]
  __int64 v314; // [xsp+20h] [xbp-400h]
  unsigned __int64 v315; // [xsp+28h] [xbp-3F8h]
  unsigned __int64 v316; // [xsp+28h] [xbp-3F8h]
  unsigned __int64 **v317; // [xsp+30h] [xbp-3F0h]
  char v318; // [xsp+30h] [xbp-3F0h]
  unsigned __int64 v319; // [xsp+38h] [xbp-3E8h]
  __int64 v320; // [xsp+40h] [xbp-3E0h]
  int v321; // [xsp+48h] [xbp-3D8h]
  unsigned int v322; // [xsp+4Ch] [xbp-3D4h]
  unsigned __int64 *v323; // [xsp+50h] [xbp-3D0h] BYREF
  _BYTE *v324; // [xsp+58h] [xbp-3C8h] BYREF
  unsigned int *v325; // [xsp+60h] [xbp-3C0h]
  _BYTE *v326; // [xsp+68h] [xbp-3B8h]
  unsigned int v327; // [xsp+70h] [xbp-3B0h] BYREF
  _BYTE v328[4]; // [xsp+74h] [xbp-3ACh] BYREF
  __int64 v329; // [xsp+78h] [xbp-3A8h]
  _QWORD *v330; // [xsp+80h] [xbp-3A0h]
  __int64 v331; // [xsp+88h] [xbp-398h]
  unsigned __int64 v332; // [xsp+90h] [xbp-390h]
  unsigned __int64 v333; // [xsp+98h] [xbp-388h]
  _QWORD *v334; // [xsp+A0h] [xbp-380h]
  unsigned int *v335; // [xsp+A8h] [xbp-378h]
  unsigned __int64 v336; // [xsp+B0h] [xbp-370h]
  unsigned __int64 *v337; // [xsp+B8h] [xbp-368h]
  unsigned __int64 v338; // [xsp+C0h] [xbp-360h]
  __int64 v339; // [xsp+C8h] [xbp-358h]
  __int64 v340; // [xsp+D0h] [xbp-350h]
  unsigned __int64 v341; // [xsp+D8h] [xbp-348h]
  __int64 v342; // [xsp+E8h] [xbp-338h]
  __int64 (__fastcall *v343)(__int64, __int64, unsigned __int64 **, unsigned __int64 *, _QWORD, unsigned __int64, _QWORD, _QWORD); // [xsp+F0h] [xbp-330h]
  __int64 v344; // [xsp+F8h] [xbp-328h]
  __int64 v345; // [xsp+100h] [xbp-320h]
  unsigned int v346; // [xsp+10Ch] [xbp-314h]
  unsigned __int64 **v347; // [xsp+110h] [xbp-310h]
  __int64 *v348; // [xsp+118h] [xbp-308h]
  __int64 v349; // [xsp+128h] [xbp-2F8h] BYREF
  unsigned __int64 *v350; // [xsp+130h] [xbp-2F0h] BYREF
  __int64 v351; // [xsp+138h] [xbp-2E8h]
  _QWORD v352[2]; // [xsp+140h] [xbp-2E0h] BYREF
  unsigned __int64 v353; // [xsp+150h] [xbp-2D0h]
  unsigned __int64 v354; // [xsp+158h] [xbp-2C8h]
  unsigned __int64 v355; // [xsp+160h] [xbp-2C0h]
  unsigned __int64 *v356; // [xsp+168h] [xbp-2B8h]
  unsigned __int64 *v357; // [xsp+170h] [xbp-2B0h]
  unsigned __int64 *v358; // [xsp+178h] [xbp-2A8h]
  unsigned __int64 v359; // [xsp+180h] [xbp-2A0h]
  unsigned __int64 *v360; // [xsp+188h] [xbp-298h]
  unsigned __int64 v361; // [xsp+190h] [xbp-290h]
  unsigned __int64 v362; // [xsp+198h] [xbp-288h]
  __int64 *v363; // [xsp+1A0h] [xbp-280h]
  _QWORD *v364; // [xsp+1A8h] [xbp-278h]
  __int64 v365; // [xsp+1B0h] [xbp-270h]
  __int64 (__fastcall *v366)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, _QWORD *, _QWORD, _QWORD); // [xsp+1B8h] [xbp-268h]
  unsigned __int64 v367; // [xsp+1C0h] [xbp-260h]
  __int64 v368; // [xsp+1C8h] [xbp-258h]
  unsigned __int64 *v369; // [xsp+1D0h] [xbp-250h]
  unsigned int v370; // [xsp+1D8h] [xbp-248h]
  int v371; // [xsp+1DCh] [xbp-244h]
  __int64 v372; // [xsp+1E8h] [xbp-238h] BYREF
  unsigned __int64 v373; // [xsp+1F0h] [xbp-230h] BYREF
  __int64 v374; // [xsp+1F8h] [xbp-228h]
  _QWORD v375[13]; // [xsp+200h] [xbp-220h] BYREF
  unsigned __int64 *v376; // [xsp+268h] [xbp-1B8h]
  unsigned __int64 v377; // [xsp+270h] [xbp-1B0h]
  unsigned __int64 *v378; // [xsp+278h] [xbp-1A8h]
  unsigned __int64 v379; // [xsp+280h] [xbp-1A0h]
  __int64 (__fastcall *v380)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, unsigned __int64 *, _QWORD, _QWORD); // [xsp+288h] [xbp-198h]
  __int64 v381; // [xsp+290h] [xbp-190h]
  unsigned int v382; // [xsp+298h] [xbp-188h]
  unsigned int v383; // [xsp+29Ch] [xbp-184h]
  unsigned __int64 v384; // [xsp+2A0h] [xbp-180h] BYREF
  __int64 v385; // [xsp+2A8h] [xbp-178h]
  _QWORD v386[10]; // [xsp+2B0h] [xbp-170h] BYREF
  unsigned __int64 v387; // [xsp+300h] [xbp-120h]
  unsigned __int64 v388; // [xsp+308h] [xbp-118h]
  unsigned __int64 *v389; // [xsp+310h] [xbp-110h]
  unsigned __int64 v390; // [xsp+318h] [xbp-108h]
  unsigned __int64 v391; // [xsp+320h] [xbp-100h]
  unsigned __int64 *v392; // [xsp+328h] [xbp-F8h]
  unsigned __int64 v393; // [xsp+330h] [xbp-F0h]
  __int64 (__fastcall *v394)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, unsigned __int64, _QWORD, _QWORD); // [xsp+338h] [xbp-E8h]
  __int64 v395; // [xsp+340h] [xbp-E0h]
  unsigned int v396; // [xsp+348h] [xbp-D8h]
  int v397; // [xsp+34Ch] [xbp-D4h]
  unsigned __int64 v398; // [xsp+358h] [xbp-C8h] BYREF
  unsigned __int64 v399; // [xsp+360h] [xbp-C0h] BYREF
  __int64 v400; // [xsp+368h] [xbp-B8h]
  _QWORD v401[13]; // [xsp+370h] [xbp-B0h] BYREF
  _QWORD *v402; // [xsp+3D8h] [xbp-48h]
  __int64 v403; // [xsp+3E0h] [xbp-40h]
  unsigned __int64 *v404; // [xsp+3E8h] [xbp-38h]
  unsigned __int64 v405; // [xsp+3F0h] [xbp-30h]
  __int64 (__fastcall *v406)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, __int64 *, _QWORD, _QWORD); // [xsp+3F8h] [xbp-28h]
  __int64 v407; // [xsp+400h] [xbp-20h]
  unsigned int v408; // [xsp+408h] [xbp-18h]
  unsigned int v409; // [xsp+40Ch] [xbp-14h]
  unsigned __int64 v410; // [xsp+410h] [xbp-10h] BYREF
  __int64 v411; // [xsp+418h] [xbp-8h]
  __int64 vars0; // [xsp+420h] [xbp+0h] BYREF

  v13 = a1 + 104;
  v14 = 0;
  v15 = a2;
  v16 = *(_DWORD *)(a2 + 16);
  v17 = (__int64)a5;
  v19 = (_QWORD *)a4;
  v21 = a7;
  v411 = qword_48DD60;
  v22 = a2 + 48;
  if ( (v16 & 1) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v14 ^= qword_48DD68;
  }
  if ( !a7 )
  {
    if ( a5 )
      v23 = a5;
    else
      v23 = (__int64 *)v15;
    v24 = *(_QWORD *)(v15 + 8);
    v10 = *v23;
    if ( !a8 || (v37 = *(int **)(v15 + 32), v38 = *v37, LODWORD(v39) = *v37 & 7, !(_DWORD)v39) )
    {
LABEL_9:
      v404 = &v410;
      v405 = v22;
      v8 = v24;
      v19 = (_QWORD *)v15;
      v11 = (__int64 *)a6;
      v15 = v10;
      v10 = a4;
      v408 = a8;
      v409 = 0;
      v21 = (unsigned __int64)a3;
      v402 = a5;
      v406 = (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, __int64 *, _QWORD, _QWORD))v14;
      v407 = v13;
      while ( 1 )
      {
        v25 = 0;
        a3 = *(unsigned __int64 **)v21;
        if ( v11 )
          v25 = *v11;
        v17 = v10 - (_QWORD)a3;
        v26 = v8 - v15;
        if ( (__int64)(v8 - v15) > v10 - (__int64)a3 )
          v26 = v10 - (_QWORD)a3;
        v27 = v26 / 4;
        if ( v26 / 4 )
        {
          v28 = 0;
          do
          {
            *(_DWORD *)(v15 + 4 * v28) = bswap32(*((_DWORD *)a3 + v28));
            ++v28;
          }
          while ( v27 != v28 );
          v29 = 4 * v27;
          v9 = v15 + v29;
          v30 = (unsigned __int64 *)((char *)a3 + v29);
        }
        else
        {
          v9 = v15;
          v30 = *(unsigned __int64 **)v21;
        }
        *(_QWORD *)v21 = v30;
        a6 = 4;
        if ( v30 != (unsigned __int64 *)v10 )
        {
          if ( v8 < v9 + 4 )
            a6 = 5;
          else
            a6 = 7;
        }
        if ( v402 )
        {
          v8 = (unsigned int)a6;
          *v402 = v9;
          goto LABEL_35;
        }
        v31 = *((_DWORD *)v19 + 4);
        ++*((_DWORD *)v19 + 5);
        if ( (v31 & 1) != 0 )
        {
          v15 = (unsigned __int64)v19;
          a3 = (unsigned __int64 *)v21;
          v8 = (unsigned int)a6;
          v19 = (_QWORD *)v10;
          v34 = v408;
          v21 = v409;
          *(_QWORD *)v15 = v9;
          goto LABEL_31;
        }
        v403 = v25;
        if ( v9 <= v15 )
          goto LABEL_30;
        v410 = *v19;
        v32 = v406(v407, v405, v404, v9, 0, v11, 0, v408);
        if ( v32 == 4 )
        {
          if ( (_DWORD)a6 != 5 )
          {
LABEL_30:
            a3 = (unsigned __int64 *)v21;
            v15 = (unsigned __int64)v19;
            v34 = v408;
            v21 = v409;
            v8 = (unsigned int)a6;
            v19 = (_QWORD *)v10;
            goto LABEL_31;
          }
          goto LABEL_28;
        }
        v33 = v410;
        if ( v410 == v9 )
          break;
        v43 = 0;
        if ( v11 )
          v43 = *v11;
        if ( v43 == v403 )
        {
          *(_QWORD *)v21 -= v9 - v410;
          if ( v32 )
          {
LABEL_77:
            v15 = (unsigned __int64)v19;
            a3 = (unsigned __int64 *)v21;
            v19 = (_QWORD *)v10;
            v8 = v32;
            v34 = v408;
            v21 = v409;
LABEL_31:
            if ( v34 )
              v35 = (_DWORD)v8 == 7;
            else
              v35 = 0;
            if ( v35 )
            {
              v48 = (_QWORD *)*a3;
              v49 = (unsigned __int64)v19 - *a3;
              if ( v49 > 4 )
                goto LABEL_86;
              v50 = *(unsigned int **)(v15 + 32);
              v51 = 0;
              if ( v49 )
              {
                do
                {
                  *((_BYTE *)v50 + v51 + 4) = *((_BYTE *)v48 + v51);
                  ++v51;
                }
                while ( v49 != v51 );
                v21 = (unsigned int)v49;
              }
              v52 = *v50;
              v8 = 7;
              *a3 = (unsigned __int64)v19;
              *v50 = v52 & 0xFFFFFFF8 | v21;
            }
LABEL_35:
            if ( v411 == qword_48DD60 )
              return (unsigned int)v8;
            goto LABEL_89;
          }
        }
        else
        {
          v44 = v410 - v15;
          if ( (__int64)(v410 - v15) > v17 )
            v44 = v10 - (_QWORD)a3;
          v45 = v44 / 4;
          if ( v44 / 4 )
          {
            v46 = 0;
            do
            {
              *(_DWORD *)(v15 + 4 * v46) = bswap32(*((_DWORD *)a3 + v46));
              ++v46;
            }
            while ( v45 != v46 );
            a3 = (unsigned __int64 *)((char *)a3 + 4 * v45);
            v47 = v15 + 4 * v45;
          }
          else
          {
            v47 = v15;
          }
          *(_QWORD *)v21 = a3;
          if ( a3 == (unsigned __int64 *)v10 || v33 >= v47 + 4 )
          {
            if ( v47 != v33 )
              goto LABEL_87;
            sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_ucs4");
            goto LABEL_72;
          }
          if ( v47 != v33 )
            goto LABEL_87;
          if ( v47 != v15 )
            break;
          --*((_DWORD *)v19 + 5);
          if ( v32 )
            goto LABEL_77;
        }
LABEL_28:
        v15 = *v19;
      }
      if ( v32 )
        goto LABEL_77;
      goto LABEL_28;
    }
    if ( !a5 )
    {
      v39 = (int)v39;
      if ( *a3 < a4 && (unsigned __int64)(int)v39 <= 3 )
      {
        v41 = *a3 + 1;
        do
        {
          ++v39;
          *a3 = v41;
          v42 = v39 <= 3 && a4 > v41;
          *((_BYTE *)v37 + v39 + 3) = *(_BYTE *)(v41++ - 1);
        }
        while ( v42 );
      }
      if ( v39 <= 3 )
      {
        v8 = 7;
        *v37 = v38 & 0xFFFFFFF8 | v39;
        goto LABEL_35;
      }
      v10 += 4;
      *(_BYTE *)(v10 - 4) = *((_BYTE *)v37 + 7);
      *(_BYTE *)(v10 - 3) = *((_BYTE *)v37 + 6);
      *(_BYTE *)(v10 - 2) = *((_BYTE *)v37 + 5);
      *(_BYTE *)(v10 - 1) = *((_BYTE *)v37 + 4);
      *v37 &= 0xFFFFFFF8;
      goto LABEL_9;
    }
LABEL_88:
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs4");
    goto LABEL_89;
  }
LABEL_72:
  if ( v17 )
  {
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_ucs4");
LABEL_86:
    sub_41F250(
      "cnt_after <= sizeof (data->__statep->__value.__wchb)",
      "../iconv/skeleton.c",
      647,
      "__gconv_transform_internal_ucs4");
LABEL_87:
    sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs4");
    goto LABEL_88;
  }
  **(_QWORD **)(v15 + 32) = 0;
  if ( (*(_DWORD *)(v15 + 16) & 1) != 0 )
  {
    v8 = 0;
    goto LABEL_35;
  }
  if ( v411 == qword_48DD60 )
    return ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD, _QWORD, unsigned __int64, _QWORD))v14)(
             v13,
             v22,
             0,
             0,
             0,
             a6,
             (unsigned int)v21);
LABEL_89:
  v53 = sub_412340();
  v59 = 0;
  v401[0] = &vars0;
  v401[1] = v12;
  v401[8] = a3;
  v401[9] = v19;
  v61 = v60;
  v401[2] = v8;
  v401[3] = v9;
  v62 = *(_DWORD *)(v60 + 16);
  v401[4] = v17;
  v401[5] = v10;
  v64 = v63;
  v65 = (unsigned __int64)v55;
  v401[6] = v11;
  v401[7] = v15;
  v66 = v53 + 104;
  v67 = v54;
  v401[10] = a6;
  v401[11] = v21;
  v68 = v56;
  v400 = qword_48DD60;
  v69 = v60 + 48;
  if ( (v62 & 1) == 0 )
  {
    v59 = *(_QWORD *)(v53 + 144);
    if ( *(_QWORD *)(v53 + 104) )
      v59 ^= qword_48DD68;
  }
  if ( v57 )
  {
    if ( !v55 )
    {
      **(_QWORD **)(v61 + 32) = 0;
      if ( (*(_DWORD *)(v61 + 16) & 1) == 0 )
      {
        if ( v400 == qword_48DD60 )
          __asm { BR              X16 }
        goto LABEL_200;
      }
      goto LABEL_173;
    }
    goto LABEL_198;
  }
  v70 = &v398;
  if ( v55 )
    v71 = v55;
  else
    v71 = (_QWORD *)v61;
  v15 = *(_QWORD *)(v61 + 8);
  if ( !v56 )
    v70 = 0;
  v19 = (_QWORD *)*v71;
  v398 = 0;
  if ( v58 )
  {
    v86 = *(unsigned int **)(v61 + 32);
    v87 = *v86;
    v88 = *v86 & 7;
    if ( v88 )
    {
      if ( v55 )
      {
LABEL_199:
        sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_ucs4_internal");
        goto LABEL_200;
      }
      v89 = *v54;
      v90 = v88;
      if ( (unsigned __int64)v88 <= 3 && (unsigned __int64)v64 > v89 )
      {
        do
        {
          ++v89;
          ++v90;
          *v67 = v89;
          v92 = v90 <= 3 && (unsigned __int64)v64 > v89;
          *((_BYTE *)v86 + v90 + 3) = *(_BYTE *)(v89 - 1);
        }
        while ( v92 );
      }
      if ( v90 <= 3 )
        goto LABEL_185;
      if ( *((unsigned __int8 *)v86 + 4) > 0x80u )
      {
        if ( (v62 & 2) == 0 )
        {
          v10 = 6;
          *v67 = v89 + v88 - v90;
          goto LABEL_131;
        }
      }
      else
      {
        v19 = (_QWORD *)((char *)v19 + 4);
        *((_BYTE *)v19 - 4) = *((_BYTE *)v86 + 7);
        *((_BYTE *)v19 - 3) = *((_BYTE *)v86 + 6);
        *((_BYTE *)v19 - 2) = *((_BYTE *)v86 + 5);
        *((_BYTE *)v19 - 1) = *((_BYTE *)v86 + 4);
        v87 = *v86;
      }
      v62 = *(_DWORD *)(v61 + 16);
      *v86 = v87 & 0xFFFFFFF8;
    }
  }
  a6 = v61;
  v72 = v67;
  v61 = (unsigned __int64)v64;
  v67 = (unsigned __int64 *)v15;
  v64 = (unsigned int *)v19;
  v15 = v56;
  v19 = v70;
  v68 = 0;
  v389 = v55;
  v392 = &v399;
  v393 = v69;
  v394 = (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, unsigned __int64, _QWORD, _QWORD))v59;
  v395 = v66;
  v396 = v58;
  v397 = 0;
  while ( 1 )
  {
    v73 = *v72;
    if ( v15 )
      v68 += *(_QWORD *)v15;
    if ( v61 >= v73 + 4 )
    {
      v74 = (unsigned __int64)(v64 + 1);
      if ( v67 >= (unsigned __int64 *)(v64 + 1) )
      {
        v75 = v73 + 4;
        v8 = (unsigned __int64)v64;
        while ( 1 )
        {
          v77 = bswap32(*(_DWORD *)(v75 - 4));
          if ( (v77 & 0x80000000) != 0 )
          {
            if ( !v19 )
            {
              v8 = (unsigned __int64)v64;
              v65 = 6;
              goto LABEL_116;
            }
            if ( (v62 & 2) == 0 )
            {
              v78 = v389;
              *v72 = v75 - 4;
              v65 = 6;
              if ( v78 )
                goto LABEL_124;
              goto LABEL_117;
            }
            ++*v19;
            v76 = v75 + 4;
            if ( v61 < v75 + 4 )
              goto LABEL_112;
          }
          else
          {
            *(_DWORD *)v8 = v77;
            v76 = v75 + 4;
            v8 = v74;
            if ( v61 < v75 + 4 )
              goto LABEL_112;
          }
          v74 = v8 + 4;
          if ( (unsigned __int64)v67 < v8 + 4 )
            goto LABEL_112;
          v75 = v76;
        }
      }
    }
    v8 = (unsigned __int64)v64;
    v75 = *v72;
LABEL_112:
    *v72 = v75;
    v65 = 4;
    if ( v61 != v75 )
    {
      if ( (unsigned __int64)v67 < v8 + 4 )
        v65 = 5;
      else
        v65 = 7;
    }
LABEL_116:
    v78 = v389;
    if ( v389 )
    {
LABEL_124:
      v10 = (unsigned int)v65;
      *v78 = v8;
      goto LABEL_131;
    }
LABEL_117:
    ++*(_DWORD *)(a6 + 20);
    if ( (v62 & 1) != 0 )
    {
      v98 = *(_QWORD *)v15;
      *(_QWORD *)a6 = v8;
      v67 = v72;
      v64 = (unsigned int *)v61;
      v10 = (unsigned int)v65;
      v61 = a6;
      v84 = v396;
      v83 = v397;
      *(_QWORD *)v15 = v98 + v398;
      goto LABEL_127;
    }
    v390 = v73;
    v391 = v73 + 4;
    if ( (unsigned __int64)v64 >= v8 )
      goto LABEL_126;
    v399 = *(_QWORD *)a6;
    v79 = v394(v395, v393, v392, v8, 0, v15, 0, v396);
    if ( v79 != 4 )
      break;
    if ( (_DWORD)v65 != 5 )
    {
LABEL_126:
      v84 = v396;
      v83 = v397;
      v67 = v72;
      v64 = (unsigned int *)v61;
      v10 = (unsigned int)v65;
      v61 = a6;
LABEL_127:
      if ( v84 )
        v85 = (_DWORD)v10 == 7;
      else
        v85 = 0;
      if ( !v85 )
        goto LABEL_131;
      v99 = *v67;
      v100 = (unsigned __int64)v64 - *v67;
      if ( v100 <= 4 )
      {
        v101 = *(unsigned int **)(v61 + 32);
        v102 = 0;
        if ( v100 )
        {
          do
          {
            *((_BYTE *)v101 + v102 + 4) = *(_BYTE *)(v99 + v102);
            ++v102;
          }
          while ( v100 != v102 );
          v83 = v100;
        }
        v103 = *v101;
        *v67 = (unsigned __int64)v64;
        *v101 = v103 & 0xFFFFFFF8 | v83;
        goto LABEL_131;
      }
      sub_41F250(
        "cnt_after <= sizeof (data->__statep->__value.__wchb)",
        "../iconv/skeleton.c",
        647,
        "__gconv_transform_ucs4_internal");
LABEL_198:
      sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ucs4_internal");
      goto LABEL_199;
    }
LABEL_122:
    v64 = *(unsigned int **)a6;
    v68 = v398;
    v62 = *(_DWORD *)(a6 + 16);
  }
  v80 = v399;
  v81 = v390;
  v82 = v391;
  if ( v399 == v8 )
    goto LABEL_121;
  v93 = 0;
  if ( v15 )
    v93 = *(_QWORD *)v15;
  if ( v93 + v398 == v68 )
  {
    *v72 -= v8 - v399;
LABEL_121:
    if ( !v79 )
      goto LABEL_122;
    v67 = v72;
    v64 = (unsigned int *)v61;
    v84 = v396;
    v83 = v397;
    v61 = a6;
    v10 = v79;
    goto LABEL_127;
  }
  v94 = *(_DWORD *)(a6 + 16);
  *v72 = v390;
  if ( v61 < v82 )
  {
    v82 = v81;
    v96 = v64;
LABEL_177:
    *v72 = v82;
    if ( v61 == v82 )
      goto LABEL_183;
    if ( v80 >= (unsigned __int64)(v96 + 1) )
    {
LABEL_171:
      if ( v96 != (unsigned int *)v80 )
        goto LABEL_184;
      goto LABEL_172;
    }
LABEL_179:
    if ( (unsigned int *)v80 != v96 )
      goto LABEL_184;
    if ( (unsigned int *)v80 == v64 )
      --*(_DWORD *)(a6 + 20);
    goto LABEL_121;
  }
  v95 = v64 + 1;
  if ( v80 < (unsigned __int64)(v64 + 1) )
  {
    if ( v61 == v81 )
    {
      v96 = v64;
LABEL_183:
      if ( (unsigned int *)v80 != v96 )
        goto LABEL_184;
LABEL_172:
      sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_ucs4_internal");
LABEL_173:
      v10 = 0;
      goto LABEL_131;
    }
    v96 = v64;
    goto LABEL_179;
  }
  v96 = v64;
  while ( 1 )
  {
    v97 = bswap32(*(_DWORD *)(v82 - 4));
    if ( (v97 & 0x80000000) == 0 )
    {
      *v96 = v97;
      v96 = v95;
      goto LABEL_155;
    }
    if ( !v19 )
      break;
    if ( (v94 & 2) == 0 )
    {
      a6 = v82 - 4;
      *v72 = v82 - 4;
      goto LABEL_171;
    }
    ++*v19;
LABEL_155:
    if ( v61 < v82 + 4 )
      goto LABEL_177;
    v95 = v96 + 1;
    if ( v80 < (unsigned __int64)(v96 + 1) )
    {
      *v72 = v82;
      if ( v82 != v61 )
        goto LABEL_179;
      goto LABEL_183;
    }
    v82 += 4LL;
  }
  if ( (unsigned int *)v80 == v64 )
    goto LABEL_172;
LABEL_184:
  sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ucs4_internal");
LABEL_185:
  v10 = 7;
  *v86 = v87 & 0xFFFFFFF8 | v90;
LABEL_131:
  if ( v400 == qword_48DD60 )
    return (unsigned int)v10;
LABEL_200:
  v104 = sub_412340();
  v109 = v104 + 104;
  v386[0] = v401;
  v386[1] = v12;
  v386[8] = v61;
  v386[9] = v19;
  v111 = v110;
  v113 = v112;
  v386[2] = v8;
  v386[3] = v64;
  v114 = *(_DWORD *)(v110 + 16);
  v386[4] = v65;
  v386[5] = v10;
  v115 = v107;
  v386[6] = v67;
  v386[7] = v15;
  v116 = v105;
  v118 = v117;
  v385 = qword_48DD60;
  v119 = 0;
  v120 = v110 + 48;
  if ( (v114 & 1) == 0 )
  {
    v119 = *(_QWORD *)(v104 + 144);
    if ( *(_QWORD *)(v104 + 104) )
      v119 ^= qword_48DD68;
  }
  if ( v107 )
  {
    if ( v106 )
      goto LABEL_284;
    **(_QWORD **)(v111 + 32) = 0;
    if ( (*(_DWORD *)(v111 + 16) & 1) != 0 )
    {
      v10 = 0;
      goto LABEL_233;
    }
    if ( v385 == qword_48DD60 )
      __asm { BR              X16 }
LABEL_281:
    v387 = a6;
    v388 = v68;
    sub_412340();
    goto LABEL_282;
  }
  v387 = a6;
  v388 = v68;
  if ( v106 )
    v121 = v106;
  else
    v121 = (unsigned __int64 *)v111;
  v65 = *(_QWORD *)(v111 + 8);
  a6 = *v121;
  if ( !v108 )
    goto LABEL_208;
  v132 = *(int **)(v111 + 32);
  v133 = *v132;
  LODWORD(v134) = *v132 & 7;
  if ( !(_DWORD)v134 )
    goto LABEL_208;
  if ( v106 )
  {
LABEL_282:
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs4le");
    goto LABEL_283;
  }
  v135 = *v113;
  v134 = (int)v134;
  if ( (unsigned __int64)v105 > *v113 && (unsigned __int64)(int)v134 <= 3 )
  {
    do
    {
      ++v135;
      ++v134;
      *v113 = v135;
      v137 = v134 <= 3 && (unsigned __int64)v105 > v135;
      *((_BYTE *)v132 + v134 + 3) = *(_BYTE *)(v135 - 1);
    }
    while ( v137 );
  }
  if ( v134 <= 3 )
  {
LABEL_274:
    *v132 = v133 & 0xFFFFFFF8 | v134;
    goto LABEL_275;
  }
  a6 += 4LL;
  *(_BYTE *)(a6 - 4) = *((_BYTE *)v132 + 4);
  *(_BYTE *)(a6 - 3) = *((_BYTE *)v132 + 5);
  *(_BYTE *)(a6 - 2) = *((_BYTE *)v132 + 6);
  *(_BYTE *)(a6 - 1) = *((_BYTE *)v132 + 7);
  *v132 &= 0xFFFFFFF8;
LABEL_208:
  v378 = &v384;
  v379 = v120;
  v122 = v111;
  v111 = a6;
  a6 = v122;
  v376 = v106;
  v380 = (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, unsigned __int64 *, _QWORD, _QWORD))v119;
  v381 = v109;
  v382 = v108;
  v383 = 0;
  while ( 2 )
  {
    v8 = *v113;
    v68 = 0;
    if ( v118 )
      v68 = *v118;
    v115 = (signed __int64)v116 - v8;
    v123 = v65 - v111;
    v124 = *v113;
    if ( (__int64)(v65 - v111) > (__int64)((__int64)v116 - v8) )
      v123 = (__int64)v116 - v8;
    v125 = v123 + 3;
    if ( v123 >= 0 )
      v125 = v123;
    *v113 = v8 + (v125 & 0xFFFFFFFFFFFFFFFCLL);
    v126 = j_ifunc_40DC90(v111, v124, v125 & 0xFFFFFFFFFFFFFFFCLL) + (v125 & 0xFFFFFFFFFFFFFFFCLL);
    v10 = 4;
    if ( v116 != (unsigned __int64 *)*v113 )
    {
      if ( v65 < v126 + 4 )
        v10 = 5;
      else
        v10 = 7;
    }
    if ( v376 )
    {
      a6 = v387;
      v68 = v388;
      *v376 = v126;
      goto LABEL_233;
    }
    v127 = *(_DWORD *)(a6 + 16);
    ++*(_DWORD *)(a6 + 20);
    if ( (v127 & 1) != 0 )
    {
      v130 = v382;
      v115 = v383;
      v111 = a6;
      *(_QWORD *)a6 = v126;
      goto LABEL_228;
    }
    if ( v126 <= v111 )
      goto LABEL_227;
    v377 = v126;
    v384 = *(_QWORD *)a6;
    v128 = v380(v381, v379, v378, v126, 0, v118, 0, v382);
    if ( v128 == 4 )
    {
      if ( (_DWORD)v10 != 5 )
      {
LABEL_227:
        v130 = v382;
        v115 = v383;
        v111 = a6;
        goto LABEL_228;
      }
      goto LABEL_225;
    }
    v129 = v384;
    if ( v384 == v377 )
      goto LABEL_224;
    v138 = 0;
    if ( v118 )
      v138 = *v118;
    if ( v138 == v68 )
    {
      *v113 -= v377 - v384;
      if ( v128 )
        goto LABEL_271;
      goto LABEL_225;
    }
    v139 = v384 - v111;
    if ( (__int64)(v384 - v111) > v115 )
      v139 = (__int64)v116 - v8;
    LODWORD(v377) = v128;
    v140 = v139 + 3;
    if ( v139 >= 0 )
      v140 = v139;
    v115 = v140 & 0xFFFFFFFFFFFFFFFCLL;
    *v113 = v8 + v115;
    v141 = j_ifunc_40DC90(v111, v8, v115) + v115;
    if ( v116 == (unsigned __int64 *)*v113 )
    {
      if ( v384 != v141 )
        goto LABEL_273;
      goto LABEL_270;
    }
    v128 = v377;
    if ( v129 < v141 + 4 )
    {
      if ( v141 != v384 )
        goto LABEL_273;
      if ( v111 == v141 )
      {
        --*(_DWORD *)(a6 + 20);
        if ( v128 )
          goto LABEL_271;
      }
      else
      {
LABEL_224:
        if ( v128 )
          goto LABEL_271;
      }
LABEL_225:
      v111 = *(_QWORD *)a6;
      continue;
    }
    break;
  }
  if ( v141 != v384 )
  {
LABEL_273:
    sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs4le");
    goto LABEL_274;
  }
LABEL_270:
  sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_ucs4le");
LABEL_271:
  v130 = v382;
  v115 = v383;
  v111 = a6;
  v10 = v128;
LABEL_228:
  if ( v130 )
    v131 = (_DWORD)v10 == 7;
  else
    v131 = 0;
  if ( !v131 )
  {
    a6 = v387;
    v68 = v388;
    goto LABEL_233;
  }
  v142 = *v113;
  v143 = (unsigned __int64)v116 - *v113;
  if ( v143 <= 4 )
  {
    v144 = *(_DWORD **)(v111 + 32);
    v145 = 0;
    if ( v143 )
    {
      do
      {
        *((_BYTE *)v144 + v145 + 4) = *(_BYTE *)(v142 + v145);
        ++v145;
      }
      while ( v143 != v145 );
      v115 = (unsigned int)v143;
    }
    v146 = *v144;
    *v113 = (unsigned __int64)v116;
    *v144 = v146 & 0xFFFFFFF8 | v115;
LABEL_275:
    a6 = v387;
    v68 = v388;
    v10 = 7;
LABEL_233:
    if ( v385 == qword_48DD60 )
      return (unsigned int)v10;
    goto LABEL_281;
  }
LABEL_283:
  sub_41F250(
    "cnt_after <= sizeof (data->__statep->__value.__wchb)",
    "../iconv/skeleton.c",
    647,
    "__gconv_transform_internal_ucs4le");
LABEL_284:
  v387 = a6;
  v388 = v68;
  v147 = sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_ucs4le");
  v375[0] = v386;
  v375[1] = v12;
  v375[10] = a6;
  v375[11] = v68;
  v151 = v150;
  v375[2] = v8;
  v375[3] = v115;
  v152 = *(_DWORD *)(v150 + 16);
  v375[4] = v65;
  v375[5] = v10;
  v154 = v153;
  v155 = v148;
  v375[6] = v116;
  v375[7] = v118;
  v157 = v156;
  v158 = v150 + 48;
  v375[8] = v111;
  v375[9] = v113;
  v374 = qword_48DD60;
  v159 = v147 + 104;
  v366 = 0;
  v367 = v158;
  v368 = v147 + 104;
  v370 = v161;
  v371 = v160;
  if ( (v152 & 1) == 0 )
  {
    v162 = *(_QWORD *)(v147 + 104);
    v163 = *(_QWORD *)(v159 + 40);
    v366 = (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, _QWORD *, _QWORD, _QWORD))v163;
    if ( v162 )
      v366 = (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(v163 ^ qword_48DD68);
  }
  if ( v371 )
  {
    if ( !v148 )
    {
      **(_QWORD **)(v151 + 32) = 0;
      if ( (*(_DWORD *)(v151 + 16) & 1) == 0 )
      {
        if ( v374 == qword_48DD60 )
          __asm { BR              X16 }
        goto LABEL_399;
      }
      goto LABEL_373;
    }
    goto LABEL_395;
  }
  v164 = &v372;
  if ( v148 )
    v165 = v148;
  else
    v165 = (unsigned __int64 *)v151;
  a6 = *(_QWORD *)(v151 + 8);
  if ( !v149 )
    v164 = 0;
  v65 = *v165;
  v372 = 0;
  if ( !v370 )
    goto LABEL_294;
  v175 = *(unsigned int **)(v151 + 32);
  v176 = *v175;
  LODWORD(v177) = *v175 & 7;
  if ( !(_DWORD)v177 )
    goto LABEL_294;
  if ( v155 )
    goto LABEL_398;
  v178 = *v157;
  v177 = (int)v177;
  if ( (unsigned __int64)(int)v177 <= 3 && v178 < v154 )
  {
    do
    {
      ++v178;
      ++v177;
      *v157 = v178;
      v180 = v177 <= 3 && v154 > v178;
      *((_BYTE *)v175 + v177 + 3) = *(_BYTE *)(v178 - 1);
    }
    while ( v180 );
  }
  if ( v177 <= 3 )
  {
    v111 = 7;
    *v175 = v176 & 0xFFFFFFF8 | v177;
    goto LABEL_323;
  }
  if ( *((unsigned __int8 *)v175 + 7) > 0x80u )
  {
    if ( (v152 & 2) == 0 )
    {
      v111 = 6;
      goto LABEL_323;
    }
  }
  else
  {
    v65 += 4LL;
    *(_BYTE *)(v65 - 4) = *((_BYTE *)v175 + 4);
    *(_BYTE *)(v65 - 3) = *((_BYTE *)v175 + 5);
    *(_BYTE *)(v65 - 2) = *((_BYTE *)v175 + 6);
    *(_BYTE *)(v65 - 1) = *((_BYTE *)v175 + 7);
    v176 = *v175;
  }
  v152 = *(_DWORD *)(v151 + 16);
  *v175 = v176 & 0xFFFFFFF8;
LABEL_294:
  v166 = 0;
  v369 = &v373;
LABEL_295:
  v116 = (unsigned __int64 *)*v157;
  if ( v149 )
    v166 += *v149;
  v113 = (unsigned __int64 *)((char *)v116 + 4);
  if ( (unsigned __int64)v116 + 4 > v154 )
  {
    v8 = v65;
    if ( (unsigned __int64 *)v154 == v116 )
      v111 = 4;
    else
      v111 = 7;
    *v157 = (unsigned __int64)v116;
LABEL_309:
    if ( v155 )
      goto LABEL_317;
    goto LABEL_310;
  }
  v167 = v65 + 4;
  if ( a6 < v65 + 4 )
  {
    v169 = (unsigned __int64)v116 + 4;
    v8 = v65;
    v168 = (char *)*v157;
LABEL_307:
    *v157 = (unsigned __int64)v168;
    if ( (char *)v154 != v168 )
    {
      v111 = 7;
      if ( v154 < v169 )
        goto LABEL_309;
      v170 = v8 + 4;
      goto LABEL_326;
    }
    goto LABEL_328;
  }
  v168 = (char *)v116 + 4;
  v8 = v65;
  while ( 2 )
  {
    v171 = *((_DWORD *)v168 - 1);
    if ( (v171 & 0x80000000) == 0 )
    {
      *(_DWORD *)v8 = v171;
      v169 = (unsigned __int64)(v168 + 4);
      v8 = v167;
      if ( v154 < (unsigned __int64)(v168 + 4) )
        goto LABEL_307;
LABEL_301:
      v167 = v8 + 4;
      v170 = v8 + 4;
      if ( a6 < v8 + 4 )
      {
        *v157 = (unsigned __int64)v168;
        if ( (char *)v154 != v168 )
        {
LABEL_326:
          if ( a6 < v170 )
          {
            v111 = 5;
            goto LABEL_309;
          }
          sub_41F250("*outptrp + 4 > outend", "gconv_simple.c", 484, "ucs4le_internal_loop");
LABEL_398:
          sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_ucs4le_internal");
          goto LABEL_399;
        }
LABEL_328:
        v111 = 4;
        goto LABEL_309;
      }
      v168 = (char *)v169;
      continue;
    }
    break;
  }
  if ( !v164 )
  {
    v8 = v65;
    v111 = 6;
    goto LABEL_309;
  }
  if ( (v152 & 2) != 0 )
  {
    v169 = (unsigned __int64)(v168 + 4);
    ++*v164;
    if ( v154 < (unsigned __int64)(v168 + 4) )
      goto LABEL_307;
    goto LABEL_301;
  }
  *v157 = (unsigned __int64)(v168 - 4);
  v111 = 6;
  if ( v155 )
  {
LABEL_317:
    *v155 = v8;
    goto LABEL_323;
  }
LABEL_310:
  ++*(_DWORD *)(v151 + 20);
  if ( (v152 & 1) != 0 )
  {
    v186 = *v149;
    *(_QWORD *)v151 = v8;
    *v149 = v186 + v372;
    goto LABEL_319;
  }
  v363 = v164;
  v365 = v166;
  if ( v65 >= v8 )
    goto LABEL_319;
  v364 = v149;
  v373 = *(_QWORD *)v151;
  v172 = v366(v368, v367, v369, v8, 0, v149, 0, v370);
  v164 = v363;
  v149 = v364;
  if ( v172 != 4 )
  {
    v173 = v373;
    if ( v373 == v8 )
      goto LABEL_314;
    v181 = 0;
    if ( v364 )
      v181 = *v364;
    if ( v365 == v181 + v372 )
    {
      *v157 -= v8 - v373;
      goto LABEL_314;
    }
    v182 = *(_DWORD *)(v151 + 16);
    *v157 = (unsigned __int64)v116;
    if ( (unsigned __int64)v113 > v154 )
    {
      v184 = (_DWORD *)v65;
      v113 = v116;
LABEL_377:
      *v157 = (unsigned __int64)v113;
    }
    else
    {
      v183 = (_DWORD *)(v65 + 4);
      if ( v173 >= v65 + 4 )
      {
        v184 = (_DWORD *)v65;
        while ( 1 )
        {
          v185 = *((_DWORD *)v113 - 1);
          if ( v185 < 0 )
          {
            if ( !v164 )
              goto LABEL_392;
            if ( (v182 & 2) == 0 )
            {
              *v157 = (unsigned __int64)v113 - 4;
              goto LABEL_371;
            }
            ++*v164;
          }
          else
          {
            *v184 = v185;
            v184 = v183;
          }
          if ( v154 < (unsigned __int64)v113 + 4 )
            goto LABEL_377;
          v183 = v184 + 1;
          if ( v173 < (unsigned __int64)(v184 + 1) )
          {
            *v157 = (unsigned __int64)v113;
            if ( v113 == (unsigned __int64 *)v154 )
              goto LABEL_371;
            if ( v184 != (_DWORD *)v173 )
              goto LABEL_391;
            if ( v184 == (_DWORD *)v65 )
              goto LABEL_381;
LABEL_314:
            if ( v172 )
            {
              v111 = v172;
              goto LABEL_319;
            }
LABEL_315:
            v65 = *(_QWORD *)v151;
            v166 = v372;
            v152 = *(_DWORD *)(v151 + 16);
            goto LABEL_295;
          }
          v113 = (unsigned __int64 *)((char *)v113 + 4);
        }
      }
      if ( (unsigned __int64 *)v154 != v116 )
      {
        if ( v173 == v65 )
        {
LABEL_381:
          --*(_DWORD *)(v151 + 20);
          goto LABEL_314;
        }
        do
        {
LABEL_391:
          sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ucs4le_internal");
LABEL_392:
          ;
        }
        while ( v173 != v65 );
LABEL_372:
        sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_ucs4le_internal");
LABEL_373:
        v111 = 0;
        goto LABEL_323;
      }
LABEL_396:
      v184 = (_DWORD *)v65;
    }
LABEL_371:
    if ( (_DWORD *)v173 != v184 )
      goto LABEL_391;
    goto LABEL_372;
  }
  if ( (_DWORD)v111 == 5 )
    goto LABEL_315;
LABEL_319:
  if ( v370 )
    v174 = (_DWORD)v111 == 7;
  else
    v174 = 0;
  if ( v174 )
  {
    v187 = *v157;
    v188 = v154 - *v157;
    if ( v188 <= 4 )
    {
      v189 = *(unsigned int **)(v151 + 32);
      v190 = 0;
      if ( v188 )
      {
        do
        {
          *((_BYTE *)v189 + v190 + 4) = *(_BYTE *)(v187 + v190);
          ++v190;
        }
        while ( v188 != v190 );
        v371 = v188;
      }
      v191 = v371;
      v192 = *v189 & 0xFFFFFFF8;
      *v157 = v154;
      *v189 = v192 | v191;
      goto LABEL_323;
    }
    sub_41F250(
      "cnt_after <= sizeof (data->__statep->__value.__wchb)",
      "../iconv/skeleton.c",
      647,
      "__gconv_transform_ucs4le_internal");
LABEL_395:
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ucs4le_internal");
    goto LABEL_396;
  }
LABEL_323:
  if ( v374 == qword_48DD60 )
    return (unsigned int)v111;
LABEL_399:
  v193 = sub_412340();
  v352[0] = v375;
  v352[1] = v12;
  v359 = v111;
  v360 = v113;
  v198 = v197;
  v355 = v65;
  v356 = v155;
  v199 = *(_DWORD *)(v197 + 16);
  v357 = v116;
  v358 = v157;
  v201 = v200;
  v202 = v197 + 48;
  v361 = a6;
  v362 = v151;
  v203 = v194;
  v205 = v204;
  v351 = qword_48DD60;
  v206 = v193 + 104;
  v343 = 0;
  v344 = v202;
  v207 = v195;
  v345 = v193 + 104;
  v346 = v208;
  if ( (v199 & 1) == 0 )
  {
    v209 = *(_QWORD *)(v193 + 104);
    v210 = *(_QWORD *)(v206 + 40);
    v343 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64 **, unsigned __int64 *, _QWORD, unsigned __int64, _QWORD, _QWORD))v210;
    if ( v209 )
      v343 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64 **, unsigned __int64 *, _QWORD, unsigned __int64, _QWORD, _QWORD))(v210 ^ qword_48DD68);
  }
  if ( !v196 )
  {
    v353 = v8;
    v354 = v154;
    if ( v194 )
      v211 = (unsigned __int64 **)v194;
    else
      v211 = (unsigned __int64 **)v198;
    v151 = *(_QWORD *)(v198 + 8);
    if ( v195 )
      v212 = &v349;
    else
      v212 = 0;
    v213 = 0;
    v157 = *v211;
    v348 = v212;
    v347 = &v350;
    v349 = 0;
    while ( 1 )
    {
      v214 = *v201;
      if ( v207 )
        v213 += *(_QWORD *)v207;
      if ( v205 == v214 )
      {
        v219 = v205;
        v217 = v157;
        v111 = 4;
        goto LABEL_421;
      }
      v215 = (unsigned __int64 *)((char *)v157 + 4);
      if ( v151 >= (unsigned __int64)v157 + 4 )
      {
        v216 = v214 + 1;
        v217 = v157;
        v111 = 4;
        do
        {
          v218 = *(unsigned __int8 *)(v216 - 1);
          v219 = v216;
          if ( (v218 & 0x80) != 0 )
          {
            if ( !v348 || (v199 & 2) == 0 )
            {
              v219 = v216 - 1;
              v111 = 6;
              goto LABEL_421;
            }
            v111 = 6;
            ++*v348;
            if ( v205 == v216 )
              goto LABEL_421;
          }
          else
          {
            *(_DWORD *)v217 = v218;
            v217 = v215;
            if ( v205 == v216 )
              goto LABEL_421;
          }
          v215 = (unsigned __int64 *)((char *)v217 + 4);
          ++v216;
        }
        while ( v151 >= (unsigned __int64)v217 + 4 );
        *v201 = v219;
        v111 = 5;
        if ( v203 )
          goto LABEL_429;
        goto LABEL_422;
      }
      while ( 1 )
      {
        v219 = v214;
        v217 = v157;
        v111 = 5;
LABEL_421:
        *v201 = v219;
        if ( v203 )
        {
LABEL_429:
          *(_QWORD *)v203 = v217;
          v8 = v353;
          v154 = v354;
          goto LABEL_430;
        }
LABEL_422:
        v220 = *(_DWORD *)(v198 + 16);
        ++*(_DWORD *)(v198 + 20);
        if ( (v220 & 1) != 0 )
        {
          v231 = *(_QWORD *)v207;
          *(_QWORD *)v198 = v217;
          v8 = v353;
          v154 = v354;
          *(_QWORD *)v207 = v231 + v349;
          goto LABEL_430;
        }
        v342 = v214;
        if ( v217 <= v157 )
        {
          v221 = v111;
          goto LABEL_426;
        }
        v350 = *(unsigned __int64 **)v198;
        v221 = v343(v345, v344, v347, v217, 0, v207, 0, v346);
        if ( v221 == 4 )
        {
          v221 = v111;
          if ( (_DWORD)v111 != 5 )
            goto LABEL_426;
          goto LABEL_427;
        }
        v222 = (unsigned __int64)v350;
        v223 = v342;
        if ( v217 == v350 )
          goto LABEL_426;
        v224 = 0;
        if ( v207 )
          v224 = *(_QWORD *)v207;
        if ( v224 + v349 == v213 )
        {
          v232 = (char *)v217 - (char *)v350 + 3;
          if ( (char *)v217 - (char *)v350 >= 0 )
            v232 = (char *)v217 - (char *)v350;
          *v201 -= v232 >> 2;
          goto LABEL_426;
        }
        v225 = *(_DWORD *)(v198 + 16);
        *v201 = v342;
        if ( v205 != v223 )
          break;
        if ( (unsigned __int64 *)v222 != v157 )
          goto LABEL_448;
LABEL_467:
        v221 = sub_41F250(
                 "nstatus == __GCONV_FULL_OUTPUT",
                 "../iconv/skeleton.c",
                 595,
                 "__gconv_transform_ascii_internal");
LABEL_468:
        if ( (unsigned __int64 *)v222 == v157 )
          goto LABEL_463;
LABEL_448:
        sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ascii_internal");
      }
      v226 = (unsigned __int64 *)((char *)v157 + 4);
      if ( v222 < (unsigned __int64)v157 + 4 )
        goto LABEL_468;
      v227 = v223 + 1;
      v228 = v157;
      do
      {
        v229 = *(unsigned __int8 *)(v227 - 1);
        v230 = v227;
        if ( (v229 & 0x80) != 0 )
        {
          if ( !v348 || (v225 & 2) == 0 )
          {
            *v201 = v227 - 1;
            if ( v228 == (unsigned __int64 *)v222 )
              goto LABEL_467;
            goto LABEL_448;
          }
          ++*v348;
        }
        else
        {
          *(_DWORD *)v228 = v229;
          v228 = v226;
        }
        if ( v205 == v227 )
        {
          *v201 = v205;
          if ( v228 != (unsigned __int64 *)v222 )
            goto LABEL_448;
          goto LABEL_467;
        }
        v226 = (unsigned __int64 *)((char *)v228 + 4);
        ++v227;
      }
      while ( v222 >= (unsigned __int64)v228 + 4 );
      *v201 = v230;
      if ( v228 != (unsigned __int64 *)v222 )
        goto LABEL_448;
      if ( v228 != v157 )
        goto LABEL_426;
LABEL_463:
      --*(_DWORD *)(v198 + 20);
LABEL_426:
      if ( v221 )
      {
        v8 = v353;
        v154 = v354;
        v111 = v221;
        goto LABEL_430;
      }
LABEL_427:
      v157 = *(unsigned __int64 **)v198;
      v213 = v349;
      v199 = *(_DWORD *)(v198 + 16);
    }
  }
  if ( v194 )
  {
    v353 = v8;
    v354 = v154;
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ascii_internal");
    goto LABEL_473;
  }
  **(_QWORD **)(v198 + 32) = 0;
  if ( (*(_DWORD *)(v198 + 16) & 1) == 0 )
  {
    if ( v351 == qword_48DD60 )
      __asm { BR              X16 }
    goto LABEL_473;
  }
  v111 = 0;
LABEL_430:
  if ( v351 == qword_48DD60 )
    return (unsigned int)v111;
LABEL_473:
  v353 = v8;
  v354 = v154;
  v239 = sub_412340();
  v240 = v233 + 48;
  v330 = v352;
  v331 = v12;
  v241 = v235;
  v242 = *(_DWORD *)(v233 + 16);
  v332 = v8;
  v333 = v154;
  v243 = v237;
  v245 = v244;
  v334 = v201;
  v335 = v203;
  v246 = v233;
  v247 = v239 + 104;
  v338 = v111;
  v339 = v198;
  v248 = 0;
  v249 = v236;
  v340 = v205;
  v341 = v151;
  v250 = v234;
  v329 = qword_48DD60;
  if ( (v242 & 1) == 0 )
  {
    v248 = *(_QWORD *)(v239 + 144);
    if ( *(_QWORD *)(v239 + 104) )
      v248 ^= qword_48DD68;
  }
  if ( v237 )
  {
    if ( v235 )
      goto LABEL_620;
    **(_QWORD **)(v233 + 32) = 0;
    if ( (*(_DWORD *)(v233 + 16) & 1) == 0 )
    {
      if ( v329 == qword_48DD60 )
        __asm { BR              X16 }
      goto LABEL_624;
    }
    goto LABEL_566;
  }
  v336 = v207;
  v337 = v157;
  if ( v235 )
    v251 = v235;
  else
    v251 = (unsigned __int64 *)v233;
  v252 = &v323;
  v157 = *(unsigned __int64 **)(v233 + 8);
  if ( !v236 )
    v252 = 0;
  v207 = *v251;
  v323 = 0;
  if ( !v238 || (v253 = *(unsigned int **)(v233 + 32), (v254 = *v253 & 7) == 0) )
  {
    v266 = *v234;
    v267 = 0;
    goto LABEL_500;
  }
  if ( v235 )
    goto LABEL_621;
  v255 = *v234;
  v325 = *v250;
  v326 = (_BYTE *)v207;
  if ( v254 > 4 )
    goto LABEL_622;
  v203 = &v327;
  v256 = v253 + 1;
  v257 = &v327;
  v258 = 0;
  do
  {
    v259 = *((_BYTE *)v256 + v258++);
    *(_BYTE *)v257 = v259;
    v257 = (unsigned int *)((char *)v257 + 1);
  }
  while ( v258 < (*v253 & 7) );
  if ( v245 < (unsigned __int64)v255 - v258 + 4 )
  {
    *v250 = (unsigned int *)v245;
    v297 = v245 - (_QWORD)v255 + v258;
    if ( v297 > 4 )
      goto LABEL_623;
    v298 = (unsigned int *)((char *)v255 + 1);
    if ( v258 < v297 )
    {
      do
      {
        v325 = v298;
        v298 = (unsigned int *)((char *)v298 + 1);
        *((_BYTE *)v256 + v258++) = *((_BYTE *)v298 - 2);
      }
      while ( v297 != v258 );
    }
    goto LABEL_587;
  }
  v260 = (unsigned int *)((char *)v255 + 1);
  if ( v207 >= (unsigned __int64)v157 )
  {
LABEL_568:
    v207 = v336;
    v157 = v337;
    v279 = 5;
    goto LABEL_519;
  }
  do
  {
    v261 = v258++;
    v325 = v260;
    v262 = v258 <= 3 && v245 > (unsigned __int64)v260;
    v328[v258 - 5] = *((_BYTE *)v260 - 1);
    v260 = (unsigned int *)((char *)v260 + 1);
  }
  while ( v262 );
  v325 = &v327;
  if ( v327 <= 0x7F )
  {
    v326 = (_BYTE *)(v207 + 1);
    *(_BYTE *)v207 = v327;
    v263 = v325 + 1;
    v325 = v263;
    if ( v263 != &v327 )
      goto LABEL_496;
    goto LABEL_570;
  }
  if ( v327 >> 7 == 7168 )
  {
    v264 = 4;
    v325 = (unsigned int *)v328;
    goto LABEL_497;
  }
  if ( !v252 )
    goto LABEL_612;
  if ( (v242 & 8) == 0 )
  {
    if ( (v242 & 2) == 0 )
      goto LABEL_612;
    v299 = *v252;
    v263 = (unsigned int *)v328;
    v325 = (unsigned int *)v328;
    *v252 = (unsigned __int64 *)((char *)v299 + 1);
    goto LABEL_496;
  }
  v307 = v239;
  v309 = v252;
  v310 = v253;
  v312 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v248;
  v314 = v239 + 104;
  v316 = v240;
  v318 = v242;
  v319 = v261;
  v322 = v238;
  v302 = sub_41D410(v239, v246);
  v239 = v307;
  v252 = v309;
  v279 = v302;
  v253 = v310;
  v248 = (unsigned __int64)v312;
  v35 = v302 == 6;
  v247 = v314;
  v240 = v316;
  v241 = 0;
  v263 = v325;
  v238 = v322;
  if ( v35 )
  {
    if ( (v318 & 2) != 0 )
      goto LABEL_626;
    goto LABEL_611;
  }
  if ( v279 == 5 )
  {
    if ( v325 != &v327 )
      goto LABEL_496;
    goto LABEL_568;
  }
  if ( v325 != &v327 )
    goto LABEL_496;
  if ( v279 != 7 )
  {
    if ( v279 )
      goto LABEL_549;
LABEL_570:
    v266 = *v250;
    v267 = v323;
    v242 = *(_DWORD *)(v246 + 16);
    goto LABEL_500;
  }
  if ( v258 == 4 )
    goto LABEL_618;
  v303 = *v310 & 0xFFFFFFF8;
  *v250 = (unsigned int *)((char *)*v250 + v258 - (*v310 & 7LL));
  if ( (__int64)v258 <= v303 )
    goto LABEL_617;
  if ( v258 > 4 )
    goto LABEL_616;
  v250 = (unsigned int **)(v319 + 2);
  v304 = 1;
  *v310 = v303 | v258;
  do
  {
    *((_BYTE *)v310 + v304 + 3) = v328[v304 - 5];
    ++v304;
  }
  while ( v250 != (unsigned int **)v304 );
LABEL_587:
  v207 = v336;
  v157 = v337;
  v279 = 7;
LABEL_519:
  while ( 2 )
  {
    if ( v329 != qword_48DD60 )
    {
LABEL_624:
      v336 = v207;
      v337 = v157;
      sub_412340();
      do
      {
        v263 = (unsigned int *)sub_41F250(
                                 "inptr - bytebuf > (state->__count & 7)",
                                 "../iconv/loop.c",
                                 385,
                                 "internal_ascii_loop_single");
LABEL_626:
        v305 = *v252;
        v325 = ++v263;
        *v252 = (unsigned __int64 *)((char *)v305 + 1);
LABEL_611:
        if ( v263 == v203 )
        {
LABEL_612:
          v207 = v336;
          v157 = v337;
          v279 = 6;
          goto LABEL_519;
        }
LABEL_496:
        v264 = (char *)v263 - (char *)v203;
LABEL_497:
        v265 = *v253;
      }
      while ( (*v253 & 7LL) >= v264 );
      v242 = *(_DWORD *)(v246 + 16);
      v266 = (unsigned int *)((char *)*v250 + v264 - (v265 & 7));
      *v250 = v266;
      v267 = v323;
      v207 = (unsigned __int64)v326;
      *v253 = v265 & 0xFFFFFFF8;
LABEL_500:
      v268 = v266;
      v203 = (unsigned int *)v250;
      v250 = (unsigned int **)v157;
      v157 = v249;
      v249 = v267;
      v269 = v246;
      v246 = v207;
      v308 = v238;
      v270 = v242;
      v306 = v241;
      v311 = (__int64 (__fastcall *)(__int64, unsigned __int64, _BYTE **, _BYTE *, _QWORD, unsigned __int64 *, _QWORD, _QWORD))v248;
      v313 = v247;
      v315 = v240;
      v317 = v252;
      v320 = v239;
LABEL_501:
      if ( v157 )
        v249 = (unsigned __int64 *)((char *)v249 + *v157);
      v325 = v268;
      v326 = (_BYTE *)v246;
      v271 = (_BYTE *)v246;
      if ( (unsigned int *)v245 != v268 )
      {
        v272 = v268;
        v207 = 4;
        while ( 1 )
        {
          v273 = v272 + 1;
          if ( v245 < (unsigned __int64)(v272 + 1) )
          {
            *(_QWORD *)v203 = v325;
            v275 = v306;
            v207 = 7;
            if ( !v306 )
              goto LABEL_511;
            goto LABEL_518;
          }
          if ( v250 <= (unsigned int **)v271 )
          {
            v272 = v325;
            v207 = 5;
            goto LABEL_510;
          }
          v274 = *v272;
          if ( *v272 <= 0x7F )
          {
            v326 = v271 + 1;
            *v271 = v274;
            v271 = v326;
            v272 = ++v325;
            goto LABEL_509;
          }
          if ( v274 >> 7 == 7168 )
          {
            ++v272;
            v325 = v273;
            goto LABEL_509;
          }
          if ( !v317 )
          {
            v272 = v325;
            v207 = 6;
            goto LABEL_510;
          }
          if ( (*(_DWORD *)(v269 + 16) & 8) != 0 )
          {
            v321 = v270;
            v290 = sub_41D410(v320, v269);
            v207 = v290;
            v270 = v321;
            if ( v290 != 6 )
            {
              v272 = v325;
              v271 = v326;
              if ( (_DWORD)v207 == 5 )
                goto LABEL_510;
              goto LABEL_509;
            }
            v271 = v326;
          }
          v272 = v325;
          if ( (v270 & 2) == 0 )
          {
            v207 = 6;
            goto LABEL_510;
          }
          v272 = v325 + 1;
          v207 = 6;
          ++v325;
          *v317 = (unsigned __int64 *)((char *)*v317 + 1);
LABEL_509:
          if ( (unsigned int *)v245 == v272 )
            goto LABEL_510;
        }
      }
      v272 = (unsigned int *)v245;
      v207 = 4;
LABEL_510:
      *(_QWORD *)v203 = v272;
      v275 = v306;
      if ( v306 )
      {
LABEL_518:
        v279 = v207;
        v207 = v336;
        v157 = v337;
        *v275 = (unsigned __int64)v271;
        continue;
      }
LABEL_511:
      v276 = *(_DWORD *)(v269 + 16);
      ++*(_DWORD *)(v269 + 20);
      if ( (v276 & 1) != 0 )
      {
        v279 = v207;
        v246 = v269;
        v287 = v308;
        v250 = (unsigned int **)v203;
        v288 = (unsigned __int64)v323 + *v157;
        *(_QWORD *)v269 = v271;
        *v157 = v288;
        goto LABEL_545;
      }
      if ( v246 >= (unsigned __int64)v271 )
      {
        v277 = v207;
        goto LABEL_515;
      }
      v324 = *(_BYTE **)v269;
      v277 = v311(v313, v315, &v324, v271, 0, v157, 0, v308);
      if ( v277 == 4 )
      {
        v277 = v207;
        if ( (_DWORD)v207 != 5 )
          goto LABEL_515;
        goto LABEL_516;
      }
      v278 = (unsigned __int64)v324;
      if ( v324 == v271 )
        goto LABEL_515;
      v280 = 0;
      if ( v157 )
        v280 = *v157;
      if ( (unsigned __int64 *)((char *)v323 + v280) == v249 )
      {
        *(_QWORD *)v203 -= 4 * (v271 - v324);
LABEL_515:
        if ( !v277 )
        {
LABEL_516:
          v268 = *(unsigned int **)v203;
          v246 = *(_QWORD *)v269;
          v249 = v323;
          v270 = *(_DWORD *)(v269 + 16);
          goto LABEL_501;
        }
        v287 = v308;
        v246 = v269;
        v250 = (unsigned int **)v203;
        v279 = v277;
LABEL_545:
        if ( v287 )
          v289 = v279 == 7;
        else
          v289 = 0;
        if ( v289 )
        {
          v291 = *v250;
          v292 = v245 - (_QWORD)*v250;
          if ( v292 > 4 )
            goto LABEL_619;
          v293 = *(unsigned int **)(v246 + 32);
          v294 = 0;
          if ( v292 )
          {
            do
            {
              *((_BYTE *)v293 + v294 + 4) = *((_BYTE *)v291 + v294);
              ++v294;
            }
            while ( v292 != v294 );
            v243 = v292;
          }
          v207 = v336;
          v157 = v337;
          v295 = *v293 & 0xFFFFFFF8;
          *v250 = (unsigned int *)v245;
          *v293 = v295 | v243;
        }
        else
        {
LABEL_549:
          v207 = v336;
          v157 = v337;
        }
        continue;
      }
      v281 = *(_DWORD *)(v269 + 16);
      *(_QWORD *)v203 = v268;
      v325 = v268;
      v326 = (_BYTE *)v246;
      if ( (unsigned int *)v245 != v268 )
      {
        v282 = (_BYTE *)v246;
        v207 = v278;
        v249 = (unsigned __int64 *)v277;
        v283 = 4;
        while ( 1 )
        {
          v284 = v268 + 1;
          if ( v245 < (unsigned __int64)(v268 + 1) )
          {
LABEL_563:
            v250 = (unsigned int **)v203;
            v203 = v325;
LABEL_564:
            *v250 = v203;
            if ( v324 == v282 )
              goto LABEL_615;
            goto LABEL_565;
          }
          if ( v207 <= (unsigned __int64)v282 )
          {
            v296 = v324;
            *(_QWORD *)v203 = v325;
            v277 = (unsigned int)v249;
            if ( v296 != v282 )
              goto LABEL_565;
            goto LABEL_542;
          }
          v285 = *v268;
          if ( *v268 > 0x7F )
          {
            if ( v285 >> 7 == 7168 )
            {
              ++v268;
              v325 = v284;
            }
            else
            {
              if ( !v317 )
                goto LABEL_563;
              if ( (*(_DWORD *)(v269 + 16) & 8) == 0 )
                goto LABEL_581;
              v300 = sub_41D410(v320, v269);
              v283 = v300;
              if ( v300 == 6 )
              {
                v282 = v326;
LABEL_581:
                if ( (v281 & 2) == 0 )
                {
                  v250 = (unsigned int **)v203;
                  v203 = v325;
                  goto LABEL_564;
                }
                v268 = v325 + 1;
                v283 = 6;
                ++v325;
                *v317 = (unsigned __int64 *)((char *)*v317 + 1);
                goto LABEL_539;
              }
              v268 = v325;
              v282 = v326;
              if ( v300 == 5 )
              {
                v301 = v324;
                *(_QWORD *)v203 = v325;
                v277 = (unsigned int)v249;
                if ( v301 != v282 )
                  goto LABEL_565;
                goto LABEL_542;
              }
            }
          }
          else
          {
            v326 = v282 + 1;
            *v282 = v285;
            v282 = v326;
            v268 = ++v325;
          }
LABEL_539:
          if ( (unsigned int *)v245 == v268 )
          {
            v286 = v324;
            *(_QWORD *)v203 = v245;
            v277 = (unsigned int)v249;
            if ( v286 != v282 )
              goto LABEL_565;
            if ( v283 == 5 )
            {
LABEL_542:
              if ( v282 == (_BYTE *)v246 )
                --*(_DWORD *)(v269 + 20);
              goto LABEL_515;
            }
LABEL_615:
            sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_ascii");
LABEL_616:
            sub_41F250(
              "inend - inptr <= sizeof (state->__value.__wchb)",
              "../iconv/loop.c",
              414,
              "internal_ascii_loop_single");
LABEL_617:
            sub_41F250("inend - inptr > (state->__count & ~7)", "../iconv/loop.c", 413, "internal_ascii_loop_single");
LABEL_618:
            sub_41F250("inend != &bytebuf[MAX_NEEDED_INPUT]", "../iconv/loop.c", 403, "internal_ascii_loop_single");
LABEL_619:
            sub_41F250(
              "cnt_after <= sizeof (data->__statep->__value.__wchb)",
              "../iconv/skeleton.c",
              647,
              "__gconv_transform_internal_ascii");
LABEL_620:
            v336 = v207;
            v337 = v157;
            sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_ascii");
LABEL_621:
            sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ascii");
LABEL_622:
            sub_41F250(
              "(state->__count & 7) <= sizeof (state->__value)",
              "../iconv/loop.c",
              309,
              "internal_ascii_loop_single");
LABEL_623:
            sub_41F250(
              "inlen_after <= sizeof (state->__value.__wchb)",
              "../iconv/loop.c",
              338,
              "internal_ascii_loop_single");
            goto LABEL_624;
          }
        }
      }
      if ( v278 == v246 )
        goto LABEL_615;
LABEL_565:
      sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ascii");
LABEL_566:
      v279 = 0;
      continue;
    }
    return v279;
  }
}
