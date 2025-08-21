int __fastcall sub_118AC(FILE *a1)
{
  const char *v2; // r0
  int v3; // r0
  int v4; // r4
  size_t v5; // r4
  int result; // r0
  struct sysinfo v7; // [sp+0h] [bp-50h] BYREF

  v2 = (const char *)nvram_get("ct_max");
  if ( v2 && (v3 = atoi(v2), (v4 = v3) != 0) )
  {
    if ( v3 >= 1024 )
    {
      if ( v3 >= 10240 )
        v4 = 10240;
    }
    else
    {
      v4 = 1024;
    }
  }
  else
  {
    v4 = 2048;
  }
  v5 = 170 * v4;
  result = sysinfo(&v7);
  if ( v7.freeram >= v5 + 0x10000 )
    return setvbuf(a1, 0, 0, v5);
  v5 = v7.freeram - 0x10000;
  if ( (signed int)(v7.freeram - 0x10000) > 4096 )
    return setvbuf(a1, 0, 0, v5);
  return result;
}
