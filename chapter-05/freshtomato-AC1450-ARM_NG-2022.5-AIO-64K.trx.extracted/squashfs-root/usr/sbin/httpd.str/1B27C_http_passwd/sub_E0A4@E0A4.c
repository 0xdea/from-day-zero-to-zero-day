int __fastcall sub_E0A4(int a1)
{
  int v1; // r4
  const char **i; // r5
  int v3; // r6
  const char *Var; // r0
  const char *v5; // r5
  const char *v6; // r1
  int j; // r6
  const char *v8; // r0
  const char *v9; // r7
  int v11; // [sp+4h] [bp-208h] BYREF
  char v12[256]; // [sp+Ch] [bp-200h] BYREF
  char s[256]; // [sp+10Ch] [bp-100h] BYREF
  _DWORD v14[2]; // [sp+20Ch] [bp+0h] BYREF
  int v15; // [sp+214h] [bp+8h]

  v11 = a1;
  v1 = 0;
  v14[1] = a1;
  for ( i = (const char **)&off_1B66C; *i; i += 4 )
  {
    v3 = sub_D940(i, *i, v11);
    if ( v3 < 0
      || !strncmp(*i, "wl_", 3u) && ((v15 = v1, v14[0] = i, foreach_wif(1, v14, sub_DB84)) || (v3 |= v15, v3 < 0)) )
    {
      snprintf(s, 0x100u, "The field \"%s\" is invalid. Please report this problem.", *i);
LABEL_18:
      sub_E088(s);
      return 0;
    }
    v1 |= v3;
  }
  foreach_wif(0, &v11, sub_DBC8);
  Var = (const char *)WebsGetVar("set_password_1");
  v5 = Var;
  if ( Var && strcmp(Var, "**********") )
  {
    v6 = (const char *)WebsGetVar("set_password_2");
    if ( !v6 || strcmp(v5, v6) )
    {
      snprintf(s, 0x100u, "The field \"%s\" is invalid. Please report this problem.", "password");
      goto LABEL_18;
    }
    if ( v11 && !is_value_in_nvram_0("http_passwd", v5) )
    {
      v1 = 1;
      nvram_set("http_passwd", v5);
    }
  }
  for ( j = 0; j != 50; ++j )
  {
    snprintf(s, 0x100u, "rrule%d", j);
    v8 = (const char *)WebsGetVar(s);
    v9 = v8;
    if ( v8 )
    {
      if ( strlen(v8) > 0x800 )
      {
        memset(v12, 0, sizeof(v12));
        strncpy(v12, s, 0x100u);
        snprintf(s, 0x100u, "The field \"%s\" is invalid. Please report this problem.", v12);
        goto LABEL_18;
      }
      if ( v11 && !is_value_in_nvram_0(s, v9) )
      {
        v1 = 1;
        nvram_set(s, v9);
      }
    }
  }
  if ( !v11 )
    return 1;
  return v1;
}
