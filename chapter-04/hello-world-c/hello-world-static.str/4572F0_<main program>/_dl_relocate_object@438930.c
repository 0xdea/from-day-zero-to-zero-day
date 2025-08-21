__int64 __fastcall dl_relocate_object(
        __int64 *a1,
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
  __int64 *v12; // x20
  __int64 result; // x0
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x0
  __int64 v36; // x3
  __int64 v37; // x4
  int v38; // w21
  __int64 *v39; // x4
  __int64 v40; // x28
  __int64 (__fastcall *v41)(); // x22
  __int64 *v42; // x25
  int v43; // w3
  __int64 *v44; // x0
  __int64 v45; // x12
  __int64 v46; // x24
  unsigned __int64 v47; // x19
  __int64 *v48; // x23
  __int64 (__fastcall *v49)(); // x0
  int v50; // w26
  int v51; // w22
  unsigned __int64 v52; // x21
  __int64 (__fastcall *v53)(); // x19
  unsigned __int64 v54; // x1
  __int64 *v55; // x24
  __int64 v56; // x0
  __int64 v57; // x0
  unsigned __int64 v58; // x1
  __int64 v59; // x4
  __int64 v60; // x0
  unsigned __int64 v61; // x2
  __int64 v62; // x0
  __int64 v63; // x5
  __int64 v64; // x4
  __int64 v65; // x3
  unsigned int *v66; // x2
  unsigned int v67; // w3
  __int64 v68; // x3
  __int64 v69; // x1
  __int64 v70; // x2
  const char *v71; // x0
  __int64 *v72; // x4
  unsigned __int64 v73; // x0
  __int64 v74; // x6
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
  __int64 *v116; // x6
  __int64 v117; // x0
  __int64 v118; // x1
  __int64 v119; // x0
  __int64 (__fastcall *v120)(); // x2
  __int64 v121; // x0
  unsigned int v122; // w24
  __int64 v123; // x20
  __int64 v124; // x1
  __int64 v125; // x0
  unsigned __int64 v126; // x1
  unsigned __int64 v127; // x2
  bool v128; // cf
  __int64 v129; // x2
  __int64 v130; // x5
  const char *v131; // x1
  __int64 v132; // x2
  int v133; // w1
  int v134; // w3
  bool v135; // zf
  __int64 v136; // x1
  bool v137; // zf
  __int64 v138; // x1
  __int64 v139; // x0
  __int64 v140; // x1
  __int64 *v141; // x20
  __int64 v142; // x0
  unsigned __int64 v143; // x23
  __int64 (__fastcall **v144)(); // x25
  unsigned int *v145; // x26
  unsigned int v146; // w1
  __int64 v147; // x1
  char v148; // w3
  __int64 v149; // x2
  __int64 v150; // x0
  __int64 v151; // x0
  __int64 v152; // x2
  _QWORD *v153; // x27
  __int64 *v154; // x4
  int v155; // w1
  int v156; // w0
  int v157; // w1
  __int64 v158; // x2
  bool v159; // zf
  bool v160; // zf
  __int64 *v162; // x6
  __int64 *v163; // x1
  __int64 v164; // x1
  __int64 v165; // x0
  __int64 (__fastcall *v166)(); // x2
  __int64 v167; // x0
  __int64 v168; // x1
  __int64 v169; // x0
  __int64 v170; // x0
  unsigned __int64 v171; // x1
  unsigned __int64 v172; // x2
  bool v173; // cf
  __int64 v174; // x2
  __int64 v175; // x5
  const char *v176; // x1
  __int64 v177; // x2
  unsigned __int64 v178; // x1
  unsigned int v179; // w2
  unsigned __int64 v180; // x23
  __int64 v181; // x0
  unsigned __int64 v182; // x3
  __int64 v183; // x1
  __int64 v184; // x0
  __int64 v185; // x1
  __int64 v186; // x0
  __int64 v187; // x2
  const char *v188; // x1
  const char *v189; // x2
  __int64 (__fastcall *v190)(__int64, __int64 *); // x3
  const char *v191; // x3
  const char *v192; // x1
  _QWORD v193[2]; // [xsp+8h] [xbp-20h] BYREF
  int v194; // [xsp+18h] [xbp-10h]
  _QWORD *v195; // [xsp+20h] [xbp-8h]
  __int64 *v196; // [xsp+88h] [xbp+60h]
  __int64 *v197; // [xsp+90h] [xbp+68h]
  __int64 *v198; // [xsp+98h] [xbp+70h]
  __int64 *v199; // [xsp+A0h] [xbp+78h]
  __int64 (__fastcall *v200)(); // [xsp+A8h] [xbp+80h]
  __int64 *v201; // [xsp+B0h] [xbp+88h]
  __int64 *v202; // [xsp+B8h] [xbp+90h]
  _QWORD *v203; // [xsp+C0h] [xbp+98h]
  int v204; // [xsp+C8h] [xbp+A0h]
  int v205; // [xsp+CCh] [xbp+A4h]
  __int64 (__fastcall *v206)(); // [xsp+D0h] [xbp+A8h]
  __int64 *v207; // [xsp+D8h] [xbp+B0h]
  __int64 *v208; // [xsp+E0h] [xbp+B8h]
  __int64 *v209; // [xsp+E8h] [xbp+C0h]
  __int64 **v210; // [xsp+F0h] [xbp+C8h]
  unsigned int *v211; // [xsp+F8h] [xbp+D0h] BYREF
  __int64 v212; // [xsp+100h] [xbp+D8h] BYREF
  __int64 v213; // [xsp+108h] [xbp+E0h]
  __int64 v214; // [xsp+110h] [xbp+E8h]
  __int128 v215; // [xsp+118h] [xbp+F0h] BYREF
  __int128 v216; // [xsp+128h] [xbp+100h]
  __int128 v217; // [xsp+138h] [xbp+110h]
  __int128 v218; // [xsp+148h] [xbp+120h]

  v12 = a1;
  result = *((unsigned __int16 *)a1 + 434);
  v210 = a2;
  if ( (result & 8) == 0 )
  {
    if ( a4 || !v12[32] )
      v16 = a3 & 1;
    else
      v16 = 0;
    if ( (dl_debug_mask & 0x20) != 0 )
    {
      v188 = (const char *)v12[1];
      if ( !*v188 )
      {
        v188 = (const char *)program_invocation_short_name[0];
        if ( !program_invocation_short_name[0] )
          v188 = "<main program>";
      }
      v189 = (const char *)&qword_456B08;
      if ( v16 )
        v189 = " (lazy)";
      dl_debug_printf("\nrelocation processing: %s%s\n", v188, v189);
    }
    v17 = (_QWORD *)v12[30];
    if ( v17 )
    {
      v178 = v12[94];
      v179 = *((unsigned __int16 *)v12 + 384);
      v180 = v178;
      if ( v178 < v178 + 56LL * *((unsigned __int16 *)v12 + 384) )
      {
        v17 = 0;
        while ( 1 )
        {
          if ( (*(_QWORD *)v180 & 0x2FFFFFFFFLL) == 1 )
          {
            v181 = *(_QWORD *)(v180 + 16);
            v182 = *(unsigned int *)(v180 + 4);
            v183 = v181 + *(_QWORD *)(v180 + 40) + dl_pagesize - 1;
            v184 = v181 & -dl_pagesize;
            v185 = (v183 & -dl_pagesize) - v184;
            v186 = v184 + *v12;
            v193[0] = v186;
            v193[1] = v185;
            v187 = (v182 >> 2) & 1;
            if ( (v182 & 2) != 0 )
              LODWORD(v187) = v187 | 2;
            v194 = v187;
            if ( (v182 & 1) != 0 )
            {
              LODWORD(v187) = v187 | 4;
              v194 = v187;
            }
            if ( (mprotect(v186, v185, (unsigned int)v187 | 2) & 0x80000000) != 0 )
            {
              v191 = "cannot make segment writable for relocation";
              goto LABEL_391;
            }
            v178 = v12[94];
            v195 = v17;
            v179 = *((unsigned __int16 *)v12 + 384);
            v17 = v193;
          }
          v180 += 56LL;
          if ( v180 >= v178 + 56LL * v179 )
            goto LABEL_6;
        }
      }
      v17 = 0;
    }
LABEL_6:
    v18 = v12[31];
    if ( ((v18 != 0) & (unsigned __int8)v16) != 0 )
    {
      v139 = *(_QWORD *)(v12[11] + 8);
      if ( (*((_BYTE *)v12 + 870) & 0x20) != 0 )
        v139 += *v12;
      v140 = *(_QWORD *)(v139 + 8);
      if ( v140 )
        v12[134] = *v12 + v140;
      *(_QWORD *)(v139 + 8) = v12;
      *(_QWORD *)(v139 + 16) = dl_runtime_resolve;
    }
    v19 = *((_BYTE *)v12 + 870) & 0x20;
    v20 = *v12;
    v21 = *((_BYTE *)v12 + 870) & 0x20;
    if ( v12 )
    {
      v22 = v12[44];
      if ( v22 )
      {
        v23 = *(char **)(v22 + 8);
        v24 = &v23[v20];
        if ( (*((_BYTE *)v12 + 870) & 0x20) == 0 )
          v24 = v23;
        v25 = &v24[*(_QWORD *)(v12[43] + 8)];
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
          v20 = *v12;
          v19 = *((_BYTE *)v12 + 870) & 0x20;
          v21 = *((_BYTE *)v12 + 870) & 0x20;
        }
      }
    }
    v30 = 0.0;
    v31 = v12[15];
    v215 = 0u;
    v216 = 0u;
    v217 = 0u;
    v218 = 0u;
    if ( v31 )
    {
      v32 = *(_QWORD *)(v31 + 8);
      v33 = 0;
      if ( v32 )
      {
        v34 = v12[58];
        v33 = *(_QWORD *)(v12[16] + 8);
        if ( v21 )
          v32 += v20;
        *(_QWORD *)&v215 = v32;
        *((_QWORD *)&v215 + 1) = v33;
        if ( v34 )
          *(_QWORD *)&v216 = *(_QWORD *)(v34 + 8);
      }
    }
    else
    {
      v33 = 0;
      v32 = 0;
    }
    if ( v12[28] )
    {
      v86 = v21 == 0;
      v35 = *(_QWORD *)(v18 + 8);
      v36 = *(_QWORD *)(v12[10] + 8);
      if ( !v86 )
        v35 += v20;
      if ( !v32 )
        v32 = v35;
      v37 = v32 + v33;
      *(_QWORD *)&v215 = v32;
      if ( v32 + v33 == v36 + v35 )
      {
        v33 -= v36;
        *((_QWORD *)&v215 + 1) = v33;
        v37 = v33 + v32;
      }
      if ( !v16 && v35 == v37 )
      {
        *((_QWORD *)&v215 + 1) = v36 + v33;
      }
      else
      {
        *(_QWORD *)&v217 = v35;
        *((_QWORD *)&v217 + 1) = v36;
        DWORD2(v218) = v16;
      }
    }
    v38 = a3 & 0x2000000;
    v39 = (__int64 *)&v215;
    v40 = v20;
    v205 = a4;
    v41 = dl_tlsdesc_return;
    v42 = 0;
    v43 = 0;
    v209 = &v212;
    while ( 1 )
    {
      v44 = (__int64 *)*v39;
      v45 = v39[1];
      v46 = *(_QWORD *)(v12[14] + 8);
      v47 = *v39 + v45;
      v48 = (__int64 *)(*v39 + 24 * v39[2]);
      if ( (_DWORD)v19 )
        v46 += v40;
      if ( *((_DWORD *)v39 + 6) )
      {
        if ( (unsigned __int64)v48 >= v47 )
          goto LABEL_51;
        v49 = v41;
        v50 = v43;
        v51 = v38;
        v52 = *v39 + v45;
        v53 = v49;
        v208 = v39;
        while ( 1 )
        {
          v54 = v48[1];
          v55 = (__int64 *)(v40 + *v48);
          if ( (_DWORD)v54 != 1026 )
            break;
          if ( v12[51] )
          {
            v73 = HIDWORD(v54);
            v74 = 0;
            v75 = *(_QWORD *)(v12[14] + 8);
            if ( (*((_BYTE *)v12 + 870) & 0x20) != 0 )
            {
              v74 = *v12;
              v75 += *v12;
            }
            v19 = 2 * v73;
            v76 = (unsigned int *)(v75 + 24 * v73);
            v77 = *((_BYTE *)v76 + 5);
            if ( v77 < 0 )
            {
              v78 = v12[67];
              if ( v78 )
                v78 = v12[102] + 24LL * (*(_WORD *)(v19 + v74 + *(_QWORD *)(v78 + 8)) & 0x7FFF);
              v211 = v76;
              v79 = *((unsigned __int8 *)v76 + 4);
              if ( v79 >> 4 && (v77 & 3u) - 1 > 1 )
              {
                if ( v76 == (unsigned int *)v12[137] )
                {
                  v19 = 1;
                  if ( *((_DWORD *)v12 + 276) != 1 )
                    goto LABEL_87;
                  v76 = (unsigned int *)v12[140];
                  v211 = v76;
                  v83 = (__int64 *)v12[139];
                }
                else
                {
                  LODWORD(v19) = 1;
LABEL_87:
                  v80 = *v76;
                  v81 = *(_QWORD *)(v12[13] + 8);
                  v12[137] = (__int64)v76;
                  *((_DWORD *)v12 + 276) = v19;
                  v82 = (const char *)(v74 + v81 + v80);
                  if ( v78 && !*(_DWORD *)(v78 + 8) )
                    v78 = 0;
                  v83 = (__int64 *)dl_lookup_symbol_x(
                                     v82,
                                     (__int64)v12,
                                     (__int64 *)&v211,
                                     v210,
                                     (const char **)v78,
                                     v19,
                                     9u,
                                     0,
                                     v30,
                                     a6,
                                     a7,
                                     a8,
                                     a9,
                                     a10,
                                     a11,
                                     a12);
                  v12[139] = (__int64)v83;
                  v76 = v211;
                  v12[140] = (__int64)v211;
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
                  v87 = v86 && v51 == 0;
                  v84 = (__int64 (__fastcall *)(__int64, __int64 *))(v85 + *((_QWORD *)v76 + 1));
                  if ( v87 )
                  {
                    v212 = 24;
                    v213 = dl_hwcap;
                    v214 = dl_hwcap2;
                    v84 = (__int64 (__fastcall *)(__int64, __int64 *))v84(dl_hwcap | 0x4000000000000000LL, &v212);
                  }
                }
                *v55 = (__int64)v84 + v48[2];
                goto LABEL_44;
              }
              v83 = v12;
              goto LABEL_93;
            }
          }
          v56 = v12[134];
          if ( v56 )
          {
            *v55 = v56;
LABEL_49:
            v48 += 3;
            if ( v52 <= (unsigned __int64)v48 )
            {
LABEL_50:
              v39 = v208;
              v38 = v51;
              v43 = v50;
              v41 = v53;
              goto LABEL_51;
            }
          }
          else
          {
            *v55 += v40;
LABEL_44:
            v48 += 3;
            if ( v52 <= (unsigned __int64)v48 )
              goto LABEL_50;
          }
        }
        if ( (_DWORD)v54 != 1031 )
        {
          if ( (_DWORD)v54 != 1032 )
            dl_reloc_bad_type(v12, v54, 1);
          v190 = (__int64 (__fastcall *)(__int64, __int64 *))(*v12 + v48[2]);
          if ( !v51 )
          {
            v212 = 24;
            v213 = dl_hwcap;
            v214 = dl_hwcap2;
            v190 = (__int64 (__fastcall *)(__int64, __int64 *))v190(dl_hwcap | 0x4000000000000000LL, &v212);
          }
          *v55 = (__int64)v190;
          goto LABEL_44;
        }
        v61 = HIDWORD(v54);
        v62 = 0;
        v63 = *(_QWORD *)(v12[14] + 8);
        if ( (*((_BYTE *)v12 + 870) & 0x20) != 0 )
        {
          v62 = *v12;
          v63 += *v12;
        }
        v64 = v12[67];
        v65 = 2 * v61;
        v66 = (unsigned int *)(v63 + 24 * v61);
        if ( v64 )
          v64 = v12[102] + 24LL * (*(_WORD *)(v65 + v62 + *(_QWORD *)(v64 + 8)) & 0x7FFF);
        v211 = v66;
        v67 = *((unsigned __int8 *)v66 + 4);
        if ( !(v67 >> 4) || (*((_BYTE *)v66 + 5) & 3u) - 1 <= 1 )
        {
          v72 = v12;
          goto LABEL_212;
        }
        if ( v66 == (unsigned int *)v12[137] )
        {
          v19 = 1;
          if ( *((_DWORD *)v12 + 276) == 1 )
          {
            v66 = (unsigned int *)v12[140];
            v211 = v66;
            v72 = (__int64 *)v12[139];
LABEL_76:
            if ( !v66 )
            {
LABEL_77:
              v55[1] = v48[2];
              *v55 = (__int64)dl_tlsdesc_undefweak;
              goto LABEL_49;
            }
            LOBYTE(v67) = *((_BYTE *)v66 + 4);
LABEL_212:
            if ( *((unsigned __int16 *)v66 + 3) == 65521 )
              v19 = 0;
            else
              v19 = *v72;
            v134 = v67 & 0xF;
            if ( *((_WORD *)v66 + 3) )
              v135 = v134 == 10;
            else
              v135 = 0;
            v136 = *((_QWORD *)v66 + 1);
            v137 = v135 && v51 == 0;
            if ( !v137
              || (v207 = v72,
                  v212 = 24,
                  v213 = dl_hwcap,
                  v214 = dl_hwcap2,
                  ((void (__fastcall *)(__int64, __int64 *))(v136 + v19))(dl_hwcap | 0x4000000000000000LL, &v212),
                  v72 = v207,
                  v211) )
            {
              v138 = v72[146];
              if ( (unsigned __int64)(v138 + 1) <= 1 )
              {
                v207 = v72;
                dl_allocate_static_tls(v72);
                v138 = v207[146];
              }
              v55[1] = *((_QWORD *)v211 + 1) + v48[2] + v138;
              *v55 = (__int64)v53;
              goto LABEL_44;
            }
            goto LABEL_77;
          }
        }
        else
        {
          LODWORD(v19) = 1;
        }
        v68 = v12[13];
        v69 = *v66;
        v12[137] = (__int64)v66;
        v70 = *(_QWORD *)(v68 + 8);
        *((_DWORD *)v12 + 276) = v19;
        v71 = (const char *)(v62 + v70 + v69);
        if ( v64 && !*(_DWORD *)(v64 + 8) )
          v64 = 0;
        v72 = (__int64 *)dl_lookup_symbol_x(
                           v71,
                           (__int64)v12,
                           (__int64 *)&v211,
                           v210,
                           (const char **)v64,
                           v19,
                           9u,
                           0,
                           v30,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           a12);
        v66 = v211;
        v12[139] = (__int64)v72;
        v12[140] = (__int64)v66;
        goto LABEL_76;
      }
      if ( v12 != v42 && v48 > v44 )
      {
        do
        {
          v88 = *v44;
          v44 += 3;
          *(_QWORD *)(v88 + v40) = *(v44 - 1) + v40;
        }
        while ( v48 > v44 );
      }
      v89 = v12[67];
      if ( v89 )
      {
        v90 = *(_QWORD *)(v89 + 8);
        if ( (*((_BYTE *)v12 + 870) & 0x20) != 0 )
          v90 += *v12;
        if ( (unsigned __int64)v48 < v47 )
        {
          v208 = &dl_hwcap;
          v200 = v41;
          v201 = v42;
          v91 = (__int64)v12;
          v92 = v48;
          v207 = &dl_hwcap2;
          v93 = v90;
          v202 = v39;
          v203 = v17;
          v204 = v43;
          v206 = dl_tlsdesc_return;
          while ( 1 )
          {
            v94 = *v92;
            v95 = v92[1];
            v96 = *(_QWORD *)(v91 + 816);
            v97 = (__int64 (__fastcall **)())(v40 + *v92);
            v98 = *(_WORD *)(v93 + 2 * HIDWORD(v95));
            v99 = (unsigned int *)(v46 + 24 * HIDWORD(v95));
            v211 = v99;
            if ( (_DWORD)v95 == 1027 )
            {
              *(_QWORD *)(v40 + v94) = *(_QWORD *)v91 + v92[2];
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
            v108 = v46 + 24 * HIDWORD(v95);
            v109 = (__int64 *)v91;
            v19 = *((unsigned __int16 *)v99 + 3);
            if ( (_DWORD)v19 == 65521 )
            {
LABEL_154:
              v110 = *(__int64 **)(v108 + 8);
              if ( (v100 & 0xF) != 0xA || v38 != 0 )
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
                      v117 = (__int64)v211;
LABEL_193:
                      v126 = *(_QWORD *)(v117 + 16);
                      v127 = *((_QWORD *)v99 + 2);
                      if ( v126 <= v127 && (dl_verbose ? (v128 = v126 >= v127) : (v128 = 1), v128) )
                      {
                        j_memcpy(v97);
                      }
                      else
                      {
                        v129 = *(_QWORD *)(*(_QWORD *)(v91 + 104) + 8LL);
                        if ( (*(_BYTE *)(v91 + 870) & 0x20) != 0 )
                          v129 += *(_QWORD *)v91;
                        v130 = *v99;
                        v131 = "<program name unknown>";
                        v199 = v110;
                        v132 = v129 + v130;
                        if ( program_invocation_short_name[0] )
                          v131 = (const char *)program_invocation_short_name[0];
                        dl_error_printf(
                          "%s: Symbol `%s' has different size in shared object, consider re-linking\n",
                          v131,
                          v132);
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
            v113 = v112 && v38 == 0;
            v110 = (__int64 *)(*v109 + *(_QWORD *)(v108 + 8));
            if ( !v113 )
              goto LABEL_144;
LABEL_159:
            v212 = 24;
            v213 = dl_hwcap;
            v214 = dl_hwcap2;
            v196 = v109;
            v197 = &dl_hwcap;
            v198 = &dl_hwcap2;
            v199 = &v212;
            v110 = (__int64 *)((__int64 (__fastcall *)(__int64))v110)(dl_hwcap | 0x4000000000000000LL);
            if ( (_DWORD)v95 == 1029 )
            {
LABEL_189:
              if ( v211 )
                *v97 = (__int64 (__fastcall *)())(*((_QWORD *)v211 + 1) + v92[2]);
              goto LABEL_151;
            }
            v109 = v196;
            v19 = (__int64)v197;
            v116 = v198;
            v115 = v199;
            if ( (unsigned int)v95 > 0x405 )
            {
              if ( (_DWORD)v95 == 1031 )
              {
LABEL_185:
                v124 = (__int64)v211;
                if ( v211 )
                {
                  v125 = v109[146];
                  if ( (unsigned __int64)(v125 + 1) <= 1 )
                  {
                    v199 = v109;
                    dl_allocate_static_tls(v109);
                    v124 = (__int64)v211;
                    v125 = v199[146];
                  }
                  v97[1] = (__int64 (__fastcall *)())(v125 + v92[2] + *(_QWORD *)(v124 + 8));
                  *v97 = v206;
                  goto LABEL_151;
                }
LABEL_230:
                v97[1] = (__int64 (__fastcall *)())v92[2];
                *v97 = dl_tlsdesc_undefweak;
                goto LABEL_151;
              }
              if ( (_DWORD)v95 == 1032 )
              {
                v120 = (__int64 (__fastcall *)())(v92[2] + *(_QWORD *)v91);
LABEL_179:
                v121 = *(_QWORD *)v19;
                v212 = 24;
                v213 = v121;
                v214 = *v116;
                v120 = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, __int64 *))v120)(
                                                   v121 | 0x4000000000000000LL,
                                                   v115);
LABEL_180:
                *v97 = v120;
                goto LABEL_151;
              }
LABEL_169:
              if ( (_DWORD)v95 != 1030 )
                goto LABEL_184;
              v118 = (__int64)v211;
              if ( v211 )
              {
                v119 = v109[146];
                if ( (unsigned __int64)(v119 + 1) <= 1 )
                {
                  v199 = v109;
                  dl_allocate_static_tls(v109);
                  v118 = (__int64)v211;
                  v119 = v199[146];
                }
                *v97 = (__int64 (__fastcall *)())(v119 + v92[2] + *(_QWORD *)(v118 + 8));
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
            v117 = (__int64)v211;
            if ( v211 )
              goto LABEL_193;
LABEL_151:
            v92 += 3;
            if ( v47 <= (unsigned __int64)v92 )
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
          v133 = *(_DWORD *)(v91 + 1104);
          if ( (unsigned int)v95 == 1026 )
          {
            v19 = 1;
            if ( v133 != 1 )
              goto LABEL_121;
          }
          else if ( (unsigned int)v95 <= 0x402uLL )
          {
            if ( (unsigned int)v95 != 1024 )
              goto LABEL_341;
            v19 = 2;
            if ( v133 != 2 )
              goto LABEL_121;
          }
          else
          {
            if ( (unsigned __int64)(unsigned int)v95 - 1028 <= 3 )
            {
              v19 = 1;
              if ( v133 == 1 )
              {
                v108 = *(_QWORD *)(v91 + 1120);
                v211 = (unsigned int *)v108;
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
                       (__int64 *)&v211,
                       v210,
                       (const char **)v106,
                       v19,
                       9u,
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
              v108 = (__int64)v211;
              *(_QWORD *)(v91 + 1120) = v211;
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
                    v120 = (__int64 (__fastcall *)())(*(_QWORD *)v91 + v92[2]);
                    if ( !v38 )
                    {
                      v116 = v207;
                      v19 = (__int64)v208;
                      v115 = v209;
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
                    v122 = v95;
                    v123 = v91;
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
            if ( v133 )
              goto LABEL_121;
          }
          v108 = *(_QWORD *)(v91 + 1120);
          v211 = (unsigned int *)v108;
          v109 = *(__int64 **)(v91 + 1112);
          if ( !v108 )
            goto LABEL_128;
          goto LABEL_136;
        }
      }
      else if ( (unsigned __int64)v48 < v47 )
      {
        v200 = v41;
        v201 = v42;
        v91 = (__int64)v12;
        v141 = v48;
        v206 = dl_tlsdesc_return;
        v208 = &dl_hwcap;
        v207 = &dl_hwcap2;
        v142 = *v48;
        v143 = v48[1];
        v202 = v39;
        v203 = v17;
        v204 = v43;
        v144 = (__int64 (__fastcall **)())(v40 + v142);
        v145 = (unsigned int *)(v46 + 24 * HIDWORD(v143));
        v211 = v145;
        if ( (_DWORD)v143 != 1027 )
        {
LABEL_247:
          if ( !(_DWORD)v143 )
            goto LABEL_285;
          v146 = *((unsigned __int8 *)v145 + 4);
          if ( !(v146 >> 4) || (*((_BYTE *)v145 + 5) & 3u) - 1 <= 1 )
          {
            v152 = (__int64)v145;
            v153 = (_QWORD *)v91;
            v156 = *((unsigned __int16 *)v145 + 3);
            if ( v156 != 65521 )
              goto LABEL_271;
            goto LABEL_289;
          }
          if ( v145 != *(unsigned int **)(v91 + 1096) )
          {
            LODWORD(v19) = 1;
            if ( (unsigned int)v143 != 1026 )
            {
              if ( (unsigned int)v143 > 0x402uLL )
                LODWORD(v19) = (unsigned __int64)(unsigned int)v143 - 1028 <= 3;
              else
                LODWORD(v19) = 2 * ((unsigned int)v143 == 1024);
            }
LABEL_255:
            v147 = 0;
            v148 = *(_BYTE *)(v91 + 870);
            v149 = *(_QWORD *)(*(_QWORD *)(v91 + 104) + 8LL);
            v150 = *v145;
            *(_QWORD *)(v91 + 1096) = v145;
            *(_DWORD *)(v91 + 1104) = v19;
            if ( (v148 & 0x20) != 0 )
              v147 = *(_QWORD *)v91;
            v151 = dl_lookup_symbol_x(
                     (const char *)(v150 + v149 + v147),
                     v91,
                     (__int64 *)&v211,
                     v210,
                     0,
                     v19,
                     9u,
                     0,
                     v30,
                     a6,
                     a7,
                     a8,
                     a9,
                     a10,
                     a11,
                     a12);
            v152 = (__int64)v211;
            *(_QWORD *)(v91 + 1112) = v151;
            *(_QWORD *)(v91 + 1120) = v152;
            v153 = (_QWORD *)v151;
            if ( !v152 )
            {
LABEL_258:
              if ( (_DWORD)v143 == 1029 )
                goto LABEL_285;
LABEL_259:
              if ( (unsigned int)v143 <= 0x405 )
              {
                if ( (unsigned int)v143 <= 0x402 )
                {
                  if ( (unsigned int)v143 > 0x400 )
                    goto LABEL_264;
                  if ( (unsigned int)v143 > 0x102 )
                  {
                    if ( (_DWORD)v143 == 1024 )
                      goto LABEL_285;
                  }
                  else if ( (unsigned int)v143 > 0x100 )
                  {
LABEL_264:
                    v154 = 0;
LABEL_284:
                    *v144 = (__int64 (__fastcall *)())((char *)v154 + v141[2]);
                    goto LABEL_285;
                  }
LABEL_361:
                  v122 = v143;
                  v123 = v91;
LABEL_362:
                  dl_reloc_bad_type(v123, v122, 0);
                }
LABEL_308:
                if ( v153 )
                  *v144 = (__int64 (__fastcall *)())v153[147];
                goto LABEL_285;
              }
              if ( (_DWORD)v143 != 1031 )
              {
                if ( (_DWORD)v143 != 1032 )
                {
                  if ( (_DWORD)v143 == 1030 )
                    goto LABEL_285;
                  goto LABEL_361;
                }
LABEL_310:
                v166 = (__int64 (__fastcall *)())(*(_QWORD *)v91 + v141[2]);
                if ( !v38 )
                {
                  v162 = v207;
                  v19 = (__int64)v208;
                  v163 = &v212;
                  goto LABEL_312;
                }
                goto LABEL_313;
              }
LABEL_338:
              v144[1] = (__int64 (__fastcall *)())v141[2];
              *v144 = dl_tlsdesc_undefweak;
              goto LABEL_285;
            }
LABEL_270:
            v156 = *(unsigned __int16 *)(v152 + 6);
            LOBYTE(v146) = *(_BYTE *)(v152 + 4);
            if ( v156 != 65521 )
            {
LABEL_271:
              v157 = v146 & 0xF;
              v158 = *(_QWORD *)(v152 + 8);
              if ( v156 )
                v159 = v157 == 10;
              else
                v159 = 0;
              v160 = v159 && v38 == 0;
              v154 = (__int64 *)(*v153 + v158);
              if ( !v160 )
                goto LABEL_278;
LABEL_294:
              v212 = 24;
              v213 = dl_hwcap;
              v214 = dl_hwcap2;
              v197 = &dl_hwcap;
              v198 = &dl_hwcap2;
              v199 = &v212;
              v154 = (__int64 *)((__int64 (__fastcall *)(__int64))v154)(dl_hwcap | 0x4000000000000000LL);
              if ( (_DWORD)v143 == 1028 )
                goto LABEL_308;
              v19 = (__int64)v197;
              v162 = v198;
              v163 = v199;
              if ( (unsigned int)v143 > 0x404 )
              {
                if ( (_DWORD)v143 != 1031 )
                {
                  if ( (unsigned int)v143 > 0x407 )
                  {
                    if ( (_DWORD)v143 != 1032 )
                      goto LABEL_361;
                    v166 = (__int64 (__fastcall *)())(*(_QWORD *)v91 + v141[2]);
LABEL_312:
                    v167 = *(_QWORD *)v19;
                    v212 = 24;
                    v213 = v167;
                    v214 = *v162;
                    v166 = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, __int64 *))v166)(
                                                       v167 | 0x4000000000000000LL,
                                                       v163);
LABEL_313:
                    *v144 = v166;
                    goto LABEL_285;
                  }
                  if ( (_DWORD)v143 == 1029 )
                    goto LABEL_299;
LABEL_304:
                  v164 = (__int64)v211;
                  if ( v211 )
                  {
                    v165 = v153[146];
                    if ( (unsigned __int64)(v165 + 1) <= 1 )
                    {
                      dl_allocate_static_tls(v153);
                      v164 = (__int64)v211;
                      v165 = v153[146];
                    }
                    *v144 = (__int64 (__fastcall *)())(v165 + v141[2] + *(_QWORD *)(v164 + 8));
                  }
                  goto LABEL_285;
                }
                goto LABEL_318;
              }
              if ( (_DWORD)v143 != 1024 )
              {
                if ( (unsigned int)v143 > 0x400 || (unsigned int)(v143 - 257) <= 1 )
                  goto LABEL_284;
                goto LABEL_361;
              }
              v170 = (__int64)v211;
              if ( !v211 )
                goto LABEL_285;
              goto LABEL_324;
            }
LABEL_289:
            v154 = *(__int64 **)(v152 + 8);
            if ( (v146 & 0xF) == 0xA && v38 == 0 )
              goto LABEL_294;
LABEL_278:
            if ( (_DWORD)v143 == 1029 )
            {
LABEL_299:
              if ( v211 )
                *v144 = (__int64 (__fastcall *)())(*((_QWORD *)v211 + 1) + v141[2]);
              goto LABEL_285;
            }
            if ( (unsigned int)v143 > 0x405 )
            {
              if ( (_DWORD)v143 != 1031 )
              {
                if ( (_DWORD)v143 == 1032 )
                  goto LABEL_310;
                if ( (_DWORD)v143 != 1030 )
                  goto LABEL_361;
                goto LABEL_304;
              }
LABEL_318:
              v168 = (__int64)v211;
              if ( v211 )
              {
                v169 = v153[146];
                if ( (unsigned __int64)(v169 + 1) <= 1 )
                {
                  dl_allocate_static_tls(v153);
                  v168 = (__int64)v211;
                  v169 = v153[146];
                }
                v144[1] = (__int64 (__fastcall *)())(v169 + v141[2] + *(_QWORD *)(v168 + 8));
                *v144 = v206;
                goto LABEL_285;
              }
              goto LABEL_338;
            }
            if ( (unsigned int)v143 > 0x402 )
              goto LABEL_308;
            if ( (unsigned int)v143 > 0x400 )
              goto LABEL_284;
            if ( (unsigned int)v143 <= 0x102 )
            {
              if ( (unsigned int)v143 > 0x100 )
                goto LABEL_284;
              goto LABEL_361;
            }
            if ( (_DWORD)v143 != 1024 )
              goto LABEL_361;
            v170 = (__int64)v211;
LABEL_324:
            v171 = *(_QWORD *)(v170 + 16);
            v172 = *((_QWORD *)v145 + 2);
            if ( v171 > v172 || (dl_verbose ? (v173 = v171 >= v172) : (v173 = 1), !v173) )
            {
              v174 = *(_QWORD *)(*(_QWORD *)(v91 + 104) + 8LL);
              if ( (*(_BYTE *)(v91 + 870) & 0x20) != 0 )
                v174 += *(_QWORD *)v91;
              v175 = *v145;
              v176 = "<program name unknown>";
              v199 = v154;
              v177 = v174 + v175;
              if ( program_invocation_short_name[0] )
                v176 = (const char *)program_invocation_short_name[0];
              dl_error_printf("%s: Symbol `%s' has different size in shared object, consider re-linking\n", v176, v177);
            }
            j_memcpy(v144);
            goto LABEL_285;
          }
          v155 = *(_DWORD *)(v91 + 1104);
          if ( (unsigned int)v143 == 1026 )
          {
            v19 = 1;
            if ( v155 != 1 )
              goto LABEL_255;
          }
          else if ( (unsigned int)v143 <= 0x402uLL )
          {
            if ( (unsigned int)v143 != 1024 )
              goto LABEL_268;
            v19 = 2;
            if ( v155 != 2 )
              goto LABEL_255;
          }
          else
          {
            if ( (unsigned __int64)(unsigned int)v143 - 1028 <= 3 )
            {
              v19 = 1;
              if ( v155 != 1 )
                goto LABEL_255;
              v152 = *(_QWORD *)(v91 + 1120);
              v211 = (unsigned int *)v152;
              v153 = *(_QWORD **)(v91 + 1112);
              if ( !v152 )
                goto LABEL_258;
              goto LABEL_270;
            }
LABEL_268:
            v19 = 0;
            if ( v155 )
              goto LABEL_255;
          }
          v152 = *(_QWORD *)(v91 + 1120);
          v211 = (unsigned int *)v152;
          v153 = *(_QWORD **)(v91 + 1112);
          if ( !v152 )
            goto LABEL_259;
          goto LABEL_270;
        }
        while ( 1 )
        {
          *(_QWORD *)(v40 + v142) = *(_QWORD *)v91 + v141[2];
LABEL_285:
          v141 += 3;
          if ( v47 <= (unsigned __int64)v141 )
            break;
          v142 = *v141;
          v143 = v141[1];
          v144 = (__int64 (__fastcall **)())(v40 + *v141);
          v145 = (unsigned int *)(v46 + 24 * HIDWORD(v143));
          v211 = v145;
          if ( (_DWORD)v143 != 1027 )
            goto LABEL_247;
        }
LABEL_152:
        v39 = v202;
        v17 = v203;
        v12 = (__int64 *)v91;
        v41 = v200;
        v42 = v201;
        v43 = v204;
      }
LABEL_51:
      if ( v43 )
        break;
      v39 += 4;
      v40 = *v12;
      v19 = *((_BYTE *)v12 + 870) & 0x20;
      v43 = 1;
    }
    if ( v205 )
    {
      v57 = v12[10];
      if ( v57 )
      {
        v58 = 16;
        v59 = *(_QWORD *)(v12[28] + 8);
        if ( v59 == 7 )
          v58 = 24;
        v60 = calloc(0x20u, *(_QWORD *)(v57 + 8) / v58, *(_QWORD *)(v57 + 8), 24, v59, v19);
        v12[112] = v60;
        if ( !v60 )
        {
          v192 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v192 = "<program name unknown>";
          dl_fatal_printf("%s: out of memory to store relocation results for %s\n", v192, (const char *)v12[1]);
        }
      }
    }
    *((_WORD *)v12 + 434) |= 8u;
    if ( v17 )
    {
      while ( (mprotect(*v17, v17[1], *((unsigned int *)v17 + 4)) & 0x80000000) == 0 )
      {
        v17 = (_QWORD *)v17[3];
        if ( !v17 )
          goto LABEL_59;
      }
      v191 = "cannot restore segment prot after reloc";
LABEL_391:
      dl_signal_error(*(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40), (const char *)v12[1], 0, v191);
    }
LABEL_59:
    result = v12[150];
    if ( result )
      return dl_protect_relro(v12);
  }
  return result;
}
