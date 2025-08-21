__int64 __fastcall _handle_registered_modifier_wc(unsigned int **a1, __int64 a2)
{
  __int64 v3; // x11
  __int64 *v4; // x7
  unsigned int *v5; // x14
  int v6; // w10
  int v7; // w12
  int v8; // w2
  int *v9; // x3
  unsigned int *v10; // x5
  unsigned int v11; // w4
  unsigned int v12; // t1
  __int64 result; // x0

  v3 = (__int64)*a1;
  v4 = *(__int64 **)(_printf_modifier_table + 8LL * **a1);
  if ( !v4 )
    return 1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = *((_DWORD *)v4 + 3);
    v9 = (int *)v4 + 3;
    v10 = (unsigned int *)(v3 + 4);
    v11 = *(_DWORD *)(v3 + 4);
    if ( v11 )
    {
      while ( 1 )
      {
        v8 = *v9;
        if ( !*v9 || v8 != v11 )
          break;
        v12 = v10[1];
        ++v10;
        v11 = v12;
        if ( !v12 )
        {
          v8 = v9[1];
          break;
        }
        ++v9;
      }
    }
    if ( !v8 && ((__int64)v10 - v3) >> 2 > v6 )
    {
      v7 = *((_DWORD *)v4 + 2);
      v6 = ((__int64)v10 - v3) >> 2;
      v5 = v10;
    }
    v4 = (__int64 *)*v4;
  }
  while ( v4 );
  result = 1;
  if ( v7 )
  {
    result = 0;
    *(_WORD *)(a2 + 14) |= v7;
    *a1 = v5;
  }
  return result;
}
