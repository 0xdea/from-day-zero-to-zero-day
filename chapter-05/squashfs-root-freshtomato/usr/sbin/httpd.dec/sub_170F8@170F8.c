FILE *sub_170F8()
{
  const char *Var; // r0
  const char *v1; // r4
  const char *v2; // r5
  __time_t tv_sec; // r6
  const char *v4; // r0
  int v5; // r5
  struct stat v7; // [sp+0h] [bp-70h] BYREF

  Var = (const char *)WebsGetVar("_what");
  v1 = "/var/lib/misc/cstats-history.gz";
  v2 = "cstats";
  if ( !Var )
    Var = "bwm";
  if ( !strcmp(Var, "bwm") )
  {
    v1 = "/var/lib/misc/rstats-history.gz";
    v2 = "rstats";
  }
  if ( stat(v1, &v7) )
  {
    tv_sec = 0;
  }
  else
  {
    tv_sec = v7.st_mtim.tv_sec;
    sleep(1u);
  }
  v4 = v2;
  v5 = 10;
  killall(v4, 1);
  while ( stat(v1, &v7) || v7.st_mtim.tv_sec == tv_sec )
  {
    sleep(1u);
    if ( !--v5 )
      return (FILE *)sub_BA5C(500, 0, 0);
  }
  sub_B928(200, 0, "application/tomato-binary-file", 0);
  return sub_C3F0(v1);
}
