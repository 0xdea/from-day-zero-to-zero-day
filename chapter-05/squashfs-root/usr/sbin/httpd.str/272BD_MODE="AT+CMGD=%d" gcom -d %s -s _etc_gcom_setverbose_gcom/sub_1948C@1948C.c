const char *sub_1948C()
{
  const char *Var; // r0
  const char *v1; // r5
  const char *v2; // r0
  char *v3; // r0
  int v4; // r0
  int v5; // r3
  int v6; // r5
  const char *result; // r0
  char v8[152]; // [sp+8h] [bp-B0h] BYREF
  char s[24]; // [sp+A0h] [bp-18h] BYREF

  Var = (const char *)WebsGetVar("sms_num");
  if ( Var )
    v1 = Var;
  else
    v1 = &::s;
  v2 = (const char *)WebsGetVar("mwan_num");
  if ( !v2 )
    v2 = &::s;
  if ( !*v1 )
  {
    v3 = "\nwwansms_error = 'sms_num is empty!'";
    return (const char *)sub_13954(v3);
  }
  if ( !*v2 )
  {
    v3 = "\nwwansms_error = 'mwan_num is empty!'";
    return (const char *)sub_13954(v3);
  }
  v4 = atoi(v2);
  if ( v4 == 1 )
    v5 = 0;
  else
    v5 = (unsigned __int8)v4;
  if ( v4 != 1 )
    v5 += 48;
  snprintf(s, 5u, "wan%c", v5);
  v6 = atoi(v1);
  result = sub_1923C(s);
  if ( result )
  {
    snprintf(v8, 0x96u, "MODE=\"AT+CMGD=%d\" gcom -d %s -s /etc/gcom/setverbose.gcom", v6, result);
    sub_13954("\n");
    sub_13954("\nwwansms_delete = '");
    sub_13D58(v8);
    v3 = "';";
    return (const char *)sub_13954(v3);
  }
  return result;
}
