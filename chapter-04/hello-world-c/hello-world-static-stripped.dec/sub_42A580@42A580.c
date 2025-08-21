__int64 __fastcall sub_42A580(int a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // x3
  int v4; // t1

  v3 = a2 + 4LL * a3;
  do
  {
    if ( v3 <= a2 )
      return (unsigned int)(a3 + a1);
    v4 = *(_DWORD *)(v3 - 4);
    v3 -= 4LL;
  }
  while ( v4 != 10 );
  return (unsigned int)((__int64)(a2 + 4LL * a3 - v3) >> 2) - 1;
}
