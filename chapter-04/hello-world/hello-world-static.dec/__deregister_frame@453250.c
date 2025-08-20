_DWORD *__fastcall _deregister_frame(_DWORD *result)
{
  unsigned __int64 v1; // x0
  double v2; // d0
  double v3; // d1
  double v4; // d2
  double v5; // d3
  double v6; // d4
  double v7; // d5
  double v8; // d6
  double v9; // d7

  if ( *result )
  {
    v1 = _deregister_frame_info_bases_part_0((unsigned __int64)result);
    return (_DWORD *)free(v1, v2, v3, v4, v5, v6, v7, v8, v9);
  }
  return result;
}
