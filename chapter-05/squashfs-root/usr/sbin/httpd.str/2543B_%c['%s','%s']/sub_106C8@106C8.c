int sub_106C8()
{
  int v0; // r8
  char *v1; // r0
  int v2; // r2
  char *v3; // r5
  char *v4; // r0
  const char *v5; // r7
  char v7[1016]; // [sp+8h] [bp-428h] BYREF
  char *Var; // [sp+40Ch] [bp-24h] BYREF

  sub_13954("\nresolve_data = [\n");
  Var = (char *)WebsGetVar("ip");
  if ( Var )
  {
    v0 = 32;
    while ( 1 )
    {
      v4 = strsep(&Var, ",");
      v5 = v4;
      if ( !v4 )
        break;
      if ( !sub_10644(v4, v7) )
      {
        v1 = sub_E6BC(v7);
        v2 = v0;
        v3 = v1;
        v0 = 44;
        sub_13970(0, "%c['%s','%s']", v2, v5, v1);
        free(v3);
      }
    }
  }
  return sub_13954("];\n");
}
