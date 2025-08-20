// bad sp value at call has been detected, the output may be wrong!
char **__fastcall nl_find_locale(const char *a1, unsigned __int64 a2, unsigned int a3, char **a4)
{
  char *v8; // x19
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x20
  char *v11; // x0
  unsigned __int64 *v12; // x0
  char **result; // x0
  unsigned __int8 *v14; // x0
  unsigned __int64 *v15; // x0
  unsigned __int8 *v16; // x0
  unsigned __int64 *v17; // x19
  __int64 v18; // x0
  unsigned __int64 v19; // x3
  unsigned __int16 v20; // w1
  __int64 *v21; // x0
  unsigned __int8 *v22; // x0
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7
  int v31; // w0
  int v32; // w26
  char *v33; // x25
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  unsigned __int64 v38; // x6
  _QWORD *l10nflist; // x19
  double v40; // d0
  double v41; // d1
  double v42; // d2
  double v43; // d3
  double v44; // d4
  double v45; // d5
  double v46; // d6
  double v47; // d7
  _QWORD *v48; // x20
  _BYTE *v49; // x23
  _QWORD *v50; // x0
  _BYTE *v51; // x24
  __int64 v52; // x0
  unsigned __int64 v53; // x1
  unsigned __int16 v54; // w0
  char *v55; // x1
  int v56; // w2
  _BYTE *v57; // x4
  int v58; // w8
  int v59; // t1
  unsigned int v60; // w1
  int v61; // w0
  _BYTE *v62; // x4
  unsigned __int8 *v63; // x1
  int v64; // t1
  int v65; // w0
  unsigned __int8 *v66; // x1
  int v67; // t1
  int v68; // w0
  unsigned int v69; // w1
  int v70; // w0
  __int64 v71; // x0
  unsigned __int64 v72; // x1
  unsigned __int16 v73; // w0
  __int64 *v74; // x1
  int v75; // w2
  int v76; // w8
  int v77; // t1
  unsigned int v78; // w1
  __int64 v79; // x0
  _QWORD *i; // x20
  _QWORD *v81; // x1
  __int64 v82; // t1
  unsigned __int64 v83; // x2
  unsigned __int64 v84; // x0
  int v85; // w1
  __int64 v86; // x1
  __int64 v87; // [xsp+0h] [xbp-30060h] BYREF
  _BYTE v88[992]; // [xsp+20h] [xbp-30040h] BYREF
  __int64 v89; // [xsp+400h] [xbp-2FC60h]
  _QWORD v90[4]; // [xsp+10000h] [xbp-20060h] BYREF
  _BYTE v91[992]; // [xsp+10020h] [xbp-20040h] BYREF
  __int64 v92; // [xsp+10400h] [xbp-1FC60h]
  __int64 v93; // [xsp+20000h] [xbp-10060h] BYREF
  char v94[992]; // [xsp+20020h] [xbp-10040h] BYREF
  __int64 v95; // [xsp+20400h] [xbp-FC60h]
  _BYTE v96[40]; // [xsp+30000h] [xbp-60h] BYREF
  char *v97; // [xsp+30028h] [xbp-38h] BYREF
  __int64 v98; // [xsp+30030h] [xbp-30h] BYREF
  __int64 v99; // [xsp+30038h] [xbp-28h] BYREF
  unsigned __int8 *v100; // [xsp+30040h] [xbp-20h] BYREF
  _BYTE *v101; // [xsp+30048h] [xbp-18h] BYREF
  __int64 v102; // [xsp+30050h] [xbp-10h] BYREF

  v97 = *a4;
  v8 = v97;
  if ( !*v97 )
  {
    v14 = getenv("LC_ALL");
    v97 = (char *)v14;
    if ( v14 && *v14
      || (v16 = getenv(&nl_category_names[(unsigned __int8)nl_category_name_idxs[a3]]), (v97 = (char *)v16) != 0)
      && *v16 )
    {
      v15 = (unsigned __int64 *)v97;
    }
    else
    {
      v15 = (unsigned __int64 *)getenv("LANG");
      v97 = (char *)v15;
      if ( !v15 )
      {
LABEL_28:
        v8 = "C";
        v97 = "C";
        goto LABEL_2;
      }
    }
    if ( *(_BYTE *)v15 )
    {
      v8 = v97;
      if ( !(unsigned int)strcmp((unsigned __int64 *)v97, (unsigned __int64)"C") )
        goto LABEL_24;
      goto LABEL_3;
    }
    goto LABEL_28;
  }
LABEL_2:
  if ( !(unsigned int)strcmp((unsigned __int64 *)v8, (unsigned __int64)"C") )
  {
LABEL_24:
    *a4 = "C";
    return nl_C[a3];
  }
LABEL_3:
  if ( !(unsigned int)strcmp((unsigned __int64 *)v8, (unsigned __int64)"POSIX") )
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
  v12 = (unsigned __int64 *)v97;
  *a4 = v97;
  if ( a1 )
  {
    v17 = (unsigned __int64 *)nl_expand_alias((__int64)v12);
    v97 = (char *)v17;
  }
  else
  {
    result = (char **)nl_load_locale_from_archive(a3, a4);
    if ( result )
      return result;
    v97 = (char *)nl_expand_alias((__int64)*a4);
    if ( !v97 )
    {
      a1 = "/usr/lib/locale";
      a2 = 16;
      goto LABEL_64;
    }
    result = (char **)nl_load_locale_from_archive(a3, &v97);
    if ( result )
      return result;
    v17 = (unsigned __int64 *)v97;
    a2 = 16;
    a1 = "/usr/lib/locale";
  }
  if ( !v17 )
  {
LABEL_64:
    v17 = (unsigned __int64 *)*a4;
    v97 = *a4;
  }
  v18 = strlen(v17);
  v19 = v18 + 1;
  v20 = (v18 + 16) & 0xFFF0;
  v21 = (__int64 *)&v96[-((v18 + 16) & 0xFFFFFFFFFFFF0000LL)];
  if ( v96 != (_BYTE *)v21 )
  {
    do
      v95 = 0;
    while ( &v93 != v21 );
  }
  v93 = 0;
  if ( v20 >= 0x400uLL )
    v95 = 0;
  v22 = (unsigned __int8 *)_memcpy_chk((__int64)v94, (__int64)v17, v19, v19);
  v31 = nl_explode_name(v22, &v98, &v99, &v100, &v101, &v102, v23, v24, v25, v26, v27, v28, v29, v30);
  v32 = v31;
  if ( v31 == -1 )
    return 0;
  v33 = &nl_category_names[(unsigned __int8)nl_category_name_idxs[a3]];
  l10nflist = nl_make_l10nflist(
                &nl_locale_file_list[a3],
                (__int64)a1,
                a2,
                v31,
                v98,
                (__int64)v100,
                (__int64)v101,
                v102,
                v99,
                (__int64)v33,
                0);
  if ( !l10nflist )
  {
    l10nflist = nl_make_l10nflist(
                  &nl_locale_file_list[a3],
                  (__int64)a1,
                  a2,
                  v32,
                  v98,
                  (__int64)v100,
                  (__int64)v101,
                  v102,
                  v99,
                  (__int64)v33,
                  1);
    if ( !l10nflist )
      return 0;
  }
  if ( (v32 & 1) != 0 )
    free(v102, v40, v41, v42, v43, v44, v45, v46, v47);
  if ( !*((_DWORD *)l10nflist + 2) )
    nl_load_locale(l10nflist, a3);
  v48 = (_QWORD *)l10nflist[2];
  if ( !v48 )
  {
    v79 = l10nflist[4];
    if ( !v79 )
      return 0;
    for ( i = l10nflist + 4; ; ++i )
    {
      if ( !*(_DWORD *)(v79 + 8) )
        nl_load_locale(v79, a3);
      v81 = (_QWORD *)*i;
      if ( *(_QWORD *)(*i + 16LL) )
        break;
      v82 = i[1];
      v79 = v82;
      if ( !v82 )
      {
        result = 0;
        l10nflist[4] = 0;
        return result;
      }
    }
    v48 = *(_QWORD **)(*i + 16LL);
    l10nflist[4] = v81;
    l10nflist = v81;
  }
  v49 = v101;
  if ( v101 )
  {
    v50 = &v48[codeset_idx_2[a3]];
    v51 = (_BYTE *)v50[7];
    if ( !v51 )
      _libc_assert_fail("locale_codeset != NULL", (__int64)"findlocale.c", 0x11Au, (__int64)"_nl_find_locale");
    v52 = strlen(v50[7]) + 18;
    v53 = v52 & 0xFFFFFFFFFFFF0000LL;
    v54 = v52 & 0xFFF0;
    v55 = v94 - v53 + 16;
    if ( &v93 != (__int64 *)v55 )
    {
      do
        v92 = 0;
      while ( v90 != (_QWORD *)v55 );
    }
    v90[0] = 0;
    if ( v54 >= 0x400uLL )
      v92 = 0;
    v56 = (unsigned __int8)*v51;
    if ( *v51 )
    {
      v57 = v91;
      v58 = 0;
      while ( 1 )
      {
        v60 = (unsigned __int8)(v56 - 44);
        if ( v60 <= 0x33 )
          break;
        if ( (word_45E6A0[(unsigned __int8)v56] & 8) != 0 )
          goto LABEL_51;
LABEL_52:
        v59 = (unsigned __int8)*++v51;
        v56 = v59;
        if ( !v59 )
        {
          v70 = v58 + 1;
          if ( v58 <= 1 )
            goto LABEL_82;
          goto LABEL_83;
        }
      }
      if ( (word_45E6A0[(unsigned __int8)v56] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v60) & 1 )
      {
        if ( v56 == 47 )
        {
          if ( v58 == 2 )
            goto LABEL_83;
          ++v58;
          *v57++ = 47;
        }
        goto LABEL_52;
      }
LABEL_51:
      *v57++ = dword_45DDA0[v56];
      goto LABEL_52;
    }
    v57 = v91;
    v70 = 1;
LABEL_82:
    v57 = (_BYTE *)(memset(v57, 47, (unsigned int)(3 - v70)) + (unsigned int)(3 - v70));
LABEL_83:
    *v57 = 0;
    v71 = strlen(v49) + 18;
    v72 = v71 & 0xFFFFFFFFFFFF0000LL;
    v73 = v71 & 0xFFF0;
    v74 = (_QWORD *)((char *)v90 - v72);
    if ( v90 != v74 )
    {
      do
        v89 = 0;
      while ( &v87 != v74 );
    }
    v87 = 0;
    if ( v73 >= 0x400uLL )
      v89 = 0;
    v75 = (unsigned __int8)*v49;
    if ( *v49 )
    {
      v62 = v88;
      v76 = 0;
      while ( 1 )
      {
        v78 = (unsigned __int8)(v75 - 44);
        if ( v78 <= 0x33 )
          break;
        if ( (word_45E6A0[(unsigned __int8)v75] & 8) != 0 )
          goto LABEL_90;
LABEL_91:
        v77 = (unsigned __int8)*++v49;
        v75 = v77;
        if ( !v77 )
        {
          v61 = v76 + 1;
          if ( v76 <= 1 )
            goto LABEL_68;
          goto LABEL_69;
        }
      }
      if ( (word_45E6A0[(unsigned __int8)v75] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v78) & 1 )
      {
        if ( v75 == 47 )
        {
          if ( v76 == 2 )
            goto LABEL_69;
          ++v76;
          *v62++ = 47;
        }
        goto LABEL_91;
      }
LABEL_90:
      *v62++ = dword_45DDA0[v75];
      goto LABEL_91;
    }
    v62 = v88;
    v61 = 1;
LABEL_68:
    v62 = (_BYTE *)(memset(v62, 47, (unsigned int)(3 - v61)) + (unsigned int)(3 - v61));
LABEL_69:
    v63 = v88;
    *v62 = 0;
    do
    {
      v64 = *v63++;
      v65 = (unsigned __int8)dword_45DDA0[v64];
      *(v63 - 1) = v65;
    }
    while ( v65 );
    v66 = v91;
    do
    {
      v67 = *v66++;
      v68 = (unsigned __int8)dword_45DDA0[v67];
      *(v66 - 1) = v68;
    }
    while ( v68 );
    if ( (unsigned int)_gconv_compare_alias((__int64)v88, (__int64)v91) )
      return 0;
    v48 = (_QWORD *)l10nflist[2];
  }
  if ( !*v48 )
  {
    v83 = strrchr(*l10nflist, 0x2Fu, v34, v35, v36, v37, v38);
    v84 = v83 - 1;
    if ( *(_BYTE *)(v83 - 2) == 47 )
    {
      v86 = 1;
    }
    else
    {
      do
      {
        v85 = *(unsigned __int8 *)(v84 - 2);
        --v84;
      }
      while ( v85 != 47 );
      v86 = v83 - v84;
    }
    *v48 = strndup(v84, v86);
  }
  if ( !v99 || (unsigned int)strcasecmp_l(v99, (__int64)"TRANSLIT", (__int64)nl_C_locobj) )
  {
    result = (char **)l10nflist[2];
  }
  else
  {
    result = (char **)l10nflist[2];
    *((_DWORD *)result + 11) = 1;
  }
  v69 = *((_DWORD *)result + 10);
  if ( v69 <= 0xFFFFFFFD )
    *((_DWORD *)result + 10) = v69 + 1;
  return result;
}
