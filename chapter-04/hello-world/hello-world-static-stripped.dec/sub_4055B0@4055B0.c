__int64 __fastcall sub_4055B0(int a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // x3
  int v4; // t1

  v3 = a2 + a3;
  do
  {
    if ( v3 <= a2 )
      return (unsigned int)(a3 + a1);
    v4 = *(unsigned __int8 *)--v3;
  }
  while ( v4 != 10 );
  return (unsigned int)(a2 + a3 - v3 - 1);
}
