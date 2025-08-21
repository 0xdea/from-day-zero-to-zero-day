__int64 __fastcall IO_default_pbackfail(_QWORD *a1, int a2)
{
  int v2; // w22
  unsigned __int64 v3; // x21
  unsigned __int64 v4; // x23
  int v7; // w1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v12; // x0
  unsigned __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x1
  unsigned __int64 v16; // x25
  __int64 v17; // x24

  v2 = *(_DWORD *)a1;
  v3 = a1[1];
  v4 = a1[3];
  v7 = *(_DWORD *)a1 & 0x100;
  if ( v3 <= v4 )
  {
    if ( v7 )
    {
      v16 = a1[2] - v4;
      v17 = malloc(2 * v16);
      if ( v17 )
      {
        _memcpy_chk(v17 + v16, v4, v16);
        free(v4);
        a1[1] = v17 + v16 - 1;
        a1[2] = v17 + 2 * v16;
        a1[3] = v17;
        a1[10] = v17 + v16;
        *(_BYTE *)(v17 + v16 - 1) = a2;
        return (unsigned __int8)a2;
      }
      return 0xFFFFFFFFLL;
    }
    v12 = a1[9];
    if ( v12 )
    {
      v13 = v3;
      v14 = a1[11];
      goto LABEL_12;
    }
LABEL_15:
    v12 = malloc(128);
    if ( !v12 )
      return 0xFFFFFFFFLL;
    v13 = v3;
    v14 = v12 + 128;
    a1[10] = v12 + 128;
LABEL_12:
    v15 = a1[2];
    *(_DWORD *)a1 = v2 | 0x100;
    a1[2] = v14;
    a1[3] = v12;
    a1[1] = v14 - 1;
    a1[9] = v13;
    a1[11] = v15;
    *(_BYTE *)(v14 - 1) = a2;
    return (unsigned __int8)a2;
  }
  if ( v7 )
  {
LABEL_7:
    a1[1] = v3 - 1;
    *(_BYTE *)(v3 - 1) = a2;
    return (unsigned __int8)a2;
  }
  if ( *(unsigned __int8 *)(v3 - 1) == a2 )
  {
    a1[1] = v3 - 1;
    return (unsigned __int8)a2;
  }
  if ( !a1[9] )
    goto LABEL_15;
  if ( !(unsigned int)save_for_backup(a1, a1[1]) )
  {
    v8 = a1[1];
    v9 = a1[2];
    *(_DWORD *)a1 |= 0x100u;
    v10 = a1[9];
    a1[9] = v8;
    v3 = a1[11];
    a1[2] = v3;
    a1[3] = v10;
    a1[11] = v9;
    goto LABEL_7;
  }
  return 0xFFFFFFFFLL;
}
