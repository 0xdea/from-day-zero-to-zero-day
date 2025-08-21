int sub_ECDC()
{
  char *v0; // r0
  FILE *v1; // r7
  int v2; // r6
  const char *v3; // r3
  char *v5; // r2
  char s[32]; // [sp+8h] [bp-50h] BYREF
  char v8; // [sp+28h] [bp-30h] BYREF

  if ( !sub_E68C("lan_state") )
  {
    v0 = "\netherstates = {\tport0: 'disabled'\n};\n";
    return sub_13954(v0);
  }
  sub_13954("\netherstates = {");
  system("/usr/sbin/ethstate");
  v1 = fopen("/tmp/ethernet.state", "r");
  if ( !v1 )
    goto LABEL_22;
  v2 = 0;
  while ( fgets(s, 32, v1) )
  {
    if ( sscanf(s, "Port 0: %s", &v8) == 1 )
    {
      v3 = "port0";
      goto LABEL_16;
    }
    if ( sscanf(s, "Port 1: %s", &v8) == 1 )
    {
      v3 = "port1";
      goto LABEL_16;
    }
    if ( sscanf(s, "Port 2: %s", &v8) == 1 )
    {
      v3 = "port2";
      goto LABEL_16;
    }
    if ( sscanf(s, "Port 3: %s", &v8) == 1 )
    {
      v3 = "port3";
LABEL_16:
      if ( v2++ == 0 )
        v5 = (char *)&::s;
      else
        v5 = ",\n";
      sub_13970(0, "%s\t%s: '%s'", v5, v3, &v8);
    }
    else if ( sscanf(s, "Port 4: %s", &v8) == 1 )
    {
      v3 = "port4";
      goto LABEL_16;
    }
  }
  fclose(v1);
LABEL_22:
  v0 = "\n};\n";
  return sub_13954(v0);
}
