long double __fastcall sub_445390(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // x6
  unsigned __int64 v3; // x7
  __int64 v4; // x5
  unsigned __int64 v5; // x3
  unsigned __int64 v6; // x2
  unsigned __int64 v7; // x4
  __int64 *v8; // x5
  __int128 v9; // q3
  long double result; // q0
  __int128 v11; // q1

  if ( a2 != 1 )
  {
    v2 = a1;
    v3 = 0;
    do
    {
      v4 = v3++;
      v5 = *v2;
      if ( v3 >= a2 )
      {
        v8 = (__int64 *)v2;
      }
      else
      {
        v6 = v3;
        do
        {
          v7 = a1[4 * v6];
          if ( v5 > v7 )
            v4 = v6;
          ++v6;
          if ( v5 > v7 )
            v5 = v7;
        }
        while ( a2 != v6 );
        v8 = (__int64 *)&a1[4 * v4];
      }
      v9 = *((_OWORD *)v2 + 1);
      result = *(long double *)v8;
      v11 = *((_OWORD *)v8 + 1);
      *(_OWORD *)v8 = *(_OWORD *)v2;
      *((_OWORD *)v8 + 1) = v9;
      *(long double *)v2 = result;
      *((_OWORD *)v2 + 1) = v11;
      v2 += 4;
    }
    while ( v3 != a2 - 1 );
  }
  return result;
}
