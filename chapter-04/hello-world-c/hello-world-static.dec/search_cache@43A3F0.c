__int64 __fastcall search_cache(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5, _BYTE *a6)
{
  int v12; // w24
  __int64 v13; // x12
  int v14; // w10
  unsigned int v15; // w1
  int v16; // w0
  int v17; // w8
  __int64 v18; // x9
  __int64 v19; // x13
  int v21; // w10
  unsigned int *v22; // x9
  int v23; // w14
  __int64 v24; // x9
  unsigned __int64 v25; // x13
  unsigned int v26; // w1
  unsigned int v27; // w0
  char *v28; // [xsp+48h] [xbp+48h] BYREF

  _tunable_get_val(0x10u, &v28, 0);
  v12 = a4 - 1;
  if ( v12 >= 0 )
  {
    v13 = a5;
    v14 = 0;
    while ( 1 )
    {
      v15 = *(_DWORD *)(a3 + (v12 + v14) / 2 * v13 + 4);
      if ( v15 >= a2 )
        break;
      v16 = dl_cache_libcmp(a6, (unsigned __int8 *)(a1 + v15));
      if ( !v16 )
      {
        v21 = v17;
        v22 = (unsigned int *)(a3 + (v18 - 1) * v13 + 4);
        while ( v21 > 0 && a2 > *v22 && !(unsigned int)dl_cache_libcmp(a6, (unsigned __int8 *)(a1 + *v22)) )
          v21 = v23;
        v24 = a3 + v21 * v13;
        v25 = ~(v19 & dl_hwcap | 0x8000000000000000LL);
        while ( 1 )
        {
          if ( v21 > v17 )
          {
            v26 = *(_DWORD *)(v24 + 4);
            if ( v26 >= a2 || (unsigned int)dl_cache_libcmp(a6, (unsigned __int8 *)(a1 + v26)) )
              break;
          }
          ++v21;
          if ( *(_DWORD *)v24 == 2563 )
          {
            v27 = *(_DWORD *)(v24 + 8);
            if ( v27 < a2 && (a5 != 24 || (v25 & *(_QWORD *)(v24 + 16)) == 0) )
              return a1 + v27;
          }
          v24 += v13;
          if ( v12 < v21 )
            return 0;
        }
        return 0;
      }
      if ( v16 >= 0 )
      {
        v12 = v17 - 1;
        if ( v14 > v17 - 1 )
          return 0;
      }
      else
      {
        v14 = v17 + 1;
        if ( v17 + 1 > v12 )
          return 0;
      }
    }
  }
  return 0;
}
