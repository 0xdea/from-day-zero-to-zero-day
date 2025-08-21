_QWORD *__fastcall malloc_consolidate(__int64 a1)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x22
  __int64 v6; // x27
  __int64 v7; // x25
  _QWORD *result; // x0
  __int64 v9; // x19
  __int64 v10; // x3
  unsigned __int64 v11; // x20
  _QWORD *v12; // x22
  __int64 v13; // x26
  unsigned __int64 v14; // x21
  __int64 v15; // x23
  unsigned __int64 v16; // x2
  unsigned __int64 v17; // x28
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // [xsp+10h] [xbp+10h]
  __int64 v22; // [xsp+18h] [xbp+18h]
  __int64 v23; // [xsp+20h] [xbp+20h]
  __int64 v24; // [xsp+28h] [xbp+28h]
  unsigned __int64 v25; // [xsp+68h] [xbp+68h]

  *(_DWORD *)(a1 + 8) = 0;
  v6 = a1 + 96;
  v7 = a1 + 16;
  while ( 1 )
  {
    result = (_QWORD *)_aarch64_swp8_acq(0, v7);
    if ( result )
      break;
LABEL_3:
    v7 += 8;
    if ( v6 == v7 )
      return result;
  }
  v21 = v1;
  v22 = v2;
  v9 = (__int64)result;
  v23 = v3;
  v24 = v4;
  while ( (v9 & 0xF) == 0 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( v7 != a1 + 8 * (((unsigned int)v10 >> 4) - 2 + 2LL) )
      goto LABEL_23;
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v12 = (_QWORD *)(v9 + (v10 & 0xFFFFFFFFFFFFFFF8LL));
    v13 = *(_QWORD *)(v9 + 16);
    v14 = (unsigned __int64)(v9 + 16) >> 12;
    v15 = v12[1];
    v16 = v14 ^ v13;
    v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v10 & 1) == 0 )
    {
      v18 = *(_QWORD *)v9;
      v9 -= *(_QWORD *)v9;
      v11 += v18;
      if ( (*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL) != v18 )
        goto LABEL_22;
      unlink_chunk_isra_0((_QWORD *)v9);
      v16 = v14 ^ v13;
    }
    result = *(_QWORD **)(a1 + 96);
    if ( result == v12 )
    {
      *(_QWORD *)(v9 + 8) = (v11 + v17) | 1;
      *(_QWORD *)(a1 + 96) = v9;
      if ( v14 == v13 )
        goto LABEL_19;
    }
    else
    {
      if ( (*(_QWORD *)((char *)v12 + v17 + 8) & 1) != 0 )
      {
        v12[1] = v15 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v25 = v16;
        unlink_chunk_isra_0(v12);
        v11 += v17;
        v16 = v25;
      }
      result = *(_QWORD **)(v6 + 16);
      *(_QWORD *)(v6 + 16) = v9;
      result[3] = v9;
      if ( v11 > 0x3FF )
      {
        *(_QWORD *)(v9 + 32) = 0;
        *(_QWORD *)(v9 + 40) = 0;
      }
      *(_QWORD *)(v9 + 8) = v11 | 1;
      *(_QWORD *)(v9 + 16) = result;
      *(_QWORD *)(v9 + 24) = v6;
      *(_QWORD *)(v9 + v11) = v11;
      if ( v14 == v13 )
      {
LABEL_19:
        v1 = v21;
        v2 = v22;
        v3 = v23;
        v4 = v24;
        goto LABEL_3;
      }
    }
    v9 = v16;
  }
  malloc_printerr("malloc_consolidate(): unaligned fastbin chunk detected");
LABEL_22:
  malloc_printerr("corrupted size vs. prev_size in fastbins");
LABEL_23:
  v19 = malloc_printerr("malloc_consolidate(): invalid chunk size");
  return (_QWORD *)int_free_create_chunk(v19, v20);
}
