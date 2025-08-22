int __fastcall sub_14550(int a1)
{
  int v2; // r0
  int v3; // r0
  int v5; // r0
  char s[32]; // [sp+4h] [bp-34h] BYREF
  int v7; // [sp+24h] [bp-14h] BYREF

  v2 = wl_nvname("ifname", a1, 0);
  v3 = sub_13E24(v2);
  if ( wl_ioctl(v3, 135, &v7, 4) )
    return -99;
  snprintf(s, 0x20u, "%d", v7);
  v5 = wl_nvname("tnoise", a1, 0);
  nvram_set(v5, (int)s);
  return v7;
}
