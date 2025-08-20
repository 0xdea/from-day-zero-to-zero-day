__int64 __fastcall find_module_idx(__int64 a1, _QWORD *a2)
{
  __int64 v2; // x20
  __int64 v5; // x22
  __int64 v6; // x26
  unsigned int v7; // w0
  unsigned int v8; // w24
  unsigned int v9; // w27
  unsigned int v10; // w19
  unsigned int v11; // w25
  __int64 result; // x0
  unsigned int v13; // w19
  bool v14; // cc
  unsigned int v15; // w0
  unsigned __int16 *v16; // x28
  unsigned int v17; // w2

  v2 = gconv_cache;
  v5 = *(unsigned __int16 *)(gconv_cache + 4);
  v6 = *(unsigned __int16 *)(gconv_cache + 6);
  v7 = _hash_string();
  v8 = *(unsigned __int16 *)(v2 + 8);
  v9 = cache_size - *(unsigned __int16 *)(v2 + 4);
  v10 = v7 % v8;
  v11 = v7 % (v8 - 2) + 1;
  while ( 1 )
  {
    v16 = (unsigned __int16 *)(v2 + v6 + 4LL * v10);
    v17 = *v16;
    if ( !*v16 )
      return 0xFFFFFFFFLL;
    if ( v17 < v9 )
    {
      result = strcmp(a1, v2 + v5 + (unsigned __int16)v17);
      if ( !(_DWORD)result )
        break;
    }
    v13 = v10 + v11;
    v14 = v8 > v13;
    v15 = v13;
    v10 = v13 - v8;
    if ( v14 )
      v10 = v15;
  }
  *a2 = v16[1];
  return result;
}
