__int64 *__fastcall dl_exception_create(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x24
  __int64 v6; // x22
  __int64 v7; // x1
  __int16 *v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x0
  __int64 *v13; // x21
  __int64 v14; // x0
  __int64 *result; // x0
  __int64 *v16; // x1

  if ( a2 )
    v5 = strlen(a2) + 1;
  else
    v5 = 1;
  v6 = strlen(a3) + 1;
  v12 = malloc(v6 + v5, v7, v8, v9, v10, v11);
  v13 = (__int64 *)v12;
  if ( v12 )
  {
    v14 = j_memcpy(v12);
    result = (__int64 *)j_memcpy(v14 + v6);
    v16 = v13;
  }
  else
  {
    result = &qword_456B08;
    v16 = (__int64 *)"out of memory";
  }
  *a1 = result;
  a1[1] = v16;
  a1[2] = v13;
  return result;
}
