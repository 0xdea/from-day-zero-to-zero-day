__int64 __fastcall sub_403F04(_QWORD *a1, __int64 a2)
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
  unsigned __int64 v16; // x27
  __int64 v17; // x0
  __int64 v18; // x23
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x0
  __int64 v24; // [xsp+68h] [xbp+68h]
  __int64 v25; // [xsp+68h] [xbp+68h]

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
    goto LABEL_20;
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
      v22 = v6 - v7;
      v21 = v4 + v7;
      goto LABEL_21;
    }
LABEL_20:
    j_ifunc_40DD80(v14, v3 + v7, -v7);
    v21 = a1[3];
    v22 = a2 - v21;
    v14 = a1[9] + v10 - v7;
LABEL_21:
    j_ifunc_40DC90(v14, v21, v22);
    v6 = a2 - a1[3];
    v2 = (__int64 *)a1[12];
    v18 = a1[9] + v10;
    goto LABEL_17;
  }
  v16 = v13 + 100;
  v17 = sub_40B890(v13 + 100);
  if ( v17 )
  {
    v24 = v17;
    v18 = v17 + 100;
    if ( v7 < 0 )
    {
      v23 = j_ifunc_40DC90(v17 + 100, v3 + v7, -v7);
      j_ifunc_40DC90(v23 - v7, v4, v6);
      v20 = v24;
    }
    else
    {
      v19 = 100;
      if ( v16 >= 0x64 )
        v19 = v13 + 100;
      sub_412300(v17 + 100, v4 + v7, v6 - v7, v19 - 100);
      v20 = v24;
    }
    v25 = v20;
    sub_40C1A0(v5);
    v6 = a2 - a1[3];
    v2 = (__int64 *)a1[12];
    a1[9] = v25;
    a1[11] = v25 + v16;
LABEL_17:
    for ( a1[10] = v18; v2; v2 = (__int64 *)*v2 )
LABEL_9:
      *((_DWORD *)v2 + 4) -= v6;
    return 0;
  }
  return 0xFFFFFFFFLL;
}
