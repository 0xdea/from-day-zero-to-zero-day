__int64 __fastcall _vasprintf_internal(__int64 *a1, __int64 a2, __int128 *a3, char a4)
{
  __int128 v4; // q0
  __int128 v5; // q1
  __int64 v7; // x2
  __int64 v8; // x3
  void *v9; // x4
  void *v10; // x5
  void *v11; // x6
  unsigned int v12; // w19
  double v13; // d0
  double v14; // d1
  double v15; // d2
  double v16; // d3
  double v17; // d4
  double v18; // d5
  double v19; // d6
  double v20; // d7
  __int64 v21; // x22
  __int64 v22; // x1
  __int64 v23; // x20
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  __int64 v33; // x0
  _OWORD v34[2]; // [xsp+0h] [xbp-120h] BYREF
  _BYTE *v35; // [xsp+28h] [xbp-F8h] BYREF
  _BYTE *v36; // [xsp+30h] [xbp-F0h]
  __int64 *v37; // [xsp+38h] [xbp-E8h]
  __int64 v38; // [xsp+40h] [xbp-E0h]
  int v39; // [xsp+48h] [xbp-D8h]
  _BYTE v40[200]; // [xsp+50h] [xbp-D0h] BYREF
  __int64 v41; // [xsp+118h] [xbp-8h] BYREF

  v4 = *a3;
  v5 = a3[1];
  v35 = v40;
  v36 = v40;
  v37 = &v41;
  v38 = 0;
  v39 = 5;
  v34[0] = v4;
  v34[1] = v5;
  _printf_buffer((__int64)&v35, a2, (__int64 *)v34, a4);
  v12 = _printf_buffer_done((__int64)&v35);
  if ( (v12 & 0x80000000) == 0 )
  {
    v21 = v36 - v35;
    v22 = v36 - v35 + 1;
    if ( v35 == v40 )
    {
      v33 = malloc(v36 - v35 + 1, v13, v14, v15, v16, v17, v18, v19, v20, v22, v7, v8, v9, v10, v11);
      v23 = v33;
      if ( v33 )
      {
        j_memcpy(v33);
        goto LABEL_4;
      }
    }
    else
    {
      v23 = realloc((__int64)v35, v22, v13, v14, v15, v16, v17, v18, v19, v20, v7, v8, v9, v10, v11);
      if ( v23 )
      {
LABEL_4:
        *(_BYTE *)(v23 + v21) = 0;
        *a1 = v23;
        return v12;
      }
      free((__int64)v35, v24, v25, v26, v27, v28, v29, v30, v31);
    }
    return (unsigned int)-1;
  }
  if ( v35 != v40 )
    free((__int64)v35, v13, v14, v15, v16, v17, v18, v19, v20);
  return v12;
}
