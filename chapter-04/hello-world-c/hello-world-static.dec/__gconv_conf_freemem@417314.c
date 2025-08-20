__int64 __fastcall _gconv_conf_freemem(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  __int64 result; // x0
  bool v9; // zf

  result = _gconv_path_elem;
  if ( _gconv_path_elem )
    v9 = _gconv_path_elem == (_QWORD)&empty_path_elem;
  else
    v9 = 1;
  if ( !v9 )
    return free(_gconv_path_elem, a1, a2, a3, a4, a5, a6, a7, a8);
  return result;
}
