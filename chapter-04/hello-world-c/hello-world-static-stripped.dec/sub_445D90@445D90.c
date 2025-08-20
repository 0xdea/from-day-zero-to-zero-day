_QWORD *__fastcall sub_445D90(__int64 a1)
{
  unsigned __int64 v1; // x3
  _QWORD *result; // x0
  unsigned __int64 v3; // x1
  _QWORD *v4; // x6
  unsigned __int64 v5; // x2
  unsigned __int64 *v6; // x4
  unsigned __int64 v7; // x1
  _QWORD *v8; // x1
  _QWORD *v9; // t1
  bool v10; // cf

  v1 = *(_QWORD *)(a1 + 920);
  result = (_QWORD *)qword_496C20[qword_496C30 & 1];
  if ( !result )
    return result;
  while ( 1 )
  {
    v3 = result[2];
    if ( !v3 )
      return result;
    if ( result[4] <= v1 )
      break;
    result = (_QWORD *)*result;
    if ( !result )
      return result;
  }
  result += 4;
  v4 = &result[4 * v3];
  do
  {
    while ( 1 )
    {
      v5 = v3 >> 1;
      v6 = &result[4 * (v3 >> 1)];
      v7 = v3 - 1;
      if ( v1 <= *v6 )
        break;
      result = v6 + 4;
      v3 = v7 - v5;
      if ( !v3 )
        goto LABEL_10;
    }
    v3 = v5;
  }
  while ( v5 );
LABEL_10:
  if ( v4 == result || v1 != *result )
  {
    if ( v1 >= *(result - 3) )
      return result;
    result -= 4;
    v8 = result + 1;
    goto LABEL_14;
  }
  v8 = result + 1;
  if ( result )
    v10 = v1 >= result[1];
  else
    v10 = 1;
  if ( !v10 )
  {
LABEL_14:
    v9 = (_QWORD *)*result;
    result += 2;
    *v8 = v9;
    *result = 0;
  }
  return result;
}
