int __fastcall sub_15A4C(int a1, const char **a2)
{
  int v2; // r4

  if ( a1 > 0 )
    v2 = atoi(*a2);
  else
    v2 = 0;
  sub_13954("\nwlstats = [");
  foreach_wif(v2, 0, (int)sub_1461C);
  return sub_13954("];\n");
}
