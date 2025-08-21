__int64 __fastcall dl_open_worker_begin(char **a1, __int64 a2, __int64 a3)
{
  char *v3; // x20
  int v5; // w25
  __int64 v6; // x2
  __int64 *v7; // x24
  __int64 *dso_for_object; // x0
  char *v9; // x22
  __int64 v10; // x19
  __int64 **v11; // x2
  __int64 *v12; // x3
  __int64 result; // x0
  __int64 v14; // x19
  int v15; // w3
  __int64 v16; // x0
  int v17; // w3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x3
  __int64 i; // x20
  __int64 v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x0
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  unsigned __int64 v34; // x2
  int v35; // w24
  __int64 v36; // x5
  unsigned int v37; // w0
  __int64 v38; // x1
  unsigned int v39; // w3
  __int64 v40; // x4
  __int64 v41; // x20
  unsigned __int64 v42; // x28
  __int64 v43; // x0
  __int64 v44; // x3
  __int64 v45; // x20
  _QWORD *v46; // x28
  unsigned __int64 *v47; // x1
  unsigned __int64 *v48; // x0
  unsigned __int64 v49; // t1
  __int64 v50; // x0
  __int64 v51; // x2
  unsigned __int64 v52; // x0
  __int64 v53; // x5
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x0
  __int64 v58; // x2
  __int64 v59; // x4
  __int64 v60; // x5
  __int64 v61; // x20
  int v62; // w24
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 *j; // x20
  __int64 v66; // x3
  __int64 v67; // x25
  __int64 k; // x20
  _QWORD *v69; // x0
  __int64 v70; // t1
  __int64 v71; // x3
  unsigned __int64 v72; // x3
  __int64 v73; // x2
  __int64 v74; // x3
  unsigned int v75; // w20
  __int64 v76; // x24
  __int64 v77; // x25
  unsigned int v78; // w3
  __int64 v79; // x24
  __int64 v80; // x25
  __int64 v81; // x0
  __int64 v82; // x3
  __int64 v83; // [xsp+60h] [xbp+60h]
  __int64 v84; // [xsp+68h] [xbp+68h]

  v3 = *a1;
  v5 = *((_DWORD *)a1 + 2);
  if ( strchr(*a1, 36, a3) || (v9 = a1[4], v9 == (char *)-2LL) || (v10 = 0, !strchr(v3, 47, v6)) )
  {
    v7 = dl_ns;
    dso_for_object = dl_find_dso_for_object((unsigned __int64)a1[2]);
    v9 = a1[4];
    v10 = (__int64)(dso_for_object ? dso_for_object : v7);
    if ( v9 == (char *)-2LL )
    {
      v9 = *(char **)(v10 + 48);
      a1[4] = v9;
    }
  }
  v11 = &(&dl_ns)[21 * (_QWORD)v9];
  v12 = v11[4];
  *((_DWORD *)a1 + 10) = *((_DWORD *)v11 + 7);
  *((_BYTE *)a1 + 44) = v12 != 0;
  dl_debug_initialize(0, v9);
  result = (__int64)dl_map_object(v10, v3, 2, 0, v5 | 0x10000000u, (unsigned __int64)a1[4]);
  a1[3] = (char *)result;
  v14 = result;
  if ( !result )
  {
    if ( (v5 & 4) == 0 )
      _libc_assert_fail("mode & RTLD_NOLOAD", (__int64)"dl-open.c", 0x249u, (__int64)"dl_open_worker_begin");
    return result;
  }
  if ( (v5 & 0x40000000) != 0 )
    return result;
  v15 = *(_DWORD *)(result + 864);
  v16 = *(_QWORD *)(result + 776);
  v17 = v15 + 1;
  *(_DWORD *)(v14 + 864) = v17;
  if ( v16 )
  {
    if ( (dl_debug_mask & 0x40) != 0 )
      dl_debug_printf(
        "opening file=%s [%lu]; direct_opencount=%u\n\n",
        *(const char **)(v14 + 8),
        *(_QWORD *)(v14 + 48),
        v17);
    if ( (v5 & 0x100) != 0 )
    {
      if ( (*(_WORD *)(v14 + 868) & 0x20) != 0 )
      {
        if ( (v5 & 0x1000) == 0 )
          goto LABEL_131;
      }
      else
      {
        add_to_global_resize(v14);
        if ( (v5 & 0x1000) == 0 )
          goto LABEL_125;
      }
      if ( (dl_debug_mask & 0x40) == 0 || (*(_BYTE *)(v14 + 871) & 1) != 0 )
      {
        *(_BYTE *)(v14 + 871) = 1;
        goto LABEL_125;
      }
    }
    else
    {
      if ( (v5 & 0x1000) == 0 )
        goto LABEL_131;
      if ( (dl_debug_mask & 0x40) == 0 || (*(_BYTE *)(v14 + 871) & 1) != 0 )
      {
        *(_BYTE *)(v14 + 871) = 1;
        goto LABEL_131;
      }
    }
    dl_debug_printf("marking %s [%lu] as NODELETE\n", *(const char **)(v14 + 8), *(_QWORD *)(v14 + 48));
    *(_BYTE *)(v14 + 871) = 1;
    if ( (v5 & 0x100) != 0 )
    {
LABEL_125:
      if ( (*(_WORD *)(v14 + 868) & 0x20) == 0 )
        add_to_global_update(v14);
    }
LABEL_131:
    result = *(unsigned int *)(dl_debug_update(a1[4]) + 24);
    if ( (_DWORD)result )
      _libc_assert_fail("r_state == RT_CONSISTENT", (__int64)"dl-open.c", 0x273u, (__int64)"dl_open_worker_begin");
    return result;
  }
  if ( (v5 & 0x1000) != 0 )
    *(_BYTE *)(v14 + 872) = 1;
  dl_map_object_deps(v14, 0, 0, 0, v5 & 0x88000008);
  v20 = *(unsigned int *)(v14 + 784);
  for ( i = 0; (unsigned int)v20 > (unsigned int)i; ++i )
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 776) + 8 * i) + 40LL);
      if ( !*(_QWORD *)(v22 + 816) )
        break;
      if ( (unsigned int)v20 <= (unsigned int)++i )
        goto LABEL_22;
    }
    dl_check_map_versions(*(__int64 **)(*(_QWORD *)(*(_QWORD *)(v14 + 776) + 8 * i) + 40LL), 0, 0, v20, v18, v19);
    v23 = *(_QWORD *)(v22 + 176);
    if ( !v23 )
      goto LABEL_20;
    v24 = 0;
    if ( (*(_BYTE *)(v22 + 870) & 0x20) != 0 )
      v24 = *(_QWORD *)v22;
    if ( !(unsigned int)strcmp(
                          *(_QWORD *)(v23 + 8) + *(_QWORD *)(*(_QWORD *)(v22 + 104) + 8LL) + v24,
                          "ld-linux-aarch64.so.1") )
    {
      _rtld_static_init((__int64 *)v22);
      v20 = *(unsigned int *)(v14 + 784);
    }
    else
    {
LABEL_20:
      v20 = *(unsigned int *)(v14 + 784);
    }
  }
LABEL_22:
  v25 = dl_debug_update(a1[4]);
  *(_DWORD *)(v25 + 24) = 0;
  dl_debug_state(v25);
  dl_bti_check(v14, 0);
  if ( (dl_debug_mask & 0x200) != 0 )
    dl_show_scope((_QWORD *)v14, 0);
  v34 = *(_QWORD *)(v14 + 1032);
  v35 = v5 & 0x8000001;
  v36 = 0;
  v37 = 0;
  v38 = *(_QWORD *)v34;
  if ( !dl_lazy )
    v35 = v5 & 0x8000000;
  v39 = -1;
  do
  {
    v40 = v37++;
    if ( (*(_WORD *)(*(_QWORD *)(v38 + 40) + 868LL) & 8) == 0 )
    {
      v36 = v37;
      if ( v39 == -1 )
        v39 = v40;
    }
    v38 = *(_QWORD *)(v34 + 8LL * v37);
  }
  while ( v38 );
  if ( (unsigned int)v36 > v39 )
  {
    v41 = 8LL * (unsigned int)(v36 - 1);
    v42 = 8 * ((unsigned int)(v36 - 1) - (unsigned __int64)((_DWORD)v36 - 1 - v39));
    while ( 1 )
    {
      v43 = *(_QWORD *)(v34 + v41);
      if ( (*(_WORD *)(*(_QWORD *)(v43 + 40) + 868LL) & 8) == 0 )
        dl_relocate_object((__int64 *)v43, *(__int64 ***)(v43 + 976), v35, 0, v26, v27, v28, v29, v30, v31, v32, v33);
      if ( v42 == v41 )
        break;
      v34 = *(_QWORD *)(v14 + 1032);
      v41 -= 8;
    }
  }
  v44 = *(unsigned int *)(v14 + 784);
  v45 = 0;
  if ( !(_DWORD)v44 )
    goto LABEL_128;
  do
  {
    v46 = *(_QWORD **)(*(_QWORD *)(v14 + 776) + 8 * v45);
    if ( (v46[108] & 0x1300000000LL) == 0x1200000000LL )
    {
      v47 = (unsigned __int64 *)v46[122];
      v34 = *v47;
      if ( *v47 )
      {
        v48 = v47 + 1;
        while ( v34 != v14 + 776 )
        {
          v49 = *v48++;
          v34 = v49;
          if ( !v49 )
          {
            v50 = 0;
            do
            {
              v51 = v50++;
              v36 = v47[v50];
            }
            while ( v36 );
            v34 = v51 + 2;
            goto LABEL_48;
          }
        }
      }
      else
      {
        v34 = 1;
LABEL_48:
        v52 = v46[121];
        if ( v52 <= v34 )
        {
          v53 = (__int64)(v46 + 117);
          if ( v52 > 3 || v47 == (unsigned __int64 *)v53 )
          {
            v84 = 2 * v52;
            v82 = malloc(16 * v52, 2 * v52, (__int16 *)v34, v44, v40, v53);
            v53 = (__int64)(v46 + 117);
            if ( !v82 )
              dl_signal_error(12, "dlopen", 0, "cannot create scope list");
          }
          else
          {
            v82 = (__int64)(v46 + 117);
            v84 = 4;
          }
          v83 = v53;
          v55 = j_memcpy(v82);
          v36 = v83;
          v56 = v55;
          v57 = v46[122];
          v46[122] = v56;
          if ( v83 != v57 )
            dl_scope_free(v57);
          v44 = *(unsigned int *)(v14 + 784);
          v46[121] = v84;
        }
      }
    }
    ++v45;
  }
  while ( (unsigned int)v44 > (unsigned int)v45 );
  if ( !(_DWORD)v44 )
  {
LABEL_128:
    v62 = 0;
    if ( (v5 & 0x100) == 0 )
      goto LABEL_71;
LABEL_114:
    add_to_global_resize(v14);
    goto LABEL_71;
  }
  v61 = 0;
  v62 = 0;
  do
  {
    while ( 1 )
    {
      v63 = *(_QWORD *)(*(_QWORD *)(v14 + 776) + 8 * v61);
      if ( (*(_WORD *)(v63 + 868) & 0x10) == 0 )
      {
        if ( *(_QWORD *)(v63 + 1144) )
          break;
      }
      if ( (unsigned int)v44 <= (unsigned int)++v61 )
        goto LABEL_70;
    }
    dl_add_to_slotinfo(v63, 0, v34, v44, v40, v36);
    v44 = *(unsigned int *)(v14 + 784);
    ++v61;
    v62 = 1;
  }
  while ( (unsigned int)v44 > (unsigned int)v61 );
LABEL_70:
  if ( (v5 & 0x100) != 0 )
    goto LABEL_114;
LABEL_71:
  v64 = *(_QWORD *)(v14 + 48);
  for ( j = (&dl_ns)[21 * v64]; j; j = (__int64 *)j[3] )
  {
    if ( (j[109] & 1) != 0 )
    {
      if ( (dl_debug_mask & 0x40) != 0 )
        dl_debug_printf("activating NODELETE for %s [%lu]\n", (const char *)j[1], j[6]);
      *(_WORD *)((char *)j + 871) = 1;
    }
  }
  v66 = *(unsigned int *)(v14 + 784);
  v67 = v14 + 776;
  for ( k = 0; (unsigned int)v66 > (unsigned int)k; ++k )
  {
    v64 = 0;
    v69 = *(_QWORD **)(*(_QWORD *)(v14 + 776) + 8 * k);
    if ( (v69[108] & 0x1300000000LL) == 0x1200000000LL )
    {
      v40 = v69[122];
      v64 = *(_QWORD *)v40;
      if ( *(_QWORD *)v40 )
      {
        v34 = v40 + 8;
        while ( v64 != v67 )
        {
          v70 = *(_QWORD *)v34;
          v34 += 8LL;
          v64 = v70;
          if ( !v70 )
          {
            do
              v71 = v64++;
            while ( *(_QWORD *)(v40 + 8 * v64) );
            v72 = v71 + 2;
            v73 = 8 * v64;
            goto LABEL_89;
          }
        }
        continue;
      }
      v72 = 1;
      v73 = 0;
      v64 = 0;
LABEL_89:
      if ( v69[121] <= v72 )
        _libc_assert_fail("cnt + 1 < imap->l_scope_max", (__int64)"dl-open.c", 0x153u, (__int64)"update_scopes");
      *(_QWORD *)(v40 + 8 * v72) = 0;
      __dmb(0xBu);
      *(_QWORD *)(v69[122] + v73) = v67;
      v34 = (unsigned int)dl_debug_mask;
      if ( (dl_debug_mask & 0x200) != 0 )
      {
LABEL_91:
        dl_show_scope(v69, v64);
        v66 = *(unsigned int *)(v14 + 784);
        continue;
      }
    }
    else
    {
      v34 = (unsigned int)dl_debug_mask;
      if ( (dl_debug_mask & 0x200) != 0 )
        goto LABEL_91;
    }
    v66 = *(unsigned int *)(v14 + 784);
  }
  if ( (dl_find_object_update(v14, v64, (__int16 *)v34, v66, v40, 0x1300000000LL) & 1) == 0 )
    dl_signal_error(12, **(const char ***)(v14 + 56), 0, "cannot allocate address lookup data");
  if ( v62 )
  {
    v74 = *(unsigned int *)(v14 + 784);
    v75 = v74;
    if ( (_DWORD)v74 )
    {
      v76 = 0;
      do
      {
        while ( 1 )
        {
          v77 = *(_QWORD *)(*(_QWORD *)(v14 + 776) + 8 * v76);
          if ( (*(_WORD *)(v77 + 868) & 0x10) == 0 )
          {
            if ( *(_QWORD *)(v77 + 1144) )
            {
              dl_add_to_slotinfo(*(_QWORD *)(*(_QWORD *)(v14 + 776) + 8 * v76), 1, v58, v74, v59, v60);
              v74 = *(unsigned int *)(v14 + 784);
              if ( *(__int16 *)(v77 + 868) < 0 )
                break;
            }
          }
          if ( (unsigned int)v74 <= (unsigned int)++v76 )
            goto LABEL_106;
        }
        if ( (_DWORD)v74 == v75 )
          v75 = v76;
        ++v76;
      }
      while ( (unsigned int)v74 > (unsigned int)v76 );
    }
LABEL_106:
    if ( dl_tls_generation == -1 )
      dl_fatal_printf("TLS generation counter wrapped!  Please report this.");
    atomic_store(dl_tls_generation + 1, (unsigned __int64 *)&dl_tls_generation);
    v78 = *(_DWORD *)(v14 + 784);
    if ( v78 > v75 )
    {
      v79 = 8LL * v75;
      do
      {
        v80 = *(_QWORD *)(*(_QWORD *)(v14 + 776) + v79);
        if ( (*(_QWORD *)(v80 + 864) & 0x801000000000LL) == 0x800000000000LL && *(_QWORD *)(v80 + 1144) )
        {
          v81 = *(_QWORD *)(*(_QWORD *)(v14 + 776) + v79);
          *(_WORD *)(v80 + 868) &= ~0x8000u;
          dl_init_static_tls(v81);
          if ( *(__int16 *)(v80 + 868) < 0 )
            _libc_assert_fail(
              "imap->l_need_tls_init == 0",
              (__int64)"dl-open.c",
              0x1B6u,
              (__int64)"update_tls_slotinfo");
          v78 = *(_DWORD *)(v14 + 784);
        }
        ++v75;
        v79 += 8;
      }
      while ( v75 < v78 );
    }
  }
  if ( (*((_BYTE *)a1 + 44) & 1) == 0 )
    dl_call_libc_early_init((&dl_ns)[21 * (_QWORD)a1[4] + 4], 0);
  result = 1;
  *((_BYTE *)a1 + 45) = 1;
  return result;
}
