_BYTE *__fastcall IO_getline_info(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14)
{
  unsigned __int64 v14; // x20
  _BYTE *v20; // x22
  __int64 v21; // x27
  __int64 v22; // x19
  __int64 v23; // x28
  int v25; // w0
  _BYTE *v26; // x19
  __int64 v27; // x24

  v14 = a3;
  if ( a6 )
    *a6 = 0;
  if ( !*(_DWORD *)(a1 + 192) )
    *(_DWORD *)(a1 + 192) = -1;
  if ( !a3 )
    return 0;
  v20 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(a1 + 8);
      v22 = *(_QWORD *)(a1 + 16) - v21;
      if ( v22 > 0 )
        break;
      v25 = _uflow(a1, a7, a8, a9, a10, a11, a12, a13, a14);
      --v14;
      if ( v25 == -1 )
      {
        if ( a6 )
          *a6 = -1;
        return (_BYTE *)(v20 - a2);
      }
      if ( a4 == v25 )
      {
        if ( a5 <= 0 )
        {
          if ( a5 )
            IO_sputbackc(a1, a4, a7, a8, a9, a10, a11, a12, a13, a14);
        }
        else
        {
          *v20++ = a4;
        }
        return (_BYTE *)(v20 - a2);
      }
      *v20++ = v25;
      if ( !v14 )
        return (_BYTE *)(v20 - a2);
    }
    if ( v22 > v14 )
      v22 = v14;
    v23 = memchr(*(_QWORD *)(a1 + 8), a4, v22);
    if ( v23 )
      break;
    j_memcpy(v20);
    v20 += v22;
    v14 -= v22;
    *(_QWORD *)(a1 + 8) += v22;
    if ( !v14 )
      return (_BYTE *)(v20 - a2);
  }
  v26 = (_BYTE *)(v20 - a2);
  v27 = v23 - v21;
  if ( a5 >= 0 )
  {
    ++v23;
    if ( a5 )
      ++v27;
  }
  j_memcpy(v20);
  *(_QWORD *)(a1 + 8) = v23;
  return &v26[v27];
}
