__int64 __fastcall sub_4155E4(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  __int64 v8; // x6
  unsigned __int64 v10; // x3
  _QWORD *v11; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  _QWORD *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x21
  unsigned __int64 v21; // x22
  unsigned __int64 v22; // x20
  __int64 v23; // x19
  int v24; // w0
  __int64 v25; // x1
  __int64 v26; // x0
  _QWORD *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  void (__fastcall *v30)(__int64); // x1
  unsigned int v31; // w3
  __int64 v32; // x2
  __int64 v33; // x3
  void *v34; // x4
  void *v35; // x5
  void *v36; // x6
  int32x2_t v37; // d1
  double v38; // d2
  double v39; // d3
  double v40; // d4
  double v41; // d5
  double v42; // d6
  double v43; // d7
  double v44; // d0
  __int64 v45; // x1
  int v46; // w25
  _QWORD *v47; // x22
  int v48; // w26
  int i; // w21
  __int64 v50; // x19
  __int64 v51; // x20
  int v52; // w0
  __int64 v53; // x0
  __int64 v54; // x0
  unsigned __int64 v55; // x27
  __int64 v56; // x21
  __int64 v57; // x0
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  unsigned __int64 v64; // x20
  __int64 v65; // x26
  unsigned __int64 v66; // x19
  unsigned __int8 *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x0
  __int64 v70; // x0
  double v71; // d0
  double v72; // d1
  double v73; // d2
  double v74; // d3
  double v75; // d4
  double v76; // d5
  double v77; // d6
  double v78; // d7
  unsigned __int64 v79; // x27
  double v80; // d0
  double v81; // d1
  double v82; // d2
  double v83; // d3
  double v84; // d4
  double v85; // d5
  double v86; // d6
  double v87; // d7
  double v88; // d0
  double v89; // d1
  double v90; // d2
  double v91; // d3
  double v92; // d4
  double v93; // d5
  double v94; // d6
  double v95; // d7
  bool v96; // cc
  _BYTE *v97; // x20
  int v98; // w21
  int v99; // w24
  _QWORD *v100; // x27
  int v101; // w0
  __int64 *v103; // x27
  int v104; // w0
  int32x2_t *v105; // x0
  int32x2_t v106; // d0
  int32x2_t *j; // x0
  _QWORD *v108; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x3
  __int64 v115; // x1
  __int64 v116; // x0
  __int64 (__fastcall *v117)(__int64); // x1
  unsigned int v118; // w0
  double v119; // d0
  double v120; // d1
  double v121; // d2
  double v122; // d3
  double v123; // d4
  double v124; // d5
  double v125; // d6
  double v126; // d7
  unsigned __int64 v127; // x21
  int v128; // w3
  __int64 v129; // x0
  unsigned __int64 v130; // x0
  __int64 v131; // x24
  double v132; // d0
  double v133; // d1
  double v134; // d2
  double v135; // d3
  double v136; // d4
  double v137; // d5
  double v138; // d6
  double v139; // d7
  double v140; // d0
  double v141; // d1
  double v142; // d2
  double v143; // d3
  double v144; // d4
  double v145; // d5
  double v146; // d6
  double v147; // d7
  double v148; // d0
  double v149; // d1
  double v150; // d2
  double v151; // d3
  double v152; // d4
  double v153; // d5
  double v154; // d6
  double v155; // d7
  __int64 v156; // x25
  __int64 v157; // x0
  _BYTE *v158; // x24
  __int64 v159; // x20
  __int64 v160; // x23
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  void *v164; // x4
  void *v165; // x5
  void *v166; // x6
  double v167; // d0
  double v168; // d1
  double v169; // d2
  double v170; // d3
  double v171; // d4
  double v172; // d5
  double v173; // d6
  double v174; // d7
  __int64 v175; // x0
  _QWORD *v176; // x19
  __int64 v177; // x0
  __int64 v178; // x0
  __int64 v179; // x0
  double v180; // d0
  double v181; // d1
  double v182; // d2
  double v183; // d3
  double v184; // d4
  double v185; // d5
  double v186; // d6
  double v187; // d7
  __int64 v189; // x0
  _QWORD *v190; // x0
  unsigned __int64 v191; // x20
  __int64 v192; // x19
  double v193; // d0
  double v194; // d1
  double v195; // d2
  double v196; // d3
  double v197; // d4
  double v198; // d5
  double v199; // d6
  double v200; // d7
  double v201; // d0
  double v202; // d1
  double v203; // d2
  double v204; // d3
  double v205; // d4
  double v206; // d5
  double v207; // d6
  double v208; // d7
  _BYTE *v209; // [xsp+8h] [xbp-100h] BYREF
  __int64 v210; // [xsp+10h] [xbp-F8h]
  int v211; // [xsp+18h] [xbp-F0h]
  int v212; // [xsp+1Ch] [xbp-ECh]
  __int64 v213; // [xsp+20h] [xbp-E8h]
  _QWORD *v214; // [xsp+28h] [xbp-E0h]
  _QWORD *v215; // [xsp+30h] [xbp-D8h] BYREF
  _QWORD v216[3]; // [xsp+38h] [xbp-D0h] BYREF
  __int128 v217; // [xsp+50h] [xbp-B8h]
  __int64 v218; // [xsp+60h] [xbp-A8h] BYREF
  __int64 v219; // [xsp+68h] [xbp-A0h] BYREF
  __int64 v220; // [xsp+70h] [xbp-98h]
  __int64 v221; // [xsp+78h] [xbp-90h]
  __int128 v222; // [xsp+80h] [xbp-88h]
  _QWORD v223[2]; // [xsp+90h] [xbp-78h] BYREF
  _QWORD *v224; // [xsp+A0h] [xbp-68h]
  __int64 *v225; // [xsp+A8h] [xbp-60h]
  __int64 v226; // [xsp+B0h] [xbp-58h]
  __int64 *v227; // [xsp+B8h] [xbp-50h]
  _BYTE *v228; // [xsp+C0h] [xbp-48h]
  unsigned __int64 v229; // [xsp+C8h] [xbp-40h]
  unsigned __int64 v230; // [xsp+D0h] [xbp-38h]
  _QWORD v231[4]; // [xsp+E0h] [xbp-28h] BYREF
  __int64 v232; // [xsp+100h] [xbp-8h]

  if ( a4 )
    v8 = a4;
  else
    v8 = a3;
  v224 = a5;
  v226 = v8;
  v229 = a2;
  v230 = a1;
  v232 = qword_48DD60;
  if ( a2 )
    v10 = a2;
  else
    v10 = a1;
  v228 = (_BYTE *)v10;
  v231[0] = v8;
  v231[1] = v10;
  v231[2] = 0;
  v231[3] = 0;
  v11 = (_QWORD *)sub_431690(v231, &qword_496868, sub_4154E0);
  v18 = v11;
  if ( !v11 )
  {
    if ( a4 )
    {
      v219 = a4;
      v227 = &v219;
      v220 = ifunc_40DFD0(a4);
      v221 = 0;
      v222 = 0u;
      v215 = 0;
      v216[0] = a3;
      v216[1] = ifunc_40DFD0(a3);
      v44 = 0.0;
      v45 = (__int64)&v218;
      v225 = &v218;
      v216[2] = 0;
      v223[0] = v216;
      v218 = 0;
      v217 = 0u;
    }
    else
    {
      v218 = 0;
      v219 = a3;
      v227 = &v219;
      v220 = ifunc_40DFD0(a3);
      v221 = 0;
      v222 = 0u;
      v223[0] = 0;
      v45 = (__int64)v223;
      v225 = v223;
    }
    v46 = 0x7FFFFFFF;
    v47 = v227;
    v48 = 0x7FFFFFFF;
    for ( i = 0; ; i = *((_DWORD *)v47 + 5) )
    {
      if ( v48 < i || v48 == i && *((_DWORD *)v47 + 4) >= v46 )
        goto LABEL_22;
      v50 = qword_496858;
      if ( !qword_496858 )
        goto LABEL_22;
      v51 = *v47;
      do
      {
        while ( 1 )
        {
          v52 = sub_42F240(v51, *(_QWORD *)v50);
          if ( !v52 )
          {
            while ( 1 )
            {
              v97 = *(_BYTE **)(v50 + 8);
              if ( *v97 == 45 && !v97[1] )
                v97 = v228;
              v98 = i + *(_DWORD *)(v50 + 16);
              v99 = *(_DWORD *)(v50 + 20) + *((_DWORD *)v47 + 4);
              if ( (unsigned int)sub_42F240(v97, v230) && (!v229 || (unsigned int)sub_42F240(v97, v229)) )
              {
                if ( v48 > v98 || (v48 == v98 ? (v96 = v46 <= v99) : (v96 = 1), !v96) )
                {
                  v103 = v227;
                  while ( (unsigned int)sub_42F240(v97, *v103) )
                  {
                    v103 = (__int64 *)v103[5];
                    if ( !v103 )
                    {
                      v209 = v97;
                      v210 = ifunc_40DFD0(v97);
                      v211 = v99;
                      v212 = v98;
                      v213 = v50;
                      v214 = v47;
                      v215 = 0;
                      *v225 = (__int64)&v209;
                      v225 = (__int64 *)&v215;
                      goto LABEL_61;
                    }
                  }
                  v104 = *((_DWORD *)v103 + 5);
                  if ( v104 > v98 || v104 == v98 && *((_DWORD *)v103 + 4) > v99 )
                  {
                    v33 = (__int64)v227;
                    v103[3] = v50;
                    v103[4] = (__int64)v47;
                    do
                    {
                      while ( 1 )
                      {
                        v105 = *(int32x2_t **)(v33 + 24);
                        if ( v105 )
                          break;
                        v33 = *(_QWORD *)(v33 + 40);
                        if ( !v33 )
                          goto LABEL_93;
                      }
                      v45 = *(_QWORD *)(v33 + 32);
                      v106.n64_u64[0] = v105[2].n64_u64[0];
                      for ( j = *(int32x2_t **)(v45 + 24); j; v106.n64_u64[0] = vadd_s32(v106, v37).n64_u64[0] )
                      {
                        v45 = *(_QWORD *)(v45 + 32);
                        v37.n64_u64[0] = j[2].n64_u64[0];
                        j = *(int32x2_t **)(v45 + 24);
                      }
                      v44 = vrev64_s32(v106).n64_f64[0];
                      *(double *)(v33 + 16) = v44;
                      v33 = *(_QWORD *)(v33 + 40);
                    }
                    while ( v33 );
LABEL_93:
                    if ( v18 )
                    {
                      v108 = v18;
                      do
                      {
                        v111 = v108[3];
                        v110 = v108[4];
                        v33 = *(unsigned int *)(v111 + 16);
                        v34 = (void *)*(unsigned int *)(v111 + 20);
                        v32 = (unsigned int)(*(_DWORD *)(v110 + 16) + (_DWORD)v34);
                        v45 = (unsigned int)(*(_DWORD *)(v110 + 20) + v33);
                        *((_DWORD *)v108 + 4) = v32;
                        *((_DWORD *)v108 + 5) = v45;
                        if ( (int)v45 >= v48 )
                        {
                          if ( (_DWORD)v45 == v48 && (int)v32 < v46 )
                            v46 = v32;
                        }
                        else
                        {
                          v46 = v32;
                          v48 = v45;
                        }
                        v108 = (_QWORD *)v108[5];
                      }
                      while ( v108 );
                    }
                  }
                }
              }
              else
              {
                if ( v18 )
                {
                  v100 = v18;
                  while ( (unsigned int)sub_42F240(v97, *v100) )
                  {
                    v100 = (_QWORD *)v100[5];
                    if ( !v100 )
                      goto LABEL_107;
                  }
                  v101 = *((_DWORD *)v100 + 5);
                  if ( v101 > v98 || v101 == v98 && *((_DWORD *)v100 + 4) > v99 )
                  {
                    *((_DWORD *)v100 + 4) = v99;
                    *((_DWORD *)v100 + 5) = v98;
                    v100[3] = v50;
                    v100[4] = v47;
                  }
                }
                else
                {
LABEL_107:
                  v209 = v97;
                  v210 = ifunc_40DFD0(v97);
                  v211 = v99;
                  v212 = v98;
                  v213 = v50;
                  v214 = v47;
                  v215 = v18;
                  v18 = &v209;
                }
                if ( v48 > v98 )
                {
                  v46 = v99;
                  v48 = v98;
                }
                else if ( v48 == v98 && v46 > v99 )
                {
                  v46 = v99;
                }
              }
LABEL_61:
              v50 = *(_QWORD *)(v50 + 40);
              if ( !v50 )
                break;
              i = *((_DWORD *)v47 + 5);
            }
LABEL_22:
            v47 = (_QWORD *)v47[5];
            if ( !v47 )
              goto LABEL_32;
            goto LABEL_23;
          }
          if ( v52 < 0 )
            break;
          v50 = *(_QWORD *)(v50 + 48);
          if ( !v50 )
            goto LABEL_31;
        }
        v50 = *(_QWORD *)(v50 + 32);
      }
      while ( v50 );
LABEL_31:
      v47 = (_QWORD *)v47[5];
      if ( !v47 )
      {
LABEL_32:
        if ( !v18 )
        {
          *v224 = 0;
          *a6 = 0;
          goto LABEL_124;
        }
        v53 = v18[5];
        if ( v53 )
        {
          v32 = *(unsigned int *)(v53 + 20);
          v45 = *((unsigned int *)v18 + 5);
          if ( (int)v32 >= (int)v45 )
          {
            if ( (_DWORD)v32 == (_DWORD)v45 )
            {
              v45 = *((unsigned int *)v18 + 4);
              v32 = *(unsigned int *)(v53 + 16);
              if ( (int)v32 < (int)v45 )
                v18 = (_QWORD *)v18[5];
            }
            goto LABEL_38;
          }
          v18 = (_QWORD *)v18[5];
          v54 = *(_QWORD *)(v53 + 32);
          if ( !v54 )
          {
LABEL_132:
            v189 = sub_40B890(0, v44, v37.n64_f64[0], v38, v39, v40, v41, v42, v43, v45, v32, v33, v34, v35, v36);
            if ( v189 )
            {
              v47 = (_QWORD *)v189;
              v127 = 0;
              *a6 = 0;
              goto LABEL_115;
            }
            goto LABEL_133;
          }
        }
        else
        {
LABEL_38:
          v54 = v18[4];
          if ( !v54 )
            goto LABEL_132;
        }
        v55 = 0;
        do
        {
          v54 = *(_QWORD *)(v54 + 32);
          v56 = v55++;
        }
        while ( v54 );
        v57 = sub_40B890(104 * v55, v44, v37.n64_f64[0], v38, v39, v40, v41, v42, v43, v45, v32, v33, v34, v35, v36);
        v64 = v57;
        if ( v57 )
        {
          *a6 = v55;
          if ( !v55 )
            goto LABEL_141;
          v230 = 0;
          v65 = v57 + 104 * v55 - 104;
          v66 = 0;
          if ( !v56 )
            goto LABEL_50;
LABEL_44:
          *(_QWORD *)(v65 + 24) = *(_QWORD *)v18[4];
          while ( 1 )
          {
            if ( *a6 == v55 )
            {
              v129 = sub_42F380(*v18);
              v230 = v129;
              *(_QWORD *)(v65 + 32) = v129;
              if ( !v129 )
                goto LABEL_51;
            }
            else
            {
              *(_QWORD *)(v65 + 32) = *(_QWORD *)(v64 + 104 * v55 + 24);
            }
            v67 = *(unsigned __int8 **)(v18[3] + 24LL);
            *(_DWORD *)(v65 + 16) = 1;
            *(_QWORD *)(v65 + 96) = 0;
            v68 = *v67;
            if ( (_DWORD)v68 == 47 )
            {
              v112 = (__int64 *)sub_41E330(v67, v68, v58, v59, v60, v61, v62, v63);
              if ( !v112 )
                goto LABEL_51;
              v113 = *v112;
              v114 = v112[3];
              *(_QWORD *)v65 = v112;
              *(_QWORD *)(v65 + 8) = v113;
              v115 = v112[4];
              *(_QWORD *)(v65 + 40) = v114;
              v59 = v112[5];
              *(_QWORD *)(v65 + 48) = 0;
              *(_QWORD *)(v65 + 56) = v115;
              v116 = qword_48DD68;
              *(_QWORD *)(v65 + 64) = v59;
              v117 = (__int64 (__fastcall *)(__int64))(v115 ^ qword_48DD68);
              if ( v117 )
              {
                v118 = v117(v65);
                v59 = v118;
                if ( v118 )
                {
                  v130 = *a6;
                  v79 = v55 - 1;
                  *(_QWORD *)(v65 + 64) = qword_48DD68;
                  if ( v79 >= v130 )
                  {
                    LODWORD(v229) = v59;
                    sub_40C1A0(v64, v119, v120, v121, v122, v123, v124, v125, v126);
                    v47 = 0;
                    sub_40C1A0(v66, v193, v194, v195, v196, v197, v198, v199, v200);
                    v127 = 0;
                    sub_40C1A0(v230, v201, v202, v203, v204, v205, v206, v207, v208);
                    *a6 = 0;
                    v128 = v229;
                    *v224 = 0;
                    goto LABEL_125;
                  }
                  goto LABEL_119;
                }
                v116 = *(_QWORD *)(v65 + 48) ^ qword_48DD68;
              }
              *(_QWORD *)(v65 + 48) = v116;
              v55 = v56;
              v18 = (_QWORD *)v18[4];
              v65 -= 104;
              v69 = v56 - 1;
              if ( !v56 )
              {
LABEL_114:
                v127 = *a6;
                v47 = (_QWORD *)v64;
                goto LABEL_115;
              }
            }
            else
            {
              sub_417350(v67, v65, v58, v59, v60, v61, v62, v63);
              v18 = (_QWORD *)v18[4];
              v65 -= 104;
              v69 = v56 - 1;
              v55 = v56;
              if ( !v56 )
                goto LABEL_114;
            }
            v56 = v69;
            if ( v69 )
              goto LABEL_44;
LABEL_50:
            v70 = sub_42F380(v226);
            *(_QWORD *)(v64 + 24) = v70;
            v66 = v70;
            if ( !v70 )
            {
LABEL_51:
              v79 = v56 + 1;
              LODWORD(v59) = 0;
              if ( v56 + 1 >= *a6 )
              {
                sub_40C1A0(v64, v71, v72, v73, v74, v75, v76, v77, v78);
                sub_40C1A0(v66, v80, v81, v82, v83, v84, v85, v86, v87);
                sub_40C1A0(v230, v88, v89, v90, v91, v92, v93, v94, v95);
                *a6 = 0;
                *v224 = 0;
LABEL_124:
                v127 = 0;
                v128 = 1;
                goto LABEL_125;
              }
LABEL_119:
              v131 = v64 + 104 * v79;
              do
              {
                LODWORD(v229) = v59;
                sub_415560(v131);
                ++v79;
                v131 += 104;
                LODWORD(v59) = v229;
              }
              while ( v79 < *a6 );
              sub_40C1A0(v64, v132, v133, v134, v135, v136, v137, v138, v139);
              sub_40C1A0(v66, v140, v141, v142, v143, v144, v145, v146, v147);
              sub_40C1A0(v230, v148, v149, v150, v151, v152, v153, v154, v155);
              *a6 = 0;
              v128 = v229;
              *v224 = 0;
              if ( v128 )
              {
                v47 = 0;
                v127 = 0;
                goto LABEL_125;
              }
              goto LABEL_124;
            }
          }
        }
LABEL_133:
        v190 = v224;
        *a6 = 0;
        v127 = 0;
        v128 = 3;
        *v190 = 0;
        goto LABEL_125;
      }
LABEL_23:
      ;
    }
  }
  v19 = *v11;
  v20 = *(_QWORD *)(v19 + 16);
  v21 = *(_QWORD *)(v19 + 24);
  *v224 = v20;
  *a6 = v21;
  v22 = v21 - 1;
  if ( !v21 )
  {
LABEL_17:
    v31 = 0;
    goto LABEL_128;
  }
  v23 = v20 + 104 * v21 - 104;
  while ( 1 )
  {
    v24 = *(_DWORD *)(v23 + 16);
    v25 = (unsigned int)(v24 + 1);
    *(_DWORD *)(v23 + 16) = v25;
    if ( !v24 )
    {
      v26 = *(_QWORD *)(v23 + 8);
      if ( v26 )
        break;
    }
LABEL_16:
    --v22;
    v23 -= 104;
    if ( v22 == -1 )
      goto LABEL_17;
  }
  v27 = (_QWORD *)sub_41E330(v26, v25, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)v23 = v27;
  if ( v27 )
  {
    v12 = v27[5];
    *(_QWORD *)(v23 + 40) = v27[3];
    v28 = v27[4];
    v29 = qword_48DD68;
    *(_QWORD *)(v23 + 48) = 0;
    *(_QWORD *)(v23 + 56) = v28;
    *(_QWORD *)(v23 + 64) = v12;
    v30 = (void (__fastcall *)(__int64))(v28 ^ qword_48DD68);
    if ( v30 )
    {
      v30(v23);
      v29 = *(_QWORD *)(v23 + 48) ^ qword_48DD68;
    }
    *(_QWORD *)(v23 + 48) = v29;
    goto LABEL_16;
  }
  v191 = v22 + 1;
  --*(_DWORD *)(v23 + 16);
  if ( v21 > v191 )
  {
    v192 = v20 + 104 * v191;
    do
    {
      ++v191;
      sub_415560(v192);
      v192 += 104;
    }
    while ( v21 > v191 );
  }
  v31 = 1;
LABEL_128:
  while ( v232 != qword_48DD60 )
  {
    v57 = sub_412340();
LABEL_141:
    v47 = (_QWORD *)v57;
    v127 = 0;
LABEL_115:
    v128 = 0;
    *v224 = v47;
LABEL_125:
    v156 = v226;
    LODWORD(v230) = v128;
    v157 = ifunc_40DFD0(v226);
    v158 = v228;
    v159 = v157 + 1;
    v160 = ifunc_40DFD0(v228) + 1;
    v175 = sub_40B890(
             v159 + v160 + 32,
             v167,
             v168,
             v169,
             v170,
             v171,
             v172,
             v173,
             v174,
             v161,
             v162,
             v163,
             v164,
             v165,
             v166);
    v31 = v230;
    v176 = (_QWORD *)v175;
    if ( v175 )
    {
      v177 = v175 + 32;
      *v176 = v177;
      LODWORD(v230) = v31;
      v178 = j_ifunc_40DC90(v177, v156, v159);
      v176[1] = j_ifunc_40DC90(v178 + v159, v158, v160);
      v176[2] = v47;
      v176[3] = v127;
      v179 = sub_4314B4(v176, &qword_496868, sub_4154E0);
      v31 = v230;
      if ( !v179 )
      {
        sub_40C1A0((unsigned __int64)v176, v180, v181, v182, v183, v184, v185, v186, v187);
        v31 = v230;
      }
    }
  }
  return v31;
}
