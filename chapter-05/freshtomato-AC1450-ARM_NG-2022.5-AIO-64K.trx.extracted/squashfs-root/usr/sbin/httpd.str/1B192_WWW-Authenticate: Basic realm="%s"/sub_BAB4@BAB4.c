int sub_BAB4()
{
  const char *v0; // r0
  const char *v1; // r5
  char v3[144]; // [sp+0h] [bp-90h] BYREF

  v0 = (const char *)nvram_get("router_name");
  v1 = v0;
  if ( v0 && *v0 )
  {
    if ( strlen(v0) > 0x40 )
      v1 = "unknown";
  }
  else
  {
    v1 = "unknown";
  }
  memset(v3, 0, 0x80u);
  snprintf(v3, 0x80u, "WWW-Authenticate: Basic realm=\"%s\"", v1);
  return sub_BA5C(401, v3, 0);
}
