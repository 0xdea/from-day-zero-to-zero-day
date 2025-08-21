__int64 __fastcall sub_414010(__int64 result, unsigned __int64 *a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  unsigned int v4; // w4
  unsigned __int64 v5; // x6
  int v6; // w7
  unsigned __int64 v7; // x1
  unsigned __int64 v8; // x4
  unsigned __int64 v9; // x5
  unsigned __int64 v10; // x2
  unsigned __int64 v11; // x3

  v4 = *(_DWORD *)(result + 48);
  if ( v4 > 2 )
  {
    v11 = a2[1];
    *(_QWORD *)(result + 88) = *a2;
    *(_QWORD *)(result + 96) = v11;
    *(_BYTE *)(result + 104) = 1;
    return result;
  }
  if ( v4 )
  {
    v5 = *a2;
    v6 = 1;
  }
  else
  {
    v5 = *(int *)a2;
    v6 = 0;
  }
  v8 = *(_QWORD *)(result + 56);
  v7 = *(_QWORD *)(result + 64);
  if ( !a3 )
  {
    if ( a4 )
    {
      v10 = *a4;
      v9 = *(_QWORD *)(result + 56);
      if ( !v6 )
        goto LABEL_10;
    }
    else
    {
      v10 = *(_QWORD *)(result + 64);
      v9 = *(_QWORD *)(result + 56);
      if ( !v6 )
        goto LABEL_10;
    }
LABEL_20:
    if ( v8 > v9 )
      v9 = *(_QWORD *)(result + 56);
    if ( v10 > v7 )
      v10 = *(_QWORD *)(result + 64);
    if ( v10 >= v9 )
    {
      v8 = v9;
      v7 = v10;
    }
    if ( v5 >= v8 && v5 <= v7 )
      goto LABEL_16;
    return result;
  }
  v9 = *a3;
  v10 = *(_QWORD *)(result + 64);
  if ( a4 )
    v10 = *a4;
  if ( v6 )
    goto LABEL_20;
  if ( (__int64)v9 < (__int64)v8 )
    v9 = *(_QWORD *)(result + 56);
LABEL_10:
  if ( (__int64)v10 > (__int64)v7 )
    v10 = *(_QWORD *)(result + 64);
  if ( (__int64)v10 >= (__int64)v9 )
  {
    v8 = v9;
    v7 = v10;
  }
  if ( (__int64)v5 >= (__int64)v8 && (__int64)v5 <= (__int64)v7 )
  {
LABEL_16:
    *(_QWORD *)(result + 56) = v8;
    *(_QWORD *)(result + 64) = v7;
    *(_QWORD *)(result + 88) = v5;
    *(_BYTE *)(result + 104) = 1;
  }
  return result;
}
