unsigned __int64 __fastcall _mpn_impn_mul_n_basecase(
        unsigned __int64 result,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v6; // x19
  __int64 v8; // x21
  unsigned __int64 v9; // x19
  unsigned __int64 v10; // x3
  unsigned __int64 v11; // x4

  v6 = result;
  if ( *a3 <= 1 )
  {
    if ( *a3 == 1 )
    {
      result = 0;
      if ( a4 > 0 )
      {
        do
        {
          *(_QWORD *)(v6 + 8 * result) = *(_QWORD *)(a2 + 8 * result);
          ++result;
        }
        while ( a4 != result );
        goto LABEL_5;
      }
    }
    else if ( a4 > 0 )
    {
      memset(result, 0, 8 * a4);
LABEL_5:
      result = 0;
      goto LABEL_6;
    }
    *(_QWORD *)(v6 + 8 * a4) = 0;
    return result;
  }
  result = _mpn_mul_1(result, a2, a4, *a3);
LABEL_6:
  *(_QWORD *)(v6 + 8 * a4) = result;
  v8 = 1;
  v9 = v6 + 8;
  if ( a4 > 1 )
  {
    do
    {
      while ( 1 )
      {
        v10 = a3[v8];
        result = v9;
        v11 = 0;
        if ( v10 <= 1 )
          break;
        result = _mpn_addmul_1(v9, a2, a4);
        ++v8;
        *(_QWORD *)(v9 + 8 * a4) = result;
        v9 += 8LL;
        if ( a4 == v8 )
          return result;
      }
      if ( v10 == 1 )
      {
        result = _mpn_add_n(v9, v9, a2, a4);
        v11 = result;
      }
      ++v8;
      *(_QWORD *)(v9 + 8 * a4) = v11;
      v9 += 8LL;
    }
    while ( a4 != v8 );
  }
  return result;
}
