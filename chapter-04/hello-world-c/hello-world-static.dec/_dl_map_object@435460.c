__int64 *__fastcall dl_map_object(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v8; // x26
  __int64 *v13; // x27
  __int64 v14; // x0
  __int64 v15; // x1
  unsigned __int64 *v16; // x28
  char v18; // w27
  const char *v19; // x25
  unsigned __int64 v20; // x1
  double v21; // d0
  double v22; // d1
  double v23; // d2
  double v24; // d3
  double v25; // d4
  double v26; // d5
  double v27; // d6
  double v28; // d7
  char v29; // w0
  int8x16_t *cache_lookup; // x4
  const char *v31; // x3
  const char *v32; // x0
  char v33; // w0
  __int64 *v34; // x3
  __int64 *v35; // x6
  unsigned int v36; // w0
  __int64 v37; // x28
  char i; // w0
  __int64 v39; // x0
  double v40; // d0
  double v41; // d1
  double v42; // d2
  double v43; // d3
  double v44; // d4
  double v45; // d5
  double v46; // d6
  double v47; // d7
  __int64 v48; // x24
  __int64 v49; // x0
  __int16 v50; // w2
  __int64 *v51; // x6
  int8x16_t *v52; // x27
  _QWORD *v53; // x5
  __int64 v54; // x3
  unsigned __int64 v55; // x28
  int v56; // w0
  __int64 v57; // x6
  __int64 v58; // x6
  int v59; // [xsp+78h] [xbp+68h]
  int v60; // [xsp+78h] [xbp+68h]
  int v61; // [xsp+84h] [xbp+74h]
  __int64 v62; // [xsp+90h] [xbp+80h]
  char v63; // [xsp+90h] [xbp+80h]
  int8x16_t *v64; // [xsp+90h] [xbp+80h]
  __int64 v65; // [xsp+98h] [xbp+88h]
  __int64 *v66; // [xsp+A0h] [xbp+90h]
  __int64 v67; // [xsp+A0h] [xbp+90h]
  _QWORD *v68; // [xsp+A8h] [xbp+98h]
  char v69; // [xsp+CFh] [xbp+BFh] BYREF
  const char *v70; // [xsp+D0h] [xbp+C0h] BYREF
  __int64 v71[2]; // [xsp+D8h] [xbp+C8h] BYREF
  _BYTE v72[840]; // [xsp+E8h] [xbp+D8h] BYREF

  if ( (a6 & 0x8000000000000000LL) != 0 )
    _libc_assert_fail("nsid >= 0", (__int64)"dl-load.c", 0x7B7u, (__int64)"_dl_map_object");
  if ( a6 >= dl_nns )
    _libc_assert_fail("nsid < GL(dl_nns)", (__int64)"dl-load.c", 0x7B8u, (__int64)"_dl_map_object");
  v8 = 4 * a6;
  v13 = (&dl_ns)[21 * a6];
  if ( !v13 )
  {
LABEL_15:
    v61 = a5 & 0x10000000;
    v18 = dl_debug_mask;
    if ( (dl_debug_mask & 0x40) != 0 )
    {
      if ( a1 )
      {
        v31 = *(const char **)(a1 + 8);
        v32 = "\nfile=%s [%lu];  dynamically loaded by %s [%lu]\n";
        if ( (a5 & 0x10000000) == 0 )
          v32 = "\nfile=%s [%lu];  needed by %s [%lu]\n";
        if ( !*v31 )
        {
          v31 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v31 = "<main program>";
        }
        dl_debug_printf(v32, a2, a6, v31, *(_QWORD *)(a1 + 48));
        v69 = 0;
        if ( strchr((__int64)a2, 0x2Fu) )
        {
LABEL_18:
          v70 = (const char *)expand_dynamic_string_token(a1, a2);
          v19 = v70;
          if ( !v70 )
            goto LABEL_24;
LABEL_19:
          LODWORD(v20) = open_verify_constprop_0(v19, (__int64)v72, &v69, 1);
          if ( (_DWORD)v20 != -1 )
          {
            if ( (a5 & 0x10000000) != 0 )
              a1 = 0;
LABEL_22:
            v71[0] = _libc_stack_end;
            return dl_map_object_from_fd_constprop_0(
                     (char *)a2,
                     v20,
                     (__int64)v72,
                     (__int64)v70,
                     a1,
                     a3,
                     a5,
                     (__int64)v71,
                     v21,
                     v22,
                     v23,
                     v24,
                     v25,
                     v26,
                     v27,
                     v28,
                     a6);
          }
          free((__int64)v19, v21, v22, v23, v24, v25, v26, v27, v28);
LABEL_24:
          if ( (a5 & 0x10000000) == 0 )
            goto LABEL_25;
          goto LABEL_40;
        }
        v65 = strlen(a2) + 1;
        if ( (dl_debug_mask & 1) != 0 )
          dl_debug_printf("find library=%s [%lu]; searching\n", (const char *)a2, a6);
        goto LABEL_31;
      }
      v69 = 0;
      if ( strchr((__int64)a2, 0x2Fu) )
        goto LABEL_23;
      v65 = strlen(a2) + 1;
      if ( (v18 & 1) != 0 )
        dl_debug_printf("find library=%s [%lu]; searching\n", (const char *)a2, a6);
    }
    else
    {
      v69 = 0;
      if ( strchr((__int64)a2, 0x2Fu) )
      {
        if ( a1 )
          goto LABEL_18;
LABEL_23:
        v70 = (const char *)strdup((__int64)a2);
        v19 = v70;
        if ( !v70 )
          goto LABEL_24;
        goto LABEL_19;
      }
      v65 = strlen(a2) + 1;
      if ( (v18 & 1) != 0 )
        dl_debug_printf("find library=%s [%lu]; searching\n", (const char *)a2, a6);
      if ( a1 )
      {
LABEL_31:
        if ( *(_QWORD *)(a1 + 296) )
          goto LABEL_32;
        v66 = dl_ns;
        v37 = a1;
        v63 = 0;
        for ( i = cache_rpath(v37, (_QWORD *)(v37 + 880), 15, (__int64)"RPATH");
              ;
              i = cache_rpath(v37, (_QWORD *)(v37 + 880), 15, (__int64)"RPATH") )
        {
          if ( (i & 1) != 0 )
          {
            LODWORD(v20) = open_path_isra_0(
                             (__int64)a2,
                             v65,
                             a5,
                             (__int64 *)(v37 + 880),
                             (__int64 *)&v70,
                             (__int64)v72,
                             a1,
                             &v69);
            if ( (_DWORD)v20 != -1 )
              goto LABEL_34;
            v63 |= v66 == (__int64 *)v37;
          }
          v37 = *(_QWORD *)(v37 + 808);
          if ( !v37 )
            break;
        }
        if ( (v63 & 1) != 0 )
        {
LABEL_32:
          if ( _rtld_env_path_list != -1 )
          {
LABEL_33:
            LODWORD(v20) = open_path_isra_0(
                             (__int64)a2,
                             v65,
                             a5,
                             &_rtld_env_path_list,
                             (__int64 *)&v70,
                             (__int64)v72,
                             a1,
                             &v69);
            if ( (_DWORD)v20 != -1 )
              goto LABEL_34;
          }
LABEL_41:
          v29 = cache_rpath(a1, (_QWORD *)(a1 + 1016), 29, (__int64)"RUNPATH");
          v20 = a1 + 1016;
          if ( (v29 & 1) == 0 )
            goto LABEL_42;
          v34 = (__int64 *)(a1 + 1016);
          v35 = (__int64 *)a1;
LABEL_74:
          v36 = open_path_isra_0((__int64)a2, v65, a5, v34, (__int64 *)&v70, (__int64)v72, (__int64)v35, &v69);
          v20 = v36;
          if ( v36 == -1 )
          {
LABEL_42:
            v70 = 0;
            if ( (a5 & 0x4000000) != 0 && _libc_enable_secure
              || dl_inhibit_cache
              || (cache_lookup = (int8x16_t *)dl_load_cache_lookup(a2)) == 0 )
            {
LABEL_91:
              v51 = (__int64 *)a1;
              if ( a1 )
                goto LABEL_92;
              goto LABEL_110;
            }
            if ( a1 )
            {
              if ( (*(_DWORD *)(a1 + 1060) & 0x800) == 0 )
                goto LABEL_47;
              goto LABEL_102;
            }
LABEL_101:
            if ( (*((_DWORD *)dl_ns + 265) & 0x800) == 0 )
            {
LABEL_47:
              v62 = (__int64)cache_lookup;
              LODWORD(v20) = open_verify_constprop_0((const char *)cache_lookup, (__int64)v72, &v69, 0);
              cache_lookup = (int8x16_t *)v62;
              if ( (_DWORD)v20 != -1 )
              {
                v70 = (const char *)v62;
                if ( (dl_debug_mask & 1) != 0 )
                  goto LABEL_49;
LABEL_35:
                if ( v61 )
                  a1 = 0;
                goto LABEL_22;
              }
              goto LABEL_90;
            }
LABEL_102:
            v52 = (int8x16_t *)"/lib/aarch64-linux-gnu/";
            v53 = system_dirs_len;
            v54 = 0;
            while ( 1 )
            {
              v55 = v53[v54];
              v64 = cache_lookup;
              v67 = v54;
              v68 = v53;
              v56 = memcmp(cache_lookup, v52, v55);
              cache_lookup = v64;
              v53 = v68;
              if ( !v56 )
                break;
              v54 = v67 + 1;
              v52 = (int8x16_t *)((char *)v52 + v55 + 1);
              if ( v67 == 3 )
                goto LABEL_47;
            }
LABEL_90:
            free((__int64)cache_lookup, v21, v22, v23, v24, v25, v26, v27, v28);
            goto LABEL_91;
          }
LABEL_34:
          if ( (dl_debug_mask & 1) != 0 )
          {
            v60 = v20;
            dl_debug_printf("\n");
            LODWORD(v20) = v60;
            if ( v61 )
              a1 = 0;
            goto LABEL_22;
          }
          goto LABEL_35;
        }
LABEL_67:
        v20 = (unsigned __int64)v66;
        if ( !v66 || (*((_WORD *)v66 + 434) & 3) == 2 )
          goto LABEL_71;
        v33 = cache_rpath((__int64)v66, v66 + 110, 15, (__int64)"RPATH");
        v20 = (unsigned __int64)(v66 + 110);
        if ( (v33 & 1) != 0 )
        {
          if ( a1 )
            v57 = a1;
          else
            v57 = (__int64)v66;
          v20 = (unsigned int)open_path_isra_0(
                                (__int64)a2,
                                v65,
                                a5,
                                v66 + 110,
                                (__int64 *)&v70,
                                (__int64)v72,
                                v57,
                                &v69);
          if ( (a5 & 0x8000000) == 0 )
            goto LABEL_116;
          if ( (_DWORD)v20 != -1 )
            goto LABEL_34;
        }
        else if ( (a5 & 0x8000000) == 0 )
        {
LABEL_71:
          v34 = &_rtld_env_path_list;
          if ( _rtld_env_path_list != -1 )
          {
            if ( !a1 )
            {
              v35 = dl_ns;
              goto LABEL_74;
            }
            goto LABEL_33;
          }
          if ( !a1 )
          {
            v70 = 0;
            if ( (a5 & 0x4000000) != 0 )
            {
              v20 = (unsigned int)dl_inhibit_cache;
              if ( !(_libc_enable_secure | dl_inhibit_cache) )
              {
                cache_lookup = (int8x16_t *)dl_load_cache_lookup(a2);
                if ( cache_lookup )
                  goto LABEL_101;
              }
            }
            else if ( !dl_inhibit_cache )
            {
              cache_lookup = (int8x16_t *)dl_load_cache_lookup(a2);
              if ( cache_lookup )
                goto LABEL_101;
            }
LABEL_110:
            v51 = (&(&(&dl_ns)[4 * v8])[4 * a6])[a6];
            if ( !v51 )
            {
LABEL_93:
              if ( _rtld_search_dirs != -1 )
              {
                LODWORD(v20) = open_path_isra_0(
                                 (__int64)a2,
                                 v65,
                                 a5,
                                 &_rtld_search_dirs,
                                 (__int64 *)&v70,
                                 (__int64)v72,
                                 (__int64)v51,
                                 &v69);
                if ( (dl_debug_mask & 1) == 0 )
                {
LABEL_50:
                  if ( v61 )
                    a1 = 0;
                  if ( (_DWORD)v20 != -1 )
                    goto LABEL_22;
                  goto LABEL_25;
                }
LABEL_49:
                v59 = v20;
                dl_debug_printf("\n");
                LODWORD(v20) = v59;
                goto LABEL_50;
              }
LABEL_38:
              if ( (dl_debug_mask & 1) != 0 )
              {
                dl_debug_printf("\n", v20);
                if ( v61 )
                  a1 = 0;
                goto LABEL_25;
              }
              if ( !v61 )
              {
LABEL_25:
                if ( !a4 )
                {
                  if ( (v69 & 1) != 0 )
                    dl_signal_error(0, (const char *)a2, 0, "wrong ELF class: ELFCLASS32");
                  dl_signal_error(
                    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40),
                    (const char *)a2,
                    0,
                    "cannot open shared object file");
                }
                v39 = strdup((__int64)a2);
                v48 = v39;
                if ( !v39 || (v49 = dl_new_object(v39, a2, a3, a1, a5, a6), (v13 = (__int64 *)v49) == 0) )
                {
                  free(v48, v40, v41, v42, v43, v44, v45, v46, v47);
                  dl_signal_error(12, (const char *)a2, 0, "cannot create shared object descriptor");
                }
                v50 = *(_WORD *)(v49 + 868) | 0x4008;
                *(_DWORD *)(v49 + 828) = 1;
                *(_QWORD *)(v49 + 856) = &dummy_bucket_6;
                *(_WORD *)(v49 + 868) = v50;
                dl_add_to_namespace_list(v49, a6);
                return v13;
              }
LABEL_40:
              a1 = 0;
              goto LABEL_25;
            }
LABEL_92:
            if ( (*((_DWORD *)v51 + 265) & 0x800) != 0 )
              goto LABEL_38;
            goto LABEL_93;
          }
          goto LABEL_41;
        }
        if ( (*((_WORD *)v66 + 434) & 3) == 2 )
          goto LABEL_71;
        v71[0] = 0;
        if ( (cache_rpath((__int64)v66, v71, 29, (__int64)"RUNPATH") & 1) == 0 )
          goto LABEL_71;
        if ( a1 )
          v58 = a1;
        else
          v58 = (__int64)v66;
        v20 = (unsigned int)open_path_isra_0((__int64)a2, v65, a5, v71, (__int64 *)&v70, (__int64)v72, v58, &v69);
LABEL_116:
        if ( (_DWORD)v20 != -1 )
          goto LABEL_34;
        goto LABEL_71;
      }
    }
    v66 = dl_ns;
    goto LABEL_67;
  }
  while ( 1 )
  {
    if ( !(((unsigned __int64)v13[108] >> 46) & 1 | ((unsigned __int64)v13[108] >> 50) & 1) )
    {
      if ( (unsigned int)dl_name_match_p(a2, v13) )
        return v13;
      if ( (v13[108] & 0x200000000000LL) == 0 )
      {
        v14 = v13[22];
        if ( v14 )
        {
          v15 = 0;
          if ( (*((_BYTE *)v13 + 870) & 0x20) != 0 )
            v15 = *v13;
          v16 = (unsigned __int64 *)(*(_QWORD *)(v14 + 8) + *(_QWORD *)(v13[13] + 8) + v15);
          if ( !(unsigned int)strcmp((unsigned __int64 *)a2, (unsigned __int64)v16) )
            break;
        }
      }
    }
    v13 = (__int64 *)v13[3];
    if ( !v13 )
      goto LABEL_15;
  }
  add_name_to_object_isra_0((unsigned __int64 *)v13[7], v16);
  *((_WORD *)v13 + 434) |= 0x2000u;
  return v13;
}
