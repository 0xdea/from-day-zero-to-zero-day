__int64 __fastcall insert_module(__int64 result, int a2)
{
  _QWORD *v2; // x19
  __int64 *v3; // x20
  __int64 v4; // x21
  __int64 v6; // x23
  __int64 v7; // x24
  __int128 v8; // q0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  int v16; // w1
  __int64 v17; // x0

  v2 = (_QWORD *)_gconv_modules_db;
  v3 = &_gconv_modules_db;
  v4 = result;
  if ( !_gconv_modules_db )
  {
LABEL_13:
    *v3 = v4;
    return result;
  }
  v6 = *(_QWORD *)result;
  while ( 1 )
  {
    result = strcmp(v6, *v2);
    if ( !(_DWORD)result )
      break;
    if ( (int)result < 0 )
      v3 = v2 + 4;
    else
      v3 = v2 + 6;
    v2 = (_QWORD *)*v3;
    if ( !*v3 )
      goto LABEL_13;
  }
  v7 = *(_QWORD *)(v4 + 8);
  while ( (unsigned int)strcmp(v7, v2[1]) )
  {
    v3 = v2 + 5;
    result = v6;
    v2 = (_QWORD *)v2[5];
    if ( !v2 )
      goto LABEL_13;
    while ( (unsigned int)strcmp(result, *v2) )
    {
      v3 = v2 + 5;
      result = v6;
      v2 = (_QWORD *)v2[5];
      if ( !v2 )
        goto LABEL_13;
    }
  }
  result = *((unsigned int *)v2 + 4);
  v16 = *(_DWORD *)(v4 + 16);
  if ( v16 < (int)result
    || v16 == (_DWORD)result && (result = *((unsigned int *)v2 + 5), *(_DWORD *)(v4 + 20) < (int)result) )
  {
    v8 = *((_OWORD *)v2 + 2);
    v17 = (__int64)v2;
    *(_QWORD *)(v4 + 48) = v2[6];
    *(_OWORD *)(v4 + 32) = v8;
    *v3 = v4;
    return free(v17, *(double *)&v8, v9, v10, v11, v12, v13, v14, v15);
  }
  if ( a2 )
  {
    v17 = v4;
    return free(v17, *(double *)&v8, v9, v10, v11, v12, v13, v14, v15);
  }
  return result;
}
