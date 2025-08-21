__int64 __fastcall dl_close_worker(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // x6
  int v3; // w2
  int v4; // w2
  __int64 v5; // x26
  unsigned int v6; // w24
  __int64 *v7; // x1
  __int64 *v8; // x0
  __int64 v9; // x1
  char v10; // w2
  int v11; // w3
  int v12; // w1
  __int64 v13; // x0
  signed int v14; // w3
  int *v15; // x1
  __int64 v16; // x5
  __int64 v17; // x2
  __int64 v18; // x0
  _QWORD *v19; // x2
  signed int v20; // w0
  signed int v21; // w0
  __int64 v22; // t1
  unsigned int v23; // w1
  __int64 result; // x0
  int v25; // w7
  _DWORD *v26; // x1
  _DWORD *v27; // x7
  signed int v28; // w0
  __int64 v29; // x2
  unsigned int v30; // w0
  unsigned __int64 v31; // x0
  int v32; // w19
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x20
  unsigned int v37; // w25
  int v38; // w21
  __int64 v39; // x0
  __int64 v40; // x28
  unsigned int v41; // w22
  int v42; // w1
  _QWORD *v43; // x11
  __int64 v44; // x10
  unsigned __int64 v45; // x13
  __int64 v46; // x7
  __int64 *v47; // x9
  __int16 *v48; // x0
  __int16 **v49; // x1
  __int16 *v50; // x2
  int v51; // w8
  __int16 *v52; // x0
  __int16 *v53; // t1
  __int16 *v54; // t1
  __int64 v55; // x1
  bool v56; // cc
  __int64 v57; // x12
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // t1
  _QWORD *v61; // x13
  __int64 v62; // t1
  bool v63; // zf
  int v64; // w0
  __int64 v65; // x0
  unsigned __int64 v66; // x0
  __int64 v67; // x2
  unsigned int v68; // w0
  unsigned int v69; // w7
  __int64 v70; // x1
  __int64 v71; // x14
  __int64 v72; // x12
  __int64 v73; // x0
  char *v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  void *v77; // x4
  void *v78; // x5
  unsigned __int64 v79; // x6
  __int64 *v80; // x19
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  void *v86; // x4
  void *v87; // x5
  void *v88; // x6
  __int64 v89; // x3
  void *v90; // x4
  void *v91; // x5
  void *v92; // x6
  __int64 *v93; // x2
  char *v94; // x1
  _QWORD *v95; // x20
  _QWORD *v96; // x19
  char *v97; // x23
  __int64 v98; // x24
  __int64 v99; // x25
  __int16 v100; // w0
  __int64 v101; // x2
  __int64 **v102; // x3
  __int64 v103; // x1
  __int64 v104; // x0
  __int64 v105; // x28
  __int64 v106; // x0
  int v107; // w2
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 **v112; // x3
  __int64 *v113; // x0
  __int64 *v114; // x2
  __int64 *v115; // x2
  __int64 v116; // x0
  char *v117; // x0
  int v118; // w7
  __int64 v119; // x5
  unsigned int i; // w0
  __int64 v121; // x7
  __int64 v122; // x1
  __int64 v123; // [xsp+0h] [xbp-10010h] BYREF
  __int64 v124; // [xsp+10h] [xbp-10000h] BYREF
  _QWORD v125[125]; // [xsp+18h] [xbp-FFF8h] BYREF
  __int64 v126; // [xsp+400h] [xbp-FC10h]
  _BYTE v127[16]; // [xsp+10000h] [xbp-10h] BYREF
  __int16 *v128; // [xsp+10070h] [xbp+60h]
  _QWORD *v129; // [xsp+10078h] [xbp+68h]
  int v130; // [xsp+10084h] [xbp+74h]
  __int64 v131; // [xsp+10088h] [xbp+78h]
  __int64 v132; // [xsp+10090h] [xbp+80h]
  __int64 v133; // [xsp+10098h] [xbp+88h]
  __int64 v134; // [xsp+100A0h] [xbp+90h]
  __int64 v135; // [xsp+100A8h] [xbp+98h]
  __int64 v136; // [xsp+100B0h] [xbp+A0h]
  __int64 **v137; // [xsp+100B8h] [xbp+A8h]
  _BYTE *v138; // [xsp+100C0h] [xbp+B0h]
  __int64 v139; // [xsp+100C8h] [xbp+B8h]
  atomic_uint *v140; // [xsp+100D0h] [xbp+C0h]
  __int64 **v141; // [xsp+100D8h] [xbp+C8h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 864);
  LODWORD(v139) = a2;
  v4 = v3 - 1;
  *(_DWORD *)(a1 + 864) = v4;
  if ( (*(_QWORD *)(a1 + 864) & 0x3FFFFFFFFLL) != 0x200000000LL )
  {
LABEL_31:
    result = (unsigned int)dl_debug_mask;
    if ( (dl_debug_mask & 0x40) != 0 )
      return dl_debug_printf("\nclosing file=%s; direct_opencount=%u\n", *(const char **)(v2 + 8), v4);
    return result;
  }
  if ( dl_close_state_2 )
  {
    dl_close_state_2 = 2;
    goto LABEL_31;
  }
  v5 = *(_QWORD *)(a1 + 48);
  v141 = &dl_ns;
  v136 = 4 * v5;
  v137 = &(&dl_ns)[21 * v5];
  while ( 2 )
  {
    v6 = *((_DWORD *)v137 + 2);
    v138 = v127;
    dl_close_state_2 = 1;
    v7 = (__int64 *)&v127[-((8LL * v6 + 15) & 0xFFFFF0000LL)];
    if ( v127 != (_BYTE *)v7 )
    {
      do
        v126 = 0;
      while ( &v123 != v7 );
    }
    v123 = 0;
    if ( ((8 * (_WORD)v6 + 15) & 0xFFF0u) >= 0x400uLL )
      v126 = 0;
    v8 = *v137;
    if ( !*v137 )
    {
      if ( !v6 )
      {
        if ( v2 )
        {
          v118 = *(_DWORD *)(v2 + 1068);
          v119 = v124;
          v125[v118 - 1] = v124;
          *(_DWORD *)(v119 + 1068) = v118;
          v124 = v2;
          *(_DWORD *)(v2 + 1068) = 0;
          dl_sort_maps(&v124, 0, 1, 1);
        }
        else
        {
          dl_sort_maps(&v124, 0, 0, 1);
        }
        goto LABEL_94;
      }
LABEL_200:
      _libc_assert_fail("idx == nloaded", (__int64)"dl-close.c", 0x9Au, (__int64)"_dl_close_worker");
    }
    v9 = 0;
    do
    {
      v10 = *((_BYTE *)v8 + 869);
      v11 = v9;
      *((_DWORD *)v8 + 267) = v9;
      *((_BYTE *)v8 + 869) = v10 & 0xF3;
      v125[v9++ - 1] = v8;
      v8 = (__int64 *)v8[3];
    }
    while ( v8 );
    if ( v11 + 1 != v6 )
      goto LABEL_200;
    if ( v2 )
    {
      v12 = *(_DWORD *)(v2 + 1068);
      v13 = v124;
      v125[v12 - 1] = v124;
      *(_DWORD *)(v13 + 1068) = v12;
      v124 = v2;
      *(_DWORD *)(v2 + 1068) = 0;
    }
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v16 = v125[v14 - 1];
        if ( (*(_WORD *)(v16 + 868) & 0x800) == 0 )
          break;
LABEL_16:
        if ( ++v14 >= v6 )
          goto LABEL_49;
      }
      if ( (*(_QWORD *)(v16 + 864) & 0x3FFFFFFFFLL) != 0x200000000LL
        || (*(_BYTE *)(v16 + 871) & 1) != 0
        || (v31 = atomic_load((unsigned __int64 *)(v16 + 1184))) != 0
        || (*(_WORD *)(v16 + 868) & 0x400) != 0 )
      {
        v17 = *(_QWORD *)(v16 + 1032);
        *(_DWORD *)(v16 + 1068) = -1;
        *(_BYTE *)(v16 + 869) |= 0xCu;
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8);
          v19 = (_QWORD *)(v17 + 8);
          if ( v18 )
          {
            do
            {
              v23 = *(_DWORD *)(v18 + 1068);
              if ( v23 != -1 )
              {
                if ( (v23 & 0x80000000) != 0 || v23 >= v6 )
                  _libc_assert_fail(
                    "(*lp)->l_idx >= 0 && (*lp)->l_idx < nloaded",
                    (__int64)"dl-close.c",
                    0xCAu,
                    (__int64)"_dl_close_worker");
                if ( (*(_WORD *)(v18 + 868) & 0x400) == 0 )
                {
                  *(_WORD *)(v18 + 868) |= 0x400u;
                  v20 = *(_DWORD *)(*v19 + 1068LL);
                  v56 = v20 <= v14;
                  v21 = v20 - 1;
                  if ( v56 )
                    v14 = v21;
                }
              }
              v22 = v19[1];
              ++v19;
              v18 = v22;
            }
            while ( v22 );
          }
        }
        v15 = *(int **)(v16 + 1040);
        if ( v15 )
        {
          v25 = *v15;
          if ( *v15 )
          {
            v26 = v15 + 2;
            v27 = &v26[2 * v25];
            do
            {
              v29 = *(_QWORD *)v26;
              v30 = *(_DWORD *)(*(_QWORD *)v26 + 1068LL);
              if ( v30 != -1 )
              {
                if ( (v30 & 0x80000000) != 0 || v30 >= v6 )
                  _libc_assert_fail(
                    "jmap->l_idx >= 0 && jmap->l_idx < nloaded",
                    (__int64)"dl-close.c",
                    0xE3u,
                    (__int64)"_dl_close_worker");
                if ( (*(_WORD *)(v29 + 868) & 0x400) == 0 )
                {
                  v56 = (int)v30 <= v14;
                  v28 = v30 - 1;
                  if ( v56 )
                    v14 = v28;
                  *(_WORD *)(v29 + 868) |= 0x400u;
                }
              }
              v26 += 2;
            }
            while ( v27 != v26 );
          }
        }
        goto LABEL_16;
      }
      ++v14;
    }
    while ( v14 < v6 );
LABEL_49:
    v32 = 0;
    dl_sort_maps(&v124, v6, v2 != 0, 1);
    v36 = 0;
    v37 = -1;
    v38 = 0;
    LODWORD(v140) = 0;
    do
    {
      while ( 1 )
      {
        v40 = v125[v36 - 1];
        v41 = v36;
        if ( *(_QWORD *)(v40 + 48) != v5 )
          _libc_assert_fail("imap->l_ns == nsid", (__int64)"dl-close.c", 0xFEu, (__int64)"_dl_close_worker");
        v66 = *(unsigned __int16 *)(v40 + 868);
        v42 = v66 & 3;
        if ( (v66 & 0x400) == 0 )
        {
          if ( v42 != 2 || (*(_BYTE *)(v40 + 871) & 1) != 0 )
            _libc_assert_fail(
              "imap->l_type == lt_loaded && !imap->l_nodelete_active",
              (__int64)"dl-close.c",
              0x102u,
              (__int64)"_dl_close_worker");
          if ( (v66 & 0x10) != 0 )
          {
            dl_catch_exception(0, dl_call_fini, v125[v36 - 1]);
            v66 = *(unsigned __int16 *)(v40 + 868);
          }
          v39 = (v66 >> 5) & 1;
          if ( v37 > (unsigned int)v36 )
            v37 = v36;
          v32 += v39;
          v38 = 1;
          *(_BYTE *)(v40 + 870) |= 4u;
          goto LABEL_57;
        }
        if ( v42 == 2 )
          break;
LABEL_57:
        if ( v6 == ++v36 )
          goto LABEL_93;
      }
      if ( *(_QWORD *)(v40 + 776) || (v67 = *(_QWORD *)(v40 + 1032)) == 0 )
      {
        v43 = *(_QWORD **)(v40 + 976);
        v44 = 0;
        v45 = 1;
        v46 = *v43;
        if ( !*v43 )
          goto LABEL_87;
      }
      else
      {
        if ( *(_QWORD *)(v67 + 8) )
        {
          v68 = 1;
          do
            v69 = v68++;
          while ( *(_QWORD *)(v67 + 8LL * v68) );
          v70 = 8LL * (v69 + 2);
        }
        else
        {
          v70 = 16;
          v68 = 1;
        }
        v43 = *(_QWORD **)(v40 + 976);
        v44 = v40 + 776;
        v46 = *v43;
        *(_QWORD *)(v40 + 776) = v67 + v70;
        *(_DWORD *)(v40 + 784) = v68;
        if ( !v46 )
        {
LABEL_97:
          *(_QWORD *)(v40 + 776) = 0;
          *(_DWORD *)(v40 + 784) = 0;
          goto LABEL_87;
        }
        v45 = 2;
      }
      v47 = v43 + 1;
      v48 = (__int16 *)v46;
      v49 = (__int16 **)(v43 + 1);
      v50 = (__int16 *)(v40 + 792);
      v51 = 0;
      do
      {
        while ( v50 != v48 )
        {
          v52 = v48 - 388;
          if ( *((_QWORD *)v52 + 6) != v5 )
            _libc_assert_fail("tmap->l_ns == nsid", (__int64)"dl-close.c", 0x143u, (__int64)"_dl_close_worker");
          if ( *((_DWORD *)v52 + 267) == -1 )
            break;
          v53 = *v49++;
          v48 = v53;
          v51 = 1;
          if ( !v53 )
            goto LABEL_69;
        }
        v54 = *v49++;
        v48 = v54;
        ++v45;
      }
      while ( v54 );
LABEL_69:
      if ( v51 )
      {
        v55 = v40 + 936;
        v56 = (_QWORD *)(v40 + 936) == v43 || v45 > 3;
        if ( v56 )
        {
          v57 = *(_QWORD *)(v40 + 968);
          v128 = (__int16 *)(v40 + 792);
          v129 = v43;
          v130 = v51;
          v131 = v44;
          v132 = v46;
          v133 = v40 + 936;
          v134 = (__int64)(v43 + 1);
          v135 = v57;
          v58 = malloc(8 * v57, v55, v50, v33, v34, v35);
          v50 = v128;
          v43 = v129;
          v71 = v58;
          v44 = v131;
          v46 = v132;
          v55 = v133;
          v47 = (__int64 *)v134;
          v72 = v135;
          v51 = v130;
          if ( !v58 )
            dl_signal_error(12, "dlclose", 0, "cannot create scope list");
        }
        else
        {
          v71 = v40 + 936;
          v72 = 4;
        }
        v59 = 0;
        do
        {
          while ( 1 )
          {
            v61 = (_QWORD *)(v71 + 8 * v59);
            if ( v50 != (__int16 *)v46 && *(_DWORD *)(v46 + 292) != -1 )
              break;
            *v61 = v46;
            ++v59;
            v62 = *v47++;
            v46 = v62;
            if ( !v62 )
              goto LABEL_83;
          }
          if ( v44 )
          {
            ++v59;
            *v61 = v44;
            v44 = 0;
          }
          v60 = *v47++;
          v46 = v60;
        }
        while ( v60 );
LABEL_83:
        *(_QWORD *)(v71 + 8 * v59) = 0;
        *(_QWORD *)(v40 + 976) = v71;
        if ( (_QWORD *)v55 == v43 )
        {
          LODWORD(v140) = v51;
          *(_QWORD *)(v40 + 968) = v72;
        }
        else
        {
          v135 = v72;
          v63 = (unsigned int)dl_scope_free(v43) == 0;
          v64 = (int)v140;
          if ( !v63 )
            v64 = 0;
          LODWORD(v140) = v64;
          *(_QWORD *)(v40 + 968) = v135;
        }
      }
      else if ( v44 )
      {
        goto LABEL_97;
      }
LABEL_87:
      v65 = *(_QWORD *)(v40 + 808);
      if ( v65 && *(_DWORD *)(v65 + 1068) != -1 )
        *(_QWORD *)(v40 + 808) = 0;
      ++v36;
      if ( v37 > v41 )
        v37 = v41;
    }
    while ( v6 != v36 );
LABEL_93:
    if ( !v38 )
      goto LABEL_94;
    v73 = dl_debug_update(v5);
    *(_DWORD *)(v73 + 24) = 2;
    v133 = v73;
    dl_debug_state(v73);
    if ( v32 )
    {
      v75 = (__int64)(&(&v141[4 * v136])[4 * v5])[v5 + 2];
      for ( i = *(_DWORD *)(v75 + 8); i; --i )
      {
        v76 = *(_QWORD *)v75;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v75 + 8LL * (i - 1)) + 870LL) & 4) == 0 )
        {
          v79 = v32 + i;
          if ( *(_DWORD *)(v75 + 8) != (_DWORD)v79 )
          {
            v121 = i;
            v122 = 0;
            i = 0;
            do
            {
              v79 = *(_QWORD *)(v76 + 8 * v122);
              if ( (*(_BYTE *)(v79 + 870) & 4) == 0 )
              {
                if ( i != (_DWORD)v122 )
                  *(_QWORD *)(v76 + 8LL * i) = v79;
                ++i;
              }
              ++v122;
            }
            while ( v122 != v121 );
          }
          break;
        }
      }
      v74 = &_libc_single_threaded;
      *(_DWORD *)(v75 + 8) = i;
      if ( !_libc_single_threaded )
      {
LABEL_111:
        _thread_gscope_wait();
        v80 = (__int64 *)dl_scope_free_list;
        if ( dl_scope_free_list )
        {
          v81 = *(_QWORD *)dl_scope_free_list;
          if ( *(_QWORD *)dl_scope_free_list )
          {
            do
            {
              v82 = v81 - 1;
              *v80 = v82;
              free(v80[v82 + 1]);
              v81 = *v80;
            }
            while ( *v80 );
          }
        }
      }
    }
    else if ( !_libc_single_threaded
           && (((unsigned __int8)v140 & 1) != 0 || dl_scope_free_list && *(_QWORD *)dl_scope_free_list) )
    {
      goto LABEL_111;
    }
    pthread_mutex_lock((atomic_uint *)&dl_load_tls_lock, (__int64)v74, v75, v76, v77, v78, (void *)v79);
    pthread_mutex_lock((atomic_uint *)&dl_load_write_lock, v83, v84, v85, v86, v87, v88);
    if ( v37 >= v6 )
    {
      pthread_mutex_unlock(&dl_load_write_lock);
    }
    else
    {
      v93 = (__int64 *)v141;
      v94 = (char *)v125;
      v134 = v5 + 4 * (v136 + v5);
      v95 = &v125[v37 - 1];
      v96 = &v125[v6 - 1 - v37 + (unsigned __int64)v37];
      v97 = 0;
      v98 = 0;
      LODWORD(v135) = 0;
      v140 = (atomic_uint *)&v141[v134 + 5];
      do
      {
        while ( 1 )
        {
          v99 = *v95;
          v100 = *(_WORD *)(*v95 + 868LL);
          if ( (v100 & 0x400) == 0 )
            break;
          if ( v96 == ++v95 )
            goto LABEL_144;
        }
        if ( (v100 & 3) != 2 )
          _libc_assert_fail("imap->l_type == lt_loaded", (__int64)"dl-close.c", 0x1EFu, (__int64)"_dl_close_worker");
        if ( *(_QWORD *)(v99 + 1144) )
        {
          if ( dl_tls_dtv_slotinfo_list
            && (remove_slotinfo(
                  *(_QWORD *)(v99 + 1176),
                  (unsigned __int64 *)dl_tls_dtv_slotinfo_list,
                  0,
                  (*(_QWORD *)(v99 + 864) & 0x1000000000LL) != 0)
              & 1) == 0 )
          {
            dl_tls_max_dtv_idx = dl_tls_static_nelem;
          }
          v116 = *(_QWORD *)(v99 + 1168);
          LODWORD(v135) = v38;
          v94 = (char *)(v116 + 1);
          if ( (unsigned __int64)(v116 + 1) > 1 )
          {
            if ( v98 )
            {
              v93 = *(__int64 **)(v99 + 1144);
              v94 = *(char **)(v99 + 1160);
              v117 = (char *)v93 + v116;
              if ( v97 == v94 )
              {
                v97 = v117;
              }
              else if ( (char *)v98 == v117 )
              {
                v98 = *(_QWORD *)(v99 + 1160);
              }
              else
              {
                v93 = &dl_tls_static_used;
                v89 = dl_tls_static_used;
                if ( (char *)dl_tls_static_used == v117 )
                {
                  dl_tls_static_used = *(_QWORD *)(v99 + 1160);
                }
                else if ( (char *)dl_tls_static_used == v97 )
                {
                  v97 = v117;
                  dl_tls_static_used = v98;
                  v98 = (__int64)v94;
                }
                else
                {
                  if ( v97 < v94 )
                    v98 = *(_QWORD *)(v99 + 1160);
                  else
                    v117 = v97;
                  v97 = v117;
                }
              }
            }
            else
            {
              v98 = *(_QWORD *)(v99 + 1160);
              v97 = (char *)(v116 + *(_QWORD *)(v99 + 1144));
            }
          }
        }
        if ( (v139 & 1) != 0 )
        {
          pthread_mutex_lock(v140, (__int64)v94, (__int64)v93, v89, v90, v91, v92);
          v112 = &v141[v134];
          v113 = v112[11];
          if ( v113 )
          {
            v114 = v112[12];
            if ( v114 )
            {
              v115 = &v113[4 * (_QWORD)v114];
              do
              {
                if ( v113[1] && v113[3] == v99 )
                {
                  *(_DWORD *)v113 = 0;
                  v113[1] = 0;
                  v112[13] = (__int64 *)((char *)v112[13] - 1);
                }
                v113 += 4;
              }
              while ( v115 != v113 );
            }
          }
          pthread_mutex_unlock(v140);
        }
        dl_unmap(v99);
        if ( v5 )
          _libc_assert_fail("nsid == LM_ID_BASE", (__int64)"dl-close.c", 0x27Du, (__int64)"_dl_close_worker");
        v101 = *(_QWORD *)(v99 + 32);
        if ( !v101 )
          _libc_assert_fail("imap->l_prev != NULL", (__int64)"dl-close.c", 0x27Eu, (__int64)"_dl_close_worker");
        v102 = v141;
        v103 = *(_QWORD *)(v99 + 24);
        *(_QWORD *)(v101 + 24) = v103;
        --*((_DWORD *)v102 + 2);
        if ( v103 )
          *(_QWORD *)(v103 + 32) = v101;
        dl_find_object_dlclose(v99);
        free(*(_QWORD *)(v99 + 816));
        v104 = *(_QWORD *)(v99 + 912);
        if ( v104 != -1 )
          free(v104);
        free(*(_QWORD *)(v99 + 1040));
        if ( (dl_debug_mask & 0x40) != 0 )
          dl_debug_printf("\nfile=%s [%lu];  destroying link map\n", *(const char **)(v99 + 8), *(_QWORD *)(v99 + 48));
        free(*(_QWORD *)(v99 + 8));
        v105 = *(_QWORD *)(v99 + 56);
        do
        {
          v106 = v105;
          v107 = *(_DWORD *)(v105 + 16);
          v105 = *(_QWORD *)(v105 + 8);
          if ( !v107 )
            free(v106);
        }
        while ( v105 );
        free(*(_QWORD *)(v99 + 1032));
        v108 = *(_QWORD *)(v99 + 976);
        if ( v108 != v99 + 936 )
          free(v108);
        if ( (*(_WORD *)(v99 + 868) & 0x1000) != 0 )
          free(*(_QWORD *)(v99 + 752));
        v109 = *(_QWORD *)(v99 + 880);
        if ( v109 != -1 )
          free(v109);
        v110 = *(_QWORD *)(v99 + 1016);
        if ( v110 != -1 )
          free(v110);
        if ( dl_initfirst == v99 )
          dl_initfirst = 0;
        ++v95;
        free(v99);
      }
      while ( v96 != v95 );
LABEL_144:
      pthread_mutex_unlock(&dl_load_write_lock);
      if ( (v135 & 1) != 0 )
      {
        if ( dl_tls_generation == -1 )
          dl_fatal_printf(
            "TLS generation counter wrapped!  Please report as described in <https://bugs.launchpad.net/ubuntu/+source/glibc/+bugs>.\n");
        atomic_store(dl_tls_generation + 1, (unsigned __int64 *)&dl_tls_generation);
        if ( (char *)dl_tls_static_used == v97 )
          dl_tls_static_used = v98;
      }
    }
    pthread_mutex_unlock(&dl_load_tls_lock);
    v111 = (__int64)(&(&v141[4 * v136])[4 * v5])[v5];
    if ( !v111 )
    {
      v111 = dl_nns - 1;
      if ( dl_nns - 1 == v5 )
        dl_nns = v5;
    }
    *(_DWORD *)(v133 + 24) = 0;
    dl_debug_state(v111);
LABEL_94:
    if ( dl_close_state_2 == 2 )
    {
      v2 = 0;
      continue;
    }
    break;
  }
  dl_close_state_2 = 0;
  return (__int64)v138;
}
