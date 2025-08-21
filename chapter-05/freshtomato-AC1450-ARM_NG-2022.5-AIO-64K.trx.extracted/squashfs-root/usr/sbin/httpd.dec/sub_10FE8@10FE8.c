int __fastcall sub_10FE8(unsigned __int8 *a1)
{
  int result; // r0
  unsigned __int8 *v3; // r6
  bool v4; // r3
  bool v6; // zf
  unsigned __int8 *v7; // r0
  int v8; // r4
  int v9; // t1

  if ( !a1 )
    return 0;
  result = *a1;
  if ( *a1 )
  {
    v3 = a1;
    while ( 1 )
    {
      v7 = v3;
      v9 = *v3++;
      v8 = v9;
      if ( !v9 )
        break;
      v4 = ((*_ctype_b_loc())[v8] & 0x800) == 0;
      if ( v8 != 46 && v4 )
      {
        v6 = v8 == 58;
        if ( v8 != 58 )
          v6 = v8 == 45;
        if ( !v6 )
          return 0;
      }
    }
    return v7 - a1 <= 64;
  }
  return result;
}
