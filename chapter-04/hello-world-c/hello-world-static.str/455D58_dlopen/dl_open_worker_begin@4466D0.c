__int64 __fastcall dl_open_worker_begin(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x24
  __int64 v4; // x26
  __int64 v5; // x28
  __int64 *v6; // x20
  __int64 v8; // x25
  __int64 v9; // x2
  __int64 dso_for_object; // x0
  __int64 *v11; // x22
  __int64 v12; // x19
  __int64 **v13; // x2
  __int64 *v14; // x3
  __int64 result; // x0
  __int64 v16; // x19
  int v17; // w3
  __int64 v18; // x20
  __int64 v19; // x0
  int v20; // w3
  unsigned int v21; // w3
  __int64 i; // x20
  __int64 *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x0
  unsigned __int64 v27; // x2
  unsigned int v28; // w24
  __int64 v29; // x5
  unsigned int v30; // w0
  __int64 v31; // x1
  unsigned int v32; // w3
  __int64 v33; // x4
  __int64 v34; // x20
  unsigned __int64 v35; // x28
  __int64 v36; // x0
  __int64 v37; // x3
  unsigned __int64 *v38; // x1
  unsigned __int64 *v39; // x0
  unsigned __int64 v40; // t1
  __int64 v41; // x0
  __int64 v42; // x2
  unsigned __int64 v43; // x0
  __int64 v44; // x5
  __int64 v46; // x3
  __int64 v47; // x0
  __int64 v48; // x3
  __int64 v49; // x0
  __int64 v50; // x2
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x20
  __int64 v54; // x0
  unsigned int v55; // w3
  __int64 v56; // x1
  _QWORD *v57; // x0
  __int64 *v58; // x4
  __int64 *v59; // x2
  __int64 v60; // t1
  __int64 v61; // x3
  unsigned __int64 v62; // x3
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x24
  __int64 v66; // x25
  unsigned int v67; // w3
  __int64 v68; // x0
  __int64 v69; // [xsp+60h] [xbp+60h]
  __int64 v70; // [xsp+68h] [xbp+68h]

  v6 = *a1;
  LODWORD(v8) = *((_DWORD *)a1 + 2);
  if ( strchr(*a1, 36, a3) || (v11 = a1[4], v11 == (__int64 *)-2LL) || (v12 = 0, !strchr(v6, 47, v9)) )
  {
    v3 = (__int64)dl_ns;
    dso_for_object = dl_find_dso_for_object(a1[2]);
    v11 = a1[4];
    v12 = dso_for_object ? dso_for_object : v3;
    if ( v11 == (__int64 *)-2LL )
    {
      v11 = *(__int64 **)(v12 + 48);
      a1[4] = v11;
    }
  }
  v13 = &(&dl_ns)[21 * (_QWORD)v11];
  v14 = v13[4];
  *((_DWORD *)a1 + 10) = *((_DWORD *)v13 + 7);
  *((_BYTE *)a1 + 44) = v14 != 0;
  dl_debug_initialize(0, v11);
  result = dl_map_object(v12, v6, 2, 0, (unsigned int)v8 | 0x10000000, a1[4]);
  a1[3] = (__int64 *)result;
  v16 = result;
  if ( result )
  {
    if ( (v8 & 0x40000000) != 0 )
      return result;
    v17 = *(_DWORD *)(result + 864);
    v18 = v8 & 0x1000;
    v19 = *(_QWORD *)(result + 776);
    v20 = v17 + 1;
    *(_DWORD *)(v16 + 864) = v20;
    if ( !v19 )
    {
      if ( (v8 & 0x1000) != 0 )
        *(_BYTE *)(v16 + 872) = 1;
      dl_map_object_deps(v16, 0, 0, 0, (unsigned int)v8 & 0x88000008);
      v21 = *(_DWORD *)(v16 + 784);
      for ( i = 0; v21 > (unsigned int)i; ++i )
      {
        while ( 1 )
        {
          v23 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v16 + 776) + 8 * i) + 40LL);
          if ( !v23[102] )
            break;
          if ( v21 <= (unsigned int)++i )
            goto LABEL_22;
        }
        dl_check_map_versions(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 776) + 8 * i) + 40LL), 0, 0);
        v24 = v23[22];
        if ( !v24 )
          goto LABEL_20;
        v25 = 0;
        if ( (*((_BYTE *)v23 + 870) & 0x20) != 0 )
          v25 = *v23;
        if ( !(unsigned int)strcmp(*(_QWORD *)(v24 + 8) + *(_QWORD *)(v23[13] + 8) + v25, "ld-linux-aarch64.so.1") )
        {
          _rtld_static_init(v23);
          v21 = *(_DWORD *)(v16 + 784);
        }
        else
        {
LABEL_20:
          v21 = *(_DWORD *)(v16 + 784);
        }
      }
LABEL_22:
      v26 = dl_debug_update(a1[4]);
      *(_DWORD *)(v26 + 24) = 0;
      LODWORD(v11) = v26;
      dl_debug_state(v26);
      v4 = (__int64)&dl_debug_mask;
      dl_bti_check(v16, 0);
      if ( (dl_debug_mask & 0x200) != 0 )
        dl_show_scope(v16, 0);
      v27 = *(_QWORD *)(v16 + 1032);
      v28 = v8 & 0x8000001;
      v29 = 0;
      v30 = 0;
      v31 = *(_QWORD *)v27;
      if ( !dl_lazy )
        v28 = v8 & 0x8000000;
      v32 = -1;
      do
      {
        v33 = v30++;
        if ( (*(_WORD *)(*(_QWORD *)(v31 + 40) + 868LL) & 8) == 0 )
        {
          v29 = v30;
          if ( v32 == -1 )
            v32 = v33;
        }
        v31 = *(_QWORD *)(v27 + 8LL * v30);
      }
      while ( v31 );
      if ( (unsigned int)v29 > v32 )
      {
        v34 = 8LL * (unsigned int)(v29 - 1);
        v35 = 8 * ((unsigned int)(v29 - 1) - (unsigned __int64)((_DWORD)v29 - 1 - v32));
        while ( 1 )
        {
          v36 = *(_QWORD *)(v27 + v34);
          if ( (*(_WORD *)(*(_QWORD *)(v36 + 40) + 868LL) & 8) == 0 )
            dl_relocate_object(v36, *(_QWORD *)(v36 + 976), v28, 0, v33);
          if ( v35 == v34 )
            break;
          v27 = *(_QWORD *)(v16 + 1032);
          v34 -= 8;
        }
      }
      v37 = *(unsigned int *)(v16 + 784);
      v3 = v16 + 776;
      v18 = 0;
      if ( (_DWORD)v37 )
        goto LABEL_40;
LABEL_129:
      v3 = 0;
      if ( (v8 & 0x100) == 0 )
        goto LABEL_71;
LABEL_115:
      add_to_global_resize(v16);
      goto LABEL_71;
    }
    v4 = (__int64)&dl_debug_mask;
    if ( (dl_debug_mask & 0x40) != 0 )
      dl_debug_printf(
        "opening file=%s [%lu]; direct_opencount=%u\n\n",
        *(const char **)(v16 + 8),
        *(_QWORD *)(v16 + 48),
        v20);
    LODWORD(v11) = v8 & 0x100;
    if ( (v8 & 0x100) == 0 )
    {
      if ( (v8 & 0x1000) == 0 )
        goto LABEL_132;
      if ( (dl_debug_mask & 0x40) != 0 )
        goto LABEL_147;
LABEL_139:
      *(_BYTE *)(v16 + 871) = 1;
      goto LABEL_132;
    }
    if ( (*(_WORD *)(v16 + 868) & 0x20) != 0 )
    {
      if ( (v8 & 0x1000) == 0 )
        goto LABEL_132;
    }
    else
    {
      add_to_global_resize(v16);
      if ( (v8 & 0x1000) == 0 )
      {
LABEL_126:
        if ( (*(_WORD *)(v16 + 868) & 0x20) == 0 )
          add_to_global_update(v16);
        goto LABEL_132;
      }
    }
    if ( (dl_debug_mask & 0x40) != 0 && (*(_BYTE *)(v16 + 871) & 1) == 0 )
      goto LABEL_141;
    *(_BYTE *)(v16 + 871) = 1;
    goto LABEL_126;
  }
  if ( (v8 & 4) != 0 )
    return result;
  _libc_assert_fail("mode & RTLD_NOLOAD", "dl-open.c", 585, "dl_open_worker_begin");
LABEL_96:
  dl_debug_printf("activating NODELETE for %s [%lu]\n", (const char *)v6[1], v6[6]);
LABEL_74:
  *(_WORD *)((char *)v6 + 871) = v8;
  while ( 1 )
  {
    v6 = (__int64 *)v6[3];
    if ( !v6 )
      break;
LABEL_72:
    if ( (v6[109] & 1) != 0 )
    {
      if ( (*(_DWORD *)v4 & 0x40) != 0 )
        goto LABEL_96;
      goto LABEL_74;
    }
  }
LABEL_76:
  v55 = *(_DWORD *)(v16 + 784);
  v8 = v16 + 776;
  v18 = 0;
  v5 = 0x1200000000LL;
  while ( v55 > (unsigned int)v18 )
  {
    v56 = 0;
    v57 = *(_QWORD **)(*(_QWORD *)(v16 + 776) + 8 * v18);
    if ( (v57[108] & 0x1300000000LL) == 0x1200000000LL )
    {
      v58 = (__int64 *)v57[122];
      v56 = *v58;
      if ( *v58 )
      {
        v59 = v58 + 1;
        while ( v56 != v8 )
        {
          v60 = *v59++;
          v56 = v60;
          if ( !v60 )
          {
            do
              v61 = v56++;
            while ( v58[v56] );
            v62 = v61 + 2;
            v63 = 8 * v56;
            goto LABEL_88;
          }
        }
        goto LABEL_80;
      }
      v62 = 1;
      v63 = 0;
      v56 = 0;
LABEL_88:
      if ( v57[121] <= v62 )
      {
        _libc_assert_fail("cnt + 1 < imap->l_scope_max", "dl-open.c", 339, "update_scopes");
LABEL_146:
        _libc_assert_fail("imap->l_need_tls_init == 0", "dl-open.c", 438, "update_tls_slotinfo");
LABEL_147:
        if ( (*(_BYTE *)(v16 + 871) & 1) != 0 )
          goto LABEL_139;
LABEL_141:
        dl_debug_printf("marking %s [%lu] as NODELETE\n", *(const char **)(v16 + 8), *(_QWORD *)(v16 + 48));
        *(_BYTE *)(v16 + 871) = 1;
        if ( (_DWORD)v11 )
          goto LABEL_126;
LABEL_132:
        result = *(unsigned int *)(dl_debug_update(a1[4]) + 24);
        if ( !(_DWORD)result )
          return result;
        _libc_assert_fail("r_state == RT_CONSISTENT", "dl-open.c", 627, "dl_open_worker_begin");
LABEL_134:
        v46 = v44;
        v70 = 4;
LABEL_55:
        v69 = v44;
        v47 = j_memcpy(v46);
        v29 = v69;
        v48 = v47;
        v49 = *(_QWORD *)(v5 + 976);
        *(_QWORD *)(v5 + 976) = v48;
        if ( v69 != v49 )
          dl_scope_free();
        v37 = *(unsigned int *)(v16 + 784);
        *(_QWORD *)(v5 + 968) = v70;
        while ( (unsigned int)v37 > (unsigned int)++v18 )
        {
LABEL_40:
          v5 = *(_QWORD *)(*(_QWORD *)(v16 + 776) + 8 * v18);
          if ( (*(_QWORD *)(v5 + 864) & 0x1300000000LL) == 0x1200000000LL )
          {
            v38 = *(unsigned __int64 **)(v5 + 976);
            v27 = *v38;
            if ( *v38 )
            {
              v39 = v38 + 1;
              while ( v27 != v3 )
              {
                v40 = *v39++;
                v27 = v40;
                if ( !v40 )
                {
                  v41 = 0;
                  do
                  {
                    v42 = v41++;
                    v29 = v38[v41];
                  }
                  while ( v29 );
                  v27 = v42 + 2;
                  goto LABEL_48;
                }
              }
            }
            else
            {
              v27 = 1;
LABEL_48:
              v43 = *(_QWORD *)(v5 + 968);
              if ( v43 <= v27 )
              {
                v44 = v5 + 936;
                if ( v43 <= 3 && v38 != (unsigned __int64 *)v44 )
                  goto LABEL_134;
                v70 = 2 * v43;
                v46 = malloc(16 * v43, 2 * v43, (__int16 *)v27, v37, v33, v44);
                v44 = v5 + 936;
                if ( !v46 )
                  dl_signal_error(12, "dlopen", 0, "cannot create scope list");
                goto LABEL_55;
              }
            }
          }
        }
        if ( !(_DWORD)v37 )
          goto LABEL_129;
        v53 = 0;
        v3 = 0;
        do
        {
          while ( 1 )
          {
            v54 = *(_QWORD *)(*(_QWORD *)(v16 + 776) + 8 * v53);
            if ( (*(_WORD *)(v54 + 868) & 0x10) == 0 )
            {
              if ( *(_QWORD *)(v54 + 1144) )
                break;
            }
            if ( (unsigned int)v37 <= (unsigned int)++v53 )
              goto LABEL_70;
          }
          dl_add_to_slotinfo(v54, 0, v27, v37, v33, v29);
          v37 = *(unsigned int *)(v16 + 784);
          ++v53;
          v3 = 1;
        }
        while ( (unsigned int)v37 > (unsigned int)v53 );
LABEL_70:
        if ( (v8 & 0x100) != 0 )
          goto LABEL_115;
LABEL_71:
        LOWORD(v8) = 1;
        v6 = (&dl_ns)[21 * *(_QWORD *)(v16 + 48)];
        if ( v6 )
          goto LABEL_72;
        goto LABEL_76;
      }
      v58[v62] = 0;
      __dmb(0xBu);
      *(_QWORD *)(v57[122] + v63) = v8;
      if ( (*(_DWORD *)v4 & 0x200) != 0 )
      {
LABEL_90:
        dl_show_scope(v57, v56);
        v55 = *(_DWORD *)(v16 + 784);
        goto LABEL_80;
      }
    }
    else if ( (*(_DWORD *)v4 & 0x200) != 0 )
    {
      goto LABEL_90;
    }
    v55 = *(_DWORD *)(v16 + 784);
LABEL_80:
    ++v18;
  }
  if ( (dl_find_object_update(v16) & 1) == 0 )
    dl_signal_error(12, **(_QWORD **)(v16 + 56), 0, "cannot allocate address lookup data");
  if ( (_DWORD)v3 )
  {
    v64 = *(unsigned int *)(v16 + 784);
    v18 = (unsigned int)v64;
    if ( (_DWORD)v64 )
    {
      v65 = 0;
      do
      {
        while ( 1 )
        {
          v66 = *(_QWORD *)(*(_QWORD *)(v16 + 776) + 8 * v65);
          if ( (*(_WORD *)(v66 + 868) & 0x10) == 0 )
          {
            if ( *(_QWORD *)(v66 + 1144) )
            {
              dl_add_to_slotinfo(*(_QWORD *)(*(_QWORD *)(v16 + 776) + 8 * v65), 1, v50, v64, v51, v52);
              v64 = *(unsigned int *)(v16 + 784);
              if ( *(__int16 *)(v66 + 868) < 0 )
                break;
            }
          }
          if ( (unsigned int)v64 <= (unsigned int)++v65 )
            goto LABEL_107;
        }
        if ( (_DWORD)v64 == (_DWORD)v18 )
          v18 = (unsigned int)v65;
        else
          v18 = (unsigned int)v18;
        ++v65;
      }
      while ( (unsigned int)v64 > (unsigned int)v65 );
    }
LABEL_107:
    if ( dl_tls_generation == -1 )
      dl_fatal_printf("TLS generation counter wrapped!  Please report this.");
    atomic_store(dl_tls_generation + 1, (unsigned __int64 *)&dl_tls_generation);
    v67 = *(_DWORD *)(v16 + 784);
    if ( v67 > (unsigned int)v18 )
    {
      v3 = 8LL * (unsigned int)v18;
      v5 = 0x801000000000LL;
      v4 = 0x800000000000LL;
      do
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v16 + 776) + v3);
        if ( (*(_QWORD *)(v8 + 864) & 0x801000000000LL) == 0x800000000000LL && *(_QWORD *)(v8 + 1144) )
        {
          v68 = *(_QWORD *)(*(_QWORD *)(v16 + 776) + v3);
          *(_WORD *)(v8 + 868) &= ~0x8000u;
          dl_init_static_tls(v68);
          if ( *(__int16 *)(v8 + 868) < 0 )
            goto LABEL_146;
          v67 = *(_DWORD *)(v16 + 784);
        }
        v18 = (unsigned int)(v18 + 1);
        v3 += 8;
      }
      while ( (unsigned int)v18 < v67 );
    }
  }
  if ( (*((_BYTE *)a1 + 44) & 1) == 0 )
    dl_call_libc_early_init((&dl_ns)[21 * (_QWORD)a1[4] + 4], 0);
  result = 1;
  *((_BYTE *)a1 + 45) = 1;
  return result;
}
