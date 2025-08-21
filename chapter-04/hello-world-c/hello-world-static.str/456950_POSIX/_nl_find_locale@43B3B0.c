// bad sp value at call has been detected, the output may be wrong!
char **__fastcall nl_find_locale(const char *a1, __int64 a2, __int64 a3, const char **a4)
{
  unsigned int v5; // w22
  __int64 v7; // x24
  const char *v8; // x19
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x20
  const char *v11; // x0
  const char *v12; // x0
  char **result; // x0
  const char *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  const char *v18; // x0
  const char *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x19
  __int64 v25; // x0
  __int64 v26; // x3
  unsigned __int16 v27; // w1
  __int64 *v28; // x0
  __int64 v29; // x0
  unsigned int v30; // w0
  unsigned int v31; // w26
  char *v32; // x25
  __int64 *l10nflist; // x19
  _QWORD *v34; // x20
  _BYTE *v35; // x23
  _QWORD *v36; // x0
  _BYTE *v37; // x24
  __int64 v38; // x0
  unsigned __int64 v39; // x1
  unsigned __int16 v40; // w0
  char *v41; // x1
  int v42; // w2
  _BYTE *v43; // x4
  int v44; // w8
  int v45; // t1
  unsigned int v46; // w1
  int v47; // w0
  _BYTE *v48; // x4
  unsigned __int8 *v49; // x1
  int v50; // t1
  int v51; // w0
  unsigned __int8 *v52; // x1
  int v53; // t1
  int v54; // w0
  unsigned int v55; // w1
  int v56; // w0
  __int64 v57; // x0
  unsigned __int64 v58; // x1
  unsigned __int16 v59; // w0
  __int64 *v60; // x1
  int v61; // w2
  int v62; // w8
  int v63; // t1
  unsigned int v64; // w1
  __int64 v65; // x0
  __int64 **i; // x20
  __int64 *v67; // x1
  __int64 v68; // t1
  __int64 v69; // x2
  __int64 v70; // x0
  int v71; // w1
  __int64 v72; // x1
  __int64 v73; // x0
  __int64 v74; // [xsp+0h] [xbp-30060h] BYREF
  _BYTE v75[992]; // [xsp+20h] [xbp-30040h] BYREF
  __int64 v76; // [xsp+400h] [xbp-2FC60h]
  _QWORD v77[4]; // [xsp+10000h] [xbp-20060h] BYREF
  _BYTE v78[992]; // [xsp+10020h] [xbp-20040h] BYREF
  __int64 v79; // [xsp+10400h] [xbp-1FC60h]
  __int64 v80; // [xsp+20000h] [xbp-10060h] BYREF
  char v81[992]; // [xsp+20020h] [xbp-10040h] BYREF
  __int64 v82; // [xsp+20400h] [xbp-FC60h]
  _BYTE v83[40]; // [xsp+30000h] [xbp-60h] BYREF
  const char *v84; // [xsp+30028h] [xbp-38h] BYREF
  __int64 v85; // [xsp+30030h] [xbp-30h] BYREF
  __int64 v86; // [xsp+30038h] [xbp-28h] BYREF
  __int64 v87; // [xsp+30040h] [xbp-20h] BYREF
  _BYTE *v88; // [xsp+30048h] [xbp-18h] BYREF
  __int64 v89; // [xsp+30050h] [xbp-10h] BYREF

  v5 = a3;
  v7 = a2;
  v84 = *a4;
  v8 = v84;
  if ( !*v84 )
  {
    v14 = (const char *)getenv("LC_ALL", a2, a3, &_stack_chk_guard, 0);
    v84 = v14;
    if ( v14 && *v14
      || (v19 = (const char *)getenv(
                                &nl_category_names[(unsigned __int8)nl_category_name_idxs[v5]],
                                (unsigned __int8)nl_category_name_idxs[v5],
                                v15,
                                v16,
                                v17),
          (v84 = v19) != 0)
      && *v19 )
    {
      v18 = v84;
    }
    else
    {
      v18 = (const char *)getenv("LANG", v20, v21, v22, v23);
      v84 = v18;
      if ( !v18 )
      {
LABEL_28:
        v8 = "C";
        v84 = "C";
        goto LABEL_2;
      }
    }
    if ( *v18 )
    {
      v8 = v84;
      if ( !(unsigned int)strcmp(v84, "C") )
        goto LABEL_24;
      goto LABEL_3;
    }
    goto LABEL_28;
  }
LABEL_2:
  if ( !(unsigned int)strcmp(v8, "C") )
  {
LABEL_24:
    *a4 = "C";
    return nl_C[v5];
  }
LABEL_3:
  if ( !(unsigned int)strcmp(v8, "POSIX") )
    goto LABEL_24;
  v9 = strlen(v8);
  v10 = v9;
  if ( v9 > 0xFF || memmem(v8, v9, "/../", 4) )
    goto LABEL_17;
  if ( v10 == 2 )
  {
    if ( *v8 == 46 )
    {
      if ( v8[1] == 46 || memchr(v8, 47, 2) )
        goto LABEL_17;
      goto LABEL_11;
    }
  }
  else if ( v10 > 2 )
  {
    if ( *v8 == 46 && v8[1] == 46 && v8[2] == 47 )
      goto LABEL_17;
    v11 = &v8[v10];
    if ( v8[v10 - 3] == 47 && *(v11 - 2) == 46 && *(v11 - 1) == 46 )
      goto LABEL_17;
  }
  if ( memchr(v8, 47, v10) && *v8 != 47 )
  {
LABEL_17:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return 0;
  }
LABEL_11:
  v12 = v84;
  *a4 = v84;
  if ( a1 )
  {
    v24 = nl_expand_alias(v12);
    v84 = (const char *)v24;
  }
  else
  {
    result = (char **)nl_load_locale_from_archive(v5, a4);
    if ( result )
      return result;
    v84 = (const char *)nl_expand_alias(*a4);
    if ( !v84 )
    {
      a1 = "/usr/lib/locale";
      v7 = 16;
      goto LABEL_64;
    }
    result = (char **)nl_load_locale_from_archive(v5, &v84);
    if ( result )
      return result;
    v24 = (__int64)v84;
    v7 = 16;
    a1 = "/usr/lib/locale";
  }
  if ( !v24 )
  {
LABEL_64:
    v24 = (__int64)*a4;
    v84 = *a4;
  }
  v25 = strlen(v24);
  v26 = v25 + 1;
  v27 = (v25 + 16) & 0xFFF0;
  v28 = (__int64 *)&v83[-((v25 + 16) & 0xFFFFFFFFFFFF0000LL)];
  if ( v83 != (_BYTE *)v28 )
  {
    do
      v82 = 0;
    while ( &v80 != v28 );
  }
  v80 = 0;
  if ( v27 >= 0x400uLL )
    v82 = 0;
  v29 = _memcpy_chk(v81, v24, v26);
  v30 = nl_explode_name(v29, &v85, &v86, &v87, &v88, &v89);
  v31 = v30;
  if ( v30 == -1 )
    return 0;
  v32 = &nl_category_names[(unsigned __int8)nl_category_name_idxs[v5]];
  l10nflist = (__int64 *)nl_make_l10nflist(
                           (char *)&nl_locale_file_list + 8 * (int)v5,
                           a1,
                           v7,
                           v30,
                           v85,
                           v87,
                           v88,
                           v89,
                           v86,
                           v32,
                           0);
  if ( !l10nflist )
  {
    l10nflist = (__int64 *)nl_make_l10nflist(
                             (char *)&nl_locale_file_list + 8 * (int)v5,
                             a1,
                             v7,
                             v31,
                             v85,
                             v87,
                             v88,
                             v89,
                             v86,
                             v32,
                             1);
    if ( !l10nflist )
      return 0;
  }
  if ( (v31 & 1) != 0 )
    free(v89);
  if ( !*((_DWORD *)l10nflist + 2) )
    nl_load_locale(l10nflist, v5);
  v34 = (_QWORD *)l10nflist[2];
  if ( !v34 )
  {
    v65 = l10nflist[4];
    if ( !v65 )
      return 0;
    for ( i = (__int64 **)(l10nflist + 4); ; ++i )
    {
      if ( !*(_DWORD *)(v65 + 8) )
        nl_load_locale((__int64 *)v65, v5);
      v67 = *i;
      if ( (*i)[2] )
        break;
      v68 = (__int64)i[1];
      v65 = v68;
      if ( !v68 )
      {
        result = 0;
        l10nflist[4] = 0;
        return result;
      }
    }
    v34 = (_QWORD *)(*i)[2];
    l10nflist[4] = (__int64)v67;
    l10nflist = v67;
  }
  v35 = v88;
  if ( v88 )
  {
    v36 = &v34[codeset_idx_2[v5]];
    v37 = (_BYTE *)v36[7];
    if ( !v37 )
    {
      v73 = _libc_assert_fail("locale_codeset != NULL", "findlocale.c", 282, "_nl_find_locale");
      return (char **)nl_remove_locale(v73);
    }
    v38 = strlen(v36[7]) + 18;
    v39 = v38 & 0xFFFFFFFFFFFF0000LL;
    v40 = v38 & 0xFFF0;
    v41 = v81 - v39 + 16;
    if ( &v80 != (__int64 *)v41 )
    {
      do
        v79 = 0;
      while ( v77 != (_QWORD *)v41 );
    }
    v77[0] = 0;
    if ( v40 >= 0x400uLL )
      v79 = 0;
    v42 = (unsigned __int8)*v37;
    if ( *v37 )
    {
      v43 = v78;
      v44 = 0;
      while ( 1 )
      {
        v46 = (unsigned __int8)(v42 - 44);
        if ( v46 <= 0x33 )
          break;
        if ( (word_45E6A0[(unsigned __int8)v42] & 8) != 0 )
          goto LABEL_51;
LABEL_52:
        v45 = (unsigned __int8)*++v37;
        v42 = v45;
        if ( !v45 )
        {
          v56 = v44 + 1;
          if ( v44 <= 1 )
            goto LABEL_82;
          goto LABEL_83;
        }
      }
      if ( (word_45E6A0[(unsigned __int8)v42] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v46) & 1 )
      {
        if ( v42 == 47 )
        {
          if ( v44 == 2 )
            goto LABEL_83;
          ++v44;
          *v43++ = 47;
        }
        goto LABEL_52;
      }
LABEL_51:
      *v43++ = dword_45DDA0[v42];
      goto LABEL_52;
    }
    v43 = v78;
    v56 = 1;
LABEL_82:
    v43 = (_BYTE *)(memset(v43, 47, (unsigned int)(3 - v56)) + (unsigned int)(3 - v56));
LABEL_83:
    *v43 = 0;
    v57 = strlen(v35) + 18;
    v58 = v57 & 0xFFFFFFFFFFFF0000LL;
    v59 = v57 & 0xFFF0;
    v60 = (_QWORD *)((char *)v77 - v58);
    if ( v77 != v60 )
    {
      do
        v76 = 0;
      while ( &v74 != v60 );
    }
    v74 = 0;
    if ( v59 >= 0x400uLL )
      v76 = 0;
    v61 = (unsigned __int8)*v35;
    if ( *v35 )
    {
      v48 = v75;
      v62 = 0;
      while ( 1 )
      {
        v64 = (unsigned __int8)(v61 - 44);
        if ( v64 <= 0x33 )
          break;
        if ( (word_45E6A0[(unsigned __int8)v61] & 8) != 0 )
          goto LABEL_90;
LABEL_91:
        v63 = (unsigned __int8)*++v35;
        v61 = v63;
        if ( !v63 )
        {
          v47 = v62 + 1;
          if ( v62 <= 1 )
            goto LABEL_68;
          goto LABEL_69;
        }
      }
      if ( (word_45E6A0[(unsigned __int8)v61] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v64) & 1 )
      {
        if ( v61 == 47 )
        {
          if ( v62 == 2 )
            goto LABEL_69;
          ++v62;
          *v48++ = 47;
        }
        goto LABEL_91;
      }
LABEL_90:
      *v48++ = dword_45DDA0[v61];
      goto LABEL_91;
    }
    v48 = v75;
    v47 = 1;
LABEL_68:
    v48 = (_BYTE *)(memset(v48, 47, (unsigned int)(3 - v47)) + (unsigned int)(3 - v47));
LABEL_69:
    v49 = v75;
    *v48 = 0;
    do
    {
      v50 = *v49++;
      v51 = (unsigned __int8)dword_45DDA0[v50];
      *(v49 - 1) = v51;
    }
    while ( v51 );
    v52 = v78;
    do
    {
      v53 = *v52++;
      v54 = (unsigned __int8)dword_45DDA0[v53];
      *(v52 - 1) = v54;
    }
    while ( v54 );
    if ( (unsigned int)_gconv_compare_alias((__int64)v75, (__int64)v78) )
      return 0;
    v34 = (_QWORD *)l10nflist[2];
  }
  if ( !*v34 )
  {
    v69 = strrchr(*l10nflist, 47);
    v70 = v69 - 1;
    if ( *(_BYTE *)(v69 - 2) == 47 )
    {
      v72 = 1;
    }
    else
    {
      do
      {
        v71 = *(unsigned __int8 *)(v70 - 2);
        --v70;
      }
      while ( v71 != 47 );
      v72 = v69 - v70;
    }
    *v34 = strndup(v70, v72);
  }
  if ( !v86 || (unsigned int)strcasecmp_l(v86, "TRANSLIT", nl_C_locobj) )
  {
    result = (char **)l10nflist[2];
  }
  else
  {
    result = (char **)l10nflist[2];
    *((_DWORD *)result + 11) = 1;
  }
  v55 = *((_DWORD *)result + 10);
  if ( v55 <= 0xFFFFFFFD )
    *((_DWORD *)result + 10) = v55 + 1;
  return result;
}
