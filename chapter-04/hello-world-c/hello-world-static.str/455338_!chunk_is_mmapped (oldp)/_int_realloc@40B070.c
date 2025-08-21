char *__fastcall int_realloc(_QWORD *a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // x21
  _QWORD *v5; // x22
  unsigned __int64 v6; // x23
  _BYTE *v7; // x24
  __int64 v8; // x25
  unsigned __int64 v10; // x1
  unsigned __int64 v11; // x4
  unsigned __int64 v12; // x20
  unsigned __int64 v13; // x2
  char *v14; // x26
  unsigned __int64 v15; // x5
  unsigned __int64 v16; // x6
  char v18; // w0
  __int64 *v19; // x21
  __int64 v21; // x0
  char *v22; // x25
  unsigned __int64 v23; // x0
  __int64 *v24; // x1
  __int64 v25; // x1
  __int64 v26; // x0
  char v27; // w1
  __int64 v34; // x2
  __int64 v42; // x3
  _QWORD *v46; // x0
  unsigned __int64 v47; // x1
  unsigned __int64 v48; // x2
  __int64 v49; // x3

  v10 = a2[1];
  if ( v10 <= 0x10
    || (v11 = a1[273], v5 = a1, v12 = a3, v11 <= a3)
    || (v13 = v10 & 0xFFFFFFFFFFFFFFF8LL, (v10 & 0xFFFFFFFFFFFFFFF8LL) != v12) )
  {
    v18 = malloc_printerr("realloc(): invalid old size");
    goto LABEL_22;
  }
  if ( (v10 & 2) != 0 )
  {
    _libc_assert_fail("!chunk_is_mmapped (oldp)", "malloc.c", 4933, "_int_realloc");
    goto LABEL_37;
  }
  v14 = (char *)a2 + v13;
  v15 = *(__int64 *)((char *)a2 + v13 + 8);
  v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v11 > (v15 & 0xFFFFFFFFFFFFFFF8LL) && v15 > 0x10 )
  {
    v6 = a4;
    v7 = (_BYTE *)&unk_496000;
    if ( v13 >= a4 )
      goto LABEL_11;
    if ( (char *)a1[12] == v14 )
    {
      v13 += v16;
      if ( a4 + 32 <= v13 )
      {
        v26 = v10 & 7 | (4LL * (a1 != (_QWORD *)&main_arena));
        v27 = mtag_enabled;
        a2[1] = v26 | a4;
        v5[12] = (char *)a2 + a4;
        *(__int64 *)((char *)a2 + a4 + 8) = (v13 - a4) | 1;
        v19 = a2 + 2;
        if ( (v27 & 1) == 0 )
          return (char *)v19;
LABEL_32:
        _X0 = a2;
        __asm { LDG             X0, [X0] }
        v34 = _X0;
        _X0 = v19;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        return (char *)_libc_mtag_tag_region(_X0, (*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
      }
    }
    else if ( (*(_QWORD *)&v14[v16 + 8] & 1) == 0 && a4 <= v12 + v16 )
    {
      v12 += v16;
      v7 = (_BYTE *)&unk_496000;
      unlink_chunk_isra_0((__int64 *)((char *)a2 + v13));
      goto LABEL_11;
    }
    v21 = int_malloc((unsigned __int64)a1, a4 - 15, v13, a4, v11, v15);
    v19 = (__int64 *)v21;
    if ( !v21 )
      return (char *)v19;
    v7 = &unk_496000;
    v22 = (char *)(v21 - 16);
    if ( (mtag_enabled & 1) != 0 )
    {
      _X0 = v21 - 16;
      __asm { LDG             X0, [X0] }
      v25 = *(_QWORD *)(_X0 + 8);
      if ( v14 == (char *)_X0 )
        goto LABEL_27;
      _libc_mtag_tag_region(a2 + 2, (a2[1] & 0xFFFFFFFFFFFFFFF8LL) - 16);
      if ( (mtag_enabled & 1) != 0 )
      {
        _X0 = v22;
        __asm { LDG             X0, [X0] }
        v42 = _X0;
        _X0 = v19;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        v19 = (__int64 *)_libc_mtag_tag_region(_X0, (*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
      }
    }
    else
    {
      v23 = *(_QWORD *)(v21 - 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v22 == v14 )
        goto LABEL_28;
    }
    j_memcpy(v19);
    int_free((__int64)v5, a2, 1);
    return (char *)v19;
  }
  malloc_printerr("realloc(): invalid next size");
LABEL_27:
  v23 = v25 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_28:
  v12 += v23;
  if ( v6 <= v12 )
  {
LABEL_11:
    v4 = v12 - v6;
    v18 = v7[1697];
    v8 = 4LL * (v5 != (_QWORD *)&main_arena);
    if ( v12 - v6 <= 0x1F )
    {
      a2[1] = a2[1] & 7 | v8 | v12;
      *(__int64 *)((char *)a2 + v12 + 8) |= 1uLL;
      goto LABEL_13;
    }
LABEL_22:
    v24 = (__int64 *)((char *)a2 + v6);
    if ( (v18 & 1) != 0 )
      v24 = (__int64 *)_libc_mtag_tag_region((char *)a2 + v6, v4);
    a2[1] = a2[1] & 7 | v8 | v6;
    v24[1] = v4 | v8 | 1;
    *(__int64 *)((char *)v24 + v4 + 8) |= 1uLL;
    int_free((__int64)v5, v24, 1);
LABEL_13:
    v19 = a2 + 2;
    if ( (v7[1697] & 1) == 0 )
      return (char *)v19;
    goto LABEL_32;
  }
LABEL_37:
  v46 = (_QWORD *)_libc_assert_fail(
                    "(unsigned long) (newsize) >= (unsigned long) (nb)",
                    "malloc.c",
                    5006,
                    "_int_realloc");
  return int_memalign(v46, v47, v48, v49);
}
