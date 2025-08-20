__int64 __fastcall sub_4061D4(_QWORD *a1, int a2)
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
  unsigned __int64 v17; // x22
  __int64 v18; // x24
  __int64 v19; // x0
  unsigned __int64 v20; // x21

  v2 = *(_DWORD *)a1;
  v3 = a1[1];
  v4 = a1[3];
  v7 = *(_DWORD *)a1 & 0x100;
  if ( v3 <= v4 )
  {
    if ( v7 )
    {
      v16 = a1[2] - v4;
      v17 = 2 * v16;
      v18 = sub_40B890(2 * v16);
      if ( v18 )
      {
        v19 = v16;
        v20 = v18 + v16;
        if ( v17 >= v16 )
          v19 = 2 * v16;
        sub_412300(v18 + v16, v4, v16, v19 - v16);
        sub_40C1A0(v4);
        a1[1] = v20 - 1;
        a1[2] = v18 + v17;
        a1[3] = v18;
        a1[10] = v20;
        *(_BYTE *)(v20 - 1) = a2;
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
LABEL_17:
    v12 = sub_40B890(128);
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
    goto LABEL_17;
  if ( !(unsigned int)sub_403F04(a1, a1[1]) )
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
