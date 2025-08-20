bool __fastcall _grouping_iterator_init(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  bool v5; // zf
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned __int8 *v8; // x1
  unsigned int v9; // w5
  int v10; // w7
  int v11; // w4
  unsigned int v12; // w2
  int v13; // w0
  _BOOL8 result; // x0
  unsigned int v15; // w0

  if ( a4 <= 1 )
    goto LABEL_12;
  v5 = a2 == 4;
  v6 = 2;
  v7 = *(_QWORD *)(a3 + 8LL * a2);
  if ( v5 )
    v6 = 4;
  v8 = *(unsigned __int8 **)(v7 + 8 * v6 + 56);
  if ( (unsigned __int8)(*v8 - 1) > 0xFDu )
  {
LABEL_12:
    *(_DWORD *)a1 = a4;
    *(_DWORD *)(a1 + 4) = a4;
    result = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  else
  {
    v9 = a4;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v12 = *v8;
      v13 = v11;
      v11 += v12;
      if ( v12 >= v9 )
        break;
      ++v10;
      v9 -= v12;
      if ( v8[1] == 255 )
      {
        ++v8;
        break;
      }
      if ( !v8[1] )
      {
        v11 = v13;
        v15 = (v9 - 1) / v12;
        v9 -= v12 * v15;
        v10 += v15;
        break;
      }
      ++v8;
    }
    *(_DWORD *)a1 = v9;
    *(_DWORD *)(a1 + 4) = a4;
    *(_QWORD *)(a1 + 8) = v8;
    result = v10 != 0;
    *(_DWORD *)(a1 + 16) = v11;
    *(_DWORD *)(a1 + 20) = v10;
  }
  return result;
}
