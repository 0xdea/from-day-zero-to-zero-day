const char *sub_1590C()
{
  int v0; // r0
  const char *result; // r0
  const char *v2; // r5
  bool v3; // zf
  char *v4; // r3
  _DWORD v5[4]; // [sp+4h] [bp-2Ch] BYREF
  char v6[28]; // [sp+14h] [bp-1Ch] BYREF

  sub_144B8(0);
  sub_111F4();
  v0 = wl_nvname("radio", dword_30CA0, 0);
  result = (const char *)nvram_get_int(v0);
  if ( result )
  {
    result = (const char *)WebsGetVar("enable");
    v2 = result;
    if ( result )
    {
      sub_13CC8(result);
      sleep(2u);
      snprintf(v6, 0xAu, "%d", dword_30CA0);
      v3 = atoi(v2) == 0;
      v4 = "on";
      v5[2] = v6;
      if ( v3 )
        v4 = "off";
      v5[1] = v4;
      v5[3] = 0;
      v5[0] = "radio";
      return (const char *)eval(v5, 0, 0, 0);
    }
  }
  return result;
}
