char *__fastcall int_memalign(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // x2
  bool v7; // cc
  unsigned __int64 v8; // x2
  unsigned __int64 v9; // x19
  unsigned __int64 v10; // x0
  _QWORD *v11; // x20
  char *v12; // x24
  unsigned __int64 v13; // x2
  char *v14; // x3
  signed __int64 v15; // x2
  __int64 v16; // x0
  unsigned __int64 v17; // x20
  __int64 v18; // x5
  double v19; // d0
  __int64 v20; // x1
  char *v22; // x3
  __int64 v23; // x0
  __int64 v32; // x0

  if ( (a3 & 0x8000000000000000LL) != 0 )
  {
    v11 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return (char *)v11;
  }
  if ( (mtag_enabled & 1) != 0 )
    a3 = (a3 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = a3 + 23;
  v7 = v6 > 0x1F;
  v8 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v7 )
    v9 = v8;
  else
    v9 = 32;
  v10 = int_malloc((unsigned __int64)a1, a2 + 32 + v9, v8, a4);
  v11 = (_QWORD *)v10;
  if ( !v10 )
    return 0;
  v12 = (char *)(v10 - 16);
  v13 = v10 % a2;
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = v10 - 16;
    __asm { LDG             X0, [X0] }
    v14 = (char *)_X0;
    if ( !v13 )
    {
      v11 = _X0 + 2;
      v12 = (char *)_X0;
      goto LABEL_15;
    }
    _X0 = (((unsigned __int64)v11 + a2 - 1) & -(__int64)a2) - 16;
    __asm { LDG             X0, [X0] }
    v12 = _X0;
  }
  else
  {
    if ( !v13 )
      goto LABEL_15;
    v14 = (char *)(v10 - 16);
    v12 = (char *)(((v10 + a2 - 1) & -(__int64)a2) - 16);
  }
  v15 = v12 - v14;
  if ( (unsigned __int64)(v12 - v14) > 0x1F )
  {
    v16 = *((_QWORD *)v14 + 1);
    v17 = (v16 & 0xFFFFFFFFFFFFFFF8LL) - v15;
    if ( (v16 & 2) == 0 )
      goto LABEL_13;
LABEL_25:
    *(_QWORD *)v12 = *(_QWORD *)v14 + v15;
    *((_QWORD *)v12 + 1) = v17 | 2;
    return v12 + 16;
  }
  v23 = *((_QWORD *)v14 + 1);
  v12 += a2;
  v15 = v12 - v14;
  v17 = (v23 & 0xFFFFFFFFFFFFFFF8LL) - (v12 - v14);
  if ( (v23 & 2) != 0 )
    goto LABEL_25;
LABEL_13:
  v18 = 4LL * (a1 != (_QWORD *)&main_arena);
  *((_QWORD *)v12 + 1) = v17 | v18 | 1;
  *(_QWORD *)&v12[v17 + 8] |= 1uLL;
  *((_QWORD *)v14 + 1) = *((_QWORD *)v14 + 1) & 7LL | v18 | v15;
  int_free_merge_chunk(a1, v14);
  if ( v17 >= v9 )
  {
    v11 = v12 + 16;
    if ( !((unsigned __int64)(v12 + 16) % a2) )
    {
LABEL_15:
      v20 = *((_QWORD *)v12 + 1);
      if ( (v20 & 2) == 0 )
      {
        v22 = &v12[v20 & 0xFFFFFFFFFFFFFFF8LL];
        if ( (v20 & 0xFFFFFFFFFFFFFFF8LL) > v9
          && ((v20 & 0xFFFFFFFFFFFFFFF8LL) - v9 > 0x1F
           || (char *)a1[12] == v22
           || (*(_QWORD *)&v22[(*((_QWORD *)v22 + 1) & 0xFFFFFFFFFFFFFFF8LL) + 8] & 1) == 0) )
        {
          *((_QWORD *)v12 + 1) = *((_QWORD *)v12 + 1) & 7LL | v9;
          if ( (unsigned __int64)int_free_create_chunk(a1, &v12[v9]) > 0xFFFF )
            int_free_maybe_consolidate_part_0((__int64)a1);
        }
      }
      return (char *)v11;
    }
  }
  v32 = _libc_assert_fail("newsize >= nb && (((unsigned long) (chunk2mem (p))) % alignment) == 0", v19);
  return (char *)_glibc_morecore(v32);
}
