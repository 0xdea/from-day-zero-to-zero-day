int __fastcall sub_13BF8(int a1)
{
  signed int v2; // r1
  signed int v3; // r0
  int v5; // [sp+0h] [bp-210h] BYREF

  while ( 1 )
  {
    if ( a1 <= 0 )
      return 1;
    v2 = (unsigned int)a1 >= 0x200 ? 512 : a1;
    v3 = sub_13B54(&v5, v2);
    if ( v3 <= 0 )
      break;
    a1 -= v3;
  }
  return 0;
}
