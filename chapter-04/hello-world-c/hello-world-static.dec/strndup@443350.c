__int64 __fastcall strndup(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // x0
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  void *v9; // x4
  void *v10; // x5
  void *v11; // x6
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7
  __int64 result; // x0

  v3 = strnlen(a1, a2);
  v4 = v3 + 1;
  v5 = v3;
  result = malloc(v3 + 1, v12, v13, v14, v15, v16, v17, v18, v19, v6, v7, v8, v9, v10, v11);
  if ( result )
  {
    *(_BYTE *)(result + v5) = 0;
    return _memcpy_chk(result, a1, v5, v4);
  }
  return result;
}
