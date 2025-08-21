__int64 __fastcall dl_check_map_versions(__int64 *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // x0
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  unsigned int v12; // w20
  __int64 v13; // x23
  __int64 *v14; // x24
  __int64 v15; // x2
  double v16; // d0
  double v17; // d1
  double v18; // d2
  double v19; // d3
  double v20; // d4
  double v21; // d5
  double v22; // d6
  double v23; // d7
  int *i; // x28
  const char *v25; // x23
  __int64 v26; // x10
  __int64 v27; // x21
  __int64 v28; // x26
  int v29; // w22
  __int64 v30; // x12
  __int64 v31; // x0
  __int64 v32; // x0
  unsigned __int16 *v33; // x25
  unsigned int v34; // w1
  const char *v35; // x19
  __int64 v36; // x0
  double v37; // d0
  double v38; // d1
  double v39; // d2
  double v40; // d3
  double v41; // d4
  double v42; // d5
  double v43; // d6
  double v44; // d7
  int v45; // w0
  unsigned int v46; // w1
  unsigned int v47; // w0
  __int64 j; // x1
  __int64 v49; // x0
  unsigned int v50; // w21
  char v51; // w2
  __int64 v52; // x1
  __int64 v53; // x11
  unsigned int *k; // x9
  char *m; // x1
  __int16 v56; // w3
  __int64 v57; // x4
  __int64 v58; // x6
  __int64 v59; // x5
  unsigned int v60; // w2
  unsigned int v61; // w1
  __int64 n; // x1
  __int64 v63; // x4
  __int64 v64; // x3
  unsigned int v65; // w2
  __int64 v67; // x26
  const char *v68; // x1
  const char *v69; // x2
  const char *v70; // x1
  const char *v71; // x19
  __int64 v72; // x0
  double v73; // d0
  double v74; // d1
  double v75; // d2
  double v76; // d3
  double v77; // d4
  double v78; // d5
  double v79; // d6
  double v80; // d7
  __int64 v81; // x0
  __int64 v82; // x21
  __int64 *v83; // x19
  __int64 v84; // x0
  __int64 v85; // t1
  const char *v86; // x1
  const char *v87; // x1
  const char *v88; // x1
  __int64 v89; // [xsp+60h] [xbp+60h]
  __int64 v90; // [xsp+60h] [xbp+60h]
  __int64 v91; // [xsp+70h] [xbp+70h]
  __int16 v92; // [xsp+78h] [xbp+78h]
  __int64 v93; // [xsp+90h] [xbp+90h]
  __int64 v96; // [xsp+A8h] [xbp+A8h]
  _BYTE v97[5]; // [xsp+C3h] [xbp+C3h] BYREF
  __int64 *v98[3]; // [xsp+C8h] [xbp+C8h] BYREF

  v7 = a1[13];
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(v7 + 8);
  if ( (*((_BYTE *)a1 + 870) & 0x20) == 0 )
  {
    v9 = a1[53];
    v96 = v9;
    v93 = a1[55];
    if ( v9 )
      goto LABEL_4;
LABEL_42:
    v12 = 0;
    if ( !v93 )
      return 0;
    goto LABEL_43;
  }
  v8 += *a1;
  v9 = a1[53];
  v93 = a1[55];
  v96 = v9;
  if ( !v9 )
    goto LABEL_42;
LABEL_4:
  v10 = *a1;
  v11 = *(_QWORD *)(v9 + 8);
  v91 = *a1 + v11;
  if ( *(_WORD *)v91 != 1 )
  {
    v71 = (const char *)a1[1];
    v97[0] = 0;
    if ( !*v71 )
    {
      v71 = (const char *)program_invocation_short_name[0];
      if ( !program_invocation_short_name[0] )
        v71 = "<main program>";
    }
    v72 = itoa_word(*(unsigned __int16 *)(v10 + v11), v97, 10, 0);
    dl_exception_create_format(
      (const char **)v98,
      (__int64)v71,
      "unsupported version %s of Verneed record",
      v73,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v72);
LABEL_98:
    v81 = 0;
    goto LABEL_99;
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = v8 + *(unsigned int *)(v91 + 4);
    v14 = (&dl_ns)[21 * a1[6]];
    if ( v14 )
    {
      while ( !(unsigned int)dl_name_match_p(v13, v14) )
      {
        v14 = (__int64 *)v14[3];
        if ( !v14 )
          goto LABEL_72;
      }
    }
    else
    {
LABEL_72:
      if ( !*((_DWORD *)a1 + 196) )
        goto LABEL_77;
      v67 = 0;
      while ( !(unsigned int)dl_name_match_p(v13, *(_QWORD *)(a1[97] + 8 * v67)) )
      {
        if ( *((_DWORD *)a1 + 196) <= (unsigned int)++v67 )
          goto LABEL_77;
      }
      v14 = *(__int64 **)(a1[97] + 8 * v67);
      if ( !v14 )
LABEL_77:
        _libc_assert_fail("needed != NULL", (__int64)"dl-version.c", 0xCCu, (__int64)"_dl_check_map_versions");
    }
    if ( !a3 || (v14[108] & 0x400000000000LL) == 0 )
    {
      for ( i = (int *)(v91 + *(unsigned int *)(v91 + 8)); ; i = (int *)((char *)i + v46) )
      {
        v25 = (const char *)a1[1];
        v26 = (unsigned int)i[2];
        v27 = v8 + v26;
        if ( !*v25 )
        {
          v25 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v25 = "<main program>";
        }
        v28 = v14[5];
        v92 = *((_WORD *)i + 2);
        v29 = *i;
        v30 = *(_QWORD *)(*(_QWORD *)(v28 + 104) + 8LL);
        if ( (*(_BYTE *)(v28 + 870) & 0x20) != 0 )
          v30 += *(_QWORD *)v28;
        if ( (dl_debug_mask & 0x10) != 0 )
        {
          v69 = *(const char **)(v28 + 8);
          if ( !*v69 )
          {
            v69 = (const char *)program_invocation_short_name[0];
            if ( !program_invocation_short_name[0] )
              v69 = "<main program>";
          }
          v90 = v30;
          dl_debug_printf(
            "checking for version `%s' in file %s [%lu] required by file %s [%lu]\n",
            (const char *)(v8 + v26),
            v69,
            *(_QWORD *)(v28 + 48),
            v25,
            a1[6]);
          v30 = v90;
        }
        v31 = *(_QWORD *)(v28 + 440);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 8);
          if ( !v32 )
            _libc_assert_fail("def_offset != 0", (__int64)"dl-version.c", 0x57u, (__int64)"match_symbol");
          v33 = (unsigned __int16 *)(v32 + *(_QWORD *)v28);
          if ( *v33 != 1 )
          {
LABEL_24:
            v97[0] = 0;
            v35 = *(const char **)(v28 + 8);
            if ( !*v35 )
            {
              v35 = (const char *)program_invocation_short_name[0];
              if ( !program_invocation_short_name[0] )
                v35 = "<main program>";
            }
            v36 = itoa_word(*v33, v97, 10, 0);
            dl_exception_create_format(
              (const char **)v98,
              (__int64)v35,
              "unsupported version %s of Verdef record",
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44,
              v36);
            goto LABEL_28;
          }
          while ( 1 )
          {
            if ( v29 == *((_DWORD *)v33 + 2) )
            {
              v89 = v30;
              v45 = strcmp(v27, v30 + *(unsigned int *)((char *)v33 + *((unsigned int *)v33 + 3)));
              v30 = v89;
              if ( !v45 )
                goto LABEL_30;
            }
            v34 = *((_DWORD *)v33 + 4);
            if ( !v34 )
              break;
            v33 = (unsigned __int16 *)((char *)v33 + v34);
            if ( *v33 != 1 )
              goto LABEL_24;
          }
          if ( (v92 & 2) == 0 )
          {
            v87 = *(const char **)(v28 + 8);
            if ( !*v87 )
            {
              v87 = (const char *)program_invocation_short_name[0];
              if ( !program_invocation_short_name[0] )
                v87 = "<main program>";
            }
            dl_exception_create_format(
              (const char **)v98,
              (__int64)v87,
              "version `%s' not found (required by %s)",
              v16,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23,
              v27,
              v25);
            goto LABEL_28;
          }
          if ( a2 )
          {
            v70 = *(const char **)(v28 + 8);
            if ( !*v70 )
            {
              v70 = (const char *)program_invocation_short_name[0];
              if ( !program_invocation_short_name[0] )
                v70 = "<main program>";
            }
            dl_exception_create_format(
              (const char **)v98,
              (__int64)v70,
              "weak version `%s' not found (required by %s)",
              v16,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23,
              v27,
              v25);
            goto LABEL_28;
          }
        }
        else if ( a2 )
        {
          v68 = *(const char **)(v28 + 8);
          if ( !*v68 )
          {
            v68 = (const char *)program_invocation_short_name[0];
            if ( !program_invocation_short_name[0] )
              v68 = "<main program>";
          }
          dl_exception_create_format(
            (const char **)v98,
            (__int64)v68,
            "no version information available (required by %s)",
            v16,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v25);
LABEL_28:
          dl_signal_exception(0, v98, "version lookup error");
        }
LABEL_30:
        if ( *i == 16584258 && !(unsigned int)strcmp(v27, "GLIBC_ABI_DT_RELR") )
        {
          *((_WORD *)a1 + 434) |= 4u;
          v46 = i[3];
          if ( v12 < (*((_WORD *)i + 3) & 0x7FFFu) )
            v12 = *((_WORD *)i + 3) & 0x7FFF;
          if ( !v46 )
            break;
        }
        else
        {
          v46 = i[3];
          if ( v12 < (*((_WORD *)i + 3) & 0x7FFFu) )
            v12 = *((_WORD *)i + 3) & 0x7FFF;
          if ( !v46 )
            break;
        }
      }
    }
    v47 = *(_DWORD *)(v91 + 12);
    if ( !v47 )
      break;
    v91 += v47;
  }
  if ( !v93 )
  {
    if ( !v12 )
      goto LABEL_68;
    goto LABEL_49;
  }
LABEL_43:
  for ( j = *a1 + *(_QWORD *)(v93 + 8); ; j += (unsigned int)v15 )
  {
    v15 = *(unsigned int *)(j + 16);
    if ( v12 < (*(_WORD *)(j + 4) & 0x7FFFu) )
      v12 = *(_WORD *)(j + 4) & 0x7FFF;
    if ( !(_DWORD)v15 )
      break;
  }
  if ( !v12 )
  {
LABEL_67:
    if ( !v96 )
      return 0;
    goto LABEL_68;
  }
LABEL_49:
  v49 = calloc(v12 + 1, 0x18u, v15, a4, a5, a6);
  a1[102] = v49;
  v50 = v12 + 1;
  if ( !v49 )
  {
    v88 = (const char *)a1[1];
    if ( !*v88 )
    {
      v88 = (const char *)program_invocation_short_name[0];
      if ( !program_invocation_short_name[0] )
        v88 = "<main program>";
    }
    dl_exception_create(v98, (__int64)v88, (__int64)"cannot allocate version reference table");
    v81 = 12;
LABEL_99:
    dl_signal_exception(v81, v98, 0);
  }
  v51 = *((_BYTE *)a1 + 870);
  v52 = *(_QWORD *)(a1[67] + 8);
  *((_DWORD *)a1 + 206) = v50;
  if ( (v51 & 0x20) != 0 )
    v52 += *a1;
  a1[113] = v52;
  if ( !v96 )
  {
    if ( !v93 )
      return 0;
    v53 = *a1;
    goto LABEL_62;
  }
  v53 = *a1;
  for ( k = (unsigned int *)(*a1 + *(_QWORD *)(v96 + 8)); ; k = (unsigned int *)((char *)k + v61) )
  {
    for ( m = (char *)k + k[2]; ; m += v60 )
    {
      v56 = *((_WORD *)m + 3);
      if ( v50 > (v56 & 0x7FFFu) )
      {
        v57 = v49 + 24LL * (*((_WORD *)m + 3) & 0x7FFF);
        v58 = v8 + *((unsigned int *)m + 2);
        v59 = v8 + k[1];
        *(_DWORD *)(v57 + 8) = *(_DWORD *)m;
        *(_DWORD *)(v57 + 12) = v56 & 0x8000;
        *(_QWORD *)v57 = v58;
        *(_QWORD *)(v57 + 16) = v59;
      }
      v60 = *((_DWORD *)m + 3);
      if ( !v60 )
        break;
    }
    v61 = k[3];
    if ( !v61 )
      break;
  }
  if ( v93 )
  {
LABEL_62:
    for ( n = v53 + *(_QWORD *)(v93 + 8); ; n += v65 )
    {
      if ( (*(_WORD *)(n + 2) & 1) == 0 )
      {
        v63 = v49 + 24LL * (*(_WORD *)(n + 4) & 0x7FFF);
        v64 = v8 + *(unsigned int *)(n + *(unsigned int *)(n + 12));
        *(_DWORD *)(v63 + 8) = *(_DWORD *)(n + 8);
        *(_QWORD *)v63 = v64;
        *(_QWORD *)(v63 + 16) = 0;
      }
      v65 = *(_DWORD *)(n + 16);
      if ( !v65 )
        break;
    }
    goto LABEL_67;
  }
LABEL_68:
  if ( a1[9] && a1[44] && (*((_WORD *)a1 + 434) & 4) == 0 )
  {
    v82 = *(_QWORD *)(a1[13] + 8);
    if ( (*((_BYTE *)a1 + 870) & 0x20) != 0 )
      v82 += *a1;
    v83 = (__int64 *)a1[2];
    v84 = *v83;
    if ( *v83 )
    {
      while ( v84 != 1 || (unsigned int)strncmp(v82 + v83[1], "libc.so.", 8) )
      {
        v85 = v83[2];
        v83 += 2;
        v84 = v85;
        if ( !v85 )
          return 0;
      }
      v86 = (const char *)a1[1];
      if ( !*v86 )
      {
        v86 = (const char *)program_invocation_short_name[0];
        if ( !program_invocation_short_name[0] )
          v86 = "<main program>";
      }
      dl_exception_create(v98, (__int64)v86, (__int64)"DT_RELR without GLIBC_ABI_DT_RELR dependency");
      goto LABEL_98;
    }
  }
  return 0;
}
