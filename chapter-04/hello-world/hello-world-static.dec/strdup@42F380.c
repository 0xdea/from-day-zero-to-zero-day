__int64 __fastcall strdup(__int64 a1)
{
  unsigned __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  void *v6; // x4
  void *v7; // x5
  void *v8; // x6
  double v9; // d0
  double v10; // d1
  double v11; // d2
  double v12; // d3
  double v13; // d4
  double v14; // d5
  double v15; // d6
  double v16; // d7
  __int64 result; // x0

  v2 = strlen(a1) + 1;
  result = malloc(v2, v9, v10, v11, v12, v13, v14, v15, v16, v3, v4, v5, v6, v7, v8);
  if ( result )
    return _memcpy_chk(result, a1, v2, v2);
  return result;
}
