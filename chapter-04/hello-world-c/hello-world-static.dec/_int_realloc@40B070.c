__int64 __fastcall int_realloc(
        int *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  unsigned __int64 v13; // x1
  unsigned __int64 v14; // x4
  unsigned __int64 v16; // x20
  unsigned __int64 v17; // x2
  unsigned __int64 v18; // x26
  unsigned __int64 v19; // x5
  unsigned __int64 v20; // x6
  _BYTE *v23; // x24
  unsigned __int64 v24; // x21
  __int64 v25; // x25
  __int64 v26; // x21
  __int64 v28; // x0
  __int64 v29; // x25
  unsigned __int64 v30; // x0
  double v31; // d0
  double v32; // d1
  double v33; // d2
  double v34; // d3
  double v35; // d4
  double v36; // d5
  double v37; // d6
  double v38; // d7
  unsigned __int64 v39; // x1
  unsigned __int64 v40; // x2
  __int64 v41; // x0
  char v42; // w1
  __int64 v49; // x2
  __int64 v57; // x3
  __int64 v61; // x0

  v13 = *(_QWORD *)(a2 + 8);
  if ( v13 <= 0x10
    || (v14 = *((_QWORD *)a1 + 273), v16 = a3, v14 <= a3)
    || (v17 = v13 & 0xFFFFFFFFFFFFFFF8LL, (v13 & 0xFFFFFFFFFFFFFFF8LL) != v16) )
  {
    malloc_printerr((__int64)"realloc(): invalid old size", a5, a6, a7, a8, a9, a10, a11, a12);
  }
  if ( (v13 & 2) != 0 )
  {
    _libc_assert_fail("!chunk_is_mmapped (oldp)", "malloc.c", 4933, "_int_realloc");
    goto LABEL_37;
  }
  v18 = a2 + v17;
  v19 = *(_QWORD *)(a2 + v17 + 8);
  v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v14 <= (v19 & 0xFFFFFFFFFFFFFFF8LL) || v19 <= 0x10 )
    malloc_printerr((__int64)"realloc(): invalid next size", a5, a6, a7, a8, a9, a10, a11, a12);
  v23 = (_BYTE *)&unk_496000;
  if ( v17 >= a4 )
  {
LABEL_11:
    v24 = v16 - a4;
    v25 = 4LL * (a1 != &main_arena);
    if ( v16 - a4 > 0x1F )
    {
      v39 = a2 + a4;
      if ( (v23[1697] & 1) != 0 )
        v39 = _libc_mtag_tag_region(a2 + a4, v24);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) & 7LL | v25 | a4;
      *(_QWORD *)(v39 + 8) = v24 | v25 | 1;
      *(_QWORD *)(v39 + v24 + 8) |= 1uLL;
      int_free((__int64)a1, v39, 1, a5, a6, a7, a8, a9, a10, a11, a12);
    }
    else
    {
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) & 7LL | v25 | v16;
      *(_QWORD *)(a2 + v16 + 8) |= 1uLL;
    }
    v26 = a2 + 16;
    if ( (v23[1697] & 1) == 0 )
      return v26;
    goto LABEL_32;
  }
  if ( *((_QWORD *)a1 + 12) == v18 )
  {
    v40 = v17 + v20;
    if ( a4 + 32 <= v40 )
    {
      v41 = v13 & 7 | (4LL * (a1 != &main_arena));
      v42 = mtag_enabled;
      *(_QWORD *)(a2 + 8) = v41 | a4;
      *((_QWORD *)a1 + 12) = a2 + a4;
      *(_QWORD *)(a2 + a4 + 8) = (v40 - a4) | 1;
      v26 = a2 + 16;
      if ( (v42 & 1) != 0 )
      {
LABEL_32:
        _X0 = a2;
        __asm { LDG             X0, [X0] }
        v49 = _X0;
        _X0 = v26;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        return _libc_mtag_tag_region(_X0, (*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
      }
      return v26;
    }
  }
  else if ( (*(_QWORD *)(v18 + v20 + 8) & 1) == 0 && a4 <= v16 + v20 )
  {
    v16 += v20;
    v23 = (_BYTE *)&unk_496000;
    unlink_chunk_isra_0((_QWORD *)(a2 + v17), a5, a6, a7, a8, a9, a10, a11, a12);
    goto LABEL_11;
  }
  v28 = int_malloc(a1, a4 - 15, a5, a6, a7, a8, a9, a10, a11, a12);
  v26 = v28;
  if ( !v28 )
    return v26;
  v23 = &unk_496000;
  v29 = v28 - 16;
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = v28 - 16;
    __asm { LDG             X0, [X0] }
    if ( v18 != _X0 )
    {
      _libc_mtag_tag_region(a2 + 16, (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
      if ( (mtag_enabled & 1) != 0 )
      {
        _X0 = v29;
        __asm { LDG             X0, [X0] }
        v57 = _X0;
        _X0 = v26;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        v26 = _libc_mtag_tag_region(_X0, (*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
      }
      goto LABEL_20;
    }
    v30 = *(_QWORD *)(_X0 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v30 = *(_QWORD *)(v28 - 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v29 != v18 )
    {
LABEL_20:
      j_memcpy(v26);
      int_free((__int64)a1, a2, 1, v31, v32, v33, v34, v35, v36, v37, v38);
      return v26;
    }
  }
  v16 += v30;
  if ( a4 <= v16 )
    goto LABEL_11;
LABEL_37:
  v61 = _libc_assert_fail("(unsigned long) (newsize) >= (unsigned long) (nb)", "malloc.c", 5006, "_int_realloc");
  return int_memalign(v61);
}
