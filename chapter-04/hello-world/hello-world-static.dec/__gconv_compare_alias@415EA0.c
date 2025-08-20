__int64 __fastcall _gconv_compare_alias(__int64 a1, __int64 a2)
{
  __int64 v5; // x0
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  unsigned int v9; // [xsp+4h] [xbp-1Ch] BYREF
  _QWORD v10[2]; // [xsp+8h] [xbp-18h] BYREF

  _gconv_load_conf();
  if ( !(unsigned int)_gconv_compare_alias_cache(a1, a2, &v9) )
    return v9;
  v10[0] = a1;
  v5 = tfind(v10, &_gconv_alias_db, _gconv_alias_compare);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
    if ( !v6 )
      v6 = a1;
  }
  else
  {
    v6 = a1;
  }
  v10[0] = a2;
  v7 = tfind(v10, &_gconv_alias_db, _gconv_alias_compare);
  if ( v7 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
    if ( !v8 )
      v8 = a2;
  }
  else
  {
    v8 = a2;
  }
  return strcmp(v6, v8);
}
