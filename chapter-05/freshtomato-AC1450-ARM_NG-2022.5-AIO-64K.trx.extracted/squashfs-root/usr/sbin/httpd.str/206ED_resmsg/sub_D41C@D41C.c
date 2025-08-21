void __fastcall sub_D41C(int a1, const char **a2)
{
  const char *Var; // r0
  const char *v5; // r0
  char *v6; // r4

  Var = (const char *)WebsGetVar("resmsg");
  if ( !Var )
  {
    if ( a1 <= 0 )
      Var = &s;
    else
      Var = *a2;
  }
  v5 = (const char *)sub_E6BC(Var);
  v6 = (char *)v5;
  if ( v5 )
  {
    sub_13970(0, "\nresmsg='%s';\n", v5);
    free(v6);
  }
}
