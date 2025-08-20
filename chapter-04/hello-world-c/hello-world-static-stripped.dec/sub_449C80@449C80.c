unsigned __int64 __fastcall sub_449C80(unsigned __int64 result, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // x19
  __int64 v6; // x21
  unsigned __int64 v7; // x19
  unsigned __int64 v8; // x3
  unsigned __int64 v9; // x4

  v4 = result;
  if ( *a2 <= 1 )
  {
    if ( *a2 == 1 )
    {
      result = 0;
      if ( a3 > 0 )
      {
        do
        {
          *(_QWORD *)(v4 + 8 * result) = a2[result];
          ++result;
        }
        while ( a3 != result );
        goto LABEL_5;
      }
    }
    else if ( a3 > 0 )
    {
      ifunc_40DE70(result, 0, 8 * a3);
LABEL_5:
      result = 0;
      goto LABEL_6;
    }
    *(_QWORD *)(v4 + 8 * a3) = 0;
    return result;
  }
  result = sub_449700(result, (__int64)a2, a3, *a2);
LABEL_6:
  *(_QWORD *)(v4 + 8 * a3) = result;
  v6 = 1;
  v7 = v4 + 8;
  if ( a3 > 1 )
  {
    do
    {
      while ( 1 )
      {
        v8 = a2[v6];
        result = v7;
        v9 = 0;
        if ( v8 <= 1 )
          break;
        result = sub_44D1F0(v7, a2, a3);
        ++v6;
        *(_QWORD *)(v7 + 8 * a3) = result;
        v7 += 8LL;
        if ( a3 == v6 )
          return result;
      }
      if ( v8 == 1 )
      {
        result = sub_44D1A0(v7, v7, a2, a3);
        v9 = result;
      }
      ++v6;
      *(_QWORD *)(v7 + 8 * a3) = v9;
      v7 += 8LL;
    }
    while ( a3 != v6 );
  }
  return result;
}
