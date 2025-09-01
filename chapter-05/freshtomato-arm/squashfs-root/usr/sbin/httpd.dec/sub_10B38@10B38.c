int sub_10B38()
{
  void *Var; // r1
  void *v1; // r5
  void *v2; // r0
  _DWORD v4[5]; // [sp+0h] [bp-28h] BYREF
  char v5; // [sp+14h] [bp-14h] BYREF

  Var = WebsGetVar("remove");
  if ( Var )
  {
    f_write_string((int)"/var/tmp/dhcp/delete", (int)Var, 2, 438);
    killall("dnsmasq", 12);
    f_wait_notexists("/var/tmp/dhcp/delete", 5);
  }
  v1 = WebsGetVar("wl");
  if ( v1 )
  {
    v2 = WebsGetVar("mac");
    if ( v2 )
    {
      v4[4] = v2;
      v4[0] = "wl";
      v4[1] = "-i";
      v4[2] = v1;
      v4[3] = "deauthenticate";
      eval(v4, 0, 0, &v5);
    }
  }
  return sub_13954("{}");
}
