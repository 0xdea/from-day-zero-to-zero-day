size_t sub_15D78()
{
  _DWORD *v0; // r4
  const char *v1; // r5
  unsigned int v2; // r5
  _DWORD *v3; // r6
  const char **i; // r7
  const char *v5; // r8
  size_t v6; // r0
  size_t v7; // r10
  int v9; // r2
  const char *v10; // r3

  v0 = malloc(0x2800u);
  if ( *sub_13E24((int)"wl_ifname") )
    v1 = sub_13E24((int)"wl_ifname");
  else
    v1 = "eth1";
  sub_13954("\nwl_countries = [");
  if ( v0 )
  {
    v0[1] = 0;
    v0[2] = 3;
    *v0 = 10240;
    v2 = wl_ioctl(v1, 261, v0, 10240);
    if ( !v2 )
    {
      v3 = v0 + 4;
      while ( v2 < v0[3] )
      {
        i = (const char **)LOBYTE(v3[v2]);
        v5 = (const char *)&v3[v2];
        if ( *v5 )
        {
          v6 = strlen((const char *)&v3[v2]);
          v7 = v6;
          if ( v6 > 3 || v6 <= 1 )
          {
            i = 0;
          }
          else
          {
            for ( i = (const char **)off_30728; *i; i += 2 )
            {
              if ( !strncmp((const char *)&v3[v2], i[1], v7) )
                goto LABEL_19;
            }
            i = 0;
          }
        }
LABEL_19:
        if ( v2++ == 0 )
          v9 = 32;
        else
          v9 = 44;
        if ( i )
          v10 = *i;
        else
          v10 = v5;
        sub_13970(0, "%c['%s','%s']", v9, v5, v10);
      }
    }
    free(v0);
  }
  else
  {
    sub_13954(
      " ['#a', '#a (wildcard)'],['EU', 'EUROPE'],['CZ', 'CZECH REPUBLIC'],['DE', 'GERMANY'],['US', 'UNITED STATES'],['SE'"
      ", 'SWEDEN'],['SG', 'SINGAPORE'],['LU', 'LUXEMBOURG']");
  }
  return sub_13954("];\n");
}
