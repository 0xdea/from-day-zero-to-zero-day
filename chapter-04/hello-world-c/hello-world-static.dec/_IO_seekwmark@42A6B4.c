__int64 __fastcall IO_seekwmark(int *a1, __int64 a2)
{
  int *v2; // x2
  int v3; // w1
  int v4; // w3
  _QWORD *v5; // x0
  int v6; // w4
  __int64 v7; // x5
  __int64 v9; // x4
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2

  v2 = *(int **)(a2 + 8);
  if ( v2 != a1 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a2 + 16);
  v4 = *v2;
  v5 = (_QWORD *)*((_QWORD *)v2 + 20);
  v6 = *v2 & 0x100;
  if ( v3 < 0 )
  {
    v7 = v5[1];
    if ( !v6 )
    {
      v9 = v5[10];
      *v2 = v4 | 0x100;
      v10 = v5[2];
      v5[10] = v7;
      v11 = v5[8];
      v7 = v9;
      v5[1] = v9;
      v5[2] = v11;
      v5[8] = v10;
    }
  }
  else
  {
    v7 = v5[2];
    if ( v6 )
    {
      v12 = v5[8];
      *v2 = v4 & 0xFFFFFEFF;
      v13 = v5[1];
      v5[8] = v7;
      v7 = v12;
      v5[1] = v5[10];
      v5[2] = v12;
      v5[10] = v13;
    }
  }
  *v5 = v7 + 4LL * v3;
  return 0;
}
