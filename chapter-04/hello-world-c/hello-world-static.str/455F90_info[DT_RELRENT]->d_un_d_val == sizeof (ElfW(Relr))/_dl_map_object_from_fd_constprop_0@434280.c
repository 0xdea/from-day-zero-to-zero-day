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
  __int64 *i; // x19
  __int64 **v12; // x21
  unsigned __int64 v17; // x5
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
  int v28; // w14
  __int64 *v29; // x2
  unsigned __int64 v30; // x10
  int v31; // w28
  int v32; // w9
  int v33; // w7
  __int64 v34; // x17
  __int64 v35; // x15
  unsigned __int64 v36; // x11
  __int64 v37; // x20
  __int64 v38; // x1
  __int64 v39; // x3
  __int64 v40; // x5
  __int64 v41; // x30
  unsigned __int64 v42; // x13
  __int64 *v43; // x8
  __int64 v44; // x5
  __int64 v45; // x0
  unsigned int v46; // w0
  unsigned __int64 *v47; // x1
  __int64 j; // x0
  __int64 v49; // x0
  __int64 v50; // x28
  char *v51; // x27
  __int64 v52; // x1
  __int64 v53; // x0
  __int64 v54; // x2
  unsigned __int64 v55; // x3
  int v56; // w7
  __int64 v57; // x2
  unsigned __int64 v58; // x1
  int v59; // w0
  unsigned __int64 *v60; // x7
  unsigned __int64 v61; // x0
  unsigned __int64 v62; // x2
  __int64 v63; // x1
  unsigned __int64 v64; // x28
  int v65; // w5
  unsigned __int64 v66; // x0
  unsigned __int64 v67; // x1
  unsigned __int64 v68; // x1
  unsigned __int64 v69; // x5
  __int64 v70; // x2
  unsigned __int64 v71; // x0
  __int64 v72; // x0
  const char *v73; // x27
  __int64 v74; // x0
  char v75; // w1
  __int64 v76; // x0
  int v77; // w1
  __int64 v78; // x0
  int v79; // w3
  unsigned __int64 v80; // x0
  unsigned __int64 v82; // x0
  unsigned __int64 v83; // x2
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x0
  __int64 v89; // x1
  unsigned __int64 v90; // x0
  __int64 v91; // x7
  __int64 v92; // x11
  __int64 v93; // x10
  unsigned __int64 v94; // t1
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x0
  __int64 v108; // x0
  int v109; // w0
  int v110; // w0
  bool v112; // zf
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x3
  __int64 k; // x20
  int v117; // t1
  __int64 v118; // x4
  int v119; // w1
  __int64 v120; // x0
  __int64 v121; // x3
  __int64 v122; // x20
  int v123; // w0
  __int64 v124; // x2
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x0
  char *v129; // x1
  __int64 v130; // x0
  __int64 v131; // x0
  __int64 v132; // x10
  __int64 v133; // x0
  __int64 v134; // x0
  unsigned __int64 v135; // x10
  __int64 v136; // x0
  __int64 v137; // x1
  unsigned int v138; // w20
  __int64 v139; // x0
  __int64 **v140; // x1
  __int64 v141; // x2
  __int64 v142; // x0
  __int64 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x3
  __int64 v147; // x4
  __int64 v148; // x5
  __int64 v149; // [xsp+0h] [xbp-10030h] BYREF
  __int64 v150; // [xsp+30h] [xbp-10000h] BYREF
  unsigned __int64 v151; // [xsp+38h] [xbp-FFF8h]
  __int64 v152; // [xsp+48h] [xbp-FFE8h]
  unsigned __int64 v153; // [xsp+50h] [xbp-FFE0h] BYREF
  __int64 v154; // [xsp+58h] [xbp-FFD8h]
  unsigned int v155[232]; // [xsp+60h] [xbp-FFD0h]
  __int64 v156; // [xsp+400h] [xbp-FC30h]
  _QWORD v157[6]; // [xsp+10000h] [xbp-30h] BYREF
  __int64 v158; // [xsp+10030h] [xbp+0h] BYREF
  unsigned __int64 v159; // [xsp+10090h] [xbp+60h]
  __int64 *v160; // [xsp+10098h] [xbp+68h]
  unsigned __int64 v161; // [xsp+100A0h] [xbp+70h]
  unsigned __int64 v162; // [xsp+100A8h] [xbp+78h]
  unsigned __int64 *v163; // [xsp+100B0h] [xbp+80h]
  unsigned __int64 v164; // [xsp+100B8h] [xbp+88h]
  unsigned __int64 *v165; // [xsp+100C0h] [xbp+90h]
  __int64 *v166; // [xsp+100C8h] [xbp+98h]
  int *v167; // [xsp+100D0h] [xbp+A0h]
  __int64 v168; // [xsp+100D8h] [xbp+A8h]
  __int64 *v169; // [xsp+100E0h] [xbp+B0h]
  int v170; // [xsp+100ECh] [xbp+BCh]
  __int64 *v171; // [xsp+100F0h] [xbp+C0h]
  int v172; // [xsp+100F8h] [xbp+C8h]
  unsigned int stacks_executable; // [xsp+100FCh] [xbp+CCh]
  __int64 v174; // [xsp+10100h] [xbp+D0h]
  __int64 v175; // [xsp+10108h] [xbp+D8h]
  __int64 v176; // [xsp+10110h] [xbp+E0h] BYREF
  __int64 v177; // [xsp+10118h] [xbp+E8h]

  v168 = a8;
  v12 = (__int64 **)a2;
  v170 = a7 & 0x20000000;
  if ( (a7 & 0x20000000) != 0 )
  {
    if ( a9 )
    {
      _libc_assert_fail("nsid == LM_ID_BASE", "dl-load.c", 961, "_dl_map_object_from_fd");
LABEL_268:
      _libc_assert_fail(
        "info[DT_RELRENT]->d_un.d_val == sizeof (ElfW(Relr))",
        "get-dynamic-info.h",
        130,
        "elf_get_dynamic_info");
LABEL_269:
      stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      if ( (_DWORD)v12 != -1 )
        _close_nocancel((unsigned int)v12);
      v73 = "cannot allocate memory for program header";
      goto LABEL_94;
    }
    v174 = 0;
    v175 = 0;
  }
  else
  {
    if ( (fstat64(a2, &v176) & 0x80000000) != 0 )
    {
      stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      if ( (_DWORD)v12 != -1 )
        _close_nocancel((unsigned int)v12);
      i = 0;
      v73 = "cannot stat shared object";
LABEL_102:
      free(i);
      free(a4);
      dl_signal_error(stacks_executable, a1, 0, v73);
    }
    v174 = v176;
    v175 = v177;
    for ( i = (&dl_ns)[21 * a9]; i; i = (__int64 *)i[3] )
    {
      if ( (*((_BYTE *)i + 870) & 4) == 0 && i[125] == v176 && i[126] == v177 )
      {
        _close_nocancel((unsigned int)v12);
        free(a4);
        add_name_to_object_isra_0(i[7], a1);
        return i;
      }
    }
  }
  stacks_executable = a7 & 4;
  if ( (a7 & 4) != 0 )
  {
    free(a4);
    i = 0;
    _close_nocancel((unsigned int)v12);
    return i;
  }
  v167 = &dl_debug_mask;
  if ( (dl_debug_mask & 0x40) != 0 )
    dl_debug_printf("file=%s [%lu];  generating link map\n", a1, a9);
  i = (__int64 *)dl_new_object(a4, a1, a6, a5, a7, a9);
  if ( !i )
  {
    stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( (_DWORD)v12 != -1 )
      _close_nocancel((unsigned int)v12);
    v73 = "cannot create shared object descriptor";
    goto LABEL_102;
  }
  v18 = (__int64 *)(a3 + 8);
  v19 = *(_WORD *)(a3 + 64);
  v20 = *(_QWORD *)a3;
  v22 = *(_QWORD *)(a3 + 32);
  v21 = *(_QWORD *)(a3 + 40);
  v23 = 56LL * v19;
  v172 = *((unsigned __int16 *)v18 + 8);
  i[95] = v22;
  *((_WORD *)i + 384) = v19;
  if ( v23 + v21 > v20 )
  {
    while ( v157 != (_QWORD *)((char *)v157 - (((_DWORD)v23 + 15) & 0x7F0000)) )
      v156 = 0;
    v157[0] = 0;
    if ( (((_WORD)v23 + 15) & 0xFFF0u) >= 0x400uLL )
      STACK[0x10400] = 0;
    v169 = v18;
    v171 = &v158;
    v84 = _pread64_nocancel((unsigned int)v12, &v158, v23, v21);
    v18 = v169;
    if ( v84 != v23 )
    {
      stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      if ( (_DWORD)v12 != -1 )
        _close_nocancel((unsigned int)v12);
      v73 = "cannot read file data";
      goto LABEL_94;
    }
  }
  else
  {
    v171 = (__int64 *)((char *)v18 + v21);
  }
  v24 = *((unsigned __int16 *)i + 384);
  v169 = v157;
  v25 = 7LL * v24;
  v26 = (_QWORD *)((char *)v157 - (((_DWORD)(v25 * 8) + 15) & 0x7F0000));
  if ( v157 != v26 )
  {
    do
      v156 = 0;
    while ( &v149 != v26 );
  }
  v149 = 0;
  if ( (((_WORD)(v25 * 8) + 15) & 0xFFF0u) >= 0x400uLL )
  {
    v156 = 0;
    v27 = (unsigned __int64)&v171[v25];
    if ( (unsigned __int64)v171 >= v27 )
      goto LABEL_214;
  }
  else
  {
    v27 = (unsigned __int64)&v171[v25];
    if ( (unsigned __int64)v171 >= v27 )
    {
LABEL_214:
      v73 = "object file has no loadable segments";
      goto LABEL_92;
    }
  }
  v28 = 1685382481;
  v29 = v171;
  v30 = dl_pagesize;
  v31 = 0;
  v32 = 6;
  v33 = 0;
  v34 = dl_pagesize - 1;
  v35 = -dl_pagesize;
  v36 = 0;
  v37 = 0;
  v166 = &dl_pagesize;
  do
  {
    while ( 1 )
    {
      v46 = *(_DWORD *)v29;
      if ( *(_DWORD *)v29 == 7 )
      {
        v74 = v29[5];
        if ( !v74 )
          goto LABEL_26;
        i[143] = v74;
        v75 = *((_WORD *)i + 434);
        v76 = v29[6];
        i[144] = v76;
        v77 = v75 & 3;
        v17 = v29[2];
        if ( v76 )
          v76 = (v76 - 1) & v17;
        i[145] = v76;
        v78 = v29[4];
        i[141] = v17;
        i[142] = v78;
        if ( v77 == 1 || dl_tls_dtv_slotinfo_list )
          goto LABEL_26;
        _libc_assert_fail(
          "false && \"TLS not initialized in static application\"",
          "dl-load.c",
          1203,
          "_dl_map_object_from_fd");
LABEL_68:
        if ( v29[4] )
        {
          v17 = v29[2];
          v79 = *((_BYTE *)i + 870) & 0xDF | (32 * (((*((unsigned int *)v29 + 1) ^ 2uLL) >> 1) & 1));
          v80 = (unsigned __int64)v29[5] >> 4;
          i[2] = v17;
          *((_WORD *)i + 385) = v80;
          *((_BYTE *)i + 870) = v79;
        }
        else
        {
          v31 = 1;
        }
        goto LABEL_26;
      }
      if ( v46 <= 7 )
      {
        switch ( v46 )
        {
          case 2u:
            goto LABEL_68;
          case 6u:
            i[94] = v29[2];
            break;
          case 1u:
            v39 = v29[1];
            v38 = v29[2];
            if ( ((v38 - v39) & v34) != 0 )
            {
              v73 = "ELF load command address/offset not page-aligned";
              goto LABEL_92;
            }
            v40 = v29[4];
            v41 = v29[5];
            v42 = v29[6];
            v43 = &v150 + 7 * v37;
            *v43 = v38 & v35;
            v44 = v38 + v40;
            v43[3] = v41 + v38;
            v43[1] = (v34 + v44) & v35;
            v43[2] = v44;
            v17 = v37 + 1;
            if ( ((v42 - 1) & v42) == 0 && v36 < v42 )
              v36 = v42;
            *(_QWORD *)&v155[14 * v37 - 2] = v39 & v35;
            if ( v17 > 1 && (v38 & v35) != *(v43 - 6) )
              v33 = 1;
            v45 = 7 * v37++;
            v155[2 * v45] = (1934713408 >> (4 * (*((_BYTE *)v29 + 4) & 7))) & 0xF;
            break;
        }
        goto LABEL_26;
      }
      if ( v46 == v28 )
      {
        v32 = *((_DWORD *)v29 + 1);
        goto LABEL_26;
      }
      if ( v46 == 1685382482 )
        break;
LABEL_26:
      v29 += 7;
      if ( (unsigned __int64)v29 >= v27 )
        goto LABEL_32;
    }
    i[149] = v29[2];
    v29 += 7;
    i[150] = *(v29 - 2);
  }
  while ( (unsigned __int64)v29 < v27 );
LABEL_32:
  if ( !v37 )
    goto LABEL_214;
  v47 = &v153;
  for ( j = 0; j != v37; ++j )
  {
    *v47 = v36;
    v47 += 7;
  }
  if ( v172 != 3 )
  {
    if ( !v170 )
    {
      v73 = "cannot dynamically load executable";
      goto LABEL_92;
    }
    if ( i[2] )
    {
      v73 = "object file has no dynamic section";
      if ( v31 )
        goto LABEL_92;
    }
    else if ( v31 )
    {
LABEL_202:
      v73 = "object file has no dynamic section";
      goto LABEL_92;
    }
    v128 = v150;
    v55 = *((_BYTE *)i + 870) & 0xF7 | (8 * (((unsigned __int8)v33 ^ 1) & 1u));
    v60 = (unsigned __int64 *)&v150;
    v62 = *(&v152 + 7 * v37 - 7);
    *((_BYTE *)i + 870) = v55;
    v51 = (char *)(v62 - v128);
    v129 = (char *)(*i + v62);
    i[115] = *i + v128;
    i[116] = (__int64)v129;
    goto LABEL_54;
  }
  if ( !i[2] || v31 )
    goto LABEL_202;
  v49 = j - 1;
  v50 = v150;
  v51 = (char *)(*(&v152 + 7 * v49) - v150);
  if ( v30 >= v153 )
  {
    v52 = *(&v152 + 7 * v49) - v150;
    v163 = (unsigned __int64 *)v18;
    LODWORD(v164) = v32;
    LODWORD(v165) = v33;
    v53 = mmap64(v150, v52, v155[0], 2050, (unsigned int)v12, v154);
    i[115] = v53;
    v54 = v53;
    if ( v53 != -1 )
    {
      v18 = (__int64 *)v163;
      v55 = (unsigned __int64)&v51[v53];
      v32 = v164;
      LOBYTE(v56) = (_BYTE)v165;
      goto LABEL_41;
    }
LABEL_57:
    v73 = "failed to map segment from shared object";
LABEL_206:
    i[115] = 0;
    i[116] = 0;
LABEL_92:
    if ( (_DWORD)v12 != -1 )
      _close_nocancel((unsigned int)v12);
    goto LABEL_94;
  }
  v130 = (__int64)&v51[v153];
  if ( v153 > (unsigned __int64)v51 )
    v130 = 2 * v153;
  v161 = (unsigned __int64)v18;
  LODWORD(v162) = v32;
  LODWORD(v163) = v33;
  v164 = v153;
  v165 = (unsigned __int64 *)v130;
  v131 = mmap64(v150, v130, 0, 2082, 0xFFFFFFFFLL, 0);
  v132 = v131;
  if ( v131 == -1 )
    goto LABEL_57;
  v133 = (v164 - 1 + v131) & -(__int64)v164;
  v164 = v132;
  v134 = mmap64(v133, v51, v155[0], 2066, (unsigned int)v12, v154);
  v54 = v134;
  v18 = (__int64 *)v161;
  v55 = (unsigned __int64)&v51[v134];
  v135 = v164;
  v32 = v162;
  v56 = (int)v163;
  if ( v134 == -1 )
  {
    munmap(v164, v165);
    goto LABEL_57;
  }
  if ( v134 != v164 )
  {
    v159 = (unsigned __int64)&v51[v134];
    v160 = (__int64 *)v161;
    LODWORD(v161) = v162;
    LODWORD(v162) = (_DWORD)v163;
    v163 = (unsigned __int64 *)v134;
    munmap(v164, v134 - v164);
    v32 = v161;
    v55 = v159;
    v18 = v160;
    v54 = (__int64)v163;
    v135 = v164;
    v56 = v162;
  }
  v27 = (unsigned __int64)v165 + v135;
  v136 = (*v166 - 1 + v55) & -*v166;
  v137 = (__int64)v165 + v135 - v136;
  if ( (unsigned __int64 *)((char *)v165 + v135) == (unsigned __int64 *)v136 )
  {
    i[115] = v54;
  }
  else
  {
    v161 = v55;
    v162 = (unsigned __int64)v18;
    LODWORD(v163) = v32;
    LODWORD(v164) = v56;
    v165 = (unsigned __int64 *)v54;
    munmap(v136, v137);
    v54 = (__int64)v165;
    i[115] = (__int64)v165;
    v55 = v161;
    v18 = (__int64 *)v162;
    v32 = (int)v163;
    LOBYTE(v56) = v164;
  }
LABEL_41:
  v57 = v54 - v50;
  *i = v57;
  i[116] = v55;
  if ( (v56 & 1) != 0 )
  {
    v164 = (unsigned __int64)v18;
    LODWORD(v165) = v32;
    v58 = *(&v150 + 7 * v37 - 7);
    if ( v58 < v151 )
    {
      v73 = "ELF load command address/offset not page-aligned";
      goto LABEL_206;
    }
    v59 = mprotect(v57 + v151, v58 - v151, 0);
    v18 = (__int64 *)v164;
    v32 = (int)v165;
    if ( v59 < 0 )
    {
LABEL_210:
      v73 = "cannot change memory protections";
      goto LABEL_206;
    }
  }
  v60 = (unsigned __int64 *)&v150;
  *((_BYTE *)i + 870) |= 8u;
  while ( 1 )
  {
    if ( !i[94] )
    {
      v82 = v18[4];
      v83 = v60[5];
      if ( v83 <= v82 )
      {
        v27 = *v60;
        v17 = *((unsigned __int16 *)v18 + 28);
        v55 = v82 + 56 * v17;
        if ( v83 + v60[1] - *v60 >= v55 )
          i[94] = v82 + v27 - v83;
      }
    }
    v62 = v60[2];
    v61 = v60[3];
    if ( v61 > v62 )
    {
      v63 = *v166;
      v27 = v62 + *i;
      v55 = v61 + *i;
      v64 = (v63 - 1 + v27) & -v63;
      if ( v64 > v55 )
        v64 = v61 + *i;
      if ( v27 < v64 )
      {
        v65 = *((_DWORD *)v60 + 12);
        if ( (v65 & 2) != 0 )
        {
          v162 = (unsigned __int64)v18;
          LODWORD(v163) = v32;
          v164 = v55;
          v165 = v60;
          memset(v27, 0, v64 - v27);
          v32 = (int)v163;
          v55 = v164;
          v60 = v165;
          v18 = (__int64 *)v162;
        }
        else
        {
          v160 = v18;
          LODWORD(v161) = v32;
          v162 = v55;
          v163 = v60;
          v164 = v27;
          LODWORD(v165) = v65;
          if ( (mprotect(v27 & -v63, v63, v65 | 2u) & 0x80000000) != 0 )
            goto LABEL_210;
          v142 = memset(v164, 0, v64 - v164);
          mprotect(-*v166 & v142, *v166, (unsigned int)v165);
          v18 = v160;
          v55 = v162;
          v60 = v163;
          v32 = v161;
        }
      }
      if ( v55 > v64 )
      {
        v124 = *((unsigned int *)v60 + 12);
        v163 = (unsigned __int64 *)v18;
        LODWORD(v164) = v32;
        v165 = v60;
        v125 = mmap64(v64, v55 - v64, v124, 50, 0xFFFFFFFFLL, 0);
        v18 = (__int64 *)v163;
        v60 = v165;
        v32 = v164;
        if ( v125 == -1 )
        {
          v73 = "cannot map zero-fill pages";
          goto LABEL_206;
        }
      }
    }
    v60 += 7;
LABEL_54:
    if ( v60 >= (unsigned __int64 *)&v150 + 7 * v37 )
      break;
    v66 = *v60;
    v67 = v60[1];
    if ( v67 > *v60 )
    {
      v68 = v67 - v66;
      v69 = v60[5];
      v70 = *((unsigned int *)v60 + 12);
      v71 = v66 + *i;
      v163 = (unsigned __int64 *)v18;
      LODWORD(v164) = v32;
      v165 = v60;
      v72 = mmap64(v71, v68, v70, 2066, (unsigned int)v12, v69);
      v18 = (__int64 *)v163;
      v60 = v165;
      v32 = v164;
      if ( v72 == -1 )
        goto LABEL_57;
    }
  }
  v88 = i[2];
  v89 = (__int64)v169;
  if ( !v88 || (v62 = *i, v89 = v88 + *i, (i[2] = v89) == 0) )
  {
    v109 = *((_DWORD *)i + 265);
    goto LABEL_156;
  }
  v90 = *(_QWORD *)(v88 + v62);
  v55 = (unsigned __int64)(i + 8);
  if ( !v90 )
    goto LABEL_112;
  v91 = 1879048191;
  v27 = -1879048192;
  v92 = 1879048235;
  v93 = -1879048154;
  while ( 2 )
  {
    if ( v90 <= 0x25 )
    {
LABEL_110:
      *(_QWORD *)(v55 + 8 * v90) = v89;
      goto LABEL_111;
    }
    v17 = v90 + v27;
    if ( v90 + v27 <= 5 )
    {
      v90 += v93;
      goto LABEL_110;
    }
LABEL_190:
    v17 = v91 - v90;
    if ( v91 - v90 <= 0xF )
    {
      v90 = v92 - v90;
      goto LABEL_110;
    }
    v17 = (unsigned int)(2 * v90);
    if ( (unsigned int)v17 > 0xFFFFFFF8 )
    {
      v90 = (unsigned int)(59 - ((int)v17 >> 1));
      goto LABEL_110;
    }
    if ( 1879047679 - v90 <= 0xB )
    {
      v17 = 1879047742;
      v90 = 1879047742 - v90;
      goto LABEL_110;
    }
    v17 = 1879047935;
    if ( 1879047935 - v90 <= 0xA )
    {
      v17 = 1879048010;
      v90 = 1879048010 - v90;
      goto LABEL_110;
    }
LABEL_111:
    v94 = *(_QWORD *)(v89 + 16);
    v89 += 16;
    v90 = v94;
    if ( v94 )
      continue;
    break;
  }
LABEL_112:
  if ( !v62 || (*((_BYTE *)i + 870) & 0x20) != 0 )
  {
    v103 = i[28];
    if ( v103 )
      goto LABEL_136;
    goto LABEL_137;
  }
  v95 = i[12];
  if ( v95 )
    *(_QWORD *)(v95 + 8) += v62;
  v96 = i[11];
  if ( v96 )
    *(_QWORD *)(v96 + 8) += v62;
  v97 = i[13];
  if ( v97 )
    *(_QWORD *)(v97 + 8) += v62;
  v98 = i[14];
  if ( v98 )
    *(_QWORD *)(v98 + 8) += v62;
  v99 = i[44];
  if ( v99 )
    *(_QWORD *)(v99 + 8) += v62;
  v100 = i[31];
  if ( v100 )
    *(_QWORD *)(v100 + 8) += v62;
  v101 = i[67];
  if ( v101 )
    *(_QWORD *)(v101 + 8) += v62;
  v102 = i[93];
  if ( v102 )
    *(_QWORD *)(v102 + 8) += v62;
  v55 = i[15];
  v103 = i[28];
  if ( v55 )
  {
    v104 = *(_QWORD *)(v55 + 8);
    if ( v104 )
      *(_QWORD *)(v55 + 8) = v62 + v104;
    if ( !v103 )
      goto LABEL_138;
LABEL_136:
    if ( *(_QWORD *)(v103 + 8) != 7 )
      goto LABEL_273;
LABEL_137:
    if ( i[15] )
    {
LABEL_138:
      if ( *(_QWORD *)(i[17] + 8) != 24 )
      {
        _libc_assert_fail(
          "info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))",
          "get-dynamic-info.h",
          123,
          "elf_get_dynamic_info");
LABEL_273:
        v143 = _libc_assert_fail(
                 "info[DT_PLTREL]->d_un.d_val == DT_RELA",
                 "get-dynamic-info.h",
                 115,
                 "elf_get_dynamic_info");
        return (__int64 *)dl_map_object(v143, v144, v145, v146, v147, v148);
      }
    }
    v99 = i[44];
  }
  else if ( v103 )
  {
    goto LABEL_136;
  }
  if ( v99 && *(_QWORD *)(i[45] + 8) != 8 )
    goto LABEL_268;
  v105 = i[38];
  if ( v105 )
  {
    v106 = *(_QWORD *)(v105 + 8);
    *((_DWORD *)i + 266) = v106;
    if ( (v106 & 2) != 0 )
      i[24] = v105;
    if ( (v106 & 4) != 0 )
      i[30] = v105;
    if ( (v106 & 8) != 0 )
      i[32] = v105;
  }
  v107 = i[56];
  if ( v107 )
  {
    v108 = *(_QWORD *)(v107 + 8);
    *((_DWORD *)i + 265) = v108;
    v62 = (unsigned int)v108;
    if ( (v108 & 8) != 0 )
      *((_BYTE *)i + 872) = 1;
    if ( (*v167 & 0x40) != 0 && (v108 & 0xF7FFF716) != 0 )
    {
      v166 = v18;
      LODWORD(v169) = v32;
      dl_debug_printf("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n", v108 & 0xF7FFF716);
      v62 = *((unsigned int *)i + 265);
      v18 = v166;
      v109 = v62;
      v32 = (int)v169;
      if ( (v62 & 1) != 0 )
LABEL_203:
        i[32] = i[56];
    }
    else
    {
      v109 = *((_DWORD *)i + 265);
      if ( (v62 & 1) != 0 )
        goto LABEL_203;
    }
  }
  else
  {
    v109 = *((_DWORD *)i + 265);
  }
  v89 = i[37];
  if ( v89 )
    i[23] = 0;
LABEL_156:
  v112 = (v109 & 0x40) == 0;
  v110 = v109 & 0x8000000;
  if ( !v112 && (a7 & 0x80000000) != 0 )
  {
    if ( v110 )
    {
LABEL_259:
      if ( (_DWORD)v12 != -1 )
        _close_nocancel((unsigned int)v12);
      v73 = "cannot dynamically load position-independent executable";
    }
    else
    {
      if ( (_DWORD)v12 != -1 )
        _close_nocancel((unsigned int)v12);
      v73 = "shared object cannot be dlopen()ed";
    }
    goto LABEL_94;
  }
  if ( v110 )
    v112 = v170 == 0;
  else
    v112 = 0;
  if ( v112 )
    goto LABEL_259;
  v113 = i[94];
  if ( v113 )
  {
    i[94] = v113 + *i;
  }
  else
  {
    v138 = *((unsigned __int16 *)v18 + 28);
    stacks_executable = v32;
    v139 = malloc(56LL * v138, v89, (__int16 *)v62, v55, v27, v17);
    if ( !v139 )
      goto LABEL_269;
    i[94] = j_memcpy(v139);
    *((_WORD *)i + 434) |= 0x1000u;
    v32 = stacks_executable;
  }
  if ( (v32 & ~dl_stack_flags & 1) != 0 )
  {
    _stack_prot |= 7u;
    stacks_executable = dl_make_stacks_executable(v168);
    if ( stacks_executable )
    {
      if ( (_DWORD)v12 != -1 )
        _close_nocancel((unsigned int)v12);
      v73 = "cannot enable executable stack as shared object requires";
      goto LABEL_94;
    }
  }
  v114 = i[141];
  if ( v114 )
    i[141] = v114 + *i;
  v115 = i[94];
  for ( k = v115 + 56LL * *((unsigned __int16 *)i + 384); k != v115; v115 = i[94] )
  {
    while ( 1 )
    {
      v117 = *(_DWORD *)(k - 56);
      k -= 56;
      if ( v117 == 1685382483 )
        break;
      if ( k == v115 )
        goto LABEL_174;
    }
    dl_process_pt_gnu_property(i, (unsigned int)v12, k);
  }
LABEL_174:
  if ( (unsigned int)_close_nocancel((unsigned int)v12) )
  {
    stacks_executable = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( (_DWORD)v12 != -1 )
      _close_nocancel((unsigned int)v12);
    v73 = "cannot close file descriptor";
LABEL_94:
    v85 = i[115];
    if ( v85 )
      munmap(v85, i[116] - v85);
    v86 = i[114];
    if ( v86 != -1 )
      free(v86);
    v87 = i[7];
    if ( !*(_DWORD *)(v87 + 16) )
      free(v87);
    if ( (*((_WORD *)i + 434) & 0x1000) != 0 )
      free(i[94]);
    goto LABEL_102;
  }
  if ( v172 == 2 && (*((_WORD *)i + 434) & 3LL) != 0 )
  {
    _libc_assert_fail("type != ET_EXEC || l->l_type == lt_executable", "dl-load.c", 1393, "_dl_map_object_from_fd");
    goto LABEL_218;
  }
  v118 = *i;
  v119 = *v167;
  v120 = *i + i[95];
  i[95] = v120;
  if ( (v119 & 0x40) != 0 )
    dl_debug_printf(
      "  dynamic: 0x%0*lx  base: 0x%0*lx   size: 0x%0*zx\n    entry: 0x%0*lx  phdr: 0x%0*lx  phnum:   %*u\n\n",
      16,
      i[2],
      16,
      v118,
      16,
      (size_t)v51,
      16,
      v120,
      16,
      i[94],
      16,
      *((unsigned __int16 *)i + 384));
  dl_setup_hash(i);
  if ( (a7 & 8) == 0 )
  {
    if ( i[24] )
    {
      v140 = (__int64 **)i[122];
      if ( *v140 != i + 97 )
      {
        v141 = i[121];
        *(_QWORD *)i[99] = i;
        *((_DWORD *)i + 200) = 1;
        j_memmove(v140 + 1, v140, 8 * (v141 - 1));
        *(_QWORD *)i[122] = i + 99;
      }
    }
  }
  if ( (*((_DWORD *)i + 265) & 0x20) != 0 )
    dl_initfirst = (__int64)i;
  k = 4 * a9;
  v12 = &dl_ns;
  v121 = v175;
  i[125] = v174;
  i[126] = v121;
  if ( !(&dl_ns)[21 * a9 + 4] )
  {
LABEL_218:
    v126 = i[22];
    if ( v126 )
    {
      v127 = 0;
      if ( (*((_BYTE *)i + 870) & 0x20) != 0 )
        v127 = *i;
      if ( !(unsigned int)strcmp(*(_QWORD *)(v126 + 8) + *(_QWORD *)(i[13] + 8) + v127, "libc.so.6") )
        (&(&v12[4 * k])[4 * a9])[a9 + 4] = i;
    }
  }
  if ( i[143] && ((*((_WORD *)i + 434) & 3) == 1 || dl_tls_dtv_slotinfo_list) )
    dl_assign_tls_modid((__int64)i);
  dl_add_to_namespace_list(i, a9);
  if ( (a7 & 0x40000000) != 0 )
    return i;
  v122 = dl_debug_update(a9);
  v123 = *(_DWORD *)(v122 + 24);
  if ( v123 )
  {
    if ( v123 == 1 )
      return i;
    v90 = _libc_assert_fail("r->r_state == RT_ADD", "dl-load.c", 1510, "_dl_map_object_from_fd");
    goto LABEL_190;
  }
  *(_DWORD *)(v122 + 24) = 1;
  dl_debug_state(1);
  return i;
}
