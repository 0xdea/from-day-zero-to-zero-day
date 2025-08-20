ssize_t __fastcall dl_close_worker(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // x6
  int v3; // w2
  int v4; // w2
  __int64 v5; // x26
  unsigned int v6; // w24
  __int64 *v7; // x1
  __int64 *v8; // x0
  __int64 v9; // x1
  char v10; // w2
  int v11; // w3
  int v12; // w1
  __int64 v13; // x0
  signed int v14; // w3
  int *v15; // x1
  __int64 v16; // x5
  __int64 v17; // x2
  __int64 v18; // x0
  _QWORD *v19; // x2
  signed int v20; // w0
  signed int v21; // w0
  __int64 v22; // t1
  unsigned int v23; // w1
  ssize_t result; // x0
  int v25; // w7
  _DWORD *v26; // x1
  _DWORD *v27; // x7
  signed int v28; // w0
  __int64 v29; // x2
  unsigned int v30; // w0
  unsigned __int64 v31; // x0
  int v32; // w19
  __int64 v33; // x3
  void *v34; // x4
  void *v35; // x5
  void *v36; // x6
  __int64 v37; // x7
  double v38; // d0
  double v39; // d1
  double v40; // d2
  double v41; // d3
  double v42; // d4
  double v43; // d5
  double v44; // d6
  double v45; // d7
  __int64 v46; // x20
  unsigned int v47; // w25
  int v48; // w21
  __int64 v49; // x0
  __int64 v50; // x28
  unsigned int v51; // w22
  int v52; // w1
  __int64 *v53; // x11
  __int64 v54; // x10
  unsigned __int64 v55; // x13
  __int64 *v56; // x9
  __int64 v57; // x0
  __int64 *v58; // x1
  __int64 v59; // x2
  int v60; // w8
  __int64 v61; // x0
  __int64 v62; // t1
  __int64 v63; // t1
  __int64 v64; // x1
  bool v65; // cc
  __int64 v66; // x12
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // t1
  __int64 *v70; // x13
  __int64 v71; // t1
  bool v72; // zf
  int v73; // w0
  __int64 v74; // x0
  unsigned __int64 v75; // x0
  __int64 v76; // x2
  unsigned int v77; // w0
  unsigned int v78; // w7
  __int64 v79; // x1
  __int64 v80; // x14
  __int64 v81; // x12
  int *v82; // x0
  char *v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  void *v86; // x4
  void *v87; // x5
  unsigned __int64 v88; // x6
  double v89; // d0
  double v90; // d1
  double v91; // d2
  double v92; // d3
  double v93; // d4
  double v94; // d5
  double v95; // d6
  double v96; // d7
  __int64 *v97; // x19
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  void *v103; // x4
  void *v104; // x5
  void *v105; // x6
  double v106; // d0
  double v107; // d1
  double v108; // d2
  double v109; // d3
  double v110; // d4
  double v111; // d5
  double v112; // d6
  double v113; // d7
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  void *v117; // x4
  void *v118; // x5
  void *v119; // x6
  double v120; // d0
  double v121; // d1
  double v122; // d2
  double v123; // d3
  double v124; // d4
  double v125; // d5
  double v126; // d6
  double v127; // d7
  __int64 *v128; // x2
  char *v129; // x1
  __int64 *v130; // x20
  __int64 *v131; // x19
  char *v132; // x23
  __int64 v133; // x24
  __int64 v134; // x25
  __int16 v135; // w0
  __int64 v136; // x2
  __int64 **v137; // x3
  __int64 v138; // x1
  double object_dlclose; // d0
  double v140; // d1
  double v141; // d2
  double v142; // d3
  double v143; // d4
  double v144; // d5
  double v145; // d6
  double v146; // d7
  double v147; // d0
  double v148; // d1
  double v149; // d2
  double v150; // d3
  double v151; // d4
  double v152; // d5
  double v153; // d6
  double v154; // d7
  __int64 v155; // x0
  double v156; // d0
  double v157; // d1
  double v158; // d2
  double v159; // d3
  double v160; // d4
  double v161; // d5
  double v162; // d6
  double v163; // d7
  double v164; // d0
  double v165; // d1
  double v166; // d2
  double v167; // d3
  double v168; // d4
  double v169; // d5
  double v170; // d6
  double v171; // d7
  __int64 v172; // x28
  __int64 v173; // x0
  int v174; // w2
  double v175; // d0
  double v176; // d1
  double v177; // d2
  double v178; // d3
  double v179; // d4
  double v180; // d5
  double v181; // d6
  double v182; // d7
  __int64 v183; // x0
  __int64 v184; // x0
  __int64 v185; // x0
  __int64 v186; // x1
  __int64 v187; // x2
  __int64 v188; // x3
  __int64 v189; // x4
  __int64 v190; // x5
  void *v191; // x6
  double v192; // d0
  double v193; // d1
  double v194; // d2
  double v195; // d3
  double v196; // d4
  double v197; // d5
  double v198; // d6
  double v199; // d7
  __int64 v200; // x2
  __int64 v201; // x4
  __int64 v202; // x5
  void *v203; // x6
  double v204; // d0
  double v205; // d1
  double v206; // d2
  double v207; // d3
  double v208; // d4
  double v209; // d5
  double v210; // d6
  double v211; // d7
  __int64 v212; // x1
  __int64 **v213; // x3
  __int64 *v214; // x0
  __int64 v215; // x0
  char *v216; // x0
  int v217; // w7
  __int64 v218; // x5
  unsigned int i; // w0
  __int64 v220; // x7
  __int64 v221; // x1
  __int64 v222; // [xsp+0h] [xbp-10010h] BYREF
  __int64 v223; // [xsp+10h] [xbp-10000h] BYREF
  _QWORD v224[125]; // [xsp+18h] [xbp-FFF8h] BYREF
  __int64 v225; // [xsp+400h] [xbp-FC10h]
  _BYTE v226[16]; // [xsp+10000h] [xbp-10h] BYREF
  __int64 v227; // [xsp+10070h] [xbp+60h]
  __int64 *v228; // [xsp+10078h] [xbp+68h]
  int v229; // [xsp+10084h] [xbp+74h]
  __int64 v230; // [xsp+10088h] [xbp+78h]
  __int64 v231; // [xsp+10090h] [xbp+80h]
  int *v232; // [xsp+10098h] [xbp+88h]
  __int64 v233; // [xsp+100A0h] [xbp+90h]
  __int64 v234; // [xsp+100A8h] [xbp+98h]
  __int64 v235; // [xsp+100B0h] [xbp+A0h]
  __int64 **v236; // [xsp+100B8h] [xbp+A8h]
  _BYTE *v237; // [xsp+100C0h] [xbp+B0h]
  __int64 v238; // [xsp+100C8h] [xbp+B8h]
  int *v239; // [xsp+100D0h] [xbp+C0h]
  __int64 **v240; // [xsp+100D8h] [xbp+C8h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 864);
  LODWORD(v238) = a2;
  v4 = v3 - 1;
  *(_DWORD *)(a1 + 864) = v4;
  if ( (*(_QWORD *)(a1 + 864) & 0x3FFFFFFFFLL) != 0x200000000LL )
  {
LABEL_31:
    result = (unsigned int)dl_debug_mask;
    if ( (dl_debug_mask & 0x40) != 0 )
      return dl_debug_printf("\nclosing file=%s; direct_opencount=%u\n", *(const char **)(v2 + 8), v4);
    return result;
  }
  if ( dl_close_state_2 )
  {
    dl_close_state_2 = 2;
    goto LABEL_31;
  }
  v5 = *(_QWORD *)(a1 + 48);
  v240 = &dl_ns;
  v235 = 4 * v5;
  v236 = &(&dl_ns)[21 * v5];
  while ( 2 )
  {
    v6 = *((_DWORD *)v236 + 2);
    v237 = v226;
    dl_close_state_2 = 1;
    v7 = (__int64 *)&v226[-((8LL * v6 + 15) & 0xFFFFF0000LL)];
    if ( v226 != (_BYTE *)v7 )
    {
      do
        v225 = 0;
      while ( &v222 != v7 );
    }
    v222 = 0;
    if ( ((8 * (_WORD)v6 + 15) & 0xFFF0u) >= 0x400uLL )
      v225 = 0;
    v8 = *v236;
    if ( !*v236 )
    {
      if ( !v6 )
      {
        if ( v2 )
        {
          v217 = *(_DWORD *)(v2 + 1068);
          v218 = v223;
          v224[v217 - 1] = v223;
          *(_DWORD *)(v218 + 1068) = v217;
          v223 = v2;
          *(_DWORD *)(v2 + 1068) = 0;
          dl_sort_maps(&v223, 0, 1, 1);
        }
        else
        {
          dl_sort_maps(&v223, 0, 0, 1);
        }
        goto LABEL_94;
      }
LABEL_200:
      _libc_assert_fail("idx == nloaded", (__int64)"dl-close.c", 0x9Au, (__int64)"_dl_close_worker");
    }
    v9 = 0;
    do
    {
      v10 = *((_BYTE *)v8 + 869);
      v11 = v9;
      *((_DWORD *)v8 + 267) = v9;
      *((_BYTE *)v8 + 869) = v10 & 0xF3;
      v224[v9++ - 1] = v8;
      v8 = (__int64 *)v8[3];
    }
    while ( v8 );
    if ( v11 + 1 != v6 )
      goto LABEL_200;
    if ( v2 )
    {
      v12 = *(_DWORD *)(v2 + 1068);
      v13 = v223;
      v224[v12 - 1] = v223;
      *(_DWORD *)(v13 + 1068) = v12;
      v223 = v2;
      *(_DWORD *)(v2 + 1068) = 0;
    }
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v16 = v224[v14 - 1];
        if ( (*(_WORD *)(v16 + 868) & 0x800) == 0 )
          break;
LABEL_16:
        if ( ++v14 >= v6 )
          goto LABEL_49;
      }
      if ( (*(_QWORD *)(v16 + 864) & 0x3FFFFFFFFLL) != 0x200000000LL
        || (*(_BYTE *)(v16 + 871) & 1) != 0
        || (v31 = atomic_load((unsigned __int64 *)(v16 + 1184))) != 0
        || (*(_WORD *)(v16 + 868) & 0x400) != 0 )
      {
        v17 = *(_QWORD *)(v16 + 1032);
        *(_DWORD *)(v16 + 1068) = -1;
        *(_BYTE *)(v16 + 869) |= 0xCu;
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8);
          v19 = (_QWORD *)(v17 + 8);
          if ( v18 )
          {
            do
            {
              v23 = *(_DWORD *)(v18 + 1068);
              if ( v23 != -1 )
              {
                if ( (v23 & 0x80000000) != 0 || v23 >= v6 )
                  _libc_assert_fail(
                    "(*lp)->l_idx >= 0 && (*lp)->l_idx < nloaded",
                    (__int64)"dl-close.c",
                    0xCAu,
                    (__int64)"_dl_close_worker");
                if ( (*(_WORD *)(v18 + 868) & 0x400) == 0 )
                {
                  *(_WORD *)(v18 + 868) |= 0x400u;
                  v20 = *(_DWORD *)(*v19 + 1068LL);
                  v65 = v20 <= v14;
                  v21 = v20 - 1;
                  if ( v65 )
                    v14 = v21;
                }
              }
              v22 = v19[1];
              ++v19;
              v18 = v22;
            }
            while ( v22 );
          }
        }
        v15 = *(int **)(v16 + 1040);
        if ( v15 )
        {
          v25 = *v15;
          if ( *v15 )
          {
            v26 = v15 + 2;
            v27 = &v26[2 * v25];
            do
            {
              v29 = *(_QWORD *)v26;
              v30 = *(_DWORD *)(*(_QWORD *)v26 + 1068LL);
              if ( v30 != -1 )
              {
                if ( (v30 & 0x80000000) != 0 || v30 >= v6 )
                  _libc_assert_fail(
                    "jmap->l_idx >= 0 && jmap->l_idx < nloaded",
                    (__int64)"dl-close.c",
                    0xE3u,
                    (__int64)"_dl_close_worker");
                if ( (*(_WORD *)(v29 + 868) & 0x400) == 0 )
                {
                  v65 = (int)v30 <= v14;
                  v28 = v30 - 1;
                  if ( v65 )
                    v14 = v28;
                  *(_WORD *)(v29 + 868) |= 0x400u;
                }
              }
              v26 += 2;
            }
            while ( v27 != v26 );
          }
        }
        goto LABEL_16;
      }
      ++v14;
    }
    while ( v14 < v6 );
LABEL_49:
    v32 = 0;
    dl_sort_maps(&v223, v6, v2 != 0, 1);
    v46 = 0;
    v47 = -1;
    v48 = 0;
    LODWORD(v239) = 0;
    do
    {
      while ( 1 )
      {
        v50 = v224[v46 - 1];
        v51 = v46;
        if ( *(_QWORD *)(v50 + 48) != v5 )
          _libc_assert_fail("imap->l_ns == nsid", (__int64)"dl-close.c", 0xFEu, (__int64)"_dl_close_worker");
        v75 = *(unsigned __int16 *)(v50 + 868);
        v52 = v75 & 3;
        if ( (v75 & 0x400) == 0 )
        {
          if ( v52 != 2 || (*(_BYTE *)(v50 + 871) & 1) != 0 )
            _libc_assert_fail(
              "imap->l_type == lt_loaded && !imap->l_nodelete_active",
              (__int64)"dl-close.c",
              0x102u,
              (__int64)"_dl_close_worker");
          if ( (v75 & 0x10) != 0 )
          {
            dl_catch_exception(
              0,
              (void (__fastcall *)(__int64))dl_call_fini,
              v224[v46 - 1],
              v33,
              (__int64)v34,
              (__int64)v35,
              (__int64)v36,
              v37);
            v75 = *(unsigned __int16 *)(v50 + 868);
          }
          v49 = (v75 >> 5) & 1;
          if ( v47 > (unsigned int)v46 )
            v47 = v46;
          v32 += v49;
          v48 = 1;
          *(_BYTE *)(v50 + 870) |= 4u;
          goto LABEL_57;
        }
        if ( v52 == 2 )
          break;
LABEL_57:
        if ( v6 == ++v46 )
          goto LABEL_93;
      }
      if ( *(_QWORD *)(v50 + 776) || (v76 = *(_QWORD *)(v50 + 1032)) == 0 )
      {
        v53 = *(__int64 **)(v50 + 976);
        v54 = 0;
        v55 = 1;
        v37 = *v53;
        if ( !*v53 )
          goto LABEL_87;
      }
      else
      {
        if ( *(_QWORD *)(v76 + 8) )
        {
          v77 = 1;
          do
            v78 = v77++;
          while ( *(_QWORD *)(v76 + 8LL * v77) );
          v79 = 8LL * (v78 + 2);
        }
        else
        {
          v79 = 16;
          v77 = 1;
        }
        v53 = *(__int64 **)(v50 + 976);
        v54 = v50 + 776;
        v37 = *v53;
        *(_QWORD *)(v50 + 776) = v76 + v79;
        *(_DWORD *)(v50 + 784) = v77;
        if ( !v37 )
        {
LABEL_97:
          *(_QWORD *)(v50 + 776) = 0;
          *(_DWORD *)(v50 + 784) = 0;
          goto LABEL_87;
        }
        v55 = 2;
      }
      v56 = v53 + 1;
      v57 = v37;
      v58 = v53 + 1;
      v59 = v50 + 792;
      v60 = 0;
      do
      {
        while ( v59 != v57 )
        {
          v61 = v57 - 776;
          if ( *(_QWORD *)(v61 + 48) != v5 )
            _libc_assert_fail("tmap->l_ns == nsid", (__int64)"dl-close.c", 0x143u, (__int64)"_dl_close_worker");
          if ( *(_DWORD *)(v61 + 1068) == -1 )
            break;
          v62 = *v58++;
          v57 = v62;
          v60 = 1;
          if ( !v62 )
            goto LABEL_69;
        }
        v63 = *v58++;
        v57 = v63;
        ++v55;
      }
      while ( v63 );
LABEL_69:
      if ( v60 )
      {
        v64 = v50 + 936;
        v65 = (__int64 *)(v50 + 936) == v53 || v55 > 3;
        if ( v65 )
        {
          v66 = *(_QWORD *)(v50 + 968);
          v227 = v50 + 792;
          v228 = v53;
          v229 = v60;
          v230 = v54;
          v231 = v37;
          v232 = (int *)(v50 + 936);
          v233 = (__int64)(v53 + 1);
          v234 = v66;
          v67 = malloc(8 * v66, v38, v39, v40, v41, v42, v43, v44, v45, v64, v59, v33, v34, v35, v36);
          v59 = v227;
          v53 = v228;
          v80 = v67;
          v54 = v230;
          v37 = v231;
          v64 = (__int64)v232;
          v56 = (__int64 *)v233;
          v81 = v234;
          v60 = v229;
          if ( !v67 )
            dl_signal_error(12, "dlclose", 0, "cannot create scope list");
        }
        else
        {
          v80 = v50 + 936;
          v81 = 4;
        }
        v68 = 0;
        do
        {
          while ( 1 )
          {
            v70 = (__int64 *)(v80 + 8 * v68);
            if ( v59 != v37 && *(_DWORD *)(v37 + 292) != -1 )
              break;
            *v70 = v37;
            ++v68;
            v71 = *v56++;
            v37 = v71;
            if ( !v71 )
              goto LABEL_83;
          }
          if ( v54 )
          {
            ++v68;
            *v70 = v54;
            v54 = 0;
          }
          v69 = *v56++;
          v37 = v69;
        }
        while ( v69 );
LABEL_83:
        *(_QWORD *)(v80 + 8 * v68) = 0;
        *(_QWORD *)(v50 + 976) = v80;
        if ( (__int64 *)v64 == v53 )
        {
          LODWORD(v239) = v60;
          *(_QWORD *)(v50 + 968) = v81;
        }
        else
        {
          v234 = v81;
          v72 = (unsigned int)dl_scope_free(
                                (__int64)v53,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43,
                                v44,
                                v45,
                                v64,
                                v59,
                                v33,
                                v34,
                                v35,
                                v36) == 0;
          v73 = (int)v239;
          if ( !v72 )
            v73 = 0;
          LODWORD(v239) = v73;
          *(_QWORD *)(v50 + 968) = v234;
        }
      }
      else if ( v54 )
      {
        goto LABEL_97;
      }
LABEL_87:
      v74 = *(_QWORD *)(v50 + 808);
      if ( v74 && *(_DWORD *)(v74 + 1068) != -1 )
        *(_QWORD *)(v50 + 808) = 0;
      ++v46;
      if ( v47 > v51 )
        v47 = v51;
    }
    while ( v6 != v46 );
LABEL_93:
    if ( !v48 )
      goto LABEL_94;
    v82 = dl_debug_update(v5);
    v82[6] = 2;
    v232 = v82;
    dl_debug_state();
    if ( v32 )
    {
      v84 = (__int64)(&(&v240[4 * v235])[4 * v5])[v5 + 2];
      for ( i = *(_DWORD *)(v84 + 8); i; --i )
      {
        v85 = *(_QWORD *)v84;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v84 + 8LL * (i - 1)) + 870LL) & 4) == 0 )
        {
          v88 = v32 + i;
          if ( *(_DWORD *)(v84 + 8) != (_DWORD)v88 )
          {
            v220 = i;
            v221 = 0;
            i = 0;
            do
            {
              v88 = *(_QWORD *)(v85 + 8 * v221);
              if ( (*(_BYTE *)(v88 + 870) & 4) == 0 )
              {
                if ( i != (_DWORD)v221 )
                  *(_QWORD *)(v85 + 8LL * i) = v88;
                ++i;
              }
              ++v221;
            }
            while ( v221 != v220 );
          }
          break;
        }
      }
      v83 = &_libc_single_threaded;
      *(_DWORD *)(v84 + 8) = i;
      if ( !_libc_single_threaded )
      {
LABEL_111:
        _thread_gscope_wait();
        v97 = (__int64 *)dl_scope_free_list;
        if ( dl_scope_free_list )
        {
          v98 = *(_QWORD *)dl_scope_free_list;
          if ( *(_QWORD *)dl_scope_free_list )
          {
            do
            {
              v99 = v98 - 1;
              *v97 = v99;
              free(v97[v99 + 1], v89, v90, v91, v92, v93, v94, v95, v96);
              v98 = *v97;
            }
            while ( *v97 );
          }
        }
      }
    }
    else if ( !_libc_single_threaded
           && (((unsigned __int8)v239 & 1) != 0 || dl_scope_free_list && *(_QWORD *)dl_scope_free_list) )
    {
      goto LABEL_111;
    }
    pthread_mutex_lock(
      dl_load_tls_lock,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      (__int64)v83,
      v84,
      v85,
      v86,
      v87,
      (void *)v88);
    pthread_mutex_lock(
      dl_load_write_lock,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
    if ( v47 >= v6 )
    {
      pthread_mutex_unlock(
        dl_load_write_lock,
        v120,
        v121,
        v122,
        v123,
        v124,
        v125,
        v126,
        v127,
        v114,
        v115,
        v116,
        (__int64)v117,
        (__int64)v118,
        v119);
    }
    else
    {
      v128 = (__int64 *)v240;
      v129 = (char *)v224;
      v233 = v5 + 4 * (v235 + v5);
      v130 = &v224[v47 - 1];
      v131 = &v224[v6 - 1 - v47 + (unsigned __int64)v47];
      v132 = 0;
      v133 = 0;
      LODWORD(v234) = 0;
      v239 = (int *)&v240[v233 + 5];
      do
      {
        while ( 1 )
        {
          v134 = *v130;
          v135 = *(_WORD *)(*v130 + 868);
          if ( (v135 & 0x400) == 0 )
            break;
          if ( v131 == ++v130 )
            goto LABEL_144;
        }
        if ( (v135 & 3) != 2 )
          _libc_assert_fail("imap->l_type == lt_loaded", (__int64)"dl-close.c", 0x1EFu, (__int64)"_dl_close_worker");
        if ( *(_QWORD *)(v134 + 1144) )
        {
          if ( dl_tls_dtv_slotinfo_list
            && (remove_slotinfo(
                  *(_QWORD *)(v134 + 1176),
                  (unsigned __int64 *)dl_tls_dtv_slotinfo_list,
                  0,
                  (*(_QWORD *)(v134 + 864) & 0x1000000000LL) != 0)
              & 1) == 0 )
          {
            dl_tls_max_dtv_idx = dl_tls_static_nelem;
          }
          v215 = *(_QWORD *)(v134 + 1168);
          LODWORD(v234) = v48;
          v129 = (char *)(v215 + 1);
          if ( (unsigned __int64)(v215 + 1) > 1 )
          {
            if ( v133 )
            {
              v128 = *(__int64 **)(v134 + 1144);
              v129 = *(char **)(v134 + 1160);
              v216 = (char *)v128 + v215;
              if ( v132 == v129 )
              {
                v132 = v216;
              }
              else if ( (char *)v133 == v216 )
              {
                v133 = *(_QWORD *)(v134 + 1160);
              }
              else
              {
                v128 = &dl_tls_static_used;
                v116 = dl_tls_static_used;
                if ( (char *)dl_tls_static_used == v216 )
                {
                  dl_tls_static_used = *(_QWORD *)(v134 + 1160);
                }
                else if ( (char *)dl_tls_static_used == v132 )
                {
                  v132 = v216;
                  dl_tls_static_used = v133;
                  v133 = (__int64)v129;
                }
                else
                {
                  if ( v132 < v129 )
                    v133 = *(_QWORD *)(v134 + 1160);
                  else
                    v216 = v132;
                  v132 = v216;
                }
              }
            }
            else
            {
              v133 = *(_QWORD *)(v134 + 1160);
              v132 = (char *)(v215 + *(_QWORD *)(v134 + 1144));
            }
          }
        }
        if ( (v238 & 1) != 0 )
        {
          pthread_mutex_lock(
            v239,
            v120,
            v121,
            v122,
            v123,
            v124,
            v125,
            v126,
            v127,
            (__int64)v129,
            (__int64)v128,
            v116,
            v117,
            v118,
            v119);
          v212 = (__int64)v240;
          v213 = &v240[v233];
          v214 = v213[11];
          if ( v214 )
          {
            v200 = (__int64)v213[12];
            if ( v200 )
            {
              v200 = (__int64)&v214[4 * v200];
              do
              {
                v212 = v214[1];
                if ( v212 )
                {
                  v212 = v214[3];
                  if ( v212 == v134 )
                  {
                    *(_DWORD *)v214 = 0;
                    v214[1] = 0;
                    v212 = (__int64)v213[13] - 1;
                    v213[13] = (__int64 *)v212;
                  }
                }
                v214 += 4;
              }
              while ( (__int64 *)v200 != v214 );
            }
          }
          pthread_mutex_unlock(
            v239,
            v204,
            v205,
            v206,
            v207,
            v208,
            v209,
            v210,
            v211,
            v212,
            v200,
            (__int64)v213,
            v201,
            v202,
            v203);
        }
        dl_unmap(v134);
        if ( v5 )
          _libc_assert_fail("nsid == LM_ID_BASE", (__int64)"dl-close.c", 0x27Du, (__int64)"_dl_close_worker");
        v136 = *(_QWORD *)(v134 + 32);
        if ( !v136 )
          _libc_assert_fail("imap->l_prev != NULL", (__int64)"dl-close.c", 0x27Eu, (__int64)"_dl_close_worker");
        v137 = v240;
        v138 = *(_QWORD *)(v134 + 24);
        *(_QWORD *)(v136 + 24) = v138;
        --*((_DWORD *)v137 + 2);
        if ( v138 )
          *(_QWORD *)(v138 + 32) = v136;
        object_dlclose = dl_find_object_dlclose(v134);
        free(*(_QWORD *)(v134 + 816), object_dlclose, v140, v141, v142, v143, v144, v145, v146);
        v155 = *(_QWORD *)(v134 + 912);
        if ( v155 != -1 )
          free(v155, v147, v148, v149, v150, v151, v152, v153, v154);
        free(*(_QWORD *)(v134 + 1040), v147, v148, v149, v150, v151, v152, v153, v154);
        if ( (dl_debug_mask & 0x40) != 0 )
          dl_debug_printf("\nfile=%s [%lu];  destroying link map\n", *(const char **)(v134 + 8), *(_QWORD *)(v134 + 48));
        free(*(_QWORD *)(v134 + 8), v156, v157, v158, v159, v160, v161, v162, v163);
        v172 = *(_QWORD *)(v134 + 56);
        do
        {
          v173 = v172;
          v174 = *(_DWORD *)(v172 + 16);
          v172 = *(_QWORD *)(v172 + 8);
          if ( !v174 )
            free(v173, v164, v165, v166, v167, v168, v169, v170, v171);
        }
        while ( v172 );
        free(*(_QWORD *)(v134 + 1032), v164, v165, v166, v167, v168, v169, v170, v171);
        v183 = *(_QWORD *)(v134 + 976);
        if ( v183 != v134 + 936 )
          free(v183, v175, v176, v177, v178, v179, v180, v181, v182);
        if ( (*(_WORD *)(v134 + 868) & 0x1000) != 0 )
          free(*(_QWORD *)(v134 + 752), v175, v176, v177, v178, v179, v180, v181, v182);
        v184 = *(_QWORD *)(v134 + 880);
        if ( v184 != -1 )
          free(v184, v175, v176, v177, v178, v179, v180, v181, v182);
        v185 = *(_QWORD *)(v134 + 1016);
        if ( v185 != -1 )
          free(v185, v175, v176, v177, v178, v179, v180, v181, v182);
        if ( dl_initfirst == v134 )
          dl_initfirst = 0;
        ++v130;
        free(v134, v175, v176, v177, v178, v179, v180, v181, v182);
      }
      while ( v131 != v130 );
LABEL_144:
      pthread_mutex_unlock(
        dl_load_write_lock,
        v120,
        v121,
        v122,
        v123,
        v124,
        v125,
        v126,
        v127,
        (__int64)v129,
        (__int64)v128,
        v116,
        (__int64)v117,
        (__int64)v118,
        v119);
      if ( (v234 & 1) != 0 )
      {
        if ( dl_tls_generation == -1 )
          dl_fatal_printf(
            "TLS generation counter wrapped!  Please report as described in <https://bugs.launchpad.net/ubuntu/+source/glibc/+bugs>.\n");
        atomic_store(dl_tls_generation + 1, (unsigned __int64 *)&dl_tls_generation);
        v186 = dl_tls_static_used;
        if ( (char *)dl_tls_static_used == v132 )
          dl_tls_static_used = v133;
      }
    }
    pthread_mutex_unlock(
      dl_load_tls_lock,
      v192,
      v193,
      v194,
      v195,
      v196,
      v197,
      v198,
      v199,
      v186,
      v187,
      v188,
      v189,
      v190,
      v191);
    if ( !(&(&v240[4 * v235])[4 * v5])[v5] && dl_nns - 1 == v5 )
      dl_nns = v5;
    v232[6] = 0;
    dl_debug_state();
LABEL_94:
    if ( dl_close_state_2 == 2 )
    {
      v2 = 0;
      continue;
    }
    break;
  }
  dl_close_state_2 = 0;
  return (ssize_t)v237;
}
