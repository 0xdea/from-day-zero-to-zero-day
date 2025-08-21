unsigned __int8 *__fastcall fillin_rpath_isra_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // x19
  unsigned __int8 *result; // x0
  __int16 *v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  unsigned __int8 *i; // x28
  unsigned __int8 *v15; // x0
  unsigned __int64 v16; // x27
  unsigned __int8 *v17; // x22
  __int64 v18; // x21
  _QWORD *v19; // x25
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x25
  __int64 v23; // x0
  _BOOL4 v24; // w0
  __int64 v25; // x0
  __int64 v26; // [xsp+60h] [xbp+60h]
  __int64 v30; // [xsp+88h] [xbp+88h] BYREF

  v8 = 0;
  v30 = a1;
LABEL_2:
  result = (unsigned __int8 *)strsep(&v30, a3);
  for ( i = result; result; i = result )
  {
    if ( *i )
    {
      v15 = expand_dynamic_string_token(a6, i, (__int64)v10);
      i = v15;
      if ( !v15 )
        goto LABEL_2;
      v16 = strlen(v15);
      if ( !v16 )
      {
        free(i);
        goto LABEL_2;
      }
      while ( v16 != 1 )
      {
        if ( i[v16 - 1] != 47 )
          goto LABEL_32;
        --v16;
      }
      v17 = i;
      if ( *i == 47 )
        goto LABEL_11;
LABEL_32:
      v17 = i;
      i[v16++] = 47;
LABEL_11:
      v18 = dl_all_dirs;
      if ( dl_all_dirs )
      {
LABEL_12:
        v19 = (_QWORD *)v18;
        while ( v19[4] != v16 || (unsigned int)memcmp(i, v19[3], v16) )
        {
          v19 = (_QWORD *)*v19;
          if ( !v19 )
            goto LABEL_24;
        }
        v20 = 0;
        if ( !v8 )
          goto LABEL_33;
        while ( *(_QWORD **)(a2 + 8 * v20) != v19 )
        {
          if ( ++v20 == v8 )
            goto LABEL_33;
        }
        if ( v8 == v20 )
LABEL_33:
          *(_QWORD *)(a2 + 8 * v8++) = v19;
        goto LABEL_21;
      }
    }
    else
    {
      v18 = dl_all_dirs;
      v16 = 0;
      v17 = 0;
      if ( dl_all_dirs )
        goto LABEL_12;
    }
LABEL_24:
    v26 = 0;
    if ( a5 )
      v26 = strlen(a5) + 1;
    v21 = malloc(v16 + 45 + v26, v26, v10, v11, v12, v13);
    v22 = v21;
    if ( !v21 )
      dl_signal_error(12, 0, 0, "cannot create cache for search path");
    v23 = v21 + 44;
    *(_QWORD *)(v22 + 24) = v23;
    *(_BYTE *)(j_memcpy(v23) + v16) = 0;
    *(_QWORD *)(v22 + 32) = v16;
    if ( v16 > max_dirnamelen )
      max_dirnamelen = v16;
    v24 = *i != 47;
    *(_QWORD *)(v22 + 8) = a4;
    *(_DWORD *)(v22 + 40) = 2 * v24;
    if ( a5 )
      v25 = j_memcpy(v22 + v16 + 45);
    else
      v25 = 0;
    dl_all_dirs = v22;
    *(_QWORD *)(a2 + 8 * v8++) = v22;
    *(_QWORD *)v22 = v18;
    *(_QWORD *)(v22 + 16) = v25;
LABEL_21:
    free(v17);
    result = (unsigned __int8 *)strsep(&v30, a3);
  }
  *(_QWORD *)(a2 + 8 * v8) = 0;
  return result;
}
