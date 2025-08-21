int __fastcall sub_136AC(int a1, const char **a2)
{
  int v4; // r6
  unsigned int v5; // r4
  int v6; // r5

  v4 = nvram_get_int("log_wm");
  if ( a1 > 0 )
  {
    v5 = atoi(*a2);
    if ( a1 == 1 )
      v6 = 0;
    else
      v6 = atoi(a2[1]);
  }
  else
  {
    v5 = 0;
    v6 = 0;
  }
  sub_1317C("domains", v4, v6, v5);
  return sub_1317C("searches", v4, v6, v5);
}
