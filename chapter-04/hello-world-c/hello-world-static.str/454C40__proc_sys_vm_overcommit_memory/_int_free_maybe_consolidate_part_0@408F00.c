__int64 *__fastcall int_free_maybe_consolidate_part_0(__int64 a1)
{
  __int64 v1; // x21
  __int64 v2; // x22
  __int64 v3; // x23
  __int64 v4; // x25
  __int64 v5; // x28
  __int64 v6; // x19
  unsigned __int64 v7; // x26
  __int64 v8; // x0
  _QWORD *v9; // x24
  __int64 v10; // x27
  _QWORD *v11; // x25
  __int64 v12; // x23
  unsigned __int64 v13; // x20
  _QWORD *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x4
  __int64 v17; // x3
  __int64 v18; // x22
  __int64 v19; // x1
  _QWORD *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x19
  unsigned __int64 v23; // x4
  unsigned __int64 v25; // x0
  __int64 v28; // x0
  int v29; // w0
  unsigned __int64 v30; // [xsp+8h] [xbp-18h]
  char v31; // [xsp+17h] [xbp-9h] BYREF
  __int64 v32; // [xsp+40h] [xbp+20h]
  __int64 v33; // [xsp+48h] [xbp+28h]
  __int64 v34; // [xsp+50h] [xbp+30h]
  _QWORD *v35; // [xsp+58h] [xbp+38h]
  __int64 v36; // [xsp+60h] [xbp+40h]
  unsigned __int64 v37; // [xsp+68h] [xbp+48h]
  __int64 v38; // [xsp+70h] [xbp+50h]
  __int64 v39; // [xsp+78h] [xbp+58h]

  v6 = a1;
  if ( *(_DWORD *)(a1 + 8) )
  {
    malloc_consolidate(a1);
    if ( (_UNKNOWN *)v6 != &main_arena )
    {
LABEL_3:
      v39 = v5;
      if ( qword_490600 )
      {
        v7 = 4 * qword_490600;
        v8 = -4 * qword_490600;
      }
      else
      {
        v8 = -67108864;
        v7 = 0x4000000;
      }
      v9 = (_QWORD *)(*(_QWORD *)(v6 + 96) & v8);
      v10 = *v9;
      if ( v6 != *v9 )
      {
        _libc_assert_fail("heap->ar_ptr == av", "malloc.c", 4794, "_int_free_maybe_consolidate");
        v32 = v1;
        v33 = v2;
        v34 = v3;
        v35 = v9;
        v36 = v4;
        v37 = v7;
        v38 = v10;
        v39 = v5;
      }
      v11 = *(_QWORD **)(v10 + 96);
      v30 = qword_4905D8;
      if ( v11 == v9 + 6 )
      {
        v12 = qword_4905D8 + 32;
        v13 = (unsigned __int64)&global_max_fast;
        while ( 1 )
        {
          v14 = v9;
          v9 = (_QWORD *)v9[1];
          v15 = v9[2];
          v16 = ((_BYTE)v9 + (_BYTE)v15 - 16) & 0xF;
          v17 = v15 - 16 - v16;
          v18 = (__int64)v9 + v17;
          if ( *(_QWORD *)((char *)v9 + v17 + 8) != 1 )
            break;
          v19 = *(_QWORD *)((char *)v9 + v17);
          v20 = (_QWORD *)(v18 - v19);
          v5 = -v19;
          v21 = *(_QWORD *)(v18 - v19 + 8);
          v22 = (v21 & 0xFFFFFFFFFFFFFFF8LL) + v16;
          v23 = v22 + 15;
          v6 = v22 + 16;
          if ( v23 > 0x3E )
            goto LABEL_52;
          if ( (v21 & 1) == 0 )
            v6 += *(_QWORD *)(v18 + v5);
          if ( v6 <= 0 || v7 <= v6 )
            goto LABEL_53;
          if ( v7 - v15 + v6 < v12 + v14[4] )
          {
            v6 = v11[1];
            v9 = v14;
            goto LABEL_27;
          }
          *(_QWORD *)(v10 + 2184) -= v14[2];
          if ( (_QWORD *)aligned_heap_area == (_QWORD *)((char *)v14 + v7) )
            aligned_heap_area = 0;
          munmap(v14, v7);
          v11 = v20;
          if ( (v20[1] & 1) == 0 )
          {
            v11 = (_QWORD *)((char *)v20 - *(_QWORD *)(v18 + v5));
            unlink_chunk_isra_0(v11);
          }
          if ( (((unsigned __int64)v11 + v6) & (v9[4] - 1LL)) != 0 )
          {
            _libc_assert_fail(
              "((unsigned long) ((char *) p + new_size) & (heap->pagesize - 1)) == 0",
              "arena.c",
              574,
              "heap_trim");
LABEL_50:
            _libc_assert_fail("((char *) p + new_size) == ((char *) heap + heap->size)", "arena.c", 576, "heap_trim");
            break;
          }
          if ( (char *)v11 + v6 != (char *)v9 + v9[2] )
            goto LABEL_50;
          *(_QWORD *)(v10 + 96) = v11;
          v6 |= 1uLL;
          v11[1] = v6;
          if ( v11 != v9 + 6 )
            goto LABEL_27;
        }
        _libc_assert_fail("chunksize_nomask (p) == (0 | PREV_INUSE)", "arena.c", 553, "heap_trim");
LABEL_52:
        _libc_assert_fail("new_size > 0 && new_size < (long) (2 * MINSIZE)", "arena.c", 556, "heap_trim");
LABEL_53:
        v28 = _libc_assert_fail("new_size > 0 && new_size < max_size", "arena.c", 559, "heap_trim");
        goto LABEL_54;
      }
      v6 = v11[1];
LABEL_27:
      v6 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v6 < (unsigned __int64)mp_ )
        return &_stack_chk_guard;
      v25 = v6 - 33;
      if ( v6 - 33 < 0 || v30 >= v25 )
        return &_stack_chk_guard;
      v13 = -v9[4] & (v25 - v30);
      if ( !v13 )
        return &_stack_chk_guard;
      v18 = v9[2] - v13;
      if ( v18 <= 47 )
        return &_stack_chk_guard;
      if ( may_shrink_heap_12 < 0 )
      {
        LODWORD(v7) = _libc_enable_secure;
        may_shrink_heap_12 = _libc_enable_secure;
        if ( !_libc_enable_secure )
        {
          v28 = _open_nocancel("/proc/sys/vm/overcommit_memory", 0x80000, v30);
          LODWORD(v5) = v28;
          if ( (v28 & 0x80000000) != 0 )
          {
            v29 = may_shrink_heap_12;
            goto LABEL_45;
          }
LABEL_54:
          if ( _read_nocancel(v28, &v31, 1) > 0 )
            LODWORD(v7) = v31 == 50;
          may_shrink_heap_12 = v7;
          _close_nocancel((unsigned int)v5);
          v29 = may_shrink_heap_12;
LABEL_45:
          if ( v29 )
            goto LABEL_46;
LABEL_40:
          madvise((char *)v9 + v18, v13, 4);
LABEL_41:
          v9[2] = v18;
          *(_QWORD *)(v10 + 2184) -= v13;
          v11[1] = (v6 - v13) | 1;
          return &_stack_chk_guard;
        }
      }
      else if ( !may_shrink_heap_12 )
      {
        goto LABEL_40;
      }
LABEL_46:
      if ( mmap64((char *)v9 + v18, v13, 0, 50, 0xFFFFFFFFLL, 0) == -1 )
        return &_stack_chk_guard;
      v9[3] = v18;
      goto LABEL_41;
    }
  }
  else if ( (_UNKNOWN *)a1 != &main_arena )
  {
    goto LABEL_3;
  }
  if ( (*(_QWORD *)(*(_QWORD *)(v6 + 96) + 8LL) & 0xFFFFFFFFFFFFFFF8LL) < mp_ )
    return &_stack_chk_guard;
  return (__int64 *)systrim_constprop_0(qword_4905D8);
}
