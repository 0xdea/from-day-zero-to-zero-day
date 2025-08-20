__int64 __fastcall save_for_backup(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // x3
  __int64 v3; // x28
  __int64 v4; // x26
  __int64 v5; // x24
  __int64 v6; // x20
  __int64 v7; // x19
  unsigned __int64 v10; // x23
  __int64 **v11; // x2
  __int64 v12; // x4
  __int64 v13; // x25
  __int64 v14; // x0
  __int64 v16; // x0
  __int64 v17; // x23
  __int64 v18; // x0
  __int64 v19; // [xsp+68h] [xbp+68h]

  v3 = a1[11];
  v2 = (__int64 *)a1[12];
  v4 = a1[3];
  v5 = a1[9];
  v6 = a2 - v4;
  v7 = a2 - v4;
  v10 = v3 - v5;
  v11 = (__int64 **)v2;
  if ( !v2 )
  {
    if ( (v6 & 0x8000000000000000LL) == 0 )
    {
      a1[10] = v3;
      return 0;
    }
    v14 = a1[11];
    goto LABEL_18;
  }
  do
  {
    v12 = *((int *)v11 + 4);
    v11 = (__int64 **)*v11;
    if ( v7 > v12 )
      v7 = v12;
  }
  while ( v11 );
  v13 = v6 - v7;
  if ( v6 - v7 <= v10 )
  {
    v10 -= v13;
    v14 = v5 + v10;
    if ( (v7 & 0x8000000000000000LL) == 0 )
    {
      if ( !v13 )
      {
        a1[10] = v14;
        goto LABEL_9;
      }
      goto LABEL_19;
    }
LABEL_18:
    j_memmove(v14, v3 + v7, -v7);
    v14 = a1[9] + v10 - v7;
LABEL_19:
    j_memcpy(v14);
    v6 = a2 - a1[3];
    v2 = (__int64 *)a1[12];
    v17 = a1[9] + v10;
    goto LABEL_15;
  }
  v16 = malloc(v13 + 100);
  if ( v16 )
  {
    v19 = v16;
    v17 = v16 + 100;
    if ( v7 < 0 )
    {
      v18 = j_memcpy(v16 + 100);
      j_memcpy(v18 - v7);
    }
    else
    {
      _memcpy_chk(v16 + 100, v4 + v7, v6 - v7);
    }
    free(v5);
    v6 = a2 - a1[3];
    v2 = (__int64 *)a1[12];
    a1[9] = v19;
    a1[11] = v19 + v13 + 100;
LABEL_15:
    for ( a1[10] = v17; v2; v2 = (__int64 *)*v2 )
LABEL_9:
      *((_DWORD *)v2 + 4) -= v6;
    return 0;
  }
  return 0xFFFFFFFFLL;
}
