unsigned __int64 __fastcall dl_relocate_object(
        __int64 a1,
        __int64 **a2,
        int a3,
        int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  __int64 v12; // x20
  unsigned __int64 result; // x0
  int v16; // w19
  _QWORD *v17; // x27
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x23
  int v21; // w0
  __int64 v22; // x1
  char *v23; // x1
  char *v24; // x3
  char *v25; // x2
  __int64 v26; // x5
  unsigned __int64 v27; // x0
  unsigned __int64 v28; // x0
  _QWORD *i; // x1
  double v30; // d0
  __int64 v31; // x6
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x0
  __int64 v37; // x3
  __int64 v38; // x4
  int v39; // w21
  __int64 *v40; // x4
  __int64 v41; // x28
  __int64 (__fastcall *v42)(); // x22
  __int64 v43; // x25
  int v44; // w3
  __int64 *v45; // x0
  __int64 v46; // x12
  __int64 v47; // x24
  unsigned __int64 v48; // x19
  __int64 *v49; // x23
  __int64 (__fastcall *v50)(); // x0
  int v51; // w26
  int v52; // w22
  unsigned __int64 v53; // x21
  __int64 (__fastcall *v54)(); // x19
  unsigned __int64 v55; // x1
  __int64 (__fastcall **v56)(); // x24
  __int64 (__fastcall *v57)(); // x0
  __int64 v58; // x0
  unsigned __int64 v59; // x1
  void *v60; // x4
  __int64 v61; // x0
  unsigned __int64 v62; // x2
  __int64 v63; // x0
  __int64 v64; // x5
  __int64 v65; // x4
  __int64 v66; // x3
  unsigned int *v67; // x2
  unsigned int v68; // w3
  __int64 v69; // x3
  __int64 v70; // x1
  __int64 v71; // x2
  const char *v72; // x0
  __int64 *v73; // x4
  unsigned __int64 v74; // x0
  __int64 v75; // x2
  unsigned int *v76; // x2
  char v77; // w3
  __int64 v78; // x4
  unsigned int v79; // w5
  __int64 v80; // x1
  __int64 v81; // x0
  const char *v82; // x0
  __int64 *v83; // x0
  __int64 (__fastcall *v84)(__int64, __int64 *); // x3
  __int64 v85; // x3
  bool v86; // zf
  bool v87; // zf
  __int64 v88; // x2
  __int64 v89; // x0
  __int64 v90; // x13
  __int64 v91; // x22
  __int64 *v92; // x20
  __int64 v93; // x26
  __int64 v94; // x1
  unsigned __int64 v95; // x25
  __int64 v96; // x3
  __int64 (__fastcall **v97)(); // x27
  __int16 v98; // w4
  unsigned int *v99; // x23
  unsigned int v100; // w2
  __int64 v101; // x1
  char v102; // w2
  __int64 v103; // x6
  __int64 v104; // x0
  const char *v105; // x0
  __int64 v106; // x4
  __int64 v107; // x0
  __int64 v108; // x3
  __int64 *v109; // x4
  __int64 *v110; // x3
  int v111; // w2
  bool v112; // zf
  bool v113; // zf
  __int64 *v115; // x1
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x0
  __int64 (__fastcall *v119)(); // x2
  __int64 v120; // x0
  unsigned int v121; // w24
  __int64 v122; // x20
  __int64 v123; // x1
  __int64 v124; // x0
  unsigned __int64 v125; // x1
  unsigned __int64 v126; // x2
  bool v127; // cf
  __int64 v128; // x2
  __int64 v129; // x5
  const char *v130; // x1
  __int64 v131; // x2
  int v132; // w1
  int v133; // w3
  bool v134; // zf
  __int64 v135; // x1
  bool v136; // zf
  __int64 v137; // x1
  __int64 v138; // x0
  __int64 v139; // x1
  __int64 *v140; // x20
  __int64 v141; // x0
  unsigned __int64 v142; // x23
  __int64 (__fastcall **v143)(); // x25
  unsigned int *v144; // x26
  unsigned int v145; // w1
  __int64 v146; // x1
  char v147; // w3
  __int64 v148; // x2
  __int64 v149; // x0
  __int64 v150; // x0
  __int64 v151; // x2
  _QWORD *v152; // x27
  __int64 *v153; // x4
  int v154; // w1
  int v155; // w0
  int v156; // w1
  __int64 v157; // x2
  bool v158; // zf
  bool v159; // zf
  __int64 *v161; // x1
  __int64 v162; // x1
  __int64 v163; // x0
  __int64 (__fastcall *v164)(); // x2
  __int64 v165; // x0
  __int64 v166; // x1
  __int64 v167; // x0
  __int64 v168; // x0
  unsigned __int64 v169; // x1
  unsigned __int64 v170; // x2
  bool v171; // cf
  __int64 v172; // x2
  __int64 v173; // x5
  const char *v174; // x1
  __int64 v175; // x2
  unsigned __int64 v176; // x1
  unsigned int v177; // w2
  unsigned __int64 v178; // x23
  __int64 v179; // x0
  unsigned __int64 v180; // x3
  __int64 v181; // x1
  __int64 v182; // x0
  size_t v183; // x1
  void *v184; // x0
  __int64 v185; // x2
  const char *v186; // x1
  const char *v187; // x2
  __int64 (__fastcall *v188)(); // x3
  const char *v189; // x3
  const char *v190; // x1
  _QWORD v191[2]; // [xsp+8h] [xbp-20h] BYREF
  int v192; // [xsp+18h] [xbp-10h]
  _QWORD *v193; // [xsp+20h] [xbp-8h]
  __int64 *v194; // [xsp+88h] [xbp+60h]
  __int64 *v195; // [xsp+90h] [xbp+68h]
  __int64 *v196; // [xsp+98h] [xbp+70h]
  __int64 *v197; // [xsp+A0h] [xbp+78h]
  __int64 (__fastcall *v198)(); // [xsp+A8h] [xbp+80h]
  __int64 v199; // [xsp+B0h] [xbp+88h]
  __int64 *v200; // [xsp+B8h] [xbp+90h]
  _QWORD *v201; // [xsp+C0h] [xbp+98h]
  int v202; // [xsp+C8h] [xbp+A0h]
  int v203; // [xsp+CCh] [xbp+A4h]
  __int64 (__fastcall *v204)(); // [xsp+D0h] [xbp+A8h]
  __int64 *v205; // [xsp+D8h] [xbp+B0h]
  __int64 *v206; // [xsp+E0h] [xbp+B8h]
  __int64 *v207; // [xsp+E8h] [xbp+C0h]
  __int64 **v208; // [xsp+F0h] [xbp+C8h]
  unsigned int *v209; // [xsp+F8h] [xbp+D0h] BYREF
  __int64 v210; // [xsp+100h] [xbp+D8h] BYREF
  __int64 v211; // [xsp+108h] [xbp+E0h]
  __int64 v212; // [xsp+110h] [xbp+E8h]
  __int128 v213; // [xsp+118h] [xbp+F0h] BYREF
  __int128 v214; // [xsp+128h] [xbp+100h]
  __int128 v215; // [xsp+138h] [xbp+110h]
  __int128 v216; // [xsp+148h] [xbp+120h]

  v12 = a1;
  result = *(unsigned __int16 *)(a1 + 868);
  v208 = a2;
  if ( (result & 8) == 0 )
  {
    if ( a4 || !*(_QWORD *)(v12 + 256) )
      v16 = a3 & 1;
    else
      v16 = 0;
    if ( (dl_debug_mask & 0x20) != 0 )
    {
      v186 = *(const char **)(v12 + 8);
      if ( !*v186 )
      {
        v186 = (const char *)program_invocation_short_name[0];
        if ( !program_invocation_short_name[0] )
          v186 = "<main program>";
      }
      v187 = (const char *)&qword_456B08;
      if ( v16 )
        v187 = " (lazy)";
      dl_debug_printf("\nrelocation processing: %s%s\n", v186, v187);
    }
    v17 = *(_QWORD **)(v12 + 240);
    if ( v17 )
    {
      v176 = *(_QWORD *)(v12 + 752);
      v177 = *(unsigned __int16 *)(v12 + 768);
      v178 = v176;
      if ( v176 < v176 + 56LL * *(unsigned __int16 *)(v12 + 768) )
      {
        v17 = 0;
        while ( 1 )
        {
          if ( (*(_QWORD *)v178 & 0x2FFFFFFFFLL) == 1 )
          {
            v179 = *(_QWORD *)(v178 + 16);
            v180 = *(unsigned int *)(v178 + 4);
            v181 = v179 + *(_QWORD *)(v178 + 40) + dl_pagesize - 1;
            v182 = v179 & -dl_pagesize;
            v183 = (v181 & -dl_pagesize) - v182;
            v184 = (void *)(v182 + *(_QWORD *)v12);
            v191[0] = v184;
            v191[1] = v183;
            v185 = (v180 >> 2) & 1;
            if ( (v180 & 2) != 0 )
              LODWORD(v185) = v185 | 2;
            v192 = v185;
            if ( (v180 & 1) != 0 )
            {
              LODWORD(v185) = v185 | 4;
              v192 = v185;
            }
            if ( (mprotect(v184, v183, (unsigned int)v185 | 2) & 0x80000000) != 0 )
            {
              v189 = "cannot make segment writable for relocation";
              goto LABEL_391;
            }
            v176 = *(_QWORD *)(v12 + 752);
            v193 = v17;
            v177 = *(unsigned __int16 *)(v12 + 768);
            v17 = v191;
          }
          v178 += 56LL;
          if ( v178 >= v176 + 56LL * v177 )
            goto LABEL_6;
        }
      }
      v17 = 0;
    }
LABEL_6:
    v18 = *(_QWORD *)(v12 + 248);
    if ( ((v18 != 0) & (unsigned __int8)v16) != 0 )
    {
      v138 = *(_QWORD *)(*(_QWORD *)(v12 + 88) + 8LL);
      if ( (*(_BYTE *)(v12 + 870) & 0x20) != 0 )
        v138 += *(_QWORD *)v12;
      v139 = *(_QWORD *)(v138 + 8);
      if ( v139 )
        *(_QWORD *)(v12 + 1072) = *(_QWORD *)v12 + v139;
      *(_QWORD *)(v138 + 8) = v12;
      *(_QWORD *)(v138 + 16) = dl_runtime_resolve;
    }
    v19 = *(_BYTE *)(v12 + 870) & 0x20;
    v20 = *(_QWORD *)v12;
    v21 = *(_BYTE *)(v12 + 870) & 0x20;
    if ( v12 )
    {
      v22 = *(_QWORD *)(v12 + 352);
      if ( v22 )
      {
        v23 = *(char **)(v22 + 8);
        v24 = &v23[v20];
        if ( (*(_BYTE *)(v12 + 870) & 0x20) == 0 )
          v24 = v23;
        v25 = &v24[*(_QWORD *)(*(_QWORD *)(v12 + 344) + 8LL)];
        if ( v24 < v25 )
        {
          v26 = 0;
          do
          {
            while ( 1 )
            {
              v27 = *(_QWORD *)v24;
              if ( (*(_QWORD *)v24 & 1) != 0 )
                break;
              v24 += 8;
              v26 = v27 + v20 + 8;
              *(_QWORD *)(v27 + v20) += v20;
              if ( v25 <= v24 )
                goto LABEL_20;
            }
            v28 = v27 >> 1;
            for ( i = (_QWORD *)v26; v28; ++i )
            {
              if ( (v28 & 1) != 0 )
                *i += v20;
              v28 >>= 1;
            }
            v24 += 8;
            v26 += 504;
          }
          while ( v25 > v24 );
LABEL_20:
          v20 = *(_QWORD *)v12;
          v19 = *(_BYTE *)(v12 + 870) & 0x20;
          v21 = *(_BYTE *)(v12 + 870) & 0x20;
        }
      }
    }
    v30 = 0.0;
    v31 = (__int64)&v213;
    v32 = *(_QWORD *)(v12 + 120);
    v213 = 0u;
    v214 = 0u;
    v215 = 0u;
    v216 = 0u;
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 8);
      v34 = 0;
      if ( v33 )
      {
        v35 = *(_QWORD *)(v12 + 464);
        v34 = *(_QWORD *)(*(_QWORD *)(v12 + 128) + 8LL);
        if ( v21 )
          v33 += v20;
        *(_QWORD *)&v213 = v33;
        *((_QWORD *)&v213 + 1) = v34;
        if ( v35 )
          *(_QWORD *)&v214 = *(_QWORD *)(v35 + 8);
      }
    }
    else
    {
      v34 = 0;
      v33 = 0;
    }
    if ( *(_QWORD *)(v12 + 224) )
    {
      v86 = v21 == 0;
      v36 = *(_QWORD *)(v18 + 8);
      v37 = *(_QWORD *)(*(_QWORD *)(v12 + 80) + 8LL);
      if ( !v86 )
        v36 += v20;
      if ( !v33 )
        v33 = v36;
      v38 = v33 + v34;
      *(_QWORD *)&v213 = v33;
      if ( v33 + v34 == v37 + v36 )
      {
        v34 -= v37;
        *((_QWORD *)&v213 + 1) = v34;
        v38 = v34 + v33;
      }
      if ( !v16 && v36 == v38 )
      {
        *((_QWORD *)&v213 + 1) = v37 + v34;
      }
      else
      {
        *(_QWORD *)&v215 = v36;
        *((_QWORD *)&v215 + 1) = v37;
        DWORD2(v216) = v16;
      }
    }
    v39 = a3 & 0x2000000;
    v40 = (__int64 *)&v213;
    v41 = v20;
    v203 = a4;
    v42 = dl_tlsdesc_return;
    v43 = 0;
    v44 = 0;
    v207 = &v210;
    while ( 1 )
    {
      v45 = (__int64 *)*v40;
      v46 = v40[1];
      v47 = *(_QWORD *)(*(_QWORD *)(v12 + 112) + 8LL);
      v48 = *v40 + v46;
      v49 = (__int64 *)(*v40 + 24 * v40[2]);
      if ( (_DWORD)v19 )
        v47 += v41;
      if ( *((_DWORD *)v40 + 6) )
      {
        if ( (unsigned __int64)v49 >= v48 )
          goto LABEL_51;
        v50 = v42;
        v51 = v44;
        v52 = v39;
        v53 = *v40 + v46;
        v54 = v50;
        v206 = v40;
        while ( 1 )
        {
          v55 = v49[1];
          v56 = (__int64 (__fastcall **)())(v41 + *v49);
          if ( (_DWORD)v55 != 1026 )
            break;
          if ( *(_QWORD *)(v12 + 408) )
          {
            v74 = HIDWORD(v55);
            v31 = 0;
            v75 = *(_QWORD *)(*(_QWORD *)(v12 + 112) + 8LL);
            if ( (*(_BYTE *)(v12 + 870) & 0x20) != 0 )
            {
              v31 = *(_QWORD *)v12;
              v75 += *(_QWORD *)v12;
            }
            v19 = 2 * v74;
            v76 = (unsigned int *)(v75 + 24 * v74);
            v77 = *((_BYTE *)v76 + 5);
            if ( v77 < 0 )
            {
              v78 = *(_QWORD *)(v12 + 536);
              if ( v78 )
                v78 = *(_QWORD *)(v12 + 816) + 24LL * (*(_WORD *)(v19 + v31 + *(_QWORD *)(v78 + 8)) & 0x7FFF);
              v209 = v76;
              v79 = *((unsigned __int8 *)v76 + 4);
              if ( v79 >> 4 && (v77 & 3u) - 1 > 1 )
              {
                if ( v76 == *(unsigned int **)(v12 + 1096) )
                {
                  v19 = 1;
                  if ( *(_DWORD *)(v12 + 1104) != 1 )
                    goto LABEL_87;
                  v76 = *(unsigned int **)(v12 + 1120);
                  v209 = v76;
                  v83 = *(__int64 **)(v12 + 1112);
                }
                else
                {
                  LODWORD(v19) = 1;
LABEL_87:
                  v80 = *v76;
                  v81 = *(_QWORD *)(*(_QWORD *)(v12 + 104) + 8LL);
                  *(_QWORD *)(v12 + 1096) = v76;
                  *(_DWORD *)(v12 + 1104) = v19;
                  v82 = (const char *)(v31 + v81 + v80);
                  if ( v78 && !*(_DWORD *)(v78 + 8) )
                    v78 = 0;
                  v83 = (__int64 *)dl_lookup_symbol_x(
                                     v82,
                                     v12,
                                     (__int64 *)&v209,
                                     v208,
                                     (const char **)v78,
                                     v19,
                                     9,
                                     0,
                                     v30,
                                     a6,
                                     a7,
                                     a8,
                                     a9,
                                     a10,
                                     a11,
                                     a12);
                  *(_QWORD *)(v12 + 1112) = v83;
                  v76 = v209;
                  *(_QWORD *)(v12 + 1120) = v209;
                }
                v84 = 0;
                if ( v76 )
                {
                  LOBYTE(v79) = *((_BYTE *)v76 + 4);
LABEL_93:
                  if ( *((unsigned __int16 *)v76 + 3) == 65521 )
                    v85 = 0;
                  else
                    v85 = *v83;
                  v19 = v79 & 0xF;
                  if ( *((_WORD *)v76 + 3) )
                    v86 = (_DWORD)v19 == 10;
                  else
                    v86 = 0;
                  v87 = v86 && v52 == 0;
                  v84 = (__int64 (__fastcall *)(__int64, __int64 *))(v85 + *((_QWORD *)v76 + 1));
                  if ( v87 )
                  {
                    v210 = 24;
                    v211 = dl_hwcap;
                    v212 = dl_hwcap2;
                    v84 = (__int64 (__fastcall *)(__int64, __int64 *))v84(dl_hwcap | 0x4000000000000000LL, &v210);
                  }
                }
                *v56 = (__int64 (__fastcall *)())((char *)v84 + v49[2]);
                goto LABEL_44;
              }
              v83 = (__int64 *)v12;
              goto LABEL_93;
            }
          }
          v57 = *(__int64 (__fastcall **)())(v12 + 1072);
          if ( v57 )
          {
            *v56 = v57;
LABEL_49:
            v49 += 3;
            if ( v53 <= (unsigned __int64)v49 )
            {
LABEL_50:
              v40 = v206;
              v39 = v52;
              v44 = v51;
              v42 = v54;
              goto LABEL_51;
            }
          }
          else
          {
            *v56 = (__int64 (__fastcall *)())((char *)*v56 + v41);
LABEL_44:
            v49 += 3;
            if ( v53 <= (unsigned __int64)v49 )
              goto LABEL_50;
          }
        }
        if ( (_DWORD)v55 != 1031 )
        {
          if ( (_DWORD)v55 != 1032 )
            dl_reloc_bad_type(v12, v55, 1);
          v188 = (__int64 (__fastcall *)())(*(_QWORD *)v12 + v49[2]);
          if ( !v52 )
          {
            v210 = 24;
            v211 = dl_hwcap;
            v212 = dl_hwcap2;
            v188 = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, __int64 *))v188)(
                                               dl_hwcap | 0x4000000000000000LL,
                                               &v210);
          }
          *v56 = v188;
          goto LABEL_44;
        }
        v62 = HIDWORD(v55);
        v63 = 0;
        v64 = *(_QWORD *)(*(_QWORD *)(v12 + 112) + 8LL);
        if ( (*(_BYTE *)(v12 + 870) & 0x20) != 0 )
        {
          v63 = *(_QWORD *)v12;
          v64 += *(_QWORD *)v12;
        }
        v65 = *(_QWORD *)(v12 + 536);
        v66 = 2 * v62;
        v67 = (unsigned int *)(v64 + 24 * v62);
        if ( v65 )
        {
          v31 = 24;
          v65 = *(_QWORD *)(v12 + 816) + 24LL * (*(_WORD *)(v66 + v63 + *(_QWORD *)(v65 + 8)) & 0x7FFF);
        }
        v209 = v67;
        v68 = *((unsigned __int8 *)v67 + 4);
        if ( !(v68 >> 4) || (*((_BYTE *)v67 + 5) & 3u) - 1 <= 1 )
        {
          v73 = (__int64 *)v12;
          goto LABEL_212;
        }
        if ( v67 == *(unsigned int **)(v12 + 1096) )
        {
          v19 = 1;
          if ( *(_DWORD *)(v12 + 1104) == 1 )
          {
            v67 = *(unsigned int **)(v12 + 1120);
            v209 = v67;
            v73 = *(__int64 **)(v12 + 1112);
LABEL_76:
            if ( !v67 )
            {
LABEL_77:
              v56[1] = (__int64 (__fastcall *)())v49[2];
              *v56 = dl_tlsdesc_undefweak;
              goto LABEL_49;
            }
            LOBYTE(v68) = *((_BYTE *)v67 + 4);
LABEL_212:
            if ( *((unsigned __int16 *)v67 + 3) == 65521 )
              v19 = 0;
            else
              v19 = *v73;
            v133 = v68 & 0xF;
            if ( *((_WORD *)v67 + 3) )
              v134 = v133 == 10;
            else
              v134 = 0;
            v135 = *((_QWORD *)v67 + 1);
            v136 = v134 && v52 == 0;
            if ( !v136
              || (v205 = v73,
                  v210 = 24,
                  v211 = dl_hwcap,
                  v212 = dl_hwcap2,
                  ((void (__fastcall *)(__int64, __int64 *))(v135 + v19))(dl_hwcap | 0x4000000000000000LL, &v210),
                  v73 = v205,
                  v209) )
            {
              v137 = v73[146];
              if ( (unsigned __int64)(v137 + 1) <= 1 )
              {
                v205 = v73;
                dl_allocate_static_tls((__int64)v73);
                v137 = v205[146];
              }
              v56[1] = (__int64 (__fastcall *)())(*((_QWORD *)v209 + 1) + v49[2] + v137);
              *v56 = v54;
              goto LABEL_44;
            }
            goto LABEL_77;
          }
        }
        else
        {
          LODWORD(v19) = 1;
        }
        v69 = *(_QWORD *)(v12 + 104);
        v70 = *v67;
        *(_QWORD *)(v12 + 1096) = v67;
        v71 = *(_QWORD *)(v69 + 8);
        *(_DWORD *)(v12 + 1104) = v19;
        v72 = (const char *)(v63 + v71 + v70);
        if ( v65 && !*(_DWORD *)(v65 + 8) )
          v65 = 0;
        v73 = (__int64 *)dl_lookup_symbol_x(
                           v72,
                           v12,
                           (__int64 *)&v209,
                           v208,
                           (const char **)v65,
                           v19,
                           9,
                           0,
                           v30,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           a12);
        v67 = v209;
        *(_QWORD *)(v12 + 1112) = v73;
        *(_QWORD *)(v12 + 1120) = v67;
        goto LABEL_76;
      }
      if ( v12 != v43 && v49 > v45 )
      {
        do
        {
          v88 = *v45;
          v45 += 3;
          *(_QWORD *)(v88 + v41) = *(v45 - 1) + v41;
        }
        while ( v49 > v45 );
      }
      v89 = *(_QWORD *)(v12 + 536);
      if ( v89 )
      {
        v90 = *(_QWORD *)(v89 + 8);
        if ( (*(_BYTE *)(v12 + 870) & 0x20) != 0 )
          v90 += *(_QWORD *)v12;
        if ( (unsigned __int64)v49 < v48 )
        {
          v206 = &dl_hwcap;
          v198 = v42;
          v199 = v43;
          v91 = v12;
          v92 = v49;
          v205 = &dl_hwcap2;
          v93 = v90;
          v200 = v40;
          v201 = v17;
          v202 = v44;
          v204 = dl_tlsdesc_return;
          while ( 1 )
          {
            v94 = *v92;
            v95 = v92[1];
            v96 = *(_QWORD *)(v91 + 816);
            v97 = (__int64 (__fastcall **)())(v41 + *v92);
            v98 = *(_WORD *)(v93 + 2 * HIDWORD(v95));
            v99 = (unsigned int *)(v47 + 24 * HIDWORD(v95));
            v209 = v99;
            if ( (_DWORD)v95 == 1027 )
            {
              *(_QWORD *)(v41 + v94) = *(_QWORD *)v91 + v92[2];
              goto LABEL_151;
            }
            if ( !(_DWORD)v95 )
              goto LABEL_151;
            v100 = *((unsigned __int8 *)v99 + 4);
            if ( v100 >> 4 )
            {
              if ( (*((_BYTE *)v99 + 5) & 3u) - 1 > 1 )
                break;
            }
            v108 = v47 + 24 * HIDWORD(v95);
            v109 = (__int64 *)v91;
            v19 = *((unsigned __int16 *)v99 + 3);
            if ( (_DWORD)v19 == 65521 )
            {
LABEL_154:
              v110 = *(__int64 **)(v108 + 8);
              if ( (v100 & 0xF) != 0xA || v39 != 0 )
              {
LABEL_144:
                if ( (_DWORD)v95 == 1029 )
                  goto LABEL_189;
                if ( (unsigned int)v95 <= 0x405 )
                {
                  if ( (unsigned int)v95 > 0x402 )
                    goto LABEL_174;
                  if ( (unsigned int)v95 <= 0x400 )
                  {
                    if ( (unsigned int)v95 > 0x102 )
                    {
                      if ( (_DWORD)v95 != 1024 )
                        goto LABEL_184;
                      v116 = (__int64)v209;
LABEL_193:
                      v125 = *(_QWORD *)(v116 + 16);
                      v126 = *((_QWORD *)v99 + 2);
                      if ( v125 <= v126 && (dl_verbose ? (v127 = v125 >= v126) : (v127 = 1), v127) )
                      {
                        j_memcpy(v97);
                      }
                      else
                      {
                        v128 = *(_QWORD *)(*(_QWORD *)(v91 + 104) + 8LL);
                        if ( (*(_BYTE *)(v91 + 870) & 0x20) != 0 )
                          v128 += *(_QWORD *)v91;
                        v129 = *v99;
                        v130 = "<program name unknown>";
                        v197 = v110;
                        v131 = v128 + v129;
                        if ( program_invocation_short_name[0] )
                          v130 = (const char *)program_invocation_short_name[0];
                        dl_error_printf(
                          "%s: Symbol `%s' has different size in shared object, consider re-linking\n",
                          v130,
                          v131);
                        j_memcpy(v97);
                      }
                      goto LABEL_151;
                    }
LABEL_149:
                    if ( (unsigned int)v95 <= 0x100 )
                      goto LABEL_184;
                  }
                  goto LABEL_150;
                }
                if ( (_DWORD)v95 == 1031 )
                  goto LABEL_185;
                if ( (_DWORD)v95 == 1032 )
                  goto LABEL_177;
                goto LABEL_169;
              }
              goto LABEL_159;
            }
LABEL_137:
            v111 = v100 & 0xF;
            if ( (_DWORD)v19 )
              v112 = v111 == 10;
            else
              v112 = 0;
            v113 = v112 && v39 == 0;
            v110 = (__int64 *)(*v109 + *(_QWORD *)(v108 + 8));
            if ( !v113 )
              goto LABEL_144;
LABEL_159:
            v210 = 24;
            v211 = dl_hwcap;
            v212 = dl_hwcap2;
            v194 = v109;
            v195 = &dl_hwcap;
            v196 = &dl_hwcap2;
            v197 = &v210;
            v110 = (__int64 *)((__int64 (__fastcall *)(__int64))v110)(dl_hwcap | 0x4000000000000000LL);
            if ( (_DWORD)v95 == 1029 )
            {
LABEL_189:
              if ( v209 )
                *v97 = (__int64 (__fastcall *)())(*((_QWORD *)v209 + 1) + v92[2]);
              goto LABEL_151;
            }
            v109 = v194;
            v19 = (__int64)v195;
            v31 = (__int64)v196;
            v115 = v197;
            if ( (unsigned int)v95 > 0x405 )
            {
              if ( (_DWORD)v95 == 1031 )
              {
LABEL_185:
                v123 = (__int64)v209;
                if ( v209 )
                {
                  v124 = v109[146];
                  if ( (unsigned __int64)(v124 + 1) <= 1 )
                  {
                    v197 = v109;
                    dl_allocate_static_tls((__int64)v109);
                    v123 = (__int64)v209;
                    v124 = v197[146];
                  }
                  v97[1] = (__int64 (__fastcall *)())(v124 + v92[2] + *(_QWORD *)(v123 + 8));
                  *v97 = v204;
                  goto LABEL_151;
                }
LABEL_230:
                v97[1] = (__int64 (__fastcall *)())v92[2];
                *v97 = dl_tlsdesc_undefweak;
                goto LABEL_151;
              }
              if ( (_DWORD)v95 == 1032 )
              {
                v119 = (__int64 (__fastcall *)())(v92[2] + *(_QWORD *)v91);
LABEL_179:
                v120 = *(_QWORD *)v19;
                v210 = 24;
                v211 = v120;
                v212 = *(_QWORD *)v31;
                v119 = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, __int64 *))v119)(
                                                   v120 | 0x4000000000000000LL,
                                                   v115);
LABEL_180:
                *v97 = v119;
                goto LABEL_151;
              }
LABEL_169:
              if ( (_DWORD)v95 != 1030 )
                goto LABEL_184;
              v117 = (__int64)v209;
              if ( v209 )
              {
                v118 = v109[146];
                if ( (unsigned __int64)(v118 + 1) <= 1 )
                {
                  v197 = v109;
                  dl_allocate_static_tls((__int64)v109);
                  v117 = (__int64)v209;
                  v118 = v197[146];
                }
                *v97 = (__int64 (__fastcall *)())(v118 + v92[2] + *(_QWORD *)(v117 + 8));
              }
              goto LABEL_151;
            }
            if ( (unsigned int)v95 > 0x402 )
            {
LABEL_174:
              if ( v109 )
                *v97 = (__int64 (__fastcall *)())v109[147];
              goto LABEL_151;
            }
            if ( (unsigned int)v95 > 0x400 )
              goto LABEL_150;
            if ( (unsigned int)v95 <= 0x102 )
              goto LABEL_149;
            if ( (_DWORD)v95 != 1024 )
              goto LABEL_184;
            v116 = (__int64)v209;
            if ( v209 )
              goto LABEL_193;
LABEL_151:
            v92 += 3;
            if ( v48 <= (unsigned __int64)v92 )
              goto LABEL_152;
          }
          if ( v99 != *(unsigned int **)(v91 + 1096) )
          {
            LODWORD(v19) = 1;
            if ( (unsigned int)v95 != 1026 )
            {
              if ( (unsigned int)v95 > 0x402uLL )
                LODWORD(v19) = (unsigned __int64)(unsigned int)v95 - 1028 <= 3;
              else
                LODWORD(v19) = 2 * ((unsigned int)v95 == 1024);
            }
            goto LABEL_121;
          }
          v132 = *(_DWORD *)(v91 + 1104);
          if ( (unsigned int)v95 == 1026 )
          {
            v19 = 1;
            if ( v132 != 1 )
              goto LABEL_121;
          }
          else if ( (unsigned int)v95 <= 0x402uLL )
          {
            if ( (unsigned int)v95 != 1024 )
              goto LABEL_341;
            v19 = 2;
            if ( v132 != 2 )
              goto LABEL_121;
          }
          else
          {
            if ( (unsigned __int64)(unsigned int)v95 - 1028 <= 3 )
            {
              v19 = 1;
              if ( v132 == 1 )
              {
                v108 = *(_QWORD *)(v91 + 1120);
                v209 = (unsigned int *)v108;
                v109 = *(__int64 **)(v91 + 1112);
                if ( !v108 )
                  goto LABEL_127;
                goto LABEL_136;
              }
LABEL_121:
              v101 = 0;
              v102 = *(_BYTE *)(v91 + 870);
              v103 = *(_QWORD *)(*(_QWORD *)(v91 + 104) + 8LL);
              v104 = *v99;
              *(_QWORD *)(v91 + 1096) = v99;
              *(_DWORD *)(v91 + 1104) = v19;
              if ( (v102 & 0x20) != 0 )
                v101 = *(_QWORD *)v91;
              v105 = (const char *)(v104 + v103 + v101);
              v106 = v96 + 24LL * (v98 & 0x7FFF);
              if ( v106 && !*(_DWORD *)(v106 + 8) )
                v106 = 0;
              v107 = dl_lookup_symbol_x(
                       v105,
                       v91,
                       (__int64 *)&v209,
                       v208,
                       (const char **)v106,
                       v19,
                       9,
                       0,
                       v30,
                       a6,
                       a7,
                       a8,
                       a9,
                       a10,
                       a11,
                       a12);
              *(_QWORD *)(v91 + 1112) = v107;
              v108 = (__int64)v209;
              *(_QWORD *)(v91 + 1120) = v209;
              v109 = (__int64 *)v107;
              if ( !v108 )
              {
LABEL_127:
                if ( (_DWORD)v95 == 1029 )
                  goto LABEL_151;
LABEL_128:
                if ( (unsigned int)v95 > 0x405 )
                {
                  if ( (_DWORD)v95 == 1031 )
                    goto LABEL_230;
                  if ( (_DWORD)v95 == 1032 )
                  {
LABEL_177:
                    v119 = (__int64 (__fastcall *)())(*(_QWORD *)v91 + v92[2]);
                    if ( !v39 )
                    {
                      v31 = (__int64)v205;
                      v19 = (__int64)v206;
                      v115 = v207;
                      goto LABEL_179;
                    }
                    goto LABEL_180;
                  }
                  if ( (_DWORD)v95 != 1030 )
                    goto LABEL_184;
                }
                else
                {
                  if ( (unsigned int)v95 > 0x402 )
                    goto LABEL_174;
                  if ( (unsigned int)v95 > 0x400 )
                    goto LABEL_133;
                  if ( (unsigned int)v95 <= 0x102 )
                  {
                    if ( (unsigned int)v95 <= 0x100 )
                      goto LABEL_184;
LABEL_133:
                    v110 = 0;
LABEL_150:
                    *v97 = (__int64 (__fastcall *)())((char *)v110 + v92[2]);
                    goto LABEL_151;
                  }
                  if ( (_DWORD)v95 != 1024 )
                  {
LABEL_184:
                    v121 = v95;
                    v122 = v91;
                    goto LABEL_362;
                  }
                }
                goto LABEL_151;
              }
LABEL_136:
              v19 = *(unsigned __int16 *)(v108 + 6);
              LOBYTE(v100) = *(_BYTE *)(v108 + 4);
              if ( (_DWORD)v19 == 65521 )
                goto LABEL_154;
              goto LABEL_137;
            }
LABEL_341:
            v19 = 0;
            if ( v132 )
              goto LABEL_121;
          }
          v108 = *(_QWORD *)(v91 + 1120);
          v209 = (unsigned int *)v108;
          v109 = *(__int64 **)(v91 + 1112);
          if ( !v108 )
            goto LABEL_128;
          goto LABEL_136;
        }
      }
      else if ( (unsigned __int64)v49 < v48 )
      {
        v198 = v42;
        v199 = v43;
        v91 = v12;
        v140 = v49;
        v204 = dl_tlsdesc_return;
        v206 = &dl_hwcap;
        v205 = &dl_hwcap2;
        v141 = *v49;
        v142 = v49[1];
        v200 = v40;
        v201 = v17;
        v202 = v44;
        v143 = (__int64 (__fastcall **)())(v41 + v141);
        v144 = (unsigned int *)(v47 + 24 * HIDWORD(v142));
        v209 = v144;
        if ( (_DWORD)v142 != 1027 )
        {
LABEL_247:
          if ( !(_DWORD)v142 )
            goto LABEL_285;
          v145 = *((unsigned __int8 *)v144 + 4);
          if ( !(v145 >> 4) || (*((_BYTE *)v144 + 5) & 3u) - 1 <= 1 )
          {
            v151 = (__int64)v144;
            v152 = (_QWORD *)v91;
            v155 = *((unsigned __int16 *)v144 + 3);
            if ( v155 != 65521 )
              goto LABEL_271;
            goto LABEL_289;
          }
          if ( v144 != *(unsigned int **)(v91 + 1096) )
          {
            LODWORD(v19) = 1;
            if ( (unsigned int)v142 != 1026 )
            {
              if ( (unsigned int)v142 > 0x402uLL )
                LODWORD(v19) = (unsigned __int64)(unsigned int)v142 - 1028 <= 3;
              else
                LODWORD(v19) = 2 * ((unsigned int)v142 == 1024);
            }
LABEL_255:
            v146 = 0;
            v147 = *(_BYTE *)(v91 + 870);
            v148 = *(_QWORD *)(*(_QWORD *)(v91 + 104) + 8LL);
            v149 = *v144;
            *(_QWORD *)(v91 + 1096) = v144;
            *(_DWORD *)(v91 + 1104) = v19;
            if ( (v147 & 0x20) != 0 )
              v146 = *(_QWORD *)v91;
            v150 = dl_lookup_symbol_x(
                     (const char *)(v149 + v148 + v146),
                     v91,
                     (__int64 *)&v209,
                     v208,
                     0,
                     v19,
                     9,
                     0,
                     v30,
                     a6,
                     a7,
                     a8,
                     a9,
                     a10,
                     a11,
                     a12);
            v151 = (__int64)v209;
            *(_QWORD *)(v91 + 1112) = v150;
            *(_QWORD *)(v91 + 1120) = v151;
            v152 = (_QWORD *)v150;
            if ( !v151 )
            {
LABEL_258:
              if ( (_DWORD)v142 == 1029 )
                goto LABEL_285;
LABEL_259:
              if ( (unsigned int)v142 <= 0x405 )
              {
                if ( (unsigned int)v142 <= 0x402 )
                {
                  if ( (unsigned int)v142 > 0x400 )
                    goto LABEL_264;
                  if ( (unsigned int)v142 > 0x102 )
                  {
                    if ( (_DWORD)v142 == 1024 )
                      goto LABEL_285;
                  }
                  else if ( (unsigned int)v142 > 0x100 )
                  {
LABEL_264:
                    v153 = 0;
LABEL_284:
                    *v143 = (__int64 (__fastcall *)())((char *)v153 + v140[2]);
                    goto LABEL_285;
                  }
LABEL_361:
                  v121 = v142;
                  v122 = v91;
LABEL_362:
                  dl_reloc_bad_type(v122, v121, 0);
                }
LABEL_308:
                if ( v152 )
                  *v143 = (__int64 (__fastcall *)())v152[147];
                goto LABEL_285;
              }
              if ( (_DWORD)v142 != 1031 )
              {
                if ( (_DWORD)v142 != 1032 )
                {
                  if ( (_DWORD)v142 == 1030 )
                    goto LABEL_285;
                  goto LABEL_361;
                }
LABEL_310:
                v164 = (__int64 (__fastcall *)())(*(_QWORD *)v91 + v140[2]);
                if ( !v39 )
                {
                  v31 = (__int64)v205;
                  v19 = (__int64)v206;
                  v161 = &v210;
                  goto LABEL_312;
                }
                goto LABEL_313;
              }
LABEL_338:
              v143[1] = (__int64 (__fastcall *)())v140[2];
              *v143 = dl_tlsdesc_undefweak;
              goto LABEL_285;
            }
LABEL_270:
            v155 = *(unsigned __int16 *)(v151 + 6);
            LOBYTE(v145) = *(_BYTE *)(v151 + 4);
            if ( v155 != 65521 )
            {
LABEL_271:
              v156 = v145 & 0xF;
              v157 = *(_QWORD *)(v151 + 8);
              if ( v155 )
                v158 = v156 == 10;
              else
                v158 = 0;
              v159 = v158 && v39 == 0;
              v153 = (__int64 *)(*v152 + v157);
              if ( !v159 )
                goto LABEL_278;
LABEL_294:
              v210 = 24;
              v211 = dl_hwcap;
              v212 = dl_hwcap2;
              v195 = &dl_hwcap;
              v196 = &dl_hwcap2;
              v197 = &v210;
              v153 = (__int64 *)((__int64 (__fastcall *)(__int64))v153)(dl_hwcap | 0x4000000000000000LL);
              if ( (_DWORD)v142 == 1028 )
                goto LABEL_308;
              v19 = (__int64)v195;
              v31 = (__int64)v196;
              v161 = v197;
              if ( (unsigned int)v142 > 0x404 )
              {
                if ( (_DWORD)v142 != 1031 )
                {
                  if ( (unsigned int)v142 > 0x407 )
                  {
                    if ( (_DWORD)v142 != 1032 )
                      goto LABEL_361;
                    v164 = (__int64 (__fastcall *)())(*(_QWORD *)v91 + v140[2]);
LABEL_312:
                    v165 = *(_QWORD *)v19;
                    v210 = 24;
                    v211 = v165;
                    v212 = *(_QWORD *)v31;
                    v164 = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, __int64 *))v164)(
                                                       v165 | 0x4000000000000000LL,
                                                       v161);
LABEL_313:
                    *v143 = v164;
                    goto LABEL_285;
                  }
                  if ( (_DWORD)v142 == 1029 )
                    goto LABEL_299;
LABEL_304:
                  v162 = (__int64)v209;
                  if ( v209 )
                  {
                    v163 = v152[146];
                    if ( (unsigned __int64)(v163 + 1) <= 1 )
                    {
                      dl_allocate_static_tls((__int64)v152);
                      v162 = (__int64)v209;
                      v163 = v152[146];
                    }
                    *v143 = (__int64 (__fastcall *)())(v163 + v140[2] + *(_QWORD *)(v162 + 8));
                  }
                  goto LABEL_285;
                }
                goto LABEL_318;
              }
              if ( (_DWORD)v142 != 1024 )
              {
                if ( (unsigned int)v142 > 0x400 || (unsigned int)(v142 - 257) <= 1 )
                  goto LABEL_284;
                goto LABEL_361;
              }
              v168 = (__int64)v209;
              if ( !v209 )
                goto LABEL_285;
              goto LABEL_324;
            }
LABEL_289:
            v153 = *(__int64 **)(v151 + 8);
            if ( (v145 & 0xF) == 0xA && v39 == 0 )
              goto LABEL_294;
LABEL_278:
            if ( (_DWORD)v142 == 1029 )
            {
LABEL_299:
              if ( v209 )
                *v143 = (__int64 (__fastcall *)())(*((_QWORD *)v209 + 1) + v140[2]);
              goto LABEL_285;
            }
            if ( (unsigned int)v142 > 0x405 )
            {
              if ( (_DWORD)v142 != 1031 )
              {
                if ( (_DWORD)v142 == 1032 )
                  goto LABEL_310;
                if ( (_DWORD)v142 != 1030 )
                  goto LABEL_361;
                goto LABEL_304;
              }
LABEL_318:
              v166 = (__int64)v209;
              if ( v209 )
              {
                v167 = v152[146];
                if ( (unsigned __int64)(v167 + 1) <= 1 )
                {
                  dl_allocate_static_tls((__int64)v152);
                  v166 = (__int64)v209;
                  v167 = v152[146];
                }
                v143[1] = (__int64 (__fastcall *)())(v167 + v140[2] + *(_QWORD *)(v166 + 8));
                *v143 = v204;
                goto LABEL_285;
              }
              goto LABEL_338;
            }
            if ( (unsigned int)v142 > 0x402 )
              goto LABEL_308;
            if ( (unsigned int)v142 > 0x400 )
              goto LABEL_284;
            if ( (unsigned int)v142 <= 0x102 )
            {
              if ( (unsigned int)v142 > 0x100 )
                goto LABEL_284;
              goto LABEL_361;
            }
            if ( (_DWORD)v142 != 1024 )
              goto LABEL_361;
            v168 = (__int64)v209;
LABEL_324:
            v169 = *(_QWORD *)(v168 + 16);
            v170 = *((_QWORD *)v144 + 2);
            if ( v169 > v170 || (dl_verbose ? (v171 = v169 >= v170) : (v171 = 1), !v171) )
            {
              v172 = *(_QWORD *)(*(_QWORD *)(v91 + 104) + 8LL);
              if ( (*(_BYTE *)(v91 + 870) & 0x20) != 0 )
                v172 += *(_QWORD *)v91;
              v173 = *v144;
              v174 = "<program name unknown>";
              v197 = v153;
              v175 = v172 + v173;
              if ( program_invocation_short_name[0] )
                v174 = (const char *)program_invocation_short_name[0];
              dl_error_printf("%s: Symbol `%s' has different size in shared object, consider re-linking\n", v174, v175);
            }
            j_memcpy(v143);
            goto LABEL_285;
          }
          v154 = *(_DWORD *)(v91 + 1104);
          if ( (unsigned int)v142 == 1026 )
          {
            v19 = 1;
            if ( v154 != 1 )
              goto LABEL_255;
          }
          else if ( (unsigned int)v142 <= 0x402uLL )
          {
            if ( (unsigned int)v142 != 1024 )
              goto LABEL_268;
            v19 = 2;
            if ( v154 != 2 )
              goto LABEL_255;
          }
          else
          {
            if ( (unsigned __int64)(unsigned int)v142 - 1028 <= 3 )
            {
              v19 = 1;
              if ( v154 != 1 )
                goto LABEL_255;
              v151 = *(_QWORD *)(v91 + 1120);
              v209 = (unsigned int *)v151;
              v152 = *(_QWORD **)(v91 + 1112);
              if ( !v151 )
                goto LABEL_258;
              goto LABEL_270;
            }
LABEL_268:
            v19 = 0;
            if ( v154 )
              goto LABEL_255;
          }
          v151 = *(_QWORD *)(v91 + 1120);
          v209 = (unsigned int *)v151;
          v152 = *(_QWORD **)(v91 + 1112);
          if ( !v151 )
            goto LABEL_259;
          goto LABEL_270;
        }
        while ( 1 )
        {
          *(_QWORD *)(v41 + v141) = *(_QWORD *)v91 + v140[2];
LABEL_285:
          v140 += 3;
          if ( v48 <= (unsigned __int64)v140 )
            break;
          v141 = *v140;
          v142 = v140[1];
          v143 = (__int64 (__fastcall **)())(v41 + *v140);
          v144 = (unsigned int *)(v47 + 24 * HIDWORD(v142));
          v209 = v144;
          if ( (_DWORD)v142 != 1027 )
            goto LABEL_247;
        }
LABEL_152:
        v40 = v200;
        v17 = v201;
        v12 = v91;
        v42 = v198;
        v43 = v199;
        v44 = v202;
      }
LABEL_51:
      if ( v44 )
        break;
      v40 += 4;
      v41 = *(_QWORD *)v12;
      v19 = *(_BYTE *)(v12 + 870) & 0x20;
      v44 = 1;
    }
    if ( v203 )
    {
      v58 = *(_QWORD *)(v12 + 80);
      if ( v58 )
      {
        v59 = 16;
        v60 = *(void **)(*(_QWORD *)(v12 + 224) + 8LL);
        if ( v60 == (void *)7 )
          v59 = 24;
        v61 = calloc(
                0x20u,
                *(_QWORD *)(v58 + 8) / v59,
                v30,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11,
                a12,
                *(_QWORD *)(v58 + 8),
                24,
                v60,
                (void *)v19,
                (void *)v31);
        *(_QWORD *)(v12 + 896) = v61;
        if ( !v61 )
        {
          v190 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v190 = "<program name unknown>";
          dl_fatal_printf("%s: out of memory to store relocation results for %s\n", v190, *(const char **)(v12 + 8));
        }
      }
    }
    *(_WORD *)(v12 + 868) |= 8u;
    if ( v17 )
    {
      while ( (mprotect((void *)*v17, v17[1], *((_DWORD *)v17 + 4)) & 0x80000000) == 0 )
      {
        v17 = (_QWORD *)v17[3];
        if ( !v17 )
          goto LABEL_59;
      }
      v189 = "cannot restore segment prot after reloc";
LABEL_391:
      dl_signal_error(*(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40), *(const char **)(v12 + 8), 0, v189);
    }
LABEL_59:
    result = *(_QWORD *)(v12 + 1200);
    if ( result )
      return dl_protect_relro(v12);
  }
  return result;
}
