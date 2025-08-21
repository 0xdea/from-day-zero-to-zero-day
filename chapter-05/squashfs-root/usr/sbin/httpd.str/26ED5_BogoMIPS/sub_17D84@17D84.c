bool __fastcall sub_17D84(char *a1, char *a2, char *a3, char *a4, char *a5)
{
  int v7; // r4
  FILE *v8; // r10
  char *v9; // r0
  FILE *v10; // r8
  char *v11; // r0
  char v15[1012]; // [sp+Ch] [bp+0h] BYREF
  char v16[500]; // [sp+40Ch] [bp+400h] BYREF
  char v17[116]; // [sp+60Ch] [bp+600h] BYREF
  char *src[2]; // [sp+68Ch] [bp+680h] BYREF

  v7 = 0;
  v8 = fopen("/proc/cpuinfo", "r");
  while ( fgets(v15, 1024, v8) )
  {
    src[0] = v15;
    v9 = strsep(src, ":");
    strcpy(v17, v9);
    if ( src[0] )
    {
      strcpy(v16, src[0]);
      sub_17D14(v16);
      if ( !sub_17D5C((int)v17, "Processor") )
      {
        ++v7;
        strcpy(a1, v16);
      }
      if ( !sub_17D5C((int)v17, "cpu model") )
      {
        ++v7;
        strcpy(a2, v16);
      }
      if ( !sub_17D5C((int)v17, "BogoMIPS") )
      {
        ++v7;
        strcpy(a3, v16);
      }
    }
  }
  system("/usr/sbin/sysinfo-helper");
  v10 = fopen("/tmp/sysinfo-helper", "r");
  while ( fgets(v15, 1024, v10) )
  {
    src[0] = v15;
    v11 = strsep(src, ":");
    strcpy(v17, v11);
    if ( src[0] )
    {
      strcpy(v16, src[0]);
      sub_17D14(v16);
      if ( !sub_17D5C((int)v17, "cpu MHz") )
      {
        ++v7;
        strcpy(a4, v16);
      }
      if ( !sub_17D5C((int)v17, "cpu Temp") )
      {
        ++v7;
        strcpy(a5, v16);
      }
    }
  }
  fclose(v10);
  return v7 == 4;
}
