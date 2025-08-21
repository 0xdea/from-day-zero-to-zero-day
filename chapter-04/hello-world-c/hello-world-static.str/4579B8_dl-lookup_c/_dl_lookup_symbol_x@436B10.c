__int64 __fastcall dl_lookup_symbol_x(
        const char *a1,
        __int64 a2,
        __int64 *a3,
        __int64 **a4,
        const char **a5,
        unsigned int a6,
        unsigned int a7,
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
  __int64 v36; // x2
  __int64 v37; // x7
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
  unsigned __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x5
  unsigned int v57; // w7
  __int64 v58; // x4
  __int64 *v59; // x0
  bool v60; // zf
  bool v61; // zf
  unsigned int v62; // w0
  int v63; // w0
  unsigned int v64; // w22
  __int64 v65; // x0
  unsigned int v66; // w7
  _DWORD *v67; // x24
  __int64 v68; // x26
  __int64 v69; // x0
  const char *v70; // x3
  const char *v71; // x1
  __int64 v72; // x2
  const char *v73; // x1
  const char *v74; // x3
  unsigned __int64 StatusReg; // x1
  void *v76; // x19
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  void *v80; // x5
  void *v81; // x6
  signed __int64 v82; // x0
  __int64 *v83; // x0
  bool v84; // zf
  __int64 v85; // x1
  __int64 v86; // x19
  __int64 *v87; // x1
  __int64 *v88; // x4
  unsigned int *v89; // x0
  __int64 *v90; // x0
  unsigned int *v91; // x10
  __int64 v92; // t1
  __int64 v93; // [xsp+80h] [xbp+60h]
  unsigned int v94; // [xsp+80h] [xbp+60h]
  __int64 v95; // [xsp+88h] [xbp+68h]
  unsigned int v96; // [xsp+88h] [xbp+68h]
  unsigned int v98; // [xsp+90h] [xbp+70h]
  __int64 v99; // [xsp+98h] [xbp+78h]
  unsigned int v100; // [xsp+A0h] [xbp+80h]
  unsigned __int64 v101; // [xsp+A0h] [xbp+80h]
  unsigned int *v102; // [xsp+A8h] [xbp+88h]
  __int64 *v103; // [xsp+B0h] [xbp+90h]
  unsigned int v104; // [xsp+BCh] [xbp+9Ch]
  __int64 v105; // [xsp+C8h] [xbp+A8h] BYREF
  __int64 v106; // [xsp+D0h] [xbp+B0h] BYREF
  __int64 v107; // [xsp+D8h] [xbp+B8h]
  const char *v108; // [xsp+E0h] [xbp+C0h] BYREF
  __int64 v109; // [xsp+E8h] [xbp+C8h]

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
    v105 = 0xFFFFFFFFLL;
    v106 = 0;
    v107 = 0;
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
        v95 = 0;
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
        v87 = *(__int64 **)(a2 + 8);
        if ( !a5 )
        {
          v88 = &qword_456B08;
LABEL_152:
          if ( *(_BYTE *)v87 )
            goto LABEL_153;
          goto LABEL_172;
        }
        if ( *a5 )
        {
          v88 = (__int64 *)", version ";
          goto LABEL_152;
        }
LABEL_174:
        v88 = (__int64 *)", version ";
        goto LABEL_152;
      }
      if ( a5 )
      {
        if ( !*a5 )
        {
          v87 = &qword_456B08;
          goto LABEL_174;
        }
        v88 = (__int64 *)", version ";
      }
      else
      {
        v88 = &qword_456B08;
      }
LABEL_172:
      v87 = (__int64 *)program_invocation_short_name[0];
      if ( !program_invocation_short_name[0] )
        v87 = (__int64 *)"<main program>";
LABEL_153:
      dl_exception_create_format(
        &v108,
        (__int64)v87,
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
        v88);
      dl_signal_exception(0, &v108, "symbol lookup error");
    }
    v95 = 0;
    if ( *(_QWORD *)*v29 != a8 )
    {
      do
        ++v95;
      while ( *(_QWORD *)(*v29 + 8 * v95) != a8 );
    }
LABEL_10:
    v30 = a4;
    for ( i = do_lookup_x(a1, v25, (__int64)&v105, *a3, &v106, v29, v95, (__int64)a5, a7, a8, a6, a2);
          !i;
          i = do_lookup_x(a1, v25, (__int64)&v105, *a3, &v106, v33, 0, (__int64)a5, a7, a8, a6, a2) )
    {
      v35 = v30[1];
      ++v30;
      v33 = v35;
      v34 = 0;
      if ( !v35 )
        break;
    }
    v36 = v106;
    v37 = *a3;
    v38 = *a3;
    if ( !v106 )
      goto LABEL_39;
    if ( v37 && (*(_BYTE *)(v37 + 5) & 3) == 3 )
    {
      if ( a6 == 1 )
      {
        if ( v107 == a2 )
        {
          v37 = v106;
        }
        else
        {
          v106 = *a3;
          v107 = a2;
        }
        v39 = a2;
        v40 = 1;
        goto LABEL_20;
      }
      v108 = 0;
      v109 = 0;
      v42 = a4;
      v33 = *a4;
      if ( !*a4 )
        goto LABEL_94;
      while ( !(unsigned int)do_lookup_x(
                               a1,
                               v25,
                               (__int64)&v105,
                               v37,
                               (__int64 *)&v108,
                               v33,
                               v95,
                               (__int64)a5,
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
        v37 = *a3;
        v95 = 0;
      }
      if ( v108 && v109 != a2 )
      {
        v39 = a2;
        v40 = 1;
        v106 = *a3;
        v107 = a2;
      }
      else
      {
LABEL_94:
        v39 = v107;
        v40 = 1;
      }
    }
    else
    {
      v39 = v107;
      v40 = 0;
    }
    if ( (*(_WORD *)(v39 + 868) & 3) != 2 )
      goto LABEL_19;
    v47 = a2 == v39;
    if ( (unsigned int)v47 | ((a7 & 1) == 0) )
      goto LABEL_19;
    if ( (*(_BYTE *)(v39 + 871) & 1) != 0 )
      goto LABEL_19;
    v96 = a7 & 8;
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
        v36 = (__int64)&v48[2 * v51 + 2];
        do
        {
          v47 = *v52;
          if ( *v52 == v39 )
            goto LABEL_19;
          ++v52;
        }
        while ( (__int64 *)v36 != v52 );
      }
    }
    else
    {
      v51 = 0;
    }
    v99 = *(_QWORD *)(v39 + 1208);
    v94 = a7 & 4;
    if ( (a7 & 4) == 0 )
    {
      v100 = v51;
      v53 = v39;
      pthread_mutex_lock((atomic_uint *)&dl_load_lock, v47, v36, v32, v49, v33, v34);
      v57 = v100;
      goto LABEL_68;
    }
    v103 = *(__int64 **)(a2 + 1032);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v76 = (void *)(StatusReg - 1852);
    v101 = StatusReg;
    v102 = v48;
    v104 = v51;
    if ( (unsigned int)_aarch64_swp4_rel(0, (atomic_uint *)(StatusReg - 1852)) == 2 )
    {
      v77 = 129;
      v78 = 1;
      v79 = 0;
      v82 = linux_eabi_syscall(__NR_futex, v76, (void *)0x81, (void *)1, 0, v103, v80, v81);
    }
    v53 = v39;
    pthread_mutex_lock((atomic_uint *)&dl_load_lock, v77, v78, v79, v103, v80, v81);
    v83 = *(__int64 **)(a2 + 1032);
    v57 = v104;
    if ( v83 )
      v84 = v103 == v83;
    else
      v84 = 1;
    if ( v84 || (v85 = *v83) == 0 )
    {
LABEL_154:
      v89 = *(unsigned int **)(a2 + 1040);
      if ( v89 )
      {
        v54 = *v89;
        if ( v102 != v89 )
        {
          if ( (_DWORD)v54 )
          {
            v90 = (__int64 *)(v89 + 2);
            v55 = (__int64)&v90[(unsigned int)v54];
            do
            {
              v85 = *v90;
              if ( v39 == *v90 )
                goto LABEL_146;
              ++v90;
            }
            while ( v90 != (__int64 *)v55 );
            v57 = v54;
          }
          else
          {
            v57 = 0;
          }
          goto LABEL_68;
        }
        if ( v104 < (unsigned int)v54 )
        {
          v91 = &v102[2 * v104];
          do
          {
            v92 = *((_QWORD *)v91 + 1);
            v91 += 2;
            v85 = v92;
            if ( v39 == v92 )
              goto LABEL_146;
          }
          while ( ++v57 != (_DWORD)v54 );
        }
      }
LABEL_68:
      v58 = *(_QWORD *)(a2 + 48);
      v59 = (&dl_ns)[21 * v58];
      if ( v59 )
        v60 = v59 == (__int64 *)v53;
      else
        v60 = 1;
      if ( !v60 )
      {
        do
        {
          v59 = (__int64 *)v59[3];
          if ( v59 )
            v61 = v59 == (__int64 *)v53;
          else
            v61 = 1;
        }
        while ( !v61 );
      }
      if ( v59 )
      {
        if ( v99 == *(_QWORD *)(v53 + 1208) )
        {
          if ( (*(_BYTE *)(v53 + 871) & 1) != 0 || (a7 & 8) != 0 && (*(_BYTE *)(v53 + 872) & 1) != 0 )
          {
            pthread_mutex_unlock(&dl_load_lock);
            if ( (a7 & 4) == 0 )
              goto LABEL_19;
            goto LABEL_104;
          }
          if ( (*(_WORD *)(a2 + 868) & 3) == 2 )
          {
            v62 = *(_DWORD *)(a2 + 1048);
            if ( v62 > v57 )
            {
              *(_QWORD *)(*(_QWORD *)(a2 + 1040) + 8LL * v57 + 8) = v53;
              __dmb(0xBu);
              **(_DWORD **)(a2 + 1040) = v57 + 1;
              goto LABEL_85;
            }
            v60 = v62 == 0;
            v63 = 2 * v62;
            if ( v60 )
              v64 = 10;
            else
              v64 = v63;
            v98 = v57;
            v65 = malloc(8 * (v64 + 1LL), 10, (__int16 *)v54, v55, v58, v56);
            v66 = v98;
            v67 = (_DWORD *)v65;
            if ( v65 )
            {
              if ( v98 )
              {
                v68 = v98;
                j_memcpy(v65 + 8);
                v66 = v98;
              }
              else
              {
                v68 = 0;
              }
              *(_QWORD *)&v67[2 * v68 + 2] = v53;
              *v67 = v66 + 1;
              __dmb(0xBu);
              v69 = *(_QWORD *)(a2 + 1040);
              *(_QWORD *)(a2 + 1040) = v67;
              *(_DWORD *)(a2 + 1048) = v64;
              if ( v69 )
                dl_scope_free(v69);
LABEL_85:
              if ( (dl_debug_mask & 0x40) != 0 )
              {
                v73 = *(const char **)(v53 + 8);
                if ( !*v73 )
                {
                  v73 = (const char *)program_invocation_short_name[0];
                  if ( !program_invocation_short_name[0] )
                    v73 = "<main program>";
                }
                v74 = *(const char **)(a2 + 8);
                if ( !*v74 )
                {
                  v74 = (const char *)program_invocation_short_name[0];
                  if ( !program_invocation_short_name[0] )
                    v74 = "<main program>";
                }
                dl_debug_printf(
                  "\nfile=%s [%lu];  needed by %s [%lu] (relocation dependency)\n\n",
                  v73,
                  *(_QWORD *)(v53 + 48),
                  v74,
                  *(_QWORD *)(a2 + 48));
              }
              pthread_mutex_unlock(&dl_load_lock);
              if ( !v94 )
              {
                v37 = v106;
                goto LABEL_20;
              }
              goto LABEL_104;
            }
            if ( (dl_debug_mask & 4) != 0 )
            {
              if ( v96 && (*(_BYTE *)(v53 + 872) & 1) != 0 )
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
            v70 = *(const char **)(a2 + 8);
            v71 = *(const char **)(v53 + 8);
            v72 = *(_QWORD *)(v53 + 48);
            if ( *v70 )
              dl_debug_printf("marking %s [%lu] as NODELETE due to reference from %s [%lu]\n", v71, v72, v70, v58);
            else
              dl_debug_printf("marking %s [%lu] as NODELETE due to reference from main program\n", v71, v72);
          }
          if ( !v96 )
          {
            *(_BYTE *)(v53 + 871) = 1;
            pthread_mutex_unlock(&dl_load_lock);
            if ( !v94 )
            {
              v37 = v106;
              goto LABEL_20;
            }
            goto LABEL_104;
          }
LABEL_123:
          *(_BYTE *)(v53 + 872) = 1;
          pthread_mutex_unlock(&dl_load_lock);
          if ( !v94 )
          {
            v37 = v106;
            goto LABEL_20;
          }
LABEL_104:
          *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 4) = 1;
          __dmb(0xBu);
          v37 = v106;
          goto LABEL_20;
        }
        pthread_mutex_unlock(&dl_load_lock);
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
        pthread_mutex_unlock(&dl_load_lock);
        if ( (a7 & 4) != 0 )
          goto LABEL_98;
      }
    }
    else
    {
      LODWORD(v54) = 0;
      while ( v39 != v85 )
      {
        v54 = (unsigned int)(v54 + 1);
        v85 = v83[(unsigned int)v54];
        if ( !v85 )
          goto LABEL_154;
      }
LABEL_146:
      v86 = *(_QWORD *)(v85 + 1208);
      pthread_mutex_unlock(&dl_load_lock);
      *(_DWORD *)(v101 - 1852) = 1;
      __dmb(0xBu);
      if ( v99 == v86 )
      {
        v37 = v106;
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
  v37 = v106;
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
    v93 = v37;
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
    v37 = v93;
  }
LABEL_23:
  result = v39;
  *a3 = v37;
  return result;
}
