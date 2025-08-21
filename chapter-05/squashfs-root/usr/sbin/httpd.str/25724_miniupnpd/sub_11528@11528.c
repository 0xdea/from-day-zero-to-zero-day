int sub_11528()
{
  int result; // r0

  result = nvram_get_int("upnp_enable");
  if ( result )
  {
    f_write_string("/etc/upnp/info", &s, 0, 0);
    if ( !killall("miniupnpd", 12) )
      f_wait_notexists("/etc/upnp/info", 5);
    sub_13954("\nmupnp_data = '");
    sub_13D1C("/etc/upnp/data.info", 1);
    return sub_13954("';\n");
  }
  return result;
}
