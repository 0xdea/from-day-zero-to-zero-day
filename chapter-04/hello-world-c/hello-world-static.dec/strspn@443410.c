__int64 __fastcall strspn(unsigned __int64 a1, unsigned __int8 *a2)
{
  int v3; // w2
  int v4; // t1
  __int64 result; // x0
  unsigned __int8 *v6; // x1
  int v7; // t1
  unsigned __int8 v8; // w7
  int v9; // w4
  signed __int64 v10; // x7
  unsigned __int64 v11; // x1
  int v12; // t1
  _BYTE v13[256]; // [xsp+8h] [xbp-108h] BYREF

  v3 = *a2;
  if ( !*a2 )
    return 0;
  if ( !a2[1] )
  {
    if ( *(unsigned __int8 *)a1 == v3 )
    {
      v11 = a1;
      do
        v12 = *(unsigned __int8 *)++v11;
      while ( v12 == v3 );
      return v11 - a1;
    }
    return 0;
  }
  memset(v13, 0, sizeof(v13));
  do
  {
    v13[v3] = 1;
    v4 = *++a2;
    v3 = v4;
  }
  while ( v4 );
  if ( !v13[*(unsigned __int8 *)a1] )
    return 0;
  result = 1;
  if ( v13[*(unsigned __int8 *)(a1 + 1)] )
  {
    result = 2;
    if ( v13[*(unsigned __int8 *)(a1 + 2)] )
    {
      result = 3;
      if ( v13[*(unsigned __int8 *)(a1 + 3)] )
      {
        v6 = (unsigned __int8 *)(a1 & 0xFFFFFFFFFFFFFFFCLL);
        do
        {
          v7 = v6[4];
          v6 += 4;
          v8 = v13[v7];
          v9 = (unsigned __int8)(v8 & v13[v6[1]]);
        }
        while ( ((unsigned __int8)v9 & (unsigned __int8)(v13[v6[2]] & v13[v6[3]])) != 0 );
        v10 = (signed __int64)&v6[v8 - a1];
        result = (__int64)&v6[(unsigned __int8)v13[v6[2]] + 2 - a1];
        if ( !v9 )
          return v10;
      }
    }
  }
  return result;
}
