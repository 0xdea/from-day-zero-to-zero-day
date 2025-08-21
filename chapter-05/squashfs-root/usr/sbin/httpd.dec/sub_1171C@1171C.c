FILE *__fastcall sub_1171C(const char *a1, int a2)
{
  FILE *result; // r0
  FILE *v3; // r6
  int v4; // r4
  unsigned int v5; // r0
  int v6; // r3
  char s[6]; // [sp+Ch] [bp-12Ch] BYREF
  char v9[6]; // [sp+12h] [bp-126h] BYREF
  char v10[244]; // [sp+18h] [bp-120h] BYREF
  char *v11; // [sp+10Ch] [bp-2Ch] BYREF

  snprintf(s, 0x100u, "tc -s class ls dev %s", a1);
  result = popen(s, "r");
  v3 = result;
  if ( result )
  {
    v4 = 1;
    while ( fgets(s, 256, v3) )
    {
      if ( !strncmp(s, "class htb 1:", 0xCu) )
      {
        v4 = atoi(v10);
      }
      else if ( !strncmp(s, " rate ", 6u) && !(v4 % 10) )
      {
        v4 /= 10;
        if ( (unsigned int)(v4 - 1) <= 9 )
        {
          v5 = strtoul(v9, &v11, 10);
          v6 = (unsigned __int8)*v11;
          if ( v6 == 75 )
          {
            v5 *= 1000;
          }
          else if ( v6 == 77 )
          {
            v5 *= 1000000;
          }
          *(_DWORD *)(a2 + 4 * (v4 - 1)) = v5;
          v4 = 1;
        }
      }
    }
    return (FILE *)pclose(v3);
  }
  return result;
}
