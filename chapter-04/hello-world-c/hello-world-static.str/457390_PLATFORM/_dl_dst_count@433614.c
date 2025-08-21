__int64 __fastcall dl_dst_count(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x0
  __int64 v5; // x20
  __int64 v6; // x19
  __int64 v7; // x2

  v3 = strchr(a1, 36, a3);
  if ( !v3 )
    return 0;
  v5 = 0;
  do
  {
    v6 = v3 + 1;
    v7 = is_dst(v3 + 1, "ORIGIN");
    if ( v7 || (v7 = is_dst(v6, "PLATFORM")) != 0 || (v7 = is_dst(v6, "LIB")) != 0 )
    {
      ++v5;
      v6 += v7;
    }
    v3 = strchr(v6, 36, v7);
  }
  while ( v3 );
  return v5;
}
