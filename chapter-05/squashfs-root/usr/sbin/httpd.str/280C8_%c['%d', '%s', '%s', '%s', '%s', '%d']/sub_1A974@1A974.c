int sub_1A974()
{
  FILE *v0; // r9
  int v1; // r7
  int v2; // r2
  char s[128]; // [sp+18h] [bp-140h] BYREF
  char v5[48]; // [sp+98h] [bp-C0h] BYREF
  char v6[48]; // [sp+C8h] [bp-90h] BYREF
  char v7[36]; // [sp+F8h] [bp-60h] BYREF
  char v8[12]; // [sp+11Ch] [bp-3Ch] BYREF
  int v9; // [sp+128h] [bp-30h] BYREF
  int v10; // [sp+12Ch] [bp-2Ch] BYREF

  sub_13954("\n\npptpd_online=[");
  v0 = fopen("/etc/vpn/pptpd_connected", "r");
  if ( v0 )
  {
    v1 = 32;
    while ( fgets(s, 128, v0) )
    {
      if ( sscanf(s, "%d %s %s %s %s %d", &v10, v8, v6, v5, v7, &v9) == 6 )
      {
        v2 = v1;
        v1 = 44;
        sub_13970(0, "%c['%d', '%s', '%s', '%s', '%s', '%d']", v2, v10, v8, v6, v5, v7, v9);
      }
    }
    fclose(v0);
  }
  return sub_13954("];\n");
}
