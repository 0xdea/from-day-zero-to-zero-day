__int64 *__fastcall indirect_msort_with_tmp(__int64 *result, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x4
  __int64 v5; // x23
  unsigned __int64 v6; // x27
  unsigned __int64 v7; // x24
  _QWORD *v10; // x2
  __int64 *v11; // x1
  __int64 v12; // x21
  unsigned __int64 v13; // x22
  __int64 v14; // x20
  __int64 v15; // x0
  unsigned __int64 i; // x19

  v4 = 8 * a3;
  v5 = a2;
  v6 = result[4] + 8 * a3;
  v7 = v6 + 8 * a3;
  if ( v6 >= v7 )
  {
    v11 = (__int64 *)(result[4] + 8 * a3);
  }
  else
  {
    v10 = (_QWORD *)(result[4] + 8 * a3);
    do
    {
      *v10++ = a2;
      a2 += a4;
    }
    while ( v7 > (unsigned __int64)v10 );
    v11 = (__int64 *)(result[4] + v4);
  }
  if ( a3 <= 1 )
  {
    if ( !a3 )
      return result;
  }
  else
  {
    result = (__int64 *)msort_with_tmp_part_0(result, v11, a3);
  }
  v12 = v5;
  v13 = 0;
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v6 + 8 * v13);
      if ( v14 != v12 )
        break;
      ++v13;
      v12 += a4;
      if ( a3 <= v13 )
        return result;
    }
    j_memcpy(v7);
    v15 = v12;
    for ( i = v13; ; v14 = *(_QWORD *)(v6 + 8 * i) )
    {
      *(_QWORD *)(v6 + 8 * i) = v15;
      i = (v14 - v5) / a4;
      j_memcpy(v15);
      v15 = v14;
      if ( *(_QWORD *)(v6 + 8 * i) == v12 )
        break;
    }
    *(_QWORD *)(v6 + 8 * i) = v14;
    ++v13;
    result = (__int64 *)j_memcpy(v14);
    v12 += a4;
  }
  while ( a3 > v13 );
  return result;
}
