// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall dl_non_dynamic_init(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // x21
  __int64 v7; // x22
  int v8; // w23
  __int64 v9; // x3
  __int64 v10; // x4
  double v11; // d0
  double v12; // d1
  double v13; // d2
  double v14; // d3
  double v15; // d4
  double v16; // d5
  double v17; // d6
  double v18; // d7
  __int64 v19; // x0
  __int64 v20; // x19
  __int64 v21; // x6
  int v22; // w2
  __int64 v23; // x1
  __int64 v24; // x2
  int v25; // w0
  __int64 v26; // x0
  int v27; // w4
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x3
  __int64 v31; // x2
  __int64 v32; // x0
  __int64 v33; // x1
  unsigned __int64 v34; // x0
  unsigned __int64 v35; // t1
  __int64 v36; // x1
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x2
  __int64 v43; // x4
  __int64 v44; // x1
  __int64 v45; // x0
  __int64 *v46; // x0
  double v47; // d0
  double v48; // d1
  double v49; // d2
  double v50; // d3
  double v51; // d4
  double v52; // d5
  double v53; // d6
  double v54; // d7
  __int64 v55; // x2
  bool v56; // zf
  __int64 v57; // x1
  void *v58; // x2
  __int64 *v59; // x0
  double v60; // d0
  double v61; // d1
  double v62; // d2
  double v63; // d3
  double v64; // d4
  double v65; // d5
  double v66; // d6
  double v67; // d7
  __int64 v68; // x2
  bool v69; // zf
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 *v72; // x0
  __int64 v73; // x1
  bool v74; // zf
  __int64 v75; // x1
  __int64 v76; // x2
  const char *v77; // x19
  unsigned __int8 *v78; // x0
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  _BOOL8 v82; // x1
  _BYTE *v83; // x0
  __int64 v84; // x4
  __int64 v85; // x5
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  unsigned __int8 *v89; // x0
  __int64 v90; // x3
  __int64 v91; // x4
  _BOOL8 v92; // x2
  unsigned __int8 *v93; // x0
  __int64 v94; // x3
  __int64 v95; // x4
  _BOOL8 v96; // x2
  unsigned __int8 *v97; // x0
  _BOOL4 v98; // w1
  int v99; // w5
  int v100; // w6
  unsigned __int64 v101; // x0
  unsigned __int64 v102; // x2
  __int64 *result; // x0
  __int64 v104; // x0
  unsigned __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x1
  __int64 v112; // x1
  __int64 v113; // x3
  __int64 v114; // x0
  __int64 *v115; // [xsp+60h] [xbp+60h] BYREF
  __int64 v116; // [xsp+68h] [xbp+68h] BYREF
  __int64 v117; // [xsp+70h] [xbp+70h]
  __int64 v118; // [xsp+78h] [xbp+78h]

  qword_491360 = dl_get_origin(a1, a2, a3, a4, a5, a6);
  qword_4912C0 = dl_phdr;
  word_4912D0 = dl_phnum;
  if ( dl_sysinfo_dso )
  {
    v19 = dl_new_object(&qword_456B08, &qword_456B08, 1, 0, 0x1000000, 0);
    v20 = v19;
    if ( v19 )
    {
      v21 = dl_sysinfo_dso;
      v22 = *(unsigned __int16 *)(dl_sysinfo_dso + 56);
      v23 = v21 + *(_QWORD *)(v21 + 32);
      *(_QWORD *)(v19 + 752) = v23;
      *(_WORD *)(v19 + 768) = v22;
      if ( v22 )
      {
        v24 = v23 + 56 + 56LL * (unsigned int)(v22 - 1);
        do
        {
          while ( 1 )
          {
            v25 = *(_DWORD *)v23;
            if ( *(_DWORD *)v23 != 2 )
              break;
            v26 = *(unsigned int *)(v23 + 4);
            v23 += 56;
            v27 = *(_BYTE *)(v20 + 870) & 0xDF | (32 * (((v26 ^ 2uLL) >> 1) & 1));
            v28 = *(_QWORD *)(v23 - 16) >> 4;
            *(_QWORD *)(v20 + 16) = *(_QWORD *)(v23 - 40);
            *(_WORD *)(v20 + 770) = v28;
            *(_BYTE *)(v20 + 870) = v27;
            if ( v23 == v24 )
              goto LABEL_10;
          }
          if ( v25 == 1 )
          {
            v104 = *(_QWORD *)(v23 + 16);
            if ( !*(_QWORD *)v20 )
              *(_QWORD *)v20 = v104;
            v105 = v104 + *(_QWORD *)(v23 + 40);
            if ( v105 >= *(_QWORD *)(v20 + 928) )
              *(_QWORD *)(v20 + 928) = v105;
          }
          else if ( v25 == 7 )
          {
            _libc_assert_fail("ph->p_type != PT_TLS", (__int64)"setup-vdso.h", 0x39u, (__int64)"setup_vdso");
          }
          v23 += 56;
        }
        while ( v23 != v24 );
      }
LABEL_10:
      v29 = *(_QWORD *)v20;
      *(_QWORD *)(v20 + 920) = v21;
      v30 = *(_QWORD *)(v20 + 16);
      v31 = v21 - v29;
      v32 = *(_QWORD *)(v20 + 928);
      v33 = v30 + v31;
      *(_QWORD *)v20 = v31;
      *(_QWORD *)(v20 + 16) = v30 + v31;
      *(_QWORD *)(v20 + 928) = v32 + v31;
      if ( !(v30 + v31) )
        goto LABEL_39;
      v34 = *(_QWORD *)(v30 + v31);
      if ( v34 )
      {
        do
        {
          if ( v34 > 0x25 )
          {
            if ( v34 - 1879048192 > 5 )
            {
              if ( 1879048191 - v34 > 0xF )
              {
                if ( (unsigned int)(2 * v34) <= 0xFFFFFFF8 )
                {
                  if ( 1879047679 - v34 <= 0xB )
                  {
                    v34 = 1879047742 - v34;
                  }
                  else
                  {
                    if ( 1879047935 - v34 > 0xA )
                      goto LABEL_16;
                    v34 = 1879048010 - v34;
                  }
                }
                else
                {
                  v34 = (unsigned int)(59 - ((2 * (int)v34) >> 1));
                }
              }
              else
              {
                v34 = 1879048235 - v34;
              }
            }
            else
            {
              v34 -= 1879048154LL;
            }
          }
          *(_QWORD *)(v20 + 64 + 8 * v34) = v33;
LABEL_16:
          v35 = *(_QWORD *)(v33 + 16);
          v33 += 16;
          v34 = v35;
        }
        while ( v35 );
      }
      if ( !v31 || (*(_BYTE *)(v20 + 870) & 0x20) != 0 )
      {
        v36 = *(_QWORD *)(v20 + 224);
        if ( !v36 )
          goto LABEL_20;
      }
      else
      {
        v106 = *(_QWORD *)(v20 + 96);
        if ( v106 )
          *(_QWORD *)(v106 + 8) += v31;
        v107 = *(_QWORD *)(v20 + 88);
        if ( v107 )
          *(_QWORD *)(v107 + 8) += v31;
        v108 = *(_QWORD *)(v20 + 104);
        if ( v108 )
          *(_QWORD *)(v108 + 8) += v31;
        v109 = *(_QWORD *)(v20 + 112);
        if ( v109 )
          *(_QWORD *)(v109 + 8) += v31;
        v37 = *(_QWORD *)(v20 + 352);
        if ( v37 )
          *(_QWORD *)(v37 + 8) += v31;
        v110 = *(_QWORD *)(v20 + 248);
        if ( v110 )
          *(_QWORD *)(v110 + 8) += v31;
        v111 = *(_QWORD *)(v20 + 536);
        if ( v111 )
          *(_QWORD *)(v111 + 8) += v31;
        v112 = *(_QWORD *)(v20 + 744);
        if ( v112 )
          *(_QWORD *)(v112 + 8) += v31;
        v113 = *(_QWORD *)(v20 + 120);
        v36 = *(_QWORD *)(v20 + 224);
        if ( v113 )
        {
          v114 = *(_QWORD *)(v113 + 8);
          if ( v114 )
            *(_QWORD *)(v113 + 8) = v31 + v114;
          if ( !v36 )
            goto LABEL_21;
        }
        else if ( !v36 )
        {
          goto LABEL_23;
        }
      }
      if ( *(_QWORD *)(v36 + 8) != 7 )
        _libc_assert_fail(
          "info[DT_PLTREL]->d_un.d_val == DT_RELA",
          (__int64)"get-dynamic-info.h",
          0x73u,
          (__int64)"elf_get_dynamic_info");
LABEL_20:
      if ( !*(_QWORD *)(v20 + 120) )
      {
LABEL_22:
        v37 = *(_QWORD *)(v20 + 352);
LABEL_23:
        if ( v37 && *(_QWORD *)(*(_QWORD *)(v20 + 360) + 8LL) != 8 )
          _libc_assert_fail(
            "info[DT_RELRENT]->d_un.d_val == sizeof (ElfW(Relr))",
            (__int64)"get-dynamic-info.h",
            0x82u,
            (__int64)"elf_get_dynamic_info");
        v38 = *(_QWORD *)(v20 + 304);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 8);
          *(_DWORD *)(v20 + 1064) = v39;
          if ( (v39 & 2) != 0 )
            *(_QWORD *)(v20 + 192) = v38;
          if ( (v39 & 4) != 0 )
            *(_QWORD *)(v20 + 240) = v38;
          if ( (v39 & 8) != 0 )
            *(_QWORD *)(v20 + 256) = v38;
        }
        v40 = *(_QWORD *)(v20 + 448);
        if ( !v40 )
          goto LABEL_37;
        v41 = *(_QWORD *)(v40 + 8);
        *(_DWORD *)(v20 + 1060) = v41;
        if ( (v41 & 8) != 0 )
          *(_BYTE *)(v20 + 872) = 1;
        if ( (dl_debug_mask & 0x40) != 0 && (v41 & 0xF7FFF716) != 0 )
        {
          dl_debug_printf("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n", v41 & 0xF7FFF716);
          if ( (*(_DWORD *)(v20 + 1060) & 1) == 0 )
          {
LABEL_37:
            if ( *(_QWORD *)(v20 + 296) )
              *(_QWORD *)(v20 + 184) = 0;
LABEL_39:
            dl_setup_hash(v20);
            v42 = *(_QWORD *)(v20 + 984);
            v43 = *(_QWORD *)(v20 + 176);
            *(_WORD *)(v20 + 868) |= 8u;
            *(_DWORD *)(v20 + 1052) = 1;
            *(_QWORD *)v42 = v20 + 40;
            *(_DWORD *)(v42 + 8) = 1;
            if ( v43 )
            {
              v44 = 0;
              if ( (*(_BYTE *)(v20 + 870) & 0x20) != 0 )
                v44 = *(_QWORD *)v20;
              v45 = *(_QWORD *)(v43 + 8) + *(_QWORD *)(*(_QWORD *)(v20 + 104) + 8LL) + v44;
              **(_QWORD **)(v20 + 56) = v45;
              *(_QWORD *)(v20 + 8) = v45;
            }
            dl_add_to_namespace_list(v20, 0);
            dl_nns = 1;
            dl_sysinfo_map = v20;
            goto LABEL_44;
          }
        }
        else if ( (v41 & 1) == 0 )
        {
          goto LABEL_37;
        }
        *(_QWORD *)(v20 + 256) = *(_QWORD *)(v20 + 448);
        goto LABEL_37;
      }
LABEL_21:
      if ( *(_QWORD *)(*(_QWORD *)(v20 + 136) + 8LL) != 24 )
        _libc_assert_fail(
          "info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))",
          (__int64)"get-dynamic-info.h",
          0x7Bu,
          (__int64)"elf_get_dynamic_info");
      goto LABEL_22;
    }
  }
  v20 = dl_sysinfo_map;
  if ( !dl_sysinfo_map )
  {
    v75 = 0;
    dl_vdso_clock_gettime64 = 0;
    dl_vdso_gettimeofday = 0;
    goto LABEL_67;
  }
LABEL_44:
  v116 = 0x2000000000LL;
  v117 = 0;
  v115 = &v116;
  v118 = 0;
  v46 = (__int64 *)dl_lookup_symbol_x(
                     "__kernel_clock_gettime",
                     v20,
                     (__int64 *)&v115,
                     (__int64 **)(v20 + 984),
                     (const char **)&rfv_0,
                     0,
                     0,
                     0,
                     v11,
                     v12,
                     v13,
                     v14,
                     v15,
                     v16,
                     v17,
                     v18);
  if ( v115 )
  {
    v10 = *((unsigned __int16 *)v115 + 3);
    v55 = 0;
    if ( v46 )
      v56 = (_DWORD)v10 == 65521;
    else
      v56 = 1;
    if ( !v56 )
      v55 = *v46;
    v9 = v115[1];
    v57 = dl_sysinfo_map;
    v58 = (void *)(v55 + v9);
  }
  else
  {
    v58 = 0;
    v57 = dl_sysinfo_map;
  }
  dl_vdso_clock_gettime64 = v58;
  if ( v57 )
  {
    v116 = 0x2000000000LL;
    v117 = 0;
    v115 = &v116;
    v118 = 0;
    v59 = (__int64 *)dl_lookup_symbol_x(
                       "__kernel_gettimeofday",
                       v57,
                       (__int64 *)&v115,
                       (__int64 **)(v57 + 984),
                       (const char **)&rfv_0,
                       0,
                       0,
                       0,
                       v47,
                       v48,
                       v49,
                       v50,
                       v51,
                       v52,
                       v53,
                       v54);
    if ( v115 )
    {
      v10 = *((unsigned __int16 *)v115 + 3);
      v68 = 0;
      if ( v59 )
        v69 = (_DWORD)v10 == 65521;
      else
        v69 = 1;
      if ( !v69 )
        v68 = *v59;
      v9 = v115[1];
      v70 = dl_sysinfo_map;
      v71 = v68 + v9;
    }
    else
    {
      v71 = 0;
      v70 = dl_sysinfo_map;
    }
    dl_vdso_gettimeofday = v71;
    if ( v70
      && (v116 = 0x2000000000LL,
          v117 = 0,
          v115 = &v116,
          v118 = 0,
          v72 = (__int64 *)dl_lookup_symbol_x(
                             "__kernel_clock_getres",
                             v70,
                             (__int64 *)&v115,
                             (__int64 **)(v70 + 984),
                             (const char **)&rfv_0,
                             0,
                             0,
                             0,
                             v60,
                             v61,
                             v62,
                             v63,
                             v64,
                             v65,
                             v66,
                             v67),
          v115) )
    {
      v10 = *((unsigned __int16 *)v115 + 3);
      v9 = 65521;
      v73 = 0;
      if ( v72 )
        v74 = (_DWORD)v10 == 65521;
      else
        v74 = 1;
      if ( !v74 )
        v73 = *v72;
      v75 = v73 + v115[1];
    }
    else
    {
      v75 = 0;
    }
  }
  else
  {
    v75 = 0;
    dl_vdso_gettimeofday = 0;
  }
LABEL_67:
  v76 = (unsigned int)_libc_enable_secure;
  dl_vdso_clock_getres_time64 = v75;
  if ( _libc_enable_secure )
  {
    v77 = "GCONV_PATH";
    do
    {
      unsetenv(v77);
      v77 += strlen(v77) + 1;
    }
    while ( v77 < byte_45ACCE );
  }
  v78 = (unsigned __int8 *)getenv("LD_WARN", v75, v76, v9, v10);
  v82 = 0;
  if ( v78 )
    v82 = *v78 != 0;
  dl_verbose = v82;
  v83 = (_BYTE *)getenv("LD_LIBRARY_PATH", v82, v79, v80, v81);
  dl_init_paths(v83, (__int64)"LD_LIBRARY_PATH", 0, 0, v84, v85);
  dl_init_all_dirs = dl_all_dirs;
  v89 = (unsigned __int8 *)getenv("LD_BIND_NOW", dl_all_dirs, v86, v87, v88);
  v92 = 1;
  if ( v89 )
    v92 = *v89 == 0;
  dl_lazy = v92;
  v93 = (unsigned __int8 *)getenv("LD_BIND_NOT", &dl_auxv, v92, v90, v91);
  v96 = 0;
  if ( v93 )
    v96 = *v93 != 0;
  dl_bind_not = v96;
  v97 = (unsigned __int8 *)getenv("LD_DYNAMIC_WEAK", &dl_auxv, v96, v94, v95);
  v98 = 1;
  if ( v97 )
    v98 = *v97 == 0;
  dl_dynamic_weak = v98;
  if ( dl_platform )
  {
    if ( *(_BYTE *)dl_platform )
      dl_platformlen = strlen(dl_platform);
    else
      dl_platform = 0;
  }
  v99 = 0;
  v100 = 0;
  v101 = dl_phdr;
  v102 = dl_phdr + 56 * dl_phnum;
  if ( dl_phdr < v102 )
  {
    do
    {
      while ( *(_DWORD *)v101 == 1685382481 )
      {
        v8 = *(_DWORD *)(v101 + 4);
        v101 += 56LL;
        v100 = 1;
        if ( v101 >= v102 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)v101 == 1685382482 )
      {
        v6 = *(_QWORD *)(v101 + 16);
        v99 = 1;
        v7 = *(_QWORD *)(v101 + 40);
      }
      v101 += 56LL;
    }
    while ( v101 < v102 );
LABEL_88:
    if ( v99 )
    {
      unk_491478 = v6;
      unk_491480 = v7;
    }
    if ( v100 )
      dl_stack_flags = v8;
  }
  if ( dl_find_object_init )
    dl_find_object_init();
  result = &dl_main_map;
  if ( unk_491480 )
    return (__int64 *)dl_protect_relro((__int64)&dl_main_map);
  return result;
}
