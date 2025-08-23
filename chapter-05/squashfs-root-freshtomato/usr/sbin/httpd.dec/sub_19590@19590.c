int __fastcall sub_19590(int a1, size_t a2, const char *a3)
{
  void *v4; // r4
  const char *v5; // r6
  void *v6; // r0
  size_t v7; // r7
  size_t v8; // r0
  size_t v9; // r7
  size_t v10; // r7
  int v11; // r0
  const char *v12; // r3
  int v13; // r0
  size_t size; // [sp+Ch] [bp-11Ch] BYREF
  char v16[280]; // [sp+10h] [bp-118h] BYREF

  size = a2;
  v16[0] = 0;
  v4 = (void *)sub_C358(&size);
  if ( v4 )
  {
    if ( size - 64 <= (unsigned int)&unk_1FFC0 )
    {
      v6 = malloc(size);
      v4 = v6;
      if ( v6 )
      {
        v7 = sub_13B54(v6, size);
        size -= v7;
        v8 = strlen(a3);
        v9 = v7 - v8;
        syslog(6, "boundary %s, len %d", a3, v8);
        v10 = v9 - 6;
        v11 = nvram_get("NC_DocumentRoot");
        v12 = "/tmp/splashd";
        if ( v11 )
          v12 = (const char *)v11;
        snprintf(v16, 0xFFu, "%s/splash.html", v12);
        if ( f_write(v16, v4, v10, 0, 384) == v10 )
        {
          v5 = 0;
          v13 = nvram_set_file("NC_SplashFile", v16, 0x2000);
          nvram_commit(v13);
          dword_30C9C = 1;
        }
        else
        {
          v5 = "Error writing temporary file";
        }
      }
      else
      {
        v5 = "Not enough memory";
      }
    }
    else
    {
      v5 = "Invalid file";
      v4 = 0;
    }
  }
  else
  {
    v5 = "Error reading file";
  }
  free(v4);
  if ( v5 )
    sub_E088(v5);
  return sub_13BF8(size);
}
