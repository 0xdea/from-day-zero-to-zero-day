__int64 __fastcall dl_open_worker_begin(__int64 a1)
{
  unsigned __int8 *v1; // x20
  int v3; // w25
  __int64 *v4; // x24
  __int64 *dso_for_object; // x0
  __int64 v6; // x22
  __int64 v7; // x19
  __int64 **v8; // x2
  __int64 *v9; // x3
  __int64 result; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 *v13; // x4
  void *v14; // x5
  void *v15; // x6
  double v16; // d0
  double v17; // d1
  double v18; // d2
  double v19; // d3
  double v20; // d4
  double v21; // d5
  double v22; // d6
  double v23; // d7
  __int64 v24; // x19
  int v25; // w3
  __int64 v26; // x0
  __int64 v27; // x3
  unsigned int v28; // w3
  __int64 i; // x20
  __int64 *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  unsigned __int64 v41; // x2
  int v42; // w24
  unsigned __int64 v43; // x5
  unsigned int v44; // w0
  __int64 v45; // x1
  unsigned int v46; // w3
  unsigned __int64 v47; // x4
  __int64 v48; // x20
  unsigned __int64 v49; // x28
  __int64 v50; // x0
  __int64 v51; // x3
  __int64 v52; // x20
  unsigned __int64 v53; // x6
  _QWORD *v54; // x28
  unsigned __int64 *v55; // x0
  unsigned __int64 v56; // t1
  __int64 v57; // x0
  __int64 v58; // x2
  unsigned __int64 v59; // x0
  void *v60; // x5
  __int64 v62; // x0
  __int64 v63; // x3
  __int64 v64; // x0
  __int64 v65; // x2
  void *v66; // x4
  void *v67; // x5
  void *v68; // x6
  double v69; // d0
  double v70; // d1
  double v71; // d2
  double v72; // d3
  double v73; // d4
  double v74; // d5
  double v75; // d6
  double v76; // d7
  __int64 v77; // x20
  int v78; // w24
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 *j; // x20
  __int64 v82; // x3
  __int64 v83; // x25
  __int64 k; // x20
  _QWORD *v85; // x0
  __int64 v86; // t1
  __int64 v87; // x3
  unsigned __int64 v88; // x3
  __int64 v89; // x2
  __int64 v90; // x3
  unsigned int v91; // w20
  __int64 v92; // x24
  __int64 v93; // x25
  unsigned int v94; // w3
  __int64 v95; // x24
  __int64 v96; // x25
  _QWORD *v97; // x0
  __int64 v98; // x3
  void *v99; // [xsp+60h] [xbp+60h]
  __int64 v100; // [xsp+68h] [xbp+68h]

  v1 = *(unsigned __int8 **)a1;
  v3 = *(_DWORD *)(a1 + 8);
  if ( strchr(*(_QWORD *)a1, 0x24u) || (v6 = *(_QWORD *)(a1 + 32), v6 == -2) || (v7 = 0, !strchr((__int64)v1, 0x2Fu)) )
  {
    v4 = dl_ns;
    dso_for_object = dl_find_dso_for_object(*(_QWORD *)(a1 + 16));
    v6 = *(_QWORD *)(a1 + 32);
    v7 = (__int64)(dso_for_object ? dso_for_object : v4);
    if ( v6 == -2 )
    {
      v6 = *(_QWORD *)(v7 + 48);
      *(_QWORD *)(a1 + 32) = v6;
    }
  }
  v8 = &(&dl_ns)[21 * v6];
  v9 = v8[4];
  *(_DWORD *)(a1 + 40) = *((_DWORD *)v8 + 7);
  *(_BYTE *)(a1 + 44) = v9 != 0;
  dl_debug_initialize(0, v6);
  result = (__int64)dl_map_object(v7, v1, 2u, 0, v3 | 0x10000000u, *(_QWORD *)(a1 + 32));
  *(_QWORD *)(a1 + 24) = result;
  v24 = result;
  if ( !result )
  {
    if ( (v3 & 4) == 0 )
      _libc_assert_fail("mode & RTLD_NOLOAD", (__int64)"dl-open.c", 0x249u, (__int64)"dl_open_worker_begin");
    return result;
  }
  if ( (v3 & 0x40000000) != 0 )
    return result;
  v25 = *(_DWORD *)(result + 864);
  v26 = *(_QWORD *)(result + 776);
  v27 = (unsigned int)(v25 + 1);
  *(_DWORD *)(v24 + 864) = v27;
  if ( v26 )
  {
    if ( (dl_debug_mask & 0x40) != 0 )
      dl_debug_printf(
        "opening file=%s [%lu]; direct_opencount=%u\n\n",
        *(const char **)(v24 + 8),
        *(_QWORD *)(v24 + 48),
        v27);
    if ( (v3 & 0x100) != 0 )
    {
      if ( (*(_WORD *)(v24 + 868) & 0x20) != 0 )
      {
        if ( (v3 & 0x1000) == 0 )
          goto LABEL_131;
      }
      else
      {
        add_to_global_resize(v24, v16, v17, v18, v19, v20, v21, v22, v23, v11, v12, v27, v13, v14, v15);
        if ( (v3 & 0x1000) == 0 )
          goto LABEL_125;
      }
      if ( (dl_debug_mask & 0x40) == 0 || (*(_BYTE *)(v24 + 871) & 1) != 0 )
      {
        *(_BYTE *)(v24 + 871) = 1;
        goto LABEL_125;
      }
    }
    else
    {
      if ( (v3 & 0x1000) == 0 )
        goto LABEL_131;
      if ( (dl_debug_mask & 0x40) == 0 || (*(_BYTE *)(v24 + 871) & 1) != 0 )
      {
        *(_BYTE *)(v24 + 871) = 1;
        goto LABEL_131;
      }
    }
    dl_debug_printf("marking %s [%lu] as NODELETE\n", *(const char **)(v24 + 8), *(_QWORD *)(v24 + 48));
    *(_BYTE *)(v24 + 871) = 1;
    if ( (v3 & 0x100) != 0 )
    {
LABEL_125:
      if ( (*(_WORD *)(v24 + 868) & 0x20) == 0 )
        add_to_global_update(v24);
    }
LABEL_131:
    result = (unsigned int)dl_debug_update(*(_QWORD *)(a1 + 32))[6];
    if ( (_DWORD)result )
      _libc_assert_fail("r_state == RT_CONSISTENT", (__int64)"dl-open.c", 0x273u, (__int64)"dl_open_worker_begin");
    return result;
  }
  if ( (v3 & 0x1000) != 0 )
    *(_BYTE *)(v24 + 872) = 1;
  dl_map_object_deps(v24, 0, 0, 0, v3 & 0x88000008);
  v28 = *(_DWORD *)(v24 + 784);
  for ( i = 0; v28 > (unsigned int)i; ++i )
  {
    while ( 1 )
    {
      v30 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v24 + 776) + 8 * i) + 40LL);
      if ( !v30[102] )
        break;
      if ( v28 <= (unsigned int)++i )
        goto LABEL_22;
    }
    dl_check_map_versions(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 776) + 8 * i) + 40LL), 0, 0);
    v31 = v30[22];
    if ( !v31 )
      goto LABEL_20;
    v32 = 0;
    if ( (*((_BYTE *)v30 + 870) & 0x20) != 0 )
      v32 = *v30;
    if ( !(unsigned int)strcmp(
                          (unsigned __int64 *)(*(_QWORD *)(v31 + 8) + *(_QWORD *)(v30[13] + 8) + v32),
                          (unsigned __int64)"ld-linux-aarch64.so.1") )
    {
      _rtld_static_init(v30);
      v28 = *(_DWORD *)(v24 + 784);
    }
    else
    {
LABEL_20:
      v28 = *(_DWORD *)(v24 + 784);
    }
  }
LABEL_22:
  dl_debug_update(*(_QWORD *)(a1 + 32))[6] = 0;
  dl_debug_state();
  dl_bti_check(v24, 0);
  if ( (dl_debug_mask & 0x200) != 0 )
    dl_show_scope((_QWORD *)v24, 0);
  v41 = *(_QWORD *)(v24 + 1032);
  v42 = v3 & 0x8000001;
  v43 = 0;
  v44 = 0;
  v45 = *(_QWORD *)v41;
  if ( !dl_lazy )
    v42 = v3 & 0x8000000;
  v46 = -1;
  do
  {
    v47 = v44++;
    if ( (*(_WORD *)(*(_QWORD *)(v45 + 40) + 868LL) & 8) == 0 )
    {
      v43 = v44;
      if ( v46 == -1 )
        v46 = v47;
    }
    v45 = *(_QWORD *)(v41 + 8LL * v44);
  }
  while ( v45 );
  if ( (unsigned int)v43 > v46 )
  {
    v48 = 8LL * (unsigned int)(v43 - 1);
    v49 = 8 * ((unsigned int)(v43 - 1) - (unsigned __int64)((_DWORD)v43 - 1 - v46));
    while ( 1 )
    {
      v50 = *(_QWORD *)(v41 + v48);
      v45 = *(unsigned __int16 *)(*(_QWORD *)(v50 + 40) + 868LL);
      if ( (v45 & 8) == 0 )
        dl_relocate_object(v50, *(__int64 ***)(v50 + 976), v42, 0, v33, v34, v35, v36, v37, v38, v39, v40);
      if ( v49 == v48 )
        break;
      v41 = *(_QWORD *)(v24 + 1032);
      v48 -= 8;
    }
  }
  v51 = *(unsigned int *)(v24 + 784);
  v52 = 0;
  v53 = 0x1200000000LL;
  if ( !(_DWORD)v51 )
    goto LABEL_128;
  do
  {
    v54 = *(_QWORD **)(*(_QWORD *)(v24 + 776) + 8 * v52);
    if ( (v54[108] & 0x1300000000LL) == 0x1200000000LL )
    {
      v45 = v54[122];
      v41 = *(_QWORD *)v45;
      if ( *(_QWORD *)v45 )
      {
        v55 = (unsigned __int64 *)(v45 + 8);
        while ( v41 != v24 + 776 )
        {
          v56 = *v55++;
          v41 = v56;
          if ( !v56 )
          {
            v57 = 0;
            do
            {
              v58 = v57++;
              v43 = *(_QWORD *)(v45 + 8 * v57);
            }
            while ( v43 );
            v41 = v58 + 2;
            goto LABEL_48;
          }
        }
      }
      else
      {
        v41 = 1;
LABEL_48:
        v59 = v54[121];
        if ( v59 <= v41 )
        {
          v60 = v54 + 117;
          if ( v59 > 3 || v45 == (_QWORD)v60 )
          {
            v100 = 2 * v59;
            v98 = malloc(
                    16 * v59,
                    v33,
                    v34,
                    v35,
                    v36,
                    v37,
                    v38,
                    v39,
                    v40,
                    2 * v59,
                    v41,
                    v51,
                    (void *)v47,
                    v60,
                    (void *)0x1200000000LL);
            v60 = v54 + 117;
            if ( !v98 )
              dl_signal_error(12, "dlopen", 0, "cannot create scope list");
          }
          else
          {
            v98 = (__int64)(v54 + 117);
            v100 = 4;
          }
          v99 = v60;
          v62 = j_memcpy(v98);
          v43 = (unsigned __int64)v99;
          v63 = v62;
          v64 = v54[122];
          v54[122] = v63;
          v53 = 0x1200000000LL;
          if ( v99 != (void *)v64 )
          {
            dl_scope_free(
              v64,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40,
              v45,
              v41,
              v63,
              (void *)v47,
              v99,
              (void *)0x1200000000LL);
            v53 = 0x1200000000LL;
          }
          v51 = *(unsigned int *)(v24 + 784);
          v54[121] = v100;
        }
      }
    }
    ++v52;
  }
  while ( (unsigned int)v51 > (unsigned int)v52 );
  if ( !(_DWORD)v51 )
  {
LABEL_128:
    v78 = 0;
    if ( (v3 & 0x100) == 0 )
      goto LABEL_71;
LABEL_114:
    add_to_global_resize(
      v24,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v45,
      v41,
      v51,
      (__int64 *)v47,
      (void *)v43,
      (void *)v53);
    goto LABEL_71;
  }
  v77 = 0;
  v78 = 0;
  do
  {
    while ( 1 )
    {
      v79 = *(_QWORD *)(*(_QWORD *)(v24 + 776) + 8 * v77);
      v45 = *(unsigned __int16 *)(v79 + 868);
      if ( (v45 & 0x10) == 0 )
      {
        v45 = *(_QWORD *)(v79 + 1144);
        if ( v45 )
          break;
      }
      if ( (unsigned int)v51 <= (unsigned int)++v77 )
        goto LABEL_70;
    }
    dl_add_to_slotinfo(v79, 0, v33, v34, v35, v36, v37, v38, v39, v40, v41, v51, (void *)v47, (void *)v43, (void *)v53);
    v51 = *(unsigned int *)(v24 + 784);
    ++v77;
    v78 = 1;
  }
  while ( (unsigned int)v51 > (unsigned int)v77 );
LABEL_70:
  if ( (v3 & 0x100) != 0 )
    goto LABEL_114;
LABEL_71:
  v80 = *(_QWORD *)(v24 + 48);
  for ( j = (&dl_ns)[21 * v80]; j; j = (__int64 *)j[3] )
  {
    if ( (j[109] & 1) != 0 )
    {
      if ( (dl_debug_mask & 0x40) != 0 )
        dl_debug_printf("activating NODELETE for %s [%lu]\n", (const char *)j[1], j[6]);
      *(_WORD *)((char *)j + 871) = 1;
    }
  }
  v82 = *(unsigned int *)(v24 + 784);
  v83 = v24 + 776;
  for ( k = 0; (unsigned int)v82 > (unsigned int)k; ++k )
  {
    v80 = 0;
    v85 = *(_QWORD **)(*(_QWORD *)(v24 + 776) + 8 * k);
    if ( (v85[108] & 0x1300000000LL) == 0x1200000000LL )
    {
      v47 = v85[122];
      v80 = *(_QWORD *)v47;
      if ( *(_QWORD *)v47 )
      {
        v41 = v47 + 8;
        while ( v80 != v83 )
        {
          v86 = *(_QWORD *)v41;
          v41 += 8LL;
          v80 = v86;
          if ( !v86 )
          {
            do
              v87 = v80++;
            while ( *(_QWORD *)(v47 + 8 * v80) );
            v88 = v87 + 2;
            v89 = 8 * v80;
            goto LABEL_89;
          }
        }
        continue;
      }
      v88 = 1;
      v89 = 0;
      v80 = 0;
LABEL_89:
      v53 = v85[121];
      if ( v53 <= v88 )
        _libc_assert_fail("cnt + 1 < imap->l_scope_max", (__int64)"dl-open.c", 0x153u, (__int64)"update_scopes");
      *(_QWORD *)(v47 + 8 * v88) = 0;
      __dmb(0xBu);
      *(_QWORD *)(v85[122] + v89) = v83;
      v41 = (unsigned int)dl_debug_mask;
      if ( (dl_debug_mask & 0x200) != 0 )
      {
LABEL_91:
        dl_show_scope(v85, v80);
        v82 = *(unsigned int *)(v24 + 784);
        continue;
      }
    }
    else
    {
      v41 = (unsigned int)dl_debug_mask;
      if ( (dl_debug_mask & 0x200) != 0 )
        goto LABEL_91;
    }
    v82 = *(unsigned int *)(v24 + 784);
  }
  if ( (dl_find_object_update(
          v24,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v80,
          v41,
          v82,
          (void *)v47,
          (void *)0x1300000000LL,
          (void *)v53)
      & 1) == 0 )
    dl_signal_error(12, **(const char ***)(v24 + 56), 0, "cannot allocate address lookup data");
  if ( v78 )
  {
    v90 = *(unsigned int *)(v24 + 784);
    v91 = v90;
    if ( (_DWORD)v90 )
    {
      v92 = 0;
      do
      {
        while ( 1 )
        {
          v93 = *(_QWORD *)(*(_QWORD *)(v24 + 776) + 8 * v92);
          if ( (*(_WORD *)(v93 + 868) & 0x10) == 0 )
          {
            if ( *(_QWORD *)(v93 + 1144) )
            {
              dl_add_to_slotinfo(
                *(_QWORD *)(*(_QWORD *)(v24 + 776) + 8 * v92),
                1,
                v69,
                v70,
                v71,
                v72,
                v73,
                v74,
                v75,
                v76,
                v65,
                v90,
                v66,
                v67,
                v68);
              v90 = *(unsigned int *)(v24 + 784);
              if ( *(__int16 *)(v93 + 868) < 0 )
                break;
            }
          }
          if ( (unsigned int)v90 <= (unsigned int)++v92 )
            goto LABEL_106;
        }
        if ( (_DWORD)v90 == v91 )
          v91 = v92;
        ++v92;
      }
      while ( (unsigned int)v90 > (unsigned int)v92 );
    }
LABEL_106:
    if ( dl_tls_generation == -1 )
      dl_fatal_printf("TLS generation counter wrapped!  Please report this.");
    atomic_store(dl_tls_generation + 1, (unsigned __int64 *)&dl_tls_generation);
    v94 = *(_DWORD *)(v24 + 784);
    if ( v94 > v91 )
    {
      v95 = 8LL * v91;
      do
      {
        v96 = *(_QWORD *)(*(_QWORD *)(v24 + 776) + v95);
        if ( (*(_QWORD *)(v96 + 864) & 0x801000000000LL) == 0x800000000000LL && *(_QWORD *)(v96 + 1144) )
        {
          v97 = *(_QWORD **)(*(_QWORD *)(v24 + 776) + v95);
          *(_WORD *)(v96 + 868) &= ~0x8000u;
          dl_init_static_tls(v97);
          if ( *(__int16 *)(v96 + 868) < 0 )
            _libc_assert_fail(
              "imap->l_need_tls_init == 0",
              (__int64)"dl-open.c",
              0x1B6u,
              (__int64)"update_tls_slotinfo");
          v94 = *(_DWORD *)(v24 + 784);
        }
        ++v91;
        v95 += 8;
      }
      while ( v91 < v94 );
    }
  }
  if ( (*(_BYTE *)(a1 + 44) & 1) == 0 )
    dl_call_libc_early_init((&dl_ns)[21 * *(_QWORD *)(a1 + 32) + 4], 0);
  result = 1;
  *(_BYTE *)(a1 + 45) = 1;
  return result;
}
