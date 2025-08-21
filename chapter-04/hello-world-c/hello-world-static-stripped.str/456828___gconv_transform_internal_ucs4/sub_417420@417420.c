__int64 __fastcall sub_417420(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        __int64 *a5,
        unsigned __int64 a6,
        unsigned int a7,
        __int64 a8,
        long double a9)
{
  unsigned __int64 v9; // x19
  unsigned __int64 v10; // x20
  unsigned __int64 v11; // x22
  __int64 *v12; // x23
  __int64 v13; // x30
  __int64 v14; // x14
  unsigned __int64 v15; // x13
  unsigned __int64 v16; // x24
  int v17; // w8
  __int64 *v18; // x21
  unsigned __int64 v20; // x26
  unsigned __int64 v22; // x28
  __int64 v23; // x1
  unsigned __int64 *v24; // x0
  unsigned __int64 v25; // x11
  __int64 v26; // x12
  signed __int64 v27; // x0
  __int64 v28; // x2
  __int64 v29; // x0
  __int64 v30; // x2
  unsigned __int64 *v31; // x2
  int v32; // w1
  unsigned int v33; // w0
  unsigned __int64 v34; // x4
  unsigned int v35; // w7
  bool v36; // zf
  int *v38; // x5
  int v39; // w8
  unsigned __int64 v40; // x2
  unsigned __int64 v42; // x0
  bool v43; // cc
  __int64 v44; // x1
  signed __int64 v45; // x1
  __int64 v46; // x3
  __int64 v47; // x1
  unsigned __int64 v48; // x2
  unsigned __int64 v49; // x3
  unsigned __int64 v50; // x1
  unsigned int *v51; // x2
  __int64 v52; // x0
  unsigned int v53; // w0
  __int64 v54; // x0
  unsigned __int64 *v55; // x2
  unsigned __int64 *v56; // x4
  unsigned __int64 v57; // x5
  int v58; // w6
  unsigned int v59; // w7
  long double v60; // q0
  unsigned __int64 v61; // x15
  unsigned __int64 v62; // x1
  unsigned __int64 v63; // x25
  int v64; // w16
  unsigned int *v65; // x3
  unsigned int *v66; // x20
  unsigned __int64 v67; // x21
  __int64 v68; // x3
  unsigned __int64 *v69; // x23
  unsigned __int64 v70; // x28
  unsigned __int64 v71; // x1
  unsigned __int64 *v72; // x12
  unsigned __int64 *v73; // x0
  unsigned __int64 *v74; // x22
  unsigned __int64 v75; // x8
  unsigned __int64 v76; // x2
  unsigned __int64 v77; // x1
  unsigned __int64 v78; // x0
  unsigned int v79; // w0
  unsigned __int64 *v80; // x0
  unsigned int v81; // w0
  unsigned __int64 v82; // x2
  unsigned __int64 v83; // x8
  unsigned __int64 v84; // x10
  int v85; // w6
  unsigned int v86; // w7
  bool v87; // zf
  unsigned int *v88; // x9
  unsigned int v89; // w8
  int v90; // w13
  unsigned __int64 v91; // x0
  unsigned __int64 v92; // x2
  bool v94; // cc
  __int64 v95; // x1
  int v96; // w4
  unsigned int *v97; // x3
  unsigned int *v98; // x8
  unsigned int v99; // w1
  __int64 v100; // x0
  unsigned __int64 v101; // x3
  unsigned __int64 v102; // x1
  unsigned int *v103; // x2
  __int64 v104; // x0
  unsigned int v105; // w0
  __int64 v106; // x0
  unsigned __int64 *v107; // x3
  unsigned __int64 *v108; // x4
  unsigned int v109; // w6
  unsigned int v110; // w7
  long double v111; // q0
  __int64 v112; // x11
  unsigned __int64 v113; // x1
  unsigned __int64 v114; // x25
  unsigned __int64 *v115; // x2
  unsigned __int64 *v116; // x26
  int v117; // w8
  signed __int64 v118; // x20
  unsigned __int64 *v119; // x23
  unsigned __int64 *v120; // x5
  unsigned __int64 *v121; // x24
  unsigned __int64 v122; // x9
  unsigned __int64 v123; // x1
  unsigned __int64 *v124; // x0
  unsigned __int64 v125; // x0
  __int64 v126; // x3
  unsigned __int64 v127; // x1
  __int64 v128; // x2
  unsigned __int64 v129; // x3
  long double v130; // q0
  int v131; // w1
  unsigned int v132; // w8
  unsigned __int64 v133; // x22
  unsigned int v134; // w7
  bool v135; // zf
  int *v136; // x8
  int v137; // w13
  unsigned __int64 v138; // x2
  unsigned __int64 v139; // x0
  bool v141; // cc
  unsigned __int64 v142; // x0
  __int64 v143; // x2
  __int64 v144; // x20
  __int64 v145; // x0
  unsigned __int64 v146; // x4
  unsigned __int64 v147; // x2
  _DWORD *v148; // x6
  __int64 v149; // x0
  int v150; // w0
  __int64 v151; // x0
  unsigned __int64 *v152; // x4
  _QWORD *v153; // x5
  long double v154; // q0
  unsigned __int64 v155; // x1
  unsigned __int64 v156; // x28
  int v157; // w16
  unsigned __int64 v158; // x3
  unsigned __int64 v159; // x20
  unsigned __int64 *v160; // x22
  unsigned __int64 *v161; // x2
  unsigned __int64 *v162; // x24
  unsigned __int64 v163; // x2
  __int64 v164; // x1
  int v165; // w6
  unsigned int v166; // w7
  __int64 v167; // x0
  unsigned __int64 v168; // x1
  __int64 *v169; // x12
  unsigned __int64 *v170; // x0
  __int64 v171; // x13
  unsigned __int64 v172; // x0
  char *v173; // x8
  unsigned __int64 v174; // x1
  unsigned __int64 v175; // x2
  int v176; // w1
  unsigned int v177; // w0
  unsigned __int64 v178; // x1
  bool v179; // zf
  unsigned int *v180; // x3
  unsigned int v181; // w4
  unsigned __int64 v182; // x1
  unsigned __int64 v183; // x0
  bool v185; // cc
  __int64 v186; // x2
  int v187; // w6
  _DWORD *v188; // x3
  _DWORD *v189; // x2
  int v190; // w4
  __int64 v191; // x0
  unsigned __int64 v192; // x3
  unsigned __int64 v193; // x1
  unsigned int *v194; // x2
  __int64 v195; // x0
  int v196; // w1
  unsigned int v197; // w0
  __int64 v198; // x0
  unsigned int *v199; // x4
  unsigned __int64 v200; // x5
  int v201; // w6
  __int64 v202; // x1
  __int64 v203; // x26
  int v204; // w15
  _QWORD *v205; // x2
  _QWORD *v206; // x21
  __int64 v207; // x2
  unsigned int *v208; // x22
  __int64 v209; // x3
  __int64 v210; // x27
  __int64 v211; // x1
  unsigned __int64 v212; // x23
  unsigned int v213; // w7
  __int64 v214; // x0
  unsigned __int64 v215; // x1
  unsigned __int64 **v216; // x0
  __int64 *v217; // x1
  __int64 v218; // x20
  __int64 v219; // x10
  unsigned __int64 *v220; // x6
  __int64 v221; // x0
  unsigned __int64 *v222; // x19
  int v223; // w8
  __int64 v224; // x1
  int v225; // w1
  unsigned int v226; // w0
  unsigned __int64 v227; // x1
  __int64 v228; // x10
  __int64 v229; // x2
  int v230; // w7
  unsigned __int64 *v231; // x3
  __int64 v232; // x10
  unsigned __int64 *v233; // x2
  int v234; // w4
  __int64 v235; // x6
  __int64 v236; // x0
  __int64 v237; // x1
  unsigned __int64 v238; // x1
  unsigned int **v239; // x2
  unsigned __int64 *v240; // x4
  unsigned __int64 *v241; // x5
  int v242; // w6
  unsigned int v243; // w7
  __int64 v244; // x13
  long double v245; // q0
  unsigned __int64 v246; // x15
  unsigned __int64 *v247; // x10
  int v248; // w11
  int v249; // w18
  unsigned __int64 v250; // x3
  unsigned __int64 v251; // x20
  unsigned __int64 v252; // x21
  __int64 v253; // x14
  unsigned __int64 v254; // x12
  unsigned __int64 *v255; // x25
  unsigned int **v256; // x28
  unsigned __int64 *v257; // x0
  unsigned __int64 **v258; // x6
  unsigned int *v259; // x9
  int v260; // w0
  unsigned int *v261; // x2
  _DWORD *v262; // x3
  unsigned int *v263; // x1
  unsigned __int64 v264; // x19
  char v265; // w0
  unsigned int *v266; // x0
  unsigned __int64 v267; // x8
  bool v268; // cc
  unsigned int *v269; // x0
  __int64 v270; // x0
  unsigned int v271; // w1
  unsigned int *v272; // x22
  unsigned __int64 *v273; // x27
  unsigned int *v274; // x26
  unsigned __int64 v275; // x27
  int v276; // w7
  _BYTE *v277; // x19
  unsigned int *v278; // x0
  unsigned int *v279; // x3
  unsigned int v280; // w2
  unsigned __int64 *v281; // x0
  int v282; // w1
  unsigned int v283; // w0
  unsigned __int64 v284; // x7
  unsigned int v285; // w26
  unsigned __int64 v286; // x1
  int v287; // w19
  _BYTE *v288; // x1
  int v289; // w4
  unsigned int *v290; // x2
  unsigned int v291; // w0
  _BYTE *v292; // x2
  unsigned int v293; // w7
  unsigned __int64 v294; // x0
  bool v295; // zf
  unsigned int v296; // w0
  unsigned int *v297; // x3
  unsigned __int64 v298; // x1
  unsigned int *v299; // x4
  __int64 v300; // x0
  unsigned int v301; // w0
  _BYTE *v302; // x2
  unsigned __int64 v303; // x0
  unsigned int *v304; // x2
  unsigned __int64 *v305; // x1
  int v306; // w0
  _BYTE *v307; // x2
  unsigned int v308; // w0
  signed int v309; // w0
  __int64 v310; // x1
  unsigned __int64 *v311; // x1
  unsigned __int64 *v312; // [xsp+0h] [xbp-420h]
  __int64 v313; // [xsp+0h] [xbp-420h]
  unsigned int v314; // [xsp+8h] [xbp-418h]
  unsigned __int64 **v315; // [xsp+8h] [xbp-418h]
  unsigned int *v316; // [xsp+10h] [xbp-410h]
  __int64 (__fastcall *v317)(__int64, unsigned __int64, _BYTE **, _BYTE *, _QWORD, unsigned __int64 *, _QWORD, _QWORD); // [xsp+18h] [xbp-408h]
  __int64 (__fastcall *v318)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [xsp+18h] [xbp-408h]
  __int64 v319; // [xsp+20h] [xbp-400h]
  __int64 v320; // [xsp+20h] [xbp-400h]
  unsigned __int64 v321; // [xsp+28h] [xbp-3F8h]
  unsigned __int64 v322; // [xsp+28h] [xbp-3F8h]
  unsigned __int64 **v323; // [xsp+30h] [xbp-3F0h]
  char v324; // [xsp+30h] [xbp-3F0h]
  unsigned __int64 v325; // [xsp+38h] [xbp-3E8h]
  __int64 v326; // [xsp+40h] [xbp-3E0h]
  int v327; // [xsp+48h] [xbp-3D8h]
  unsigned int v328; // [xsp+4Ch] [xbp-3D4h]
  unsigned __int64 *v329; // [xsp+50h] [xbp-3D0h] BYREF
  _BYTE *v330; // [xsp+58h] [xbp-3C8h] BYREF
  unsigned int *v331; // [xsp+60h] [xbp-3C0h]
  _BYTE *v332; // [xsp+68h] [xbp-3B8h]
  unsigned int v333; // [xsp+70h] [xbp-3B0h] BYREF
  _BYTE v334[4]; // [xsp+74h] [xbp-3ACh] BYREF
  __int64 v335; // [xsp+78h] [xbp-3A8h]
  _QWORD *v336; // [xsp+80h] [xbp-3A0h]
  __int64 v337; // [xsp+88h] [xbp-398h]
  unsigned __int64 v338; // [xsp+90h] [xbp-390h]
  unsigned __int64 v339; // [xsp+98h] [xbp-388h]
  _QWORD *v340; // [xsp+A0h] [xbp-380h]
  unsigned int *v341; // [xsp+A8h] [xbp-378h]
  unsigned __int64 v342; // [xsp+B0h] [xbp-370h]
  unsigned __int64 *v343; // [xsp+B8h] [xbp-368h]
  unsigned __int64 v344; // [xsp+C0h] [xbp-360h]
  __int64 v345; // [xsp+C8h] [xbp-358h]
  __int64 v346; // [xsp+D0h] [xbp-350h]
  unsigned __int64 v347; // [xsp+D8h] [xbp-348h]
  __int64 v348; // [xsp+E8h] [xbp-338h]
  __int64 (__fastcall *v349)(__int64, __int64, unsigned __int64 **, unsigned __int64 *, _QWORD, unsigned __int64, _QWORD, _QWORD); // [xsp+F0h] [xbp-330h]
  __int64 v350; // [xsp+F8h] [xbp-328h]
  __int64 v351; // [xsp+100h] [xbp-320h]
  unsigned int v352; // [xsp+10Ch] [xbp-314h]
  unsigned __int64 **v353; // [xsp+110h] [xbp-310h]
  __int64 *v354; // [xsp+118h] [xbp-308h]
  __int64 v355; // [xsp+128h] [xbp-2F8h] BYREF
  unsigned __int64 *v356; // [xsp+130h] [xbp-2F0h] BYREF
  __int64 v357; // [xsp+138h] [xbp-2E8h]
  _QWORD v358[2]; // [xsp+140h] [xbp-2E0h] BYREF
  unsigned __int64 v359; // [xsp+150h] [xbp-2D0h]
  unsigned __int64 v360; // [xsp+158h] [xbp-2C8h]
  unsigned __int64 v361; // [xsp+160h] [xbp-2C0h]
  unsigned __int64 *v362; // [xsp+168h] [xbp-2B8h]
  unsigned __int64 *v363; // [xsp+170h] [xbp-2B0h]
  unsigned __int64 *v364; // [xsp+178h] [xbp-2A8h]
  unsigned __int64 v365; // [xsp+180h] [xbp-2A0h]
  unsigned __int64 *v366; // [xsp+188h] [xbp-298h]
  unsigned __int64 v367; // [xsp+190h] [xbp-290h]
  unsigned __int64 v368; // [xsp+198h] [xbp-288h]
  __int64 *v369; // [xsp+1A0h] [xbp-280h]
  _QWORD *v370; // [xsp+1A8h] [xbp-278h]
  __int64 v371; // [xsp+1B0h] [xbp-270h]
  __int64 (__fastcall *v372)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, _QWORD *, _QWORD, _QWORD); // [xsp+1B8h] [xbp-268h]
  unsigned __int64 v373; // [xsp+1C0h] [xbp-260h]
  __int64 v374; // [xsp+1C8h] [xbp-258h]
  unsigned __int64 *v375; // [xsp+1D0h] [xbp-250h]
  unsigned int v376; // [xsp+1D8h] [xbp-248h]
  int v377; // [xsp+1DCh] [xbp-244h]
  __int64 v378; // [xsp+1E8h] [xbp-238h] BYREF
  unsigned __int64 v379; // [xsp+1F0h] [xbp-230h] BYREF
  __int64 v380; // [xsp+1F8h] [xbp-228h]
  _QWORD v381[13]; // [xsp+200h] [xbp-220h] BYREF
  unsigned __int64 *v382; // [xsp+268h] [xbp-1B8h]
  unsigned __int64 v383; // [xsp+270h] [xbp-1B0h]
  unsigned __int64 *v384; // [xsp+278h] [xbp-1A8h]
  unsigned __int64 v385; // [xsp+280h] [xbp-1A0h]
  __int64 (__fastcall *v386)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, unsigned __int64 *, _QWORD, _QWORD); // [xsp+288h] [xbp-198h]
  __int64 v387; // [xsp+290h] [xbp-190h]
  unsigned int v388; // [xsp+298h] [xbp-188h]
  unsigned int v389; // [xsp+29Ch] [xbp-184h]
  unsigned __int64 v390; // [xsp+2A0h] [xbp-180h] BYREF
  __int64 v391; // [xsp+2A8h] [xbp-178h]
  _QWORD v392[10]; // [xsp+2B0h] [xbp-170h] BYREF
  unsigned __int64 v393; // [xsp+300h] [xbp-120h]
  unsigned __int64 v394; // [xsp+308h] [xbp-118h]
  unsigned __int64 *v395; // [xsp+310h] [xbp-110h]
  unsigned __int64 v396; // [xsp+318h] [xbp-108h]
  unsigned __int64 v397; // [xsp+320h] [xbp-100h]
  unsigned __int64 *v398; // [xsp+328h] [xbp-F8h]
  unsigned __int64 v399; // [xsp+330h] [xbp-F0h]
  __int64 (__fastcall *v400)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, unsigned __int64, _QWORD, _QWORD); // [xsp+338h] [xbp-E8h]
  __int64 v401; // [xsp+340h] [xbp-E0h]
  unsigned int v402; // [xsp+348h] [xbp-D8h]
  int v403; // [xsp+34Ch] [xbp-D4h]
  unsigned __int64 v404; // [xsp+358h] [xbp-C8h] BYREF
  unsigned __int64 v405; // [xsp+360h] [xbp-C0h] BYREF
  __int64 v406; // [xsp+368h] [xbp-B8h]
  _QWORD v407[13]; // [xsp+370h] [xbp-B0h] BYREF
  __int64 *v408; // [xsp+3D8h] [xbp-48h]
  __int64 v409; // [xsp+3E0h] [xbp-40h]
  unsigned __int64 *v410; // [xsp+3E8h] [xbp-38h]
  __int64 v411; // [xsp+3F0h] [xbp-30h]
  __int64 (__fastcall *v412)(__int64, __int64, unsigned __int64 *, unsigned __int64, _QWORD, __int64 *, _QWORD, _QWORD, long double); // [xsp+3F8h] [xbp-28h]
  __int64 v413; // [xsp+400h] [xbp-20h]
  unsigned int v414; // [xsp+408h] [xbp-18h]
  unsigned int v415; // [xsp+40Ch] [xbp-14h]
  unsigned __int64 v416; // [xsp+410h] [xbp-10h] BYREF
  __int64 v417; // [xsp+418h] [xbp-8h]
  __int64 vars0; // [xsp+420h] [xbp+0h] BYREF

  v14 = a1 + 104;
  v15 = 0;
  v16 = a2;
  v17 = *(_DWORD *)(a2 + 16);
  v18 = a5;
  v20 = a4;
  v22 = a7;
  v417 = qword_48DD60;
  v23 = a2 + 48;
  if ( (v17 & 1) == 0 )
  {
    v15 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v15 ^= qword_48DD68;
  }
  if ( !a7 )
  {
    if ( a5 )
      v24 = (unsigned __int64 *)a5;
    else
      v24 = (unsigned __int64 *)v16;
    v25 = *(_QWORD *)(v16 + 8);
    v11 = *v24;
    if ( !(_DWORD)a8 || (v38 = *(int **)(v16 + 32), v39 = *v38, LODWORD(v40) = *v38 & 7, !(_DWORD)v40) )
    {
LABEL_9:
      v410 = &v416;
      v411 = v23;
      v9 = v25;
      v20 = v16;
      v12 = (__int64 *)a6;
      v16 = v11;
      v11 = a4;
      v414 = a8;
      v415 = 0;
      v22 = (unsigned __int64)a3;
      v408 = a5;
      v412 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, unsigned __int64, _QWORD, __int64 *, _QWORD, _QWORD, long double))v15;
      v413 = v14;
      while ( 1 )
      {
        v26 = 0;
        a3 = *(unsigned __int64 **)v22;
        if ( v12 )
          v26 = *v12;
        v18 = (__int64 *)(v11 - (_QWORD)a3);
        v27 = v9 - v16;
        if ( (__int64)(v9 - v16) > (__int64)(v11 - (_QWORD)a3) )
          v27 = v11 - (_QWORD)a3;
        v28 = v27 / 4;
        if ( v27 / 4 )
        {
          v29 = 0;
          do
          {
            *(_DWORD *)(v16 + 4 * v29) = bswap32(*((_DWORD *)a3 + v29));
            ++v29;
          }
          while ( v28 != v29 );
          v30 = 4 * v28;
          v10 = v16 + v30;
          v31 = (unsigned __int64 *)((char *)a3 + v30);
        }
        else
        {
          v10 = v16;
          v31 = *(unsigned __int64 **)v22;
        }
        *(_QWORD *)v22 = v31;
        a6 = 4;
        if ( v31 != (unsigned __int64 *)v11 )
        {
          if ( v9 < v10 + 4 )
            a6 = 5;
          else
            a6 = 7;
        }
        if ( v408 )
        {
          v9 = (unsigned int)a6;
          *v408 = v10;
          goto LABEL_35;
        }
        v32 = *(_DWORD *)(v20 + 16);
        ++*(_DWORD *)(v20 + 20);
        if ( (v32 & 1) != 0 )
        {
          v16 = v20;
          a3 = (unsigned __int64 *)v22;
          v9 = (unsigned int)a6;
          v20 = v11;
          v35 = v414;
          v22 = v415;
          *(_QWORD *)v16 = v10;
          goto LABEL_31;
        }
        v409 = v26;
        if ( v10 <= v16 )
          goto LABEL_30;
        v416 = *(_QWORD *)v20;
        v33 = v412(v413, v411, v410, v10, 0, v12, 0, v414, a9);
        if ( v33 == 4 )
        {
          if ( (_DWORD)a6 != 5 )
          {
LABEL_30:
            a3 = (unsigned __int64 *)v22;
            v16 = v20;
            v35 = v414;
            v22 = v415;
            v9 = (unsigned int)a6;
            v20 = v11;
            goto LABEL_31;
          }
          goto LABEL_28;
        }
        v34 = v416;
        if ( v416 == v10 )
          break;
        v44 = 0;
        if ( v12 )
          v44 = *v12;
        if ( v44 == v409 )
        {
          *(_QWORD *)v22 -= v10 - v416;
          if ( v33 )
          {
LABEL_77:
            v16 = v20;
            a3 = (unsigned __int64 *)v22;
            v20 = v11;
            v9 = v33;
            v35 = v414;
            v22 = v415;
LABEL_31:
            if ( v35 )
              v36 = (_DWORD)v9 == 7;
            else
              v36 = 0;
            if ( v36 )
            {
              v49 = *a3;
              v50 = v20 - *a3;
              if ( v50 > 4 )
                goto LABEL_86;
              v51 = *(unsigned int **)(v16 + 32);
              v52 = 0;
              if ( v50 )
              {
                do
                {
                  *((_BYTE *)v51 + v52 + 4) = *(_BYTE *)(v49 + v52);
                  ++v52;
                }
                while ( v50 != v52 );
                v22 = (unsigned int)v50;
              }
              v53 = *v51;
              v9 = 7;
              *a3 = v20;
              *v51 = v53 & 0xFFFFFFF8 | v22;
            }
LABEL_35:
            if ( v417 == qword_48DD60 )
              return (unsigned int)v9;
            goto LABEL_89;
          }
        }
        else
        {
          v45 = v416 - v16;
          if ( (__int64)(v416 - v16) > (__int64)v18 )
            v45 = v11 - (_QWORD)a3;
          v46 = v45 / 4;
          if ( v45 / 4 )
          {
            v47 = 0;
            do
            {
              *(_DWORD *)(v16 + 4 * v47) = bswap32(*((_DWORD *)a3 + v47));
              ++v47;
            }
            while ( v46 != v47 );
            a3 = (unsigned __int64 *)((char *)a3 + 4 * v46);
            v48 = v16 + 4 * v46;
          }
          else
          {
            v48 = v16;
          }
          *(_QWORD *)v22 = a3;
          if ( a3 == (unsigned __int64 *)v11 || v34 >= v48 + 4 )
          {
            if ( v48 != v34 )
              goto LABEL_87;
            a9 = sub_41F250(
                   "nstatus == __GCONV_FULL_OUTPUT",
                   "../iconv/skeleton.c",
                   595,
                   "__gconv_transform_internal_ucs4");
            goto LABEL_72;
          }
          if ( v48 != v34 )
            goto LABEL_87;
          if ( v48 != v16 )
            break;
          --*(_DWORD *)(v20 + 20);
          if ( v33 )
            goto LABEL_77;
        }
LABEL_28:
        v16 = *(_QWORD *)v20;
      }
      if ( v33 )
        goto LABEL_77;
      goto LABEL_28;
    }
    if ( !a5 )
    {
      v40 = (int)v40;
      if ( *a3 < a4 && (unsigned __int64)(int)v40 <= 3 )
      {
        v42 = *a3 + 1;
        do
        {
          ++v40;
          *a3 = v42;
          v43 = v40 <= 3 && a4 > v42;
          *((_BYTE *)v38 + v40 + 3) = *(_BYTE *)(v42++ - 1);
        }
        while ( v43 );
      }
      if ( v40 <= 3 )
      {
        v9 = 7;
        *v38 = v39 & 0xFFFFFFF8 | v40;
        goto LABEL_35;
      }
      v11 += 4LL;
      *(_BYTE *)(v11 - 4) = *((_BYTE *)v38 + 7);
      *(_BYTE *)(v11 - 3) = *((_BYTE *)v38 + 6);
      *(_BYTE *)(v11 - 2) = *((_BYTE *)v38 + 5);
      *(_BYTE *)(v11 - 1) = *((_BYTE *)v38 + 4);
      *v38 &= 0xFFFFFFF8;
      goto LABEL_9;
    }
LABEL_88:
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs4", *(double *)&a9);
    goto LABEL_89;
  }
LABEL_72:
  if ( v18 )
  {
    a9 = sub_41F250(
           "outbufstart == NULL",
           "../iconv/skeleton.c",
           350,
           "__gconv_transform_internal_ucs4",
           *(double *)&a9);
LABEL_86:
    a9 = sub_41F250(
           "cnt_after <= sizeof (data->__statep->__value.__wchb)",
           "../iconv/skeleton.c",
           647,
           "__gconv_transform_internal_ucs4",
           *(double *)&a9);
LABEL_87:
    a9 = sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs4", *(double *)&a9);
    goto LABEL_88;
  }
  **(_QWORD **)(v16 + 32) = 0;
  if ( (*(_DWORD *)(v16 + 16) & 1) != 0 )
  {
    v9 = 0;
    goto LABEL_35;
  }
  if ( v417 == qword_48DD60 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, unsigned __int64, _QWORD, __int64, long double))v15)(
             v14,
             v23,
             0,
             0,
             0,
             a6,
             (unsigned int)v22,
             a8,
             a9);
LABEL_89:
  v54 = sub_412340();
  v61 = 0;
  v407[0] = &vars0;
  v407[1] = v13;
  v407[8] = a3;
  v407[9] = v20;
  v63 = v62;
  v407[2] = v9;
  v407[3] = v10;
  v64 = *(_DWORD *)(v62 + 16);
  v407[4] = v18;
  v407[5] = v11;
  v66 = v65;
  v67 = (unsigned __int64)v56;
  v407[6] = v12;
  v407[7] = v16;
  v68 = v54 + 104;
  v69 = v55;
  v407[10] = a6;
  v407[11] = v22;
  v70 = v57;
  v406 = qword_48DD60;
  v71 = v62 + 48;
  if ( (v64 & 1) == 0 )
  {
    v61 = *(_QWORD *)(v54 + 144);
    if ( *(_QWORD *)(v54 + 104) )
      v61 ^= qword_48DD68;
  }
  if ( v58 )
  {
    if ( !v56 )
    {
      **(_QWORD **)(v63 + 32) = 0;
      if ( (*(_DWORD *)(v63 + 16) & 1) == 0 )
      {
        if ( v406 == qword_48DD60 )
          __asm { BR              X16 }
        goto LABEL_200;
      }
      goto LABEL_173;
    }
    goto LABEL_198;
  }
  v72 = &v404;
  if ( v56 )
    v73 = v56;
  else
    v73 = (unsigned __int64 *)v63;
  v16 = *(_QWORD *)(v63 + 8);
  if ( !v57 )
    v72 = 0;
  v20 = *v73;
  v404 = 0;
  if ( v59 )
  {
    v88 = *(unsigned int **)(v63 + 32);
    v89 = *v88;
    v90 = *v88 & 7;
    if ( v90 )
    {
      if ( v56 )
      {
LABEL_199:
        sub_41F250(
          "outbufstart == NULL",
          "../iconv/skeleton.c",
          467,
          "__gconv_transform_ucs4_internal",
          *(double *)&v60);
        goto LABEL_200;
      }
      v91 = *v55;
      v92 = v90;
      if ( (unsigned __int64)v90 <= 3 && (unsigned __int64)v66 > v91 )
      {
        do
        {
          ++v91;
          ++v92;
          *v69 = v91;
          v94 = v92 <= 3 && (unsigned __int64)v66 > v91;
          *((_BYTE *)v88 + v92 + 3) = *(_BYTE *)(v91 - 1);
        }
        while ( v94 );
      }
      if ( v92 <= 3 )
        goto LABEL_185;
      if ( *((unsigned __int8 *)v88 + 4) > 0x80u )
      {
        if ( (v64 & 2) == 0 )
        {
          v11 = 6;
          *v69 = v91 + v90 - v92;
          goto LABEL_131;
        }
      }
      else
      {
        v20 += 4LL;
        *(_BYTE *)(v20 - 4) = *((_BYTE *)v88 + 7);
        *(_BYTE *)(v20 - 3) = *((_BYTE *)v88 + 6);
        *(_BYTE *)(v20 - 2) = *((_BYTE *)v88 + 5);
        *(_BYTE *)(v20 - 1) = *((_BYTE *)v88 + 4);
        v89 = *v88;
      }
      v64 = *(_DWORD *)(v63 + 16);
      *v88 = v89 & 0xFFFFFFF8;
    }
  }
  a6 = v63;
  v74 = v69;
  v63 = (unsigned __int64)v66;
  v69 = (unsigned __int64 *)v16;
  v66 = (unsigned int *)v20;
  v16 = v57;
  v20 = (unsigned __int64)v72;
  v70 = 0;
  v395 = v56;
  v398 = &v405;
  v399 = v71;
  v400 = (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, unsigned __int64, _QWORD, _QWORD))v61;
  v401 = v68;
  v402 = v59;
  v403 = 0;
  while ( 1 )
  {
    v75 = *v74;
    if ( v16 )
      v70 += *(_QWORD *)v16;
    if ( v63 >= v75 + 4 )
    {
      v76 = (unsigned __int64)(v66 + 1);
      if ( v69 >= (unsigned __int64 *)(v66 + 1) )
      {
        v77 = v75 + 4;
        v9 = (unsigned __int64)v66;
        while ( 1 )
        {
          v79 = bswap32(*(_DWORD *)(v77 - 4));
          if ( (v79 & 0x80000000) != 0 )
          {
            if ( !v20 )
            {
              v9 = (unsigned __int64)v66;
              v67 = 6;
              goto LABEL_116;
            }
            if ( (v64 & 2) == 0 )
            {
              v80 = v395;
              *v74 = v77 - 4;
              v67 = 6;
              if ( v80 )
                goto LABEL_124;
              goto LABEL_117;
            }
            ++*(_QWORD *)v20;
            v78 = v77 + 4;
            if ( v63 < v77 + 4 )
              goto LABEL_112;
          }
          else
          {
            *(_DWORD *)v9 = v79;
            v78 = v77 + 4;
            v9 = v76;
            if ( v63 < v77 + 4 )
              goto LABEL_112;
          }
          v76 = v9 + 4;
          if ( (unsigned __int64)v69 < v9 + 4 )
            goto LABEL_112;
          v77 = v78;
        }
      }
    }
    v9 = (unsigned __int64)v66;
    v77 = *v74;
LABEL_112:
    *v74 = v77;
    v67 = 4;
    if ( v63 != v77 )
    {
      if ( (unsigned __int64)v69 < v9 + 4 )
        v67 = 5;
      else
        v67 = 7;
    }
LABEL_116:
    v80 = v395;
    if ( v395 )
    {
LABEL_124:
      v11 = (unsigned int)v67;
      *v80 = v9;
      goto LABEL_131;
    }
LABEL_117:
    ++*(_DWORD *)(a6 + 20);
    if ( (v64 & 1) != 0 )
    {
      v100 = *(_QWORD *)v16;
      *(_QWORD *)a6 = v9;
      v69 = v74;
      v66 = (unsigned int *)v63;
      v11 = (unsigned int)v67;
      v63 = a6;
      v86 = v402;
      v85 = v403;
      *(_QWORD *)v16 = v100 + v404;
      goto LABEL_127;
    }
    v396 = v75;
    v397 = v75 + 4;
    if ( (unsigned __int64)v66 >= v9 )
      goto LABEL_126;
    v405 = *(_QWORD *)a6;
    v81 = v400(v401, v399, v398, v9, 0, v16, 0, v402);
    if ( v81 != 4 )
      break;
    if ( (_DWORD)v67 != 5 )
    {
LABEL_126:
      v86 = v402;
      v85 = v403;
      v69 = v74;
      v66 = (unsigned int *)v63;
      v11 = (unsigned int)v67;
      v63 = a6;
LABEL_127:
      if ( v86 )
        v87 = (_DWORD)v11 == 7;
      else
        v87 = 0;
      if ( !v87 )
        goto LABEL_131;
      v101 = *v69;
      v102 = (unsigned __int64)v66 - *v69;
      if ( v102 <= 4 )
      {
        v103 = *(unsigned int **)(v63 + 32);
        v104 = 0;
        if ( v102 )
        {
          do
          {
            *((_BYTE *)v103 + v104 + 4) = *(_BYTE *)(v101 + v104);
            ++v104;
          }
          while ( v102 != v104 );
          v85 = v102;
        }
        v105 = *v103;
        *v69 = (unsigned __int64)v66;
        *v103 = v105 & 0xFFFFFFF8 | v85;
        goto LABEL_131;
      }
      v60 = sub_41F250(
              "cnt_after <= sizeof (data->__statep->__value.__wchb)",
              "../iconv/skeleton.c",
              647,
              "__gconv_transform_ucs4_internal");
LABEL_198:
      v60 = sub_41F250(
              "outbufstart == NULL",
              "../iconv/skeleton.c",
              350,
              "__gconv_transform_ucs4_internal",
              *(double *)&v60);
      goto LABEL_199;
    }
LABEL_122:
    v66 = *(unsigned int **)a6;
    v70 = v404;
    v64 = *(_DWORD *)(a6 + 16);
  }
  v82 = v405;
  v83 = v396;
  v84 = v397;
  if ( v405 == v9 )
    goto LABEL_121;
  v95 = 0;
  if ( v16 )
    v95 = *(_QWORD *)v16;
  if ( v95 + v404 == v70 )
  {
    *v74 -= v9 - v405;
LABEL_121:
    if ( !v81 )
      goto LABEL_122;
    v69 = v74;
    v66 = (unsigned int *)v63;
    v86 = v402;
    v85 = v403;
    v63 = a6;
    v11 = v81;
    goto LABEL_127;
  }
  v96 = *(_DWORD *)(a6 + 16);
  *v74 = v396;
  if ( v63 < v84 )
  {
    v84 = v83;
    v98 = v66;
LABEL_177:
    *v74 = v84;
    if ( v63 == v84 )
      goto LABEL_183;
    if ( v82 >= (unsigned __int64)(v98 + 1) )
    {
LABEL_171:
      if ( v98 != (unsigned int *)v82 )
        goto LABEL_184;
      goto LABEL_172;
    }
LABEL_179:
    if ( (unsigned int *)v82 != v98 )
      goto LABEL_184;
    if ( (unsigned int *)v82 == v66 )
      --*(_DWORD *)(a6 + 20);
    goto LABEL_121;
  }
  v97 = v66 + 1;
  if ( v82 < (unsigned __int64)(v66 + 1) )
  {
    if ( v63 == v83 )
    {
      v98 = v66;
LABEL_183:
      if ( (unsigned int *)v82 != v98 )
        goto LABEL_184;
LABEL_172:
      sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_ucs4_internal");
LABEL_173:
      v11 = 0;
      goto LABEL_131;
    }
    v98 = v66;
    goto LABEL_179;
  }
  v98 = v66;
  while ( 1 )
  {
    v99 = bswap32(*(_DWORD *)(v84 - 4));
    if ( (v99 & 0x80000000) == 0 )
    {
      *v98 = v99;
      v98 = v97;
      goto LABEL_155;
    }
    if ( !v20 )
      break;
    if ( (v96 & 2) == 0 )
    {
      a6 = v84 - 4;
      *v74 = v84 - 4;
      goto LABEL_171;
    }
    ++*(_QWORD *)v20;
LABEL_155:
    if ( v63 < v84 + 4 )
      goto LABEL_177;
    v97 = v98 + 1;
    if ( v82 < (unsigned __int64)(v98 + 1) )
    {
      *v74 = v84;
      if ( v84 != v63 )
        goto LABEL_179;
      goto LABEL_183;
    }
    v84 += 4LL;
  }
  if ( (unsigned int *)v82 == v66 )
    goto LABEL_172;
LABEL_184:
  sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ucs4_internal");
LABEL_185:
  v11 = 7;
  *v88 = v89 & 0xFFFFFFF8 | v92;
LABEL_131:
  if ( v406 == qword_48DD60 )
    return (unsigned int)v11;
LABEL_200:
  v106 = sub_412340();
  v112 = v106 + 104;
  v392[0] = v407;
  v392[1] = v13;
  v392[8] = v63;
  v392[9] = v20;
  v114 = v113;
  v116 = v115;
  v392[2] = v9;
  v392[3] = v66;
  v117 = *(_DWORD *)(v113 + 16);
  v392[4] = v67;
  v392[5] = v11;
  v118 = v109;
  v392[6] = v69;
  v392[7] = v16;
  v119 = v107;
  v121 = v120;
  v391 = qword_48DD60;
  v122 = 0;
  v123 = v113 + 48;
  if ( (v117 & 1) == 0 )
  {
    v122 = *(_QWORD *)(v106 + 144);
    if ( *(_QWORD *)(v106 + 104) )
      v122 ^= qword_48DD68;
  }
  if ( v109 )
  {
    if ( v108 )
      goto LABEL_284;
    **(_QWORD **)(v114 + 32) = 0;
    if ( (*(_DWORD *)(v114 + 16) & 1) != 0 )
    {
      v11 = 0;
      goto LABEL_233;
    }
    if ( v391 == qword_48DD60 )
      __asm { BR              X16 }
LABEL_281:
    v393 = a6;
    v394 = v70;
    sub_412340();
    goto LABEL_282;
  }
  v393 = a6;
  v394 = v70;
  if ( v108 )
    v124 = v108;
  else
    v124 = (unsigned __int64 *)v114;
  v67 = *(_QWORD *)(v114 + 8);
  a6 = *v124;
  if ( !v110 )
    goto LABEL_208;
  v136 = *(int **)(v114 + 32);
  v137 = *v136;
  LODWORD(v138) = *v136 & 7;
  if ( !(_DWORD)v138 )
    goto LABEL_208;
  if ( v108 )
  {
LABEL_282:
    v130 = sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs4le");
    goto LABEL_283;
  }
  v139 = *v116;
  v138 = (int)v138;
  if ( (unsigned __int64)v107 > *v116 && (unsigned __int64)(int)v138 <= 3 )
  {
    do
    {
      ++v139;
      ++v138;
      *v116 = v139;
      v141 = v138 <= 3 && (unsigned __int64)v107 > v139;
      *((_BYTE *)v136 + v138 + 3) = *(_BYTE *)(v139 - 1);
    }
    while ( v141 );
  }
  if ( v138 <= 3 )
  {
LABEL_274:
    *v136 = v137 & 0xFFFFFFF8 | v138;
    goto LABEL_275;
  }
  a6 += 4LL;
  *(_BYTE *)(a6 - 4) = *((_BYTE *)v136 + 4);
  *(_BYTE *)(a6 - 3) = *((_BYTE *)v136 + 5);
  *(_BYTE *)(a6 - 2) = *((_BYTE *)v136 + 6);
  *(_BYTE *)(a6 - 1) = *((_BYTE *)v136 + 7);
  *v136 &= 0xFFFFFFF8;
LABEL_208:
  v384 = &v390;
  v385 = v123;
  v125 = v114;
  v114 = a6;
  a6 = v125;
  v382 = v108;
  v386 = (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, unsigned __int64 *, _QWORD, _QWORD))v122;
  v387 = v112;
  v388 = v110;
  v389 = 0;
  while ( 2 )
  {
    v9 = *v116;
    v70 = 0;
    if ( v121 )
      v70 = *v121;
    v118 = (signed __int64)v119 - v9;
    v126 = v67 - v114;
    v127 = *v116;
    if ( (__int64)(v67 - v114) > (__int64)((__int64)v119 - v9) )
      v126 = (__int64)v119 - v9;
    v128 = v126 + 3;
    if ( v126 >= 0 )
      v128 = v126;
    *v116 = v9 + (v128 & 0xFFFFFFFFFFFFFFFCLL);
    v129 = j_ifunc_40DC90(v114, v127, v128 & 0xFFFFFFFFFFFFFFFCLL) + (v128 & 0xFFFFFFFFFFFFFFFCLL);
    v11 = 4;
    if ( v119 != (unsigned __int64 *)*v116 )
    {
      if ( v67 < v129 + 4 )
        v11 = 5;
      else
        v11 = 7;
    }
    if ( v382 )
    {
      a6 = v393;
      v70 = v394;
      *v382 = v129;
      goto LABEL_233;
    }
    v131 = *(_DWORD *)(a6 + 16);
    ++*(_DWORD *)(a6 + 20);
    if ( (v131 & 1) != 0 )
    {
      v134 = v388;
      v118 = v389;
      v114 = a6;
      *(_QWORD *)a6 = v129;
      goto LABEL_228;
    }
    if ( v129 <= v114 )
      goto LABEL_227;
    v383 = v129;
    v390 = *(_QWORD *)a6;
    v132 = v386(v387, v385, v384, v129, 0, v121, 0, v388);
    if ( v132 == 4 )
    {
      if ( (_DWORD)v11 != 5 )
      {
LABEL_227:
        v134 = v388;
        v118 = v389;
        v114 = a6;
        goto LABEL_228;
      }
      goto LABEL_225;
    }
    v133 = v390;
    if ( v390 == v383 )
      goto LABEL_224;
    v142 = 0;
    if ( v121 )
      v142 = *v121;
    if ( v142 == v70 )
    {
      *v116 -= v383 - v390;
      if ( v132 )
        goto LABEL_271;
      goto LABEL_225;
    }
    v143 = v390 - v114;
    if ( (__int64)(v390 - v114) > v118 )
      v143 = (__int64)v119 - v9;
    LODWORD(v383) = v132;
    v144 = v143 + 3;
    if ( v143 >= 0 )
      v144 = v143;
    v118 = v144 & 0xFFFFFFFFFFFFFFFCLL;
    *v116 = v9 + v118;
    v145 = j_ifunc_40DC90(v114, v9, v118) + v118;
    if ( v119 == (unsigned __int64 *)*v116 )
    {
      if ( v390 != v145 )
        goto LABEL_273;
      goto LABEL_270;
    }
    v132 = v383;
    if ( v133 < v145 + 4 )
    {
      if ( v145 != v390 )
        goto LABEL_273;
      if ( v114 == v145 )
      {
        --*(_DWORD *)(a6 + 20);
        if ( v132 )
          goto LABEL_271;
      }
      else
      {
LABEL_224:
        if ( v132 )
          goto LABEL_271;
      }
LABEL_225:
      v114 = *(_QWORD *)a6;
      continue;
    }
    break;
  }
  if ( v145 != v390 )
  {
LABEL_273:
    sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs4le");
    goto LABEL_274;
  }
LABEL_270:
  v130 = sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_ucs4le");
LABEL_271:
  v134 = v388;
  v118 = v389;
  v114 = a6;
  v11 = v132;
LABEL_228:
  if ( v134 )
    v135 = (_DWORD)v11 == 7;
  else
    v135 = 0;
  if ( !v135 )
  {
    a6 = v393;
    v70 = v394;
    goto LABEL_233;
  }
  v146 = *v116;
  v147 = (unsigned __int64)v119 - *v116;
  if ( v147 <= 4 )
  {
    v148 = *(_DWORD **)(v114 + 32);
    v149 = 0;
    if ( v147 )
    {
      do
      {
        *((_BYTE *)v148 + v149 + 4) = *(_BYTE *)(v146 + v149);
        ++v149;
      }
      while ( v147 != v149 );
      v118 = (unsigned int)v147;
    }
    v150 = *v148;
    *v116 = (unsigned __int64)v119;
    *v148 = v150 & 0xFFFFFFF8 | v118;
LABEL_275:
    a6 = v393;
    v70 = v394;
    v11 = 7;
LABEL_233:
    if ( v391 == qword_48DD60 )
      return (unsigned int)v11;
    goto LABEL_281;
  }
LABEL_283:
  v111 = sub_41F250(
           "cnt_after <= sizeof (data->__statep->__value.__wchb)",
           "../iconv/skeleton.c",
           647,
           "__gconv_transform_internal_ucs4le",
           *(double *)&v130);
LABEL_284:
  v393 = a6;
  v394 = v70;
  v154 = sub_41F250(
           "outbufstart == NULL",
           "../iconv/skeleton.c",
           350,
           "__gconv_transform_internal_ucs4le",
           *(double *)&v111);
  v381[0] = v392;
  v381[1] = v13;
  v381[10] = a6;
  v381[11] = v70;
  v156 = v155;
  v381[2] = v9;
  v381[3] = v118;
  v157 = *(_DWORD *)(v155 + 16);
  v381[4] = v67;
  v381[5] = v11;
  v159 = v158;
  v160 = v152;
  v381[6] = v119;
  v381[7] = v121;
  v162 = v161;
  v163 = v155 + 48;
  v381[8] = v114;
  v381[9] = v116;
  v380 = qword_48DD60;
  v164 = v151 + 104;
  v372 = 0;
  v373 = v163;
  v374 = v151 + 104;
  v376 = v166;
  v377 = v165;
  if ( (v157 & 1) == 0 )
  {
    v167 = *(_QWORD *)(v151 + 104);
    v168 = *(_QWORD *)(v164 + 40);
    v372 = (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, _QWORD *, _QWORD, _QWORD))v168;
    if ( v167 )
      v372 = (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(v168 ^ qword_48DD68);
  }
  if ( v377 )
  {
    if ( !v152 )
    {
      **(_QWORD **)(v156 + 32) = 0;
      if ( (*(_DWORD *)(v156 + 16) & 1) == 0 )
      {
        if ( v380 == qword_48DD60 )
          __asm { BR              X16 }
        goto LABEL_399;
      }
      goto LABEL_373;
    }
    goto LABEL_395;
  }
  v169 = &v378;
  if ( v152 )
    v170 = v152;
  else
    v170 = (unsigned __int64 *)v156;
  a6 = *(_QWORD *)(v156 + 8);
  if ( !v153 )
    v169 = 0;
  v67 = *v170;
  v378 = 0;
  if ( !v376 )
    goto LABEL_294;
  v180 = *(unsigned int **)(v156 + 32);
  v181 = *v180;
  LODWORD(v182) = *v180 & 7;
  if ( !(_DWORD)v182 )
    goto LABEL_294;
  if ( v160 )
    goto LABEL_398;
  v183 = *v162;
  v182 = (int)v182;
  if ( (unsigned __int64)(int)v182 <= 3 && v183 < v159 )
  {
    do
    {
      ++v183;
      ++v182;
      *v162 = v183;
      v185 = v182 <= 3 && v159 > v183;
      *((_BYTE *)v180 + v182 + 3) = *(_BYTE *)(v183 - 1);
    }
    while ( v185 );
  }
  if ( v182 <= 3 )
  {
    v114 = 7;
    *v180 = v181 & 0xFFFFFFF8 | v182;
    goto LABEL_323;
  }
  if ( *((unsigned __int8 *)v180 + 7) > 0x80u )
  {
    if ( (v157 & 2) == 0 )
    {
      v114 = 6;
      goto LABEL_323;
    }
  }
  else
  {
    v67 += 4LL;
    *(_BYTE *)(v67 - 4) = *((_BYTE *)v180 + 4);
    *(_BYTE *)(v67 - 3) = *((_BYTE *)v180 + 5);
    *(_BYTE *)(v67 - 2) = *((_BYTE *)v180 + 6);
    *(_BYTE *)(v67 - 1) = *((_BYTE *)v180 + 7);
    v181 = *v180;
  }
  v157 = *(_DWORD *)(v156 + 16);
  *v180 = v181 & 0xFFFFFFF8;
LABEL_294:
  v171 = 0;
  v375 = &v379;
LABEL_295:
  v119 = (unsigned __int64 *)*v162;
  if ( v153 )
    v171 += *v153;
  v116 = (unsigned __int64 *)((char *)v119 + 4);
  if ( (unsigned __int64)v119 + 4 > v159 )
  {
    v9 = v67;
    if ( (unsigned __int64 *)v159 == v119 )
      v114 = 4;
    else
      v114 = 7;
    *v162 = (unsigned __int64)v119;
LABEL_309:
    if ( v160 )
      goto LABEL_317;
    goto LABEL_310;
  }
  v172 = v67 + 4;
  if ( a6 < v67 + 4 )
  {
    v174 = (unsigned __int64)v119 + 4;
    v9 = v67;
    v173 = (char *)*v162;
LABEL_307:
    *v162 = (unsigned __int64)v173;
    if ( (char *)v159 != v173 )
    {
      v114 = 7;
      if ( v159 < v174 )
        goto LABEL_309;
      v175 = v9 + 4;
      goto LABEL_326;
    }
    goto LABEL_328;
  }
  v173 = (char *)v119 + 4;
  v9 = v67;
  while ( 2 )
  {
    v176 = *((_DWORD *)v173 - 1);
    if ( (v176 & 0x80000000) == 0 )
    {
      *(_DWORD *)v9 = v176;
      v174 = (unsigned __int64)(v173 + 4);
      v9 = v172;
      if ( v159 < (unsigned __int64)(v173 + 4) )
        goto LABEL_307;
LABEL_301:
      v172 = v9 + 4;
      v175 = v9 + 4;
      if ( a6 < v9 + 4 )
      {
        *v162 = (unsigned __int64)v173;
        if ( (char *)v159 != v173 )
        {
LABEL_326:
          if ( a6 < v175 )
          {
            v114 = 5;
            goto LABEL_309;
          }
          v154 = sub_41F250("*outptrp + 4 > outend", "gconv_simple.c", 484, "ucs4le_internal_loop", *(double *)&v154);
LABEL_398:
          sub_41F250(
            "outbufstart == NULL",
            "../iconv/skeleton.c",
            467,
            "__gconv_transform_ucs4le_internal",
            *(double *)&v154);
          goto LABEL_399;
        }
LABEL_328:
        v114 = 4;
        goto LABEL_309;
      }
      v173 = (char *)v174;
      continue;
    }
    break;
  }
  if ( !v169 )
  {
    v9 = v67;
    v114 = 6;
    goto LABEL_309;
  }
  if ( (v157 & 2) != 0 )
  {
    v174 = (unsigned __int64)(v173 + 4);
    ++*v169;
    if ( v159 < (unsigned __int64)(v173 + 4) )
      goto LABEL_307;
    goto LABEL_301;
  }
  *v162 = (unsigned __int64)(v173 - 4);
  v114 = 6;
  if ( v160 )
  {
LABEL_317:
    *v160 = v9;
    goto LABEL_323;
  }
LABEL_310:
  ++*(_DWORD *)(v156 + 20);
  if ( (v157 & 1) != 0 )
  {
    v191 = *v153;
    *(_QWORD *)v156 = v9;
    *v153 = v191 + v378;
    goto LABEL_319;
  }
  v369 = v169;
  v371 = v171;
  if ( v67 >= v9 )
    goto LABEL_319;
  v370 = v153;
  v379 = *(_QWORD *)v156;
  v177 = v372(v374, v373, v375, v9, 0, v153, 0, v376);
  v169 = v369;
  v153 = v370;
  if ( v177 != 4 )
  {
    v178 = v379;
    if ( v379 == v9 )
      goto LABEL_314;
    v186 = 0;
    if ( v370 )
      v186 = *v370;
    if ( v371 == v186 + v378 )
    {
      *v162 -= v9 - v379;
      goto LABEL_314;
    }
    v187 = *(_DWORD *)(v156 + 16);
    *v162 = (unsigned __int64)v119;
    if ( (unsigned __int64)v116 > v159 )
    {
      v189 = (_DWORD *)v67;
      v116 = v119;
LABEL_377:
      *v162 = (unsigned __int64)v116;
    }
    else
    {
      v188 = (_DWORD *)(v67 + 4);
      if ( v178 >= v67 + 4 )
      {
        v189 = (_DWORD *)v67;
        while ( 1 )
        {
          v190 = *((_DWORD *)v116 - 1);
          if ( v190 < 0 )
          {
            if ( !v169 )
              goto LABEL_392;
            if ( (v187 & 2) == 0 )
            {
              *v162 = (unsigned __int64)v116 - 4;
              goto LABEL_371;
            }
            ++*v169;
          }
          else
          {
            *v189 = v190;
            v189 = v188;
          }
          if ( v159 < (unsigned __int64)v116 + 4 )
            goto LABEL_377;
          v188 = v189 + 1;
          if ( v178 < (unsigned __int64)(v189 + 1) )
          {
            *v162 = (unsigned __int64)v116;
            if ( v116 == (unsigned __int64 *)v159 )
              goto LABEL_371;
            if ( v189 != (_DWORD *)v178 )
              goto LABEL_391;
            if ( v189 == (_DWORD *)v67 )
              goto LABEL_381;
LABEL_314:
            if ( v177 )
            {
              v114 = v177;
              goto LABEL_319;
            }
LABEL_315:
            v67 = *(_QWORD *)v156;
            v171 = v378;
            v157 = *(_DWORD *)(v156 + 16);
            goto LABEL_295;
          }
          v116 = (unsigned __int64 *)((char *)v116 + 4);
        }
      }
      if ( (unsigned __int64 *)v159 != v119 )
      {
        if ( v178 == v67 )
        {
LABEL_381:
          --*(_DWORD *)(v156 + 20);
          goto LABEL_314;
        }
        do
        {
LABEL_391:
          sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ucs4le_internal");
LABEL_392:
          ;
        }
        while ( v178 != v67 );
LABEL_372:
        sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_ucs4le_internal");
LABEL_373:
        v114 = 0;
        goto LABEL_323;
      }
LABEL_396:
      v189 = (_DWORD *)v67;
    }
LABEL_371:
    if ( (_DWORD *)v178 != v189 )
      goto LABEL_391;
    goto LABEL_372;
  }
  if ( (_DWORD)v114 == 5 )
    goto LABEL_315;
LABEL_319:
  if ( v376 )
    v179 = (_DWORD)v114 == 7;
  else
    v179 = 0;
  if ( v179 )
  {
    v192 = *v162;
    v193 = v159 - *v162;
    if ( v193 <= 4 )
    {
      v194 = *(unsigned int **)(v156 + 32);
      v195 = 0;
      if ( v193 )
      {
        do
        {
          *((_BYTE *)v194 + v195 + 4) = *(_BYTE *)(v192 + v195);
          ++v195;
        }
        while ( v193 != v195 );
        v377 = v193;
      }
      v196 = v377;
      v197 = *v194 & 0xFFFFFFF8;
      *v162 = v159;
      *v194 = v197 | v196;
      goto LABEL_323;
    }
    v154 = sub_41F250(
             "cnt_after <= sizeof (data->__statep->__value.__wchb)",
             "../iconv/skeleton.c",
             647,
             "__gconv_transform_ucs4le_internal",
             *(double *)&v154);
LABEL_395:
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ucs4le_internal", *(double *)&v154);
    goto LABEL_396;
  }
LABEL_323:
  if ( v380 == qword_48DD60 )
    return (unsigned int)v114;
LABEL_399:
  v198 = sub_412340();
  v358[0] = v381;
  v358[1] = v13;
  v365 = v114;
  v366 = v116;
  v203 = v202;
  v361 = v67;
  v362 = v160;
  v204 = *(_DWORD *)(v202 + 16);
  v363 = v119;
  v364 = v162;
  v206 = v205;
  v207 = v202 + 48;
  v367 = a6;
  v368 = v156;
  v208 = v199;
  v210 = v209;
  v357 = qword_48DD60;
  v211 = v198 + 104;
  v349 = 0;
  v350 = v207;
  v212 = v200;
  v351 = v198 + 104;
  v352 = v213;
  if ( (v204 & 1) == 0 )
  {
    v214 = *(_QWORD *)(v198 + 104);
    v215 = *(_QWORD *)(v211 + 40);
    v349 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64 **, unsigned __int64 *, _QWORD, unsigned __int64, _QWORD, _QWORD))v215;
    if ( v214 )
      v349 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64 **, unsigned __int64 *, _QWORD, unsigned __int64, _QWORD, _QWORD))(v215 ^ qword_48DD68);
  }
  if ( !v201 )
  {
    v359 = v9;
    v360 = v159;
    if ( v199 )
      v216 = (unsigned __int64 **)v199;
    else
      v216 = (unsigned __int64 **)v203;
    v156 = *(_QWORD *)(v203 + 8);
    if ( v200 )
      v217 = &v355;
    else
      v217 = 0;
    v218 = 0;
    v162 = *v216;
    v354 = v217;
    v353 = &v356;
    v355 = 0;
    while ( 1 )
    {
      v219 = *v206;
      if ( v212 )
        v218 += *(_QWORD *)v212;
      if ( v210 == v219 )
      {
        v224 = v210;
        v222 = v162;
        v114 = 4;
        goto LABEL_421;
      }
      v220 = (unsigned __int64 *)((char *)v162 + 4);
      if ( v156 >= (unsigned __int64)v162 + 4 )
      {
        v221 = v219 + 1;
        v222 = v162;
        v114 = 4;
        do
        {
          v223 = *(unsigned __int8 *)(v221 - 1);
          v224 = v221;
          if ( (v223 & 0x80) != 0 )
          {
            if ( !v354 || (v204 & 2) == 0 )
            {
              v224 = v221 - 1;
              v114 = 6;
              goto LABEL_421;
            }
            v114 = 6;
            ++*v354;
            if ( v210 == v221 )
              goto LABEL_421;
          }
          else
          {
            *(_DWORD *)v222 = v223;
            v222 = v220;
            if ( v210 == v221 )
              goto LABEL_421;
          }
          v220 = (unsigned __int64 *)((char *)v222 + 4);
          ++v221;
        }
        while ( v156 >= (unsigned __int64)v222 + 4 );
        *v206 = v224;
        v114 = 5;
        if ( v208 )
          goto LABEL_429;
        goto LABEL_422;
      }
      while ( 1 )
      {
        v224 = v219;
        v222 = v162;
        v114 = 5;
LABEL_421:
        *v206 = v224;
        if ( v208 )
        {
LABEL_429:
          *(_QWORD *)v208 = v222;
          v9 = v359;
          v159 = v360;
          goto LABEL_430;
        }
LABEL_422:
        v225 = *(_DWORD *)(v203 + 16);
        ++*(_DWORD *)(v203 + 20);
        if ( (v225 & 1) != 0 )
        {
          v236 = *(_QWORD *)v212;
          *(_QWORD *)v203 = v222;
          v9 = v359;
          v159 = v360;
          *(_QWORD *)v212 = v236 + v355;
          goto LABEL_430;
        }
        v348 = v219;
        if ( v222 <= v162 )
        {
          v226 = v114;
          goto LABEL_426;
        }
        v356 = *(unsigned __int64 **)v203;
        v226 = v349(v351, v350, v353, v222, 0, v212, 0, v352);
        if ( v226 == 4 )
        {
          v226 = v114;
          if ( (_DWORD)v114 != 5 )
            goto LABEL_426;
          goto LABEL_427;
        }
        v227 = (unsigned __int64)v356;
        v228 = v348;
        if ( v222 == v356 )
          goto LABEL_426;
        v229 = 0;
        if ( v212 )
          v229 = *(_QWORD *)v212;
        if ( v229 + v355 == v218 )
        {
          v237 = (char *)v222 - (char *)v356 + 3;
          if ( (char *)v222 - (char *)v356 >= 0 )
            v237 = (char *)v222 - (char *)v356;
          *v206 -= v237 >> 2;
          goto LABEL_426;
        }
        v230 = *(_DWORD *)(v203 + 16);
        *v206 = v348;
        if ( v210 != v228 )
          break;
        if ( (unsigned __int64 *)v227 != v162 )
          goto LABEL_448;
LABEL_467:
        sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_ascii_internal");
LABEL_468:
        if ( (unsigned __int64 *)v227 == v162 )
          goto LABEL_463;
LABEL_448:
        sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ascii_internal");
      }
      v231 = (unsigned __int64 *)((char *)v162 + 4);
      if ( v227 < (unsigned __int64)v162 + 4 )
        goto LABEL_468;
      v232 = v228 + 1;
      v233 = v162;
      do
      {
        v234 = *(unsigned __int8 *)(v232 - 1);
        v235 = v232;
        if ( (v234 & 0x80) != 0 )
        {
          if ( !v354 || (v230 & 2) == 0 )
          {
            *v206 = v232 - 1;
            if ( v233 == (unsigned __int64 *)v227 )
              goto LABEL_467;
            goto LABEL_448;
          }
          ++*v354;
        }
        else
        {
          *(_DWORD *)v233 = v234;
          v233 = v231;
        }
        if ( v210 == v232 )
        {
          *v206 = v210;
          if ( v233 != (unsigned __int64 *)v227 )
            goto LABEL_448;
          goto LABEL_467;
        }
        v231 = (unsigned __int64 *)((char *)v233 + 4);
        ++v232;
      }
      while ( v227 >= (unsigned __int64)v233 + 4 );
      *v206 = v235;
      if ( v233 != (unsigned __int64 *)v227 )
        goto LABEL_448;
      if ( v233 != v162 )
        goto LABEL_426;
LABEL_463:
      --*(_DWORD *)(v203 + 20);
LABEL_426:
      if ( v226 )
      {
        v9 = v359;
        v159 = v360;
        v114 = v226;
        goto LABEL_430;
      }
LABEL_427:
      v162 = *(unsigned __int64 **)v203;
      v218 = v355;
      v204 = *(_DWORD *)(v203 + 16);
    }
  }
  if ( v199 )
  {
    v359 = v9;
    v360 = v159;
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ascii_internal");
    goto LABEL_473;
  }
  **(_QWORD **)(v203 + 32) = 0;
  if ( (*(_DWORD *)(v203 + 16) & 1) == 0 )
  {
    if ( v357 == qword_48DD60 )
      __asm { BR              X16 }
    goto LABEL_473;
  }
  v114 = 0;
LABEL_430:
  if ( v357 == qword_48DD60 )
    return (unsigned int)v114;
LABEL_473:
  v359 = v9;
  v360 = v159;
  v244 = sub_412340();
  v246 = v238 + 48;
  v336 = v358;
  v337 = v13;
  v247 = v240;
  v248 = *(_DWORD *)(v238 + 16);
  v338 = v9;
  v339 = v159;
  v249 = v242;
  v251 = v250;
  v340 = v206;
  v341 = v208;
  v252 = v238;
  v253 = v244 + 104;
  v344 = v114;
  v345 = v203;
  v254 = 0;
  v255 = v241;
  v346 = v210;
  v347 = v156;
  v256 = v239;
  v335 = qword_48DD60;
  if ( (v248 & 1) == 0 )
  {
    v254 = *(_QWORD *)(v244 + 144);
    if ( *(_QWORD *)(v244 + 104) )
      v254 ^= qword_48DD68;
  }
  if ( v242 )
  {
    if ( v240 )
      goto LABEL_620;
    **(_QWORD **)(v238 + 32) = 0;
    if ( (*(_DWORD *)(v238 + 16) & 1) == 0 )
    {
      if ( v335 == qword_48DD60 )
        __asm { BR              X16 }
      goto LABEL_624;
    }
    goto LABEL_566;
  }
  v342 = v212;
  v343 = v162;
  if ( v240 )
    v257 = v240;
  else
    v257 = (unsigned __int64 *)v238;
  v258 = &v329;
  v162 = *(unsigned __int64 **)(v238 + 8);
  if ( !v241 )
    v258 = 0;
  v212 = *v257;
  v329 = 0;
  if ( !v243 || (v259 = *(unsigned int **)(v238 + 32), (v260 = *v259 & 7) == 0) )
  {
    v272 = *v239;
    v273 = 0;
    goto LABEL_500;
  }
  if ( v240 )
    goto LABEL_621;
  v261 = *v239;
  v331 = *v256;
  v332 = (_BYTE *)v212;
  if ( v260 > 4 )
    goto LABEL_622;
  v208 = &v333;
  v262 = v259 + 1;
  v263 = &v333;
  v264 = 0;
  do
  {
    v265 = *((_BYTE *)v262 + v264++);
    *(_BYTE *)v263 = v265;
    v263 = (unsigned int *)((char *)v263 + 1);
  }
  while ( v264 < (*v259 & 7) );
  if ( v251 < (unsigned __int64)v261 - v264 + 4 )
  {
    *v256 = (unsigned int *)v251;
    v303 = v251 - (_QWORD)v261 + v264;
    if ( v303 > 4 )
      goto LABEL_623;
    v304 = (unsigned int *)((char *)v261 + 1);
    if ( v264 < v303 )
    {
      do
      {
        v331 = v304;
        v304 = (unsigned int *)((char *)v304 + 1);
        *((_BYTE *)v262 + v264++) = *((_BYTE *)v304 - 2);
      }
      while ( v303 != v264 );
    }
    goto LABEL_587;
  }
  v266 = (unsigned int *)((char *)v261 + 1);
  if ( v212 >= (unsigned __int64)v162 )
  {
LABEL_568:
    v212 = v342;
    v162 = v343;
    v285 = 5;
    goto LABEL_519;
  }
  do
  {
    v267 = v264++;
    v331 = v266;
    v268 = v264 <= 3 && v251 > (unsigned __int64)v266;
    v334[v264 - 5] = *((_BYTE *)v266 - 1);
    v266 = (unsigned int *)((char *)v266 + 1);
  }
  while ( v268 );
  v331 = &v333;
  if ( v333 <= 0x7F )
  {
    v332 = (_BYTE *)(v212 + 1);
    *(_BYTE *)v212 = v333;
    v269 = v331 + 1;
    v331 = v269;
    if ( v269 != &v333 )
      goto LABEL_496;
    goto LABEL_570;
  }
  if ( v333 >> 7 == 7168 )
  {
    v270 = 4;
    v331 = (unsigned int *)v334;
    goto LABEL_497;
  }
  if ( !v258 )
    goto LABEL_612;
  if ( (v248 & 8) == 0 )
  {
    if ( (v248 & 2) == 0 )
      goto LABEL_612;
    v305 = *v258;
    v269 = (unsigned int *)v334;
    v331 = (unsigned int *)v334;
    *v258 = (unsigned __int64 *)((char *)v305 + 1);
    goto LABEL_496;
  }
  v313 = v244;
  v315 = v258;
  v316 = v259;
  v318 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v254;
  v320 = v244 + 104;
  v322 = v246;
  v324 = v248;
  v325 = v267;
  v328 = v243;
  v308 = sub_41D410(v244, v252);
  v244 = v313;
  v258 = v315;
  v285 = v308;
  v259 = v316;
  v254 = (unsigned __int64)v318;
  v36 = v308 == 6;
  v253 = v320;
  v246 = v322;
  v247 = 0;
  v269 = v331;
  v243 = v328;
  if ( v36 )
  {
    if ( (v324 & 2) != 0 )
      goto LABEL_626;
    goto LABEL_611;
  }
  if ( v285 == 5 )
  {
    if ( v331 != &v333 )
      goto LABEL_496;
    goto LABEL_568;
  }
  if ( v331 != &v333 )
    goto LABEL_496;
  if ( v285 != 7 )
  {
    if ( v285 )
      goto LABEL_549;
LABEL_570:
    v272 = *v256;
    v273 = v329;
    v248 = *(_DWORD *)(v252 + 16);
    goto LABEL_500;
  }
  if ( v264 == 4 )
    goto LABEL_618;
  v309 = *v316 & 0xFFFFFFF8;
  *v256 = (unsigned int *)((char *)*v256 + v264 - (*v316 & 7LL));
  if ( (__int64)v264 <= v309 )
    goto LABEL_617;
  if ( v264 > 4 )
    goto LABEL_616;
  v256 = (unsigned int **)(v325 + 2);
  v310 = 1;
  *v316 = v309 | v264;
  do
  {
    *((_BYTE *)v316 + v310 + 3) = v334[v310 - 5];
    ++v310;
  }
  while ( v256 != (unsigned int **)v310 );
LABEL_587:
  v212 = v342;
  v162 = v343;
  v285 = 7;
LABEL_519:
  while ( 2 )
  {
    if ( v335 != qword_48DD60 )
    {
LABEL_624:
      v342 = v212;
      v343 = v162;
      sub_412340();
      do
      {
        v245 = sub_41F250(
                 "inptr - bytebuf > (state->__count & 7)",
                 "../iconv/loop.c",
                 385,
                 "internal_ascii_loop_single");
LABEL_626:
        v311 = *v258;
        v331 = ++v269;
        *v258 = (unsigned __int64 *)((char *)v311 + 1);
LABEL_611:
        if ( v269 == v208 )
        {
LABEL_612:
          v212 = v342;
          v162 = v343;
          v285 = 6;
          goto LABEL_519;
        }
LABEL_496:
        v270 = (char *)v269 - (char *)v208;
LABEL_497:
        v271 = *v259;
      }
      while ( (*v259 & 7LL) >= v270 );
      v248 = *(_DWORD *)(v252 + 16);
      v272 = (unsigned int *)((char *)*v256 + v270 - (v271 & 7));
      *v256 = v272;
      v273 = v329;
      v212 = (unsigned __int64)v332;
      *v259 = v271 & 0xFFFFFFF8;
LABEL_500:
      v274 = v272;
      v208 = (unsigned int *)v256;
      v256 = (unsigned int **)v162;
      v162 = v255;
      v255 = v273;
      v275 = v252;
      v252 = v212;
      v314 = v243;
      v276 = v248;
      v312 = v247;
      v317 = (__int64 (__fastcall *)(__int64, unsigned __int64, _BYTE **, _BYTE *, _QWORD, unsigned __int64 *, _QWORD, _QWORD))v254;
      v319 = v253;
      v321 = v246;
      v323 = v258;
      v326 = v244;
LABEL_501:
      if ( v162 )
        v255 = (unsigned __int64 *)((char *)v255 + *v162);
      v331 = v274;
      v332 = (_BYTE *)v252;
      v277 = (_BYTE *)v252;
      if ( (unsigned int *)v251 != v274 )
      {
        v278 = v274;
        v212 = 4;
        while ( 1 )
        {
          v279 = v278 + 1;
          if ( v251 < (unsigned __int64)(v278 + 1) )
          {
            *(_QWORD *)v208 = v331;
            v281 = v312;
            v212 = 7;
            if ( !v312 )
              goto LABEL_511;
            goto LABEL_518;
          }
          if ( v256 <= (unsigned int **)v277 )
          {
            v278 = v331;
            v212 = 5;
            goto LABEL_510;
          }
          v280 = *v278;
          if ( *v278 <= 0x7F )
          {
            v332 = v277 + 1;
            *v277 = v280;
            v277 = v332;
            v278 = ++v331;
            goto LABEL_509;
          }
          if ( v280 >> 7 == 7168 )
          {
            ++v278;
            v331 = v279;
            goto LABEL_509;
          }
          if ( !v323 )
          {
            v278 = v331;
            v212 = 6;
            goto LABEL_510;
          }
          if ( (*(_DWORD *)(v275 + 16) & 8) != 0 )
          {
            v327 = v276;
            v296 = sub_41D410(v326, v275);
            v212 = v296;
            v276 = v327;
            if ( v296 != 6 )
            {
              v278 = v331;
              v277 = v332;
              if ( (_DWORD)v212 == 5 )
                goto LABEL_510;
              goto LABEL_509;
            }
            v277 = v332;
          }
          v278 = v331;
          if ( (v276 & 2) == 0 )
          {
            v212 = 6;
            goto LABEL_510;
          }
          v278 = v331 + 1;
          v212 = 6;
          ++v331;
          *v323 = (unsigned __int64 *)((char *)*v323 + 1);
LABEL_509:
          if ( (unsigned int *)v251 == v278 )
            goto LABEL_510;
        }
      }
      v278 = (unsigned int *)v251;
      v212 = 4;
LABEL_510:
      *(_QWORD *)v208 = v278;
      v281 = v312;
      if ( v312 )
      {
LABEL_518:
        v285 = v212;
        v212 = v342;
        v162 = v343;
        *v281 = (unsigned __int64)v277;
        continue;
      }
LABEL_511:
      v282 = *(_DWORD *)(v275 + 16);
      ++*(_DWORD *)(v275 + 20);
      if ( (v282 & 1) != 0 )
      {
        v285 = v212;
        v252 = v275;
        v293 = v314;
        v256 = (unsigned int **)v208;
        v294 = (unsigned __int64)v329 + *v162;
        *(_QWORD *)v275 = v277;
        *v162 = v294;
        goto LABEL_545;
      }
      if ( v252 >= (unsigned __int64)v277 )
      {
        v283 = v212;
        goto LABEL_515;
      }
      v330 = *(_BYTE **)v275;
      v283 = v317(v319, v321, &v330, v277, 0, v162, 0, v314);
      if ( v283 == 4 )
      {
        v283 = v212;
        if ( (_DWORD)v212 != 5 )
          goto LABEL_515;
        goto LABEL_516;
      }
      v284 = (unsigned __int64)v330;
      if ( v330 == v277 )
        goto LABEL_515;
      v286 = 0;
      if ( v162 )
        v286 = *v162;
      if ( (unsigned __int64 *)((char *)v329 + v286) == v255 )
      {
        *(_QWORD *)v208 -= 4 * (v277 - v330);
LABEL_515:
        if ( !v283 )
        {
LABEL_516:
          v274 = *(unsigned int **)v208;
          v252 = *(_QWORD *)v275;
          v255 = v329;
          v276 = *(_DWORD *)(v275 + 16);
          goto LABEL_501;
        }
        v293 = v314;
        v252 = v275;
        v256 = (unsigned int **)v208;
        v285 = v283;
LABEL_545:
        if ( v293 )
          v295 = v285 == 7;
        else
          v295 = 0;
        if ( v295 )
        {
          v297 = *v256;
          v298 = v251 - (_QWORD)*v256;
          if ( v298 > 4 )
            goto LABEL_619;
          v299 = *(unsigned int **)(v252 + 32);
          v300 = 0;
          if ( v298 )
          {
            do
            {
              *((_BYTE *)v299 + v300 + 4) = *((_BYTE *)v297 + v300);
              ++v300;
            }
            while ( v298 != v300 );
            v249 = v298;
          }
          v212 = v342;
          v162 = v343;
          v301 = *v299 & 0xFFFFFFF8;
          *v256 = (unsigned int *)v251;
          *v299 = v301 | v249;
        }
        else
        {
LABEL_549:
          v212 = v342;
          v162 = v343;
        }
        continue;
      }
      v287 = *(_DWORD *)(v275 + 16);
      *(_QWORD *)v208 = v274;
      v331 = v274;
      v332 = (_BYTE *)v252;
      if ( (unsigned int *)v251 != v274 )
      {
        v288 = (_BYTE *)v252;
        v212 = v284;
        v255 = (unsigned __int64 *)v283;
        v289 = 4;
        while ( 1 )
        {
          v290 = v274 + 1;
          if ( v251 < (unsigned __int64)(v274 + 1) )
          {
LABEL_563:
            v256 = (unsigned int **)v208;
            v208 = v331;
LABEL_564:
            *v256 = v208;
            if ( v330 == v288 )
              goto LABEL_615;
            goto LABEL_565;
          }
          if ( v212 <= (unsigned __int64)v288 )
          {
            v302 = v330;
            *(_QWORD *)v208 = v331;
            v283 = (unsigned int)v255;
            if ( v302 != v288 )
              goto LABEL_565;
            goto LABEL_542;
          }
          v291 = *v274;
          if ( *v274 > 0x7F )
          {
            if ( v291 >> 7 == 7168 )
            {
              ++v274;
              v331 = v290;
            }
            else
            {
              if ( !v323 )
                goto LABEL_563;
              if ( (*(_DWORD *)(v275 + 16) & 8) == 0 )
                goto LABEL_581;
              v306 = sub_41D410(v326, v275);
              v289 = v306;
              if ( v306 == 6 )
              {
                v288 = v332;
LABEL_581:
                if ( (v287 & 2) == 0 )
                {
                  v256 = (unsigned int **)v208;
                  v208 = v331;
                  goto LABEL_564;
                }
                v274 = v331 + 1;
                v289 = 6;
                ++v331;
                *v323 = (unsigned __int64 *)((char *)*v323 + 1);
                goto LABEL_539;
              }
              v274 = v331;
              v288 = v332;
              if ( v306 == 5 )
              {
                v307 = v330;
                *(_QWORD *)v208 = v331;
                v283 = (unsigned int)v255;
                if ( v307 != v288 )
                  goto LABEL_565;
                goto LABEL_542;
              }
            }
          }
          else
          {
            v332 = v288 + 1;
            *v288 = v291;
            v288 = v332;
            v274 = ++v331;
          }
LABEL_539:
          if ( (unsigned int *)v251 == v274 )
          {
            v292 = v330;
            *(_QWORD *)v208 = v251;
            v283 = (unsigned int)v255;
            if ( v292 != v288 )
              goto LABEL_565;
            if ( v289 == 5 )
            {
LABEL_542:
              if ( v288 == (_BYTE *)v252 )
                --*(_DWORD *)(v275 + 20);
              goto LABEL_515;
            }
LABEL_615:
            v245 = sub_41F250(
                     "nstatus == __GCONV_FULL_OUTPUT",
                     "../iconv/skeleton.c",
                     595,
                     "__gconv_transform_internal_ascii");
LABEL_616:
            v245 = sub_41F250(
                     "inend - inptr <= sizeof (state->__value.__wchb)",
                     "../iconv/loop.c",
                     414,
                     "internal_ascii_loop_single",
                     *(double *)&v245);
LABEL_617:
            v245 = sub_41F250(
                     "inend - inptr > (state->__count & ~7)",
                     "../iconv/loop.c",
                     413,
                     "internal_ascii_loop_single",
                     *(double *)&v245);
LABEL_618:
            v245 = sub_41F250(
                     "inend != &bytebuf[MAX_NEEDED_INPUT]",
                     "../iconv/loop.c",
                     403,
                     "internal_ascii_loop_single",
                     *(double *)&v245);
LABEL_619:
            v245 = sub_41F250(
                     "cnt_after <= sizeof (data->__statep->__value.__wchb)",
                     "../iconv/skeleton.c",
                     647,
                     "__gconv_transform_internal_ascii",
                     *(double *)&v245);
LABEL_620:
            v342 = v212;
            v343 = v162;
            v245 = sub_41F250(
                     "outbufstart == NULL",
                     "../iconv/skeleton.c",
                     350,
                     "__gconv_transform_internal_ascii",
                     *(double *)&v245);
LABEL_621:
            v245 = sub_41F250(
                     "outbufstart == NULL",
                     "../iconv/skeleton.c",
                     467,
                     "__gconv_transform_internal_ascii",
                     *(double *)&v245);
LABEL_622:
            v245 = sub_41F250(
                     "(state->__count & 7) <= sizeof (state->__value)",
                     "../iconv/loop.c",
                     309,
                     "internal_ascii_loop_single",
                     *(double *)&v245);
LABEL_623:
            sub_41F250(
              "inlen_after <= sizeof (state->__value.__wchb)",
              "../iconv/loop.c",
              338,
              "internal_ascii_loop_single",
              *(double *)&v245);
            goto LABEL_624;
          }
        }
      }
      if ( v284 == v252 )
        goto LABEL_615;
LABEL_565:
      sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ascii");
LABEL_566:
      v285 = 0;
      continue;
    }
    return v285;
  }
}
