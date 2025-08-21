__int64 *__fastcall dl_map_object(__int64 a1, char *a2, __int64 a3, int a4, unsigned int a5, unsigned __int64 a6)
{
  unsigned __int64 v8; // x26
  unsigned int v10; // w23
  __int64 *v13; // x27
  __int64 v14; // x0
  __int64 v15; // x1
  const char *v16; // x28
  char v18; // w27
  __int64 v19; // x2
  const char *v20; // x25
  unsigned __int64 v21; // x1
  char v22; // w0
  const char *cache_lookup; // x4
  const char *v24; // x3
  const char *v25; // x0
  __int64 v26; // x2
  char v27; // w0
  __int64 *v28; // x3
  __int64 *v29; // x6
  unsigned int v30; // w0
  __int64 v31; // x28
  char i; // w0
  __int64 v33; // x0
  __int64 v34; // x24
  __int64 v35; // x0
  __int16 v36; // w2
  __int64 *v37; // x6
  const char *v38; // x27
  _QWORD *v39; // x5
  __int64 v40; // x3
  __int64 v41; // x28
  int v42; // w0
  __int64 v43; // x6
  __int64 v44; // x6
  int v45; // [xsp+78h] [xbp+68h]
  int v46; // [xsp+78h] [xbp+68h]
  int v47; // [xsp+84h] [xbp+74h]
  const char *v48; // [xsp+90h] [xbp+80h]
  char v49; // [xsp+90h] [xbp+80h]
  const char *v50; // [xsp+90h] [xbp+80h]
  __int64 v51; // [xsp+98h] [xbp+88h]
  __int64 *v52; // [xsp+A0h] [xbp+90h]
  __int64 v53; // [xsp+A0h] [xbp+90h]
  _QWORD *v54; // [xsp+A8h] [xbp+98h]
  char v55; // [xsp+CFh] [xbp+BFh] BYREF
  const char *v56; // [xsp+D0h] [xbp+C0h] BYREF
  __int64 v57[2]; // [xsp+D8h] [xbp+C8h] BYREF
  _BYTE v58[840]; // [xsp+E8h] [xbp+D8h] BYREF

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
    v47 = a5 & 0x10000000;
    v18 = dl_debug_mask;
    if ( (dl_debug_mask & 0x40) != 0 )
    {
      if ( a1 )
      {
        v24 = *(const char **)(a1 + 8);
        v25 = "\nfile=%s [%lu];  dynamically loaded by %s [%lu]\n";
        if ( (a5 & 0x10000000) == 0 )
          v25 = "\nfile=%s [%lu];  needed by %s [%lu]\n";
        if ( !*v24 )
        {
          v24 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v24 = "<main program>";
        }
        dl_debug_printf(v25, a2, a6, v24, *(_QWORD *)(a1 + 48));
        v55 = 0;
        if ( strchr(a2, 47, v26) )
        {
LABEL_18:
          v56 = expand_dynamic_string_token(a1, (unsigned __int8 *)a2, v19);
          v20 = v56;
          if ( !v56 )
            goto LABEL_24;
LABEL_19:
          LODWORD(v21) = open_verify_constprop_0(v20, (__int64)v58, &v55, 1);
          if ( (_DWORD)v21 != -1 )
          {
            if ( (a5 & 0x10000000) != 0 )
              a1 = 0;
LABEL_22:
            v57[0] = _libc_stack_end;
            return dl_map_object_from_fd_constprop_0(a2, v21, (__int64)v58, (__int64)v56, a1, v10, a5, (__int64)v57, a6);
          }
          free(v20);
LABEL_24:
          if ( (a5 & 0x10000000) == 0 )
            goto LABEL_25;
          goto LABEL_40;
        }
        v51 = strlen(a2) + 1;
        if ( (dl_debug_mask & 1) != 0 )
          dl_debug_printf("find library=%s [%lu]; searching\n", a2, a6);
        goto LABEL_31;
      }
      v55 = 0;
      if ( strchr(a2, 47, a3) )
        goto LABEL_23;
      v51 = strlen(a2) + 1;
      if ( (v18 & 1) != 0 )
        dl_debug_printf("find library=%s [%lu]; searching\n", a2, a6);
    }
    else
    {
      v55 = 0;
      if ( strchr(a2, 47, a3) )
      {
        if ( a1 )
          goto LABEL_18;
LABEL_23:
        v56 = (const char *)strdup(a2);
        v20 = v56;
        if ( !v56 )
          goto LABEL_24;
        goto LABEL_19;
      }
      v51 = strlen(a2) + 1;
      if ( (v18 & 1) != 0 )
        dl_debug_printf("find library=%s [%lu]; searching\n", a2, a6);
      if ( a1 )
      {
LABEL_31:
        if ( *(_QWORD *)(a1 + 296) )
          goto LABEL_32;
        v52 = dl_ns;
        v31 = a1;
        v49 = 0;
        for ( i = cache_rpath(v31, v31 + 880, 15, "RPATH"); ; i = cache_rpath(v31, v31 + 880, 15, "RPATH") )
        {
          if ( (i & 1) != 0 )
          {
            LODWORD(v21) = open_path_isra_0(
                             (__int64)a2,
                             v51,
                             a5,
                             (__int64 *)(v31 + 880),
                             (__int64 *)&v56,
                             (__int64)v58,
                             a1,
                             &v55);
            if ( (_DWORD)v21 != -1 )
              goto LABEL_34;
            v49 |= v52 == (__int64 *)v31;
          }
          v31 = *(_QWORD *)(v31 + 808);
          if ( !v31 )
            break;
        }
        if ( (v49 & 1) != 0 )
        {
LABEL_32:
          if ( _rtld_env_path_list != -1 )
          {
LABEL_33:
            LODWORD(v21) = open_path_isra_0(
                             (__int64)a2,
                             v51,
                             a5,
                             &_rtld_env_path_list,
                             (__int64 *)&v56,
                             (__int64)v58,
                             a1,
                             &v55);
            if ( (_DWORD)v21 != -1 )
              goto LABEL_34;
          }
LABEL_41:
          v22 = cache_rpath(a1, a1 + 1016, 29, "RUNPATH");
          v21 = a1 + 1016;
          if ( (v22 & 1) == 0 )
            goto LABEL_42;
          v28 = (__int64 *)(a1 + 1016);
          v29 = (__int64 *)a1;
LABEL_74:
          v30 = open_path_isra_0((__int64)a2, v51, a5, v28, (__int64 *)&v56, (__int64)v58, (__int64)v29, &v55);
          v21 = v30;
          if ( v30 == -1 )
          {
LABEL_42:
            v56 = 0;
            if ( (a5 & 0x4000000) != 0 && _libc_enable_secure
              || dl_inhibit_cache
              || (cache_lookup = (const char *)dl_load_cache_lookup((__int64)a2)) == 0 )
            {
LABEL_91:
              v37 = (__int64 *)a1;
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
              v48 = cache_lookup;
              LODWORD(v21) = open_verify_constprop_0(cache_lookup, (__int64)v58, &v55, 0);
              cache_lookup = v48;
              if ( (_DWORD)v21 != -1 )
              {
                v56 = v48;
                if ( (dl_debug_mask & 1) != 0 )
                  goto LABEL_49;
LABEL_35:
                if ( v47 )
                  a1 = 0;
                goto LABEL_22;
              }
              goto LABEL_90;
            }
LABEL_102:
            v38 = "/lib/aarch64-linux-gnu/";
            v39 = &system_dirs_len;
            v40 = 0;
            while ( 1 )
            {
              v41 = v39[v40];
              v50 = cache_lookup;
              v53 = v40;
              v54 = v39;
              v42 = memcmp(cache_lookup, v38, v41);
              cache_lookup = v50;
              v39 = v54;
              if ( !v42 )
                break;
              v40 = v53 + 1;
              v38 += v41 + 1;
              if ( v53 == 3 )
                goto LABEL_47;
            }
LABEL_90:
            free(cache_lookup);
            goto LABEL_91;
          }
LABEL_34:
          if ( (dl_debug_mask & 1) != 0 )
          {
            v46 = v21;
            dl_debug_printf("\n");
            LODWORD(v21) = v46;
            if ( v47 )
              a1 = 0;
            goto LABEL_22;
          }
          goto LABEL_35;
        }
LABEL_67:
        v21 = (unsigned __int64)v52;
        if ( !v52 || (*((_WORD *)v52 + 434) & 3) == 2 )
          goto LABEL_71;
        v27 = cache_rpath(v52, v52 + 110, 15, "RPATH");
        v21 = (unsigned __int64)(v52 + 110);
        if ( (v27 & 1) != 0 )
        {
          if ( a1 )
            v43 = a1;
          else
            v43 = (__int64)v52;
          v21 = (unsigned int)open_path_isra_0(
                                (__int64)a2,
                                v51,
                                a5,
                                v52 + 110,
                                (__int64 *)&v56,
                                (__int64)v58,
                                v43,
                                &v55);
          if ( (a5 & 0x8000000) == 0 )
            goto LABEL_116;
          if ( (_DWORD)v21 != -1 )
            goto LABEL_34;
        }
        else if ( (a5 & 0x8000000) == 0 )
        {
LABEL_71:
          v28 = &_rtld_env_path_list;
          if ( _rtld_env_path_list != -1 )
          {
            if ( !a1 )
            {
              v29 = dl_ns;
              goto LABEL_74;
            }
            goto LABEL_33;
          }
          if ( !a1 )
          {
            v56 = 0;
            if ( (a5 & 0x4000000) != 0 )
            {
              v21 = (unsigned int)dl_inhibit_cache;
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
            v37 = (&(&(&dl_ns)[4 * v8])[4 * a6])[a6];
            if ( !v37 )
            {
LABEL_93:
              if ( _rtld_search_dirs != -1 )
              {
                LODWORD(v21) = open_path_isra_0(
                                 (__int64)a2,
                                 v51,
                                 a5,
                                 &_rtld_search_dirs,
                                 (__int64 *)&v56,
                                 (__int64)v58,
                                 (__int64)v37,
                                 &v55);
                if ( (dl_debug_mask & 1) == 0 )
                {
LABEL_50:
                  if ( v47 )
                    a1 = 0;
                  if ( (_DWORD)v21 != -1 )
                    goto LABEL_22;
                  goto LABEL_25;
                }
LABEL_49:
                v45 = v21;
                dl_debug_printf("\n");
                LODWORD(v21) = v45;
                goto LABEL_50;
              }
LABEL_38:
              if ( (dl_debug_mask & 1) != 0 )
              {
                dl_debug_printf("\n", v21);
                if ( v47 )
                  a1 = 0;
                goto LABEL_25;
              }
              if ( !v47 )
              {
LABEL_25:
                if ( !a4 )
                {
                  if ( (v55 & 1) != 0 )
                    dl_signal_error(0, a2, 0, "wrong ELF class: ELFCLASS32");
                  dl_signal_error(*(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40), a2, 0, "cannot open shared object file");
                }
                v33 = strdup(a2);
                v34 = v33;
                if ( !v33 || (v35 = dl_new_object(v33, a2, v10, a1, a5, a6), (v13 = (__int64 *)v35) == 0) )
                {
                  free(v34);
                  dl_signal_error(12, a2, 0, "cannot create shared object descriptor");
                }
                v36 = *(_WORD *)(v35 + 868) | 0x4008;
                *(_DWORD *)(v35 + 828) = 1;
                *(_QWORD *)(v35 + 856) = &dummy_bucket_6;
                *(_WORD *)(v35 + 868) = v36;
                dl_add_to_namespace_list(v35, a6);
                return v13;
              }
LABEL_40:
              a1 = 0;
              goto LABEL_25;
            }
LABEL_92:
            if ( (*((_DWORD *)v37 + 265) & 0x800) != 0 )
              goto LABEL_38;
            goto LABEL_93;
          }
          goto LABEL_41;
        }
        if ( (*((_WORD *)v52 + 434) & 3) == 2 )
          goto LABEL_71;
        v57[0] = 0;
        if ( (cache_rpath(v52, v57, 29, "RUNPATH") & 1) == 0 )
          goto LABEL_71;
        if ( a1 )
          v44 = a1;
        else
          v44 = (__int64)v52;
        v21 = (unsigned int)open_path_isra_0((__int64)a2, v51, a5, v57, (__int64 *)&v56, (__int64)v58, v44, &v55);
LABEL_116:
        if ( (_DWORD)v21 != -1 )
          goto LABEL_34;
        goto LABEL_71;
      }
    }
    v52 = dl_ns;
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
