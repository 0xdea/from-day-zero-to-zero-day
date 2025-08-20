__int64 __fastcall strcspn(__int64 a1, unsigned __int8 *a2)
{
  int v3; // t1
  __int64 result; // x0
  unsigned __int8 *v5; // x1
  int v6; // t1
  __int64 v7; // x0
  int v8; // w6
  unsigned __int8 v9; // w5
  int v10; // w4
  unsigned __int8 *v11; // x1
  unsigned __int8 *v12; // x0
  __int64 v13; // x1
  _BYTE v14[256]; // [xsp+8h] [xbp-108h] BYREF

  if ( !*a2 || !a2[1] )
    return strchrnul(a1, *a2) - a1;
  memset(v14, 0, sizeof(v14));
  do
  {
    v3 = *a2++;
    v14[v3] = 1;
  }
  while ( v3 );
  result = 0;
  if ( !v14[*(unsigned __int8 *)a1] )
  {
    result = 1;
    if ( !v14[*(unsigned __int8 *)(a1 + 1)] )
    {
      result = 2;
      if ( !v14[*(unsigned __int8 *)(a1 + 2)] )
      {
        result = 3;
        if ( !v14[*(unsigned __int8 *)(a1 + 3)] )
        {
          v5 = (unsigned __int8 *)(a1 & 0xFFFFFFFFFFFFFFFCLL);
          do
          {
            v6 = v5[4];
            v5 += 4;
            v7 = v5[1];
            v8 = (unsigned __int8)v14[v6];
            v9 = v14[v5[2]];
            v10 = (unsigned __int8)v14[v7] | v8;
          }
          while ( !((unsigned __int8)(v14[v7] | v8) | (unsigned __int8)(v9 | v14[v5[3]])) );
          v11 = &v5[-a1];
          v12 = v11 + 3;
          v13 = (__int64)&v11[-(unsigned __int8)v8 + 1];
          result = (__int64)&v12[-v9];
          if ( v10 )
            return v13;
        }
      }
    }
  }
  return result;
}
