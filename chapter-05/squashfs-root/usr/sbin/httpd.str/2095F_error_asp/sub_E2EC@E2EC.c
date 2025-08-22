int sub_E2EC()
{
  const char *v0; // r4
  const char *Var; // r0
  const char *v2; // r0
  int v3; // r5
  const char *v4; // r0
  int v5; // r7
  const char *v6; // r0
  int v7; // r6
  const char *v8; // r0
  const char *v9; // r2
  int result; // r0
  const char *v11; // r0
  const char *v12; // r0
  int v13; // r0
  const char *v14; // r0
  _BYTE *v15; // r0
  _BYTE *v16; // r5
  int v17; // r0
  const char *v18; // r0
  int i; // r5

  v0 = &s;
  Var = (const char *)WebsGetVar("_redirect");
  if ( Var )
    v0 = Var;
  if ( !*v0 )
    sub_B928(200, (const char *)*(unsigned __int8 *)v0, "text/html; charset=utf-8", *(unsigned __int8 *)v0);
  v2 = (const char *)WebsGetVar("_commit");
  if ( !v2 )
    v2 = "1";
  v3 = atoi(v2);
  v4 = (const char *)WebsGetVar("_force_commit");
  if ( !v4 )
    v4 = "0";
  v5 = atoi(v4);
  v6 = (const char *)WebsGetVar("_ajax");
  if ( !v6 )
    v6 = "0";
  v7 = atoi(v6);
  v8 = (const char *)WebsGetVar("_nvset");
  if ( !v8 )
    v8 = "1";
  if ( atoi(v8) )
  {
    if ( !sub_E0A4(0) )
    {
      if ( !v7 )
        return sub_111F4();
      v9 = sub_E064();
      return sub_13970(0, "@msg:%s", v9);
    }
    if ( sub_E0A4(1) )
      v3 = v3 != 0;
    else
      v3 = 0;
    sub_E088("Settings saved.");
  }
  v11 = (const char *)WebsGetVar("_reboot");
  if ( !v11 )
    v11 = "0";
  dword_30C9C = atoi(v11);
  if ( dword_30C9C )
  {
LABEL_31:
    v13 = sub_111F4();
    goto LABEL_32;
  }
  if ( !v7 )
  {
    v14 = (const char *)WebsGetVar("_moveip");
    if ( !v14 )
      v14 = "0";
    v13 = atoi(v14);
    if ( !v13 && *v0 )
      goto LABEL_32;
    goto LABEL_31;
  }
  v12 = sub_E064();
  v13 = sub_13970(0, "@msg:%s", v12);
LABEL_32:
  if ( v3 | v5 )
    nvram_commit_x(v13);
  v15 = WebsGetVar("_service");
  v16 = v15;
  if ( v15 && *v15 )
  {
    v17 = *(unsigned __int8 *)v0;
    if ( !*v0 )
    {
      if ( v7 )
        v17 = sub_13970(v17, " Some services are being restarted...");
      sub_13CC8(v17);
    }
    sleep(1u);
    if ( *v16 == 42 )
      kill(1, 1);
    else
      sub_DF08((int)v16);
  }
  v18 = (const char *)WebsGetVar("_sleep");
  if ( !v18 )
    v18 = "0";
  result = atoi(v18);
  for ( i = result; i > 0; --i )
    result = sleep(1u);
  if ( *v0 )
    result = sub_C30C(v0);
  if ( dword_30C9C )
  {
    sub_13CC8(result);
    sleep(1u);
    return kill(1, 15);
  }
  return result;
}
