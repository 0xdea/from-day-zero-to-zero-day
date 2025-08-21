__int64 *__fastcall dl_exception_create(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x24
  __int64 v6; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  void *v10; // x4
  void *v11; // x5
  void *v12; // x6
  double v13; // d0
  double v14; // d1
  double v15; // d2
  double v16; // d3
  double v17; // d4
  double v18; // d5
  double v19; // d6
  double v20; // d7
  __int64 v21; // x0
  const char *v22; // x21
  __int64 v23; // x0
  __int64 *result; // x0
  const char *v25; // x1

  if ( a2 )
    v5 = strlen(a2) + 1;
  else
    v5 = 1;
  v6 = strlen(a3) + 1;
  v21 = malloc(v6 + v5, v13, v14, v15, v16, v17, v18, v19, v20, v7, v8, v9, v10, v11, v12);
  v22 = (const char *)v21;
  if ( v21 )
  {
    v23 = j_memcpy(v21);
    result = (__int64 *)j_memcpy(v23 + v6);
    v25 = v22;
  }
  else
  {
    result = &qword_456B08;
    v25 = "out of memory";
  }
  *a1 = result;
  a1[1] = (__int64 *)v25;
  a1[2] = (__int64 *)v22;
  return result;
}
