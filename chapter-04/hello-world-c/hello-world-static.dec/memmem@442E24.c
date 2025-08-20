int8x16_t *__fastcall memmem(int8x16_t *result, unsigned __int64 a2, int8x16_t *a3, unsigned __int64 a4)
{
  int8x16_t *v4; // x19
  unsigned __int8 *v6; // x21
  unsigned __int64 v7; // x20
  unsigned __int8 v8; // w4
  unsigned __int64 v9; // x1
  unsigned __int8 v10; // w0
  unsigned __int64 v11; // x22
  unsigned __int64 v12; // x25
  __int64 v13; // x0
  __int64 v14; // x23
  __int64 v15; // x23
  __int64 v16; // x1
  unsigned __int64 v17; // x0
  bool v18; // cf
  unsigned __int8 *v19; // x1
  int v20; // w3
  int v21; // w0
  int v23; // t1
  _BYTE v25[256]; // [xsp+8h] [xbp-108h] BYREF

  v4 = result;
  if ( a4 )
  {
    if ( a4 == 1 )
      return (int8x16_t *)memchr(result, a3->n128_u8[0], a2);
    if ( a4 <= a2 )
    {
      v6 = (unsigned __int8 *)result + a2 - a4;
      if ( a4 == 2 )
      {
        v19 = &result->n128_u8[1];
        v20 = a3->n128_u8[1] | (a3->n128_u8[0] << 16);
        v21 = result->n128_u8[1] | (result->n128_u8[0] << 16);
        if ( v20 != v21 && v6 >= v19 )
        {
          do
          {
            v23 = *++v19;
            v21 = v23 | (v21 << 16);
          }
          while ( v6 >= v19 && v20 != v21 );
        }
        if ( v20 == v21 )
          return (int8x16_t *)(v19 - 1);
      }
      else
      {
        if ( a4 > 0x100 )
          return (int8x16_t *)two_way_long_needle_0((__int64)result, a2, a3, a4);
        v7 = a4 - 1;
        v8 = a3->n128_u8[0];
        v9 = 1;
        memset(v25, 0, sizeof(v25));
        do
        {
          v10 = v8;
          v8 = a3->n128_u8[v9];
          v25[(unsigned __int8)(v8 - 8 * v10)] = v9++;
        }
        while ( v7 > v9 );
        v11 = a4 - 9;
        v12 = 0;
        v13 = (unsigned __int8)(a3->n128_u8[v7] - 8 * a3->n128_u8[a4 - 2]);
        v14 = (unsigned __int8)v25[v13];
        v25[v13] = v7;
        v15 = v7 - v14;
        while ( v6 >= (unsigned __int8 *)v4 )
        {
          while ( 1 )
          {
            do
            {
              v4 = (int8x16_t *)((char *)v4 + v7);
              v16 = (unsigned __int8)(v4->n128_u8[0] - 8 * v4[-1].n128_u8[15]);
              v17 = (unsigned __int8)v25[v16];
              if ( v25[v16] )
                v18 = 0;
              else
                v18 = v6 >= (unsigned __int8 *)v4;
            }
            while ( v18 );
            v4 = (int8x16_t *)((char *)v4 - v17);
            if ( v7 > v17 )
              break;
            if ( v7 <= 0xE
              || *(unsigned __int64 *)((char *)a3->n128_u64 + v12) == *(unsigned __int64 *)((char *)v4->n128_u64 + v12) )
            {
              if ( !(unsigned int)memcmp(v4, a3, v7) )
                return v4;
              v18 = v12 >= 8;
              v12 -= 8LL;
              if ( !v18 )
                v12 = v11;
            }
            v4 = (int8x16_t *)((char *)v4 + v15);
            if ( v6 < (unsigned __int8 *)v4 )
              return 0;
          }
        }
      }
    }
    return 0;
  }
  return result;
}
