__int64 __fastcall parse_tunables(__int64 result)
{
  int v1; // w10
  unsigned __int8 *v2; // x11
  int v3; // w12
  int v4; // w2
  bool v5; // zf
  unsigned __int8 *v6; // x3
  int v7; // t1
  unsigned __int8 *v9; // x13
  int v10; // w6
  unsigned __int8 *v11; // x8
  int v13; // t1
  const char *v15; // x9
  int v16; // w3
  const char *v17; // x5
  unsigned __int8 *v18; // x2
  int v19; // t1
  int v20; // w4
  __int64 v22; // x2
  _BYTE *v23; // x3
  __int64 *v24; // x19
  __int64 *v25; // x20
  const char *v26; // x22
  const char *v27; // x23
  __int64 v28; // x21
  int v29; // w2
  _BYTE v30[768]; // [xsp+40h] [xbp+40h] BYREF

  if ( !result )
    return result;
  v1 = *(unsigned __int8 *)result;
  if ( !*(_BYTE *)result )
    return result;
  v2 = (unsigned __int8 *)result;
  v3 = 0;
  while ( 1 )
  {
    v4 = v1;
    v5 = v1 == 61 || v1 == 58;
    v6 = v2;
    if ( !v5 )
    {
      while ( v4 )
      {
        v7 = *++v6;
        v4 = v7;
        if ( v7 == 61 || v4 == 58 )
          goto LABEL_14;
      }
      return dl_error_printf("WARNING: ld.so: invalid GLIBC_TUNABLES `%s': ignored.\n", (const char *)result);
    }
LABEL_14:
    v9 = v6 + 1;
    if ( v4 != 58 )
      break;
    v11 = v6 + 1;
LABEL_37:
    v1 = *v11;
    v2 = v11;
  }
  v10 = v6[1];
  v11 = v6 + 1;
  if ( v10 == 61 || v10 == 58 )
  {
LABEL_25:
    if ( v10 != 61 )
    {
      v10 = 58;
      goto LABEL_27;
    }
    return dl_error_printf("WARNING: ld.so: invalid GLIBC_TUNABLES `%s': ignored.\n", (const char *)result);
  }
  while ( v10 )
  {
    v13 = *++v11;
    v10 = v13;
    if ( v13 == 61 || v10 == 58 )
      goto LABEL_25;
  }
LABEL_27:
  v15 = "glibc.rtld.nns";
  while ( 2 )
  {
    v16 = *(unsigned __int8 *)v15;
    v17 = v15;
    v18 = v2;
    if ( *v15 )
    {
      while ( 1 )
      {
        v20 = *v18++;
        if ( !v20 || v20 != v16 )
          break;
        v19 = *(unsigned __int8 *)++v17;
        v16 = v19;
        if ( !v19 )
        {
          v29 = *v18;
          goto LABEL_39;
        }
      }
LABEL_35:
      v15 += 128;
      if ( &dl_random == (_UNKNOWN **)v15 )
      {
        if ( v10 )
          goto LABEL_37;
        goto LABEL_41;
      }
      continue;
    }
    break;
  }
  v29 = v1;
LABEL_39:
  if ( v29 != 61 )
    goto LABEL_35;
  v22 = 24LL * v3++;
  v23 = &v30[v22];
  *(_QWORD *)&v30[v22] = v15;
  *((_QWORD *)v23 + 1) = v9;
  *((_QWORD *)v23 + 2) = v11 - v9;
  if ( v10 )
    goto LABEL_37;
LABEL_41:
  if ( v3 == -1 )
    return dl_error_printf("WARNING: ld.so: invalid GLIBC_TUNABLES `%s': ignored.\n", (const char *)result);
  if ( v3 > 0 )
  {
    v24 = (__int64 *)v30;
    v25 = (__int64 *)&v30[24 * v3];
    do
    {
      while ( 1 )
      {
        v27 = (const char *)*v24;
        v26 = (const char *)v24[1];
        v28 = v24[2];
        result = tunable_initialize(*v24, (unsigned __int64)v26, v28);
        if ( (result & 1) == 0 )
          break;
        v24 += 3;
        if ( v24 == v25 )
          return result;
      }
      v24 += 3;
      result = dl_error_printf(
                 "WARNING: ld.so: invalid GLIBC_TUNABLES value `%.*s' for option `%s': ignored.\n",
                 v28,
                 v26,
                 v27);
    }
    while ( v24 != v25 );
  }
  return result;
}
