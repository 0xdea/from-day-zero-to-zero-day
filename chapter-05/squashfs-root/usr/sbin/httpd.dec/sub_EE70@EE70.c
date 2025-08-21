int sub_EE70()
{
  FILE *v0; // r5
  int v1; // r4
  char *v3; // r2
  char *v4; // r0
  char s[32]; // [sp+8h] [bp-50h] BYREF
  char v7; // [sp+28h] [bp-30h] BYREF

  if ( sub_E68C((int)"tomatoanon_answer") && sub_E68C((int)"tomatoanon_enable") && sub_E68C((int)"tomatoanon_notify") )
  {
    sub_13954("\nanonupdate = {");
    v0 = fopen("/tmp/anon.version", "r");
    if ( v0 )
    {
      v1 = 0;
      while ( fgets(s, 32, v0) )
      {
        if ( sscanf(s, "have_update=%s", &v7) == 1 )
        {
          if ( v1++ == 0 )
            v3 = (char *)&::s;
          else
            v3 = ",\n";
          sub_13970(0, "%s\t%s: '%s'", v3, "update", &v7);
        }
      }
      fclose(v0);
    }
    v4 = "\n};\n";
  }
  else
  {
    v4 = "\nanonupdate = {\tupdate: 'no'\n};\n";
  }
  return sub_13954(v4);
}
