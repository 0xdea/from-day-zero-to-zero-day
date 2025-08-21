// write access to const memory has been detected, the output may be wrong!
__int64 *dl_non_dynamic_init()
{
  __int64 v0; // x21
  __int64 v1; // x22
  int v2; // w23
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x0
  __int64 v6; // x19
  __int64 v7; // x6
  int v8; // w2
  __int64 v9; // x1
  __int64 v10; // x2
  int v11; // w0
  __int64 v12; // x0
  int v13; // w4
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x3
  __int64 v17; // x2
  __int64 v18; // x0
  __int64 v19; // x1
  unsigned __int64 v20; // x0
  unsigned __int64 v21; // t1
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x2
  __int64 v29; // x4
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 *v32; // x0
  __int64 v33; // x2
  bool v34; // zf
  __int64 v35; // x1
  void *v36; // x2
  __int64 *v37; // x0
  __int64 v38; // x2
  bool v39; // zf
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 *v42; // x0
  __int64 v43; // x1
  bool v44; // zf
  __int64 v45; // x1
  __int64 v46; // x2
  const char *v47; // x19
  unsigned __int8 *v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  _BOOL8 v52; // x1
  __int64 v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  unsigned __int8 *v57; // x0
  __int64 v58; // x3
  __int64 v59; // x4
  _BOOL8 v60; // x2
  unsigned __int8 *v61; // x0
  __int64 v62; // x3
  __int64 v63; // x4
  _BOOL8 v64; // x2
  unsigned __int8 *v65; // x0
  _BOOL4 v66; // w1
  int v67; // w5
  int v68; // w6
  unsigned __int64 v69; // x0
  unsigned __int64 v70; // x2
  __int64 *result; // x0
  __int64 v72; // x0
  unsigned __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x3
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 *v84; // [xsp+60h] [xbp+60h] BYREF
  __int64 v85; // [xsp+68h] [xbp+68h] BYREF
  __int64 v86; // [xsp+70h] [xbp+70h]
  __int64 v87; // [xsp+78h] [xbp+78h]

  qword_491360 = dl_get_origin();
  qword_4912C0 = dl_phdr;
  word_4912D0 = dl_phnum;
  if ( dl_sysinfo_dso )
  {
    v5 = dl_new_object(&qword_456B08, &qword_456B08, 1, 0, 0x1000000, 0);
    v6 = v5;
    if ( v5 )
    {
      v7 = dl_sysinfo_dso;
      v8 = *(unsigned __int16 *)(dl_sysinfo_dso + 56);
      v9 = v7 + *(_QWORD *)(v7 + 32);
      *(_QWORD *)(v5 + 752) = v9;
      *(_WORD *)(v5 + 768) = v8;
      if ( v8 )
      {
        v10 = v9 + 56 + 56LL * (unsigned int)(v8 - 1);
        do
        {
          while ( 1 )
          {
            v11 = *(_DWORD *)v9;
            if ( *(_DWORD *)v9 != 2 )
              break;
            v12 = *(unsigned int *)(v9 + 4);
            v9 += 56;
            v13 = *(_BYTE *)(v6 + 870) & 0xDF | (32 * (((v12 ^ 2uLL) >> 1) & 1));
            v14 = *(_QWORD *)(v9 - 16) >> 4;
            *(_QWORD *)(v6 + 16) = *(_QWORD *)(v9 - 40);
            *(_WORD *)(v6 + 770) = v14;
            *(_BYTE *)(v6 + 870) = v13;
            if ( v9 == v10 )
              goto LABEL_10;
          }
          if ( v11 == 1 )
          {
            v72 = *(_QWORD *)(v9 + 16);
            if ( !*(_QWORD *)v6 )
              *(_QWORD *)v6 = v72;
            v73 = v72 + *(_QWORD *)(v9 + 40);
            if ( v73 >= *(_QWORD *)(v6 + 928) )
              *(_QWORD *)(v6 + 928) = v73;
          }
          else if ( v11 == 7 )
          {
            _libc_assert_fail("ph->p_type != PT_TLS", "setup-vdso.h", 57, "setup_vdso");
            goto LABEL_148;
          }
          v9 += 56;
        }
        while ( v9 != v10 );
      }
LABEL_10:
      v15 = *(_QWORD *)v6;
      *(_QWORD *)(v6 + 920) = v7;
      v16 = *(_QWORD *)(v6 + 16);
      v17 = v7 - v15;
      v18 = *(_QWORD *)(v6 + 928);
      v19 = v16 + v17;
      *(_QWORD *)v6 = v17;
      *(_QWORD *)(v6 + 16) = v16 + v17;
      *(_QWORD *)(v6 + 928) = v18 + v17;
      if ( !(v16 + v17) )
        goto LABEL_39;
      v20 = *(_QWORD *)(v16 + v17);
      if ( v20 )
      {
        do
        {
          if ( v20 > 0x25 )
          {
            if ( v20 - 1879048192 > 5 )
            {
              if ( 1879048191 - v20 > 0xF )
              {
                if ( (unsigned int)(2 * v20) <= 0xFFFFFFF8 )
                {
                  if ( 1879047679 - v20 <= 0xB )
                  {
                    v20 = 1879047742 - v20;
                  }
                  else
                  {
                    if ( 1879047935 - v20 > 0xA )
                      goto LABEL_16;
                    v20 = 1879048010 - v20;
                  }
                }
                else
                {
                  v20 = (unsigned int)(59 - ((2 * (int)v20) >> 1));
                }
              }
              else
              {
                v20 = 1879048235 - v20;
              }
            }
            else
            {
              v20 -= 1879048154LL;
            }
          }
          *(_QWORD *)(v6 + 64 + 8 * v20) = v19;
LABEL_16:
          v21 = *(_QWORD *)(v19 + 16);
          v19 += 16;
          v20 = v21;
        }
        while ( v21 );
      }
      if ( !v17 || (*(_BYTE *)(v6 + 870) & 0x20) != 0 )
      {
        v22 = *(_QWORD *)(v6 + 224);
        if ( !v22 )
          goto LABEL_20;
      }
      else
      {
        v74 = *(_QWORD *)(v6 + 96);
        if ( v74 )
          *(_QWORD *)(v74 + 8) += v17;
        v75 = *(_QWORD *)(v6 + 88);
        if ( v75 )
          *(_QWORD *)(v75 + 8) += v17;
        v76 = *(_QWORD *)(v6 + 104);
        if ( v76 )
          *(_QWORD *)(v76 + 8) += v17;
        v77 = *(_QWORD *)(v6 + 112);
        if ( v77 )
          *(_QWORD *)(v77 + 8) += v17;
        v23 = *(_QWORD *)(v6 + 352);
        if ( v23 )
          *(_QWORD *)(v23 + 8) += v17;
        v78 = *(_QWORD *)(v6 + 248);
        if ( v78 )
          *(_QWORD *)(v78 + 8) += v17;
        v79 = *(_QWORD *)(v6 + 536);
        if ( v79 )
          *(_QWORD *)(v79 + 8) += v17;
        v80 = *(_QWORD *)(v6 + 744);
        if ( v80 )
          *(_QWORD *)(v80 + 8) += v17;
        v81 = *(_QWORD *)(v6 + 120);
        v22 = *(_QWORD *)(v6 + 224);
        if ( v81 )
        {
          v82 = *(_QWORD *)(v81 + 8);
          if ( v82 )
            *(_QWORD *)(v81 + 8) = v17 + v82;
          if ( !v22 )
            goto LABEL_21;
        }
        else if ( !v22 )
        {
LABEL_23:
          if ( !v23 || *(_QWORD *)(*(_QWORD *)(v6 + 360) + 8LL) == 8 )
          {
            v24 = *(_QWORD *)(v6 + 304);
            if ( v24 )
            {
              v25 = *(_QWORD *)(v24 + 8);
              *(_DWORD *)(v6 + 1064) = v25;
              if ( (v25 & 2) != 0 )
                *(_QWORD *)(v6 + 192) = v24;
              if ( (v25 & 4) != 0 )
                *(_QWORD *)(v6 + 240) = v24;
              if ( (v25 & 8) != 0 )
                *(_QWORD *)(v6 + 256) = v24;
            }
            v26 = *(_QWORD *)(v6 + 448);
            if ( !v26 )
              goto LABEL_37;
            v27 = *(_QWORD *)(v26 + 8);
            *(_DWORD *)(v6 + 1060) = v27;
            if ( (v27 & 8) != 0 )
              *(_BYTE *)(v6 + 872) = 1;
            if ( (dl_debug_mask & 0x40) != 0 && (v27 & 0xF7FFF716) != 0 )
            {
              dl_debug_printf("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n", v27 & 0xF7FFF716);
              if ( (*(_DWORD *)(v6 + 1060) & 1) == 0 )
              {
LABEL_37:
                if ( *(_QWORD *)(v6 + 296) )
                  *(_QWORD *)(v6 + 184) = 0;
LABEL_39:
                dl_setup_hash(v6);
                v28 = *(_QWORD *)(v6 + 984);
                v29 = *(_QWORD *)(v6 + 176);
                *(_WORD *)(v6 + 868) |= 8u;
                *(_DWORD *)(v6 + 1052) = 1;
                *(_QWORD *)v28 = v6 + 40;
                *(_DWORD *)(v28 + 8) = 1;
                if ( v29 )
                {
                  v30 = 0;
                  if ( (*(_BYTE *)(v6 + 870) & 0x20) != 0 )
                    v30 = *(_QWORD *)v6;
                  v31 = *(_QWORD *)(v29 + 8) + *(_QWORD *)(*(_QWORD *)(v6 + 104) + 8LL) + v30;
                  **(_QWORD **)(v6 + 56) = v31;
                  *(_QWORD *)(v6 + 8) = v31;
                }
                dl_add_to_namespace_list(v6, 0);
                dl_nns = 1;
                dl_sysinfo_map = v6;
                goto LABEL_44;
              }
            }
            else if ( (v27 & 1) == 0 )
            {
              goto LABEL_37;
            }
            *(_QWORD *)(v6 + 256) = *(_QWORD *)(v6 + 448);
            goto LABEL_37;
          }
LABEL_148:
          _libc_assert_fail(
            "info[DT_RELRENT]->d_un.d_val == sizeof (ElfW(Relr))",
            "get-dynamic-info.h",
            130,
            "elf_get_dynamic_info");
          goto LABEL_149;
        }
      }
      if ( *(_QWORD *)(v22 + 8) != 7 )
      {
LABEL_149:
        _libc_assert_fail("info[DT_PLTREL]->d_un.d_val == DT_RELA", "get-dynamic-info.h", 115, "elf_get_dynamic_info");
        goto LABEL_150;
      }
LABEL_20:
      if ( !*(_QWORD *)(v6 + 120) )
      {
LABEL_22:
        v23 = *(_QWORD *)(v6 + 352);
        goto LABEL_23;
      }
LABEL_21:
      if ( *(_QWORD *)(*(_QWORD *)(v6 + 136) + 8LL) != 24 )
      {
LABEL_150:
        v83 = _libc_assert_fail(
                "info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))",
                "get-dynamic-info.h",
                123,
                "elf_get_dynamic_info");
        return (__int64 *)dl_get_dl_main_map(v83);
      }
      goto LABEL_22;
    }
  }
  v6 = dl_sysinfo_map;
  if ( dl_sysinfo_map )
  {
LABEL_44:
    v85 = 0x2000000000LL;
    v86 = 0;
    v84 = &v85;
    v87 = 0;
    v32 = (__int64 *)dl_lookup_symbol_x("__kernel_clock_gettime", v6, &v84, v6 + 984, &rfv_0, 0, 0, 0);
    if ( v84 )
    {
      v4 = *((unsigned __int16 *)v84 + 3);
      v33 = 0;
      if ( v32 )
        v34 = (_DWORD)v4 == 65521;
      else
        v34 = 1;
      if ( !v34 )
        v33 = *v32;
      v3 = v84[1];
      v35 = dl_sysinfo_map;
      v36 = (void *)(v33 + v3);
    }
    else
    {
      v36 = 0;
      v35 = dl_sysinfo_map;
    }
    dl_vdso_clock_gettime64 = v36;
    if ( v35 )
    {
      v85 = 0x2000000000LL;
      v86 = 0;
      v84 = &v85;
      v87 = 0;
      v37 = (__int64 *)dl_lookup_symbol_x("__kernel_gettimeofday", v35, &v84, v35 + 984, &rfv_0, 0, 0, 0);
      if ( v84 )
      {
        v4 = *((unsigned __int16 *)v84 + 3);
        v38 = 0;
        if ( v37 )
          v39 = (_DWORD)v4 == 65521;
        else
          v39 = 1;
        if ( !v39 )
          v38 = *v37;
        v3 = v84[1];
        v40 = dl_sysinfo_map;
        v41 = v38 + v3;
      }
      else
      {
        v41 = 0;
        v40 = dl_sysinfo_map;
      }
      dl_vdso_gettimeofday = v41;
      if ( v40
        && (v85 = 0x2000000000LL,
            v86 = 0,
            v84 = &v85,
            v87 = 0,
            v42 = (__int64 *)dl_lookup_symbol_x("__kernel_clock_getres", v40, &v84, v40 + 984, &rfv_0, 0, 0, 0),
            v84) )
      {
        v4 = *((unsigned __int16 *)v84 + 3);
        v3 = 65521;
        v43 = 0;
        if ( v42 )
          v44 = (_DWORD)v4 == 65521;
        else
          v44 = 1;
        if ( !v44 )
          v43 = *v42;
        v45 = v43 + v84[1];
      }
      else
      {
        v45 = 0;
      }
    }
    else
    {
      v45 = 0;
      dl_vdso_gettimeofday = 0;
    }
    goto LABEL_67;
  }
  v45 = 0;
  dl_vdso_clock_gettime64 = 0;
  dl_vdso_gettimeofday = 0;
LABEL_67:
  v46 = (unsigned int)_libc_enable_secure;
  dl_vdso_clock_getres_time64 = v45;
  if ( _libc_enable_secure )
  {
    v47 = "GCONV_PATH";
    do
    {
      unsetenv(v47);
      v47 += strlen(v47) + 1;
    }
    while ( v47 < byte_45ACCE );
  }
  v48 = (unsigned __int8 *)getenv("LD_WARN", v45, v46, v3, v4);
  v52 = 0;
  if ( v48 )
    v52 = *v48 != 0;
  dl_verbose = v52;
  v53 = getenv("LD_LIBRARY_PATH", v52, v49, v50, v51);
  dl_init_paths(v53, "LD_LIBRARY_PATH", 0, 0);
  dl_init_all_dirs = dl_all_dirs;
  v57 = (unsigned __int8 *)getenv("LD_BIND_NOW", dl_all_dirs, v54, v55, v56);
  v60 = 1;
  if ( v57 )
    v60 = *v57 == 0;
  dl_lazy = v60;
  v61 = (unsigned __int8 *)getenv("LD_BIND_NOT", &dl_auxv, v60, v58, v59);
  v64 = 0;
  if ( v61 )
    v64 = *v61 != 0;
  dl_bind_not = v64;
  v65 = (unsigned __int8 *)getenv("LD_DYNAMIC_WEAK", &dl_auxv, v64, v62, v63);
  v66 = 1;
  if ( v65 )
    v66 = *v65 == 0;
  dl_dynamic_weak = v66;
  if ( dl_platform )
  {
    if ( *(_BYTE *)dl_platform )
      dl_platformlen = strlen(dl_platform);
    else
      dl_platform = 0;
  }
  v67 = 0;
  v68 = 0;
  v69 = dl_phdr;
  v70 = dl_phdr + 56 * dl_phnum;
  if ( dl_phdr < v70 )
  {
    do
    {
      while ( *(_DWORD *)v69 == 1685382481 )
      {
        v2 = *(_DWORD *)(v69 + 4);
        v69 += 56LL;
        v68 = 1;
        if ( v69 >= v70 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)v69 == 1685382482 )
      {
        v0 = *(_QWORD *)(v69 + 16);
        v67 = 1;
        v1 = *(_QWORD *)(v69 + 40);
      }
      v69 += 56LL;
    }
    while ( v69 < v70 );
LABEL_88:
    if ( v67 )
    {
      unk_491478 = v0;
      unk_491480 = v1;
    }
    if ( v68 )
      dl_stack_flags = v2;
  }
  if ( dl_find_object_init )
    dl_find_object_init();
  result = &dl_main_map;
  if ( unk_491480 )
    return (__int64 *)dl_protect_relro();
  return result;
}
