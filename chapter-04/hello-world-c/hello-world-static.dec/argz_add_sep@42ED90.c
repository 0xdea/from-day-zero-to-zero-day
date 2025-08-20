__int64 __fastcall argz_add_sep(__int64 *a1, _QWORD *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v4; // x19
  __int64 v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  void *v11; // x4
  void *v12; // x5
  void *v13; // x6
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  __int64 v23; // x23
  __int64 v24; // x0
  _BYTE *v25; // x4
  int v26; // w2

  v4 = a3;
  v8 = strlen(a3);
  if ( v8 )
  {
    v23 = v8 + 1;
    v24 = realloc(*a1, v8 + 1 + *a2, v14, v15, v16, v17, v18, v19, v20, v21, v9, v10, v11, v12, v13);
    *a1 = v24;
    if ( !v24 )
      return 12;
    v25 = (_BYTE *)(v24 + *a2);
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = *v4;
        if ( v26 == a4 )
          break;
        *v25++ = v26;
LABEL_7:
        ++v4;
        if ( !v26 )
          goto LABEL_12;
      }
      if ( *a1 >= (unsigned __int64)v25 || !*(v25 - 1) )
      {
        --v23;
        goto LABEL_7;
      }
      *v25 = 0;
      ++v4;
      ++v25;
      if ( !*(v4 - 1) )
      {
LABEL_12:
        *a2 += v23;
        return 0;
      }
    }
  }
  return 0;
}
