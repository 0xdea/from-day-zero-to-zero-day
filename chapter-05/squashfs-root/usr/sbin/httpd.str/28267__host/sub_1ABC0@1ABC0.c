const char *sub_1ABC0()
{
  const char *Var; // r0
  int v1; // r4
  const char *v2; // r0
  int v3; // r7
  const char *v4; // r0
  int v5; // r6
  const char *v6; // r0
  unsigned __int64 v7; // r8
  const char *result; // r0
  const char *v9; // r5
  const char *v10; // r0
  const char *v11; // r7
  const char *v12; // r6
  FILE *v13; // r0
  char command[256]; // [sp+18h] [bp-1A0h] BYREF
  char s; // [sp+118h] [bp-A0h] BYREF

  unlink("/tmp/iperf_interval");
  unlink("/tmp/iperf_log");
  Var = (const char *)WebsGetVar("_port");
  if ( !Var )
    Var = "5201";
  v1 = atoi(Var);
  v2 = (const char *)WebsGetVar("_udpProto");
  if ( !v2 )
    v2 = "0";
  v3 = atoi(v2);
  v4 = (const char *)WebsGetVar("_limitMode");
  if ( !v4 )
    v4 = "0";
  v5 = atoi(v4);
  v6 = (const char *)WebsGetVar("_limit");
  if ( !v6 )
    v6 = "10";
  v7 = strtoull(v6, 0, 0);
  result = (const char *)WebsGetVar("_mode");
  v9 = result;
  if ( result && *result )
  {
    snprintf(&s, 0x80u, "%d", v1);
    if ( !strcmp(v9, "server") )
    {
      snprintf(
        command,
        0x100u,
        "iperf -J --logfile /tmp/iperf_log --intervalfile \t\t\t        /tmp/iperf_interval -I /var/run/iperf.pid -s -1 -D -p %d",
        v1);
    }
    else
    {
      v10 = (const char *)WebsGetVar("_host");
      if ( v10 && *v10 )
      {
        if ( v3 == 1 )
          v11 = "-u";
        else
          v11 = &::s;
        if ( v5 == 1 )
          v12 = "-n";
        else
          v12 = "-t";
        snprintf(
          command,
          0x100u,
          "iperf -J --logfile /tmp/iperf_log --intervalfile \t\t\t\t        /tmp/iperf_interval -p %d %s %s %llu -c %s &",
          v1,
          v11,
          v12,
          v7,
          v10);
      }
    }
    v13 = popen(command, "r");
    return (const char *)pclose(v13);
  }
  return result;
}
