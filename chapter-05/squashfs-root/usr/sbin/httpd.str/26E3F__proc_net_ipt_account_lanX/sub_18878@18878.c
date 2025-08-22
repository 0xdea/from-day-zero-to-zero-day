int sub_18878()
{
  int v0; // r4
  int v1; // r7
  FILE *v2; // r6
  int v3; // r0
  int v4; // r3
  int v5; // r2
  int result; // r0
  char s[204]; // [sp+34h] [bp-19Ch] BYREF
  char v8[36]; // [sp+134h] [bp-9Ch] BYREF
  char dest[28]; // [sp+158h] [bp-78h] BYREF
  char v10[16]; // [sp+174h] [bp-5Ch] BYREF
  int v11; // [sp+184h] [bp-4Ch] BYREF
  int v12; // [sp+188h] [bp-48h] BYREF
  int v13; // [sp+18Ch] [bp-44h] BYREF
  int v14; // [sp+190h] [bp-40h] BYREF
  int v15; // [sp+194h] [bp-3Ch] BYREF
  int v16; // [sp+198h] [bp-38h] BYREF
  int v17; // [sp+19Ch] [bp-34h] BYREF
  int v18; // [sp+1A0h] [bp-30h] BYREF
  _WORD v19[22]; // [sp+1A4h] [bp-2Ch] BYREF

  v0 = 0;
  v1 = 32;
  sub_180E0((int)"cstats_exclude");
  sub_18494();
  strcpy(dest, "/proc/net/ipt_account/lanX");
  sub_13954("\n\niptraffic=[");
  do
  {
    v19[0] = 48;
    if ( v0 )
      LOBYTE(v19[0]) += v0;
    else
      strcpy((char *)v19, &::s);
    snprintf(dest, 0x1Bu, "/proc/net/ipt_account/lan%s", (const char *)v19);
    v2 = fopen(dest, "r");
    if ( v2 )
    {
      fgets(s, 256, v2);
      while ( fgets(s, 256, v2) )
      {
        if ( sscanf(
               s,
               "ip = %s bytes_src = %lu %*u %*u %*u %*u packets_src = %*u %lu %lu %lu %*u bytes_dst = %lu %*u %*u %*u %*u"
               " packets_dst = %*u %lu %lu %lu %*u time = %*u",
               v10,
               &v18,
               &v16,
               &v14,
               &v12,
               &v17,
               &v15,
               &v13,
               &v11) == 9
          && !find_word()
          && (v18 || v17) )
        {
          strncpy(v8, v10, 0x10u);
          v3 = sub_182C0(dword_30B38, (int)v8, (int (__fastcall *)(int, int))off_30B3C);
          if ( v3 )
            v4 = *(_DWORD *)(v3 + 16);
          else
            v4 = 0;
          if ( v3 )
            v3 = *(_DWORD *)(v3 + 20);
          v5 = v1;
          v1 = 44;
          sub_13970(
            0,
            "%c['%s', %lu, %lu, %lu, %lu, %lu, %lu, %lu, %lu, %lu, %lu]",
            v5,
            v10,
            v17,
            v18,
            v15,
            v16,
            v13,
            v14,
            v11,
            v12,
            v4,
            v3);
        }
      }
      fclose(v2);
    }
    v0 = (unsigned __int8)(v0 + 1);
  }
  while ( v0 != 4 );
  sub_13954("];\n");
  result = sub_183D0(dword_30B38, (int (__fastcall *)(int, int))j_free, 0);
  dword_30B38 = 0;
  off_30B3C = sub_18100;
  return result;
}
