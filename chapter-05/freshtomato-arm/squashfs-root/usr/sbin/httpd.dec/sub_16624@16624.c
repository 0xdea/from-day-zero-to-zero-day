size_t sub_16624()
{
  FILE *v0; // r9
  int v1; // r7
  char *v2; // r0
  int v3; // r2
  char v5[1024]; // [sp+10h] [bp-668h] BYREF
  char v6[508]; // [sp+414h] [bp-264h] BYREF
  char v7[12]; // [sp+614h] [bp-64h] BYREF
  char v8[8]; // [sp+628h] [bp-50h] BYREF
  char v9[4]; // [sp+63Ch] [bp-3Ch] BYREF
  int v10; // [sp+64Ch] [bp-2Ch] BYREF

  sub_13954("\narplist = [");
  v0 = fopen("/proc/net/arp", "r");
  if ( v0 )
  {
    v1 = 32;
    while ( fgets(v6, 512, v0) )
    {
      if ( sscanf(v6, "%15s %*s 0x%X %17s %*s %16s", v9, &v10, v7, v8) == 4
        && strlen(v7) == 17
        && strcmp(v7, "00:00:00:00:00:00")
        && v10 )
      {
        if ( sub_10644(v9, v5) || !strcmp(v9, v5) )
          strcpy(v5, &s); // XXX
        v2 = strchr(v5, 46);
        if ( v2 )
          *v2 = 0;
        sub_165E0(v7);
        v3 = v1;
        v1 = 44;
        sub_13970(0, "%c['%s','%s','%s','%s']", v3, v9, v7, v8, v5);
      }
    }
    fclose(v0);
  }
  return sub_13954("];\n");
}
