__int64 __fastcall do_lookup_x(
        const char *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int **a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15,
        double a16,
        char a17,
        __int64 a18,
        unsigned __int8 a19,
        __int64 a20)
{
  void *v23; // x5
  int v25; // w11
  unsigned int v26; // w25
  unsigned int v27; // w26
  int *v29; // x4
  int v30; // w13
  __int64 v31; // x27
  unsigned int v32; // w3
  __int64 v33; // x1
  char v34; // w0
  __int64 v35; // x7
  __int64 v36; // x20
  _QWORD *v37; // x6
  __int64 v38; // x22
  unsigned __int64 v39; // x1
  __int64 v40; // x23
  const char *v41; // x2
  unsigned __int64 v42; // x0
  __int64 v43; // x21
  unsigned int v44; // w23
  unsigned int *v45; // x0
  unsigned int *v46; // x3
  int v47; // w0
  bool v48; // zf
  int v49; // w0
  unsigned int v51; // w24
  int *v52; // x21
  unsigned int v53; // w24
  int v54; // w26
  int v55; // w0
  __int64 v56; // x6
  unsigned int *v57; // x0
  int *v58; // x24
  __int64 v59; // x20
  void *v60; // x4
  unsigned int v61; // w22
  __int64 **v62; // x26
  __int64 v63; // x2
  void *v64; // x5
  double v65; // d0
  double v66; // d1
  double v67; // d2
  double v68; // d3
  double v69; // d4
  double v70; // d5
  double v71; // d6
  double v72; // d7
  unsigned __int64 v73; // x25
  void *v74; // x4
  __int64 v75; // x3
  int v76; // w11
  __int64 *v77; // x26
  unsigned int *v78; // x27
  unsigned __int64 v79; // x20
  __int64 v80; // x21
  unsigned __int64 v81; // x28
  unsigned int v82; // w25
  unsigned __int64 v83; // x22
  int v84; // w24
  __int64 *v85; // x23
  unsigned __int64 *v86; // x0
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  void *v90; // x6
  __int128 v91; // q0
  unsigned __int64 v92; // x1
  __int64 v93; // x4
  __int64 v94; // x12
  unsigned __int64 v95; // x25
  __int64 v96; // x10
  int v97; // w11
  unsigned int *v98; // x3
  char *v99; // x6
  __int64 v100; // x7
  char *v101; // x0
  __int64 **v102; // x1
  __int64 v103; // x2
  char *v104; // x0
  char v105; // w1
  unsigned __int64 v106; // x1
  unsigned int v107; // w6
  unsigned __int64 v108; // x0
  unsigned __int8 *v109; // x14
  __int64 v110; // x1
  unsigned int v111; // t1
  unsigned __int64 v112; // x19
  __int64 v113; // x2
  __int64 v114; // x3
  void *v115; // x4
  void *v116; // x5
  void *v117; // x6
  double v118; // d0
  double v119; // d1
  double v120; // d2
  double v121; // d3
  double v122; // d4
  double v123; // d5
  double v124; // d6
  double v125; // d7
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  __int64 v130; // x26
  unsigned __int64 v131; // x27
  unsigned int *v132; // x3
  __int64 v133; // x4
  unsigned int *v134; // x1
  __int64 v135; // x10
  __int64 v136; // x14
  __int64 v137; // x15
  unsigned __int64 v138; // x7
  unsigned __int64 v139; // x2
  unsigned __int64 v140; // x0
  __int64 **v141; // x28
  __int64 v142; // x0
  __int64 v143; // [xsp+80h] [xbp+60h]
  unsigned int *v145; // [xsp+88h] [xbp+68h]
  unsigned int *v146; // [xsp+88h] [xbp+68h]
  unsigned int *v147; // [xsp+88h] [xbp+68h]
  __int64 v148; // [xsp+90h] [xbp+70h]
  __int64 v149; // [xsp+90h] [xbp+70h]
  _QWORD *v152; // [xsp+A8h] [xbp+88h]
  __int64 **v153; // [xsp+A8h] [xbp+88h]
  void *v154; // [xsp+B0h] [xbp+90h]
  void *v155; // [xsp+B0h] [xbp+90h]
  void *v156; // [xsp+B0h] [xbp+90h]
  __int64 v157; // [xsp+B0h] [xbp+90h]
  void *v158; // [xsp+B0h] [xbp+90h]
  unsigned int *v159; // [xsp+B0h] [xbp+90h]
  __int64 v160; // [xsp+B0h] [xbp+90h]
  unsigned int *v161; // [xsp+B0h] [xbp+90h]
  int v162; // [xsp+B8h] [xbp+98h]
  __int64 v163; // [xsp+B8h] [xbp+98h]
  int v164; // [xsp+B8h] [xbp+98h]
  __int64 v165; // [xsp+B8h] [xbp+98h]
  int v166; // [xsp+B8h] [xbp+98h]
  __int64 v167; // [xsp+B8h] [xbp+98h]
  unsigned int *v168; // [xsp+B8h] [xbp+98h]
  __int64 v169; // [xsp+B8h] [xbp+98h]
  int *v170; // [xsp+C0h] [xbp+A0h]
  void *v171; // [xsp+C0h] [xbp+A0h]
  int *v172; // [xsp+C0h] [xbp+A0h]
  unsigned int *v173; // [xsp+C0h] [xbp+A0h]
  __int64 v174; // [xsp+C0h] [xbp+A0h]
  int *v175; // [xsp+C0h] [xbp+A0h]
  __int64 *v176; // [xsp+C0h] [xbp+A0h]
  int v177; // [xsp+C0h] [xbp+A0h]
  int v178; // [xsp+C8h] [xbp+A8h]
  __int64 v179; // [xsp+C8h] [xbp+A8h]
  int v180; // [xsp+C8h] [xbp+A8h]
  int v181; // [xsp+C8h] [xbp+A8h]
  unsigned __int64 v182; // [xsp+C8h] [xbp+A8h]
  int v183; // [xsp+C8h] [xbp+A8h]
  void *v184; // [xsp+D0h] [xbp+B0h]
  int *v185; // [xsp+D0h] [xbp+B0h]
  unsigned int *v186; // [xsp+D0h] [xbp+B0h]
  unsigned int *v187; // [xsp+D0h] [xbp+B0h]
  int v188; // [xsp+D0h] [xbp+B0h]
  int v189; // [xsp+D8h] [xbp+B8h]
  int *v190; // [xsp+D8h] [xbp+B8h]
  int *v191; // [xsp+E0h] [xbp+C0h]
  int v192; // [xsp+ECh] [xbp+CCh]
  int v193; // [xsp+F4h] [xbp+D4h] BYREF
  unsigned int *v194; // [xsp+F8h] [xbp+D8h] BYREF
  __int64 v195; // [xsp+108h] [xbp+E8h]
  __int64 v196; // [xsp+108h] [xbp+E8h]
  __int64 v197; // [xsp+108h] [xbp+E8h]
  __int64 v198; // [xsp+108h] [xbp+E8h]
  __int64 v199; // [xsp+108h] [xbp+E8h]
  __int64 v200; // [xsp+118h] [xbp+F8h]
  __int64 v201; // [xsp+118h] [xbp+F8h]
  __int64 v202; // [xsp+118h] [xbp+F8h]
  __int64 v203; // [xsp+118h] [xbp+F8h]
  __int64 v204; // [xsp+118h] [xbp+F8h]
  __int64 v205; // [xsp+118h] [xbp+F8h]

  v23 = (void *)*((unsigned int *)a6 + 2);
  v152 = (_QWORD *)a3;
  v25 = a19 & 2;
  v26 = a2 >> 6;
  v27 = a2;
  v29 = &dl_debug_mask;
  v30 = a2 & 0x3F;
  v31 = *a6;
  while ( 1 )
  {
    v40 = *(_QWORD *)(*(_QWORD *)(v31 + 8 * a7) + 40LL);
    if ( v40 == a18
      || v25 && (*(_WORD *)(v40 + 868) & 3LL) == 0
      || (*(_BYTE *)(v40 + 870) & 4) != 0 && (!a20 || (*(_BYTE *)(a20 + 870) & 4) == 0) )
    {
      goto LABEL_7;
    }
    if ( (*v29 & 8) != 0 )
    {
      v41 = *(const char **)(v40 + 8);
      if ( !*v41 )
      {
        v41 = (const char *)program_invocation_short_name[0];
        if ( !program_invocation_short_name[0] )
          v41 = "<main program>";
      }
      v154 = v23;
      v162 = v25;
      v170 = v29;
      v178 = v30;
      v195 = a18;
      v200 = a20;
      dl_debug_printf("symbol=%s;  lookup in file=%s [%lu]\n", a1, v41, *(_QWORD *)(v40 + 48));
      v23 = v154;
      v29 = v170;
      a18 = v195;
      a20 = v200;
      v25 = v162;
      v30 = v178;
    }
    v32 = *(_DWORD *)(v40 + 828);
    if ( !v32 )
      goto LABEL_7;
    v33 = *(_QWORD *)(v40 + 112);
    v193 = 0;
    v34 = *(_BYTE *)(v40 + 870);
    v35 = 0;
    v194 = 0;
    v36 = *(_QWORD *)(v33 + 8);
    if ( (v34 & 0x20) != 0 )
    {
      v35 = *(_QWORD *)v40;
      v36 += *(_QWORD *)v40;
    }
    v37 = *(_QWORD **)(v40 + 840);
    v38 = v35 + *(_QWORD *)(*(_QWORD *)(v40 + 104) + 8LL);
    if ( v37 )
    {
      v39 = v37[v26 & *(_DWORD *)(v40 + 832)];
      if ( ((unsigned int)(v39 >> (v27 >> *(_DWORD *)(v40 + 836))) & (unsigned int)(v39 >> v30) & 1) != 0 )
      {
        v51 = *(_DWORD *)(*(_QWORD *)(v40 + 848) + 4LL * (v27 % v32));
        if ( v51 )
        {
          v163 = a7;
          v171 = v23;
          v52 = (int *)(*(_QWORD *)(v40 + 856) + 4LL * v51);
          v53 = v27;
          v54 = v30;
          v180 = v25;
          v185 = v29;
          v197 = a18;
          v202 = a20;
          while ( 1 )
          {
            v55 = *v52;
            if ( !((*v52 ^ v53) >> 1) )
            {
              v56 = (unsigned int)(((unsigned __int64)v52 - *(_QWORD *)(v40 + 856)) >> 2);
              v57 = check_match(
                      (unsigned __int64)a1,
                      (unsigned int *)a4,
                      a8,
                      a17,
                      a19,
                      (unsigned int *)(v36 + 24 * v56),
                      v56,
                      v38,
                      v40,
                      &v194,
                      &v193);
              if ( v57 )
              {
                a7 = v163;
                v23 = v171;
                v30 = v54;
                v29 = v185;
                v46 = v57;
                a18 = v197;
                v27 = v53;
                a20 = v202;
                v25 = v180;
                goto LABEL_27;
              }
              v55 = *v52;
            }
            ++v52;
            if ( (v55 & 1) != 0 )
            {
              a7 = v163;
              v23 = v171;
              v30 = v54;
              v29 = v185;
              v27 = v53;
              a18 = v197;
              a20 = v202;
              v25 = v180;
              goto LABEL_64;
            }
          }
        }
      }
      goto LABEL_7;
    }
    if ( *v152 == 0xFFFFFFFFLL )
    {
      v106 = *(unsigned __int8 *)a1;
      v42 = 0;
      if ( *a1 )
      {
        if ( a1[1] )
        {
          v106 = *((unsigned __int8 *)a1 + 1) + 16 * v106;
          if ( a1[2] )
          {
            v106 = *((unsigned __int8 *)a1 + 2) + 16 * v106;
            if ( a1[3] )
            {
              v106 = *((unsigned __int8 *)a1 + 3) + 16 * v106;
              if ( a1[4] )
              {
                v107 = *((unsigned __int8 *)a1 + 5);
                v108 = *((unsigned __int8 *)a1 + 4) + 16 * v106;
                v109 = (unsigned __int8 *)(a1 + 5);
                if ( a1[5] )
                {
                  do
                  {
                    v110 = v107;
                    v111 = *++v109;
                    v107 = v111;
                    v108 = (v110 + 16 * v108) ^ (((v110 + 16 * v108) & 0xF0000000) >> 24);
                  }
                  while ( v111 );
                }
                v106 = v108 & 0xFFFFFFF;
              }
            }
          }
        }
        v42 = 4 * (v106 % v32);
      }
      a3 = (__int64)v152;
      *v152 = v106;
    }
    else
    {
      v42 = 4 * (*v152 % (unsigned __int64)v32);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(v40 + 856) + v42) )
      goto LABEL_7;
    v179 = a7;
    v184 = v23;
    v43 = v40;
    v44 = *(_DWORD *)(*(_QWORD *)(v40 + 856) + v42);
    v189 = v25;
    v191 = v29;
    v192 = v30;
    v196 = a18;
    v201 = a20;
    do
    {
      v45 = check_match(
              (unsigned __int64)a1,
              (unsigned int *)a4,
              a8,
              a17,
              a19,
              (unsigned int *)(v36 + 24LL * v44),
              v44,
              v38,
              v43,
              &v194,
              &v193);
      if ( v45 )
      {
        v40 = v43;
        a7 = v179;
        v23 = v184;
        v46 = v45;
        v29 = v191;
        a18 = v196;
        a20 = v201;
        v25 = v189;
        v30 = v192;
        goto LABEL_27;
      }
      v44 = *(_DWORD *)(*(_QWORD *)(v43 + 848) + 4LL * v44);
    }
    while ( v44 );
    v40 = v43;
    a7 = v179;
    v23 = v184;
    v29 = v191;
    a18 = v196;
    a20 = v201;
    v25 = v189;
    v30 = v192;
LABEL_64:
    if ( v193 != 1 )
      goto LABEL_7;
    v46 = v194;
    if ( !v194 )
      goto LABEL_7;
LABEL_27:
    v47 = *((_BYTE *)v46 + 5) & 3;
    if ( (unsigned int)(v47 - 1) <= 1 )
      goto LABEL_7;
    if ( a20 )
      v48 = v47 == 3;
    else
      v48 = 0;
    if ( v48 && (*(_WORD *)(a20 + 868) & 3LL) == 0 )
    {
      if ( v25 )
      {
        v158 = v23;
        v166 = v25;
        v175 = v29;
        v183 = v30;
        v187 = v46;
        v199 = a18;
        v205 = a20;
        dl_error_printf(
          "warning: copy relocation against non-copyable protected symbol `%s' in `%s'\n",
          a1,
          *(const char **)(v40 + 8));
        v23 = v158;
        v29 = v175;
        v46 = v187;
        a18 = v199;
        a20 = v205;
        v25 = v166;
        v30 = v183;
      }
      else
      {
        if ( (a19 & 1) == 0 || !*(_QWORD *)(a4 + 8) || *(_WORD *)(a4 + 6) )
          goto LABEL_32;
        v155 = v23;
        v172 = v29;
        v181 = v30;
        v186 = v46;
        v198 = a18;
        v203 = a20;
        dl_error_printf(
          "warning: direct reference to protected function `%s' in `%s' may break pointer equality\n",
          a1,
          *(const char **)(v40 + 8));
        v23 = v155;
        v29 = v172;
        v46 = v186;
        a18 = v198;
        a20 = v203;
        v25 = 0;
        v30 = v181;
      }
      if ( (*(_DWORD *)(v40 + 876) & 1) != 0 )
        dl_signal_error(0, *(const char **)(v40 + 8), a1, "error due to GNU_PROPERTY_1_NEEDED_INDIRECT_EXTERN_ACCESS");
    }
LABEL_32:
    v49 = *((unsigned __int8 *)v46 + 4) >> 4;
    if ( v49 != 2 )
      break;
    if ( !dl_dynamic_weak )
    {
LABEL_35:
      *a5 = v46;
      a5[1] = (unsigned int *)v40;
      return 1;
    }
    if ( !*a5 )
    {
      *a5 = v46;
      a5[1] = (unsigned int *)v40;
    }
LABEL_7:
    if ( (unsigned __int64)v23 <= ++a7 )
      return 0;
  }
  if ( v49 != 10 )
  {
    if ( v49 == 1 )
      goto LABEL_35;
    goto LABEL_7;
  }
  v58 = v29;
  v59 = v38;
  v60 = *(void **)(v40 + 48);
  v61 = v27;
  v143 = 4LL * (_QWORD)v60;
  v156 = v60;
  v164 = v25;
  v173 = v46;
  v204 = a20;
  v62 = &(&dl_ns)[21 * (_QWORD)v60];
  v153 = &(&dl_ns)[21 * (_QWORD)v60 + 5];
  pthread_mutex_lock(v153, a9, a10, a11, a12, a13, a14, a15, a16, (__int64)&dl_ns, a3, (__int64)v46, v60, v23, v37);
  v73 = (unsigned __int64)v62[12];
  v74 = v156;
  v75 = (__int64)v173;
  v76 = v164;
  if ( !v62[11] )
  {
    v161 = v173;
    v169 = (__int64)v74;
    v177 = v76;
    v142 = calloc(0x20u, 0x1Fu, v65, v66, v67, v68, v69, v70, v71, v72, v63, v75, v74, v64, 0);
    v99 = (char *)v142;
    if ( v142 )
    {
      v95 = 31;
      v62[11] = (__int64 *)v142;
      v62[12] = (__int64 *)31;
      v97 = v177;
      v80 = v61
          - (v61 / 29LL
           + 4 * (((((unsigned __int128)v61 * 0x469EE58469EE5847LL) >> 64) & 0xFFFFFFFFFFFFFFF8LL) - v61 / 29LL))
          + 1;
      v81 = v61 % 0x1FuLL;
      v96 = 32 * v80;
      v98 = v161;
      v93 = v169;
      v62[14] = (__int64 *)free;
      v94 = v204;
      goto LABEL_68;
    }
LABEL_119:
    pthread_mutex_unlock((int *)v153, v65, v66, v67, v68, v69, v70, v71, v72, v126, v127, v128, v129, (__int64)v64, v99);
    dl_fatal_printf("out of memory\n");
  }
  v77 = v62[11];
  v78 = v173;
  v157 = v40;
  v165 = v59;
  v79 = v73;
  v174 = (__int64)v74;
  v182 = v61;
  v80 = v61 % (v73 - 2) + 1;
  v81 = v61 % v73;
  v82 = v61;
  v190 = v58;
  v83 = v81;
  v84 = v76;
  while ( 2 )
  {
    v85 = &v77[4 * v83];
LABEL_57:
    v86 = (unsigned __int64 *)v85[1];
    if ( v82 == *(_DWORD *)v85 )
    {
      if ( !(unsigned int)strcmp(v86, (unsigned __int64)a1) )
      {
        if ( v84 )
        {
          *(_QWORD *)&v91 = v78;
          *((_QWORD *)&v91 + 1) = v157;
        }
        else
        {
          v91 = *((_OWORD *)v85 + 1);
        }
        *(_OWORD *)a5 = v91;
        pthread_mutex_unlock(
          (int *)v153,
          *(double *)&v91,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71,
          v72,
          (__int64)a5,
          v87,
          v88,
          v89,
          (__int64)v64,
          v90);
        return 1;
      }
LABEL_56:
      v83 += v80;
      v85 += 4 * v80;
      if ( v79 <= v83 )
      {
        v83 -= v79;
        continue;
      }
      goto LABEL_57;
    }
    break;
  }
  if ( v86 )
    goto LABEL_56;
  v92 = 3 * v79;
  v93 = v174;
  v61 = v82;
  v94 = v204;
  v95 = v79;
  v96 = 32 * v80;
  v97 = v84;
  v40 = v157;
  v59 = v165;
  v98 = v78;
  v99 = (char *)v77;
  v58 = v190;
  if ( v92 <= 4 * (__int64)(&(&(&dl_ns)[4 * v143])[4 * v174])[v174 + 13] )
  {
    v159 = v78;
    v167 = v174;
    v176 = v77;
    v188 = v97;
    v112 = dl_higher_prime_number(v95 + 1, v92, &dl_ns, v78);
    v130 = calloc(0x20u, v112, v118, v119, v120, v121, v122, v123, v124, v125, v113, v114, v115, v116, v117);
    if ( v130 )
    {
      v131 = v112 - 2;
      v132 = v159;
      v133 = v167;
      v134 = (unsigned int *)v176;
      if ( v95 )
      {
        do
        {
          v135 = *((_QWORD *)v134 + 1);
          if ( v135 )
          {
            v137 = *((_QWORD *)v134 + 2);
            v136 = *((_QWORD *)v134 + 3);
            v138 = *v134 % v131 + 1;
            v139 = *v134 % v112;
LABEL_104:
            v140 = v130 + 32 * v139;
            while ( *(_QWORD *)(v140 + 8) )
            {
              v139 += v138;
              v140 += 32 * v138;
              if ( v112 <= v139 )
              {
                v139 -= v112;
                goto LABEL_104;
              }
            }
            *(_DWORD *)v140 = *v134;
            *(_QWORD *)(v140 + 8) = v135;
            *(_QWORD *)(v140 + 16) = v137;
            *(_QWORD *)(v140 + 24) = v136;
          }
          v134 += 8;
        }
        while ( v134 != (unsigned int *)&v176[4 * v95] );
      }
      v160 = v167;
      v168 = v132;
      v95 = v112;
      v141 = &(&(&(&dl_ns)[4 * v143])[4 * v133])[v133];
      ((void (__fastcall *)(__int64 *))v141[14])(v176);
      v141[11] = (__int64 *)v130;
      v141[12] = (__int64 *)v112;
      v97 = v188;
      v99 = (char *)v130;
      v141[14] = (__int64 *)free;
      v93 = v160;
      v98 = v168;
      v94 = v204;
      v80 = v182 % v131 + 1;
      v81 = v182 % v112;
      v96 = 32 * v80;
      goto LABEL_68;
    }
    goto LABEL_119;
  }
LABEL_68:
  v100 = v59 + *v98;
  if ( v97 )
  {
LABEL_69:
    v101 = &v99[32 * v81];
    while ( *((_QWORD *)v101 + 1) )
    {
      v81 += v80;
      v101 += v96;
      if ( v95 <= v81 )
      {
        v81 -= v95;
        goto LABEL_69;
      }
    }
    *(_DWORD *)v101 = v61;
    *((_QWORD *)v101 + 1) = v100;
    *((_QWORD *)v101 + 2) = a4;
    *((_QWORD *)v101 + 3) = v94;
  }
  else
  {
LABEL_75:
    v104 = &v99[32 * v81];
    while ( *((_QWORD *)v104 + 1) )
    {
      v81 += v80;
      v104 += v96;
      if ( v95 <= v81 )
      {
        v81 -= v95;
        goto LABEL_75;
      }
    }
    v105 = *(_WORD *)(v40 + 868);
    *(_DWORD *)v104 = v61;
    *((_QWORD *)v104 + 1) = v100;
    *((_QWORD *)v104 + 2) = v98;
    *((_QWORD *)v104 + 3) = v40;
    if ( (v105 & 3) == 2 && (*(_BYTE *)(v40 + 871) & 1) == 0 )
    {
      if ( (a17 & 8) != 0 )
      {
        if ( (*(_BYTE *)(v40 + 872) & 1) == 0 )
        {
          if ( (*v58 & 4) != 0 )
          {
            v147 = v98;
            v149 = v93;
            dl_debug_printf(
              "marking %s [%lu] as NODELETE due to unique symbol\n",
              *(const char **)(v40 + 8),
              *(_QWORD *)(v40 + 48));
            v98 = v147;
            v93 = v149;
          }
          *(_BYTE *)(v40 + 872) = 1;
        }
      }
      else
      {
        if ( (*v58 & 4) != 0 )
        {
          v146 = v98;
          v148 = v93;
          dl_debug_printf(
            "marking %s [%lu] as NODELETE due to unique symbol\n",
            *(const char **)(v40 + 8),
            *(_QWORD *)(v40 + 48));
          v98 = v146;
          v93 = v148;
        }
        *(_BYTE *)(v40 + 871) = 1;
      }
    }
  }
  v145 = v98;
  v102 = &(&(&(&dl_ns)[4 * v143])[4 * v93])[v93];
  v103 = (__int64)v102[13] + 1;
  v102[13] = (__int64 *)v103;
  pthread_mutex_unlock(
    (int *)v153,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    (__int64)v102,
    v103,
    (__int64)v98,
    v93,
    (__int64)v64,
    v99);
  *a5 = v145;
  a5[1] = (unsigned int *)v40;
  return 1;
}
