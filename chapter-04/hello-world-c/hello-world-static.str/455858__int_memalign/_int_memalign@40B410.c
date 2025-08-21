char *__fastcall int_memalign(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // x2
  bool v9; // cc
  unsigned __int64 v10; // x2
  unsigned __int64 v11; // x19
  unsigned __int64 v12; // x0
  _QWORD *v13; // x20
  char *v14; // x24
  unsigned __int64 v15; // x2
  __int64 *v16; // x3
  signed __int64 v17; // x2
  __int64 v18; // x0
  unsigned __int64 v19; // x20
  __int64 v20; // x5
  double v21; // d0
  __int64 v22; // x1
  char *v24; // x3
  unsigned __int64 v25; // x2
  unsigned __int64 v26; // x4
  __int64 v27; // x0
  __int64 v36; // x0

  if ( (a3 & 0x8000000000000000LL) != 0 )
  {
    v13 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return (char *)v13;
  }
  if ( (mtag_enabled & 1) != 0 )
    a3 = (a3 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v8 = a3 + 23;
  v9 = v8 > 0x1F;
  v10 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v9 )
    v11 = v10;
  else
    v11 = 32;
  v12 = int_malloc((unsigned __int64)a1, a2 + 32 + v11, v10, a4, a5, a6);
  v13 = (_QWORD *)v12;
  if ( !v12 )
    return 0;
  v14 = (char *)(v12 - 16);
  v15 = v12 % a2;
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = v12 - 16;
    __asm { LDG             X0, [X0] }
    v16 = _X0;
    if ( !v15 )
    {
      v13 = _X0 + 2;
      v14 = (char *)_X0;
      goto LABEL_15;
    }
    _X0 = (((unsigned __int64)v13 + a2 - 1) & -(__int64)a2) - 16;
    __asm { LDG             X0, [X0] }
    v14 = _X0;
  }
  else
  {
    if ( !v15 )
      goto LABEL_15;
    v16 = (__int64 *)(v12 - 16);
    v14 = (char *)(((v12 + a2 - 1) & -(__int64)a2) - 16);
  }
  v17 = v14 - (char *)v16;
  if ( (unsigned __int64)(v14 - (char *)v16) > 0x1F )
  {
    v18 = v16[1];
    v19 = (v18 & 0xFFFFFFFFFFFFFFF8LL) - v17;
    if ( (v18 & 2) == 0 )
      goto LABEL_13;
LABEL_25:
    *(_QWORD *)v14 = *v16 + v17;
    *((_QWORD *)v14 + 1) = v19 | 2;
    return v14 + 16;
  }
  v27 = v16[1];
  v14 += a2;
  v17 = v14 - (char *)v16;
  v19 = (v27 & 0xFFFFFFFFFFFFFFF8LL) - (v14 - (char *)v16);
  if ( (v27 & 2) != 0 )
    goto LABEL_25;
LABEL_13:
  v20 = 4LL * (a1 != (_QWORD *)&main_arena);
  *((_QWORD *)v14 + 1) = v19 | v20 | 1;
  *(_QWORD *)&v14[v19 + 8] |= 1uLL;
  v16[1] = v16[1] & 7 | v20 | v17;
  int_free_merge_chunk((__int64)a1, v16, v17);
  if ( v19 >= v11 )
  {
    v13 = v14 + 16;
    if ( !((unsigned __int64)(v14 + 16) % a2) )
    {
LABEL_15:
      v22 = *((_QWORD *)v14 + 1);
      if ( (v22 & 2) == 0 )
      {
        v24 = &v14[v22 & 0xFFFFFFFFFFFFFFF8LL];
        if ( (v22 & 0xFFFFFFFFFFFFFFF8LL) > v11 )
        {
          v25 = (v22 & 0xFFFFFFFFFFFFFFF8LL) - v11;
          v26 = *((_QWORD *)v24 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v25 > 0x1F || (char *)a1[12] == v24 || (*(_QWORD *)&v24[v26 + 8] & 1) == 0 )
          {
            *((_QWORD *)v14 + 1) = *((_QWORD *)v14 + 1) & 7LL | v11;
            if ( int_free_create_chunk((__int64)a1, &v14[v11], v25, v24, v26) > 0xFFFF )
              int_free_maybe_consolidate_part_0((__int64)a1);
          }
        }
      }
      return (char *)v13;
    }
  }
  v36 = _libc_assert_fail("newsize >= nb && (((unsigned long) (chunk2mem (p))) % alignment) == 0", v21);
  return (char *)_glibc_morecore(v36);
}
