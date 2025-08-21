__int64 *__fastcall int_free_maybe_consolidate_part_0(__int64 a1)
{
  __int64 v1; // x21
  __int64 v2; // x22
  __int64 v3; // x23
  __int64 v4; // x25
  __int64 v5; // x28
  __int64 v6; // x19
  __int64 v7; // x1
  unsigned __int64 v8; // x26
  __int64 v9; // x0
  _QWORD *v10; // x24
  __int64 v11; // x27
  _QWORD *v12; // x25
  __int64 v13; // x23
  unsigned __int64 v14; // x20
  _QWORD *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x4
  __int64 v18; // x3
  __int64 v19; // x22
  __int64 v20; // x1
  _QWORD *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x19
  unsigned __int64 v24; // x4
  unsigned __int64 v26; // x0
  __int64 v29; // x0
  int v30; // w0
  unsigned __int64 v31; // [xsp+8h] [xbp-18h]
  char v32; // [xsp+17h] [xbp-9h] BYREF
  __int64 v33; // [xsp+40h] [xbp+20h]
  __int64 v34; // [xsp+48h] [xbp+28h]
  __int64 v35; // [xsp+50h] [xbp+30h]
  _QWORD *v36; // [xsp+58h] [xbp+38h]
  __int64 v37; // [xsp+60h] [xbp+40h]
  unsigned __int64 v38; // [xsp+68h] [xbp+48h]
  __int64 v39; // [xsp+70h] [xbp+50h]
  __int64 v40; // [xsp+78h] [xbp+58h]

  v6 = a1;
  v7 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v7 )
  {
    malloc_consolidate(a1, v7, a1 + 8, 0);
    if ( (_UNKNOWN *)v6 != &main_arena )
    {
LABEL_3:
      v40 = v5;
      if ( qword_490600 )
      {
        v8 = 4 * qword_490600;
        v9 = -4 * qword_490600;
      }
      else
      {
        v9 = -67108864;
        v8 = 0x4000000;
      }
      v10 = (_QWORD *)(*(_QWORD *)(v6 + 96) & v9);
      v11 = *v10;
      if ( v6 != *v10 )
      {
        _libc_assert_fail("heap->ar_ptr == av", "malloc.c", 4794, "_int_free_maybe_consolidate");
        v33 = v1;
        v34 = v2;
        v35 = v3;
        v36 = v10;
        v37 = v4;
        v38 = v8;
        v39 = v11;
        v40 = v5;
      }
      v12 = *(_QWORD **)(v11 + 96);
      v31 = qword_4905D8;
      if ( v12 == v10 + 6 )
      {
        v13 = qword_4905D8 + 32;
        v14 = (unsigned __int64)&global_max_fast;
        while ( 1 )
        {
          v15 = v10;
          v10 = (_QWORD *)v10[1];
          v16 = v10[2];
          v17 = ((_BYTE)v10 + (_BYTE)v16 - 16) & 0xF;
          v18 = v16 - 16 - v17;
          v19 = (__int64)v10 + v18;
          if ( *(_QWORD *)((char *)v10 + v18 + 8) != 1 )
            break;
          v20 = *(_QWORD *)((char *)v10 + v18);
          v21 = (_QWORD *)(v19 - v20);
          v5 = -v20;
          v22 = *(_QWORD *)(v19 - v20 + 8);
          v23 = (v22 & 0xFFFFFFFFFFFFFFF8LL) + v17;
          v24 = v23 + 15;
          v6 = v23 + 16;
          if ( v24 > 0x3E )
            goto LABEL_52;
          if ( (v22 & 1) == 0 )
            v6 += *(_QWORD *)(v19 + v5);
          if ( v6 <= 0 || v8 <= v6 )
            goto LABEL_53;
          if ( v8 - v16 + v6 < v13 + v15[4] )
          {
            v6 = v12[1];
            v10 = v15;
            goto LABEL_27;
          }
          *(_QWORD *)(v11 + 2184) -= v15[2];
          if ( (_QWORD *)aligned_heap_area == (_QWORD *)((char *)v15 + v8) )
            aligned_heap_area = 0;
          munmap(v15, v8);
          v12 = v21;
          if ( (v21[1] & 1) == 0 )
          {
            v12 = (_QWORD *)((char *)v21 - *(_QWORD *)(v19 + v5));
            unlink_chunk_isra_0(v12);
          }
          if ( (((unsigned __int64)v12 + v6) & (v10[4] - 1LL)) != 0 )
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
          if ( (char *)v12 + v6 != (char *)v10 + v10[2] )
            goto LABEL_50;
          *(_QWORD *)(v11 + 96) = v12;
          v6 |= 1uLL;
          v12[1] = v6;
          if ( v12 != v10 + 6 )
            goto LABEL_27;
        }
        _libc_assert_fail("chunksize_nomask (p) == (0 | PREV_INUSE)", "arena.c", 553, "heap_trim");
LABEL_52:
        _libc_assert_fail("new_size > 0 && new_size < (long) (2 * MINSIZE)", "arena.c", 556, "heap_trim");
LABEL_53:
        v29 = _libc_assert_fail("new_size > 0 && new_size < max_size", "arena.c", 559, "heap_trim");
        goto LABEL_54;
      }
      v6 = v12[1];
LABEL_27:
      v6 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v6 < (unsigned __int64)mp_ )
        return &_stack_chk_guard;
      v26 = v6 - 33;
      if ( v6 - 33 < 0 || v31 >= v26 )
        return &_stack_chk_guard;
      v14 = -v10[4] & (v26 - v31);
      if ( !v14 )
        return &_stack_chk_guard;
      v19 = v10[2] - v14;
      if ( v19 <= 47 )
        return &_stack_chk_guard;
      if ( may_shrink_heap_12 < 0 )
      {
        LODWORD(v8) = _libc_enable_secure;
        may_shrink_heap_12 = _libc_enable_secure;
        if ( !_libc_enable_secure )
        {
          v29 = _open_nocancel("/proc/sys/vm/overcommit_memory", 0x80000, v31);
          LODWORD(v5) = v29;
          if ( (v29 & 0x80000000) != 0 )
          {
            v30 = may_shrink_heap_12;
            goto LABEL_45;
          }
LABEL_54:
          if ( _read_nocancel(v29, &v32, 1) > 0 )
            LODWORD(v8) = v32 == 50;
          may_shrink_heap_12 = v8;
          _close_nocancel((unsigned int)v5);
          v30 = may_shrink_heap_12;
LABEL_45:
          if ( v30 )
            goto LABEL_46;
LABEL_40:
          madvise((char *)v10 + v19, v14, 4);
LABEL_41:
          v10[2] = v19;
          *(_QWORD *)(v11 + 2184) -= v14;
          v12[1] = (v6 - v14) | 1;
          return &_stack_chk_guard;
        }
      }
      else if ( !may_shrink_heap_12 )
      {
        goto LABEL_40;
      }
LABEL_46:
      if ( mmap64((char *)v10 + v19, v14, 0, 50, 0xFFFFFFFFLL, 0) == -1 )
        return &_stack_chk_guard;
      v10[3] = v19;
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
