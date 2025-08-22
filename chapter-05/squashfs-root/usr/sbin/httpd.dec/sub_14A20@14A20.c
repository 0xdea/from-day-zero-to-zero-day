int __fastcall sub_14A20(int a1, int a2, int a3, int *a4)
{
  int v7; // r0
  const char *v8; // r6
  int v9; // r8
  int radio; // r0
  int v11; // r8
  _DWORD v13[17]; // [sp+0h] [bp-68h] BYREF
  int v14; // [sp+44h] [bp-24h] BYREF

  v14 = 40;
  if ( a1 > 2 || *a4 >= 0 && *a4 != a2 )
    return 0;
  v7 = wl_nvname("ifname", a2, 0);
  v8 = sub_13E24(v7);
  memset(v13, 0, sizeof(v13));
  v9 = 3 * a1;
  memset(&v13[11], 255, 16);
  v13[9] = -1;
  LOWORD(v13[10]) = -1;
  if ( wl_ioctl(v8, 117, &a4[3 * a1 + 2], 4) < 0 )
    return 0;
  HIBYTE(v13[10]) = a4[v9 + 2] != 0;
  wl_ioctl(v8, 184, &a4[v9 + 4], 4);
  if ( a4[v9 + 4] < v14 )
    wl_ioctl(v8, 185, &v14, 4);
  radio = get_radio(a2);
  a4[3 * a1 + 3] = radio;
  if ( !radio )
    set_radio(1, a2);
  v11 = 6;
  while ( wl_ioctl(v8, 50, v13, 64) )
  {
    if ( !--v11 )
    {
      sub_149C8((int)v8, a2, a4[3 * a1 + 3], a4[3 * a1 + 4]);
      return 0;
    }
    usleep(0x7A120u);
  }
  return 1;
}
