int __fastcall sub_13D58(const char *a1, int a2)
{
  FILE *v3; // r0
  FILE *v4; // r4

  v3 = popen(a1, "r");
  v4 = v3;
  if ( !v3 )
    return 0;
  sub_13AAC(v3, a2);
  pclose(v4);
  return 1;
}
