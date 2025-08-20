unsigned __int64 __fastcall sub_431320(__int64 a1, _QWORD *a2, unsigned __int64 *a3, int a4, int a5, int a6)
{
  unsigned __int64 result; // x0
  unsigned __int64 v7; // x6
  __int64 v8; // x7
  unsigned __int64 v9; // x8
  bool v10; // cc
  unsigned __int64 v11; // x1
  __int64 v12; // x5
  _BOOL4 v13; // w9
  unsigned __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x3
  __int64 v17; // x0

  result = a1 & 0xFFFFFFFFFFFFFFFELL;
  v7 = *(_QWORD *)(result + 8);
  v8 = *(_QWORD *)(result + 16);
  v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( a6 == 1 )
  {
    *(_QWORD *)(result + 8) = v7 | 1;
    if ( v8 )
      *(_QWORD *)(v8 + 8) &= ~1uLL;
    if ( v7 > 1 )
      *(_QWORD *)(v9 + 8) &= ~1uLL;
  }
  else
  {
    if ( v8 )
      v10 = v7 > 1;
    else
      v10 = 0;
    if ( !v10 || (*(_QWORD *)(v8 + 8) & 1) == 0 || (*(_QWORD *)(v9 + 8) & 1) == 0 )
      return result;
    *(_QWORD *)(result + 8) = v7 | 1;
    *(_QWORD *)(v8 + 8) &= ~1uLL;
    *(_QWORD *)(v9 + 8) &= ~1uLL;
  }
  if ( a2 )
  {
    v11 = *a2 & 0xFFFFFFFFFFFFFFFELL;
    v12 = *(_QWORD *)(v11 + 8);
    if ( (v12 & 1) != 0 )
    {
      v13 = a5 > 0;
      v14 = *a3 & 0xFFFFFFFFFFFFFFFELL;
      if ( a4 > 0 == v13 )
      {
        *a3 = *a3 & 1 | v11;
        *(_QWORD *)(v11 + 8) = v12 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)(v14 + 8) |= 1uLL;
        if ( a4 < 0 )
        {
          result = *(_QWORD *)(v11 + 16) | 1LL;
          *(_QWORD *)(v14 + 8) = result;
          *(_QWORD *)(v11 + 16) = v14;
        }
        else
        {
          v17 = *(_QWORD *)(v11 + 8);
          *(_QWORD *)(v14 + 16) = v17 & 0xFFFFFFFFFFFFFFFELL;
          result = v17 & 1 | v14;
          *(_QWORD *)(v11 + 8) = result;
        }
      }
      else
      {
        *(_QWORD *)(v11 + 8) = v12 | 1;
        v15 = v8 & 1;
        *(_QWORD *)(v14 + 8) |= 1uLL;
        *(_QWORD *)(result + 8) &= ~1uLL;
        if ( a4 < 0 )
        {
          *(_QWORD *)(v11 + 8) = *(_QWORD *)(v11 + 8) & 1LL | v8;
          *(_QWORD *)(result + 16) = v11 | v15;
          *(_QWORD *)(v14 + 16) = v9;
          *(_QWORD *)(result + 8) = v14;
        }
        else
        {
          v16 = *(_QWORD *)(v14 + 8);
          *(_QWORD *)(v11 + 16) = v9;
          *(_QWORD *)(result + 8) = v11;
          *(_QWORD *)(v14 + 8) = v16 & 1 | v8;
          *(_QWORD *)(result + 16) = v14 | v15;
        }
        result |= *a3 & 1;
        *a3 = result;
      }
    }
  }
  return result;
}
