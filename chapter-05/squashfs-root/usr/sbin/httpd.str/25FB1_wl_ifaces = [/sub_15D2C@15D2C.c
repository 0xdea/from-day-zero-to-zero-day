int __fastcall sub_15D2C(int a1, const char **a2)
{
  int v2; // r4

  if ( a1 > 0 )
    v2 = atoi(*a2);
  else
    v2 = 0;
  sub_13954("\nwl_ifaces = [");
  foreach_wif(v2, 0, sub_1416C);
  return sub_13954("];\n");
}
