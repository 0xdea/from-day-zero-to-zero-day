_QWORD *__fastcall sub_406010(_QWORD *result)
{
  __int64 v1; // x2
  _QWORD *v2; // x1
  _QWORD *v3; // x2

  v1 = result[1];
  v2 = *(_QWORD **)(v1 + 96);
  if ( v2 )
  {
    if ( v2 == result )
    {
      v3 = (_QWORD *)(v1 + 96);
LABEL_7:
      result = (_QWORD *)*result;
      *v3 = result;
    }
    else
    {
      while ( 1 )
      {
        v3 = v2;
        v2 = (_QWORD *)*v2;
        if ( !v2 )
          break;
        if ( result == v2 )
          goto LABEL_7;
      }
    }
  }
  return result;
}
