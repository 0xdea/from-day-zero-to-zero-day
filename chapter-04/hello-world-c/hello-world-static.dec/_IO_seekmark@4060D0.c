__int64 __fastcall IO_seekmark(int *a1, __int64 a2)
{
  int v2; // w1
  int v3; // w2
  int v4; // w3
  __int64 v5; // x4
  __int64 v7; // x3
  __int64 v8; // x5
  __int64 v9; // x3
  __int64 v10; // x5
  __int64 v11; // x6

  if ( *(int **)(a2 + 8) != a1 )
    return 0xFFFFFFFFLL;
  v2 = *(_DWORD *)(a2 + 16);
  v3 = *a1;
  v4 = *a1 & 0x100;
  if ( v2 < 0 )
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( !v4 )
    {
      v9 = *((_QWORD *)a1 + 11);
      v10 = *((_QWORD *)a1 + 3);
      *a1 = v3 | 0x100;
      v11 = *((_QWORD *)a1 + 9);
      *((_QWORD *)a1 + 2) = v9;
      *((_QWORD *)a1 + 3) = v11;
      *((_QWORD *)a1 + 9) = v10;
      *((_QWORD *)a1 + 11) = v5;
      v5 = v9;
    }
  }
  else
  {
    v5 = *((_QWORD *)a1 + 3);
    if ( v4 )
    {
      v7 = *((_QWORD *)a1 + 9);
      v8 = *((_QWORD *)a1 + 2);
      *a1 = v3 & 0xFFFFFEFF;
      *((_QWORD *)a1 + 2) = *((_QWORD *)a1 + 11);
      *((_QWORD *)a1 + 3) = v7;
      *((_QWORD *)a1 + 9) = v5;
      v5 = v7;
      *((_QWORD *)a1 + 11) = v8;
    }
  }
  *((_QWORD *)a1 + 1) = v5 + v2;
  return 0;
}
