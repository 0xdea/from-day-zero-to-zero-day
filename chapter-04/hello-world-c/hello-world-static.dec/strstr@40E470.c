__int64 __fastcall strstr(int8x16_t *a1, int8x16_t *a2)
{
  int8x16_t *v2; // x19
  int v4; // w21
  int v5; // w0
  unsigned __int64 v6; // x22
  unsigned __int64 v7; // x24
  unsigned __int64 v8; // x20
  int8x16_t *v9; // x24
  __int64 v10; // x2
  char v11; // w0
  unsigned __int64 v12; // x25
  __int64 v13; // x0
  __int64 v14; // x21
  __int64 v15; // x21
  unsigned __int64 v16; // x3
  bool v17; // cc
  bool v18; // cf
  int v20; // w2
  int v21; // w0
  int v22; // w1
  int8x16_t *v23; // x3
  int v24; // t1
  bool v25; // zf
  int v26; // w1
  int v27; // w2
  int v28; // w0
  int v29; // w0
  int8x16_t *v30; // x3
  int v31; // t1
  bool v32; // zf
  _BYTE v33[256]; // [xsp+8h] [xbp-108h] BYREF

  v2 = a1;
  v4 = a2->n128_u8[0];
  if ( !a2->n128_u8[0] )
    return (__int64)v2;
  v2 = (int8x16_t *)strchr(a1, a2->n128_u8[0], &_stack_chk_guard);
  if ( !v2 )
    return 0;
  v5 = a2->n128_u8[1];
  if ( !a2->n128_u8[1] )
    return (__int64)v2;
  if ( !a2->n128_u8[2] )
  {
    v20 = v2->n128_u8[0];
    v21 = v5 | (v4 << 16);
    if ( v2->n128_u8[0] )
    {
      v22 = 0;
      do
      {
        v22 = v20 | (v22 << 16);
        v23 = v2;
        v24 = v2->n128_u8[1];
        v2 = (int8x16_t *)((char *)v2 + 1);
        v20 = v24;
        if ( v24 )
          v25 = v21 == v22;
        else
          v25 = 1;
      }
      while ( !v25 );
      v2 = (int8x16_t *)((char *)v23 - 1);
      if ( v21 != v22 )
        return 0;
      return (__int64)v2;
    }
    return 0;
  }
  if ( !a2->n128_u8[3] )
  {
    v26 = v2->n128_u8[0];
    v27 = (v5 << 16) | (v4 << 24) | (a2->n128_u8[2] << 8);
    if ( v2->n128_u8[0] )
    {
      v28 = 0;
      do
      {
        v29 = v26 | v28;
        v30 = v2;
        v31 = v2->n128_u8[1];
        v2 = (int8x16_t *)((char *)v2 + 1);
        v26 = v31;
        v28 = v29 << 8;
        if ( v31 )
          v32 = v27 == v28;
        else
          v32 = 1;
      }
      while ( !v32 );
      v2 = (int8x16_t *)((char *)v30 - 2);
      if ( v27 != v28 )
        return 0;
      return (__int64)v2;
    }
    return 0;
  }
  v6 = strlen(a2);
  v7 = strnlen(v2, v6 | 0x200);
  if ( v6 > v7 )
    return 0;
  if ( !(unsigned int)memcmp(v2, a2, v6) )
    return (__int64)v2;
  if ( v6 <= 0x100 )
  {
    v8 = v6 - 1;
    v9 = (int8x16_t *)((char *)v2 + v7 - v6);
    memset(v33, 0, sizeof(v33));
    if ( v6 - 1 > 1 )
    {
      v10 = 1;
      do
      {
        v11 = v4;
        LOBYTE(v4) = a2->n128_u8[v10];
        v33[(unsigned __int8)(v4 - 8 * v11)] = v10++;
      }
      while ( v8 != v10 );
    }
    v12 = 0;
    v13 = (unsigned __int8)(a2->n128_u8[v8] - 8 * a2->n128_u8[v6 - 2]);
    v14 = (unsigned __int8)v33[v13];
    v33[v13] = v8;
    v15 = v8 - v14;
    while ( 1 )
    {
      if ( v2 > v9 )
      {
LABEL_26:
        v9 = (int8x16_t *)((char *)v9 + strnlen((char *)v9 + v6, 2048));
        if ( v2 > v9 )
          return 0;
      }
      while ( 1 )
      {
        do
        {
          v2 = (int8x16_t *)((char *)v2 + v8);
          v16 = (unsigned __int8)v33[(unsigned __int8)(v2->n128_u8[0] - 8 * v2[-1].n128_u8[15])];
          if ( v33[(unsigned __int8)(v2->n128_u8[0] - 8 * v2[-1].n128_u8[15])] )
            v17 = 1;
          else
            v17 = v2 > v9;
        }
        while ( !v17 );
        v2 = (int8x16_t *)((char *)v2 - v16);
        if ( v8 > v16 )
          break;
        if ( v8 <= 0xE
          || *(unsigned __int64 *)((char *)v2->n128_u64 + v12) == *(unsigned __int64 *)((char *)a2->n128_u64 + v12) )
        {
          if ( !(unsigned int)memcmp(v2, a2, v6 - 1) )
            return (__int64)v2;
          v18 = v12 >= 8;
          v12 -= 8LL;
          if ( !v18 )
            v12 = v6 - 9;
        }
        v2 = (int8x16_t *)((char *)v2 + v15);
        if ( v2 > v9 )
          goto LABEL_26;
      }
    }
  }
  return two_way_long_needle((__int64)v2, v7, a2, v6);
}
