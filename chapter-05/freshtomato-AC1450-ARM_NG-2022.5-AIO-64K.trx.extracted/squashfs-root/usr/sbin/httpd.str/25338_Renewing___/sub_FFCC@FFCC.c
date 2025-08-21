int __fastcall sub_FFCC(int a1, const char **a2)
{
  const char *v2; // r1
  const char *v3; // r0
  char v5[64]; // [sp+0h] [bp-98h] BYREF
  char v6[64]; // [sp+40h] [bp-58h] BYREF
  char dest[24]; // [sp+80h] [bp-18h] BYREF

  strcpy(dest, "wanXX");
  if ( a1 <= 0 )
    v2 = "wan";
  else
    v2 = *a2;
  strcpy(dest, v2);
  memset(v6, 0, sizeof(v6));
  snprintf(v6, 0x40u, "/var/lib/misc/%s_dhcpc.renewing", dest);
  memset(v5, 0, sizeof(v5));
  snprintf(v5, 0x40u, "/var/lib/misc/%s.connecting", dest);
  if ( using_dhcpc(dest) && f_exists(v6) )
  {
    v3 = "Renewing...";
  }
  else if ( check_wanup(dest) )
  {
    v3 = "Connected";
  }
  else if ( f_exists(v5) )
  {
    v3 = "Connecting...";
  }
  else
  {
    v3 = "Disconnected";
  }
  return sub_13954(v3);
}
