const char *__fastcall new_composite_name(int a1, char **a2)
{
  _BOOL4 v4; // w21
  __int64 v5; // x25
  __int64 v6; // x28
  char *v7; // x27
  __int64 v8; // x1
  __int16 *v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x26
  unsigned __int64 v14; // x19
  char *v15; // x19
  const char *v16; // x21
  __int64 v17; // x1
  __int16 *v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v23; // x0
  __int64 v24; // x21
  __int64 v25; // x19
  char *v26; // x27
  __int64 v27; // x1
  _BYTE *v28; // x0
  _BYTE *v29; // x1
  unsigned __int64 v30; // x26
  __int64 v31; // x0

  v4 = 1;
  v5 = 0;
  v6 = 1;
  do
  {
    if ( v5 == 6 )
      v5 = 7;
    if ( a1 == 6 )
    {
      v7 = a2[v5];
    }
    else if ( a1 == (_DWORD)v5 )
    {
      v7 = *a2;
    }
    else
    {
      v7 = off_4918A0[v5];
    }
    v13 = strlen(v7);
    v14 = nl_category_name_sizes[v5] + 1LL + v13 + v6;
    if ( v4 )
    {
      v8 = (__int64)*a2;
      if ( *a2 != v7 )
        v4 = strcmp(v7, v8) == 0;
    }
    ++v5;
    v6 = v14 + 1;
  }
  while ( v5 != 13 );
  if ( v4 )
  {
    v15 = *a2;
    v16 = "C";
    if ( !(unsigned int)strcmp(*a2, "C") || !(unsigned int)strcmp(v15, "POSIX") )
      return v16;
    v30 = v13 + 1;
    v31 = malloc(v30, v17, v18, v19, v20, v21);
    if ( v31 )
      return (const char *)_memcpy_chk(v31, v15, v30);
    return 0;
  }
  v23 = malloc(v14, v8, v9, v10, v11, v12);
  v24 = v23;
  if ( !v23 )
    return 0;
  v25 = 0;
  do
  {
    if ( v25 == 6 )
      v25 = 7;
    if ( a1 == 6 )
    {
      v26 = a2[v25];
    }
    else if ( a1 == (_DWORD)v25 )
    {
      v26 = *a2;
    }
    else
    {
      v26 = off_4918A0[v25];
    }
    v27 = (unsigned __int8)nl_category_name_idxs[v25++];
    v28 = (_BYTE *)stpcpy(v23, &nl_category_names[v27]);
    *v28 = 61;
    v29 = (_BYTE *)stpcpy(v28 + 1, v26);
    *v29 = 59;
    v23 = (__int64)(v29 + 1);
  }
  while ( v25 != 13 );
  *v29 = 0;
  return (const char *)v24;
}
