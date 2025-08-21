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
  char *v12; // r0
  const char *v13; // r0
  int v14; // r0
  const char *v15; // r0
  _BYTE *v16; // r0
  _BYTE *v17; // r5
  int v18; // r0
  const char *v19; // r0
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
        return sub_111F4((int)"error.asp");
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
    v12 = "reboot.asp";
LABEL_34:
    v14 = sub_111F4((int)v12);
    goto LABEL_35;
  }
  if ( v7 )
  {
    v13 = sub_E064();
    v14 = sub_13970(0, "@msg:%s", v13);
  }
  else
  {
    v15 = (const char *)WebsGetVar("_moveip");
    if ( !v15 )
      v15 = "0";
    v14 = atoi(v15);
    if ( v14 )
    {
      v12 = "saved-moved.asp";
      goto LABEL_34;
    }
    if ( !*v0 )
    {
      v12 = "saved.asp";
      goto LABEL_34;
    }
  }
LABEL_35:
  if ( v3 | v5 )
    nvram_commit_x(v14);
  v16 = WebsGetVar("_service");
  v17 = v16;
  if ( v16 && *v16 )
  {
    v18 = *(unsigned __int8 *)v0;
    if ( !*v0 )
    {
      if ( v7 )
        v18 = sub_13970(v18, " Some services are being restarted...");
      sub_13CC8(v18);
    }
    sleep(1u);
    if ( *v17 == 42 )
      kill(1, 1);
    else
      sub_DF08(v17);
  }
  v19 = (const char *)WebsGetVar("_sleep");
  if ( !v19 )
    v19 = "0";
  result = atoi(v19);
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
