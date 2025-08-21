FILE *sub_10884()
{
  FILE *v0; // r5
  FILE *result; // r0
  int v2; // r6
  int v3; // r2
  char s[512]; // [sp+24h] [bp-24Ch] BYREF
  _BYTE v5[4]; // [sp+224h] [bp-4Ch] BYREF
  _BYTE v6[4]; // [sp+228h] [bp-48h] BYREF
  _BYTE v7[4]; // [sp+22Ch] [bp-44h] BYREF
  _BYTE v8[4]; // [sp+230h] [bp-40h] BYREF
  _BYTE v9[4]; // [sp+234h] [bp-3Ch] BYREF
  _BYTE v10[4]; // [sp+238h] [bp-38h] BYREF
  const char *v11; // [sp+23Ch] [bp-34h] BYREF
  const char *v12; // [sp+240h] [bp-30h] BYREF
  const char *v13; // [sp+244h] [bp-2Ch] BYREF

  v0 = fopen("/etc/dnscrypt-resolvers-alt.csv", "r");
  if ( v0 || (result = fopen("/etc/dnscrypt-resolvers.csv", "r"), (v0 = result) != 0) )
  {
    v2 = 32;
    fgets(s, 512, v0);
    while ( fgets(s, 512, v0) )
    {
      v11 = 0;
      v12 = 0;
      v13 = 0;
      if ( vstrsep(s, ",", &v13, v10, v9, v8, v7, v6, v5, &v12, &v11, 0) > 8 && *v13 && *v12 )
      {
        if ( *v11 )
        {
          v3 = v2;
          v2 = 44;
          sub_13970(0, "%c['%s','%s (DNSSEC:%s NOLOGS:%s)']", v3, v13, v13, v12, v11);
        }
      }
    }
    return (FILE *)fclose(v0);
  }
  return result;
}
