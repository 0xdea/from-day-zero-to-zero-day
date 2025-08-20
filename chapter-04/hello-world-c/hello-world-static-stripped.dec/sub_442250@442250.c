_QWORD *__fastcall sub_442250(_QWORD *result)
{
  _QWORD *v1; // x1
  _QWORD *v2; // x4
  _QWORD *v3; // x2

  v1 = result + 5;
  v2 = (_QWORD *)*result;
  result[3] += result[1] - *result;
  if ( v2 != result + 5 )
  {
    v3 = (_QWORD *)result[2];
    if ( v2 != v3 )
      *((_BYTE *)v3 - 1) = 0;
    result[2] = result + 21;
  }
  *result = v1;
  result[1] = v1;
  return result;
}
