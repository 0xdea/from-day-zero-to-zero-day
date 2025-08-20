__int64 __fastcall dl_lookup_symbol_x(
        const char *a1,
        __int64 a2,
        __int64 *a3,
        __int64 **a4,
        const char **a5,
        int a6,
        char a7,
        __int64 a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15,
        double a16)
{
  int v23; // w0
  const char *v24; // x3
  unsigned int v25; // w27
  int v26; // w4
  int v27; // w2
  int v28; // t1
  __int64 *v29; // x5
  __int64 **v30; // x19
  int i; // w0
  __int64 v32; // x3
  __int64 *v33; // x5
  void *v34; // x6
  __int64 *v35; // t1
  unsigned int *v36; // x2
  unsigned int *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x28
  int v40; // w27
  __int64 result; // x0
  __int64 **v42; // x28
  __int64 *v43; // t1
  const char *v44; // x1
  const char *v45; // x3
  const char *v46; // x5
  __int64 v47; // x1
  _DWORD *v48; // x10
  __int64 *v49; // x4
  __int64 v50; // x0
  unsigned int v51; // w7
  __int64 *v52; // x0
  __int64 v53; // x19
  __int64 v54; // x2
  __int64 v55; // x3
  void *v56; // x5
  void *v57; // x6
  double v58; // d0
  double v59; // d1
  double v60; // d2
  double v61; // d3
  double v62; // d4
  double v63; // d5
  double v64; // d6
  double v65; // d7
  unsigned int v66; // w7
  __int64 v67; // x4
  __int64 *v68; // x0
  bool v69; // zf
  bool v70; // zf
  __int64 v71; // x1
  unsigned int v72; // w0
  int v73; // w0
  unsigned int v74; // w22
  __int64 v75; // x0
  unsigned int v76; // w7
  _DWORD *v77; // x24
  __int64 v78; // x26
  __int64 v79; // x0
  const char *v80; // x3
  const char *v81; // x1
  __int64 v82; // x2
  const char *v83; // x1
  const char *v84; // x3
  unsigned __int64 StatusReg; // x1
  void *v86; // x19
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  void *v90; // x5
  void *v91; // x6
  double v92; // d0
  double v93; // d1
  double v94; // d2
  double v95; // d3
  double v96; // d4
  double v97; // d5
  double v98; // d6
  double v99; // d7
  signed __int64 v100; // x0
  __int64 *v101; // x0
  bool v102; // zf
  __int64 v103; // x1
  __int64 v104; // x19
  __int64 *v105; // x1
  __int64 *v106; // x4
  unsigned int *v107; // x0
  __int64 *v108; // x0
  unsigned int *v109; // x10
  __int64 v110; // t1
  unsigned int *v111; // [xsp+80h] [xbp+60h]
  int v112; // [xsp+80h] [xbp+60h]
  __int64 v113; // [xsp+88h] [xbp+68h]
  int v114; // [xsp+88h] [xbp+68h]
  unsigned int v116; // [xsp+90h] [xbp+70h]
  __int64 v117; // [xsp+98h] [xbp+78h]
  unsigned int v118; // [xsp+A0h] [xbp+80h]
  unsigned __int64 v119; // [xsp+A0h] [xbp+80h]
  unsigned int *v120; // [xsp+A8h] [xbp+88h]
  __int64 *v121; // [xsp+B0h] [xbp+90h]
  unsigned int v122; // [xsp+BCh] [xbp+9Ch]
  __int64 v123; // [xsp+C8h] [xbp+A8h] BYREF
  unsigned int *v124; // [xsp+D0h] [xbp+B0h] BYREF
  __int64 v125; // [xsp+D8h] [xbp+B8h]
  unsigned int *v126; // [xsp+E0h] [xbp+C0h] BYREF
  __int64 v127; // [xsp+E8h] [xbp+C8h]

  while ( 1 )
  {
    v23 = *(unsigned __int8 *)a1;
    if ( *a1 )
    {
      v24 = a1;
      v25 = 5381;
      while ( 1 )
      {
        v26 = *((unsigned __int8 *)v24 + 1) + v23;
        if ( !v24[1] )
          break;
        v27 = 32 * v23;
        v28 = *((unsigned __int8 *)v24 + 2);
        v24 += 2;
        v23 = v28;
        v25 = v26 + v27 + 1089 * v25;
        if ( !v28 )
          goto LABEL_5;
      }
      v25 += v23 + 32 * v25;
    }
    else
    {
      v25 = 5381;
    }
LABEL_5:
    v123 = 0xFFFFFFFFLL;
    v124 = 0;
    v125 = 0;
    if ( a5 && (a7 & 2) != 0 )
      _libc_assert_fail(
        "version == NULL || !(flags & DL_LOOKUP_RETURN_NEWEST)",
        (__int64)"dl-lookup.c",
        0x30Eu,
        (__int64)"_dl_lookup_symbol_x");
    v29 = *a4;
    if ( !a8 )
    {
      if ( v29 )
      {
        v113 = 0;
        goto LABEL_10;
      }
      v38 = *a3;
LABEL_39:
      if ( v38 && *(unsigned __int8 *)(v38 + 4) >> 4 == 2 || (dl_debug_mask & 0x100) != 0 )
      {
        v37 = 0;
        v39 = 0;
        goto LABEL_23;
      }
      if ( a2 )
      {
        v105 = *(__int64 **)(a2 + 8);
        if ( !a5 )
        {
          v106 = &qword_456B08;
LABEL_152:
          if ( *(_BYTE *)v105 )
            goto LABEL_153;
          goto LABEL_172;
        }
        if ( *a5 )
        {
          v106 = (__int64 *)", version ";
          goto LABEL_152;
        }
LABEL_174:
        v106 = (__int64 *)", version ";
        goto LABEL_152;
      }
      if ( a5 )
      {
        if ( !*a5 )
        {
          v105 = &qword_456B08;
          goto LABEL_174;
        }
        v106 = (__int64 *)", version ";
      }
      else
      {
        v106 = &qword_456B08;
      }
LABEL_172:
      v105 = (__int64 *)program_invocation_short_name[0];
      if ( !program_invocation_short_name[0] )
        v105 = (__int64 *)"<main program>";
LABEL_153:
      dl_exception_create_format(
        (const char **)&v126,
        (__int64)v105,
        "undefined symbol: %s%s%s",
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        a15,
        a16,
        a1,
        v106);
      dl_signal_exception(0, (__int64)&v126, "symbol lookup error");
    }
    v113 = 0;
    if ( *(_QWORD *)*v29 != a8 )
    {
      do
        ++v113;
      while ( *(_QWORD *)(*v29 + 8 * v113) != a8 );
    }
LABEL_10:
    v30 = a4;
    for ( i = do_lookup_x(
                a1,
                v25,
                (__int64)&v123,
                *a3,
                &v124,
                v29,
                v113,
                (__int64)a5,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                a15,
                a16,
                a7,
                a8,
                a6,
                a2);
          !i;
          i = do_lookup_x(
                a1,
                v25,
                (__int64)&v123,
                *a3,
                &v124,
                v33,
                0,
                (__int64)a5,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                a15,
                a16,
                a7,
                a8,
                a6,
                a2) )
    {
      v35 = v30[1];
      ++v30;
      v33 = v35;
      v34 = 0;
      if ( !v35 )
        break;
    }
    v36 = v124;
    v37 = (unsigned int *)*a3;
    v38 = *a3;
    if ( !v124 )
      goto LABEL_39;
    if ( v37 && (*((_BYTE *)v37 + 5) & 3) == 3 )
    {
      if ( a6 == 1 )
      {
        if ( v125 == a2 )
        {
          v37 = v124;
        }
        else
        {
          v124 = (unsigned int *)*a3;
          v125 = a2;
        }
        v39 = a2;
        v40 = 1;
        goto LABEL_20;
      }
      v126 = 0;
      v127 = 0;
      v42 = a4;
      v33 = *a4;
      if ( !*a4 )
        goto LABEL_94;
      while ( !(unsigned int)do_lookup_x(
                               a1,
                               v25,
                               (__int64)&v123,
                               (__int64)v37,
                               &v126,
                               v33,
                               v113,
                               (__int64)a5,
                               a9,
                               a10,
                               a11,
                               a12,
                               a13,
                               a14,
                               a15,
                               a16,
                               a7,
                               a8,
                               1u,
                               0) )
      {
        v43 = v42[1];
        ++v42;
        v33 = v43;
        if ( !v43 )
          break;
        v37 = (unsigned int *)*a3;
        v113 = 0;
      }
      if ( v126 && v127 != a2 )
      {
        v39 = a2;
        v40 = 1;
        v124 = (unsigned int *)*a3;
        v125 = a2;
      }
      else
      {
LABEL_94:
        v39 = v125;
        v40 = 1;
      }
    }
    else
    {
      v39 = v125;
      v40 = 0;
    }
    if ( (*(_WORD *)(v39 + 868) & 3) != 2 )
      goto LABEL_19;
    v47 = a2 == v39;
    if ( (unsigned int)v47 | ((a7 & 1) == 0) )
      goto LABEL_19;
    if ( (*(_BYTE *)(v39 + 871) & 1) != 0 )
      goto LABEL_19;
    v114 = a7 & 8;
    if ( (a7 & 8) != 0 && (*(_BYTE *)(v39 + 872) & 1) != 0 )
      goto LABEL_19;
    v48 = *(_DWORD **)(a2 + 1040);
    __dmb(0xBu);
    v49 = *(__int64 **)(a2 + 1032);
    if ( v49 )
    {
      v50 = *v49;
      if ( *v49 )
        break;
    }
LABEL_61:
    if ( v48 )
    {
      v51 = *v48;
      if ( *v48 )
      {
        v52 = (__int64 *)(v48 + 2);
        v36 = &v48[2 * v51 + 2];
        do
        {
          v47 = *v52;
          if ( *v52 == v39 )
            goto LABEL_19;
          ++v52;
        }
        while ( v36 != (unsigned int *)v52 );
      }
    }
    else
    {
      v51 = 0;
    }
    v117 = *(_QWORD *)(v39 + 1208);
    v112 = a7 & 4;
    if ( (a7 & 4) == 0 )
    {
      v118 = v51;
      v53 = v39;
      pthread_mutex_lock(dl_load_lock, a9, a10, a11, a12, a13, a14, a15, a16, v47, (__int64)v36, v32, v49, v33, v34);
      v66 = v118;
      goto LABEL_68;
    }
    v121 = *(__int64 **)(a2 + 1032);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v86 = (void *)(StatusReg - 1852);
    v119 = StatusReg;
    v120 = v48;
    v122 = v51;
    if ( (unsigned int)_aarch64_swp4_rel(0, (atomic_uint *)(StatusReg - 1852)) == 2 )
    {
      v87 = 129;
      v88 = 1;
      v89 = 0;
      v100 = linux_eabi_syscall(__NR_futex, v86, (void *)0x81, (void *)1, 0, v121, v90, v91);
    }
    v53 = v39;
    pthread_mutex_lock(dl_load_lock, v92, v93, v94, v95, v96, v97, v98, v99, v87, v88, v89, v121, v90, v91);
    v101 = *(__int64 **)(a2 + 1032);
    v66 = v122;
    if ( v101 )
      v102 = v121 == v101;
    else
      v102 = 1;
    if ( v102 || (v103 = *v101) == 0 )
    {
LABEL_154:
      v107 = *(unsigned int **)(a2 + 1040);
      if ( v107 )
      {
        v54 = *v107;
        if ( v120 != v107 )
        {
          if ( (_DWORD)v54 )
          {
            v108 = (__int64 *)(v107 + 2);
            v55 = (__int64)&v108[(unsigned int)v54];
            do
            {
              v103 = *v108;
              if ( v39 == *v108 )
                goto LABEL_146;
              ++v108;
            }
            while ( v108 != (__int64 *)v55 );
            v66 = v54;
          }
          else
          {
            v66 = 0;
          }
          goto LABEL_68;
        }
        if ( v122 < (unsigned int)v54 )
        {
          v109 = &v120[2 * v122];
          do
          {
            v110 = *((_QWORD *)v109 + 1);
            v109 += 2;
            v103 = v110;
            if ( v39 == v110 )
              goto LABEL_146;
          }
          while ( ++v66 != (_DWORD)v54 );
        }
      }
LABEL_68:
      v67 = *(_QWORD *)(a2 + 48);
      v68 = (&dl_ns)[21 * v67];
      if ( v68 )
        v69 = v68 == (__int64 *)v53;
      else
        v69 = 1;
      if ( !v69 )
      {
        do
        {
          v68 = (__int64 *)v68[3];
          if ( v68 )
            v70 = v68 == (__int64 *)v53;
          else
            v70 = 1;
        }
        while ( !v70 );
      }
      if ( v68 )
      {
        v71 = v117;
        if ( v117 == *(_QWORD *)(v53 + 1208) )
        {
          if ( (*(_BYTE *)(v53 + 871) & 1) != 0 || (a7 & 8) != 0 && (*(_BYTE *)(v53 + 872) & 1) != 0 )
          {
            pthread_mutex_unlock(
              dl_load_lock,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64,
              v65,
              v117,
              v54,
              v55,
              v67,
              (__int64)v56,
              v57);
            if ( (a7 & 4) == 0 )
              goto LABEL_19;
            goto LABEL_104;
          }
          if ( (*(_WORD *)(a2 + 868) & 3) == 2 )
          {
            v72 = *(_DWORD *)(a2 + 1048);
            if ( v72 > v66 )
            {
              *(_QWORD *)(*(_QWORD *)(a2 + 1040) + 8LL * v66 + 8) = v53;
              __dmb(0xBu);
              **(_DWORD **)(a2 + 1040) = v66 + 1;
              goto LABEL_85;
            }
            v69 = v72 == 0;
            v73 = 2 * v72;
            if ( v69 )
              v74 = 10;
            else
              v74 = v73;
            v116 = v66;
            v75 = malloc(8 * (v74 + 1LL), v58, v59, v60, v61, v62, v63, v64, v65, 10, v54, v55, (void *)v67, v56, v57);
            v76 = v116;
            v77 = (_DWORD *)v75;
            if ( v75 )
            {
              if ( v116 )
              {
                v78 = v116;
                j_memcpy(v75 + 8);
                v76 = v116;
              }
              else
              {
                v78 = 0;
              }
              *(_QWORD *)&v77[2 * v78 + 2] = v53;
              *v77 = v76 + 1;
              __dmb(0xBu);
              v79 = *(_QWORD *)(a2 + 1040);
              *(_QWORD *)(a2 + 1040) = v77;
              *(_DWORD *)(a2 + 1048) = v74;
              if ( v79 )
                dl_scope_free();
LABEL_85:
              if ( (dl_debug_mask & 0x40) != 0 )
              {
                v83 = *(const char **)(v53 + 8);
                if ( !*v83 )
                {
                  v83 = (const char *)program_invocation_short_name[0];
                  if ( !program_invocation_short_name[0] )
                    v83 = "<main program>";
                }
                v84 = *(const char **)(a2 + 8);
                if ( !*v84 )
                {
                  v84 = (const char *)program_invocation_short_name[0];
                  if ( !program_invocation_short_name[0] )
                    v84 = "<main program>";
                }
                dl_debug_printf(
                  "\nfile=%s [%lu];  needed by %s [%lu] (relocation dependency)\n\n",
                  v83,
                  *(_QWORD *)(v53 + 48),
                  v84,
                  *(_QWORD *)(a2 + 48));
              }
              pthread_mutex_unlock(
                dl_load_lock,
                v58,
                v59,
                v60,
                v61,
                v62,
                v63,
                v64,
                v65,
                v71,
                v54,
                v55,
                v67,
                (__int64)v56,
                v57);
              if ( !v112 )
              {
                v37 = v124;
                goto LABEL_20;
              }
              goto LABEL_104;
            }
            if ( (dl_debug_mask & 4) != 0 )
            {
              if ( v114 && (*(_BYTE *)(v53 + 872) & 1) != 0 )
                goto LABEL_123;
              dl_debug_printf(
                "marking %s [%lu] as NODELETE due to memory allocation failure\n",
                *(const char **)(v53 + 8),
                *(_QWORD *)(v53 + 48));
            }
          }
          else if ( (dl_debug_mask & 4) != 0 )
          {
            if ( (a7 & 8) != 0 && (*(_BYTE *)(v53 + 872) & 1) != 0 )
              goto LABEL_123;
            v80 = *(const char **)(a2 + 8);
            v81 = *(const char **)(v53 + 8);
            v82 = *(_QWORD *)(v53 + 48);
            if ( *v80 )
              dl_debug_printf("marking %s [%lu] as NODELETE due to reference from %s [%lu]\n", v81, v82, v80, v67);
            else
              dl_debug_printf("marking %s [%lu] as NODELETE due to reference from main program\n", v81, v82);
          }
          if ( !v114 )
          {
            *(_BYTE *)(v53 + 871) = 1;
            pthread_mutex_unlock(
              dl_load_lock,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64,
              v65,
              1,
              v54,
              v55,
              v67,
              (__int64)v56,
              v57);
            if ( !v112 )
            {
              v37 = v124;
              goto LABEL_20;
            }
            goto LABEL_104;
          }
LABEL_123:
          *(_BYTE *)(v53 + 872) = 1;
          pthread_mutex_unlock(
            dl_load_lock,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            1,
            v54,
            v55,
            v67,
            (__int64)v56,
            v57);
          if ( !v112 )
          {
            v37 = v124;
            goto LABEL_20;
          }
LABEL_104:
          *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 4) = 1;
          __dmb(0xBu);
          v37 = v124;
          goto LABEL_20;
        }
        pthread_mutex_unlock(
          dl_load_lock,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65,
          v117,
          v54,
          v55,
          v67,
          (__int64)v56,
          v57);
        if ( (a7 & 4) != 0 )
        {
LABEL_98:
          *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 4) = 1;
          __dmb(0xBu);
          goto LABEL_99;
        }
      }
      else
      {
        pthread_mutex_unlock(
          dl_load_lock,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65,
          21 * v67,
          v54,
          v55,
          v67,
          (__int64)v56,
          v57);
        if ( (a7 & 4) != 0 )
          goto LABEL_98;
      }
    }
    else
    {
      v54 = 0;
      while ( v39 != v103 )
      {
        v54 = (unsigned int)(v54 + 1);
        v103 = v101[(unsigned int)v54];
        if ( !v103 )
          goto LABEL_154;
      }
LABEL_146:
      v104 = *(_QWORD *)(v103 + 1208);
      pthread_mutex_unlock(
        dl_load_lock,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v103,
        v54,
        v55,
        (__int64)v121,
        (__int64)v56,
        v57);
      *(_DWORD *)(v119 - 1852) = 1;
      __dmb(0xBu);
      if ( v117 == v104 )
      {
        v37 = v124;
        goto LABEL_20;
      }
LABEL_99:
      a4 = *(__int64 ***)(a2 + 976);
    }
  }
  LODWORD(v47) = 0;
  while ( v50 != v39 )
  {
    v47 = (unsigned int)(v47 + 1);
    v50 = v49[(unsigned int)v47];
    if ( !v50 )
      goto LABEL_61;
  }
LABEL_19:
  v37 = v124;
LABEL_20:
  if ( !*(_DWORD *)(v39 + 1052) )
    *(_DWORD *)(v39 + 1052) = 1;
  if ( (dl_debug_mask & 4) != 0 )
  {
    v44 = *(const char **)(a2 + 8);
    if ( !*v44 )
    {
      v44 = (const char *)program_invocation_short_name[0];
      if ( !program_invocation_short_name[0] )
        v44 = "<main program>";
    }
    v45 = *(const char **)(v39 + 8);
    if ( !*v45 )
    {
      v45 = (const char *)program_invocation_short_name[0];
      if ( !program_invocation_short_name[0] )
        v45 = "<main program>";
    }
    v46 = "normal";
    if ( v40 )
      v46 = "protected";
    v111 = v37;
    dl_debug_printf(
      "binding file %s [%lu] to %s [%lu]: %s symbol `%s'",
      v44,
      *(_QWORD *)(a2 + 48),
      v45,
      *(_QWORD *)(v39 + 48),
      v46,
      a1);
    if ( a5 )
      dl_debug_printf_c(" [%s]\n", *a5);
    else
      dl_debug_printf_c("\n");
    v37 = v111;
  }
LABEL_23:
  result = v39;
  *a3 = (__int64)v37;
  return result;
}
