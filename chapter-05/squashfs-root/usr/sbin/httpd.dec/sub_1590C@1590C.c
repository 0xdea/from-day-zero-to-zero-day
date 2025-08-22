const char *__fastcall sub_1590C(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  const char *result; // r0
  const char *v6; // r5
  bool v7; // zf
  char *v8; // r3
  _DWORD v9[4]; // [sp+4h] [bp-2Ch] BYREF
  char v10[28]; // [sp+14h] [bp-1Ch] BYREF

  sub_144B8(0, a2, a3, a4);
  sub_111F4();
  v4 = wl_nvname("radio", dword_30CA0, 0);
  result = (const char *)nvram_get_int(v4);
  if ( result )
  {
    result = (const char *)WebsGetVar("enable");
    v6 = result;
    if ( result )
    {
      sub_13CC8();
      sleep(2u);
      snprintf(v10, 0xAu, "%d", dword_30CA0);
      v7 = atoi(v6) == 0;
      v8 = "on";
      v9[2] = v10;
      if ( v7 )
        v8 = "off";
      v9[1] = v8;
      v9[3] = 0;
      v9[0] = "radio";
      return (const char *)eval(v9, 0, 0, 0);
    }
  }
  return result;
}
