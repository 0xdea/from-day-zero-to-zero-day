char *__fastcall stpcpy(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x4
  unsigned __int64 v3; // x2
  int8x16_t v4; // q0
  unsigned __int64 v5; // d2
  unsigned __int64 v6; // x4
  __int128 v7; // q1
  __int64 v9; // x7
  unsigned __int64 v10; // x5
  int v11; // w7
  int8x16_t *v12; // x3
  int8x16_t v13; // q0
  int16x8_t v14; // q1
  int8x16_t v15; // t1
  _OWORD *v16; // x3

  v2 = vshrn_n_s16(vceqzq_s8(*(int8x16_t *)(a2 & 0xFFFFFFFFFFFFFFF0LL)), 4u).n64_u64[0] >> (4 * (unsigned __int8)a2);
  if ( v2 )
  {
    v6 = __clz(__rbit64(v2)) >> 2;
LABEL_6:
    if ( (v6 & 8) != 0 )
    {
      v9 = *(_QWORD *)(a2 + v6 - 7);
      *a1 = *(_QWORD *)a2;
      *(_QWORD *)((char *)a1 + v6 - 7) = v9;
      return (char *)a1 + v6;
    }
    else
    {
      v10 = v6 - 3;
      if ( v6 < 3 )
      {
        if ( v6 )
          *(_WORD *)a1 = *(_WORD *)a2;
        *((_BYTE *)a1 + v6) = 0;
        return (char *)a1 + v6;
      }
      else
      {
        v11 = *(_DWORD *)(a2 + v10);
        *(_DWORD *)a1 = *(_DWORD *)a2;
        *(_DWORD *)((char *)a1 + v10) = v11;
        return (char *)a1 + v6;
      }
    }
  }
  v3 = (a2 & 0xFFFFFFFFFFFFFFF0LL) + 16;
  v4 = *(int8x16_t *)((a2 & 0xFFFFFFFFFFFFFFF0LL) + 0x10);
  v5 = vshrn_n_s16(vceqzq_s8(v4), 4u).n64_u64[0];
  if ( v5 )
  {
    v6 = v3 - a2 + (__clz(__rbit64(v5)) >> 2);
    if ( (v6 & 0x10) != 0 )
    {
      v7 = *(_OWORD *)(a2 + v6 - 15);
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_OWORD *)((char *)a1 + v6 - 15) = v7;
      return (char *)a1 + v6;
    }
    goto LABEL_6;
  }
  v12 = (int8x16_t *)(v3 - (a2 - (_QWORD)a1));
  *(_OWORD *)a1 = *(_OWORD *)a2;
  while ( 1 )
  {
    *v12 = v4;
    v12 += 2;
    v13 = *(int8x16_t *)(v3 + 16);
    v14 = vceqzq_s8(v13);
    if ( vpmaxq_u8(v14, v14).n128_u64[0] )
      break;
    v12[-1] = v13;
    v15 = *(int8x16_t *)(v3 + 32);
    v3 += 32LL;
    v4 = v15;
    v14 = vceqzq_s8(v15);
    if ( vpmaxq_u8(v14, v14).n128_u64[0] )
    {
      ++v12;
      break;
    }
  }
  v16 = (_OWORD *)((char *)v12[-2].n128_u64 + (__clz(__rbit64(vshrn_n_s16(v14, 4u).n64_u64[0])) >> 2) + 1);
  *v16 = *(_OWORD *)((char *)v16 + a2 - (_QWORD)a1);
  return (char *)v16 + 15;
}
