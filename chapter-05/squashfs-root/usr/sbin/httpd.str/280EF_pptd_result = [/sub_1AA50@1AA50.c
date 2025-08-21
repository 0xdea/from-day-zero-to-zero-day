int sub_1AA50()
{
  const char *Var; // r5
  int i; // r4
  __pid_t v2; // r0

  sub_13954("\npptd_result = [\n");
  Var = (const char *)WebsGetVar("disconnect");
  if ( Var )
  {
    for ( i = 10; ; --i )
    {
      v2 = atoi(Var);
      if ( kill(v2, 15) || i == 1 )
        break;
      sleep(1u);
    }
  }
  return sub_13954("];\n");
}
