__int64 __fastcall int_malloc(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 i; // x20
  unsigned __int64 v7; // x27
  char *v8; // x22
  unsigned __int64 v11; // x19
  unsigned __int64 v12; // x19
  unsigned __int64 v13; // x19
  __int64 v14; // x26
  __int64 v15; // x23
  unsigned __int64 v16; // x24
  unsigned __int64 StatusReg; // x25
  unsigned __int64 v18; // x25
  unsigned __int64 v19; // x19
  __int64 v20; // x0
  unsigned __int64 v21; // x0
  unsigned __int64 v22; // x4
  unsigned __int64 v23; // x5
  __int64 v24; // x1
  unsigned __int64 v25; // x6
  unsigned __int16 v26; // w0
  unsigned __int64 v27; // x27
  __int64 v28; // x0
  unsigned __int64 v29; // x2
  unsigned __int64 v30; // x1
  unsigned __int64 v31; // x0
  __int64 v32; // x0
  _QWORD *v33; // x3
  unsigned __int64 v34; // x4
  __int64 v35; // x6
  __int64 v36; // x7
  unsigned __int64 v37; // x2
  unsigned __int64 *v38; // x5
  unsigned __int64 v39; // x1
  unsigned __int64 v40; // x0
  __int64 v42; // x1
  bool v43; // zf
  __int64 v44; // x5
  __int64 v45; // x0
  _QWORD *v46; // x0
  __int64 v47; // x0
  _QWORD *v48; // x8
  _QWORD *v49; // t1
  __int64 *v50; // x1
  unsigned __int64 v51; // x2
  unsigned __int64 v52; // x9
  __int64 v53; // x2
  unsigned __int64 v54; // x0
  __int64 v55; // x0
  unsigned __int64 v56; // x2
  unsigned __int64 v57; // x1
  __int64 v58; // x1
  unsigned __int64 v59; // x1
  __int64 v60; // x0
  __int64 (__fastcall **v61)(); // x6
  __int64 v62; // x5
  unsigned __int64 v63; // x4
  unsigned __int64 v64; // x3
  _WORD *v65; // x10
  unsigned int v66; // w7
  _QWORD *v67; // x2
  int v68; // w1
  unsigned __int64 v69; // x2
  __int64 v70; // x1
  unsigned __int64 v71; // x0
  __int64 v72; // x1
  unsigned __int16 v73; // w0
  __int64 *v75; // x1
  __int64 v76; // t1
  bool v77; // cf
  __int64 *v78; // x1
  __int64 v79; // x0
  __int64 *v80; // x1
  __int64 v81; // t1
  __int64 v82; // x5
  __int64 v83; // x6
  __int64 v84; // x2
  int v85; // w1
  __int64 v86; // x3
  __int64 v87; // x8
  __int64 v88; // x7
  __int64 v89; // x12
  __int64 v90; // x0
  __int64 v91; // x8
  __int64 v92; // x9
  unsigned int v93; // w0
  __int64 v94; // x1
  __int64 v95; // x1
  unsigned __int64 v96; // x0
  unsigned __int64 v97; // x26
  unsigned __int64 v98; // x0
  __int64 v99; // x0
  unsigned __int64 v100; // x5
  unsigned __int64 v101; // x24
  __int64 v102; // x1
  _QWORD *v103; // x0
  __int64 v104; // x0
  __int64 v105; // x2
  __int64 v106; // x24
  __int64 v107; // x8
  unsigned __int64 v108; // x26
  _QWORD *v109; // x4
  unsigned __int64 v110; // x2
  __int64 v111; // x2
  unsigned __int64 v112; // x24
  __int64 v113; // x1
  _QWORD *v114; // x0
  __int64 v115; // x0
  unsigned __int64 v116; // [xsp+68h] [xbp+68h]
  __int64 v117; // [xsp+78h] [xbp+78h]

  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  v8 = (char *)&unk_496000;
  v11 = a2;
  if ( (mtag_enabled & 1) != 0 )
    goto LABEL_95;
  while ( 1 )
  {
    v12 = v11 + 23;
    if ( v12 <= 0x1F )
    {
      if ( !a1 )
      {
        v13 = 32;
LABEL_97:
        v71 = sysmalloc(v13, 0, a3, a4, a5, a6);
        i = v71;
        if ( v71 )
        {
          if ( !perturb_byte )
            return i;
          v69 = a2;
          v70 = perturb_byte ^ 0xFFu;
          goto LABEL_100;
        }
        return 0;
      }
      if ( (unsigned __int8)global_max_fast <= 0x1Fu )
      {
        v58 = 128;
        v14 = 2;
        v13 = 32;
        goto LABEL_71;
      }
      v15 = 16;
      v16 = a1;
      v14 = 2;
      v13 = 32;
      StatusReg = *(_QWORD *)(a1 + 16);
      if ( !StatusReg )
      {
LABEL_84:
        v58 = 8LL * (unsigned int)(2 * v14 + 12);
        goto LABEL_71;
      }
    }
    else
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
      if ( !a1 )
        goto LABEL_97;
      if ( (unsigned __int8)global_max_fast < v13 )
        goto LABEL_26;
      v14 = (unsigned int)v13 >> 4;
      v15 = 8 * v14;
      v16 = a1 + 8LL * (unsigned int)(v14 - 2);
      StatusReg = *(_QWORD *)(v16 + 16);
      if ( !StatusReg )
        goto LABEL_84;
    }
    if ( (StatusReg & 0xF) == 0 )
      break;
    malloc_printerr("malloc(): unaligned fastbin chunk detected 2");
LABEL_144:
    v47 = malloc_printerr("malloc(): invalid next->prev_inuse (unsorted)");
LABEL_145:
    v50 = (__int64 *)v47;
    v33[4] = v33;
    v33[5] = v33;
LABEL_102:
    ++v34;
    *(_DWORD *)(a1 + 4LL * ((int)v44 >> 5) + 2144) |= 1 << v44;
    v33[2] = v47;
    v33[3] = v50;
    *(_QWORD *)(v47 + 24) = v33;
    v50[2] = (__int64)v33;
    if ( (_DWORD)v36 )
    {
      if ( qword_490650 )
        v77 = qword_490650 >= v34;
      else
        v77 = 1;
      if ( !v77 )
      {
        v104 = *(_QWORD *)(StatusReg + 56);
        v105 = v104 + 8 * v16;
        i = *(_QWORD *)(v105 + 128);
        if ( (i & 0xF) == 0 )
        {
          v106 = 2 * v16;
          *(_QWORD *)(v105 + 128) = *(_QWORD *)i ^ (i >> 12);
LABEL_205:
          --*(_WORD *)(v104 + v106);
          *(_QWORD *)(i + 8) = 0;
          return i;
        }
        goto LABEL_237;
      }
      v35 = (unsigned int)(v35 + 1);
      if ( (int)v35 > 9999 )
        goto LABEL_210;
    }
    else
    {
      v35 = (unsigned int)(v35 + 1);
      if ( (int)v35 > 9999 )
        goto LABEL_111;
    }
    v33 = *(_QWORD **)(v15 + 24);
    if ( v33 == (_QWORD *)v15 )
    {
      if ( (_DWORD)v36 )
      {
LABEL_210:
        v87 = 8 * v16;
LABEL_211:
        v104 = *(_QWORD *)(StatusReg + 56);
        v107 = v104 + v87;
        i = *(_QWORD *)(v107 + 128);
        if ( (i & 0xF) == 0 )
        {
          v106 = 2 * v16;
          *(_QWORD *)(v107 + 128) = *(_QWORD *)i ^ (i >> 12);
          goto LABEL_205;
        }
LABEL_237:
        malloc_printerr("malloc(): unaligned tcache chunk detected");
        goto LABEL_238;
      }
LABEL_111:
      if ( v13 > 0x3FF )
        goto LABEL_112;
      goto LABEL_114;
    }
LABEL_38:
    while ( 1 )
    {
      v37 = v33[1] & 0xFFFFFFFFFFFFFFF8LL;
      v38 = (_QWORD *)((char *)v33 + v37);
      if ( v37 <= 0x10 )
        break;
      v39 = *(_QWORD *)(a1 + 2184);
      if ( v39 < v37 )
        break;
      v40 = v38[1];
      if ( v39 < v40 || v40 <= 0xF )
      {
        malloc_printerr("malloc(): invalid next size (unsorted)");
        goto LABEL_101;
      }
      if ( (*v38 & 0xFFFFFFFFFFFFFFF8LL) != v37 )
      {
        malloc_printerr("malloc(): mismatching next->prev_size (unsorted)");
LABEL_140:
        v89 = v67[3];
        *(_QWORD *)((char *)v67 + v13 + 8) |= 1uLL;
        if ( (__int64 (__fastcall **)())a1 != v61 + 206 )
          v67[1] |= 4uLL;
        v90 = v62 + 8 * v63;
        v66 = (unsigned __int16)(v66 + 1);
        v91 = *(_QWORD *)(v90 + 128);
        *(_QWORD *)(v59 + 24) = v89;
        v92 = tcache_key;
        *(_QWORD *)(v89 + 16) = v59;
        v67[2] = v91 ^ ((unsigned __int64)(v67 + 2) >> 12);
        v67[3] = v92;
        *(_QWORD *)(v90 + 128) = v67 + 2;
        *v65 = v66;
LABEL_80:
        while ( v66 < v64 )
        {
          v67 = *(_QWORD **)(v59 + 24);
          if ( (_QWORD *)v59 == v67 )
            break;
          if ( v67 )
            goto LABEL_140;
        }
        goto LABEL_81;
      }
      v42 = v33[3];
      if ( *(_QWORD **)(v42 + 16) != v33 || v33[2] != v15 )
      {
        malloc_printerr("malloc(): unsorted double linked list corrupted");
LABEL_128:
        malloc_printerr("malloc(): unaligned fastbin chunk detected 3");
        return 0;
      }
      if ( (v40 & 1) != 0 )
        goto LABEL_144;
      v43 = v13 <= 0x3FF && v42 == v15;
      if ( v43 && *(_QWORD **)(a1 + 104) == v33 )
      {
        if ( v13 + 32 < v37 )
        {
          v109 = (_QWORD *)((char *)v33 + v13);
          *(_QWORD *)(v15 + 16) = (char *)v33 + v13;
          *(_QWORD *)(v15 + 24) = (char *)v33 + v13;
          v110 = v37 - v13;
          *(_QWORD *)(a1 + 104) = (char *)v33 + v13;
          v109[2] = v15;
          v109[3] = v15;
          if ( v110 > 0x3FF )
          {
            v109[4] = 0;
            v109[5] = 0;
          }
          i = (unsigned __int64)(v33 + 2);
          v33[1] = v13 | (4LL * (a1 != (_QWORD)&main_arena)) | 1;
          v109[1] = v110 | 1;
          *v38 = v110;
          goto LABEL_218;
        }
        *(_QWORD *)(v15 + 24) = v42;
        *(_QWORD *)(v42 + 16) = v15;
        if ( v13 != v37 )
        {
          if ( v37 > 0x3FF )
          {
            v45 = 1120;
            v44 = 64;
            goto LABEL_58;
          }
LABEL_101:
          LODWORD(v44) = (unsigned int)v37 >> 4;
          v75 = (__int64 *)(a1 + 8LL * (int)(2 * ((unsigned int)v37 >> 4) + 12));
          v76 = *v75;
          v50 = v75 - 2;
          v47 = v76;
          goto LABEL_102;
        }
      }
      else
      {
        *(_QWORD *)(v15 + 24) = v42;
        *(_QWORD *)(v42 + 16) = v15;
        if ( v13 != v37 )
        {
          if ( v37 <= 0x3FF )
            goto LABEL_101;
          if ( v37 <= 0xC3F )
          {
            v44 = (unsigned int)(v37 >> 6) + 48;
            v45 = 8LL * (2 * (int)v44 + 12);
          }
          else if ( v37 >> 9 > 0x14 )
          {
            if ( v37 >> 12 > 0xA )
            {
              if ( v37 >> 15 > 4 )
              {
                v100 = v37 >> 18;
                if ( v37 >> 18 > 2 )
                  LODWORD(v100) = 2;
                v44 = (unsigned int)(v100 + 124);
                v45 = 8LL * (2 * (int)v44 + 12);
              }
              else
              {
                v44 = (unsigned int)(v37 >> 15) + 119;
                v45 = 8LL * (2 * (int)v44 + 12);
              }
            }
            else
            {
              v44 = (unsigned int)(v37 >> 12) + 110;
              v45 = 8LL * (2 * (int)v44 + 12);
            }
          }
          else
          {
            v44 = (unsigned int)(v37 >> 9) + 91;
            v45 = 8LL * (2 * (int)v44 + 12);
          }
LABEL_58:
          v46 = (_QWORD *)(a1 + v45);
          v49 = (_QWORD *)*v46;
          v47 = (__int64)(v46 - 2);
          v48 = v49;
          if ( (_QWORD *)v47 == v49 )
            goto LABEL_145;
          v50 = *(__int64 **)(v47 + 24);
          v51 = v37 | 1;
          v52 = v50[1];
          if ( (v52 & 4) != 0 )
          {
            _libc_assert_fail("chunk_main_arena (bck->bk)", "malloc.c", 4179, "_int_malloc", v34, v44, v35, v36);
            goto LABEL_243;
          }
          if ( v52 > v51 )
          {
            v53 = v48[5];
            v33[4] = v48;
            v33[5] = v53;
            *(_QWORD *)(v53 + 32) = v33;
            v48[5] = v33;
            goto LABEL_102;
          }
          v98 = v48[1];
          if ( (v98 & 4) != 0 )
          {
LABEL_243:
            v115 = _libc_assert_fail("chunk_main_arena (fwd)", "malloc.c", 4192, "_int_malloc", v34, v44, v35, v36);
            return tcache_init_part_0(v115);
          }
          while ( v51 < v98 )
          {
            v48 = (_QWORD *)v48[4];
            v98 = v48[1];
            if ( (v98 & 4) != 0 )
            {
              v79 = _libc_assert_fail("chunk_main_arena (fwd)", "malloc.c", 4196, "_int_malloc", v34, v44, v35, v36);
              goto LABEL_223;
            }
          }
          if ( v51 == v98 )
          {
            v47 = v48[2];
          }
          else
          {
            v99 = v48[5];
            v33[4] = v48;
            v33[5] = v99;
            if ( *(_QWORD **)(v99 + 32) != v48 )
              goto LABEL_200;
            v48[5] = v33;
            v47 = (__int64)v48;
            *(_QWORD *)(v33[5] + 32LL) = v33;
          }
          v50 = *(__int64 **)(v47 + 24);
          if ( v50[2] != v47 )
          {
            v93 = malloc_printerr("malloc(): largebin double linked list corrupted (bk)");
LABEL_173:
            v85 = 1;
            v84 = a1 + 8LL * ((v93 << 6) - 2) + 96;
LABEL_119:
            while ( (v85 & (unsigned int)v86) == 0 )
            {
              v84 += 16;
              v85 *= 2;
              if ( !v85 )
              {
                _libc_assert_fail("bit != 0", "malloc.c", 4357, "_int_malloc", v34, v82, v83);
                goto LABEL_210;
              }
            }
            v14 = *(_QWORD *)(v84 + 24);
            if ( v84 == v14 )
            {
              v86 = (unsigned int)v86 & ~v85;
              v84 += 16;
              v85 *= 2;
              *(_DWORD *)(a1 + 4 * ((unsigned int)v83 + 536LL)) = v86;
              goto LABEL_116;
            }
            i = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v13 > i )
              goto LABEL_239;
            v101 = i - v13;
            unlink_chunk_isra_0(*(_QWORD **)(v84 + 24));
            if ( i - v13 <= 0x1F )
              goto LABEL_201;
            v102 = *(_QWORD *)(v15 + 16);
            v103 = (_QWORD *)(v14 + v13);
            if ( *(_QWORD *)(v102 + 24) != v15 )
            {
              v96 = malloc_printerr("malloc(): corrupted unsorted chunks 2");
LABEL_236:
              *(_QWORD *)(a1 + 96) = v95 + v13;
              i = v95 + 16;
              *(_QWORD *)(v95 + 8) = v13 | (4LL * (a1 != (_QWORD)&main_arena)) | 1;
              *(_QWORD *)(v95 + v13 + 8) = (v96 - v13) | 1;
              goto LABEL_218;
            }
            v103[2] = v102;
            v103[3] = v15;
            *(_QWORD *)(v15 + 16) = v103;
            *(_QWORD *)(v102 + 24) = v103;
            if ( v13 <= 0x3FF )
              *(_QWORD *)(a1 + 104) = v103;
            if ( v101 > 0x3FF )
            {
              v103[4] = 0;
              v103[5] = 0;
            }
            *(_QWORD *)(v14 + 8) = v13 | (4LL * (a1 != (_QWORD)&main_arena)) | 1;
            v103[1] = v101 | 1;
            *(_QWORD *)(v14 + i) = v101;
LABEL_191:
            i = v14 + 16;
            v68 = perturb_byte;
            if ( !perturb_byte )
              return i;
LABEL_82:
            v69 = a2;
            v70 = v68 ^ 0xFFu;
            v71 = i;
LABEL_100:
            memset(v71, v70, v69);
            return i;
          }
          goto LABEL_102;
        }
      }
      v38[1] = v40 | 1;
      if ( (_UNKNOWN *)a1 != &main_arena )
        v33[1] |= 4uLL;
      i = (unsigned __int64)(v33 + 2);
      if ( !v7 )
        goto LABEL_89;
      v72 = *(_QWORD *)(StatusReg + 56);
      v73 = *(_WORD *)(v72 + 2 * v16);
      if ( qword_490648 <= (unsigned __int64)v73 )
        goto LABEL_89;
      v87 = 8 * v16;
      v88 = v72 + 8 * v16;
      v33[3] = tcache_key;
      v33[2] = *(_QWORD *)(v88 + 128) ^ (i >> 12);
      v33 = *(_QWORD **)(v15 + 24);
      *(_QWORD *)(v88 + 128) = i;
      *(_WORD *)(v72 + 2 * v16) = v73 + 1;
      if ( v33 == (_QWORD *)v15 )
        goto LABEL_211;
      v36 = 1;
    }
    malloc_printerr("malloc(): invalid size (unsorted)");
LABEL_95:
    v11 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  v15 += a1;
  if ( !_libc_single_threaded )
  {
    while ( 1 )
    {
      v55 = *(_QWORD *)(StatusReg + 16);
      i = StatusReg + 16;
      v56 = (StatusReg + 16) >> 12;
      v57 = v56 ^ v55;
      if ( v56 != v55 && (v57 & 0xF) != 0 )
        break;
      v54 = _aarch64_cas8_acq(StatusReg, v57, (atomic_ullong *)v15);
      if ( StatusReg == v54 )
        goto LABEL_10;
      if ( !v54 )
        goto LABEL_84;
      StatusReg = v54;
    }
LABEL_25:
    malloc_printerr("malloc(): unaligned fastbin chunk detected");
LABEL_26:
    if ( v13 <= 0x3FF )
    {
      v14 = (unsigned int)v13 >> 4;
      v58 = 8LL * (((unsigned int)v13 >> 3) + 12);
LABEL_71:
      v59 = a1 + v58 - 16;
      i = *(_QWORD *)(v59 + 24);
      if ( v59 == i )
      {
LABEL_32:
        StatusReg = _ReadStatusReg(TPIDR_EL0);
        v7 = 0;
        v16 = (v13 - 17) >> 4;
        if ( *(_QWORD *)(StatusReg + 48 + 8) )
        {
          if ( qword_490638 <= v16 )
            v7 = 0;
          else
            v7 = v13;
        }
        v33 = *(_QWORD **)(a1 + 120);
        v15 = a1 + 96;
        v34 = 0;
        if ( v33 != (_QWORD *)(a1 + 96) )
          goto LABEL_37;
        goto LABEL_111;
      }
      v60 = *(_QWORD *)(i + 24);
      if ( *(_QWORD *)(v60 + 16) == i )
      {
        v61 = off_490000;
        *(_QWORD *)(i + v13 + 8) |= 1uLL;
        *(_QWORD *)(v59 + 24) = v60;
        *(_QWORD *)(v60 + 16) = v59;
        if ( (_UNKNOWN *)a1 != &main_arena )
          *(_QWORD *)(i + 8) |= 4uLL;
        v62 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 48 + 8);
        if ( v62 )
        {
          v63 = (v13 - 17) >> 4;
          if ( qword_490638 > v63 )
          {
            v64 = qword_490648;
            v65 = (_WORD *)(v62 + 2 * v63);
            v66 = (unsigned __int16)*v65;
            goto LABEL_80;
          }
        }
LABEL_81:
        i += 16LL;
        v68 = perturb_byte;
        if ( !perturb_byte )
          return i;
        goto LABEL_82;
      }
      malloc_printerr("malloc(): smallbin double linked list corrupted");
    }
    else
    {
      v14 = (unsigned int)(v13 >> 6) + 48;
      if ( v13 <= 0xC3F )
        goto LABEL_30;
      if ( v13 >> 9 <= 0x14 )
      {
        v14 = (unsigned int)(v13 >> 9) + 91;
        goto LABEL_30;
      }
      if ( v13 >> 12 <= 0xA )
      {
        v14 = (unsigned int)(v13 >> 12) + 110;
LABEL_30:
        if ( *(_DWORD *)(a1 + 8) )
          malloc_consolidate(a1);
        goto LABEL_32;
      }
      if ( v13 >> 15 <= 4 )
      {
        v14 = (unsigned int)(v13 >> 15) + 119;
        goto LABEL_30;
      }
    }
    v97 = v13 >> 18;
    if ( v13 >> 18 > 2 )
      LODWORD(v97) = 2;
    v14 = (unsigned int)(v97 + 124);
    goto LABEL_30;
  }
  i = StatusReg + 16;
  *(_QWORD *)(v16 + 16) = *(_QWORD *)(StatusReg + 16) ^ ((StatusReg + 16) >> 12);
LABEL_10:
  if ( (_DWORD)v14 == (unsigned int)*(_QWORD *)(StatusReg + 8) >> 4 )
  {
    v18 = _ReadStatusReg(TPIDR_EL0) + 48;
    v19 = (v13 - 17) >> 4;
    v20 = *(_QWORD *)(v18 + 8);
    if ( !v20
      || qword_490638 <= v19
      || (v21 = *(unsigned __int16 *)(v20 + 2 * v19), v117 = 8 * v19, v13 = 2 * v19, v21 >= qword_490648) )
    {
LABEL_89:
      v68 = perturb_byte;
      if ( !perturb_byte )
        return i;
      goto LABEL_82;
    }
    while ( 1 )
    {
      v27 = *(_QWORD *)(v16 + 16);
      if ( !v27 )
        goto LABEL_89;
      if ( (v27 & 0xF) != 0 )
        goto LABEL_128;
      if ( _libc_single_threaded )
      {
        v22 = v27 + 16;
        v23 = (v27 + 16) >> 12;
        *(_QWORD *)(v16 + 16) = *(_QWORD *)(v27 + 16) ^ v23;
      }
      else
      {
        v28 = *(_QWORD *)(v27 + 16);
        a1 = v27 + 16;
        v29 = (v27 + 16) >> 12;
        v30 = v29 ^ v28;
        if ( v29 != v28 )
        {
LABEL_24:
          if ( (v30 & 0xF) != 0 )
            goto LABEL_25;
        }
        while ( 1 )
        {
          v31 = _aarch64_cas8_acq(v27, v30, (atomic_ullong *)v15);
          if ( v27 == v31 )
            break;
          if ( !v31 )
            goto LABEL_89;
          v27 = v31;
          a1 = v31 + 16;
          v32 = *(_QWORD *)(v31 + 16);
          v30 = (a1 >> 12) ^ v32;
          if ( a1 >> 12 != v32 )
            goto LABEL_24;
        }
        v22 = a1;
        v23 = a1 >> 12;
      }
      v24 = *(_QWORD *)(v18 + 8);
      v25 = qword_490648;
      *(_QWORD *)(v27 + 24) = tcache_key;
      *(_QWORD *)(v27 + 16) = *(_QWORD *)(v24 + v117 + 128) ^ v23;
      *(_QWORD *)(v24 + v117 + 128) = v22;
      v26 = *(_WORD *)(v24 + v13) + 1;
      *(_WORD *)(v24 + v13) = v26;
      if ( v25 <= v26 )
        goto LABEL_89;
    }
  }
  malloc_printerr("malloc(): memory corruption (fast)");
  while ( 1 )
  {
    v93 = v83 + 1;
    v94 = a1 + 4LL * (unsigned int)(v83 + 1);
    while ( 1 )
    {
      v83 = v93;
      if ( v93 > 3 )
        break;
      v86 = *(unsigned int *)(v94 + 2144);
      v94 += 4;
      if ( (_DWORD)v86 )
        goto LABEL_173;
      ++v93;
    }
    v95 = *(_QWORD *)(a1 + 96);
    v96 = *(_QWORD *)(v95 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a1 + 2184) < v96 )
    {
      malloc_printerr("malloc(): corrupted top size");
LABEL_200:
      malloc_printerr("malloc(): largebin double linked list corrupted (nextsize)");
LABEL_201:
      *(_QWORD *)(v14 + i + 8) |= 1uLL;
      if ( (_UNKNOWN *)a1 != &main_arena )
        *(_QWORD *)(v14 + 8) |= 4uLL;
      goto LABEL_191;
    }
    if ( v13 + 32 <= v96 )
      goto LABEL_236;
    v116 = v34;
    if ( !*(_DWORD *)(a1 + 8) )
      break;
    malloc_consolidate(a1);
    v34 = v116;
    if ( v13 > 0x3FF )
    {
      if ( v13 <= 0xC3F )
      {
        v33 = *(_QWORD **)(v15 + 24);
        v14 = (unsigned int)(v13 >> 6) + 48;
        if ( v33 == (_QWORD *)v15 )
          goto LABEL_112;
LABEL_37:
        v35 = 0;
        v36 = 0;
        goto LABEL_38;
      }
      if ( v13 >> 9 <= 0x14 )
      {
        v33 = *(_QWORD **)(v15 + 24);
        v14 = (unsigned int)(v13 >> 9) + 91;
        if ( v33 == (_QWORD *)v15 )
          goto LABEL_112;
        goto LABEL_37;
      }
      if ( v13 >> 12 <= 0xA )
      {
        v33 = *(_QWORD **)(v15 + 24);
        v14 = (unsigned int)(v13 >> 12) + 110;
        if ( v33 == (_QWORD *)v15 )
          goto LABEL_112;
        goto LABEL_37;
      }
      v33 = *(_QWORD **)(v15 + 24);
      if ( v13 >> 15 <= 4 )
      {
        v14 = (unsigned int)(v13 >> 15) + 119;
        if ( v33 == (_QWORD *)v15 )
          goto LABEL_112;
        goto LABEL_37;
      }
      v108 = v13 >> 18;
      if ( v13 >> 18 > 2 )
        LODWORD(v108) = 2;
      v14 = (unsigned int)(v108 + 124);
      if ( v33 != (_QWORD *)v15 )
        goto LABEL_37;
LABEL_112:
      v78 = (__int64 *)(a1 + 16LL * (((_DWORD)v14 - 1) & 0x7FFFFFFF) + 112);
      v81 = *v78;
      v80 = v78 - 2;
      v79 = v81;
      if ( (__int64 *)v81 == v80 || v13 > *(_QWORD *)(v79 + 8) )
      {
LABEL_114:
        v82 = -16;
        i = 1;
        goto LABEL_115;
      }
LABEL_223:
      for ( i = *(_QWORD *)(v79 + 40); ; i = *(_QWORD *)(i + 40) )
      {
        v111 = *(_QWORD *)(i + 8);
        v8 = (char *)(v111 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v13 <= (v111 & 0xFFFFFFFFFFFFFFF8LL) )
          break;
      }
      if ( v80[3] != i && v111 == *(_QWORD *)(*(_QWORD *)(i + 16) + 8LL) )
        i = *(_QWORD *)(i + 16);
      v112 = (unsigned __int64)&v8[-v13];
      unlink_chunk_isra_0((_QWORD *)i);
      if ( (unsigned __int64)&v8[-v13] > 0x1F )
      {
        v113 = *(_QWORD *)(v15 + 16);
        v114 = (_QWORD *)(i + v13);
        if ( *(_QWORD *)(v113 + 24) == v15 )
        {
          v114[2] = v113;
          v114[3] = v15;
          *(_QWORD *)(v15 + 16) = v114;
          *(_QWORD *)(v113 + 24) = v114;
          if ( v112 > 0x3FF )
          {
            v114[4] = 0;
            v114[5] = 0;
          }
          *(_QWORD *)(i + 8) = v13 | (4LL * (a1 != (_QWORD)&main_arena)) | 1;
          v114[1] = v112 | 1;
          *(_QWORD *)&v8[i] = v112;
          goto LABEL_234;
        }
LABEL_238:
        malloc_printerr("malloc(): corrupted unsorted chunks");
LABEL_239:
        _libc_assert_fail("(unsigned long) (size) >= (unsigned long) (nb)", "malloc.c", 4376, "_int_malloc");
      }
      *(_QWORD *)&v8[i + 8] |= 1uLL;
      if ( (_UNKNOWN *)a1 != &main_arena )
        *(_QWORD *)(i + 8) |= 4uLL;
LABEL_234:
      i += 16LL;
LABEL_218:
      alloc_perturb();
      return i;
    }
    v33 = *(_QWORD **)(v15 + 24);
    v14 = (unsigned int)v13 >> 4;
    v82 = -16;
    if ( v33 != (_QWORD *)v15 )
      goto LABEL_37;
LABEL_115:
    v83 = (unsigned int)(v14 + 1) >> 5;
    v84 = a1 + 8LL * (unsigned int)(2 * v14 + 14) - 16;
    v85 = (_DWORD)i << (v14 + 1);
    v86 = *(unsigned int *)(a1 + 4 * (v83 + 536));
LABEL_116:
    if ( (unsigned int)v86 > v85 - 1 )
      goto LABEL_119;
  }
  i = sysmalloc(v13, (_QWORD *)a1, v13 + 32, v86, v34, v82);
  if ( i )
    goto LABEL_218;
  return i;
}
