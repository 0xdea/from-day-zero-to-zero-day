int sub_14550()
{
  int v0; // r0
  const char *v1; // r0
  int v3; // r0
  char s[32]; // [sp+4h] [bp-34h] BYREF
  int v5; // [sp+24h] [bp-14h] BYREF

  v0 = wl_nvname("ifname");
  v1 = sub_13E24(v0);
  if ( wl_ioctl(v1, 135, &v5, 4) )
    return -99;
  snprintf(s, 0x20u, "%d", v5);
  v3 = wl_nvname("tnoise");
  nvram_set(v3, s);
  return v5;
}
