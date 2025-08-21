__int64 __fastcall do_lookup_x(
        const char *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        unsigned int a11,
        __int64 a12)
{
  void *v15; // x5
  int v17; // w11
  unsigned int v18; // w25
  unsigned int v19; // w26
  int *v21; // x4
  int v22; // w13
  __int64 v23; // x27
  unsigned int v24; // w3
  __int64 v25; // x1
  char v26; // w0
  __int64 v27; // x7
  __int64 v28; // x20
  _QWORD *v29; // x6
  __int64 v30; // x22
  unsigned __int64 v31; // x1
  __int64 v32; // x23
  const char *v33; // x2
  unsigned __int64 v34; // x0
  __int64 v35; // x21
  unsigned int v36; // w23
  __int64 v37; // x0
  __int64 v38; // x3
  int v39; // w0
  bool v40; // zf
  int v41; // w0
  unsigned int v43; // w24
  int *v44; // x21
  unsigned int v45; // w24
  int v46; // w26
  int v47; // w0
  __int64 v48; // x6
  __int64 v49; // x0
  int *v50; // x24
  __int64 v51; // x20
  __int64 v52; // x4
  unsigned int v53; // w22
  __int64 **v54; // x26
  __int64 v55; // x2
  __int64 v56; // x5
  unsigned __int64 v57; // x25
  __int64 v58; // x4
  __int64 v59; // x3
  int v60; // w11
  __int64 *v61; // x26
  unsigned int *v62; // x27
  unsigned __int64 v63; // x20
  __int64 v64; // x21
  unsigned __int64 v65; // x28
  unsigned int v66; // w25
  unsigned __int64 v67; // x22
  int v68; // w24
  __int64 *v69; // x23
  __int64 v70; // x0
  __int128 v71; // q0
  unsigned __int64 v72; // x1
  __int64 v73; // x4
  __int64 v74; // x12
  unsigned __int64 v75; // x25
  __int64 v76; // x10
  int v77; // w11
  unsigned int *v78; // x3
  __int64 v79; // x6
  __int64 v80; // x7
  unsigned __int64 v81; // x0
  __int64 **v82; // x1
  unsigned __int64 v83; // x0
  char v84; // w1
  unsigned __int64 v85; // x1
  unsigned int v86; // w6
  unsigned __int64 v87; // x0
  unsigned __int8 *v88; // x14
  __int64 v89; // x1
  unsigned int v90; // t1
  unsigned __int64 v91; // x19
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  __int64 v95; // x5
  __int64 v96; // x26
  unsigned __int64 v97; // x27
  unsigned int *v98; // x3
  __int64 v99; // x4
  unsigned int *v100; // x1
  __int64 v101; // x10
  __int64 v102; // x14
  __int64 v103; // x15
  unsigned __int64 v104; // x7
  unsigned __int64 v105; // x2
  unsigned __int64 v106; // x0
  __int64 **v107; // x28
  __int64 v108; // x0
  __int64 v109; // [xsp+80h] [xbp+60h]
  unsigned int *v111; // [xsp+88h] [xbp+68h]
  unsigned int *v112; // [xsp+88h] [xbp+68h]
  unsigned int *v113; // [xsp+88h] [xbp+68h]
  __int64 v114; // [xsp+90h] [xbp+70h]
  __int64 v115; // [xsp+90h] [xbp+70h]
  _QWORD *v118; // [xsp+A8h] [xbp+88h]
  atomic_uint *v119; // [xsp+A8h] [xbp+88h]
  void *v120; // [xsp+B0h] [xbp+90h]
  void *v121; // [xsp+B0h] [xbp+90h]
  __int64 v122; // [xsp+B0h] [xbp+90h]
  __int64 v123; // [xsp+B0h] [xbp+90h]
  void *v124; // [xsp+B0h] [xbp+90h]
  unsigned int *v125; // [xsp+B0h] [xbp+90h]
  __int64 v126; // [xsp+B0h] [xbp+90h]
  unsigned int *v127; // [xsp+B0h] [xbp+90h]
  int v128; // [xsp+B8h] [xbp+98h]
  __int64 v129; // [xsp+B8h] [xbp+98h]
  int v130; // [xsp+B8h] [xbp+98h]
  __int64 v131; // [xsp+B8h] [xbp+98h]
  int v132; // [xsp+B8h] [xbp+98h]
  __int64 v133; // [xsp+B8h] [xbp+98h]
  unsigned int *v134; // [xsp+B8h] [xbp+98h]
  __int64 v135; // [xsp+B8h] [xbp+98h]
  int *v136; // [xsp+C0h] [xbp+A0h]
  void *v137; // [xsp+C0h] [xbp+A0h]
  int *v138; // [xsp+C0h] [xbp+A0h]
  __int64 v139; // [xsp+C0h] [xbp+A0h]
  __int64 v140; // [xsp+C0h] [xbp+A0h]
  int *v141; // [xsp+C0h] [xbp+A0h]
  __int64 *v142; // [xsp+C0h] [xbp+A0h]
  int v143; // [xsp+C0h] [xbp+A0h]
  int v144; // [xsp+C8h] [xbp+A8h]
  __int64 v145; // [xsp+C8h] [xbp+A8h]
  int v146; // [xsp+C8h] [xbp+A8h]
  int v147; // [xsp+C8h] [xbp+A8h]
  unsigned __int64 v148; // [xsp+C8h] [xbp+A8h]
  int v149; // [xsp+C8h] [xbp+A8h]
  void *v150; // [xsp+D0h] [xbp+B0h]
  int *v151; // [xsp+D0h] [xbp+B0h]
  __int64 v152; // [xsp+D0h] [xbp+B0h]
  __int64 v153; // [xsp+D0h] [xbp+B0h]
  int v154; // [xsp+D0h] [xbp+B0h]
  int v155; // [xsp+D8h] [xbp+B8h]
  int *v156; // [xsp+D8h] [xbp+B8h]
  int *v157; // [xsp+E0h] [xbp+C0h]
  int v158; // [xsp+ECh] [xbp+CCh]
  int v159; // [xsp+F4h] [xbp+D4h] BYREF
  __int64 v160; // [xsp+F8h] [xbp+D8h] BYREF
  __int64 v161; // [xsp+108h] [xbp+E8h]
  __int64 v162; // [xsp+108h] [xbp+E8h]
  __int64 v163; // [xsp+108h] [xbp+E8h]
  __int64 v164; // [xsp+108h] [xbp+E8h]
  __int64 v165; // [xsp+108h] [xbp+E8h]
  __int64 v166; // [xsp+118h] [xbp+F8h]
  __int64 v167; // [xsp+118h] [xbp+F8h]
  __int64 v168; // [xsp+118h] [xbp+F8h]
  __int64 v169; // [xsp+118h] [xbp+F8h]
  __int64 v170; // [xsp+118h] [xbp+F8h]
  __int64 v171; // [xsp+118h] [xbp+F8h]

  v15 = (void *)*((unsigned int *)a6 + 2);
  v118 = (_QWORD *)a3;
  v17 = a11 & 2;
  v18 = a2 >> 6;
  v19 = a2;
  v21 = &dl_debug_mask;
  v22 = a2 & 0x3F;
  v23 = *a6;
  while ( 1 )
  {
    v32 = *(_QWORD *)(*(_QWORD *)(v23 + 8 * a7) + 40LL);
    if ( v32 == a10
      || v17 && (*(_WORD *)(v32 + 868) & 3LL) == 0
      || (*(_BYTE *)(v32 + 870) & 4) != 0 && (!a12 || (*(_BYTE *)(a12 + 870) & 4) == 0) )
    {
      goto LABEL_7;
    }
    if ( (*v21 & 8) != 0 )
    {
      v33 = *(const char **)(v32 + 8);
      if ( !*v33 )
      {
        v33 = (const char *)program_invocation_short_name[0];
        if ( !program_invocation_short_name[0] )
          v33 = "<main program>";
      }
      v120 = v15;
      v128 = v17;
      v136 = v21;
      v144 = v22;
      v161 = a10;
      v166 = a12;
      dl_debug_printf("symbol=%s;  lookup in file=%s [%lu]\n", a1, v33, *(_QWORD *)(v32 + 48));
      v15 = v120;
      v21 = v136;
      a10 = v161;
      a12 = v166;
      v17 = v128;
      v22 = v144;
    }
    v24 = *(_DWORD *)(v32 + 828);
    if ( !v24 )
      goto LABEL_7;
    v25 = *(_QWORD *)(v32 + 112);
    v159 = 0;
    v26 = *(_BYTE *)(v32 + 870);
    v27 = 0;
    v160 = 0;
    v28 = *(_QWORD *)(v25 + 8);
    if ( (v26 & 0x20) != 0 )
    {
      v27 = *(_QWORD *)v32;
      v28 += *(_QWORD *)v32;
    }
    v29 = *(_QWORD **)(v32 + 840);
    v30 = v27 + *(_QWORD *)(*(_QWORD *)(v32 + 104) + 8LL);
    if ( v29 )
    {
      v31 = v29[v18 & *(_DWORD *)(v32 + 832)];
      if ( ((unsigned int)(v31 >> (v19 >> *(_DWORD *)(v32 + 836))) & (unsigned int)(v31 >> v22) & 1) != 0 )
      {
        v43 = *(_DWORD *)(*(_QWORD *)(v32 + 848) + 4LL * (v19 % v24));
        if ( v43 )
        {
          v129 = a7;
          v137 = v15;
          v44 = (int *)(*(_QWORD *)(v32 + 856) + 4LL * v43);
          v45 = v19;
          v46 = v22;
          v146 = v17;
          v151 = v21;
          v163 = a10;
          v168 = a12;
          while ( 1 )
          {
            v47 = *v44;
            if ( !((*v44 ^ v45) >> 1) )
            {
              v48 = (unsigned int)(((unsigned __int64)v44 - *(_QWORD *)(v32 + 856)) >> 2);
              v49 = check_match(a1, a4, a8, a9, a11, v28 + 24 * v48, v48, v30, v32, &v160, &v159);
              if ( v49 )
              {
                a7 = v129;
                v15 = v137;
                v22 = v46;
                v21 = v151;
                v38 = v49;
                a10 = v163;
                v19 = v45;
                a12 = v168;
                v17 = v146;
                goto LABEL_27;
              }
              v47 = *v44;
            }
            ++v44;
            if ( (v47 & 1) != 0 )
            {
              a7 = v129;
              v15 = v137;
              v22 = v46;
              v21 = v151;
              v19 = v45;
              a10 = v163;
              a12 = v168;
              v17 = v146;
              goto LABEL_64;
            }
          }
        }
      }
      goto LABEL_7;
    }
    if ( *v118 == 0xFFFFFFFFLL )
    {
      v85 = *(unsigned __int8 *)a1;
      v34 = 0;
      if ( *a1 )
      {
        if ( a1[1] )
        {
          v85 = *((unsigned __int8 *)a1 + 1) + 16 * v85;
          if ( a1[2] )
          {
            v85 = *((unsigned __int8 *)a1 + 2) + 16 * v85;
            if ( a1[3] )
            {
              v85 = *((unsigned __int8 *)a1 + 3) + 16 * v85;
              if ( a1[4] )
              {
                v86 = *((unsigned __int8 *)a1 + 5);
                v87 = *((unsigned __int8 *)a1 + 4) + 16 * v85;
                v88 = (unsigned __int8 *)(a1 + 5);
                if ( a1[5] )
                {
                  do
                  {
                    v89 = v86;
                    v90 = *++v88;
                    v86 = v90;
                    v87 = (v89 + 16 * v87) ^ (((v89 + 16 * v87) & 0xF0000000) >> 24);
                  }
                  while ( v90 );
                }
                v85 = v87 & 0xFFFFFFF;
              }
            }
          }
        }
        v34 = 4 * (v85 % v24);
      }
      a3 = (__int64)v118;
      *v118 = v85;
    }
    else
    {
      v34 = 4 * (*v118 % (unsigned __int64)v24);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(v32 + 856) + v34) )
      goto LABEL_7;
    v145 = a7;
    v150 = v15;
    v35 = v32;
    v36 = *(_DWORD *)(*(_QWORD *)(v32 + 856) + v34);
    v155 = v17;
    v157 = v21;
    v158 = v22;
    v162 = a10;
    v167 = a12;
    do
    {
      v37 = check_match(a1, a4, a8, a9, a11, v28 + 24LL * v36, v36, v30, v35, &v160, &v159);
      if ( v37 )
      {
        v32 = v35;
        a7 = v145;
        v15 = v150;
        v38 = v37;
        v21 = v157;
        a10 = v162;
        a12 = v167;
        v17 = v155;
        v22 = v158;
        goto LABEL_27;
      }
      v36 = *(_DWORD *)(*(_QWORD *)(v35 + 848) + 4LL * v36);
    }
    while ( v36 );
    v32 = v35;
    a7 = v145;
    v15 = v150;
    v21 = v157;
    a10 = v162;
    a12 = v167;
    v17 = v155;
    v22 = v158;
LABEL_64:
    if ( v159 != 1 )
      goto LABEL_7;
    v38 = v160;
    if ( !v160 )
      goto LABEL_7;
LABEL_27:
    v39 = *(_BYTE *)(v38 + 5) & 3;
    if ( (unsigned int)(v39 - 1) <= 1 )
      goto LABEL_7;
    if ( a12 )
      v40 = v39 == 3;
    else
      v40 = 0;
    if ( v40 && (*(_WORD *)(a12 + 868) & 3LL) == 0 )
    {
      if ( v17 )
      {
        v124 = v15;
        v132 = v17;
        v141 = v21;
        v149 = v22;
        v153 = v38;
        v165 = a10;
        v171 = a12;
        dl_error_printf(
          "warning: copy relocation against non-copyable protected symbol `%s' in `%s'\n",
          a1,
          *(const char **)(v32 + 8));
        v15 = v124;
        v21 = v141;
        v38 = v153;
        a10 = v165;
        a12 = v171;
        v17 = v132;
        v22 = v149;
      }
      else
      {
        if ( (a11 & 1) == 0 || !*(_QWORD *)(a4 + 8) || *(_WORD *)(a4 + 6) )
          goto LABEL_32;
        v121 = v15;
        v138 = v21;
        v147 = v22;
        v152 = v38;
        v164 = a10;
        v169 = a12;
        dl_error_printf(
          "warning: direct reference to protected function `%s' in `%s' may break pointer equality\n",
          a1,
          *(const char **)(v32 + 8));
        v15 = v121;
        v21 = v138;
        v38 = v152;
        a10 = v164;
        a12 = v169;
        v17 = 0;
        v22 = v147;
      }
      if ( (*(_DWORD *)(v32 + 876) & 1) != 0 )
        dl_signal_error(0, *(const char **)(v32 + 8), a1, "error due to GNU_PROPERTY_1_NEEDED_INDIRECT_EXTERN_ACCESS");
    }
LABEL_32:
    v41 = *(unsigned __int8 *)(v38 + 4) >> 4;
    if ( v41 != 2 )
      break;
    if ( !dl_dynamic_weak )
    {
LABEL_35:
      *a5 = v38;
      a5[1] = v32;
      return 1;
    }
    if ( !*a5 )
    {
      *a5 = v38;
      a5[1] = v32;
    }
LABEL_7:
    if ( (unsigned __int64)v15 <= ++a7 )
      return 0;
  }
  if ( v41 != 10 )
  {
    if ( v41 == 1 )
      goto LABEL_35;
    goto LABEL_7;
  }
  v50 = v21;
  v51 = v30;
  v52 = *(_QWORD *)(v32 + 48);
  v53 = v19;
  v109 = 4 * v52;
  v122 = v52;
  v130 = v17;
  v139 = v38;
  v170 = a12;
  v54 = &(&dl_ns)[21 * v52];
  v119 = (atomic_uint *)&(&dl_ns)[21 * v52 + 5];
  pthread_mutex_lock(v119, (__int64)&dl_ns, a3, v38, (void *)v52, v15, v29);
  v57 = (unsigned __int64)v54[12];
  v58 = v122;
  v59 = v139;
  v60 = v130;
  if ( !v54[11] )
  {
    v127 = (unsigned int *)v139;
    v135 = v58;
    v143 = v60;
    v108 = calloc(0x20u, 0x1Fu, v55, v59, v58, v56);
    v79 = v108;
    if ( v108 )
    {
      v75 = 31;
      v54[11] = (__int64 *)v108;
      v54[12] = (__int64 *)31;
      v77 = v143;
      v64 = v53
          - (v53 / 29LL
           + 4 * (((((unsigned __int128)v53 * 0x469EE58469EE5847LL) >> 64) & 0xFFFFFFFFFFFFFFF8LL) - v53 / 29LL))
          + 1;
      v65 = v53 % 0x1FuLL;
      v76 = 32 * v64;
      v78 = v127;
      v73 = v135;
      v54[14] = (__int64 *)free;
      v74 = v170;
      goto LABEL_68;
    }
LABEL_119:
    pthread_mutex_unlock(v119);
    dl_fatal_printf("out of memory\n");
  }
  v61 = v54[11];
  v62 = (unsigned int *)v139;
  v123 = v32;
  v131 = v51;
  v63 = v57;
  v140 = v58;
  v148 = v53;
  v64 = v53 % (v57 - 2) + 1;
  v65 = v53 % v57;
  v66 = v53;
  v156 = v50;
  v67 = v65;
  v68 = v60;
  while ( 2 )
  {
    v69 = &v61[4 * v67];
LABEL_57:
    v70 = v69[1];
    if ( v66 == *(_DWORD *)v69 )
    {
      if ( !(unsigned int)strcmp(v70, a1) )
      {
        if ( v68 )
        {
          *(_QWORD *)&v71 = v62;
          *((_QWORD *)&v71 + 1) = v123;
        }
        else
        {
          v71 = *((_OWORD *)v69 + 1);
        }
        *(_OWORD *)a5 = v71;
        pthread_mutex_unlock(v119);
        return 1;
      }
LABEL_56:
      v67 += v64;
      v69 += 4 * v64;
      if ( v63 <= v67 )
      {
        v67 -= v63;
        continue;
      }
      goto LABEL_57;
    }
    break;
  }
  if ( v70 )
    goto LABEL_56;
  v72 = 3 * v63;
  v73 = v140;
  v53 = v66;
  v74 = v170;
  v75 = v63;
  v76 = 32 * v64;
  v77 = v68;
  v32 = v123;
  v51 = v131;
  v78 = v62;
  v79 = (__int64)v61;
  v50 = v156;
  if ( v72 <= 4 * (__int64)(&(&(&dl_ns)[4 * v109])[4 * v140])[v140 + 13] )
  {
    v125 = v62;
    v133 = v140;
    v142 = v61;
    v154 = v77;
    v91 = dl_higher_prime_number(v75 + 1, v72, &dl_ns, v62);
    v96 = calloc(0x20u, v91, v92, v93, v94, v95);
    if ( v96 )
    {
      v97 = v91 - 2;
      v98 = v125;
      v99 = v133;
      v100 = (unsigned int *)v142;
      if ( v75 )
      {
        do
        {
          v101 = *((_QWORD *)v100 + 1);
          if ( v101 )
          {
            v103 = *((_QWORD *)v100 + 2);
            v102 = *((_QWORD *)v100 + 3);
            v104 = *v100 % v97 + 1;
            v105 = *v100 % v91;
LABEL_104:
            v106 = v96 + 32 * v105;
            while ( *(_QWORD *)(v106 + 8) )
            {
              v105 += v104;
              v106 += 32 * v104;
              if ( v91 <= v105 )
              {
                v105 -= v91;
                goto LABEL_104;
              }
            }
            *(_DWORD *)v106 = *v100;
            *(_QWORD *)(v106 + 8) = v101;
            *(_QWORD *)(v106 + 16) = v103;
            *(_QWORD *)(v106 + 24) = v102;
          }
          v100 += 8;
        }
        while ( v100 != (unsigned int *)&v142[4 * v75] );
      }
      v126 = v133;
      v134 = v98;
      v75 = v91;
      v107 = &(&(&(&dl_ns)[4 * v109])[4 * v99])[v99];
      ((void (__fastcall *)(__int64 *))v107[14])(v142);
      v107[11] = (__int64 *)v96;
      v107[12] = (__int64 *)v91;
      v77 = v154;
      v79 = v96;
      v107[14] = (__int64 *)free;
      v73 = v126;
      v78 = v134;
      v74 = v170;
      v64 = v148 % v97 + 1;
      v65 = v148 % v91;
      v76 = 32 * v64;
      goto LABEL_68;
    }
    goto LABEL_119;
  }
LABEL_68:
  v80 = v51 + *v78;
  if ( v77 )
  {
LABEL_69:
    v81 = v79 + 32 * v65;
    while ( *(_QWORD *)(v81 + 8) )
    {
      v65 += v64;
      v81 += v76;
      if ( v75 <= v65 )
      {
        v65 -= v75;
        goto LABEL_69;
      }
    }
    *(_DWORD *)v81 = v53;
    *(_QWORD *)(v81 + 8) = v80;
    *(_QWORD *)(v81 + 16) = a4;
    *(_QWORD *)(v81 + 24) = v74;
  }
  else
  {
LABEL_75:
    v83 = v79 + 32 * v65;
    while ( *(_QWORD *)(v83 + 8) )
    {
      v65 += v64;
      v83 += v76;
      if ( v75 <= v65 )
      {
        v65 -= v75;
        goto LABEL_75;
      }
    }
    v84 = *(_WORD *)(v32 + 868);
    *(_DWORD *)v83 = v53;
    *(_QWORD *)(v83 + 8) = v80;
    *(_QWORD *)(v83 + 16) = v78;
    *(_QWORD *)(v83 + 24) = v32;
    if ( (v84 & 3) == 2 && (*(_BYTE *)(v32 + 871) & 1) == 0 )
    {
      if ( (a9 & 8) != 0 )
      {
        if ( (*(_BYTE *)(v32 + 872) & 1) == 0 )
        {
          if ( (*v50 & 4) != 0 )
          {
            v113 = v78;
            v115 = v73;
            dl_debug_printf(
              "marking %s [%lu] as NODELETE due to unique symbol\n",
              *(const char **)(v32 + 8),
              *(_QWORD *)(v32 + 48));
            v78 = v113;
            v73 = v115;
          }
          *(_BYTE *)(v32 + 872) = 1;
        }
      }
      else
      {
        if ( (*v50 & 4) != 0 )
        {
          v112 = v78;
          v114 = v73;
          dl_debug_printf(
            "marking %s [%lu] as NODELETE due to unique symbol\n",
            *(const char **)(v32 + 8),
            *(_QWORD *)(v32 + 48));
          v78 = v112;
          v73 = v114;
        }
        *(_BYTE *)(v32 + 871) = 1;
      }
    }
  }
  v111 = v78;
  v82 = &(&(&(&dl_ns)[4 * v109])[4 * v73])[v73];
  v82[13] = (__int64 *)((char *)v82[13] + 1);
  pthread_mutex_unlock(v119);
  *a5 = (__int64)v111;
  a5[1] = v32;
  return 1;
}
