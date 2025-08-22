int sub_115AC()
{
  const char *Var; // r0
  const char *v1; // r5
  const char *v2; // r0
  char s[272]; // [sp+8h] [bp-110h] BYREF

  if ( nvram_get_int("upnp_enable") )
  {
    Var = (const char *)WebsGetVar("remove_proto");
    v1 = Var;
    if ( Var )
    {
      if ( *Var )
      {
        v2 = (const char *)WebsGetVar("remove_eport");
        if ( v2 )
        {
          if ( *v2 )
          {
            snprintf(s, 0x100u, "%3s %6s\n", v1, v2);
            f_write_string((int)"/etc/upnp/delete", (int)s, 0, 0);
            if ( !killall("miniupnpd", 12) )
              f_wait_notexists("/etc/upnp/delete", 5);
          }
        }
      }
    }
  }
  return sub_DF94();
}
