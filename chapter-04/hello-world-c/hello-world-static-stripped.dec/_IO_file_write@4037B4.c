__int64 __fastcall IO_file_write(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 result; // x0
  __int64 v10; // x1

  if ( a3 > 0 )
  {
    v6 = a3;
    while ( 1 )
    {
      v7 = *(unsigned int *)(a1 + 112);
      if ( (*(_DWORD *)(a1 + 116) & 2) != 0 )
      {
        v8 = sub_411010(v7, a2, v6);
        if ( v8 < 0 )
        {
LABEL_11:
          result = a3 - v6;
          *(_DWORD *)a1 |= 0x20u;
          goto LABEL_7;
        }
      }
      else
      {
        v8 = sub_410C00(v7, a2, v6);
        if ( v8 < 0 )
          goto LABEL_11;
      }
      v6 -= v8;
      a2 += v8;
      if ( v6 <= 0 )
      {
        result = a3 - v6;
        goto LABEL_7;
      }
    }
  }
  result = 0;
LABEL_7:
  v10 = *(_QWORD *)(a1 + 144);
  if ( (v10 & 0x8000000000000000LL) == 0 )
    *(_QWORD *)(a1 + 144) = v10 + result;
  return result;
}
