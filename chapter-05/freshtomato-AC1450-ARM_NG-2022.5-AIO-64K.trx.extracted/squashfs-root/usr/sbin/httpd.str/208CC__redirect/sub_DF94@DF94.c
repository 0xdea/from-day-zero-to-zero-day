int sub_DF94()
{
  const char *Var; // r0
  const char *v2; // r0

  Var = (const char *)WebsGetVar("_ajax");
  if ( !Var )
    Var = &s;
  if ( atoi(Var) )
  {
    sub_B928(200, 0, "text/html; charset=utf-8", 0);
    return sub_13954("OK");
  }
  else
  {
    v2 = (const char *)WebsGetVar("_redirect");
    if ( !v2 )
      v2 = "/";
    return sub_C30C(v2);
  }
}
