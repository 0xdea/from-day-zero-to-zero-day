DIR *__fastcall sub_11670(const char *a1, _DWORD *a2)
{
  DIR *result; // r0
  DIR *v4; // r5
  char *v5; // r0
  char *v6; // r2
  struct dirent *v7; // r0
  char v8[288]; // [sp+0h] [bp-120h] BYREF

  result = opendir(a1);
  v4 = result;
  if ( result )
  {
    while ( 1 )
    {
      v7 = readdir(v4);
      if ( !v7 )
        break;
      strlcpy(v8, v7->d_name, 255);
      v5 = strstr(v8, ".pat");
      if ( v5 )
      {
        *v5 = 0;
        if ( *a2 )
          v6 = (char *)&s;
        else
          v6 = ",";
        sub_13970(0, "%s'%s'", v6, v8);
        *a2 = 0;
      }
    }
    return (DIR *)closedir(v4);
  }
  return result;
}
