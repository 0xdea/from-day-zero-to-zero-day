__int64 __fastcall sub_4519C4(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // x19
  __int64 v3; // x0
  unsigned int v4; // w3
  __int64 v5; // x0
  char *v6; // x2
  __int64 result; // x0
  int v8; // t1
  char *v9; // x0
  int v10; // t1
  int v11; // t1
  unsigned __int8 *v12; // x19
  int v13; // t1
  int v14; // w0
  int v15; // t1
  int v16; // t1
  int v17; // w1
  unsigned __int64 v18; // [xsp+28h] [xbp+28h] BYREF

  v2 = a1 + 9;
  v3 = ifunc_40DFD0(a1 + 9);
  v4 = a1[8];
  v5 = v3 + 1;
  v6 = (char *)&v2[v5];
  if ( v4 > 3 )
  {
    v17 = v2[v5];
    result = 255;
    if ( v17 != 8 || v6[1] )
      return result;
    v6 += 2;
  }
  if ( a1[9] == 122 )
  {
    do
      v8 = *v6++;
    while ( v8 < 0 );
    do
    {
      v9 = v6;
      v10 = *v6++;
    }
    while ( v10 < 0 );
    if ( v4 == 1 )
    {
      v6 = v9 + 2;
    }
    else
    {
      do
        v11 = *v6++;
      while ( v11 < 0 );
    }
    v12 = a1 + 10;
    do
      v13 = *v6++;
    while ( v13 < 0 );
    v14 = a1[10];
    if ( v14 == 82 )
      return (unsigned __int8)*v6;
    while ( 1 )
    {
      while ( v14 == 80 )
      {
        v6 = sub_450F40(*v6 & 0x7F, 0, v6 + 1, &v18);
        v16 = *++v12;
        v14 = v16;
        if ( v16 == 82 )
          return (unsigned __int8)*v6;
      }
      ++v6;
      if ( v14 != 76 && v14 != 66 )
        break;
      v15 = *++v12;
      v14 = v15;
      if ( v15 == 82 )
        return (unsigned __int8)*v6;
    }
  }
  return 0;
}
