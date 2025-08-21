int __fastcall sub_18108(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r0
  int v9; // r2
  int v10; // r1
  int result; // r0
  int v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r2
  int v16; // r2
  int v17; // r3

  v2 = (_DWORD *)a1[6];
  v3 = (_DWORD *)a1[7];
  if ( v2 )
    v4 = v2[8];
  else
    v4 = 0;
  if ( v3 )
    v5 = v3[8];
  else
    v5 = 0;
  v6 = v4 - v5;
  if ( v6 >= -1 )
  {
    if ( v6 <= 1 )
    {
      a1[8] = 0;
      if ( v2 )
      {
        v16 = v2[8];
        if ( v16 > 0 )
          a1[8] = v16;
      }
      if ( v3 )
      {
        v17 = v3[8];
        if ( v17 > a1[8] )
          a1[8] = v17;
      }
      result = (int)a1;
      ++a1[8];
    }
    else
    {
      v12 = v2[6];
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 32);
      else
        v13 = 0;
      v14 = v2[7];
      if ( v14 )
        v15 = *(_DWORD *)(v14 + 32);
      else
        v15 = 0;
      if ( v13 - v15 < 0 )
        a1[6] = ((int (*)(void))sub_18234)();
      return sub_18210(a1);
    }
  }
  else
  {
    v7 = v3[6];
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 32);
    else
      v8 = 0;
    v9 = v3[7];
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 32);
    else
      v10 = 0;
    if ( v8 - v10 > 0 )
      a1[7] = sub_18210(a1[7]);
    return sub_18234(a1);
  }
  return result;
}
