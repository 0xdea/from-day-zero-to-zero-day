// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall dl_map_object_from_fd_constprop_0(
        const char *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v16; // x5
  __int64 *v17; // x19
  __int64 *v18; // x6
  unsigned __int16 v19; // w0
  unsigned __int64 v20; // x1
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x20
  unsigned int v24; // w4
  __int64 v25; // x4
  __int64 *v26; // x1
  unsigned __int64 v27; // x4
  __int64 *v28; // x2
  unsigned __int64 v29; // x10
  int v30; // w28
  int v31; // w9
  int v32; // w7
  __int64 v33; // x17
  __int64 v34; // x15
  unsigned __int64 v35; // x11
  __int64 v36; // x20
  __int64 v37; // x1
  __int64 v38; // x3
  __int64 v39; // x5
  __int64 v40; // x30
  unsigned __int64 v41; // x13
  __int64 *v42; // x8
  __int64 v43; // x5
  __int64 v44; // x0
  unsigned int v45; // w0
  unsigned __int64 *v46; // x1
  __int64 i; // x0
  __int64 v48; // x0
  __int64 v49; // x28
  char *v50; // x27
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x2
  unsigned __int64 v54; // x3
  int v55; // w7
  __int64 v56; // x2
  unsigned __int64 v57; // x1
  int v58; // w0
  unsigned __int64 *v59; // x7
  unsigned __int64 v60; // x0
  unsigned __int64 v61; // x2
  __int64 v62; // x1
  unsigned __int64 v63; // x28
  int v64; // w5
  unsigned __int64 v65; // x0
  unsigned __int64 v66; // x1
  unsigned __int64 v67; // x1
  unsigned __int64 v68; // x5
  __int64 v69; // x2
  unsigned __int64 v70; // x0
  __int64 v71; // x0
  const char *v72; // x27
  __int64 v73; // x0
  char v74; // w1
  __int64 v75; // x0
  int v76; // w1
  __int64 v77; // x0
  int v78; // w3
  unsigned __int64 v79; // x0
  unsigned __int64 v81; // x0
  unsigned __int64 v82; // x2
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  unsigned __int64 v89; // x0
  unsigned __int64 v90; // t1
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x1
  __int64 v103; // x0
  __int64 v104; // x0
  int v105; // w0
  int v106; // w0
  bool v108; // zf
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // x3
  __int64 j; // x20
  int v113; // t1
  __int64 v114; // x4
  int v115; // w1
  __int64 v116; // x0
  __int64 v117; // x3
  __int64 v118; // x20
  int v119; // w0
  __int64 v120; // x2
  __int64 v121; // x0
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x0
  char *v125; // x1
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x10
  __int64 v129; // x0
  __int64 v130; // x0
  unsigned __int64 v131; // x10
  __int64 v132; // x0
  __int64 v133; // x1
  unsigned int v134; // w20
  __int64 v135; // x0
  __int64 **v136; // x1
  __int64 v137; // x2
  __int64 v138; // x0
  __int64 v139; // [xsp+0h] [xbp-10030h] BYREF
  __int64 v140; // [xsp+30h] [xbp-10000h] BYREF
  unsigned __int64 v141; // [xsp+38h] [xbp-FFF8h]
  __int64 v142; // [xsp+48h] [xbp-FFE8h]
  unsigned __int64 v143; // [xsp+50h] [xbp-FFE0h] BYREF
  __int64 v144; // [xsp+58h] [xbp-FFD8h]
  unsigned int v145[232]; // [xsp+60h] [xbp-FFD0h]
  __int64 v146; // [xsp+400h] [xbp-FC30h]
  _QWORD v147[6]; // [xsp+10000h] [xbp-30h] BYREF
  __int64 v148; // [xsp+10030h] [xbp+0h] BYREF
  unsigned __int64 v149; // [xsp+10090h] [xbp+60h]
  __int64 *v150; // [xsp+10098h] [xbp+68h]
  unsigned __int64 v151; // [xsp+100A0h] [xbp+70h]
  unsigned __int64 v152; // [xsp+100A8h] [xbp+78h]
  unsigned __int64 *v153; // [xsp+100B0h] [xbp+80h]
  unsigned __int64 v154; // [xsp+100B8h] [xbp+88h]
  unsigned __int64 *v155; // [xsp+100C0h] [xbp+90h]
  __int64 *v156; // [xsp+100C8h] [xbp+98h]
  int *v157; // [xsp+100D0h] [xbp+A0h]
  __int64 v158; // [xsp+100D8h] [xbp+A8h]
  __int64 *v159; // [xsp+100E0h] [xbp+B0h]
  int v160; // [xsp+100ECh] [xbp+BCh]
  __int64 *v161; // [xsp+100F0h] [xbp+C0h]
  int v162; // [xsp+100F8h] [xbp+C8h]
  int stacks_executable; // [xsp+100FCh] [xbp+CCh]
  __int64 v164; // [xsp+10100h] [xbp+D0h]
  __int64 v165; // [xsp+10108h] [xbp+D8h]
  __int64 v166; // [xsp+10110h] [xbp+E0h] BYREF
  __int64 v167; // [xsp+10118h] [xbp+E8h]

  v158 = a8;
  v160 = a7 & 0x20000000;
  if ( (a7 & 0x20000000) != 0 )
  {
    if ( a9 )
      _libc_assert_fail("nsid == LM_ID_BASE", (__int64)"dl-load.c", 0x3C1u, (__int64)"_dl_map_object_from_fd");
    v164 = 0;
    v165 = 0;
LABEL_4:
    stacks_executable = a7 & 4;
    if ( (a7 & 4) != 0 )
    {
      free(a4);
      v17 = 0;
      _close_nocancel(a2);
      return v17;
    }
    v157 = &dl_debug_mask;
    if ( (dl_debug_mask & 0x40) != 0 )
      dl_debug_printf("file=%s [%lu];  generating link map\n", a1, a9);
    v17 = (__int64 *)dl_new_object(a4, a1, a6, a5, a7, a9);
    if ( !v17 )
    {
      stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      if ( a2 != -1 )
        _close_nocancel(a2);
      v72 = "cannot create shared object descriptor";
      goto LABEL_102;
    }
    v18 = (__int64 *)(a3 + 8);
    v19 = *(_WORD *)(a3 + 64);
    v20 = *(_QWORD *)a3;
    v22 = *(_QWORD *)(a3 + 32);
    v21 = *(_QWORD *)(a3 + 40);
    v23 = 56LL * v19;
    v162 = *((unsigned __int16 *)v18 + 8);
    v17[95] = v22;
    *((_WORD *)v17 + 384) = v19;
    if ( v23 + v21 > v20 )
    {
      while ( v147 != (_QWORD *)((char *)v147 - (((_DWORD)v23 + 15) & 0x7F0000)) )
        v146 = 0;
      v147[0] = 0;
      if ( (((_WORD)v23 + 15) & 0xFFF0u) >= 0x400uLL )
        STACK[0x10400] = 0;
      v159 = v18;
      v161 = &v148;
      v83 = _pread64_nocancel(a2, &v148, v23, v21);
      v18 = v159;
      if ( v83 != v23 )
      {
        stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
        if ( a2 != -1 )
          _close_nocancel(a2);
        v72 = "cannot read file data";
        goto LABEL_94;
      }
    }
    else
    {
      v161 = (__int64 *)((char *)v18 + v21);
    }
    v24 = *((unsigned __int16 *)v17 + 384);
    v159 = v147;
    v25 = 7LL * v24;
    v26 = (_QWORD *)((char *)v147 - (((_DWORD)(v25 * 8) + 15) & 0x7F0000));
    if ( v147 != v26 )
    {
      do
        v146 = 0;
      while ( &v139 != v26 );
    }
    v139 = 0;
    if ( (((_WORD)(v25 * 8) + 15) & 0xFFF0u) >= 0x400uLL )
    {
      v146 = 0;
      v27 = (unsigned __int64)&v161[v25];
      if ( (unsigned __int64)v161 >= v27 )
        goto LABEL_214;
    }
    else
    {
      v27 = (unsigned __int64)&v161[v25];
      if ( (unsigned __int64)v161 >= v27 )
        goto LABEL_214;
    }
    v28 = v161;
    v29 = dl_pagesize;
    v30 = 0;
    v31 = 6;
    v32 = 0;
    v33 = dl_pagesize - 1;
    v34 = -dl_pagesize;
    v35 = 0;
    v36 = 0;
    v156 = &dl_pagesize;
    while ( 1 )
    {
      v45 = *(_DWORD *)v28;
      if ( *(_DWORD *)v28 == 7 )
      {
        v73 = v28[5];
        if ( v73 )
        {
          v17[143] = v73;
          v74 = *((_WORD *)v17 + 434);
          v75 = v28[6];
          v17[144] = v75;
          v76 = v74 & 3;
          v16 = v28[2];
          if ( v75 )
            v75 = (v75 - 1) & v16;
          v17[145] = v75;
          v77 = v28[4];
          v17[141] = v16;
          v17[142] = v77;
          if ( v76 != 1 && !dl_tls_dtv_slotinfo_list )
            _libc_assert_fail(
              "false && \"TLS not initialized in static application\"",
              (__int64)"dl-load.c",
              0x4B3u,
              (__int64)"_dl_map_object_from_fd");
        }
        goto LABEL_26;
      }
      if ( v45 <= 7 )
        break;
      if ( v45 == 1685382481 )
      {
        v31 = *((_DWORD *)v28 + 1);
        goto LABEL_26;
      }
      if ( v45 == 1685382482 )
      {
        v17[149] = v28[2];
        v28 += 7;
        v17[150] = *(v28 - 2);
        if ( (unsigned __int64)v28 >= v27 )
        {
LABEL_32:
          if ( v36 )
          {
            v46 = &v143;
            for ( i = 0; i != v36; ++i )
            {
              *v46 = v35;
              v46 += 7;
            }
            if ( v162 == 3 )
            {
              if ( v17[2] && !v30 )
              {
                v48 = i - 1;
                v49 = v140;
                v50 = (char *)(*(&v142 + 7 * v48) - v140);
                if ( v29 >= v143 )
                {
                  v51 = *(&v142 + 7 * v48) - v140;
                  v153 = (unsigned __int64 *)v18;
                  LODWORD(v154) = v31;
                  LODWORD(v155) = v32;
                  v52 = mmap64(v140, v51, v145[0], 2050, a2, v144);
                  v17[115] = v52;
                  v53 = v52;
                  if ( v52 != -1 )
                  {
                    v18 = (__int64 *)v153;
                    v54 = (unsigned __int64)&v50[v52];
                    v31 = v154;
                    LOBYTE(v55) = (_BYTE)v155;
                    goto LABEL_41;
                  }
LABEL_57:
                  v72 = "failed to map segment from shared object";
LABEL_206:
                  v17[115] = 0;
                  v17[116] = 0;
LABEL_92:
                  if ( a2 != -1 )
                    _close_nocancel(a2);
LABEL_94:
                  v84 = v17[115];
                  if ( v84 )
                    munmap(v84, v17[116] - v84);
                  v85 = v17[114];
                  if ( v85 != -1 )
                    free(v85);
                  v86 = v17[7];
                  if ( !*(_DWORD *)(v86 + 16) )
                    free(v86);
                  if ( (*((_WORD *)v17 + 434) & 0x1000) != 0 )
                    free(v17[94]);
LABEL_102:
                  free(v17);
                  free(a4);
                  dl_signal_error(stacks_executable, a1, 0, v72);
                }
                v126 = (__int64)&v50[v143];
                if ( v143 > (unsigned __int64)v50 )
                  v126 = 2 * v143;
                v151 = (unsigned __int64)v18;
                LODWORD(v152) = v31;
                LODWORD(v153) = v32;
                v154 = v143;
                v155 = (unsigned __int64 *)v126;
                v127 = mmap64(v140, v126, 0, 2082, 0xFFFFFFFFLL, 0);
                v128 = v127;
                if ( v127 == -1 )
                  goto LABEL_57;
                v129 = (v154 - 1 + v127) & -(__int64)v154;
                v154 = v128;
                v130 = mmap64(v129, v50, v145[0], 2066, a2, v144);
                v53 = v130;
                v18 = (__int64 *)v151;
                v54 = (unsigned __int64)&v50[v130];
                v131 = v154;
                v31 = v152;
                v55 = (int)v153;
                if ( v130 == -1 )
                {
                  munmap(v154, v155);
                  goto LABEL_57;
                }
                if ( v130 != v154 )
                {
                  v149 = (unsigned __int64)&v50[v130];
                  v150 = (__int64 *)v151;
                  LODWORD(v151) = v152;
                  LODWORD(v152) = (_DWORD)v153;
                  v153 = (unsigned __int64 *)v130;
                  munmap(v154, v130 - v154);
                  v31 = v151;
                  v54 = v149;
                  v18 = v150;
                  v53 = (__int64)v153;
                  v131 = v154;
                  v55 = v152;
                }
                v27 = (unsigned __int64)v155 + v131;
                v132 = (*v156 - 1 + v54) & -*v156;
                v133 = (__int64)v155 + v131 - v132;
                if ( (unsigned __int64 *)((char *)v155 + v131) == (unsigned __int64 *)v132 )
                {
                  v17[115] = v53;
                }
                else
                {
                  v151 = v54;
                  v152 = (unsigned __int64)v18;
                  LODWORD(v153) = v31;
                  LODWORD(v154) = v55;
                  v155 = (unsigned __int64 *)v53;
                  munmap(v132, v133);
                  v53 = (__int64)v155;
                  v17[115] = (__int64)v155;
                  v54 = v151;
                  v18 = (__int64 *)v152;
                  v31 = (int)v153;
                  LOBYTE(v55) = v154;
                }
LABEL_41:
                v56 = v53 - v49;
                *v17 = v56;
                v17[116] = v54;
                if ( (v55 & 1) != 0 )
                {
                  v154 = (unsigned __int64)v18;
                  LODWORD(v155) = v31;
                  v57 = *(&v140 + 7 * v36 - 7);
                  if ( v57 < v141 )
                  {
                    v72 = "ELF load command address/offset not page-aligned";
                    goto LABEL_206;
                  }
                  v58 = mprotect(v56 + v141, v57 - v141, 0);
                  v18 = (__int64 *)v154;
                  v31 = (int)v155;
                  if ( v58 < 0 )
                  {
LABEL_210:
                    v72 = "cannot change memory protections";
                    goto LABEL_206;
                  }
                }
                v59 = (unsigned __int64 *)&v140;
                *((_BYTE *)v17 + 870) |= 8u;
                while ( 1 )
                {
                  if ( !v17[94] )
                  {
                    v81 = v18[4];
                    v82 = v59[5];
                    if ( v82 <= v81 )
                    {
                      v27 = *v59;
                      v16 = *((unsigned __int16 *)v18 + 28);
                      v54 = v81 + 56 * v16;
                      if ( v82 + v59[1] - *v59 >= v54 )
                        v17[94] = v81 + v27 - v82;
                    }
                  }
                  v61 = v59[2];
                  v60 = v59[3];
                  if ( v60 > v61 )
                  {
                    v62 = *v156;
                    v27 = v61 + *v17;
                    v54 = v60 + *v17;
                    v63 = (v62 - 1 + v27) & -v62;
                    if ( v63 > v54 )
                      v63 = v60 + *v17;
                    if ( v27 < v63 )
                    {
                      v64 = *((_DWORD *)v59 + 12);
                      if ( (v64 & 2) != 0 )
                      {
                        v152 = (unsigned __int64)v18;
                        LODWORD(v153) = v31;
                        v154 = v54;
                        v155 = v59;
                        memset(v27, 0, v63 - v27);
                        v31 = (int)v153;
                        v54 = v154;
                        v59 = v155;
                        v18 = (__int64 *)v152;
                      }
                      else
                      {
                        v150 = v18;
                        LODWORD(v151) = v31;
                        v152 = v54;
                        v153 = v59;
                        v154 = v27;
                        LODWORD(v155) = v64;
                        if ( (mprotect(v27 & -v62, v62, v64 | 2u) & 0x80000000) != 0 )
                          goto LABEL_210;
                        v138 = memset(v154, 0, v63 - v154);
                        mprotect(-*v156 & v138, *v156, (unsigned int)v155);
                        v18 = v150;
                        v54 = v152;
                        v59 = v153;
                        v31 = v151;
                      }
                    }
                    if ( v54 > v63 )
                    {
                      v120 = *((unsigned int *)v59 + 12);
                      v153 = (unsigned __int64 *)v18;
                      LODWORD(v154) = v31;
                      v155 = v59;
                      v121 = mmap64(v63, v54 - v63, v120, 50, 0xFFFFFFFFLL, 0);
                      v18 = (__int64 *)v153;
                      v59 = v155;
                      v31 = v154;
                      if ( v121 == -1 )
                      {
                        v72 = "cannot map zero-fill pages";
                        goto LABEL_206;
                      }
                    }
                  }
                  v59 += 7;
LABEL_54:
                  if ( v59 >= (unsigned __int64 *)&v140 + 7 * v36 )
                    break;
                  v65 = *v59;
                  v66 = v59[1];
                  if ( v66 > *v59 )
                  {
                    v67 = v66 - v65;
                    v68 = v59[5];
                    v69 = *((unsigned int *)v59 + 12);
                    v70 = v65 + *v17;
                    v153 = (unsigned __int64 *)v18;
                    LODWORD(v154) = v31;
                    v155 = v59;
                    v71 = mmap64(v70, v67, v69, 2066, a2, v68);
                    v18 = (__int64 *)v153;
                    v59 = v155;
                    v31 = v154;
                    if ( v71 == -1 )
                      goto LABEL_57;
                  }
                }
                v87 = v17[2];
                v88 = (__int64)v159;
                if ( v87 && (v61 = *v17, v88 = v87 + *v17, (v17[2] = v88) != 0) )
                {
                  v89 = *(_QWORD *)(v87 + v61);
                  v54 = (unsigned __int64)(v17 + 8);
                  if ( v89 )
                  {
                    v27 = -1879048192;
                    do
                    {
                      if ( v89 > 0x25 )
                      {
                        v16 = v89 - 1879048192;
                        if ( v89 - 1879048192 > 5 )
                        {
                          v16 = 1879048191 - v89;
                          if ( 1879048191 - v89 > 0xF )
                          {
                            v16 = (unsigned int)(2 * v89);
                            if ( (unsigned int)v16 <= 0xFFFFFFF8 )
                            {
                              if ( 1879047679 - v89 <= 0xB )
                              {
                                v16 = 1879047742;
                                v89 = 1879047742 - v89;
                              }
                              else
                              {
                                v16 = 1879047935;
                                if ( 1879047935 - v89 > 0xA )
                                  goto LABEL_111;
                                v16 = 1879048010;
                                v89 = 1879048010 - v89;
                              }
                            }
                            else
                            {
                              v89 = (unsigned int)(59 - ((int)v16 >> 1));
                            }
                          }
                          else
                          {
                            v89 = 1879048235 - v89;
                          }
                        }
                        else
                        {
                          v89 -= 1879048154LL;
                        }
                      }
                      *(_QWORD *)(v54 + 8 * v89) = v88;
LABEL_111:
                      v90 = *(_QWORD *)(v88 + 16);
                      v88 += 16;
                      v89 = v90;
                    }
                    while ( v90 );
                  }
                  if ( !v61 || (*((_BYTE *)v17 + 870) & 0x20) != 0 )
                  {
                    v99 = v17[28];
                    if ( v99 )
                      goto LABEL_136;
                    goto LABEL_137;
                  }
                  v91 = v17[12];
                  if ( v91 )
                    *(_QWORD *)(v91 + 8) += v61;
                  v92 = v17[11];
                  if ( v92 )
                    *(_QWORD *)(v92 + 8) += v61;
                  v93 = v17[13];
                  if ( v93 )
                    *(_QWORD *)(v93 + 8) += v61;
                  v94 = v17[14];
                  if ( v94 )
                    *(_QWORD *)(v94 + 8) += v61;
                  v95 = v17[44];
                  if ( v95 )
                    *(_QWORD *)(v95 + 8) += v61;
                  v96 = v17[31];
                  if ( v96 )
                    *(_QWORD *)(v96 + 8) += v61;
                  v97 = v17[67];
                  if ( v97 )
                    *(_QWORD *)(v97 + 8) += v61;
                  v98 = v17[93];
                  if ( v98 )
                    *(_QWORD *)(v98 + 8) += v61;
                  v54 = v17[15];
                  v99 = v17[28];
                  if ( v54 )
                  {
                    v100 = *(_QWORD *)(v54 + 8);
                    if ( v100 )
                      *(_QWORD *)(v54 + 8) = v61 + v100;
                    if ( !v99 )
                    {
LABEL_138:
                      if ( *(_QWORD *)(v17[17] + 8) != 24 )
                        _libc_assert_fail(
                          "info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))",
                          (__int64)"get-dynamic-info.h",
                          0x7Bu,
                          (__int64)"elf_get_dynamic_info");
                      goto LABEL_139;
                    }
LABEL_136:
                    if ( *(_QWORD *)(v99 + 8) != 7 )
                      _libc_assert_fail(
                        "info[DT_PLTREL]->d_un.d_val == DT_RELA",
                        (__int64)"get-dynamic-info.h",
                        0x73u,
                        (__int64)"elf_get_dynamic_info");
LABEL_137:
                    if ( v17[15] )
                      goto LABEL_138;
LABEL_139:
                    v95 = v17[44];
                  }
                  else if ( v99 )
                  {
                    goto LABEL_136;
                  }
                  if ( v95 && *(_QWORD *)(v17[45] + 8) != 8 )
                    _libc_assert_fail(
                      "info[DT_RELRENT]->d_un.d_val == sizeof (ElfW(Relr))",
                      (__int64)"get-dynamic-info.h",
                      0x82u,
                      (__int64)"elf_get_dynamic_info");
                  v101 = v17[38];
                  if ( v101 )
                  {
                    v102 = *(_QWORD *)(v101 + 8);
                    *((_DWORD *)v17 + 266) = v102;
                    if ( (v102 & 2) != 0 )
                      v17[24] = v101;
                    if ( (v102 & 4) != 0 )
                      v17[30] = v101;
                    if ( (v102 & 8) != 0 )
                      v17[32] = v101;
                  }
                  v103 = v17[56];
                  if ( v103 )
                  {
                    v104 = *(_QWORD *)(v103 + 8);
                    *((_DWORD *)v17 + 265) = v104;
                    v61 = (unsigned int)v104;
                    if ( (v104 & 8) != 0 )
                      *((_BYTE *)v17 + 872) = 1;
                    if ( (*v157 & 0x40) != 0 && (v104 & 0xF7FFF716) != 0 )
                    {
                      v156 = v18;
                      LODWORD(v159) = v31;
                      dl_debug_printf(
                        "\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n",
                        v104 & 0xF7FFF716);
                      v61 = *((unsigned int *)v17 + 265);
                      v18 = v156;
                      v105 = v61;
                      v31 = (int)v159;
                      if ( (v61 & 1) != 0 )
LABEL_203:
                        v17[32] = v17[56];
                    }
                    else
                    {
                      v105 = *((_DWORD *)v17 + 265);
                      if ( (v61 & 1) != 0 )
                        goto LABEL_203;
                    }
                  }
                  else
                  {
                    v105 = *((_DWORD *)v17 + 265);
                  }
                  v88 = v17[37];
                  if ( v88 )
                    v17[23] = 0;
                }
                else
                {
                  v105 = *((_DWORD *)v17 + 265);
                }
                v108 = (v105 & 0x40) == 0;
                v106 = v105 & 0x8000000;
                if ( !v108 && (a7 & 0x80000000) != 0 )
                {
                  if ( !v106 )
                  {
                    if ( a2 != -1 )
                      _close_nocancel(a2);
                    v72 = "shared object cannot be dlopen()ed";
                    goto LABEL_94;
                  }
                }
                else
                {
                  if ( v106 )
                    v108 = v160 == 0;
                  else
                    v108 = 0;
                  if ( !v108 )
                  {
                    v109 = v17[94];
                    if ( v109 )
                    {
                      v17[94] = v109 + *v17;
                    }
                    else
                    {
                      v134 = *((unsigned __int16 *)v18 + 28);
                      stacks_executable = v31;
                      v135 = malloc(56LL * v134, v88, (__int16 *)v61, v54, v27, v16);
                      if ( !v135 )
                      {
                        stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
                        if ( a2 != -1 )
                          _close_nocancel(a2);
                        v72 = "cannot allocate memory for program header";
                        goto LABEL_94;
                      }
                      v17[94] = j_memcpy(v135);
                      *((_WORD *)v17 + 434) |= 0x1000u;
                      v31 = stacks_executable;
                    }
                    if ( (v31 & ~dl_stack_flags & 1) != 0 )
                    {
                      _stack_prot |= 7u;
                      stacks_executable = dl_make_stacks_executable(v158);
                      if ( stacks_executable )
                      {
                        if ( a2 != -1 )
                          _close_nocancel(a2);
                        v72 = "cannot enable executable stack as shared object requires";
                        goto LABEL_94;
                      }
                    }
                    v110 = v17[141];
                    if ( v110 )
                      v17[141] = v110 + *v17;
                    v111 = v17[94];
                    for ( j = v111 + 56LL * *((unsigned __int16 *)v17 + 384); j != v111; v111 = v17[94] )
                    {
                      while ( 1 )
                      {
                        v113 = *(_DWORD *)(j - 56);
                        j -= 56;
                        if ( v113 == 1685382483 )
                          break;
                        if ( j == v111 )
                          goto LABEL_174;
                      }
                      dl_process_pt_gnu_property(v17, a2, j);
                    }
LABEL_174:
                    if ( (unsigned int)_close_nocancel(a2) )
                    {
                      stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
                      if ( a2 != -1 )
                        _close_nocancel(a2);
                      v72 = "cannot close file descriptor";
                      goto LABEL_94;
                    }
                    if ( v162 == 2 && (*((_WORD *)v17 + 434) & 3LL) != 0 )
                      _libc_assert_fail(
                        "type != ET_EXEC || l->l_type == lt_executable",
                        (__int64)"dl-load.c",
                        0x571u,
                        (__int64)"_dl_map_object_from_fd");
                    v114 = *v17;
                    v115 = *v157;
                    v116 = *v17 + v17[95];
                    v17[95] = v116;
                    if ( (v115 & 0x40) != 0 )
                      dl_debug_printf(
                        "  dynamic: 0x%0*lx  base: 0x%0*lx   size: 0x%0*zx\n"
                        "    entry: 0x%0*lx  phdr: 0x%0*lx  phnum:   %*u\n"
                        "\n",
                        16,
                        v17[2],
                        16,
                        v114,
                        16,
                        (size_t)v50,
                        16,
                        v116,
                        16,
                        v17[94],
                        16,
                        *((unsigned __int16 *)v17 + 384));
                    dl_setup_hash(v17);
                    if ( (a7 & 8) == 0 )
                    {
                      if ( v17[24] )
                      {
                        v136 = (__int64 **)v17[122];
                        if ( *v136 != v17 + 97 )
                        {
                          v137 = v17[121];
                          *(_QWORD *)v17[99] = v17;
                          *((_DWORD *)v17 + 200) = 1;
                          j_memmove(v136 + 1, v136, 8 * (v137 - 1));
                          *(_QWORD *)v17[122] = v17 + 99;
                        }
                      }
                    }
                    if ( (*((_DWORD *)v17 + 265) & 0x20) != 0 )
                      dl_initfirst = (__int64)v17;
                    v117 = v165;
                    v17[125] = v164;
                    v17[126] = v117;
                    if ( !(&dl_ns)[21 * a9 + 4] )
                    {
                      v122 = v17[22];
                      if ( v122 )
                      {
                        v123 = 0;
                        if ( (*((_BYTE *)v17 + 870) & 0x20) != 0 )
                          v123 = *v17;
                        if ( !(unsigned int)strcmp(*(_QWORD *)(v122 + 8) + *(_QWORD *)(v17[13] + 8) + v123, "libc.so.6") )
                          (&dl_ns)[21 * a9 + 4] = v17;
                      }
                    }
                    if ( v17[143] && ((*((_WORD *)v17 + 434) & 3) == 1 || dl_tls_dtv_slotinfo_list) )
                      dl_assign_tls_modid((__int64)v17);
                    dl_add_to_namespace_list(v17, a9);
                    if ( (a7 & 0x40000000) == 0 )
                    {
                      v118 = dl_debug_update(a9);
                      v119 = *(_DWORD *)(v118 + 24);
                      if ( v119 )
                      {
                        if ( v119 != 1 )
                          _libc_assert_fail(
                            "r->r_state == RT_ADD",
                            (__int64)"dl-load.c",
                            0x5E6u,
                            (__int64)"_dl_map_object_from_fd");
                      }
                      else
                      {
                        *(_DWORD *)(v118 + 24) = 1;
                        dl_debug_state(1);
                      }
                    }
                    return v17;
                  }
                }
                if ( a2 != -1 )
                  _close_nocancel(a2);
                v72 = "cannot dynamically load position-independent executable";
                goto LABEL_94;
              }
LABEL_202:
              v72 = "object file has no dynamic section";
              goto LABEL_92;
            }
            if ( !v160 )
            {
              v72 = "cannot dynamically load executable";
              goto LABEL_92;
            }
            if ( v17[2] )
            {
              v72 = "object file has no dynamic section";
              if ( v30 )
                goto LABEL_92;
            }
            else if ( v30 )
            {
              goto LABEL_202;
            }
            v124 = v140;
            v54 = *((_BYTE *)v17 + 870) & 0xF7 | (8 * (((unsigned __int8)v32 ^ 1) & 1u));
            v59 = (unsigned __int64 *)&v140;
            v61 = *(&v142 + 7 * v36 - 7);
            *((_BYTE *)v17 + 870) = v54;
            v50 = (char *)(v61 - v124);
            v125 = (char *)(*v17 + v61);
            v17[115] = *v17 + v124;
            v17[116] = (__int64)v125;
            goto LABEL_54;
          }
LABEL_214:
          v72 = "object file has no loadable segments";
          goto LABEL_92;
        }
      }
      else
      {
LABEL_26:
        v28 += 7;
        if ( (unsigned __int64)v28 >= v27 )
          goto LABEL_32;
      }
    }
    switch ( v45 )
    {
      case 2u:
        if ( v28[4] )
        {
          v16 = v28[2];
          v78 = *((_BYTE *)v17 + 870) & 0xDF | (32 * (((*((unsigned int *)v28 + 1) ^ 2uLL) >> 1) & 1));
          v79 = (unsigned __int64)v28[5] >> 4;
          v17[2] = v16;
          *((_WORD *)v17 + 385) = v79;
          *((_BYTE *)v17 + 870) = v78;
        }
        else
        {
          v30 = 1;
        }
        break;
      case 6u:
        v17[94] = v28[2];
        break;
      case 1u:
        v38 = v28[1];
        v37 = v28[2];
        if ( ((v37 - v38) & v33) != 0 )
        {
          v72 = "ELF load command address/offset not page-aligned";
          goto LABEL_92;
        }
        v39 = v28[4];
        v40 = v28[5];
        v41 = v28[6];
        v42 = &v140 + 7 * v36;
        *v42 = v37 & v34;
        v43 = v37 + v39;
        v42[3] = v40 + v37;
        v42[1] = (v33 + v43) & v34;
        v42[2] = v43;
        v16 = v36 + 1;
        if ( ((v41 - 1) & v41) == 0 && v35 < v41 )
          v35 = v41;
        *(_QWORD *)&v145[14 * v36 - 2] = v38 & v34;
        if ( v16 > 1 && (v37 & v34) != *(v42 - 6) )
          v32 = 1;
        v44 = 7 * v36++;
        v145[2 * v44] = (1934713408 >> (4 * (*((_BYTE *)v28 + 4) & 7))) & 0xF;
        break;
    }
    goto LABEL_26;
  }
  if ( (fstat64(a2, &v166) & 0x80000000) != 0 )
  {
    stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( a2 != -1 )
      _close_nocancel(a2);
    v17 = 0;
    v72 = "cannot stat shared object";
    goto LABEL_102;
  }
  v164 = v166;
  v165 = v167;
  v17 = (&dl_ns)[21 * a9];
  if ( !v17 )
    goto LABEL_4;
  while ( (*((_BYTE *)v17 + 870) & 4) != 0 || v17[125] != v166 || v17[126] != v167 )
  {
    v17 = (__int64 *)v17[3];
    if ( !v17 )
      goto LABEL_4;
  }
  _close_nocancel(a2);
  free(a4);
  add_name_to_object_isra_0((_QWORD *)v17[7], a1);
  return v17;
}
