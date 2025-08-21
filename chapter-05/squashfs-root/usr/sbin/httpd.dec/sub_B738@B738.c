bool __fastcall sub_B738(int a1, int a2, int a3, int a4)
{
  const char *v5; // r0

  wl_nvname("ifname");
  v5 = sub_B1C8();
  return wl_ioctl(v5, 262, a4, 184) == 0;
}
