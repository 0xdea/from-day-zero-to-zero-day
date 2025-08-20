__int64 __fastcall IO_str_overflow(__int64 a1, unsigned int a2)
{
  int v3; // w1
  unsigned int v5; // w25
  _BYTE *v6; // x0
  __int64 v7; // x23
  unsigned __int64 v8; // x22
  unsigned __int64 v9; // x2
  unsigned __int64 v10; // x24
  __int64 v11; // x0
  __int64 v12; // x20
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned __int64 v17; // x0
  __int64 v20; // x2

  v3 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    if ( a2 == -1 )
      return 0;
    else
      return (unsigned int)-1;
  }
  else
  {
    v5 = *(_DWORD *)a1 & 8;
    if ( (*(_QWORD *)a1 & 0xC00LL) == 0x400 )
    {
      v6 = *(_BYTE **)(a1 + 8);
      v20 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)a1 = v3 | 0x800;
      *(_QWORD *)(a1 + 8) = v20;
      *(_QWORD *)(a1 + 40) = v6;
    }
    else
    {
      v6 = *(_BYTE **)(a1 + 40);
    }
    v7 = *(_QWORD *)(a1 + 56);
    v8 = *(_QWORD *)(a1 + 64) - v7;
    if ( a2 == -1 )
      v9 = v8 + 1;
    else
      v9 = *(_QWORD *)(a1 + 64) - v7;
    if ( v9 <= (unsigned __int64)&v6[-*(_QWORD *)(a1 + 32)] )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
        return (unsigned int)-1;
      v10 = 2 * (v8 + 50);
      if ( v8 > v10 )
        return (unsigned int)-1;
      v11 = malloc(2 * (v8 + 50));
      if ( (v12 = v11) == 0 )
        return (unsigned int)-1;
      if ( v7 )
      {
        _memcpy_chk(v11, v7, v8);
        free(v7);
        *(_QWORD *)(a1 + 56) = 0;
      }
      if ( v8 < v10 )
        v13 = 2 * (v8 + 50);
      else
        v13 = v8;
      _memset_chk(v12 + v8, 0, v10 - v8, v13 - v8);
      IO_setb((int *)a1, v12, v12 + v10, 1);
      v14 = *(_QWORD *)(a1 + 64);
      v15 = v12 + *(_QWORD *)(a1 + 24) - v7;
      v16 = v12 + *(_QWORD *)(a1 + 16) - v7;
      v6 = (_BYTE *)(v12 + *(_QWORD *)(a1 + 40) - v7);
      *(_QWORD *)(a1 + 8) = v12 + *(_QWORD *)(a1 + 8) - v7;
      *(_QWORD *)(a1 + 16) = v16;
      *(_QWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 32) = v12;
      *(_QWORD *)(a1 + 40) = v6;
      *(_QWORD *)(a1 + 48) = v14;
    }
    if ( a2 != -1 )
    {
      *(_QWORD *)(a1 + 40) = v6 + 1;
      *v6 = a2;
      v17 = *(_QWORD *)(a1 + 40);
      if ( v17 > *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 16) = v17;
      return a2;
    }
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v6 )
      *(_QWORD *)(a1 + 16) = v6;
    return v5;
  }
}
