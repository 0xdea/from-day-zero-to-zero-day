__int64 *__fastcall int_free_merge_chunk(
        __int64 a1,
        __int64 *a2,
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
  __int64 *v12; // x0
  _QWORD *v13; // x22
  __int64 *v14; // x19
  unsigned __int64 v15; // x21
  unsigned __int64 v16; // x0
  unsigned __int64 v17; // x23
  __int64 v18; // x0
  __int64 *result; // x0

  v12 = *(__int64 **)(a1 + 96);
  v13 = (__int64 *)((char *)a2 + a3);
  if ( v12 == a2 )
    malloc_printerr((__int64)"double free or corruption (top)", a4, a5, a6, a7, a8, a9, a10, a11);
  v14 = a2;
  v15 = a3;
  if ( (*(_DWORD *)(a1 + 4) & 2) == 0 && v13 >= (__int64 *)((char *)v12 + (v12[1] & 0xFFFFFFFFFFFFFFF8LL)) )
    malloc_printerr((__int64)"double free or corruption (out)", a4, a5, a6, a7, a8, a9, a10, a11);
  v16 = v13[1];
  if ( (v16 & 1) == 0 )
    malloc_printerr((__int64)"double free or corruption (!prev)", a4, a5, a6, a7, a8, a9, a10, a11);
  v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v16 <= 0x10 || *(_QWORD *)(a1 + 2184) <= v17 )
    malloc_printerr((__int64)"free(): invalid next size (normal)", a4, a5, a6, a7, a8, a9, a10, a11);
  if ( perturb_byte )
    memset(a2 + 2, (unsigned int)perturb_byte, a3 - 16);
  if ( (v14[1] & 1) == 0 )
  {
    v18 = *v14;
    v14 = (__int64 *)((char *)v14 - *v14);
    v15 += v18;
    if ( (v14[1] & 0xFFFFFFFFFFFFFFF8LL) != v18 )
      malloc_printerr((__int64)"corrupted size vs. prev_size while consolidating", a4, a5, a6, a7, a8, a9, a10, a11);
    unlink_chunk_isra_0(v14, a4, a5, a6, a7, a8, a9, a10, a11);
  }
  result = (__int64 *)int_free_create_chunk(a1, v14, v15, v13, v17, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( (unsigned __int64)result > 0xFFFF )
    return int_free_maybe_consolidate_part_0((int *)a1);
  return result;
}
