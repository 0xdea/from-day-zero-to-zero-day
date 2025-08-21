int __fastcall sub_14980(int a1, int a2)
{
  int v2; // r5
  int v3; // r0
  unsigned int v4; // r0

  if ( a1 )
    v2 = 44;
  else
    v2 = 32;
  v3 = wl_client(a2, 0);
  v4 = sub_145D4(v3);
  sub_13970(0, "%c%d", v2, v4);
  return 0;
}
