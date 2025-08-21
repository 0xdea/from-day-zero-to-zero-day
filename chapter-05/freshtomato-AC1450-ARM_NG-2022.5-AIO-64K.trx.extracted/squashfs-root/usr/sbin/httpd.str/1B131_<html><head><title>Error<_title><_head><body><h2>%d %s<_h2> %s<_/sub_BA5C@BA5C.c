int __fastcall sub_BA5C(int a1, const char *a2, char *a3)
{
  char *v6; // r5

  v6 = sub_AEE4(a1);
  sub_B928(a1, a2, "text/html; charset=utf-8", 0);
  if ( !a3 )
    a3 = v6;
  return sub_13970(0, "<html><head><title>Error</title></head><body><h2>%d %s</h2> %s</body></html>", a1, v6, a3);
}
