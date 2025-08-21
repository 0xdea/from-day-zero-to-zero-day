FILE *__fastcall sub_10780(FILE *result, const char **a2)
{
  FILE *v2; // r4
  const char *v3; // r8
  char *v4; // r8
  const char *v5; // r2
  char *v6; // r3
  char s[256]; // [sp+4h] [bp-11Ch] BYREF
  char *v8[7]; // [sp+104h] [bp-1Ch] BYREF

  if ( result == (FILE *)1 )
  {
    result = (FILE *)strcmp(*a2, "dot");
    if ( !result )
    {
      result = fopen("/rom/dot-servers.dat", "r");
      v2 = result;
      if ( result )
      {
        v3 = &::s;
        while ( 1 )
        {
          v8[0] = fgets(s, 256, v2);
          if ( !v8[0] )
            break;
          s[255] = 0;
          v8[0] = strsep(v8, "#\n");
          if ( *v8[0] )
          {
            sub_13970(0, "%s[", v3);
            v4 = (char *)&::s;
            while ( 1 )
            {
              v6 = strsep(v8, ",");
              if ( !v6 )
                break;
              v5 = v4;
              v4 = ",";
              sub_13970(0, "%s\"%s\"", v5, v6);
            }
            v3 = ",";
            sub_13954("]");
          }
        }
        return (FILE *)fclose(v2);
      }
    }
  }
  return result;
}
