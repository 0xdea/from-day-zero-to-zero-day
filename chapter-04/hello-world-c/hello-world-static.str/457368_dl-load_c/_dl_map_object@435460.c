__int64 *__fastcall dl_map_object(__int64 a1, const char *a2, __int64 a3, int a4, unsigned int a5, unsigned __int64 a6)
{
  unsigned __int64 v8; // x26
  unsigned int v10; // w23
  __int64 *v13; // x27
  __int64 v14; // x0
  __int64 v15; // x1
  const char *v16; // x28
  char v18; // w27
  const char *v19; // x25
  unsigned __int64 v20; // x1
  char v21; // w0
  const char *cache_lookup; // x4
  const char *v23; // x3
  const char *v24; // x0
  __int64 v25; // x2
  char v26; // w0
  __int64 *v27; // x3
  __int64 *v28; // x6
  unsigned int v29; // w0
  __int64 v30; // x28
  char i; // w0
  __int64 v32; // x0
  __int64 v33; // x24
  __int64 v34; // x0
  __int16 v35; // w2
  __int64 *v36; // x6
  const char *v37; // x27
  _QWORD *v38; // x5
  __int64 v39; // x3
  __int64 v40; // x28
  int v41; // w0
  __int64 v42; // x6
  __int64 v43; // x6
  int v44; // [xsp+78h] [xbp+68h]
  int v45; // [xsp+78h] [xbp+68h]
  unsigned int v46; // [xsp+84h] [xbp+74h]
  __int64 v47; // [xsp+90h] [xbp+80h]
  char v48; // [xsp+90h] [xbp+80h]
  const char *v49; // [xsp+90h] [xbp+80h]
  __int64 v50; // [xsp+98h] [xbp+88h]
  __int64 *v51; // [xsp+A0h] [xbp+90h]
  __int64 v52; // [xsp+A0h] [xbp+90h]
  _QWORD *v53; // [xsp+A8h] [xbp+98h]
  char v54; // [xsp+CFh] [xbp+BFh] BYREF
  const char *v55; // [xsp+D0h] [xbp+C0h] BYREF
  __int64 v56[2]; // [xsp+D8h] [xbp+C8h] BYREF
  _BYTE v57[840]; // [xsp+E8h] [xbp+D8h] BYREF

  if ( (a6 & 0x8000000000000000LL) != 0 )
    _libc_assert_fail("nsid >= 0", (__int64)"dl-load.c", 0x7B7u, (__int64)"_dl_map_object");
  if ( a6 >= dl_nns )
    _libc_assert_fail("nsid < GL(dl_nns)", (__int64)"dl-load.c", 0x7B8u, (__int64)"_dl_map_object");
  v8 = 4 * a6;
  v10 = a3;
  v13 = (&dl_ns)[21 * a6];
  if ( !v13 )
  {
LABEL_15:
    v46 = a5 & 0x10000000;
    v18 = dl_debug_mask;
    if ( (dl_debug_mask & 0x40) != 0 )
    {
      if ( a1 )
      {
        v23 = *(const char **)(a1 + 8);
        v24 = "\nfile=%s [%lu];  dynamically loaded by %s [%lu]\n";
        if ( (a5 & 0x10000000) == 0 )
          v24 = "\nfile=%s [%lu];  needed by %s [%lu]\n";
        if ( !*v23 )
        {
          v23 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v23 = "<main program>";
        }
        dl_debug_printf(v24, a2, a6, v23, *(_QWORD *)(a1 + 48));
        v54 = 0;
        if ( strchr(a2, 47, v25) )
        {
LABEL_18:
          v55 = (const char *)expand_dynamic_string_token(a1, (__int64)a2);
          v19 = v55;
          if ( !v55 )
            goto LABEL_24;
LABEL_19:
          LODWORD(v20) = open_verify_constprop_0(v19, (__int64)v57, &v54, 1);
          if ( (_DWORD)v20 != -1 )
          {
            if ( (a5 & 0x10000000) != 0 )
              a1 = 0;
LABEL_22:
            v56[0] = _libc_stack_end;
            return dl_map_object_from_fd_constprop_0(a2, v20, (__int64)v57, (__int64)v55, a1, v10, a5, (__int64)v56, a6);
          }
          free(v19);
LABEL_24:
          if ( (a5 & 0x10000000) == 0 )
            goto LABEL_25;
          goto LABEL_40;
        }
        v50 = strlen(a2) + 1;
        if ( (dl_debug_mask & 1) != 0 )
          dl_debug_printf("find library=%s [%lu]; searching\n", a2, a6);
        goto LABEL_31;
      }
      v54 = 0;
      if ( strchr(a2, 47, a3) )
        goto LABEL_23;
      v50 = strlen(a2) + 1;
      if ( (v18 & 1) != 0 )
        dl_debug_printf("find library=%s [%lu]; searching\n", a2, a6);
    }
    else
    {
      v54 = 0;
      if ( strchr(a2, 47, a3) )
      {
        if ( a1 )
          goto LABEL_18;
LABEL_23:
        v55 = (const char *)strdup(a2);
        v19 = v55;
        if ( !v55 )
          goto LABEL_24;
        goto LABEL_19;
      }
      v50 = strlen(a2) + 1;
      if ( (v18 & 1) != 0 )
        dl_debug_printf("find library=%s [%lu]; searching\n", a2, a6);
      if ( a1 )
      {
LABEL_31:
        if ( *(_QWORD *)(a1 + 296) )
          goto LABEL_32;
        v51 = dl_ns;
        v30 = a1;
        v48 = 0;
        for ( i = cache_rpath(v30, v30 + 880, 15, "RPATH"); ; i = cache_rpath(v30, v30 + 880, 15, "RPATH") )
        {
          if ( (i & 1) != 0 )
          {
            LODWORD(v20) = open_path_isra_0(
                             (__int64)a2,
                             v50,
                             a5,
                             (__int64 *)(v30 + 880),
                             (__int64 *)&v55,
                             (__int64)v57,
                             a1,
                             &v54);
            if ( (_DWORD)v20 != -1 )
              goto LABEL_34;
            v48 |= v51 == (__int64 *)v30;
          }
          v30 = *(_QWORD *)(v30 + 808);
          if ( !v30 )
            break;
        }
        if ( (v48 & 1) != 0 )
        {
LABEL_32:
          if ( _rtld_env_path_list != -1 )
          {
LABEL_33:
            LODWORD(v20) = open_path_isra_0(
                             (__int64)a2,
                             v50,
                             a5,
                             &_rtld_env_path_list,
                             (__int64 *)&v55,
                             (__int64)v57,
                             a1,
                             &v54);
            if ( (_DWORD)v20 != -1 )
              goto LABEL_34;
          }
LABEL_41:
          v21 = cache_rpath(a1, a1 + 1016, 29, "RUNPATH");
          v20 = a1 + 1016;
          if ( (v21 & 1) == 0 )
            goto LABEL_42;
          v27 = (__int64 *)(a1 + 1016);
          v28 = (__int64 *)a1;
LABEL_74:
          v29 = open_path_isra_0((__int64)a2, v50, a5, v27, (__int64 *)&v55, (__int64)v57, (__int64)v28, &v54);
          v20 = v29;
          if ( v29 == -1 )
          {
LABEL_42:
            v55 = 0;
            if ( (a5 & 0x4000000) != 0 && _libc_enable_secure
              || dl_inhibit_cache
              || (cache_lookup = (const char *)dl_load_cache_lookup((__int64)a2)) == 0 )
            {
LABEL_91:
              v36 = (__int64 *)a1;
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
              v47 = (__int64)cache_lookup;
              LODWORD(v20) = open_verify_constprop_0(cache_lookup, (__int64)v57, &v54, 0);
              cache_lookup = (const char *)v47;
              if ( (_DWORD)v20 != -1 )
              {
                v55 = (const char *)v47;
                if ( (dl_debug_mask & 1) != 0 )
                  goto LABEL_49;
LABEL_35:
                if ( v46 )
                  a1 = 0;
                goto LABEL_22;
              }
              goto LABEL_90;
            }
LABEL_102:
            v37 = "/lib/aarch64-linux-gnu/";
            v38 = &system_dirs_len;
            v39 = 0;
            while ( 1 )
            {
              v40 = v38[v39];
              v49 = cache_lookup;
              v52 = v39;
              v53 = v38;
              v41 = memcmp(cache_lookup, v37, v40);
              cache_lookup = v49;
              v38 = v53;
              if ( !v41 )
                break;
              v39 = v52 + 1;
              v37 += v40 + 1;
              if ( v52 == 3 )
                goto LABEL_47;
            }
LABEL_90:
            free(cache_lookup);
            goto LABEL_91;
          }
LABEL_34:
          if ( (dl_debug_mask & 1) != 0 )
          {
            v45 = v20;
            dl_debug_printf("\n");
            LODWORD(v20) = v45;
            if ( v46 )
              a1 = 0;
            goto LABEL_22;
          }
          goto LABEL_35;
        }
LABEL_67:
        v20 = (unsigned __int64)v51;
        if ( !v51 || (*((_WORD *)v51 + 434) & 3) == 2 )
          goto LABEL_71;
        v26 = cache_rpath(v51, v51 + 110, 15, "RPATH");
        v20 = (unsigned __int64)(v51 + 110);
        if ( (v26 & 1) != 0 )
        {
          if ( a1 )
            v42 = a1;
          else
            v42 = (__int64)v51;
          v20 = (unsigned int)open_path_isra_0(
                                (__int64)a2,
                                v50,
                                a5,
                                v51 + 110,
                                (__int64 *)&v55,
                                (__int64)v57,
                                v42,
                                &v54);
          if ( (a5 & 0x8000000) == 0 )
            goto LABEL_116;
          if ( (_DWORD)v20 != -1 )
            goto LABEL_34;
        }
        else if ( (a5 & 0x8000000) == 0 )
        {
LABEL_71:
          v27 = &_rtld_env_path_list;
          if ( _rtld_env_path_list != -1 )
          {
            if ( !a1 )
            {
              v28 = dl_ns;
              goto LABEL_74;
            }
            goto LABEL_33;
          }
          if ( !a1 )
          {
            v55 = 0;
            if ( (a5 & 0x4000000) != 0 )
            {
              v20 = (unsigned int)dl_inhibit_cache;
              if ( !(_libc_enable_secure | dl_inhibit_cache) )
              {
                cache_lookup = (const char *)dl_load_cache_lookup((__int64)a2);
                if ( cache_lookup )
                  goto LABEL_101;
              }
            }
            else if ( !dl_inhibit_cache )
            {
              cache_lookup = (const char *)dl_load_cache_lookup((__int64)a2);
              if ( cache_lookup )
                goto LABEL_101;
            }
LABEL_110:
            v36 = (&(&(&dl_ns)[4 * v8])[4 * a6])[a6];
            if ( !v36 )
            {
LABEL_93:
              if ( _rtld_search_dirs != -1 )
              {
                LODWORD(v20) = open_path_isra_0(
                                 (__int64)a2,
                                 v50,
                                 a5,
                                 &_rtld_search_dirs,
                                 (__int64 *)&v55,
                                 (__int64)v57,
                                 (__int64)v36,
                                 &v54);
                if ( (dl_debug_mask & 1) == 0 )
                {
LABEL_50:
                  if ( v46 )
                    a1 = 0;
                  if ( (_DWORD)v20 != -1 )
                    goto LABEL_22;
                  goto LABEL_25;
                }
LABEL_49:
                v44 = v20;
                dl_debug_printf("\n");
                LODWORD(v20) = v44;
                goto LABEL_50;
              }
LABEL_38:
              if ( (dl_debug_mask & 1) != 0 )
              {
                dl_debug_printf("\n", v20);
                if ( v46 )
                  a1 = 0;
                goto LABEL_25;
              }
              if ( !v46 )
              {
LABEL_25:
                if ( !a4 )
                {
                  if ( (v54 & 1) != 0 )
                    dl_signal_error(0, a2, 0, "wrong ELF class: ELFCLASS32");
                  dl_signal_error(*(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40), a2, 0, "cannot open shared object file");
                }
                v32 = strdup(a2);
                v33 = v32;
                if ( !v32 || (v34 = dl_new_object(v32, a2, v10, a1, a5, a6), (v13 = (__int64 *)v34) == 0) )
                {
                  free(v33);
                  dl_signal_error(12, a2, 0, "cannot create shared object descriptor");
                }
                v35 = *(_WORD *)(v34 + 868) | 0x4008;
                *(_DWORD *)(v34 + 828) = 1;
                *(_QWORD *)(v34 + 856) = &dummy_bucket_6;
                *(_WORD *)(v34 + 868) = v35;
                dl_add_to_namespace_list(v34, a6);
                return v13;
              }
LABEL_40:
              a1 = 0;
              goto LABEL_25;
            }
LABEL_92:
            if ( (*((_DWORD *)v36 + 265) & 0x800) != 0 )
              goto LABEL_38;
            goto LABEL_93;
          }
          goto LABEL_41;
        }
        if ( (*((_WORD *)v51 + 434) & 3) == 2 )
          goto LABEL_71;
        v56[0] = 0;
        if ( (cache_rpath(v51, v56, 29, "RUNPATH") & 1) == 0 )
          goto LABEL_71;
        if ( a1 )
          v43 = a1;
        else
          v43 = (__int64)v51;
        v20 = (unsigned int)open_path_isra_0((__int64)a2, v50, a5, v56, (__int64 *)&v55, (__int64)v57, v43, &v54);
LABEL_116:
        if ( (_DWORD)v20 != -1 )
          goto LABEL_34;
        goto LABEL_71;
      }
    }
    v51 = dl_ns;
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
          v16 = (const char *)(*(_QWORD *)(v14 + 8) + *(_QWORD *)(v13[13] + 8) + v15);
          if ( !(unsigned int)strcmp(a2, v16) )
            break;
        }
      }
    }
    v13 = (__int64 *)v13[3];
    if ( !v13 )
      goto LABEL_15;
  }
  add_name_to_object_isra_0((_QWORD *)v13[7], v16);
  *((_WORD *)v13 + 434) |= 0x2000u;
  return v13;
}
