FILE *sub_10884()
{
  FILE *v0; // r5
  FILE *result; // r0
  int v2; // r6
  int v3; // r2
  char s[512]; // [sp+24h] [bp-24Ch] BYREF
  const char *v5; // [sp+23Ch] [bp-34h]
  const char *v6; // [sp+240h] [bp-30h]
  const char *v7; // [sp+244h] [bp-2Ch]

  v0 = fopen("/etc/dnscrypt-resolvers-alt.csv", "r");
  if ( v0 || (result = fopen("/etc/dnscrypt-resolvers.csv", "r"), (v0 = result) != 0) )
  {
    v2 = 32;
    fgets(s, 512, v0);
    while ( fgets(s, 512, v0) )
    {
      v5 = 0;
      v6 = 0;
      v7 = 0;
      if ( vstrsep() > 8 && *v7 && *v6 )
      {
        if ( *v5 )
        {
          v3 = v2;
          v2 = 44;
          sub_13970(0, "%c['%s','%s (DNSSEC:%s NOLOGS:%s)']", v3, v7, v7, v6, v5);
        }
      }
    }
    return (FILE *)fclose(v0);
  }
  return result;
}
