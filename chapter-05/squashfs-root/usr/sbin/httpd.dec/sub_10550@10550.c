int __fastcall sub_10550(int a1, const char **a2)
{
  const char *v2; // r1
  _DWORD *dns; // r6
  int v4; // r4
  _DWORD *v5; // r9
  char *v6; // r11
  const char *v7; // r10
  char *v8; // r0
  char v10[128]; // [sp+8h] [bp-B0h] BYREF
  char dest[48]; // [sp+88h] [bp-30h] BYREF

  strcpy(dest, "wanXX");
  if ( a1 <= 0 )
    v2 = "wan";
  else
    v2 = *a2;
  strcpy(dest, v2);
  dns = (_DWORD *)get_dns(dest);
  v4 = 0;
  strcpy(v10, "[");
  while ( v4 < *dns )
  {
    v5 = &dns[2 * v4];
    v6 = &v10[strlen(v10)];
    if ( v4 )
      v7 = ",";
    else
      v7 = &s;
    ++v4;
    v8 = inet_ntoa((struct in_addr)v5[1]);
    snprintf(v6, 0x80u, "%s'%s:%u'", v7, v8, *((unsigned __int16 *)v5 + 4));
  }
  strcat(v10, "]");
  return sub_13954(v10);
}
