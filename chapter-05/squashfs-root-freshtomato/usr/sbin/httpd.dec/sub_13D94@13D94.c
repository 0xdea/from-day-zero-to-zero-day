bool __fastcall sub_13D94(int a1)
{
  bool v1; // zf
  bool v3; // zf

  v1 = a1 == 4;
  if ( a1 != 4 )
    v1 = a1 == 6;
  if ( v1 )
    return 1;
  v3 = a1 == 8;
  if ( a1 != 8 )
    v3 = a1 == 7;
  return v3 || a1 == 11;
}
