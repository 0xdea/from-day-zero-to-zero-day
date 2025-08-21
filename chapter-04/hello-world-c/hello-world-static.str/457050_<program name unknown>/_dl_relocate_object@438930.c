__int64 __fastcall dl_relocate_object(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 *v4; // x20
  __int64 result; // x0
  int v8; // w19
  _QWORD *v9; // x27
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x23
  int v13; // w0
  __int64 v14; // x1
  char *v15; // x1
  char *v16; // x3
  char *v17; // x2
  __int64 v18; // x5
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x0
  _QWORD *i; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x0
  __int64 v27; // x3
  __int64 v28; // x4
  int v29; // w21
  __int64 *v30; // x4
  __int64 v31; // x28
  __int64 (__fastcall *v32)(); // x22
  __int64 *v33; // x25
  int v34; // w3
  __int64 *v35; // x0
  __int64 v36; // x12
  __int64 v37; // x24
  unsigned __int64 v38; // x19
  __int64 *v39; // x23
  __int64 (__fastcall *v40)(); // x0
  int v41; // w26
  int v42; // w22
  unsigned __int64 v43; // x21
  __int64 (__fastcall *v44)(); // x19
  unsigned __int64 v45; // x1
  __int64 *v46; // x24
  __int64 v47; // x0
  __int64 v48; // x0
  unsigned __int64 v49; // x1
  __int64 v50; // x4
  __int64 v51; // x0
  unsigned __int64 v52; // x2
  __int64 v53; // x0
  __int64 v54; // x5
  __int64 v55; // x4
  __int64 v56; // x3
  unsigned int *v57; // x2
  unsigned int v58; // w3
  __int64 v59; // x3
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x0
  __int64 *v63; // x4
  unsigned __int64 v64; // x0
  __int64 v65; // x6
  __int64 v66; // x2
  unsigned int *v67; // x2
  char v68; // w3
  __int64 v69; // x4
  unsigned int v70; // w5
  __int64 v71; // x1
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 *v74; // x0
  __int64 (__fastcall *v75)(__int64, __int64 *); // x3
  __int64 v76; // x3
  bool v77; // zf
  bool v78; // zf
  __int64 v79; // x2
  __int64 v80; // x0
  __int64 v81; // x13
  __int64 *v82; // x22
  __int64 *v83; // x20
  __int64 v84; // x26
  __int64 v85; // x1
  unsigned __int64 v86; // x25
  __int64 v87; // x3
  __int64 (__fastcall **v88)(); // x27
  __int16 v89; // w4
  unsigned int *v90; // x23
  unsigned int v91; // w2
  __int64 v92; // x1
  char v93; // w2
  __int64 v94; // x6
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x4
  __int64 v98; // x0
  unsigned int *v99; // x3
  __int64 *v100; // x4
  __int64 *v101; // x3
  int v102; // w2
  bool v103; // zf
  bool v104; // zf
  __int64 *v106; // x1
  __int64 *v107; // x6
  unsigned int *v108; // x0
  unsigned int *v109; // x1
  __int64 v110; // x0
  __int64 (__fastcall *v111)(); // x2
  __int64 v112; // x0
  unsigned int v113; // w24
  __int64 *v114; // x20
  unsigned int *v115; // x1
  __int64 v116; // x0
  unsigned __int64 v117; // x1
  unsigned __int64 v118; // x2
  bool v119; // cf
  __int64 v120; // x2
  __int64 v121; // x5
  const char *v122; // x1
  __int64 v123; // x2
  int v124; // w1
  int v125; // w3
  bool v126; // zf
  __int64 v127; // x1
  bool v128; // zf
  __int64 v129; // x1
  __int64 v130; // x0
  __int64 v131; // x1
  __int64 *v132; // x20
  __int64 v133; // x0
  unsigned __int64 v134; // x23
  __int64 (__fastcall **v135)(); // x25
  unsigned int *v136; // x26
  unsigned int v137; // w1
  __int64 v138; // x1
  char v139; // w3
  __int64 v140; // x2
  __int64 v141; // x0
  __int64 v142; // x0
  unsigned int *v143; // x2
  _QWORD *v144; // x27
  __int64 *v145; // x4
  int v146; // w1
  int v147; // w0
  int v148; // w1
  __int64 v149; // x2
  bool v150; // zf
  bool v151; // zf
  __int64 *v153; // x6
  __int64 *v154; // x1
  unsigned int *v155; // x1
  __int64 v156; // x0
  __int64 (__fastcall *v157)(); // x2
  __int64 v158; // x0
  unsigned int *v159; // x1
  __int64 v160; // x0
  unsigned int *v161; // x0
  unsigned __int64 v162; // x1
  unsigned __int64 v163; // x2
  bool v164; // cf
  __int64 v165; // x2
  __int64 v166; // x5
  const char *v167; // x1
  __int64 v168; // x2
  unsigned __int64 v169; // x1
  unsigned int v170; // w2
  unsigned __int64 v171; // x23
  __int64 v172; // x0
  unsigned __int64 v173; // x3
  __int64 v174; // x1
  __int64 v175; // x0
  __int64 v176; // x1
  __int64 v177; // x0
  __int64 v178; // x2
  const char *v179; // x1
  const char *v180; // x2
  __int64 (__fastcall *v181)(__int64, __int64 *); // x3
  const char *v182; // x3
  const char *v183; // x1
  _QWORD v184[2]; // [xsp+8h] [xbp-20h] BYREF
  int v185; // [xsp+18h] [xbp-10h]
  _QWORD *v186; // [xsp+20h] [xbp-8h]
  __int64 *v187; // [xsp+88h] [xbp+60h]
  __int64 *v188; // [xsp+90h] [xbp+68h]
  __int64 *v189; // [xsp+98h] [xbp+70h]
  __int64 *v190; // [xsp+A0h] [xbp+78h]
  __int64 (__fastcall *v191)(); // [xsp+A8h] [xbp+80h]
  __int64 *v192; // [xsp+B0h] [xbp+88h]
  __int64 *v193; // [xsp+B8h] [xbp+90h]
  _QWORD *v194; // [xsp+C0h] [xbp+98h]
  int v195; // [xsp+C8h] [xbp+A0h]
  int v196; // [xsp+CCh] [xbp+A4h]
  __int64 (__fastcall *v197)(); // [xsp+D0h] [xbp+A8h]
  __int64 *v198; // [xsp+D8h] [xbp+B0h]
  __int64 *v199; // [xsp+E0h] [xbp+B8h]
  __int64 *v200; // [xsp+E8h] [xbp+C0h]
  __int64 v201; // [xsp+F0h] [xbp+C8h]
  unsigned int *v202; // [xsp+F8h] [xbp+D0h] BYREF
  __int64 v203; // [xsp+100h] [xbp+D8h] BYREF
  __int64 v204; // [xsp+108h] [xbp+E0h]
  __int64 v205; // [xsp+110h] [xbp+E8h]
  __int128 v206; // [xsp+118h] [xbp+F0h] BYREF
  __int128 v207; // [xsp+128h] [xbp+100h]
  __int128 v208; // [xsp+138h] [xbp+110h]
  __int128 v209; // [xsp+148h] [xbp+120h]

  v4 = a1;
  result = *((unsigned __int16 *)a1 + 434);
  v201 = a2;
  if ( (result & 8) == 0 )
  {
    if ( a4 || !v4[32] )
      v8 = a3 & 1;
    else
      v8 = 0;
    if ( (dl_debug_mask & 0x20) != 0 )
    {
      v179 = (const char *)v4[1];
      if ( !*v179 )
      {
        v179 = (const char *)program_invocation_short_name[0];
        if ( !program_invocation_short_name[0] )
          v179 = "<main program>";
      }
      v180 = (const char *)&qword_456B08;
      if ( v8 )
        v180 = " (lazy)";
      dl_debug_printf("\nrelocation processing: %s%s\n", v179, v180);
    }
    v9 = (_QWORD *)v4[30];
    if ( v9 )
    {
      v169 = v4[94];
      v170 = *((unsigned __int16 *)v4 + 384);
      v171 = v169;
      if ( v169 < v169 + 56LL * *((unsigned __int16 *)v4 + 384) )
      {
        v9 = 0;
        while ( 1 )
        {
          if ( (*(_QWORD *)v171 & 0x2FFFFFFFFLL) == 1 )
          {
            v172 = *(_QWORD *)(v171 + 16);
            v173 = *(unsigned int *)(v171 + 4);
            v174 = v172 + *(_QWORD *)(v171 + 40) + dl_pagesize - 1;
            v175 = v172 & -dl_pagesize;
            v176 = (v174 & -dl_pagesize) - v175;
            v177 = v175 + *v4;
            v184[0] = v177;
            v184[1] = v176;
            v178 = (v173 >> 2) & 1;
            if ( (v173 & 2) != 0 )
              LODWORD(v178) = v178 | 2;
            v185 = v178;
            if ( (v173 & 1) != 0 )
            {
              LODWORD(v178) = v178 | 4;
              v185 = v178;
            }
            if ( (mprotect(v177, v176, (unsigned int)v178 | 2) & 0x80000000) != 0 )
            {
              v182 = "cannot make segment writable for relocation";
              goto LABEL_389;
            }
            v169 = v4[94];
            v186 = v9;
            v170 = *((unsigned __int16 *)v4 + 384);
            v9 = v184;
          }
          v171 += 56LL;
          if ( v171 >= v169 + 56LL * v170 )
            goto LABEL_6;
        }
      }
      v9 = 0;
    }
LABEL_6:
    v10 = v4[31];
    if ( ((v10 != 0) & (unsigned __int8)v8) != 0 )
    {
      v130 = *(_QWORD *)(v4[11] + 8);
      if ( (*((_BYTE *)v4 + 870) & 0x20) != 0 )
        v130 += *v4;
      v131 = *(_QWORD *)(v130 + 8);
      if ( v131 )
        v4[134] = *v4 + v131;
      *(_QWORD *)(v130 + 8) = v4;
      *(_QWORD *)(v130 + 16) = dl_runtime_resolve;
    }
    v11 = *((_BYTE *)v4 + 870) & 0x20;
    v12 = *v4;
    v13 = *((_BYTE *)v4 + 870) & 0x20;
    if ( v4 )
    {
      v14 = v4[44];
      if ( v14 )
      {
        v15 = *(char **)(v14 + 8);
        v16 = &v15[v12];
        if ( (*((_BYTE *)v4 + 870) & 0x20) == 0 )
          v16 = v15;
        v17 = &v16[*(_QWORD *)(v4[43] + 8)];
        if ( v16 < v17 )
        {
          v18 = 0;
          do
          {
            while ( 1 )
            {
              v19 = *(_QWORD *)v16;
              if ( (*(_QWORD *)v16 & 1) != 0 )
                break;
              v16 += 8;
              v18 = v19 + v12 + 8;
              *(_QWORD *)(v19 + v12) += v12;
              if ( v17 <= v16 )
                goto LABEL_20;
            }
            v20 = v19 >> 1;
            for ( i = (_QWORD *)v18; v20; ++i )
            {
              if ( (v20 & 1) != 0 )
                *i += v12;
              v20 >>= 1;
            }
            v16 += 8;
            v18 += 504;
          }
          while ( v17 > v16 );
LABEL_20:
          v12 = *v4;
          v11 = *((_BYTE *)v4 + 870) & 0x20;
          v13 = *((_BYTE *)v4 + 870) & 0x20;
        }
      }
    }
    v22 = v4[15];
    v206 = 0u;
    v207 = 0u;
    v208 = 0u;
    v209 = 0u;
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 8);
      v24 = 0;
      if ( v23 )
      {
        v25 = v4[58];
        v24 = *(_QWORD *)(v4[16] + 8);
        if ( v13 )
          v23 += v12;
        *(_QWORD *)&v206 = v23;
        *((_QWORD *)&v206 + 1) = v24;
        if ( v25 )
          *(_QWORD *)&v207 = *(_QWORD *)(v25 + 8);
      }
    }
    else
    {
      v24 = 0;
      v23 = 0;
    }
    if ( v4[28] )
    {
      v77 = v13 == 0;
      v26 = *(_QWORD *)(v10 + 8);
      v27 = *(_QWORD *)(v4[10] + 8);
      if ( !v77 )
        v26 += v12;
      if ( !v23 )
        v23 = v26;
      v28 = v23 + v24;
      *(_QWORD *)&v206 = v23;
      if ( v23 + v24 == v27 + v26 )
      {
        v24 -= v27;
        *((_QWORD *)&v206 + 1) = v24;
        v28 = v24 + v23;
      }
      if ( !v8 && v26 == v28 )
      {
        *((_QWORD *)&v206 + 1) = v27 + v24;
      }
      else
      {
        *(_QWORD *)&v208 = v26;
        *((_QWORD *)&v208 + 1) = v27;
        DWORD2(v209) = v8;
      }
    }
    v29 = a3 & 0x2000000;
    v30 = (__int64 *)&v206;
    v31 = v12;
    v196 = a4;
    v32 = dl_tlsdesc_return;
    v33 = 0;
    v34 = 0;
    v200 = &v203;
    while ( 1 )
    {
      v35 = (__int64 *)*v30;
      v36 = v30[1];
      v37 = *(_QWORD *)(v4[14] + 8);
      v38 = *v30 + v36;
      v39 = (__int64 *)(*v30 + 24 * v30[2]);
      if ( (_DWORD)v11 )
        v37 += v31;
      if ( *((_DWORD *)v30 + 6) )
      {
        if ( (unsigned __int64)v39 >= v38 )
          goto LABEL_51;
        v40 = v32;
        v41 = v34;
        v42 = v29;
        v43 = *v30 + v36;
        v44 = v40;
        v199 = v30;
        while ( 1 )
        {
          v45 = v39[1];
          v46 = (__int64 *)(v31 + *v39);
          if ( (_DWORD)v45 != 1026 )
            break;
          if ( v4[51] )
          {
            v64 = HIDWORD(v45);
            v65 = 0;
            v66 = *(_QWORD *)(v4[14] + 8);
            if ( (*((_BYTE *)v4 + 870) & 0x20) != 0 )
            {
              v65 = *v4;
              v66 += *v4;
            }
            v11 = 2 * v64;
            v67 = (unsigned int *)(v66 + 24 * v64);
            v68 = *((_BYTE *)v67 + 5);
            if ( v68 < 0 )
            {
              v69 = v4[67];
              if ( v69 )
                v69 = v4[102] + 24LL * (*(_WORD *)(v11 + v65 + *(_QWORD *)(v69 + 8)) & 0x7FFF);
              v202 = v67;
              v70 = *((unsigned __int8 *)v67 + 4);
              if ( v70 >> 4 && (v68 & 3u) - 1 > 1 )
              {
                if ( v67 == (unsigned int *)v4[137] && (v11 = 1, *((_DWORD *)v4 + 276) == 1) )
                {
                  v67 = (unsigned int *)v4[140];
                  v202 = v67;
                  v74 = (__int64 *)v4[139];
                }
                else
                {
                  v71 = *v67;
                  v72 = *(_QWORD *)(v4[13] + 8);
                  v4[137] = (__int64)v67;
                  *((_DWORD *)v4 + 276) = 1;
                  v73 = v65 + v72 + v71;
                  if ( v69 && !*(_DWORD *)(v69 + 8) )
                    v69 = 0;
                  v74 = (__int64 *)dl_lookup_symbol_x(v73, v4, &v202, v201, v69, 1, 9, 0);
                  v4[139] = (__int64)v74;
                  v67 = v202;
                  v4[140] = (__int64)v202;
                }
                v75 = 0;
                if ( v67 )
                {
                  LOBYTE(v70) = *((_BYTE *)v67 + 4);
LABEL_91:
                  if ( *((unsigned __int16 *)v67 + 3) == 65521 )
                    v76 = 0;
                  else
                    v76 = *v74;
                  v11 = v70 & 0xF;
                  if ( *((_WORD *)v67 + 3) )
                    v77 = (_DWORD)v11 == 10;
                  else
                    v77 = 0;
                  v78 = v77 && v42 == 0;
                  v75 = (__int64 (__fastcall *)(__int64, __int64 *))(v76 + *((_QWORD *)v67 + 1));
                  if ( v78 )
                  {
                    v203 = 24;
                    v204 = dl_hwcap;
                    v205 = dl_hwcap2;
                    v75 = (__int64 (__fastcall *)(__int64, __int64 *))v75(dl_hwcap | 0x4000000000000000LL, &v203);
                  }
                }
                *v46 = (__int64)v75 + v39[2];
                goto LABEL_44;
              }
              v74 = v4;
              goto LABEL_91;
            }
          }
          v47 = v4[134];
          if ( v47 )
          {
            *v46 = v47;
LABEL_49:
            v39 += 3;
            if ( v43 <= (unsigned __int64)v39 )
            {
LABEL_50:
              v30 = v199;
              v29 = v42;
              v34 = v41;
              v32 = v44;
              goto LABEL_51;
            }
          }
          else
          {
            *v46 += v31;
LABEL_44:
            v39 += 3;
            if ( v43 <= (unsigned __int64)v39 )
              goto LABEL_50;
          }
        }
        if ( (_DWORD)v45 != 1031 )
        {
          if ( (_DWORD)v45 != 1032 )
            dl_reloc_bad_type(v4, v45, 1);
          v181 = (__int64 (__fastcall *)(__int64, __int64 *))(*v4 + v39[2]);
          if ( !v42 )
          {
            v203 = 24;
            v204 = dl_hwcap;
            v205 = dl_hwcap2;
            v181 = (__int64 (__fastcall *)(__int64, __int64 *))v181(dl_hwcap | 0x4000000000000000LL, &v203);
          }
          *v46 = (__int64)v181;
          goto LABEL_44;
        }
        v52 = HIDWORD(v45);
        v53 = 0;
        v54 = *(_QWORD *)(v4[14] + 8);
        if ( (*((_BYTE *)v4 + 870) & 0x20) != 0 )
        {
          v53 = *v4;
          v54 += *v4;
        }
        v55 = v4[67];
        v56 = 2 * v52;
        v57 = (unsigned int *)(v54 + 24 * v52);
        if ( v55 )
          v55 = v4[102] + 24LL * (*(_WORD *)(v56 + v53 + *(_QWORD *)(v55 + 8)) & 0x7FFF);
        v202 = v57;
        v58 = *((unsigned __int8 *)v57 + 4);
        if ( v58 >> 4 && (*((_BYTE *)v57 + 5) & 3u) - 1 > 1 )
        {
          if ( v57 == (unsigned int *)v4[137] && (v11 = 1, *((_DWORD *)v4 + 276) == 1) )
          {
            v57 = (unsigned int *)v4[140];
            v202 = v57;
            v63 = (__int64 *)v4[139];
          }
          else
          {
            v59 = v4[13];
            v60 = *v57;
            v4[137] = (__int64)v57;
            v61 = *(_QWORD *)(v59 + 8);
            *((_DWORD *)v4 + 276) = 1;
            v62 = v53 + v61 + v60;
            if ( v55 && !*(_DWORD *)(v55 + 8) )
              v55 = 0;
            v63 = (__int64 *)dl_lookup_symbol_x(v62, v4, &v202, v201, v55, 1, 9, 0);
            v57 = v202;
            v4[139] = (__int64)v63;
            v4[140] = (__int64)v57;
          }
          if ( !v57 )
          {
LABEL_76:
            v46[1] = v39[2];
            *v46 = (__int64)dl_tlsdesc_undefweak;
            goto LABEL_49;
          }
          LOBYTE(v58) = *((_BYTE *)v57 + 4);
        }
        else
        {
          v63 = v4;
        }
        if ( *((unsigned __int16 *)v57 + 3) == 65521 )
          v11 = 0;
        else
          v11 = *v63;
        v125 = v58 & 0xF;
        if ( *((_WORD *)v57 + 3) )
          v126 = v125 == 10;
        else
          v126 = 0;
        v127 = *((_QWORD *)v57 + 1);
        v128 = v126 && v42 == 0;
        if ( !v128
          || (v198 = v63,
              v203 = 24,
              v204 = dl_hwcap,
              v205 = dl_hwcap2,
              ((void (__fastcall *)(__int64, __int64 *))(v127 + v11))(dl_hwcap | 0x4000000000000000LL, &v203),
              v63 = v198,
              v202) )
        {
          v129 = v63[146];
          if ( (unsigned __int64)(v129 + 1) <= 1 )
          {
            v198 = v63;
            dl_allocate_static_tls(v63);
            v129 = v198[146];
          }
          v46[1] = *((_QWORD *)v202 + 1) + v39[2] + v129;
          *v46 = (__int64)v44;
          goto LABEL_44;
        }
        goto LABEL_76;
      }
      if ( v4 != v33 && v39 > v35 )
      {
        do
        {
          v79 = *v35;
          v35 += 3;
          *(_QWORD *)(v79 + v31) = *(v35 - 1) + v31;
        }
        while ( v39 > v35 );
      }
      v80 = v4[67];
      if ( v80 )
      {
        v81 = *(_QWORD *)(v80 + 8);
        if ( (*((_BYTE *)v4 + 870) & 0x20) != 0 )
          v81 += *v4;
        if ( (unsigned __int64)v39 < v38 )
        {
          v199 = &dl_hwcap;
          v191 = v32;
          v192 = v33;
          v82 = v4;
          v83 = v39;
          v198 = &dl_hwcap2;
          v84 = v81;
          v193 = v30;
          v194 = v9;
          v195 = v34;
          v197 = dl_tlsdesc_return;
          while ( 1 )
          {
            v85 = *v83;
            v86 = v83[1];
            v87 = v82[102];
            v88 = (__int64 (__fastcall **)())(v31 + *v83);
            v89 = *(_WORD *)(v84 + 2 * HIDWORD(v86));
            v90 = (unsigned int *)(v37 + 24 * HIDWORD(v86));
            v202 = v90;
            if ( (_DWORD)v86 == 1027 )
            {
              *(_QWORD *)(v31 + v85) = *v82 + v83[2];
              goto LABEL_149;
            }
            if ( !(_DWORD)v86 )
              goto LABEL_149;
            v91 = *((unsigned __int8 *)v90 + 4);
            if ( v91 >> 4 )
            {
              if ( (*((_BYTE *)v90 + 5) & 3u) - 1 > 1 )
                break;
            }
            v99 = (unsigned int *)(v37 + 24 * HIDWORD(v86));
            v100 = v82;
            v11 = *((unsigned __int16 *)v90 + 3);
            if ( (_DWORD)v11 == 65521 )
            {
LABEL_152:
              v101 = (__int64 *)*((_QWORD *)v99 + 1);
              if ( (v91 & 0xF) != 0xA || v29 != 0 )
              {
LABEL_142:
                if ( (_DWORD)v86 == 1029 )
                  goto LABEL_187;
                if ( (unsigned int)v86 <= 0x405 )
                {
                  if ( (unsigned int)v86 > 0x402 )
                    goto LABEL_172;
                  if ( (unsigned int)v86 <= 0x400 )
                  {
                    if ( (unsigned int)v86 > 0x102 )
                    {
                      if ( (_DWORD)v86 != 1024 )
                        goto LABEL_182;
                      v108 = v202;
LABEL_191:
                      v117 = *((_QWORD *)v108 + 2);
                      v118 = *((_QWORD *)v90 + 2);
                      if ( v117 <= v118 && (dl_verbose ? (v119 = v117 >= v118) : (v119 = 1), v119) )
                      {
                        j_memcpy(v88);
                      }
                      else
                      {
                        v120 = *(_QWORD *)(v82[13] + 8);
                        if ( (*((_BYTE *)v82 + 870) & 0x20) != 0 )
                          v120 += *v82;
                        v121 = *v90;
                        v122 = "<program name unknown>";
                        v190 = v101;
                        v123 = v120 + v121;
                        if ( program_invocation_short_name[0] )
                          v122 = (const char *)program_invocation_short_name[0];
                        dl_error_printf(
                          "%s: Symbol `%s' has different size in shared object, consider re-linking\n",
                          v122,
                          v123);
                        j_memcpy(v88);
                      }
                      goto LABEL_149;
                    }
LABEL_147:
                    if ( (unsigned int)v86 <= 0x100 )
                      goto LABEL_182;
                  }
                  goto LABEL_148;
                }
                if ( (_DWORD)v86 == 1031 )
                  goto LABEL_183;
                if ( (_DWORD)v86 == 1032 )
                  goto LABEL_175;
                goto LABEL_167;
              }
              goto LABEL_157;
            }
LABEL_135:
            v102 = v91 & 0xF;
            if ( (_DWORD)v11 )
              v103 = v102 == 10;
            else
              v103 = 0;
            v104 = v103 && v29 == 0;
            v101 = (__int64 *)(*v100 + *((_QWORD *)v99 + 1));
            if ( !v104 )
              goto LABEL_142;
LABEL_157:
            v203 = 24;
            v204 = dl_hwcap;
            v205 = dl_hwcap2;
            v187 = v100;
            v188 = &dl_hwcap;
            v189 = &dl_hwcap2;
            v190 = &v203;
            v101 = (__int64 *)((__int64 (__fastcall *)(__int64))v101)(dl_hwcap | 0x4000000000000000LL);
            if ( (_DWORD)v86 == 1029 )
            {
LABEL_187:
              if ( v202 )
                *v88 = (__int64 (__fastcall *)())(*((_QWORD *)v202 + 1) + v83[2]);
              goto LABEL_149;
            }
            v100 = v187;
            v11 = (__int64)v188;
            v107 = v189;
            v106 = v190;
            if ( (unsigned int)v86 > 0x405 )
            {
              if ( (_DWORD)v86 == 1031 )
              {
LABEL_183:
                v115 = v202;
                if ( v202 )
                {
                  v116 = v100[146];
                  if ( (unsigned __int64)(v116 + 1) <= 1 )
                  {
                    v190 = v100;
                    dl_allocate_static_tls(v100);
                    v115 = v202;
                    v116 = v190[146];
                  }
                  v88[1] = (__int64 (__fastcall *)())(v116 + v83[2] + *((_QWORD *)v115 + 1));
                  *v88 = v197;
                  goto LABEL_149;
                }
LABEL_228:
                v88[1] = (__int64 (__fastcall *)())v83[2];
                *v88 = dl_tlsdesc_undefweak;
                goto LABEL_149;
              }
              if ( (_DWORD)v86 == 1032 )
              {
                v111 = (__int64 (__fastcall *)())(v83[2] + *v82);
LABEL_177:
                v112 = *(_QWORD *)v11;
                v203 = 24;
                v204 = v112;
                v205 = *v107;
                v111 = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, __int64 *))v111)(
                                                   v112 | 0x4000000000000000LL,
                                                   v106);
LABEL_178:
                *v88 = v111;
                goto LABEL_149;
              }
LABEL_167:
              if ( (_DWORD)v86 != 1030 )
                goto LABEL_182;
              v109 = v202;
              if ( v202 )
              {
                v110 = v100[146];
                if ( (unsigned __int64)(v110 + 1) <= 1 )
                {
                  v190 = v100;
                  dl_allocate_static_tls(v100);
                  v109 = v202;
                  v110 = v190[146];
                }
                *v88 = (__int64 (__fastcall *)())(v110 + v83[2] + *((_QWORD *)v109 + 1));
              }
              goto LABEL_149;
            }
            if ( (unsigned int)v86 > 0x402 )
            {
LABEL_172:
              if ( v100 )
                *v88 = (__int64 (__fastcall *)())v100[147];
              goto LABEL_149;
            }
            if ( (unsigned int)v86 > 0x400 )
              goto LABEL_148;
            if ( (unsigned int)v86 <= 0x102 )
              goto LABEL_147;
            if ( (_DWORD)v86 != 1024 )
              goto LABEL_182;
            v108 = v202;
            if ( v202 )
              goto LABEL_191;
LABEL_149:
            v83 += 3;
            if ( v38 <= (unsigned __int64)v83 )
              goto LABEL_150;
          }
          if ( v90 != (unsigned int *)v82[137] )
          {
            v11 = 1;
            if ( (unsigned int)v86 != 1026 )
            {
              if ( (unsigned int)v86 > 0x402uLL )
                v11 = (unsigned __int64)(unsigned int)v86 - 1028 <= 3;
              else
                v11 = 2 * (unsigned int)((unsigned int)v86 == 1024);
            }
            goto LABEL_119;
          }
          v124 = *((_DWORD *)v82 + 276);
          if ( (unsigned int)v86 == 1026 )
          {
            v11 = 1;
            if ( v124 != 1 )
              goto LABEL_119;
          }
          else if ( (unsigned int)v86 <= 0x402uLL )
          {
            if ( (unsigned int)v86 != 1024 )
              goto LABEL_339;
            v11 = 2;
            if ( v124 != 2 )
              goto LABEL_119;
          }
          else
          {
            if ( (unsigned __int64)(unsigned int)v86 - 1028 <= 3 )
            {
              v11 = 1;
              if ( v124 == 1 )
              {
                v99 = (unsigned int *)v82[140];
                v202 = v99;
                v100 = (__int64 *)v82[139];
                if ( !v99 )
                  goto LABEL_125;
                goto LABEL_134;
              }
LABEL_119:
              v92 = 0;
              v93 = *((_BYTE *)v82 + 870);
              v94 = *(_QWORD *)(v82[13] + 8);
              v95 = *v90;
              v82[137] = (__int64)v90;
              *((_DWORD *)v82 + 276) = v11;
              if ( (v93 & 0x20) != 0 )
                v92 = *v82;
              v96 = v95 + v94 + v92;
              v97 = v87 + 24LL * (v89 & 0x7FFF);
              if ( v97 && !*(_DWORD *)(v97 + 8) )
                v97 = 0;
              v98 = dl_lookup_symbol_x(v96, v82, &v202, v201, v97, v11, 9, 0);
              v82[139] = v98;
              v99 = v202;
              v82[140] = (__int64)v202;
              v100 = (__int64 *)v98;
              if ( !v99 )
              {
LABEL_125:
                if ( (_DWORD)v86 == 1029 )
                  goto LABEL_149;
LABEL_126:
                if ( (unsigned int)v86 > 0x405 )
                {
                  if ( (_DWORD)v86 == 1031 )
                    goto LABEL_228;
                  if ( (_DWORD)v86 == 1032 )
                  {
LABEL_175:
                    v111 = (__int64 (__fastcall *)())(*v82 + v83[2]);
                    if ( !v29 )
                    {
                      v107 = v198;
                      v11 = (__int64)v199;
                      v106 = v200;
                      goto LABEL_177;
                    }
                    goto LABEL_178;
                  }
                  if ( (_DWORD)v86 != 1030 )
                    goto LABEL_182;
                }
                else
                {
                  if ( (unsigned int)v86 > 0x402 )
                    goto LABEL_172;
                  if ( (unsigned int)v86 > 0x400 )
                    goto LABEL_131;
                  if ( (unsigned int)v86 <= 0x102 )
                  {
                    if ( (unsigned int)v86 <= 0x100 )
                      goto LABEL_182;
LABEL_131:
                    v101 = 0;
LABEL_148:
                    *v88 = (__int64 (__fastcall *)())((char *)v101 + v83[2]);
                    goto LABEL_149;
                  }
                  if ( (_DWORD)v86 != 1024 )
                  {
LABEL_182:
                    v113 = v86;
                    v114 = v82;
                    goto LABEL_360;
                  }
                }
                goto LABEL_149;
              }
LABEL_134:
              v11 = *((unsigned __int16 *)v99 + 3);
              LOBYTE(v91) = *((_BYTE *)v99 + 4);
              if ( (_DWORD)v11 == 65521 )
                goto LABEL_152;
              goto LABEL_135;
            }
LABEL_339:
            v11 = 0;
            if ( v124 )
              goto LABEL_119;
          }
          v99 = (unsigned int *)v82[140];
          v202 = v99;
          v100 = (__int64 *)v82[139];
          if ( !v99 )
            goto LABEL_126;
          goto LABEL_134;
        }
      }
      else if ( (unsigned __int64)v39 < v38 )
      {
        v191 = v32;
        v192 = v33;
        v82 = v4;
        v132 = v39;
        v197 = dl_tlsdesc_return;
        v199 = &dl_hwcap;
        v198 = &dl_hwcap2;
        v133 = *v39;
        v134 = v39[1];
        v193 = v30;
        v194 = v9;
        v195 = v34;
        v135 = (__int64 (__fastcall **)())(v31 + v133);
        v136 = (unsigned int *)(v37 + 24 * HIDWORD(v134));
        v202 = v136;
        if ( (_DWORD)v134 != 1027 )
        {
LABEL_245:
          if ( !(_DWORD)v134 )
            goto LABEL_283;
          v137 = *((unsigned __int8 *)v136 + 4);
          if ( !(v137 >> 4) || (*((_BYTE *)v136 + 5) & 3u) - 1 <= 1 )
          {
            v143 = v136;
            v144 = v82;
            v147 = *((unsigned __int16 *)v136 + 3);
            if ( v147 != 65521 )
              goto LABEL_269;
            goto LABEL_287;
          }
          if ( v136 != (unsigned int *)v82[137] )
          {
            v11 = 1;
            if ( (unsigned int)v134 != 1026 )
            {
              if ( (unsigned int)v134 > 0x402uLL )
                v11 = (unsigned __int64)(unsigned int)v134 - 1028 <= 3;
              else
                v11 = 2 * (unsigned int)((unsigned int)v134 == 1024);
            }
LABEL_253:
            v138 = 0;
            v139 = *((_BYTE *)v82 + 870);
            v140 = *(_QWORD *)(v82[13] + 8);
            v141 = *v136;
            v82[137] = (__int64)v136;
            *((_DWORD *)v82 + 276) = v11;
            if ( (v139 & 0x20) != 0 )
              v138 = *v82;
            v142 = dl_lookup_symbol_x(v141 + v140 + v138, v82, &v202, v201, 0, v11, 9, 0);
            v143 = v202;
            v82[139] = v142;
            v82[140] = (__int64)v143;
            v144 = (_QWORD *)v142;
            if ( !v143 )
            {
LABEL_256:
              if ( (_DWORD)v134 == 1029 )
                goto LABEL_283;
LABEL_257:
              if ( (unsigned int)v134 <= 0x405 )
              {
                if ( (unsigned int)v134 <= 0x402 )
                {
                  if ( (unsigned int)v134 > 0x400 )
                    goto LABEL_262;
                  if ( (unsigned int)v134 > 0x102 )
                  {
                    if ( (_DWORD)v134 == 1024 )
                      goto LABEL_283;
                  }
                  else if ( (unsigned int)v134 > 0x100 )
                  {
LABEL_262:
                    v145 = 0;
LABEL_282:
                    *v135 = (__int64 (__fastcall *)())((char *)v145 + v132[2]);
                    goto LABEL_283;
                  }
LABEL_359:
                  v113 = v134;
                  v114 = v82;
LABEL_360:
                  dl_reloc_bad_type(v114, v113, 0);
                }
LABEL_306:
                if ( v144 )
                  *v135 = (__int64 (__fastcall *)())v144[147];
                goto LABEL_283;
              }
              if ( (_DWORD)v134 != 1031 )
              {
                if ( (_DWORD)v134 != 1032 )
                {
                  if ( (_DWORD)v134 == 1030 )
                    goto LABEL_283;
                  goto LABEL_359;
                }
LABEL_308:
                v157 = (__int64 (__fastcall *)())(*v82 + v132[2]);
                if ( !v29 )
                {
                  v153 = v198;
                  v11 = (__int64)v199;
                  v154 = &v203;
                  goto LABEL_310;
                }
                goto LABEL_311;
              }
LABEL_336:
              v135[1] = (__int64 (__fastcall *)())v132[2];
              *v135 = dl_tlsdesc_undefweak;
              goto LABEL_283;
            }
LABEL_268:
            v147 = *((unsigned __int16 *)v143 + 3);
            LOBYTE(v137) = *((_BYTE *)v143 + 4);
            if ( v147 != 65521 )
            {
LABEL_269:
              v148 = v137 & 0xF;
              v149 = *((_QWORD *)v143 + 1);
              if ( v147 )
                v150 = v148 == 10;
              else
                v150 = 0;
              v151 = v150 && v29 == 0;
              v145 = (__int64 *)(*v144 + v149);
              if ( !v151 )
                goto LABEL_276;
LABEL_292:
              v203 = 24;
              v204 = dl_hwcap;
              v205 = dl_hwcap2;
              v188 = &dl_hwcap;
              v189 = &dl_hwcap2;
              v190 = &v203;
              v145 = (__int64 *)((__int64 (__fastcall *)(__int64))v145)(dl_hwcap | 0x4000000000000000LL);
              if ( (_DWORD)v134 == 1028 )
                goto LABEL_306;
              v11 = (__int64)v188;
              v153 = v189;
              v154 = v190;
              if ( (unsigned int)v134 > 0x404 )
              {
                if ( (_DWORD)v134 != 1031 )
                {
                  if ( (unsigned int)v134 > 0x407 )
                  {
                    if ( (_DWORD)v134 != 1032 )
                      goto LABEL_359;
                    v157 = (__int64 (__fastcall *)())(*v82 + v132[2]);
LABEL_310:
                    v158 = *(_QWORD *)v11;
                    v203 = 24;
                    v204 = v158;
                    v205 = *v153;
                    v157 = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, __int64 *))v157)(
                                                       v158 | 0x4000000000000000LL,
                                                       v154);
LABEL_311:
                    *v135 = v157;
                    goto LABEL_283;
                  }
                  if ( (_DWORD)v134 == 1029 )
                    goto LABEL_297;
LABEL_302:
                  v155 = v202;
                  if ( v202 )
                  {
                    v156 = v144[146];
                    if ( (unsigned __int64)(v156 + 1) <= 1 )
                    {
                      dl_allocate_static_tls(v144);
                      v155 = v202;
                      v156 = v144[146];
                    }
                    *v135 = (__int64 (__fastcall *)())(v156 + v132[2] + *((_QWORD *)v155 + 1));
                  }
                  goto LABEL_283;
                }
                goto LABEL_316;
              }
              if ( (_DWORD)v134 != 1024 )
              {
                if ( (unsigned int)v134 > 0x400 || (unsigned int)(v134 - 257) <= 1 )
                  goto LABEL_282;
                goto LABEL_359;
              }
              v161 = v202;
              if ( !v202 )
                goto LABEL_283;
              goto LABEL_322;
            }
LABEL_287:
            v145 = (__int64 *)*((_QWORD *)v143 + 1);
            if ( (v137 & 0xF) == 0xA && v29 == 0 )
              goto LABEL_292;
LABEL_276:
            if ( (_DWORD)v134 == 1029 )
            {
LABEL_297:
              if ( v202 )
                *v135 = (__int64 (__fastcall *)())(*((_QWORD *)v202 + 1) + v132[2]);
              goto LABEL_283;
            }
            if ( (unsigned int)v134 > 0x405 )
            {
              if ( (_DWORD)v134 != 1031 )
              {
                if ( (_DWORD)v134 == 1032 )
                  goto LABEL_308;
                if ( (_DWORD)v134 != 1030 )
                  goto LABEL_359;
                goto LABEL_302;
              }
LABEL_316:
              v159 = v202;
              if ( v202 )
              {
                v160 = v144[146];
                if ( (unsigned __int64)(v160 + 1) <= 1 )
                {
                  dl_allocate_static_tls(v144);
                  v159 = v202;
                  v160 = v144[146];
                }
                v135[1] = (__int64 (__fastcall *)())(v160 + v132[2] + *((_QWORD *)v159 + 1));
                *v135 = v197;
                goto LABEL_283;
              }
              goto LABEL_336;
            }
            if ( (unsigned int)v134 > 0x402 )
              goto LABEL_306;
            if ( (unsigned int)v134 > 0x400 )
              goto LABEL_282;
            if ( (unsigned int)v134 <= 0x102 )
            {
              if ( (unsigned int)v134 > 0x100 )
                goto LABEL_282;
              goto LABEL_359;
            }
            if ( (_DWORD)v134 != 1024 )
              goto LABEL_359;
            v161 = v202;
LABEL_322:
            v162 = *((_QWORD *)v161 + 2);
            v163 = *((_QWORD *)v136 + 2);
            if ( v162 > v163 || (dl_verbose ? (v164 = v162 >= v163) : (v164 = 1), !v164) )
            {
              v165 = *(_QWORD *)(v82[13] + 8);
              if ( (*((_BYTE *)v82 + 870) & 0x20) != 0 )
                v165 += *v82;
              v166 = *v136;
              v167 = "<program name unknown>";
              v190 = v145;
              v168 = v165 + v166;
              if ( program_invocation_short_name[0] )
                v167 = (const char *)program_invocation_short_name[0];
              dl_error_printf("%s: Symbol `%s' has different size in shared object, consider re-linking\n", v167, v168);
            }
            j_memcpy(v135);
            goto LABEL_283;
          }
          v146 = *((_DWORD *)v82 + 276);
          if ( (unsigned int)v134 == 1026 )
          {
            v11 = 1;
            if ( v146 != 1 )
              goto LABEL_253;
          }
          else if ( (unsigned int)v134 <= 0x402uLL )
          {
            if ( (unsigned int)v134 != 1024 )
              goto LABEL_266;
            v11 = 2;
            if ( v146 != 2 )
              goto LABEL_253;
          }
          else
          {
            if ( (unsigned __int64)(unsigned int)v134 - 1028 <= 3 )
            {
              v11 = 1;
              if ( v146 != 1 )
                goto LABEL_253;
              v143 = (unsigned int *)v82[140];
              v202 = v143;
              v144 = (_QWORD *)v82[139];
              if ( !v143 )
                goto LABEL_256;
              goto LABEL_268;
            }
LABEL_266:
            v11 = 0;
            if ( v146 )
              goto LABEL_253;
          }
          v143 = (unsigned int *)v82[140];
          v202 = v143;
          v144 = (_QWORD *)v82[139];
          if ( !v143 )
            goto LABEL_257;
          goto LABEL_268;
        }
        while ( 1 )
        {
          *(_QWORD *)(v31 + v133) = *v82 + v132[2];
LABEL_283:
          v132 += 3;
          if ( v38 <= (unsigned __int64)v132 )
            break;
          v133 = *v132;
          v134 = v132[1];
          v135 = (__int64 (__fastcall **)())(v31 + *v132);
          v136 = (unsigned int *)(v37 + 24 * HIDWORD(v134));
          v202 = v136;
          if ( (_DWORD)v134 != 1027 )
            goto LABEL_245;
        }
LABEL_150:
        v30 = v193;
        v9 = v194;
        v4 = v82;
        v32 = v191;
        v33 = v192;
        v34 = v195;
      }
LABEL_51:
      if ( v34 )
        break;
      v30 += 4;
      v31 = *v4;
      v11 = *((_BYTE *)v4 + 870) & 0x20;
      v34 = 1;
    }
    if ( v196 )
    {
      v48 = v4[10];
      if ( v48 )
      {
        v49 = 16;
        v50 = *(_QWORD *)(v4[28] + 8);
        if ( v50 == 7 )
          v49 = 24;
        v51 = calloc(0x20u, *(_QWORD *)(v48 + 8) / v49, *(_QWORD *)(v48 + 8), 24, v50, v11);
        v4[112] = v51;
        if ( !v51 )
        {
          v183 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v183 = "<program name unknown>";
          dl_fatal_printf("%s: out of memory to store relocation results for %s\n", v183, (const char *)v4[1]);
        }
      }
    }
    *((_WORD *)v4 + 434) |= 8u;
    if ( v9 )
    {
      while ( (mprotect(*v9, v9[1], *((unsigned int *)v9 + 4)) & 0x80000000) == 0 )
      {
        v9 = (_QWORD *)v9[3];
        if ( !v9 )
          goto LABEL_59;
      }
      v182 = "cannot restore segment prot after reloc";
LABEL_389:
      dl_signal_error(*(unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 40), v4[1], 0, v182);
    }
LABEL_59:
    result = v4[150];
    if ( result )
      return dl_protect_relro(v4);
  }
  return result;
}
