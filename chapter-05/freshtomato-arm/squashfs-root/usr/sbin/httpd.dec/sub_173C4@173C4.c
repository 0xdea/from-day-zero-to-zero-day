int sub_173C4()
{
  const char *Var; // r0
  const char *v1; // r0

  Var = (const char *)WebsGetVar("_what");
  if ( !Var )
    Var = "bwm";
  if ( !dword_30C9C )
    return sub_111F4();
  if ( !strcmp(Var, "bwm") )
    v1 = "/bwm-daily.asp";
  else
    v1 = "/ipt-daily.asp";
  return sub_C30C(v1);
}
