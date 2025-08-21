const char *sub_D4C0()
{
  const char *result; // r0
  const char *v1; // r6
  char **i; // r5
  int v3; // r4
  _BYTE *v4; // r7
  void *Var; // r0
  _BYTE v6[64]; // [sp+0h] [bp-78h] BYREF
  char s[56]; // [sp+40h] [bp-38h] BYREF

  result = (const char *)WebsGetVar("exec");
  v1 = result;
  if ( result )
  {
    for ( i = &off_1B4A4; ; i += 2 )
    {
      result = *i;
      if ( !*i )
        break;
      v3 = strcmp(result, v1);
      if ( !v3 )
      {
        v4 = &v6[-4];
        do
        {
          snprintf(s, 0x20u, "arg%d", v3);
          Var = WebsGetVar(s);
          *((_DWORD *)v4 + 1) = Var;
          v4 += 4;
          if ( !Var )
            break;
          ++v3;
        }
        while ( v3 != 16 );
        return (const char *)((int (__fastcall *)(int, _BYTE *))i[1])(v3, v6);
      }
    }
  }
  return result;
}
