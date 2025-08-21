__int64 __fastcall int_malloc(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 i; // x20
  unsigned __int64 v5; // x27
  char *v6; // x22
  unsigned __int64 v9; // x19
  unsigned __int64 v10; // x19
  unsigned __int64 v11; // x19
  __int64 v12; // x26
  __int64 v13; // x23
  unsigned __int64 v14; // x24
  unsigned __int64 StatusReg; // x25
  unsigned __int64 v16; // x25
  unsigned __int64 v17; // x19
  __int64 v18; // x0
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x4
  unsigned __int64 v21; // x5
  __int64 v22; // x1
  unsigned __int64 v23; // x6
  unsigned __int16 v24; // w0
  unsigned __int64 v25; // x27
  __int64 v26; // x0
  unsigned __int64 v27; // x2
  unsigned __int64 v28; // x1
  unsigned __int64 v29; // x0
  __int64 v30; // x0
  _QWORD *v31; // x3
  unsigned __int64 v32; // x4
  int v33; // w6
  int v34; // w7
  unsigned __int64 v35; // x2
  unsigned __int64 *v36; // x5
  unsigned __int64 v37; // x1
  unsigned __int64 v38; // x0
  __int64 v40; // x1
  bool v41; // zf
  signed int v42; // w5
  __int64 v43; // x0
  _QWORD *v44; // x0
  __int64 v45; // x0
  _QWORD *v46; // x8
  _QWORD *v47; // t1
  __int64 *v48; // x1
  unsigned __int64 v49; // x2
  unsigned __int64 v50; // x9
  __int64 v51; // x2
  unsigned __int64 v52; // x0
  __int64 v53; // x0
  unsigned __int64 v54; // x2
  unsigned __int64 v55; // x1
  __int64 v56; // x1
  unsigned __int64 v57; // x1
  __int64 v58; // x0
  __int64 (__fastcall **v59)(); // x6
  __int64 v60; // x5
  unsigned __int64 v61; // x4
  unsigned __int64 v62; // x3
  _WORD *v63; // x10
  unsigned int v64; // w7
  _QWORD *v65; // x2
  int v66; // w1
  unsigned __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  unsigned __int16 v71; // w0
  __int64 *v73; // x1
  __int64 v74; // t1
  bool v75; // cf
  __int64 *v76; // x1
  __int64 v77; // x0
  __int64 *v78; // x1
  __int64 v79; // t1
  unsigned int v80; // w6
  __int64 v81; // x2
  int v82; // w1
  __int64 v83; // x3
  __int64 v84; // x8
  __int64 v85; // x7
  __int64 v86; // x12
  __int64 v87; // x0
  __int64 v88; // x8
  __int64 v89; // x9
  unsigned int v90; // w0
  __int64 v91; // x1
  __int64 v92; // x1
  unsigned __int64 v93; // x0
  unsigned __int64 v94; // x26
  unsigned __int64 v95; // x0
  __int64 v96; // x0
  unsigned __int64 v97; // x5
  unsigned __int64 v98; // x24
  __int64 v99; // x1
  _QWORD *v100; // x0
  __int64 v101; // x0
  __int64 v102; // x2
  __int64 v103; // x24
  __int64 v104; // x8
  unsigned __int64 v105; // x26
  _QWORD *v106; // x4
  unsigned __int64 v107; // x2
  __int64 v108; // x2
  unsigned __int64 v109; // x24
  __int64 v110; // x1
  _QWORD *v111; // x0
  __int64 v112; // x0
  unsigned __int64 v113; // [xsp+68h] [xbp+68h]
  __int64 v114; // [xsp+78h] [xbp+78h]

  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  v6 = (char *)&unk_496000;
  v9 = a2;
  if ( (mtag_enabled & 1) != 0 )
    goto LABEL_95;
  while ( 1 )
  {
    v10 = v9 + 23;
    if ( v10 <= 0x1F )
    {
      if ( !a1 )
      {
        v11 = 32;
LABEL_97:
        v69 = sysmalloc(v11, 0);
        i = v69;
        if ( v69 )
        {
          if ( !perturb_byte )
            return i;
          v67 = a2;
          v68 = perturb_byte ^ 0xFFu;
          goto LABEL_100;
        }
        return 0;
      }
      if ( (unsigned __int8)global_max_fast <= 0x1Fu )
      {
        v56 = 128;
        v12 = 2;
        v11 = 32;
        goto LABEL_71;
      }
      v13 = 16;
      v14 = a1;
      v12 = 2;
      v11 = 32;
      StatusReg = *(_QWORD *)(a1 + 16);
      if ( !StatusReg )
      {
LABEL_84:
        v56 = 8LL * (unsigned int)(2 * v12 + 12);
        goto LABEL_71;
      }
    }
    else
    {
      v11 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      if ( !a1 )
        goto LABEL_97;
      if ( (unsigned __int8)global_max_fast < v11 )
        goto LABEL_26;
      v12 = (unsigned int)v11 >> 4;
      v13 = 8 * v12;
      v14 = a1 + 8LL * (unsigned int)(v12 - 2);
      StatusReg = *(_QWORD *)(v14 + 16);
      if ( !StatusReg )
        goto LABEL_84;
    }
    if ( (StatusReg & 0xF) == 0 )
      break;
    malloc_printerr("malloc(): unaligned fastbin chunk detected 2");
LABEL_144:
    v45 = malloc_printerr("malloc(): invalid next->prev_inuse (unsorted)");
LABEL_145:
    v48 = (__int64 *)v45;
    v31[4] = v31;
    v31[5] = v31;
LABEL_102:
    ++v32;
    *(_DWORD *)(a1 + 4LL * (v42 >> 5) + 2144) |= 1 << v42;
    v31[2] = v45;
    v31[3] = v48;
    *(_QWORD *)(v45 + 24) = v31;
    v48[2] = (__int64)v31;
    if ( v34 )
    {
      if ( qword_490650 )
        v75 = qword_490650 >= v32;
      else
        v75 = 1;
      if ( !v75 )
      {
        v101 = *(_QWORD *)(StatusReg + 56);
        v102 = v101 + 8 * v14;
        i = *(_QWORD *)(v102 + 128);
        if ( (i & 0xF) == 0 )
        {
          v103 = 2 * v14;
          *(_QWORD *)(v102 + 128) = *(_QWORD *)i ^ (i >> 12);
LABEL_205:
          --*(_WORD *)(v101 + v103);
          *(_QWORD *)(i + 8) = 0;
          return i;
        }
        goto LABEL_237;
      }
      if ( ++v33 > 9999 )
        goto LABEL_210;
    }
    else if ( ++v33 > 9999 )
    {
      goto LABEL_111;
    }
    v31 = *(_QWORD **)(v13 + 24);
    if ( v31 == (_QWORD *)v13 )
    {
      if ( v34 )
      {
LABEL_210:
        v84 = 8 * v14;
LABEL_211:
        v101 = *(_QWORD *)(StatusReg + 56);
        v104 = v101 + v84;
        i = *(_QWORD *)(v104 + 128);
        if ( (i & 0xF) == 0 )
        {
          v103 = 2 * v14;
          *(_QWORD *)(v104 + 128) = *(_QWORD *)i ^ (i >> 12);
          goto LABEL_205;
        }
LABEL_237:
        malloc_printerr("malloc(): unaligned tcache chunk detected");
        goto LABEL_238;
      }
LABEL_111:
      if ( v11 > 0x3FF )
        goto LABEL_112;
      goto LABEL_114;
    }
LABEL_38:
    while ( 1 )
    {
      v35 = v31[1] & 0xFFFFFFFFFFFFFFF8LL;
      v36 = (_QWORD *)((char *)v31 + v35);
      if ( v35 <= 0x10 )
        break;
      v37 = *(_QWORD *)(a1 + 2184);
      if ( v37 < v35 )
        break;
      v38 = v36[1];
      if ( v37 < v38 || v38 <= 0xF )
      {
        malloc_printerr("malloc(): invalid next size (unsorted)");
        goto LABEL_101;
      }
      if ( (*v36 & 0xFFFFFFFFFFFFFFF8LL) != v35 )
      {
        malloc_printerr("malloc(): mismatching next->prev_size (unsorted)");
LABEL_140:
        v86 = v65[3];
        *(_QWORD *)((char *)v65 + v11 + 8) |= 1uLL;
        if ( (__int64 (__fastcall **)())a1 != v59 + 206 )
          v65[1] |= 4uLL;
        v87 = v60 + 8 * v61;
        v64 = (unsigned __int16)(v64 + 1);
        v88 = *(_QWORD *)(v87 + 128);
        *(_QWORD *)(v57 + 24) = v86;
        v89 = tcache_key;
        *(_QWORD *)(v86 + 16) = v57;
        v65[2] = v88 ^ ((unsigned __int64)(v65 + 2) >> 12);
        v65[3] = v89;
        *(_QWORD *)(v87 + 128) = v65 + 2;
        *v63 = v64;
LABEL_80:
        while ( v64 < v62 )
        {
          v65 = *(_QWORD **)(v57 + 24);
          if ( (_QWORD *)v57 == v65 )
            break;
          if ( v65 )
            goto LABEL_140;
        }
        goto LABEL_81;
      }
      v40 = v31[3];
      if ( *(_QWORD **)(v40 + 16) != v31 || v31[2] != v13 )
      {
        malloc_printerr("malloc(): unsorted double linked list corrupted");
LABEL_128:
        malloc_printerr("malloc(): unaligned fastbin chunk detected 3");
        return 0;
      }
      if ( (v38 & 1) != 0 )
        goto LABEL_144;
      v41 = v11 <= 0x3FF && v40 == v13;
      if ( v41 && *(_QWORD **)(a1 + 104) == v31 )
      {
        if ( v11 + 32 < v35 )
        {
          v106 = (_QWORD *)((char *)v31 + v11);
          *(_QWORD *)(v13 + 16) = (char *)v31 + v11;
          *(_QWORD *)(v13 + 24) = (char *)v31 + v11;
          v107 = v35 - v11;
          *(_QWORD *)(a1 + 104) = (char *)v31 + v11;
          v106[2] = v13;
          v106[3] = v13;
          if ( v107 > 0x3FF )
          {
            v106[4] = 0;
            v106[5] = 0;
          }
          i = (unsigned __int64)(v31 + 2);
          v31[1] = v11 | (4LL * (a1 != (_QWORD)&main_arena)) | 1;
          v106[1] = v107 | 1;
          *v36 = v107;
          goto LABEL_218;
        }
        *(_QWORD *)(v13 + 24) = v40;
        *(_QWORD *)(v40 + 16) = v13;
        if ( v11 != v35 )
        {
          if ( v35 > 0x3FF )
          {
            v43 = 1120;
            v42 = 64;
            goto LABEL_58;
          }
LABEL_101:
          v42 = (unsigned int)v35 >> 4;
          v73 = (__int64 *)(a1 + 8LL * (int)(2 * ((unsigned int)v35 >> 4) + 12));
          v74 = *v73;
          v48 = v73 - 2;
          v45 = v74;
          goto LABEL_102;
        }
      }
      else
      {
        *(_QWORD *)(v13 + 24) = v40;
        *(_QWORD *)(v40 + 16) = v13;
        if ( v11 != v35 )
        {
          if ( v35 <= 0x3FF )
            goto LABEL_101;
          if ( v35 <= 0xC3F )
          {
            v42 = (v35 >> 6) + 48;
            v43 = 8LL * (2 * v42 + 12);
          }
          else if ( v35 >> 9 > 0x14 )
          {
            if ( v35 >> 12 > 0xA )
            {
              if ( v35 >> 15 > 4 )
              {
                v97 = v35 >> 18;
                if ( v35 >> 18 > 2 )
                  LODWORD(v97) = 2;
                v42 = v97 + 124;
                v43 = 8LL * (2 * v42 + 12);
              }
              else
              {
                v42 = (v35 >> 15) + 119;
                v43 = 8LL * (2 * v42 + 12);
              }
            }
            else
            {
              v42 = (v35 >> 12) + 110;
              v43 = 8LL * (2 * v42 + 12);
            }
          }
          else
          {
            v42 = (v35 >> 9) + 91;
            v43 = 8LL * (2 * v42 + 12);
          }
LABEL_58:
          v44 = (_QWORD *)(a1 + v43);
          v47 = (_QWORD *)*v44;
          v45 = (__int64)(v44 - 2);
          v46 = v47;
          if ( (_QWORD *)v45 == v47 )
            goto LABEL_145;
          v48 = *(__int64 **)(v45 + 24);
          v49 = v35 | 1;
          v50 = v48[1];
          if ( (v50 & 4) != 0 )
          {
            _libc_assert_fail("chunk_main_arena (bck->bk)", "malloc.c", 4179, "_int_malloc");
            goto LABEL_243;
          }
          if ( v50 > v49 )
          {
            v51 = v46[5];
            v31[4] = v46;
            v31[5] = v51;
            *(_QWORD *)(v51 + 32) = v31;
            v46[5] = v31;
            goto LABEL_102;
          }
          v95 = v46[1];
          if ( (v95 & 4) != 0 )
          {
LABEL_243:
            v112 = _libc_assert_fail("chunk_main_arena (fwd)", "malloc.c", 4192, "_int_malloc");
            return tcache_init_part_0(v112);
          }
          while ( v49 < v95 )
          {
            v46 = (_QWORD *)v46[4];
            v95 = v46[1];
            if ( (v95 & 4) != 0 )
            {
              v77 = _libc_assert_fail("chunk_main_arena (fwd)", "malloc.c", 4196, "_int_malloc");
              goto LABEL_223;
            }
          }
          if ( v49 == v95 )
          {
            v45 = v46[2];
          }
          else
          {
            v96 = v46[5];
            v31[4] = v46;
            v31[5] = v96;
            if ( *(_QWORD **)(v96 + 32) != v46 )
              goto LABEL_200;
            v46[5] = v31;
            v45 = (__int64)v46;
            *(_QWORD *)(v31[5] + 32LL) = v31;
          }
          v48 = *(__int64 **)(v45 + 24);
          if ( v48[2] != v45 )
          {
            v90 = malloc_printerr("malloc(): largebin double linked list corrupted (bk)");
LABEL_173:
            v82 = 1;
            v81 = a1 + 8LL * ((v90 << 6) - 2) + 96;
LABEL_119:
            while ( (v82 & (unsigned int)v83) == 0 )
            {
              v81 += 16;
              v82 *= 2;
              if ( !v82 )
              {
                _libc_assert_fail("bit != 0", "malloc.c", 4357, "_int_malloc");
                goto LABEL_210;
              }
            }
            v12 = *(_QWORD *)(v81 + 24);
            if ( v81 == v12 )
            {
              v83 = (unsigned int)v83 & ~v82;
              v81 += 16;
              v82 *= 2;
              *(_DWORD *)(a1 + 4 * (v80 + 536LL)) = v83;
              goto LABEL_116;
            }
            i = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v11 > i )
              goto LABEL_239;
            v98 = i - v11;
            unlink_chunk_isra_0(*(_QWORD *)(v81 + 24));
            if ( i - v11 <= 0x1F )
              goto LABEL_201;
            v99 = *(_QWORD *)(v13 + 16);
            v100 = (_QWORD *)(v12 + v11);
            if ( *(_QWORD *)(v99 + 24) != v13 )
            {
              v93 = malloc_printerr("malloc(): corrupted unsorted chunks 2");
LABEL_236:
              *(_QWORD *)(a1 + 96) = v92 + v11;
              i = v92 + 16;
              *(_QWORD *)(v92 + 8) = v11 | (4LL * (a1 != (_QWORD)&main_arena)) | 1;
              *(_QWORD *)(v92 + v11 + 8) = (v93 - v11) | 1;
              goto LABEL_218;
            }
            v100[2] = v99;
            v100[3] = v13;
            *(_QWORD *)(v13 + 16) = v100;
            *(_QWORD *)(v99 + 24) = v100;
            if ( v11 <= 0x3FF )
              *(_QWORD *)(a1 + 104) = v100;
            if ( v98 > 0x3FF )
            {
              v100[4] = 0;
              v100[5] = 0;
            }
            *(_QWORD *)(v12 + 8) = v11 | (4LL * (a1 != (_QWORD)&main_arena)) | 1;
            v100[1] = v98 | 1;
            *(_QWORD *)(v12 + i) = v98;
LABEL_191:
            i = v12 + 16;
            v66 = perturb_byte;
            if ( !perturb_byte )
              return i;
LABEL_82:
            v67 = a2;
            v68 = v66 ^ 0xFFu;
            v69 = i;
LABEL_100:
            memset(v69, v68, v67);
            return i;
          }
          goto LABEL_102;
        }
      }
      v36[1] = v38 | 1;
      if ( (_UNKNOWN *)a1 != &main_arena )
        v31[1] |= 4uLL;
      i = (unsigned __int64)(v31 + 2);
      if ( !v5 )
        goto LABEL_89;
      v70 = *(_QWORD *)(StatusReg + 56);
      v71 = *(_WORD *)(v70 + 2 * v14);
      if ( qword_490648 <= (unsigned __int64)v71 )
        goto LABEL_89;
      v84 = 8 * v14;
      v85 = v70 + 8 * v14;
      v31[3] = tcache_key;
      v31[2] = *(_QWORD *)(v85 + 128) ^ (i >> 12);
      v31 = *(_QWORD **)(v13 + 24);
      *(_QWORD *)(v85 + 128) = i;
      *(_WORD *)(v70 + 2 * v14) = v71 + 1;
      if ( v31 == (_QWORD *)v13 )
        goto LABEL_211;
      v34 = 1;
    }
    malloc_printerr("malloc(): invalid size (unsorted)");
LABEL_95:
    v9 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  v13 += a1;
  if ( !_libc_single_threaded )
  {
    while ( 1 )
    {
      v53 = *(_QWORD *)(StatusReg + 16);
      i = StatusReg + 16;
      v54 = (StatusReg + 16) >> 12;
      v55 = v54 ^ v53;
      if ( v54 != v53 && (v55 & 0xF) != 0 )
        break;
      v52 = _aarch64_cas8_acq(StatusReg, v55, (atomic_ullong *)v13);
      if ( StatusReg == v52 )
        goto LABEL_10;
      if ( !v52 )
        goto LABEL_84;
      StatusReg = v52;
    }
LABEL_25:
    malloc_printerr("malloc(): unaligned fastbin chunk detected");
LABEL_26:
    if ( v11 <= 0x3FF )
    {
      v12 = (unsigned int)v11 >> 4;
      v56 = 8LL * (((unsigned int)v11 >> 3) + 12);
LABEL_71:
      v57 = a1 + v56 - 16;
      i = *(_QWORD *)(v57 + 24);
      if ( v57 == i )
      {
LABEL_32:
        StatusReg = _ReadStatusReg(TPIDR_EL0);
        v5 = 0;
        v14 = (v11 - 17) >> 4;
        if ( *(_QWORD *)(StatusReg + 48 + 8) )
        {
          if ( qword_490638 <= v14 )
            v5 = 0;
          else
            v5 = v11;
        }
        v31 = *(_QWORD **)(a1 + 120);
        v13 = a1 + 96;
        v32 = 0;
        if ( v31 != (_QWORD *)(a1 + 96) )
          goto LABEL_37;
        goto LABEL_111;
      }
      v58 = *(_QWORD *)(i + 24);
      if ( *(_QWORD *)(v58 + 16) == i )
      {
        v59 = off_490000;
        *(_QWORD *)(i + v11 + 8) |= 1uLL;
        *(_QWORD *)(v57 + 24) = v58;
        *(_QWORD *)(v58 + 16) = v57;
        if ( (_UNKNOWN *)a1 != &main_arena )
          *(_QWORD *)(i + 8) |= 4uLL;
        v60 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 48 + 8);
        if ( v60 )
        {
          v61 = (v11 - 17) >> 4;
          if ( qword_490638 > v61 )
          {
            v62 = qword_490648;
            v63 = (_WORD *)(v60 + 2 * v61);
            v64 = (unsigned __int16)*v63;
            goto LABEL_80;
          }
        }
LABEL_81:
        i += 16LL;
        v66 = perturb_byte;
        if ( !perturb_byte )
          return i;
        goto LABEL_82;
      }
      malloc_printerr("malloc(): smallbin double linked list corrupted");
    }
    else
    {
      v12 = (unsigned int)(v11 >> 6) + 48;
      if ( v11 <= 0xC3F )
        goto LABEL_30;
      if ( v11 >> 9 <= 0x14 )
      {
        v12 = (unsigned int)(v11 >> 9) + 91;
        goto LABEL_30;
      }
      if ( v11 >> 12 <= 0xA )
      {
        v12 = (unsigned int)(v11 >> 12) + 110;
LABEL_30:
        if ( *(_DWORD *)(a1 + 8) )
          malloc_consolidate(a1, a2, a3, a4);
        goto LABEL_32;
      }
      if ( v11 >> 15 <= 4 )
      {
        v12 = (unsigned int)(v11 >> 15) + 119;
        goto LABEL_30;
      }
    }
    v94 = v11 >> 18;
    if ( v11 >> 18 > 2 )
      LODWORD(v94) = 2;
    v12 = (unsigned int)(v94 + 124);
    goto LABEL_30;
  }
  i = StatusReg + 16;
  *(_QWORD *)(v14 + 16) = *(_QWORD *)(StatusReg + 16) ^ ((StatusReg + 16) >> 12);
LABEL_10:
  if ( (_DWORD)v12 == (unsigned int)*(_QWORD *)(StatusReg + 8) >> 4 )
  {
    v16 = _ReadStatusReg(TPIDR_EL0) + 48;
    v17 = (v11 - 17) >> 4;
    v18 = *(_QWORD *)(v16 + 8);
    if ( !v18
      || qword_490638 <= v17
      || (v19 = *(unsigned __int16 *)(v18 + 2 * v17), v114 = 8 * v17, v11 = 2 * v17, v19 >= qword_490648) )
    {
LABEL_89:
      v66 = perturb_byte;
      if ( !perturb_byte )
        return i;
      goto LABEL_82;
    }
    while ( 1 )
    {
      v25 = *(_QWORD *)(v14 + 16);
      if ( !v25 )
        goto LABEL_89;
      if ( (v25 & 0xF) != 0 )
        goto LABEL_128;
      if ( _libc_single_threaded )
      {
        v20 = v25 + 16;
        v21 = (v25 + 16) >> 12;
        *(_QWORD *)(v14 + 16) = *(_QWORD *)(v25 + 16) ^ v21;
      }
      else
      {
        v26 = *(_QWORD *)(v25 + 16);
        a1 = v25 + 16;
        v27 = (v25 + 16) >> 12;
        v28 = v27 ^ v26;
        if ( v27 != v26 )
        {
LABEL_24:
          if ( (v28 & 0xF) != 0 )
            goto LABEL_25;
        }
        while ( 1 )
        {
          v29 = _aarch64_cas8_acq(v25, v28, (atomic_ullong *)v13);
          if ( v25 == v29 )
            break;
          if ( !v29 )
            goto LABEL_89;
          v25 = v29;
          a1 = v29 + 16;
          v30 = *(_QWORD *)(v29 + 16);
          v28 = (a1 >> 12) ^ v30;
          if ( a1 >> 12 != v30 )
            goto LABEL_24;
        }
        v20 = a1;
        v21 = a1 >> 12;
      }
      v22 = *(_QWORD *)(v16 + 8);
      v23 = qword_490648;
      *(_QWORD *)(v25 + 24) = tcache_key;
      *(_QWORD *)(v25 + 16) = *(_QWORD *)(v22 + v114 + 128) ^ v21;
      *(_QWORD *)(v22 + v114 + 128) = v20;
      v24 = *(_WORD *)(v22 + v11) + 1;
      *(_WORD *)(v22 + v11) = v24;
      if ( v23 <= v24 )
        goto LABEL_89;
    }
  }
  malloc_printerr("malloc(): memory corruption (fast)");
  while ( 1 )
  {
    v90 = v80 + 1;
    v91 = a1 + 4LL * (v80 + 1);
    while ( 1 )
    {
      v80 = v90;
      if ( v90 > 3 )
        break;
      v83 = *(unsigned int *)(v91 + 2144);
      v91 += 4;
      if ( (_DWORD)v83 )
        goto LABEL_173;
      ++v90;
    }
    v92 = *(_QWORD *)(a1 + 96);
    v93 = *(_QWORD *)(v92 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a1 + 2184) < v93 )
    {
      malloc_printerr("malloc(): corrupted top size");
LABEL_200:
      malloc_printerr("malloc(): largebin double linked list corrupted (nextsize)");
LABEL_201:
      *(_QWORD *)(v12 + i + 8) |= 1uLL;
      if ( (_UNKNOWN *)a1 != &main_arena )
        *(_QWORD *)(v12 + 8) |= 4uLL;
      goto LABEL_191;
    }
    if ( v11 + 32 <= v93 )
      goto LABEL_236;
    v113 = v32;
    if ( !*(_DWORD *)(a1 + 8) )
      break;
    malloc_consolidate(a1, v92, v11 + 32, v83);
    v32 = v113;
    if ( v11 > 0x3FF )
    {
      if ( v11 <= 0xC3F )
      {
        v31 = *(_QWORD **)(v13 + 24);
        v12 = (unsigned int)(v11 >> 6) + 48;
        if ( v31 == (_QWORD *)v13 )
          goto LABEL_112;
LABEL_37:
        v33 = 0;
        v34 = 0;
        goto LABEL_38;
      }
      if ( v11 >> 9 <= 0x14 )
      {
        v31 = *(_QWORD **)(v13 + 24);
        v12 = (unsigned int)(v11 >> 9) + 91;
        if ( v31 == (_QWORD *)v13 )
          goto LABEL_112;
        goto LABEL_37;
      }
      if ( v11 >> 12 <= 0xA )
      {
        v31 = *(_QWORD **)(v13 + 24);
        v12 = (unsigned int)(v11 >> 12) + 110;
        if ( v31 == (_QWORD *)v13 )
          goto LABEL_112;
        goto LABEL_37;
      }
      v31 = *(_QWORD **)(v13 + 24);
      if ( v11 >> 15 <= 4 )
      {
        v12 = (unsigned int)(v11 >> 15) + 119;
        if ( v31 == (_QWORD *)v13 )
          goto LABEL_112;
        goto LABEL_37;
      }
      v105 = v11 >> 18;
      if ( v11 >> 18 > 2 )
        LODWORD(v105) = 2;
      v12 = (unsigned int)(v105 + 124);
      if ( v31 != (_QWORD *)v13 )
        goto LABEL_37;
LABEL_112:
      v76 = (__int64 *)(a1 + 16LL * (((_DWORD)v12 - 1) & 0x7FFFFFFF) + 112);
      v79 = *v76;
      v78 = v76 - 2;
      v77 = v79;
      if ( (__int64 *)v79 == v78 || v11 > *(_QWORD *)(v77 + 8) )
      {
LABEL_114:
        i = 1;
        goto LABEL_115;
      }
LABEL_223:
      for ( i = *(_QWORD *)(v77 + 40); ; i = *(_QWORD *)(i + 40) )
      {
        v108 = *(_QWORD *)(i + 8);
        v6 = (char *)(v108 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v11 <= (v108 & 0xFFFFFFFFFFFFFFF8LL) )
          break;
      }
      if ( v78[3] != i && v108 == *(_QWORD *)(*(_QWORD *)(i + 16) + 8LL) )
        i = *(_QWORD *)(i + 16);
      v109 = (unsigned __int64)&v6[-v11];
      unlink_chunk_isra_0(i);
      if ( (unsigned __int64)&v6[-v11] > 0x1F )
      {
        v110 = *(_QWORD *)(v13 + 16);
        v111 = (_QWORD *)(i + v11);
        if ( *(_QWORD *)(v110 + 24) == v13 )
        {
          v111[2] = v110;
          v111[3] = v13;
          *(_QWORD *)(v13 + 16) = v111;
          *(_QWORD *)(v110 + 24) = v111;
          if ( v109 > 0x3FF )
          {
            v111[4] = 0;
            v111[5] = 0;
          }
          *(_QWORD *)(i + 8) = v11 | (4LL * (a1 != (_QWORD)&main_arena)) | 1;
          v111[1] = v109 | 1;
          *(_QWORD *)&v6[i] = v109;
          goto LABEL_234;
        }
LABEL_238:
        malloc_printerr("malloc(): corrupted unsorted chunks");
LABEL_239:
        _libc_assert_fail("(unsigned long) (size) >= (unsigned long) (nb)", "malloc.c", 4376, "_int_malloc");
      }
      *(_QWORD *)&v6[i + 8] |= 1uLL;
      if ( (_UNKNOWN *)a1 != &main_arena )
        *(_QWORD *)(i + 8) |= 4uLL;
LABEL_234:
      i += 16LL;
LABEL_218:
      alloc_perturb();
      return i;
    }
    v31 = *(_QWORD **)(v13 + 24);
    v12 = (unsigned int)v11 >> 4;
    if ( v31 != (_QWORD *)v13 )
      goto LABEL_37;
LABEL_115:
    v80 = (unsigned int)(v12 + 1) >> 5;
    v81 = a1 + 8LL * (unsigned int)(2 * v12 + 14) - 16;
    v82 = (_DWORD)i << (v12 + 1);
    v83 = *(unsigned int *)(a1 + 4 * (v80 + 536LL));
LABEL_116:
    if ( (unsigned int)v83 > v82 - 1 )
      goto LABEL_119;
  }
  i = sysmalloc(v11, (_QWORD *)a1);
  if ( i )
    goto LABEL_218;
  return i;
}
