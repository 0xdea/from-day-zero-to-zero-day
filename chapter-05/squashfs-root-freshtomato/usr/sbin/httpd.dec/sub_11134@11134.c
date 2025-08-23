int sub_11134()
{
  unsigned __int8 *Var; // r6
  int result; // r0
  const char *v2; // r0
  int v3; // r5
  const char *v4; // r0
  int v5; // r0
  char v6[272]; // [sp+8h] [bp-110h] BYREF

  Var = (unsigned __int8 *)WebsGetVar("addr");
  result = sub_10FE8(Var);
  if ( result )
  {
    killall("ping", 15);
    sub_13954("\npingdata = '");
    v2 = (const char *)WebsGetVar("count");
    if ( !v2 )
      v2 = "0";
    v3 = atoi(v2);
    v4 = (const char *)WebsGetVar("size");
    if ( !v4 )
      v4 = "0";
    v5 = atoi(v4);
    snprintf(v6, 0x100u, "ping -c %d -s %d %s", v3, v5, (const char *)Var);
    sub_13D58(v6); // VULN? cmd inj in addr via popen()
    return sub_13954("';");
  }
  return result;
}
