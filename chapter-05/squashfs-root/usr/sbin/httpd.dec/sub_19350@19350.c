size_t sub_19350()
{
  const char *Var; // r0
  int v1; // r3
  char v3[40]; // [sp+0h] [bp-28h] BYREF

  Var = (const char *)WebsGetVar("mwan_num");
  if ( !Var )
    Var = "1";
  v1 = atoi(Var);
  if ( v1 == 1 )
    snprintf(v3, 0x20u, "wwansignal wan -stdout", 1);
  else
    snprintf(v3, 0x20u, "wwansignal wan%d -stdout", v1);
  sub_13954("\nwwanstatus = '");
  sub_13D58(v3, 1); // KKK
  return sub_13954("';");
}
