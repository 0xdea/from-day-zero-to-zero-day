int sub_E00C()
{
  const char *Var; // r0
  const char *v1; // r0
  signed int v2; // r0

  Var = (const char *)WebsGetVar("_service");
  if ( !Var )
    Var = &s;
  sub_DF08(Var);
  v1 = (const char *)WebsGetVar("_sleep");
  if ( !v1 )
    v1 = "2";
  v2 = atoi(v1);
  if ( v2 <= 0 )
    v2 = 2;
  sleep(v2);
  return sub_DF94();
}
