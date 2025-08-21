size_t sub_175E8()
{
  int v0; // r8
  const char *v1; // r11
  int v2; // r6
  FILE *v3; // r7
  int v4; // r4
  int v5; // r2
  const char *v7; // [sp+14h] [bp-194h]
  char v8[228]; // [sp+1Ch] [bp-18Ch] BYREF
  char v9[48]; // [sp+11Ch] [bp-8Ch] BYREF
  char dest[28]; // [sp+14Ch] [bp-5Ch] BYREF
  __int64 v11; // [sp+168h] [bp-40h] BYREF
  __int64 v12; // [sp+170h] [bp-38h] BYREF
  _WORD v13[22]; // [sp+17Ch] [bp-2Ch] BYREF

  v0 = 32;
  v1 = sub_170DC((int)"cstats_exclude");
  v7 = sub_170DC((int)"cstats_include");
  v2 = 0;
  strcpy(dest, "/proc/net/ipt_account/lanX");
  sub_13954("\n\niptmon={");
  do
  {
    v13[0] = 48;
    if ( v2 )
      LOBYTE(v13[0]) += v2;
    else
      strcpy((char *)v13, &s);
    snprintf(dest, 0x1Bu, "/proc/net/ipt_account/lan%s", (const char *)v13);
    v3 = fopen(dest, "r");
    if ( v3 )
    {
      v4 = 1;
      while ( fgets(v8, 256, v3) )
      {
        if ( sscanf(
               v8,
               "ip = %s bytes_src = %llu %*u %*u %*u %*u packets_src = %*u %*u %*u %*u %*u bytes_dst = %llu %*u %*u %*u %"
               "*u packets_dst = %*u %*u %*u %*u %*u time = %*u",
               v9,
               &v12,
               &v11) == 3 )
        {
          if ( !find_word(v1, v9)
            && (find_word(v7, v9) || v4 == 1 || nvram_get_int("cstats_all") && (v11 > 0 || v12 > 0)) )
          {
            v5 = v0;
            v0 = 44;
            sub_13970(0, "%c'%s':{rx:0x%llx,tx:0x%llx}", v5, v9, v11, v12);
          }
          v4 = 0;
        }
      }
      fclose(v3);
    }
    v2 = (unsigned __int8)(v2 + 1);
  }
  while ( v2 != 4 );
  return sub_13954("};\n");
}
