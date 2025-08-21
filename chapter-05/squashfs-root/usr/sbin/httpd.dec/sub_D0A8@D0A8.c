char *__fastcall sub_D0A8(char *s)
{
  char *result; // r0
  int v3; // r5
  char *v4; // r10
  char *v5; // r4
  int v6; // r3
  size_t v7; // r0
  char *v8; // r1
  size_t v9; // r0
  char *v10; // r0
  char *v11; // r4
  int v12; // [sp+4h] [bp-2Ch] BYREF
  char *v13; // [sp+8h] [bp-28h] BYREF
  char *sa; // [sp+Ch] [bp-24h] BYREF

  result = (char *)&dword_30C8C;
  if ( dword_30C8C )
    result = (char *)hdestroy_r();
  if ( s )
  {
    v3 = 1;
    v4 = &s[strlen(s)];
    sa = s;
    while ( strsep(&sa, "&;") )
      ++v3;
    result = (char *)hcreate_r(v3);
    sa = s;
    while ( 1 )
    {
      v11 = sa;
      if ( sa >= v4 )
        break;
      v13 = sa;
      sa += strlen(sa) + 1;
      sub_CEE0(v11, "%u", "~u");
      v5 = v13;
      while ( 1 )
      {
        v10 = strpbrk(v5, "%+");
        v5 = v10;
        if ( !v10 )
          break;
        v6 = (unsigned __int8)*v10;
        if ( v6 == 37 )
        {
          if ( strlen(v10 + 1) <= 1 )
          {
            v9 = strlen(v5);
            strlcpy(v5, &::s, v9 + 1);
          }
          else
          {
            sscanf(v5 + 1, "%02x", &v12);
            *v5 = v12;
            v7 = strlen(v5 + 1);
            v8 = v5 + 3;
            strlcpy(++v5, v8, v7 + 1);
          }
        }
        else if ( v6 == 43 )
        {
          *v10 = 32;
          v5 = v10 + 1;
        }
      }
      result = strsep(&v13, "=");
      if ( v13 )
        result = (char *)sub_D028((int)result, (int)v13);
    }
  }
  return result;
}
