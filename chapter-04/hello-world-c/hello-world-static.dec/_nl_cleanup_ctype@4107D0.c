__int64 __fastcall nl_cleanup_ctype(__int64 result)
{
  __int64 *v1; // x19
  _UNKNOWN **v2; // x2
  bool v3; // zf
  double v4; // d0
  double v5; // d1
  double v6; // d2
  double v7; // d3
  double v8; // d4
  double v9; // d5
  double v10; // d6
  double v11; // d7

  v1 = *(__int64 **)(result + 32);
  v2 = (_UNKNOWN **)*v1;
  if ( *v1 )
    v3 = v2 == &_wcsmbs_gconv_fcts_c;
  else
    v3 = 1;
  if ( !v3 )
  {
    _gconv_close_transform(v2[2]);
    _gconv_close_transform(*(_QWORD *)*v1);
    result = free(*v1, v4, v5, v6, v7, v8, v9, v10, v11);
    *v1 = 0;
  }
  return result;
}
