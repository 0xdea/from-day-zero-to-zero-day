__int64 __fastcall sub_433614(__int64 a1)
{
  __int64 v1; // x0
  __int64 v3; // x20
  __int64 v4; // x19
  __int64 v5; // x2

  v1 = sub_42F180(a1, 36);
  if ( !v1 )
    return 0;
  v3 = 0;
  do
  {
    v4 = v1 + 1;
    v5 = sub_432880(v1 + 1, "ORIGIN");
    if ( v5 || (v5 = sub_432880(v4, "PLATFORM")) != 0 || (v5 = sub_432880(v4, "LIB")) != 0 )
    {
      ++v3;
      v4 += v5;
    }
    v1 = sub_42F180(v4, 36);
  }
  while ( v1 );
  return v3;
}
