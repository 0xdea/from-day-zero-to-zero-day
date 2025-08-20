__int64 __fastcall malloc_consolidate(__int64 a1)
{
  __int64 v1; // x20
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v5; // x27
  __int64 v6; // x25
  __int64 result; // x0
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  __int64 *v16; // x19
  __int64 v17; // x3
  unsigned __int64 v18; // x20
  _QWORD *v19; // x22
  __int64 v20; // x26
  unsigned __int64 v21; // x21
  __int64 v22; // x23
  __int64 *v23; // x2
  unsigned __int64 v24; // x28
  __int64 v25; // x0
  __int64 v26; // [xsp+18h] [xbp+18h]
  __int64 v27; // [xsp+20h] [xbp+20h]
  __int64 v28; // [xsp+28h] [xbp+28h]
  __int64 *v29; // [xsp+68h] [xbp+68h]

  *(_DWORD *)(a1 + 8) = 0;
  v5 = a1 + 96;
  v6 = a1 + 16;
  do
  {
    result = _aarch64_swp8_acq(0, v6);
    if ( !result )
      goto LABEL_3;
    v26 = v1;
    v16 = (__int64 *)result;
    v27 = v2;
    v28 = v3;
    while ( 1 )
    {
      if ( ((unsigned __int8)v16 & 0xF) != 0 )
        malloc_printerr(
          (__int64)"malloc_consolidate(): unaligned fastbin chunk detected",
          v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      v17 = v16[1];
      if ( v6 != a1 + 8 * (((unsigned int)v17 >> 4) - 2 + 2LL) )
        malloc_printerr((__int64)"malloc_consolidate(): invalid chunk size", v8, v9, v10, v11, v12, v13, v14, v15);
      v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      v19 = (__int64 *)((char *)v16 + (v17 & 0xFFFFFFFFFFFFFFF8LL));
      v20 = v16[2];
      v21 = (unsigned __int64)(v16 + 2) >> 12;
      v22 = v19[1];
      v23 = (__int64 *)(v21 ^ v20);
      v24 = v22 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v17 & 1) == 0 )
      {
        v25 = *v16;
        v16 = (__int64 *)((char *)v16 - *v16);
        v18 += v25;
        if ( (v16[1] & 0xFFFFFFFFFFFFFFF8LL) != v25 )
          malloc_printerr((__int64)"corrupted size vs. prev_size in fastbins", v8, v9, v10, v11, v12, v13, v14, v15);
        unlink_chunk_isra_0(v16, v8, v9, v10, v11, v12, v13, v14, v15);
        v23 = (__int64 *)(v21 ^ v20);
      }
      result = *(_QWORD *)(a1 + 96);
      if ( (_QWORD *)result != v19 )
        break;
      v16[1] = (v18 + v24) | 1;
      *(_QWORD *)(a1 + 96) = v16;
      if ( v21 == v20 )
        goto LABEL_19;
LABEL_11:
      v16 = v23;
    }
    if ( (*(_QWORD *)((char *)v19 + v24 + 8) & 1) != 0 )
    {
      v19[1] = v22 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v29 = v23;
      unlink_chunk_isra_0(v19, v8, v9, v10, v11, v12, v13, v14, v15);
      v18 += v24;
      v23 = v29;
    }
    result = *(_QWORD *)(v5 + 16);
    *(_QWORD *)(v5 + 16) = v16;
    *(_QWORD *)(result + 24) = v16;
    if ( v18 > 0x3FF )
    {
      v16[4] = 0;
      v16[5] = 0;
    }
    v16[1] = v18 | 1;
    v16[2] = result;
    v16[3] = v5;
    *(__int64 *)((char *)v16 + v18) = v18;
    if ( v21 != v20 )
      goto LABEL_11;
LABEL_19:
    v1 = v26;
    v2 = v27;
    v3 = v28;
LABEL_3:
    v6 += 8;
  }
  while ( v5 != v6 );
  return result;
}
