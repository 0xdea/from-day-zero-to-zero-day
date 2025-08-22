const char *sub_193DC()
{
  const char *Var; // r0
  int v1; // r0
  int v2; // r3
  const char *result; // r0
  char v4[64]; // [sp+0h] [bp-50h] BYREF
  char v5[16]; // [sp+40h] [bp-10h] BYREF

  Var = (const char *)WebsGetVar("mwan_num");
  if ( !Var )
    Var = "1";
  v1 = atoi(Var);
  if ( v1 == 1 )
    v2 = 0;
  else
    v2 = (unsigned __int8)v1;
  if ( v1 != 1 )
    v2 += 48;
  snprintf(v5, 8u, "wan%c", v2);
  result = sub_1923C(v5);
  if ( result )
  {
    snprintf(v4, 0x40u, "gcom -d %s -s /etc/gcom/getsmses.gcom | pdureader", result);
    sub_13954("\n");
    sub_13954("\nwwansms = '");
    sub_13D58(v4, 1);
    return (const char *)sub_13954("';");
  }
  return result;
}
