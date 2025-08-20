__int64 __fastcall _gconv_compare_alias_cache(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF
  __int64 v8; // [xsp+10h] [xbp-10h] BYREF

  if ( !gconv_cache )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)find_module_idx(a1, &v7) || (unsigned int)find_module_idx(a2, &v8) )
    *a3 = strcmp(a1, a2);
  else
    *a3 = v7 - v8;
  return 0;
}
