__int64 __fastcall is_trusted_path_normalize(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // x1
  unsigned __int64 v3; // x2
  unsigned __int16 v4; // w1
  __int64 *v5; // x2
  int i; // w3
  _BYTE *v7; // x1
  int v8; // w2
  _BYTE *v10; // x23
  const char *v11; // x21
  unsigned __int64 v12; // x23
  __int64 v13; // x20
  unsigned __int64 v14; // x19
  int v15; // w4
  int v17; // w4
  int v19; // t1
  __int64 v20; // [xsp+0h] [xbp-10010h] BYREF
  _BYTE v21[1008]; // [xsp+10h] [xbp-10000h] BYREF
  __int64 v22; // [xsp+400h] [xbp-FC10h]
  _BYTE v23[16]; // [xsp+10000h] [xbp-10h] BYREF

  if ( !a2 )
    return 0;
  v2 = a2 + 17;
  v3 = v2 & 0xFFFFFFFFFFFF0000LL;
  v4 = v2 & 0xFFF0;
  v5 = (__int64 *)&v23[-v3];
  if ( v23 != (_BYTE *)v5 )
  {
    do
      v22 = 0;
    while ( &v20 != v5 );
  }
  v20 = 0;
  if ( v4 >= 0x400uLL )
    v22 = 0;
  i = *a1;
  v7 = v21;
  if ( !*a1 )
    goto LABEL_19;
  v8 = a1[1];
  if ( i == 47 )
    goto LABEL_11;
LABEL_8:
  while ( 1 )
  {
    *v7++ = i;
    ++a1;
    if ( !v8 )
      break;
LABEL_9:
    for ( i = v8; ; i = 46 )
    {
      v8 = a1[1];
      if ( i != 47 )
        break;
LABEL_11:
      if ( v8 != 46 )
      {
        if ( v21 >= v7 )
          goto LABEL_8;
LABEL_13:
        if ( *(v7 - 1) != 47 )
          goto LABEL_8;
        ++a1;
        if ( v8 )
          goto LABEL_9;
        goto LABEL_17;
      }
      v15 = a1[2];
      if ( v15 == 46 )
      {
        v17 = a1[3];
        if ( v17 == 47 || v17 == 0 )
        {
          do
          {
            if ( v7 <= v21 )
              break;
            v19 = (unsigned __int8)*--v7;
          }
          while ( v19 != 47 );
          a1 += 3;
          v8 = v17;
          if ( v17 )
            goto LABEL_9;
          goto LABEL_17;
        }
      }
      else if ( v15 == 47 || v15 == 0 )
      {
        a1 += 2;
        v8 = v15;
        if ( v15 )
          goto LABEL_9;
        goto LABEL_17;
      }
      if ( v21 < v7 )
        goto LABEL_13;
      ++a1;
      *v7++ = i;
    }
  }
LABEL_17:
  if ( v7 == v21 || (v10 = v7, *(v7 - 1) != 47) )
  {
LABEL_19:
    *v7 = 47;
    v10 = v7 + 1;
  }
  v11 = "/lib/aarch64-linux-gnu/";
  v12 = v10 - v21;
  v13 = 0;
  while ( 1 )
  {
    v14 = system_dirs_len[v13];
    if ( v14 <= v12 && !(unsigned int)memcmp(v11, v21, system_dirs_len[v13]) )
      break;
    ++v13;
    v11 += v14 + 1;
    if ( v13 == 4 )
      return 0;
  }
  return 1;
}
