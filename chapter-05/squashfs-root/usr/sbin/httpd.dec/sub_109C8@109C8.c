int __fastcall sub_109C8(int a1, const char **a2)
{
  const char *v2; // r1
  int result; // r0
  int v4; // r4
  int v5; // r1
  char *v6; // r0
  char v7[256]; // [sp+0h] [bp-178h] BYREF
  sysinfo info; // [sp+100h] [bp-78h] BYREF
  char v9[32]; // [sp+140h] [bp-38h] BYREF
  char dest[24]; // [sp+160h] [bp-18h] BYREF

  strcpy(dest, "wanXX");
  if ( a1 <= 0 )
    v2 = "wan";
  else
    v2 = *a2;
  strcpy(dest, v2); // XXX
  memset(v7, 0, sizeof(v7));
  snprintf(v7, 0x100u, "/var/lib/misc/dhcpc-%s.expires", dest);
  result = using_dhcpc(dest);
  if ( result )
  {
    if ( f_read_string(v7, v9, 32) <= 0 || (v4 = atol(v9), v4 <= 0) )
    {
      v5 = 0;
    }
    else
    {
      sysinfo(&info);
      v5 = v4 - info.uptime;
    }
    v6 = sub_E81C(v9, v5);
    return sub_13954(v6);
  }
  return result;
}
