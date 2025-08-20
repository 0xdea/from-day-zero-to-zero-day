__int64 __fastcall dl_check_map_versions(
        __int64 *a1,
        int a2,
        int a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  __int64 v16; // x0
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x0
  unsigned int v21; // w20
  unsigned __int64 *v22; // x23
  __int64 *v23; // x24
  __int64 v24; // x2
  int *i; // x28
  const char *v26; // x23
  __int64 v27; // x10
  unsigned __int64 *v28; // x21
  __int64 v29; // x26
  int v30; // w22
  __int64 v31; // x12
  __int64 v32; // x0
  __int64 v33; // x0
  unsigned __int16 *v34; // x25
  unsigned int v35; // w1
  const char *v36; // x19
  __int64 v37; // x0
  double v38; // d0
  double v39; // d1
  double v40; // d2
  double v41; // d3
  double v42; // d4
  double v43; // d5
  double v44; // d6
  double v45; // d7
  int v46; // w0
  unsigned int v47; // w1
  unsigned int v48; // w0
  __int64 j; // x1
  __int64 v50; // x0
  unsigned int v51; // w21
  char v52; // w2
  __int64 v53; // x1
  __int64 v54; // x11
  unsigned int *k; // x9
  char *m; // x1
  __int16 v57; // w3
  __int64 v58; // x4
  __int64 v59; // x6
  __int64 v60; // x5
  unsigned int v61; // w2
  unsigned int v62; // w1
  __int64 n; // x1
  __int64 v64; // x4
  __int64 v65; // x3
  unsigned int v66; // w2
  __int64 v68; // x26
  const char *v69; // x1
  const char *v70; // x2
  const char *v71; // x1
  const char *v72; // x19
  __int64 v73; // x0
  double v74; // d0
  double v75; // d1
  double v76; // d2
  double v77; // d3
  double v78; // d4
  double v79; // d5
  double v80; // d6
  double v81; // d7
  int v82; // w0
  __int64 v83; // x21
  __int64 *v84; // x19
  __int64 v85; // x0
  __int64 v86; // t1
  const char *v87; // x1
  const char *v88; // x1
  const char *v89; // x1
  __int64 v90; // [xsp+60h] [xbp+60h]
  __int64 v91; // [xsp+60h] [xbp+60h]
  __int64 v92; // [xsp+70h] [xbp+70h]
  __int16 v93; // [xsp+78h] [xbp+78h]
  __int64 v94; // [xsp+90h] [xbp+90h]
  __int64 v97; // [xsp+A8h] [xbp+A8h]
  _BYTE v98[5]; // [xsp+C3h] [xbp+C3h] BYREF
  __int64 *v99[3]; // [xsp+C8h] [xbp+C8h] BYREF

  v16 = a1[13];
  if ( !v16 )
    return 0;
  v17 = *(_QWORD *)(v16 + 8);
  if ( (*((_BYTE *)a1 + 870) & 0x20) == 0 )
  {
    v18 = a1[53];
    v97 = v18;
    v94 = a1[55];
    if ( v18 )
      goto LABEL_4;
LABEL_42:
    v21 = 0;
    if ( !v94 )
      return 0;
    goto LABEL_43;
  }
  v17 += *a1;
  v18 = a1[53];
  v94 = a1[55];
  v97 = v18;
  if ( !v18 )
    goto LABEL_42;
LABEL_4:
  v19 = *a1;
  v20 = *(_QWORD *)(v18 + 8);
  v92 = *a1 + v20;
  if ( *(_WORD *)v92 != 1 )
  {
    v72 = (const char *)a1[1];
    v98[0] = 0;
    if ( !*v72 )
    {
      v72 = (const char *)program_invocation_short_name[0];
      if ( !program_invocation_short_name[0] )
        v72 = "<main program>";
    }
    v73 = itoa_word(*(unsigned __int16 *)(v19 + v20), (__int64)v98, 0xAu, 0);
    dl_exception_create_format(
      (const char **)v99,
      (__int64)v72,
      "unsupported version %s of Verneed record",
      v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81,
      v73);
LABEL_98:
    v82 = 0;
    goto LABEL_99;
  }
  v21 = 0;
  while ( 1 )
  {
    v22 = (unsigned __int64 *)(v17 + *(unsigned int *)(v92 + 4));
    v23 = (&dl_ns)[21 * a1[6]];
    if ( v23 )
    {
      while ( !(unsigned int)dl_name_match_p(v22, (__int64)v23) )
      {
        v23 = (__int64 *)v23[3];
        if ( !v23 )
          goto LABEL_72;
      }
    }
    else
    {
LABEL_72:
      if ( !*((_DWORD *)a1 + 196) )
        goto LABEL_77;
      v68 = 0;
      while ( !(unsigned int)dl_name_match_p(v22, *(_QWORD *)(a1[97] + 8 * v68)) )
      {
        if ( *((_DWORD *)a1 + 196) <= (unsigned int)++v68 )
          goto LABEL_77;
      }
      v23 = *(__int64 **)(a1[97] + 8 * v68);
      if ( !v23 )
LABEL_77:
        _libc_assert_fail("needed != NULL", (__int64)"dl-version.c", 0xCCu, (__int64)"_dl_check_map_versions");
    }
    if ( !a3 || (v23[108] & 0x400000000000LL) == 0 )
    {
      for ( i = (int *)(v92 + *(unsigned int *)(v92 + 8)); ; i = (int *)((char *)i + v47) )
      {
        v26 = (const char *)a1[1];
        v27 = (unsigned int)i[2];
        v28 = (unsigned __int64 *)(v17 + v27);
        if ( !*v26 )
        {
          v26 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v26 = "<main program>";
        }
        v29 = v23[5];
        v93 = *((_WORD *)i + 2);
        v30 = *i;
        v31 = *(_QWORD *)(*(_QWORD *)(v29 + 104) + 8LL);
        if ( (*(_BYTE *)(v29 + 870) & 0x20) != 0 )
          v31 += *(_QWORD *)v29;
        if ( (dl_debug_mask & 0x10) != 0 )
        {
          v70 = *(const char **)(v29 + 8);
          if ( !*v70 )
          {
            v70 = (const char *)program_invocation_short_name[0];
            if ( !program_invocation_short_name[0] )
              v70 = "<main program>";
          }
          v91 = v31;
          dl_debug_printf(
            "checking for version `%s' in file %s [%lu] required by file %s [%lu]\n",
            (const char *)(v17 + v27),
            v70,
            *(_QWORD *)(v29 + 48),
            v26,
            a1[6]);
          v31 = v91;
        }
        v32 = *(_QWORD *)(v29 + 440);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 8);
          if ( !v33 )
            _libc_assert_fail("def_offset != 0", (__int64)"dl-version.c", 0x57u, (__int64)"match_symbol");
          v34 = (unsigned __int16 *)(v33 + *(_QWORD *)v29);
          if ( *v34 != 1 )
          {
LABEL_24:
            v98[0] = 0;
            v36 = *(const char **)(v29 + 8);
            if ( !*v36 )
            {
              v36 = (const char *)program_invocation_short_name[0];
              if ( !program_invocation_short_name[0] )
                v36 = "<main program>";
            }
            v37 = itoa_word(*v34, (__int64)v98, 0xAu, 0);
            dl_exception_create_format(
              (const char **)v99,
              (__int64)v36,
              "unsupported version %s of Verdef record",
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45,
              v37);
            goto LABEL_28;
          }
          while ( 1 )
          {
            if ( v30 == *((_DWORD *)v34 + 2) )
            {
              v90 = v31;
              v46 = strcmp(v28, v31 + *(unsigned int *)((char *)v34 + *((unsigned int *)v34 + 3)));
              v31 = v90;
              if ( !v46 )
                goto LABEL_30;
            }
            v35 = *((_DWORD *)v34 + 4);
            if ( !v35 )
              break;
            v34 = (unsigned __int16 *)((char *)v34 + v35);
            if ( *v34 != 1 )
              goto LABEL_24;
          }
          if ( (v93 & 2) == 0 )
          {
            v88 = *(const char **)(v29 + 8);
            if ( !*v88 )
            {
              v88 = (const char *)program_invocation_short_name[0];
              if ( !program_invocation_short_name[0] )
                v88 = "<main program>";
            }
            dl_exception_create_format(
              (const char **)v99,
              (__int64)v88,
              "version `%s' not found (required by %s)",
              a8,
              a9,
              a10,
              a11,
              a12,
              a13,
              a14,
              a15,
              v28,
              v26);
            goto LABEL_28;
          }
          if ( a2 )
          {
            v71 = *(const char **)(v29 + 8);
            if ( !*v71 )
            {
              v71 = (const char *)program_invocation_short_name[0];
              if ( !program_invocation_short_name[0] )
                v71 = "<main program>";
            }
            dl_exception_create_format(
              (const char **)v99,
              (__int64)v71,
              "weak version `%s' not found (required by %s)",
              a8,
              a9,
              a10,
              a11,
              a12,
              a13,
              a14,
              a15,
              v28,
              v26);
            goto LABEL_28;
          }
        }
        else if ( a2 )
        {
          v69 = *(const char **)(v29 + 8);
          if ( !*v69 )
          {
            v69 = (const char *)program_invocation_short_name[0];
            if ( !program_invocation_short_name[0] )
              v69 = "<main program>";
          }
          dl_exception_create_format(
            (const char **)v99,
            (__int64)v69,
            "no version information available (required by %s)",
            a8,
            a9,
            a10,
            a11,
            a12,
            a13,
            a14,
            a15,
            v26);
LABEL_28:
          dl_signal_exception(0, (__int64)v99, "version lookup error");
        }
LABEL_30:
        if ( *i == 16584258 && !(unsigned int)strcmp(v28, (unsigned __int64)"GLIBC_ABI_DT_RELR") )
        {
          *((_WORD *)a1 + 434) |= 4u;
          v47 = i[3];
          if ( v21 < (*((_WORD *)i + 3) & 0x7FFFu) )
            v21 = *((_WORD *)i + 3) & 0x7FFF;
          if ( !v47 )
            break;
        }
        else
        {
          v47 = i[3];
          if ( v21 < (*((_WORD *)i + 3) & 0x7FFFu) )
            v21 = *((_WORD *)i + 3) & 0x7FFF;
          if ( !v47 )
            break;
        }
      }
    }
    v48 = *(_DWORD *)(v92 + 12);
    if ( !v48 )
      break;
    v92 += v48;
  }
  if ( !v94 )
  {
    if ( !v21 )
      goto LABEL_68;
    goto LABEL_49;
  }
LABEL_43:
  for ( j = *a1 + *(_QWORD *)(v94 + 8); ; j += (unsigned int)v24 )
  {
    v24 = *(unsigned int *)(j + 16);
    if ( v21 < (*(_WORD *)(j + 4) & 0x7FFFu) )
      v21 = *(_WORD *)(j + 4) & 0x7FFF;
    if ( !(_DWORD)v24 )
      break;
  }
  if ( !v21 )
  {
LABEL_67:
    if ( !v97 )
      return 0;
    goto LABEL_68;
  }
LABEL_49:
  v50 = calloc(v21 + 1, 0x18u, a8, a9, a10, a11, a12, a13, a14, a15, v24, a4, a5, a6, a7);
  a1[102] = v50;
  v51 = v21 + 1;
  if ( !v50 )
  {
    v89 = (const char *)a1[1];
    if ( !*v89 )
    {
      v89 = (const char *)program_invocation_short_name[0];
      if ( !program_invocation_short_name[0] )
        v89 = "<main program>";
    }
    dl_exception_create(v99, (__int64)v89, (__int64)"cannot allocate version reference table");
    v82 = 12;
LABEL_99:
    dl_signal_exception(v82, (__int64)v99, 0);
  }
  v52 = *((_BYTE *)a1 + 870);
  v53 = *(_QWORD *)(a1[67] + 8);
  *((_DWORD *)a1 + 206) = v51;
  if ( (v52 & 0x20) != 0 )
    v53 += *a1;
  a1[113] = v53;
  if ( !v97 )
  {
    if ( !v94 )
      return 0;
    v54 = *a1;
    goto LABEL_62;
  }
  v54 = *a1;
  for ( k = (unsigned int *)(*a1 + *(_QWORD *)(v97 + 8)); ; k = (unsigned int *)((char *)k + v62) )
  {
    for ( m = (char *)k + k[2]; ; m += v61 )
    {
      v57 = *((_WORD *)m + 3);
      if ( v51 > (v57 & 0x7FFFu) )
      {
        v58 = v50 + 24LL * (*((_WORD *)m + 3) & 0x7FFF);
        v59 = v17 + *((unsigned int *)m + 2);
        v60 = v17 + k[1];
        *(_DWORD *)(v58 + 8) = *(_DWORD *)m;
        *(_DWORD *)(v58 + 12) = v57 & 0x8000;
        *(_QWORD *)v58 = v59;
        *(_QWORD *)(v58 + 16) = v60;
      }
      v61 = *((_DWORD *)m + 3);
      if ( !v61 )
        break;
    }
    v62 = k[3];
    if ( !v62 )
      break;
  }
  if ( v94 )
  {
LABEL_62:
    for ( n = v54 + *(_QWORD *)(v94 + 8); ; n += v66 )
    {
      if ( (*(_WORD *)(n + 2) & 1) == 0 )
      {
        v64 = v50 + 24LL * (*(_WORD *)(n + 4) & 0x7FFF);
        v65 = v17 + *(unsigned int *)(n + *(unsigned int *)(n + 12));
        *(_DWORD *)(v64 + 8) = *(_DWORD *)(n + 8);
        *(_QWORD *)v64 = v65;
        *(_QWORD *)(v64 + 16) = 0;
      }
      v66 = *(_DWORD *)(n + 16);
      if ( !v66 )
        break;
    }
    goto LABEL_67;
  }
LABEL_68:
  if ( a1[9] && a1[44] && (*((_WORD *)a1 + 434) & 4) == 0 )
  {
    v83 = *(_QWORD *)(a1[13] + 8);
    if ( (*((_BYTE *)a1 + 870) & 0x20) != 0 )
      v83 += *a1;
    v84 = (__int64 *)a1[2];
    v85 = *v84;
    if ( *v84 )
    {
      while ( v85 != 1 || (unsigned int)strncmp(v83 + v84[1], (unsigned __int64)"libc.so.", 8u) )
      {
        v86 = v84[2];
        v84 += 2;
        v85 = v86;
        if ( !v86 )
          return 0;
      }
      v87 = (const char *)a1[1];
      if ( !*v87 )
      {
        v87 = (const char *)program_invocation_short_name[0];
        if ( !program_invocation_short_name[0] )
          v87 = "<main program>";
      }
      dl_exception_create(v99, (__int64)v87, (__int64)"DT_RELR without GLIBC_ABI_DT_RELR dependency");
      goto LABEL_98;
    }
  }
  return 0;
}
