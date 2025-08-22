size_t __fastcall sub_15CE0(int a1, const char **a2)
{
  int v2; // r4

  if ( a1 > 0 )
    v2 = atoi(*a2);
  else
    v2 = 0;
  sub_13954("\nwl_bands = [");
  foreach_wif(v2, 0, (int)sub_13E84);
  return sub_13954(" ];\n");
}
