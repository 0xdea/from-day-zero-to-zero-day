char *__fastcall sub_42F9C0(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 *v3; // x6
  __int64 v4; // x1
  __int64 v5; // x7
  unsigned __int64 v6; // x8
  __int64 v7; // x11
  __int64 v8; // x4
  __int64 v9; // x12
  __int64 v10; // x11
  bool v11; // zf
  __int64 v12; // x9
  __int64 v13; // x11
  __int64 v14; // x12
  unsigned __int64 v15; // x13
  unsigned __int64 v16; // x14
  __int64 *v18; // x0
  unsigned __int64 v19; // x13
  char *result; // x0
  bool v21; // nf

  if ( !a3 )
    return 0;
  v3 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = 0x101010101010101LL * a2;
  v5 = a1 + a3;
  v6 = (a1 + a3 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a1 & 0xF) == 0 )
    goto LABEL_14;
  v7 = *v3;
  v3 += 2;
  v8 = -1LL << (8 * (unsigned __int8)a1);
  v9 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFF0LL) + 8) ^ v4;
  if ( (a1 & 8) != 0 )
    v10 = -1;
  else
    v10 = v7 ^ v4 | ~v8;
  if ( (a1 & 8) != 0 )
    v9 |= ~v8;
  v11 = a3 > 0 && v3 == (__int64 *)v6;
  if ( v11 )
    v12 = 0;
  else
    v12 = -1;
  while ( 1 )
  {
    v15 = (v10 - 0x101010101010101LL) & ~(v10 | 0x7F7F7F7F7F7F7F7FLL);
    v16 = (v9 - 0x101010101010101LL) & ~(v9 | 0x7F7F7F7F7F7F7F7FLL);
    if ( v11 || (v15 | v16) != 0 )
      break;
LABEL_14:
    v13 = *v3;
    v14 = v3[1];
    v3 += 2;
    v12 = (__int64)v3 - v6;
    v11 = v3 == (__int64 *)v6;
    v10 = v13 ^ v4;
    v9 = v14 ^ v4;
  }
  if ( !v15 )
  {
    if ( v16 )
    {
      v18 = v3 - 1;
      v19 = bswap64(v16);
      goto LABEL_23;
    }
    return 0;
  }
  v18 = v3 - 2;
  v19 = bswap64(v15);
LABEL_23:
  result = (char *)v18 + (__clz(v19) >> 3);
  if ( v12 )
    v21 = 1;
  else
    v21 = (__int64)&result[-v5] < 0;
  if ( !v21 )
    return 0;
  return result;
}
