int __fastcall sub_13E40(int a1, int a2)
{
  int v3; // r3

  v3 = sub_13DC8(a1, a2);
  if ( v3 <= 0 )
    return sub_13970(0, ",[%d, 0]", a1);
  else
    return sub_13970(0, ",[%d, %d]", a1, v3);
}
