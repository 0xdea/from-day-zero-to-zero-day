const char *sub_13494()
{
  const char *result; // r0
  const char *Var; // r4
  const char *v2; // r6
  char *v3; // r5
  bool v4; // zf
  unsigned int v5; // r4
  unsigned int v6; // t1
  const char *v7; // r4
  int v8; // r5
  char v9[256]; // [sp+8h] [bp-218h] BYREF
  char v10[128]; // [sp+108h] [bp-118h] BYREF
  char s[152]; // [sp+188h] [bp-98h] BYREF

  result = (const char *)sub_13024();
  if ( result )
  {
    sub_133A0(v9);
    Var = (const char *)WebsGetVar("find");
    if ( Var )
    {
      sub_B928(200, 0, "text/plain", 0);
      result = (const char *)strlen(Var);
      if ( (unsigned int)result <= 0x40 )
      {
        v2 = Var;
        v3 = v10;
        while ( 1 )
        {
          v6 = *(unsigned __int8 *)v2++;
          v5 = v6;
          if ( !v6 )
          {
            *v3 = 0;
            snprintf(s, 0x80u, "grep -ih \"%s\" $(ls -1rv %s %s.*)", v10, v9, v9);
            return (const char *)sub_13D58(s);
          }
          if ( v5 == 62 )
            goto LABEL_14;
          if ( v5 > 0x3E )
          {
            if ( v5 == 92 )
              goto LABEL_14;
            v4 = v5 == 124;
          }
          else
          {
            if ( v5 == 34 )
              goto LABEL_14;
            v4 = v5 == 60;
          }
          if ( v4 )
          {
LABEL_14:
            *v3 = 92;
            v3[1] = *(v2 - 1);
            v3 += 2;
          }
          else if ( ((*_ctype_b_loc())[v5] & 0x40) != 0 )
          {
            *v3++ = v5;
          }
        }
      }
    }
    else
    {
      result = (const char *)WebsGetVar("which");
      v7 = result;
      if ( !result )
        return result;
      if ( !strcmp(result, "all") )
      {
        v8 = 4000;
      }
      else
      {
        result = (const char *)atoi(v7);
        v8 = (int)result;
        if ( (int)result <= 0 )
          return result;
      }
      sub_B928(200, 0, "text/plain", 0);
      snprintf(s, 0x80u, "cat $(ls -1rv %s %s.*) | tail -n %d", v9, v9, v8);
      return (const char *)sub_13D58(s);
    }
  }
  return result;
}
