int __fastcall sub_177D0(int result, const char **a2)
{
  const char *v3; // r5
  int v4; // r6
  char v5[48]; // [sp+0h] [bp-30h] BYREF

  if ( result == 2 )
  {
    v3 = "cstats";
    if ( !strcmp(a2[1], "bwm") )
      v3 = "rstats";
    memset(v5, 0, 0x20u);
    snprintf(v5, 0x20u, "%s_enable", v3);
    result = nvram_get_int(v5);
    if ( result == 1 )
    {
      memset(v5, 0, 0x20u);
      if ( !strcmp(*a2, "speed") )
      {
        snprintf(v5, 0x20u, "/var/spool/%s-speed.js", v3);
        v4 = 10;
      }
      else
      {
        v4 = 12;
        snprintf(v5, 0x20u, "/var/spool/%s-history.js", v3);
      }
      unlink(v5);
      killall(v3, v4);
      f_wait_exists(v5, 5);
      sub_C3F0(v5);
      return unlink(v5);
    }
  }
  return result;
}
