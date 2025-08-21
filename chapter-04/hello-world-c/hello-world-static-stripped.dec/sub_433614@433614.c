__int64 __fastcall sub_433614(__int64 a1)
{
  __int64 v1; // x0
  __int64 v3; // x20
  _BYTE *v4; // x19
  unsigned __int64 v5; // x2

  v1 = sub_42F180(a1, 0x24u);
  if ( !v1 )
    return 0;
  v3 = 0;
  do
  {
    v4 = (_BYTE *)(v1 + 1);
    v5 = sub_432880((_BYTE *)(v1 + 1), (unsigned __int64)"ORIGIN");
    if ( v5
      || (v5 = sub_432880(v4, (unsigned __int64)"PLATFORM")) != 0
      || (v5 = sub_432880(v4, (unsigned __int64)"LIB")) != 0 )
    {
      ++v3;
      v4 += v5;
    }
    v1 = sub_42F180((__int64)v4, 0x24u);
  }
  while ( v1 );
  return v3;
}
