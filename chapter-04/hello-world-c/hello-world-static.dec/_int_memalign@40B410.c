__int64 __fastcall int_memalign(
        int *a1,
        __int64 a2,
        unsigned __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  unsigned __int64 v13; // x2
  bool v14; // cc
  unsigned __int64 v15; // x2
  unsigned __int64 v16; // x19
  unsigned __int64 v17; // x0
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  _QWORD *v26; // x20
  char *v27; // x24
  unsigned __int64 v28; // x2
  __int64 *v29; // x3
  signed __int64 v30; // x2
  __int64 v31; // x0
  unsigned __int64 v32; // x20
  __int64 v33; // x5
  __int64 v34; // x1
  char *v36; // x3
  unsigned __int64 v37; // x2
  unsigned __int64 v38; // x4
  __int64 v39; // x0
  __int64 v48; // x0

  if ( (a3 & 0x8000000000000000LL) != 0 )
  {
    v26 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return (__int64)v26;
  }
  if ( (mtag_enabled & 1) != 0 )
    a3 = (a3 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v13 = a3 + 23;
  v14 = v13 > 0x1F;
  v15 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v14 )
    v16 = v15;
  else
    v16 = 32;
  v17 = int_malloc(a1, a2 + 32 + v16, a4, a5, a6, a7, a8, a9, a10, a11);
  v26 = (_QWORD *)v17;
  if ( !v17 )
    return 0;
  v27 = (char *)(v17 - 16);
  v28 = v17 % a2;
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = v17 - 16;
    __asm { LDG             X0, [X0] }
    v29 = _X0;
    if ( !v28 )
    {
      v26 = _X0 + 2;
      v27 = (char *)_X0;
      goto LABEL_15;
    }
    _X0 = (((unsigned __int64)v26 + a2 - 1) & -a2) - 16;
    __asm { LDG             X0, [X0] }
    v27 = _X0;
  }
  else
  {
    if ( !v28 )
      goto LABEL_15;
    v29 = (__int64 *)(v17 - 16);
    v27 = (char *)(((v17 + a2 - 1) & -a2) - 16);
  }
  v30 = v27 - (char *)v29;
  if ( (unsigned __int64)(v27 - (char *)v29) > 0x1F )
  {
    v31 = v29[1];
    v32 = (v31 & 0xFFFFFFFFFFFFFFF8LL) - v30;
    if ( (v31 & 2) == 0 )
      goto LABEL_13;
LABEL_25:
    *(_QWORD *)v27 = *v29 + v30;
    *((_QWORD *)v27 + 1) = v32 | 2;
    return (__int64)(v27 + 16);
  }
  v39 = v29[1];
  v27 += a2;
  v30 = v27 - (char *)v29;
  v32 = (v39 & 0xFFFFFFFFFFFFFFF8LL) - (v27 - (char *)v29);
  if ( (v39 & 2) != 0 )
    goto LABEL_25;
LABEL_13:
  v33 = 4LL * (a1 != &main_arena);
  *((_QWORD *)v27 + 1) = v32 | v33 | 1;
  *(_QWORD *)&v27[v32 + 8] |= 1uLL;
  v29[1] = v29[1] & 7 | v33 | v30;
  int_free_merge_chunk((__int64)a1, v29, v30, v18, v19, v20, v21, v22, v23, v24, v25);
  if ( v32 >= v16 )
  {
    v26 = v27 + 16;
    if ( !((unsigned __int64)(v27 + 16) % a2) )
    {
LABEL_15:
      v34 = *((_QWORD *)v27 + 1);
      if ( (v34 & 2) == 0 )
      {
        v36 = &v27[v34 & 0xFFFFFFFFFFFFFFF8LL];
        if ( (v34 & 0xFFFFFFFFFFFFFFF8LL) > v16 )
        {
          v37 = (v34 & 0xFFFFFFFFFFFFFFF8LL) - v16;
          v38 = *((_QWORD *)v36 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v37 > 0x1F || *((char **)a1 + 12) == v36 || (*(_QWORD *)&v36[v38 + 8] & 1) == 0 )
          {
            *((_QWORD *)v27 + 1) = *((_QWORD *)v27 + 1) & 7LL | v16;
            if ( int_free_create_chunk((__int64)a1, &v27[v16], v37, v36, v38, v18, v19, v20, v21, v22, v23, v24, v25) > 0xFFFF )
              int_free_maybe_consolidate_part_0(a1);
          }
        }
      }
      return (__int64)v26;
    }
  }
  v48 = _libc_assert_fail("newsize >= nb && (((unsigned long) (chunk2mem (p))) % alignment) == 0", v18);
  return _glibc_morecore(v48);
}
