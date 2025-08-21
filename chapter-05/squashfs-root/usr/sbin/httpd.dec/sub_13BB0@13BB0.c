int __fastcall sub_13BB0(char *ptr, signed int a2)
{
  int v4; // r5
  signed int v5; // r0

  v4 = 0;
  while ( a2 > 0 )
  {
    v5 = sub_13B54(ptr, a2);
    if ( v5 <= 0 )
      return a2;
    ptr += v5;
    a2 -= v5;
    v4 += v5;
  }
  return v4;
}
