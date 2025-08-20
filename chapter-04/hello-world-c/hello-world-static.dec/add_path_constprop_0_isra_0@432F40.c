__int64 __fastcall add_path_constprop_0_isra_0(__int64 result, __int64 *a2)
{
  __int64 *v2; // x20
  __int64 v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  unsigned __int64 v6; // x3
  unsigned int v7; // w21
  __int64 v8; // x21
  _BYTE *v9; // x0

  if ( a2 != (__int64 *)-1LL )
  {
    v2 = a2;
    v3 = result;
    v4 = *a2;
    do
    {
      while ( 1 )
      {
        ++v2;
        result = *(_QWORD *)(v3 + 8);
        v6 = *(_QWORD *)(v4 + 32);
        if ( (*(_BYTE *)v3 & 1) != 0 )
          break;
        v7 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v3 + 4) = v7 + 1;
        v8 = result + 16LL * v7;
        v9 = *(_BYTE **)(v3 + 16);
        *(_QWORD *)(v8 + 16) = v9;
        if ( v6 > 1 )
        {
          result = j_memcpy(v9) + v6 - 1;
        }
        else
        {
          *(_QWORD *)(v3 + 16) = v9 + 1;
          *v9 = (v6 != 0) + 46;
          result = *(_QWORD *)(v3 + 16);
        }
        *(_QWORD *)(v3 + 16) = result + 1;
        *(_BYTE *)result = 0;
        *(_DWORD *)(v8 + 24) = 0;
        v4 = *v2;
        if ( !*v2 )
          return result;
      }
      v5 = *(_QWORD *)result;
      ++*(_DWORD *)(result + 8);
      if ( v6 < 2 )
        v6 = 2;
      v4 = *v2;
      *(_QWORD *)result = v5 + v6;
    }
    while ( v4 );
  }
  return result;
}
