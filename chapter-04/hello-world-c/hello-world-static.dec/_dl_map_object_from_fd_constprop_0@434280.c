// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall dl_map_object_from_fd_constprop_0(
        char *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15,
        double a16,
        __int64 a17)
{
  unsigned __int64 v24; // x5
  __int64 *v25; // x19
  __int64 v26; // x6
  unsigned __int16 v27; // w0
  size_t v28; // x1
  __off64_t v29; // x3
  __int64 v30; // x4
  size_t v31; // x20
  unsigned int v32; // w4
  __int64 v33; // x4
  __int64 *v34; // x1
  unsigned __int64 v35; // x4
  __int64 *v36; // x2
  unsigned __int64 v37; // x10
  int v38; // w28
  int v39; // w9
  int v40; // w7
  __int64 v41; // x17
  __int64 v42; // x15
  void *v43; // x11
  __int64 v44; // x20
  __int64 v45; // x1
  __int64 v46; // x3
  __int64 v47; // x5
  __int64 v48; // x30
  unsigned __int64 v49; // x13
  void **v50; // x8
  void *v51; // x5
  __int64 v52; // x0
  unsigned int v53; // w0
  void **v54; // x1
  __int64 i; // x0
  __int64 v56; // x0
  void *v57; // x28
  size_t v58; // x27
  size_t v59; // x1
  unsigned __int64 v60; // x0
  size_t v61; // x2
  unsigned __int64 v62; // x3
  int v63; // w7
  __int64 v64; // x2
  unsigned __int64 v65; // x1
  int v66; // w0
  void **v67; // x7
  char *v68; // x0
  unsigned __int64 v69; // x2
  size_t v70; // x1
  char *v71; // x28
  int v72; // w5
  _BYTE *v73; // x0
  _BYTE *v74; // x1
  size_t v75; // x1
  __off_t v76; // x5
  int v77; // w2
  char *v78; // x0
  unsigned __int64 v79; // x0
  const char *v80; // x27
  __int64 v81; // x0
  char v82; // w1
  __int64 v83; // x0
  int v84; // w1
  __int64 v85; // x0
  int v86; // w3
  unsigned __int64 v87; // x0
  double v88; // d0
  double v89; // d1
  double v90; // d2
  double v91; // d3
  double v92; // d4
  double v93; // d5
  double v94; // d6
  double v95; // d7
  unsigned __int64 v97; // x0
  void *v98; // x2
  unsigned __int64 v99; // x0
  void *v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  double v103; // d0
  double v104; // d1
  double v105; // d2
  double v106; // d3
  double v107; // d4
  double v108; // d5
  double v109; // d6
  double v110; // d7
  __int64 v111; // x0
  __int64 v112; // x1
  unsigned __int64 v113; // x0
  unsigned __int64 v114; // t1
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x1
  __int64 v123; // x1
  __int64 v124; // x0
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x0
  __int64 v128; // x0
  int v129; // w0
  int v130; // w0
  bool v132; // zf
  __int64 v133; // x0
  __int64 v134; // x0
  _QWORD *v135; // x3
  _QWORD *j; // x20
  int v137; // t1
  __int64 v138; // x4
  int v139; // w1
  __int64 v140; // x0
  __int64 v141; // x3
  int *v142; // x20
  int v143; // w0
  int v144; // w2
  unsigned __int64 v145; // x0
  __int64 v146; // x1
  __int64 v147; // x2
  void *v148; // x0
  unsigned __int64 v149; // x1
  size_t v150; // x0
  unsigned __int64 v151; // x0
  unsigned __int64 v152; // x10
  void *v153; // x0
  char *v154; // x0
  __int64 v155; // x10
  _BYTE *v156; // x0
  size_t v157; // x1
  unsigned int v158; // w20
  __int64 v159; // x0
  __int64 **v160; // x1
  __int64 v161; // x2
  __int64 v162; // x0
  __int64 v163; // [xsp+0h] [xbp-10030h] BYREF
  void *v164; // [xsp+30h] [xbp-10000h] BYREF
  unsigned __int64 v165; // [xsp+38h] [xbp-FFF8h]
  __int64 v166; // [xsp+48h] [xbp-FFE8h]
  unsigned __int64 v167; // [xsp+50h] [xbp-FFE0h] BYREF
  __off_t v168; // [xsp+58h] [xbp-FFD8h]
  int v169[232]; // [xsp+60h] [xbp-FFD0h]
  __int64 v170; // [xsp+400h] [xbp-FC30h]
  _QWORD v171[6]; // [xsp+10000h] [xbp-30h] BYREF
  __int64 v172; // [xsp+10030h] [xbp+0h] BYREF
  char *v173; // [xsp+10090h] [xbp+60h]
  __int64 v174; // [xsp+10098h] [xbp+68h]
  unsigned __int64 v175; // [xsp+100A0h] [xbp+70h]
  unsigned __int64 v176; // [xsp+100A8h] [xbp+78h]
  void **v177; // [xsp+100B0h] [xbp+80h]
  __int64 v178; // [xsp+100B8h] [xbp+88h]
  void **v179; // [xsp+100C0h] [xbp+90h]
  size_t *v180; // [xsp+100C8h] [xbp+98h]
  int *v181; // [xsp+100D0h] [xbp+A0h]
  __int64 v182; // [xsp+100D8h] [xbp+A8h]
  _QWORD *v183; // [xsp+100E0h] [xbp+B0h]
  int v184; // [xsp+100ECh] [xbp+BCh]
  __int64 *v185; // [xsp+100F0h] [xbp+C0h]
  int v186; // [xsp+100F8h] [xbp+C8h]
  int stacks_executable; // [xsp+100FCh] [xbp+CCh]
  __int64 v188; // [xsp+10100h] [xbp+D0h]
  __int64 v189; // [xsp+10108h] [xbp+D8h]
  __int64 v190; // [xsp+10110h] [xbp+E0h] BYREF
  __int64 v191; // [xsp+10118h] [xbp+E8h]

  v182 = a8;
  v184 = a7 & 0x20000000;
  if ( (a7 & 0x20000000) != 0 )
  {
    if ( a17 )
      _libc_assert_fail("nsid == LM_ID_BASE", (__int64)"dl-load.c", 0x3C1u, (__int64)"_dl_map_object_from_fd");
    v188 = 0;
    v189 = 0;
LABEL_4:
    stacks_executable = a7 & 4;
    if ( (a7 & 4) != 0 )
    {
      free(a4, a9, a10, a11, a12, a13, a14, a15, a16);
      v25 = 0;
      _close_nocancel(a2);
      return v25;
    }
    v181 = &dl_debug_mask;
    if ( (dl_debug_mask & 0x40) != 0 )
      dl_debug_printf("file=%s [%lu];  generating link map\n", a1, a17);
    v25 = (__int64 *)dl_new_object(a4, a1, a6, a5, (unsigned int)a7, a17);
    if ( !v25 )
    {
      stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      if ( a2 != -1 )
        _close_nocancel(a2);
      v80 = "cannot create shared object descriptor";
      goto LABEL_102;
    }
    v26 = a3 + 8;
    v27 = *(_WORD *)(a3 + 64);
    v28 = *(_QWORD *)a3;
    v30 = *(_QWORD *)(a3 + 32);
    v29 = *(_QWORD *)(a3 + 40);
    v31 = 56LL * v27;
    v186 = *(unsigned __int16 *)(v26 + 16);
    v25[95] = v30;
    *((_WORD *)v25 + 384) = v27;
    if ( v31 + v29 > v28 )
    {
      while ( v171 != (_QWORD *)((char *)v171 - (((_DWORD)v31 + 15) & 0x7F0000)) )
        v170 = 0;
      v171[0] = 0;
      if ( (((_WORD)v31 + 15) & 0xFFF0u) >= 0x400uLL )
        STACK[0x10400] = 0;
      v183 = (_QWORD *)v26;
      v185 = &v172;
      v99 = _pread64_nocancel(a2, &v172, v31, v29);
      v26 = (__int64)v183;
      if ( v99 != v31 )
      {
        stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
        if ( a2 != -1 )
          _close_nocancel(a2);
        v80 = "cannot read file data";
        goto LABEL_94;
      }
    }
    else
    {
      v185 = (__int64 *)(v26 + v29);
    }
    v32 = *((unsigned __int16 *)v25 + 384);
    v183 = v171;
    v33 = 7LL * v32;
    v34 = (_QWORD *)((char *)v171 - (((_DWORD)(v33 * 8) + 15) & 0x7F0000));
    if ( v171 != v34 )
    {
      do
        v170 = 0;
      while ( &v163 != v34 );
    }
    v163 = 0;
    if ( (((_WORD)(v33 * 8) + 15) & 0xFFF0u) >= 0x400uLL )
    {
      v170 = 0;
      v35 = (unsigned __int64)&v185[v33];
      if ( (unsigned __int64)v185 >= v35 )
        goto LABEL_214;
    }
    else
    {
      v35 = (unsigned __int64)&v185[v33];
      if ( (unsigned __int64)v185 >= v35 )
        goto LABEL_214;
    }
    v36 = v185;
    v37 = dl_pagesize;
    v38 = 0;
    v39 = 6;
    v40 = 0;
    v41 = dl_pagesize - 1;
    v42 = -dl_pagesize;
    v43 = 0;
    v44 = 0;
    v180 = (size_t *)&dl_pagesize;
    while ( 1 )
    {
      v53 = *(_DWORD *)v36;
      if ( *(_DWORD *)v36 == 7 )
      {
        v81 = v36[5];
        if ( v81 )
        {
          v25[143] = v81;
          v82 = *((_WORD *)v25 + 434);
          v83 = v36[6];
          v25[144] = v83;
          v84 = v82 & 3;
          v24 = v36[2];
          if ( v83 )
            v83 = (v83 - 1) & v24;
          v25[145] = v83;
          v85 = v36[4];
          v25[141] = v24;
          v25[142] = v85;
          if ( v84 != 1 && !dl_tls_dtv_slotinfo_list )
            _libc_assert_fail(
              "false && \"TLS not initialized in static application\"",
              (__int64)"dl-load.c",
              0x4B3u,
              (__int64)"_dl_map_object_from_fd");
        }
        goto LABEL_26;
      }
      if ( v53 <= 7 )
        break;
      if ( v53 == 1685382481 )
      {
        v39 = *((_DWORD *)v36 + 1);
        goto LABEL_26;
      }
      if ( v53 == 1685382482 )
      {
        v25[149] = v36[2];
        v36 += 7;
        v25[150] = *(v36 - 2);
        if ( (unsigned __int64)v36 >= v35 )
        {
LABEL_32:
          if ( v44 )
          {
            v54 = (void **)&v167;
            for ( i = 0; i != v44; ++i )
            {
              *v54 = v43;
              v54 += 7;
            }
            if ( v186 == 3 )
            {
              if ( v25[2] && !v38 )
              {
                v56 = i - 1;
                v57 = v164;
                v58 = *(&v166 + 7 * v56) - (_QWORD)v164;
                if ( v37 >= v167 )
                {
                  v59 = *(&v166 + 7 * v56) - (_QWORD)v164;
                  v177 = (void **)v26;
                  LODWORD(v178) = v39;
                  LODWORD(v179) = v40;
                  v60 = mmap64(v164, v59, v169[0], 2050, a2, v168);
                  v25[115] = v60;
                  v61 = v60;
                  if ( v60 != -1 )
                  {
                    v26 = (__int64)v177;
                    v62 = v60 + v58;
                    v39 = v178;
                    LOBYTE(v63) = (_BYTE)v179;
                    goto LABEL_41;
                  }
LABEL_57:
                  v80 = "failed to map segment from shared object";
LABEL_206:
                  v25[115] = 0;
                  v25[116] = 0;
LABEL_92:
                  if ( a2 != -1 )
                    _close_nocancel(a2);
LABEL_94:
                  v100 = (void *)v25[115];
                  if ( v100 )
                    munmap(v100, v25[116] - (_QWORD)v100);
                  v101 = v25[114];
                  if ( v101 != -1 )
                    free(v101, a9, a10, a11, a12, a13, a14, a15, a16);
                  v102 = v25[7];
                  if ( !*(_DWORD *)(v102 + 16) )
                    free(v102, a9, a10, a11, a12, a13, a14, a15, a16);
                  if ( (*((_WORD *)v25 + 434) & 0x1000) != 0 )
                    free(v25[94], a9, a10, a11, a12, a13, a14, a15, a16);
LABEL_102:
                  free((__int64)v25, a9, a10, a11, a12, a13, a14, a15, a16);
                  free(a4, v103, v104, v105, v106, v107, v108, v109, v110);
                  dl_signal_error(stacks_executable, a1, 0, v80);
                }
                v150 = v167 + v58;
                if ( v167 > v58 )
                  v150 = 2 * v167;
                v175 = v26;
                LODWORD(v176) = v39;
                LODWORD(v177) = v40;
                v178 = v167;
                v179 = (void **)v150;
                v151 = mmap64(v164, v150, 0, 2082, -1, 0);
                v152 = v151;
                if ( v151 == -1 )
                  goto LABEL_57;
                v153 = (void *)((v178 - 1 + v151) & -v178);
                v178 = v152;
                v154 = (char *)mmap64(v153, v58, v169[0], 2066, a2, v168);
                v61 = (size_t)v154;
                v26 = v175;
                v62 = (unsigned __int64)&v154[v58];
                v155 = v178;
                v39 = v176;
                v63 = (int)v177;
                if ( v154 == (char *)-1LL )
                {
                  munmap((void *)v178, (size_t)v179);
                  goto LABEL_57;
                }
                if ( v154 != (char *)v178 )
                {
                  v173 = &v154[v58];
                  v174 = v175;
                  LODWORD(v175) = v176;
                  LODWORD(v176) = (_DWORD)v177;
                  v177 = (void **)v154;
                  munmap((void *)v178, (size_t)&v154[-v178]);
                  v39 = v175;
                  v62 = (unsigned __int64)v173;
                  v26 = v174;
                  v61 = (size_t)v177;
                  v155 = v178;
                  v63 = v176;
                }
                v35 = (unsigned __int64)v179 + v155;
                v156 = (_BYTE *)((*v180 - 1 + v62) & -(__int64)*v180);
                v157 = (char *)v179 + v155 - v156;
                if ( (char *)v179 + v155 == v156 )
                {
                  v25[115] = v61;
                }
                else
                {
                  v175 = v62;
                  v176 = v26;
                  LODWORD(v177) = v39;
                  LODWORD(v178) = v63;
                  v179 = (void **)v61;
                  munmap(v156, v157);
                  v61 = (size_t)v179;
                  v25[115] = (__int64)v179;
                  v62 = v175;
                  v26 = v176;
                  v39 = (int)v177;
                  LOBYTE(v63) = v178;
                }
LABEL_41:
                v64 = v61 - (_QWORD)v57;
                *v25 = v64;
                v25[116] = v62;
                if ( (v63 & 1) != 0 )
                {
                  v178 = v26;
                  LODWORD(v179) = v39;
                  v65 = (unsigned __int64)*(&v164 + 7 * v44 - 7);
                  if ( v65 < v165 )
                  {
                    v80 = "ELF load command address/offset not page-aligned";
                    goto LABEL_206;
                  }
                  v66 = mprotect((void *)(v64 + v165), v65 - v165, 0);
                  v26 = v178;
                  v39 = (int)v179;
                  if ( v66 < 0 )
                  {
LABEL_210:
                    v80 = "cannot change memory protections";
                    goto LABEL_206;
                  }
                }
                v67 = &v164;
                *((_BYTE *)v25 + 870) |= 8u;
                while ( 1 )
                {
                  if ( !v25[94] )
                  {
                    v97 = *(_QWORD *)(v26 + 32);
                    v98 = v67[5];
                    if ( (unsigned __int64)v98 <= v97 )
                    {
                      v35 = (unsigned __int64)*v67;
                      v24 = *(unsigned __int16 *)(v26 + 56);
                      v62 = v97 + 56 * v24;
                      if ( (char *)v67[1] + (_QWORD)v98 - (char *)*v67 >= v62 )
                        v25[94] = v97 + v35 - (_QWORD)v98;
                    }
                  }
                  v69 = (unsigned __int64)v67[2];
                  v68 = (char *)v67[3];
                  if ( (unsigned __int64)v68 > v69 )
                  {
                    v70 = *v180;
                    v35 = v69 + *v25;
                    v62 = (unsigned __int64)&v68[*v25];
                    v71 = (char *)((v70 - 1 + v35) & -(__int64)v70);
                    if ( (unsigned __int64)v71 > v62 )
                      v71 = &v68[*v25];
                    if ( v35 < (unsigned __int64)v71 )
                    {
                      v72 = *((_DWORD *)v67 + 12);
                      if ( (v72 & 2) != 0 )
                      {
                        v176 = v26;
                        LODWORD(v177) = v39;
                        v178 = v62;
                        v179 = v67;
                        memset(v35, 0, &v71[-v35]);
                        v39 = (int)v177;
                        v62 = v178;
                        v67 = v179;
                        v26 = v176;
                      }
                      else
                      {
                        v174 = v26;
                        LODWORD(v175) = v39;
                        v176 = v62;
                        v177 = v67;
                        v178 = v35;
                        LODWORD(v179) = v72;
                        if ( (mprotect((void *)(v35 & -(__int64)v70), v70, v72 | 2u) & 0x80000000) != 0 )
                          goto LABEL_210;
                        v162 = memset(v178, 0, &v71[-v178]);
                        mprotect((void *)(-(__int64)*v180 & v162), *v180, (int)v179);
                        v26 = v174;
                        v62 = v176;
                        v67 = v177;
                        v39 = v175;
                      }
                    }
                    if ( v62 > (unsigned __int64)v71 )
                    {
                      v144 = *((_DWORD *)v67 + 12);
                      v177 = (void **)v26;
                      LODWORD(v178) = v39;
                      v179 = v67;
                      v145 = mmap64(v71, v62 - (_QWORD)v71, v144, 50, -1, 0);
                      v26 = (__int64)v177;
                      v67 = v179;
                      v39 = v178;
                      if ( v145 == -1 )
                      {
                        v80 = "cannot map zero-fill pages";
                        goto LABEL_206;
                      }
                    }
                  }
                  v67 += 7;
LABEL_54:
                  if ( v67 >= &v164 + 7 * v44 )
                    break;
                  v73 = *v67;
                  v74 = v67[1];
                  if ( v74 > *v67 )
                  {
                    v75 = v74 - v73;
                    v76 = (__off_t)v67[5];
                    v77 = *((_DWORD *)v67 + 12);
                    v78 = &v73[*v25];
                    v177 = (void **)v26;
                    LODWORD(v178) = v39;
                    v179 = v67;
                    v79 = mmap64(v78, v75, v77, 2066, a2, v76);
                    v26 = (__int64)v177;
                    v67 = v179;
                    v39 = v178;
                    if ( v79 == -1 )
                      goto LABEL_57;
                  }
                }
                v111 = v25[2];
                v112 = (__int64)v183;
                if ( v111 && (v69 = *v25, v112 = v111 + *v25, (v25[2] = v112) != 0) )
                {
                  v113 = *(_QWORD *)(v111 + v69);
                  v62 = (unsigned __int64)(v25 + 8);
                  if ( v113 )
                  {
                    v35 = -1879048192;
                    do
                    {
                      if ( v113 > 0x25 )
                      {
                        v24 = v113 - 1879048192;
                        if ( v113 - 1879048192 > 5 )
                        {
                          v24 = 1879048191 - v113;
                          if ( 1879048191 - v113 > 0xF )
                          {
                            v24 = (unsigned int)(2 * v113);
                            if ( (unsigned int)v24 <= 0xFFFFFFF8 )
                            {
                              if ( 1879047679 - v113 <= 0xB )
                              {
                                v24 = 1879047742;
                                v113 = 1879047742 - v113;
                              }
                              else
                              {
                                v24 = 1879047935;
                                if ( 1879047935 - v113 > 0xA )
                                  goto LABEL_111;
                                v24 = 1879048010;
                                v113 = 1879048010 - v113;
                              }
                            }
                            else
                            {
                              v113 = (unsigned int)(59 - ((int)v24 >> 1));
                            }
                          }
                          else
                          {
                            v113 = 1879048235 - v113;
                          }
                        }
                        else
                        {
                          v113 -= 1879048154LL;
                        }
                      }
                      *(_QWORD *)(v62 + 8 * v113) = v112;
LABEL_111:
                      v114 = *(_QWORD *)(v112 + 16);
                      v112 += 16;
                      v113 = v114;
                    }
                    while ( v114 );
                  }
                  if ( !v69 || (*((_BYTE *)v25 + 870) & 0x20) != 0 )
                  {
                    v123 = v25[28];
                    if ( v123 )
                      goto LABEL_136;
                    goto LABEL_137;
                  }
                  v115 = v25[12];
                  if ( v115 )
                    *(_QWORD *)(v115 + 8) += v69;
                  v116 = v25[11];
                  if ( v116 )
                    *(_QWORD *)(v116 + 8) += v69;
                  v117 = v25[13];
                  if ( v117 )
                    *(_QWORD *)(v117 + 8) += v69;
                  v118 = v25[14];
                  if ( v118 )
                    *(_QWORD *)(v118 + 8) += v69;
                  v119 = v25[44];
                  if ( v119 )
                    *(_QWORD *)(v119 + 8) += v69;
                  v120 = v25[31];
                  if ( v120 )
                    *(_QWORD *)(v120 + 8) += v69;
                  v121 = v25[67];
                  if ( v121 )
                    *(_QWORD *)(v121 + 8) += v69;
                  v122 = v25[93];
                  if ( v122 )
                    *(_QWORD *)(v122 + 8) += v69;
                  v62 = v25[15];
                  v123 = v25[28];
                  if ( v62 )
                  {
                    v124 = *(_QWORD *)(v62 + 8);
                    if ( v124 )
                      *(_QWORD *)(v62 + 8) = v69 + v124;
                    if ( !v123 )
                    {
LABEL_138:
                      if ( *(_QWORD *)(v25[17] + 8) != 24 )
                        _libc_assert_fail(
                          "info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))",
                          (__int64)"get-dynamic-info.h",
                          0x7Bu,
                          (__int64)"elf_get_dynamic_info");
                      goto LABEL_139;
                    }
LABEL_136:
                    if ( *(_QWORD *)(v123 + 8) != 7 )
                      _libc_assert_fail(
                        "info[DT_PLTREL]->d_un.d_val == DT_RELA",
                        (__int64)"get-dynamic-info.h",
                        0x73u,
                        (__int64)"elf_get_dynamic_info");
LABEL_137:
                    if ( v25[15] )
                      goto LABEL_138;
LABEL_139:
                    v119 = v25[44];
                  }
                  else if ( v123 )
                  {
                    goto LABEL_136;
                  }
                  if ( v119 && *(_QWORD *)(v25[45] + 8) != 8 )
                    _libc_assert_fail(
                      "info[DT_RELRENT]->d_un.d_val == sizeof (ElfW(Relr))",
                      (__int64)"get-dynamic-info.h",
                      0x82u,
                      (__int64)"elf_get_dynamic_info");
                  v125 = v25[38];
                  if ( v125 )
                  {
                    v126 = *(_QWORD *)(v125 + 8);
                    *((_DWORD *)v25 + 266) = v126;
                    if ( (v126 & 2) != 0 )
                      v25[24] = v125;
                    if ( (v126 & 4) != 0 )
                      v25[30] = v125;
                    if ( (v126 & 8) != 0 )
                      v25[32] = v125;
                  }
                  v127 = v25[56];
                  if ( v127 )
                  {
                    v128 = *(_QWORD *)(v127 + 8);
                    *((_DWORD *)v25 + 265) = v128;
                    v69 = (unsigned int)v128;
                    if ( (v128 & 8) != 0 )
                      *((_BYTE *)v25 + 872) = 1;
                    if ( (*v181 & 0x40) != 0 && (v128 & 0xF7FFF716) != 0 )
                    {
                      v180 = (size_t *)v26;
                      LODWORD(v183) = v39;
                      dl_debug_printf(
                        "\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n",
                        v128 & 0xF7FFF716);
                      v69 = *((unsigned int *)v25 + 265);
                      v26 = (__int64)v180;
                      v129 = v69;
                      v39 = (int)v183;
                      if ( (v69 & 1) != 0 )
LABEL_203:
                        v25[32] = v25[56];
                    }
                    else
                    {
                      v129 = *((_DWORD *)v25 + 265);
                      if ( (v69 & 1) != 0 )
                        goto LABEL_203;
                    }
                  }
                  else
                  {
                    v129 = *((_DWORD *)v25 + 265);
                  }
                  v112 = v25[37];
                  if ( v112 )
                    v25[23] = 0;
                }
                else
                {
                  v129 = *((_DWORD *)v25 + 265);
                }
                v132 = (v129 & 0x40) == 0;
                v130 = v129 & 0x8000000;
                if ( !v132 && a7 < 0 )
                {
                  if ( !v130 )
                  {
                    if ( a2 != -1 )
                      _close_nocancel(a2);
                    v80 = "shared object cannot be dlopen()ed";
                    goto LABEL_94;
                  }
                }
                else
                {
                  if ( v130 )
                    v132 = v184 == 0;
                  else
                    v132 = 0;
                  if ( !v132 )
                  {
                    v133 = v25[94];
                    if ( v133 )
                    {
                      v25[94] = v133 + *v25;
                    }
                    else
                    {
                      v158 = *(unsigned __int16 *)(v26 + 56);
                      stacks_executable = v39;
                      v159 = malloc(
                               56LL * v158,
                               a9,
                               a10,
                               a11,
                               a12,
                               a13,
                               a14,
                               a15,
                               a16,
                               v112,
                               v69,
                               v62,
                               (void *)v35,
                               (void *)v24,
                               (void *)v26);
                      if ( !v159 )
                      {
                        stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
                        if ( a2 != -1 )
                          _close_nocancel(a2);
                        v80 = "cannot allocate memory for program header";
                        goto LABEL_94;
                      }
                      v25[94] = j_memcpy(v159);
                      *((_WORD *)v25 + 434) |= 0x1000u;
                      v39 = stacks_executable;
                    }
                    if ( (v39 & ~dl_stack_flags & 1) != 0 )
                    {
                      _stack_prot |= 7u;
                      stacks_executable = dl_make_stacks_executable(v182);
                      if ( stacks_executable )
                      {
                        if ( a2 != -1 )
                          _close_nocancel(a2);
                        v80 = "cannot enable executable stack as shared object requires";
                        goto LABEL_94;
                      }
                    }
                    v134 = v25[141];
                    if ( v134 )
                      v25[141] = v134 + *v25;
                    v135 = (_QWORD *)v25[94];
                    for ( j = &v135[7 * *((unsigned __int16 *)v25 + 384)]; j != v135; v135 = (_QWORD *)v25[94] )
                    {
                      while ( 1 )
                      {
                        v137 = *((_DWORD *)j - 14);
                        j -= 7;
                        if ( v137 == 1685382483 )
                          break;
                        if ( j == v135 )
                          goto LABEL_174;
                      }
                      dl_process_pt_gnu_property(v25, a2, j);
                    }
LABEL_174:
                    if ( (unsigned int)_close_nocancel(a2) )
                    {
                      stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
                      if ( a2 != -1 )
                        _close_nocancel(a2);
                      v80 = "cannot close file descriptor";
                      goto LABEL_94;
                    }
                    if ( v186 == 2 && (*((_WORD *)v25 + 434) & 3LL) != 0 )
                      _libc_assert_fail(
                        "type != ET_EXEC || l->l_type == lt_executable",
                        (__int64)"dl-load.c",
                        0x571u,
                        (__int64)"_dl_map_object_from_fd");
                    v138 = *v25;
                    v139 = *v181;
                    v140 = *v25 + v25[95];
                    v25[95] = v140;
                    if ( (v139 & 0x40) != 0 )
                      dl_debug_printf(
                        "  dynamic: 0x%0*lx  base: 0x%0*lx   size: 0x%0*zx\n"
                        "    entry: 0x%0*lx  phdr: 0x%0*lx  phnum:   %*u\n"
                        "\n",
                        16,
                        v25[2],
                        16,
                        v138,
                        16,
                        v58,
                        16,
                        v140,
                        16,
                        v25[94],
                        16,
                        *((unsigned __int16 *)v25 + 384));
                    dl_setup_hash(v25);
                    if ( (a7 & 8) == 0 )
                    {
                      if ( v25[24] )
                      {
                        v160 = (__int64 **)v25[122];
                        if ( *v160 != v25 + 97 )
                        {
                          v161 = v25[121];
                          *(_QWORD *)v25[99] = v25;
                          *((_DWORD *)v25 + 200) = 1;
                          j_memmove(v160 + 1, v160, 8 * (v161 - 1));
                          *(_QWORD *)v25[122] = v25 + 99;
                        }
                      }
                    }
                    if ( (*((_DWORD *)v25 + 265) & 0x20) != 0 )
                      dl_initfirst = (__int64)v25;
                    v141 = v189;
                    v25[125] = v188;
                    v25[126] = v141;
                    if ( !(&dl_ns)[21 * a17 + 4] )
                    {
                      v146 = v25[22];
                      if ( v146 )
                      {
                        v147 = 0;
                        if ( (*((_BYTE *)v25 + 870) & 0x20) != 0 )
                          v147 = *v25;
                        if ( !(unsigned int)strcmp(
                                              (unsigned __int64 *)(*(_QWORD *)(v146 + 8)
                                                                 + *(_QWORD *)(v25[13] + 8)
                                                                 + v147),
                                              (unsigned __int64)"libc.so.6") )
                          (&dl_ns)[21 * a17 + 4] = v25;
                      }
                    }
                    if ( v25[143] && ((*((_WORD *)v25 + 434) & 3) == 1 || dl_tls_dtv_slotinfo_list) )
                      dl_assign_tls_modid((__int64)v25);
                    dl_add_to_namespace_list(v25, a17);
                    if ( (a7 & 0x40000000) == 0 )
                    {
                      v142 = dl_debug_update(a17);
                      v143 = v142[6];
                      if ( v143 )
                      {
                        if ( v143 != 1 )
                          _libc_assert_fail(
                            "r->r_state == RT_ADD",
                            (__int64)"dl-load.c",
                            0x5E6u,
                            (__int64)"_dl_map_object_from_fd");
                      }
                      else
                      {
                        v142[6] = 1;
                        dl_debug_state();
                      }
                    }
                    return v25;
                  }
                }
                if ( a2 != -1 )
                  _close_nocancel(a2);
                v80 = "cannot dynamically load position-independent executable";
                goto LABEL_94;
              }
LABEL_202:
              v80 = "object file has no dynamic section";
              goto LABEL_92;
            }
            if ( !v184 )
            {
              v80 = "cannot dynamically load executable";
              goto LABEL_92;
            }
            if ( v25[2] )
            {
              v80 = "object file has no dynamic section";
              if ( v38 )
                goto LABEL_92;
            }
            else if ( v38 )
            {
              goto LABEL_202;
            }
            v148 = v164;
            v62 = *((_BYTE *)v25 + 870) & 0xF7 | (8 * (((unsigned __int8)v40 ^ 1) & 1u));
            v67 = &v164;
            v69 = *(&v166 + 7 * v44 - 7);
            *((_BYTE *)v25 + 870) = v62;
            v58 = v69 - (_QWORD)v148;
            v149 = *v25 + v69;
            v25[115] = (__int64)v148 + *v25;
            v25[116] = v149;
            goto LABEL_54;
          }
LABEL_214:
          v80 = "object file has no loadable segments";
          goto LABEL_92;
        }
      }
      else
      {
LABEL_26:
        v36 += 7;
        if ( (unsigned __int64)v36 >= v35 )
          goto LABEL_32;
      }
    }
    switch ( v53 )
    {
      case 2u:
        if ( v36[4] )
        {
          v24 = v36[2];
          v86 = *((_BYTE *)v25 + 870) & 0xDF | (32 * (((*((unsigned int *)v36 + 1) ^ 2uLL) >> 1) & 1));
          v87 = (unsigned __int64)v36[5] >> 4;
          v25[2] = v24;
          *((_WORD *)v25 + 385) = v87;
          *((_BYTE *)v25 + 870) = v86;
        }
        else
        {
          v38 = 1;
        }
        break;
      case 6u:
        v25[94] = v36[2];
        break;
      case 1u:
        v46 = v36[1];
        v45 = v36[2];
        if ( ((v45 - v46) & v41) != 0 )
        {
          v80 = "ELF load command address/offset not page-aligned";
          goto LABEL_92;
        }
        v47 = v36[4];
        v48 = v36[5];
        v49 = v36[6];
        v50 = &v164 + 7 * v44;
        *v50 = (void *)(v45 & v42);
        v51 = (void *)(v45 + v47);
        v50[3] = (void *)(v48 + v45);
        v50[1] = (void *)(((unsigned __int64)v51 + v41) & v42);
        v50[2] = v51;
        v24 = v44 + 1;
        if ( ((v49 - 1) & v49) == 0 && (unsigned __int64)v43 < v49 )
          v43 = (void *)v49;
        *(_QWORD *)&v169[14 * v44 - 2] = v46 & v42;
        if ( v24 > 1 && (void *)(v45 & v42) != *(v50 - 6) )
          v40 = 1;
        v52 = 7 * v44++;
        v169[2 * v52] = (1934713408 >> (4 * (*((_BYTE *)v36 + 4) & 7))) & 0xF;
        break;
    }
    goto LABEL_26;
  }
  if ( (fstat64(a2, (struct stat *)&v190) & 0x80000000) != 0 )
  {
    stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( a2 != -1 )
      _close_nocancel(a2);
    v25 = 0;
    v80 = "cannot stat shared object";
    goto LABEL_102;
  }
  v188 = v190;
  v189 = v191;
  v25 = (&dl_ns)[21 * a17];
  if ( !v25 )
    goto LABEL_4;
  while ( (*((_BYTE *)v25 + 870) & 4) != 0 || v25[125] != v190 || v25[126] != v191 )
  {
    v25 = (__int64 *)v25[3];
    if ( !v25 )
      goto LABEL_4;
  }
  _close_nocancel(a2);
  free(a4, v88, v89, v90, v91, v92, v93, v94, v95);
  add_name_to_object_isra_0((unsigned __int64 *)v25[7], (unsigned __int64 *)a1);
  return v25;
}
