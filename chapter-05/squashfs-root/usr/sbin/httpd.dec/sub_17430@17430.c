size_t sub_17430()
{
  const char *v0; // r11
  FILE *v1; // r0
  FILE *v2; // r5
  int v3; // r8
  int v4; // r6
  char *v5; // r10
  char *v6; // r0
  const char *v7; // r4
  int v8; // r2
  char s[240]; // [sp+10h] [bp-158h] BYREF
  char v11[32]; // [sp+110h] [bp-58h] BYREF
  __int64 v12; // [sp+130h] [bp-38h] BYREF
  __int64 v13; // [sp+138h] [bp-30h] BYREF

  v0 = sub_170DC((int)"rstats_exclude");
  sub_13954("\n\nnetdev={");
  v1 = fopen("/proc/net/dev", "r");
  v2 = v1;
  if ( v1 )
  {
    fgets(s, 256, v1);
    v3 = 32;
    fgets(s, 256, v2);
    v4 = socket(2, 3, 255);
    while ( fgets(s, 256, v2) )
    {
      v5 = strchr(s, 58);
      if ( v5 )
      {
        *v5 = 0;
        v6 = strrchr(s, 32);
        v7 = v6 ? v6 + 1 : s;
        if ( strcmp(v7, "lo") )
        {
          if ( !find_word(v0, v7) )
          {
            if ( v4 < 0 || (strcpy(v11, v7), !ioctl(v4, 0x8913u, v11)) && (v11[16] & 1) != 0 ) // XXX
            {
              if ( sscanf(v5 + 1, "%llu%*u%*u%*u%*u%*u%*u%*u%llu", &v13, &v12) == 2 )
              {
                v8 = v3;
                v3 = 44;
                sub_13970(0, "%c'%s':{rx:0x%llx,tx:0x%llx}", v8, v7, v13, v12);
              }
            }
          }
        }
      }
    }
    if ( v4 >= 0 )
      close(v4);
    fclose(v2);
  }
  return sub_13954("};\n");
}
