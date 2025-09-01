int sub_D764()
{
  const char *Var; // r0
  const char *v1; // r4
  const char *v2; // r0
  const char *v3; // r3
  const char *v5; // r0

  Var = (const char *)WebsGetVar("nojs");
  if ( !Var )
    Var = "0";
  if ( atoi(Var) )
  {
    v1 = (const char *)WebsGetVar("command");
    v2 = (const char *)WebsGetVar("working_dir");
    v3 = "/www";
    if ( v2 )
      v3 = v2;
    return sub_D564(0, v1, 0, v3);
  }
  else
  {
    sub_13954("\ncmdresult = '");
    v5 = (const char *)WebsGetVar("command");
    sub_D564(0, v5, 0, "/www");
    return sub_13954("';");
  }
}
