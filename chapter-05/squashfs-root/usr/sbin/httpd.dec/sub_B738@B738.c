bool __fastcall sub_B738(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  const char *v6; // r0

  v5 = wl_nvname("ifname", a2, a3);
  v6 = sub_B1C8(v5);
  return wl_ioctl(v6, 262, a4, 184) == 0;
}
