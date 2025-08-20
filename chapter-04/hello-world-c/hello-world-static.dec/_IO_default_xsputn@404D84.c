unsigned __int64 __fastcall IO_default_xsputn(
        _QWORD *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  unsigned __int64 v13; // x21
  unsigned __int64 v14; // x23
  unsigned __int64 v15; // x0
  unsigned __int64 v16; // x20
  unsigned __int64 v17; // x20
  __int64 v18; // x20
  unsigned int v19; // t1
  __int64 i; // x1

  if ( !a3 )
    return 0;
  v13 = a3;
  v14 = a3;
  while ( 1 )
  {
    v15 = a1[5];
    v16 = a1[6];
    if ( v15 < v16 )
    {
      v17 = v16 - v15;
      if ( v17 > v13 )
        v17 = v13;
      if ( v17 > 0x14 )
      {
        a2 += v17;
        v13 -= v17;
        a1[5] = j_memcpy(v15) + v17;
      }
      else if ( v17 )
      {
        for ( i = 0; i != v17; ++i )
          *(_BYTE *)(v15 + i) = a2[i];
        a2 += v17;
        v13 -= v17;
        a1[5] = v15 + v17;
      }
    }
    if ( !v13 )
      break;
    v18 = a1[27];
    if ( (unsigned __int64)(v18 - (_QWORD)&_io_vtables) > 0x92F )
      IO_vtable_check(a4, a5, a6, a7, a8, a9, a10, a11);
    v19 = *a2++;
    if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(v18 + 24))(a1, v19) == -1 )
    {
      v14 -= v13;
      return v14;
    }
    --v13;
  }
  return v14;
}
