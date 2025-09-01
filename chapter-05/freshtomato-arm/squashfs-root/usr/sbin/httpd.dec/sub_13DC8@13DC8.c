int __fastcall sub_13DC8(unsigned int a1, int a2)
{
  bool v2; // cc
  bool v4; // zf
  int v5; // r0
  int v6; // r3

  if ( a2 == 2 )
    v2 = a1 - 1 > 0xD;
  else
    v2 = a1 > 0xC8;
  if ( v2 )
    return -1;
  v4 = a1 == 14;
  if ( a1 == 14 )
    v4 = a2 == 2;
  if ( v4 )
    return 2484;
  v5 = 5 * a1;
  v6 = 5000;
  if ( a2 == 2 )
    v6 = 2407;
  return v6 + v5;
}
