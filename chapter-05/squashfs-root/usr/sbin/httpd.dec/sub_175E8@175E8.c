size_t sub_175E8()
{
  int v0; // r8
  int v1; // r6
  FILE *v2; // r7
  int v3; // r4
  int v4; // r2
  char v6[228]; // [sp+1Ch] [bp-18Ch] BYREF
  char v7[48]; // [sp+11Ch] [bp-8Ch] BYREF
  char dest[28]; // [sp+14Ch] [bp-5Ch] BYREF
  __int64 v9; // [sp+168h] [bp-40h] BYREF
  __int64 v10; // [sp+170h] [bp-38h] BYREF
  _WORD v11[22]; // [sp+17Ch] [bp-2Ch] BYREF

  v0 = 32;
  sub_170DC((int)"cstats_exclude");
  sub_170DC((int)"cstats_include");
  v1 = 0;
  strcpy(dest, "/proc/net/ipt_account/lanX");
  sub_13954("\n\niptmon={");
  do
  {
    v11[0] = 48;
    if ( v1 )
      LOBYTE(v11[0]) += v1;
    else
      strcpy((char *)v11, &s); // XXX
    snprintf(dest, 0x1Bu, "/proc/net/ipt_account/lan%s", (const char *)v11);
    v2 = fopen(dest, "r");
    if ( v2 )
    {
      v3 = 1;
      while ( fgets(v6, 256, v2) )
      {
        if ( sscanf(
               v6,
               "ip = %s bytes_src = %llu %*u %*u %*u %*u packets_src = %*u %*u %*u %*u %*u bytes_dst = %llu %*u %*u %*u %"
               "*u packets_dst = %*u %*u %*u %*u %*u time = %*u",
               v7,
               &v10,
               &v9) == 3 ) // XXX
        {
          if ( !find_word() && (find_word() || v3 == 1 || nvram_get_int("cstats_all") && (v9 > 0 || v10 > 0)) )
          {
            v4 = v0;
            v0 = 44;
            sub_13970(0, "%c'%s':{rx:0x%llx,tx:0x%llx}", v4, v7, v9, v10);
          }
          v3 = 0;
        }
      }
      fclose(v2);
    }
    v1 = (unsigned __int8)(v1 + 1);
  }
  while ( v1 != 4 );
  return sub_13954("};\n");
}
