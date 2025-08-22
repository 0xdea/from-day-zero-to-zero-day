int sub_17430()
{
  FILE *v0; // r0
  FILE *v1; // r5
  int v2; // r8
  int v3; // r6
  char *v4; // r10
  char *v5; // r0
  const char *v6; // r4
  int v7; // r2
  char s[240]; // [sp+10h] [bp-158h] BYREF
  char v10[32]; // [sp+110h] [bp-58h] BYREF
  __int64 v11; // [sp+130h] [bp-38h] BYREF
  __int64 v12; // [sp+138h] [bp-30h] BYREF

  sub_170DC("rstats_exclude");
  sub_13954("\n\nnetdev={");
  v0 = fopen("/proc/net/dev", "r");
  v1 = v0;
  if ( v0 )
  {
    fgets(s, 256, v0);
    v2 = 32;
    fgets(s, 256, v1);
    v3 = socket(2, 3, 255);
    while ( fgets(s, 256, v1) )
    {
      v4 = strchr(s, 58);
      if ( v4 )
      {
        *v4 = 0;
        v5 = strrchr(s, 32);
        v6 = v5 ? v5 + 1 : s;
        if ( strcmp(v6, "lo") )
        {
          if ( !find_word() )
          {
            if ( v3 < 0 || (strcpy(v10, v6), !ioctl(v3, 0x8913u, v10)) && (v10[16] & 1) != 0 )
            {
              if ( sscanf(v4 + 1, "%llu%*u%*u%*u%*u%*u%*u%*u%llu", &v12, &v11) == 2 )
              {
                v7 = v2;
                v2 = 44;
                sub_13970(0, "%c'%s':{rx:0x%llx,tx:0x%llx}", v7, v6, v12, v11);
              }
            }
          }
        }
      }
    }
    if ( v3 >= 0 )
      close(v3);
    fclose(v1);
  }
  return sub_13954("};\n");
}
