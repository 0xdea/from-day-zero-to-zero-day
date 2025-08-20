__int64 __fastcall find_derivation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, unsigned __int64 *a6)
{
  __int64 v8; // x6
  __int64 v10; // x3
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
  __int64 i; // x19
  int v24; // w0
  __int64 v25; // x1
  __int64 v26; // x0
  _QWORD *shlib; // x0
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
  int j; // w21
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
  __int64 v64; // x20
  __int64 v65; // x26
  __int64 v66; // x19
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
  int32x2_t *k; // x0
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
  __int64 v156; // x20
  __int64 v157; // x0
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  void *v161; // x4
  void *v162; // x5
  void *v163; // x6
  double v164; // d0
  double v165; // d1
  double v166; // d2
  double v167; // d3
  double v168; // d4
  double v169; // d5
  double v170; // d6
  double v171; // d7
  __int64 v172; // x0
  _QWORD *v173; // x19
  __int64 v174; // x0
  __int64 v175; // x0
  __int64 v176; // x0
  double v177; // d0
  double v178; // d1
  double v179; // d2
  double v180; // d3
  double v181; // d4
  double v182; // d5
  double v183; // d6
  double v184; // d7
  __int64 v186; // x0
  _QWORD *v187; // x0
  unsigned __int64 v188; // x20
  __int64 v189; // x19
  double v190; // d0
  double v191; // d1
  double v192; // d2
  double v193; // d3
  double v194; // d4
  double v195; // d5
  double v196; // d6
  double v197; // d7
  double v198; // d0
  double v199; // d1
  double v200; // d2
  double v201; // d3
  double v202; // d4
  double v203; // d5
  double v204; // d6
  double v205; // d7
  _BYTE *v206; // [xsp+8h] [xbp-100h] BYREF
  __int64 v207; // [xsp+10h] [xbp-F8h]
  int v208; // [xsp+18h] [xbp-F0h]
  int v209; // [xsp+1Ch] [xbp-ECh]
  __int64 v210; // [xsp+20h] [xbp-E8h]
  _QWORD *v211; // [xsp+28h] [xbp-E0h]
  _QWORD *v212; // [xsp+30h] [xbp-D8h] BYREF
  _QWORD v213[3]; // [xsp+38h] [xbp-D0h] BYREF
  __int128 v214; // [xsp+50h] [xbp-B8h]
  __int64 v215; // [xsp+60h] [xbp-A8h] BYREF
  __int64 v216; // [xsp+68h] [xbp-A0h] BYREF
  __int64 v217; // [xsp+70h] [xbp-98h]
  __int64 v218; // [xsp+78h] [xbp-90h]
  __int128 v219; // [xsp+80h] [xbp-88h]
  _QWORD v220[2]; // [xsp+90h] [xbp-78h] BYREF
  _QWORD *v221; // [xsp+A0h] [xbp-68h]
  __int64 *v222; // [xsp+A8h] [xbp-60h]
  __int64 v223; // [xsp+B0h] [xbp-58h]
  __int64 *v224; // [xsp+B8h] [xbp-50h]
  _BYTE *v225; // [xsp+C0h] [xbp-48h]
  __int64 v226; // [xsp+C8h] [xbp-40h]
  __int64 v227; // [xsp+D0h] [xbp-38h]
  _QWORD v228[4]; // [xsp+E0h] [xbp-28h] BYREF

  if ( a4 )
    v8 = a4;
  else
    v8 = a3;
  v221 = a5;
  v223 = v8;
  v226 = a2;
  v227 = a1;
  if ( a2 )
    v10 = a2;
  else
    v10 = a1;
  v225 = (_BYTE *)v10;
  v228[0] = v8;
  v228[1] = v10;
  v228[2] = 0;
  v228[3] = 0;
  v11 = (_QWORD *)tfind(v228, &known_derivations, derivation_compare);
  v18 = v11;
  if ( v11 )
  {
    v19 = *v11;
    v20 = *(_QWORD *)(v19 + 16);
    v21 = *(_QWORD *)(v19 + 24);
    *v221 = v20;
    *a6 = v21;
    v22 = v21 - 1;
    if ( !v21 )
      return 0;
    for ( i = v20 + 104 * v21 - 104; ; i -= 104 )
    {
      v24 = *(_DWORD *)(i + 16);
      v25 = (unsigned int)(v24 + 1);
      *(_DWORD *)(i + 16) = v25;
      if ( !v24 )
      {
        v26 = *(_QWORD *)(i + 8);
        if ( v26 )
        {
          shlib = (_QWORD *)_gconv_find_shlib(v26, v25, v12, v13, v14, v15, v16, v17);
          *(_QWORD *)i = shlib;
          if ( !shlib )
          {
            v188 = v22 + 1;
            --*(_DWORD *)(i + 16);
            if ( v21 > v188 )
            {
              v189 = v20 + 104 * v188;
              do
              {
                ++v188;
                _gconv_release_step(v189);
                v189 += 104;
              }
              while ( v21 > v188 );
            }
            return 1;
          }
          v12 = shlib[5];
          *(_QWORD *)(i + 40) = shlib[3];
          v28 = shlib[4];
          v29 = _pointer_chk_guard_local;
          *(_QWORD *)(i + 48) = 0;
          *(_QWORD *)(i + 56) = v28;
          *(_QWORD *)(i + 64) = v12;
          v30 = (void (__fastcall *)(__int64))(v28 ^ _pointer_chk_guard_local);
          if ( v30 )
          {
            v30(i);
            v29 = *(_QWORD *)(i + 48) ^ _pointer_chk_guard_local;
          }
          *(_QWORD *)(i + 48) = v29;
        }
      }
      if ( --v22 == -1 )
        return 0;
    }
  }
  if ( a4 )
  {
    v216 = a4;
    v224 = &v216;
    v217 = strlen(a4);
    v218 = 0;
    v219 = 0u;
    v212 = 0;
    v213[0] = a3;
    v213[1] = strlen(a3);
    v44 = 0.0;
    v45 = (__int64)&v215;
    v222 = &v215;
    v213[2] = 0;
    v220[0] = v213;
    v215 = 0;
    v214 = 0u;
  }
  else
  {
    v215 = 0;
    v216 = a3;
    v224 = &v216;
    v217 = strlen(a3);
    v218 = 0;
    v219 = 0u;
    v220[0] = 0;
    v45 = (__int64)v220;
    v222 = v220;
  }
  v46 = 0x7FFFFFFF;
  v47 = v224;
  v48 = 0x7FFFFFFF;
  for ( j = 0; ; j = *((_DWORD *)v47 + 5) )
  {
    if ( v48 >= j && (v48 != j || *((_DWORD *)v47 + 4) < v46) )
    {
      v50 = _gconv_modules_db;
      if ( _gconv_modules_db )
        break;
    }
LABEL_22:
    v47 = (_QWORD *)v47[5];
    if ( !v47 )
      goto LABEL_32;
LABEL_23:
    ;
  }
  v51 = *v47;
  do
  {
    while ( 1 )
    {
      v52 = strcmp(v51, *(_QWORD *)v50);
      if ( !v52 )
      {
        while ( 1 )
        {
          v97 = *(_BYTE **)(v50 + 8);
          if ( *v97 == 45 && !v97[1] )
            v97 = v225;
          v98 = j + *(_DWORD *)(v50 + 16);
          v99 = *(_DWORD *)(v50 + 20) + *((_DWORD *)v47 + 4);
          if ( !(unsigned int)strcmp(v97, v227) || v226 && !(unsigned int)strcmp(v97, v226) )
          {
            if ( v18 )
            {
              v100 = v18;
              while ( (unsigned int)strcmp(v97, *v100) )
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
              v206 = v97;
              v207 = strlen(v97);
              v208 = v99;
              v209 = v98;
              v210 = v50;
              v211 = v47;
              v212 = v18;
              v18 = &v206;
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
          else if ( v48 > v98 || (v48 == v98 ? (v96 = v46 <= v99) : (v96 = 1), !v96) )
          {
            v103 = v224;
            while ( (unsigned int)strcmp(v97, *v103) )
            {
              v103 = (__int64 *)v103[5];
              if ( !v103 )
              {
                v206 = v97;
                v207 = strlen(v97);
                v208 = v99;
                v209 = v98;
                v210 = v50;
                v211 = v47;
                v212 = 0;
                *v222 = (__int64)&v206;
                v222 = (__int64 *)&v212;
                goto LABEL_61;
              }
            }
            v104 = *((_DWORD *)v103 + 5);
            if ( v104 > v98 || v104 == v98 && *((_DWORD *)v103 + 4) > v99 )
            {
              v33 = (__int64)v224;
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
                for ( k = *(int32x2_t **)(v45 + 24); k; v106.n64_u64[0] = vadd_s32(v106, v37).n64_u64[0] )
                {
                  v45 = *(_QWORD *)(v45 + 32);
                  v37.n64_u64[0] = k[2].n64_u64[0];
                  k = *(int32x2_t **)(v45 + 24);
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
LABEL_61:
          v50 = *(_QWORD *)(v50 + 40);
          if ( !v50 )
            goto LABEL_22;
          j = *((_DWORD *)v47 + 5);
        }
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
  if ( v47 )
    goto LABEL_23;
LABEL_32:
  if ( !v18 )
  {
    *v221 = 0;
    *a6 = 0;
    goto LABEL_124;
  }
  v53 = v18[5];
  if ( v53 )
  {
    v32 = *(unsigned int *)(v53 + 20);
    v45 = *((unsigned int *)v18 + 5);
    if ( (int)v32 < (int)v45 )
    {
      v18 = (_QWORD *)v18[5];
      v54 = *(_QWORD *)(v53 + 32);
      if ( v54 )
        goto LABEL_39;
LABEL_131:
      v186 = malloc(0, v44, v37.n64_f64[0], v38, v39, v40, v41, v42, v43, v45, v32, v33, v34, v35, v36);
      if ( v186 )
      {
        v47 = (_QWORD *)v186;
        v127 = 0;
        *a6 = 0;
LABEL_115:
        v128 = 0;
        *v221 = v47;
        goto LABEL_125;
      }
LABEL_132:
      v187 = v221;
      *a6 = 0;
      v127 = 0;
      v128 = 3;
      *v187 = 0;
      goto LABEL_125;
    }
    if ( (_DWORD)v32 == (_DWORD)v45 )
    {
      v45 = *((unsigned int *)v18 + 4);
      v32 = *(unsigned int *)(v53 + 16);
      if ( (int)v32 < (int)v45 )
        v18 = (_QWORD *)v18[5];
    }
  }
  v54 = v18[4];
  if ( !v54 )
    goto LABEL_131;
LABEL_39:
  v55 = 0;
  do
  {
    v54 = *(_QWORD *)(v54 + 32);
    v56 = v55++;
  }
  while ( v54 );
  v57 = malloc(104 * v55, v44, v37.n64_f64[0], v38, v39, v40, v41, v42, v43, v45, v32, v33, v34, v35, v36);
  v64 = v57;
  if ( !v57 )
    goto LABEL_132;
  *a6 = v55;
  if ( !v55 )
  {
    v47 = (_QWORD *)v57;
    v127 = 0;
    goto LABEL_115;
  }
  v227 = 0;
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
      v129 = strdup(*v18);
      v227 = v129;
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
      break;
    _gconv_get_builtin_trans(v67, v65, v58, v59, v60, v61, v62, v63);
    v18 = (_QWORD *)v18[4];
    v65 -= 104;
    v69 = v56 - 1;
    v55 = v56;
    if ( !v56 )
      goto LABEL_114;
LABEL_49:
    v56 = v69;
    if ( v69 )
      goto LABEL_44;
LABEL_50:
    v70 = strdup(v223);
    *(_QWORD *)(v64 + 24) = v70;
    v66 = v70;
    if ( !v70 )
    {
LABEL_51:
      v79 = v56 + 1;
      LODWORD(v59) = 0;
      if ( v56 + 1 >= *a6 )
      {
        free(v64, v71, v72, v73, v74, v75, v76, v77, v78);
        free(v66, v80, v81, v82, v83, v84, v85, v86, v87);
        free(v227, v88, v89, v90, v91, v92, v93, v94, v95);
        *a6 = 0;
        *v221 = 0;
        goto LABEL_124;
      }
      goto LABEL_119;
    }
  }
  v112 = (__int64 *)_gconv_find_shlib(v67, v68, v58, v59, v60, v61, v62, v63);
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
  v116 = _pointer_chk_guard_local;
  *(_QWORD *)(v65 + 64) = v59;
  v117 = (__int64 (__fastcall *)(__int64))(v115 ^ _pointer_chk_guard_local);
  if ( !v117 )
  {
LABEL_113:
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
    goto LABEL_49;
  }
  v118 = v117(v65);
  v59 = v118;
  if ( !v118 )
  {
    v116 = *(_QWORD *)(v65 + 48) ^ _pointer_chk_guard_local;
    goto LABEL_113;
  }
  v130 = *a6;
  v79 = v55 - 1;
  *(_QWORD *)(v65 + 64) = _pointer_chk_guard_local;
  if ( v79 >= v130 )
  {
    LODWORD(v226) = v59;
    free(v64, v119, v120, v121, v122, v123, v124, v125, v126);
    v47 = 0;
    free(v66, v190, v191, v192, v193, v194, v195, v196, v197);
    v127 = 0;
    free(v227, v198, v199, v200, v201, v202, v203, v204, v205);
    *a6 = 0;
    v128 = v226;
    *v221 = 0;
    goto LABEL_125;
  }
LABEL_119:
  v131 = v64 + 104 * v79;
  do
  {
    LODWORD(v226) = v59;
    _gconv_release_step(v131);
    ++v79;
    v131 += 104;
    LODWORD(v59) = v226;
  }
  while ( v79 < *a6 );
  free(v64, v132, v133, v134, v135, v136, v137, v138, v139);
  free(v66, v140, v141, v142, v143, v144, v145, v146, v147);
  free(v227, v148, v149, v150, v151, v152, v153, v154, v155);
  *a6 = 0;
  v128 = v226;
  *v221 = 0;
  if ( v128 )
  {
    v47 = 0;
    v127 = 0;
    goto LABEL_125;
  }
LABEL_124:
  v127 = 0;
  v128 = 1;
LABEL_125:
  LODWORD(v227) = v128;
  v156 = strlen(v223) + 1;
  v157 = strlen(v225);
  v172 = malloc(
           v156 + v157 + 1 + 32,
           v164,
           v165,
           v166,
           v167,
           v168,
           v169,
           v170,
           v171,
           v158,
           v159,
           v160,
           v161,
           v162,
           v163);
  v31 = v227;
  v173 = (_QWORD *)v172;
  if ( v172 )
  {
    v174 = v172 + 32;
    *v173 = v174;
    LODWORD(v227) = v31;
    v175 = j_memcpy(v174);
    v173[1] = j_memcpy(v175 + v156);
    v173[2] = v47;
    v173[3] = v127;
    v176 = tsearch(v173, &known_derivations, derivation_compare);
    v31 = v227;
    if ( !v176 )
    {
      free((__int64)v173, v177, v178, v179, v180, v181, v182, v183, v184);
      return (unsigned int)v227;
    }
  }
  return v31;
}
