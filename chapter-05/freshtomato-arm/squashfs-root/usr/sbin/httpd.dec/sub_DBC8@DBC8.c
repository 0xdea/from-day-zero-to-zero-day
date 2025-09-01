int __fastcall sub_DBC8(int a1, int a2, int a3, int *a4)
{
  int v5; // r8
  char *v6; // r0
  const char *Var; // r5
  char *v8; // r0
  const char *v9; // r7
  char *v10; // r0
  int result; // r0
  char *v12; // r6
  int v13; // r0
  int v14; // r0
  int v15; // r0
  bool v16; // zf
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  size_t v21; // r0
  int v22; // r0
  char v23[64]; // [sp+0h] [bp-40h] BYREF

  v5 = *a4;
  v6 = (char *)wl_nvname("channel", a2, 0);
  Var = (const char *)WebsGetVar(v6);
  v8 = (char *)wl_nvname("nbw_cap", a2, 0);
  v9 = (const char *)WebsGetVar(v8);
  v10 = (char *)wl_nvname("nctrlsb", a2, 0);
  result = (int)WebsGetVar(v10);
  v12 = (char *)result;
  if ( v9 != 0 || Var != 0 )
  {
    if ( Var && *Var )
    {
LABEL_7:
      if ( !v9 || !*v9 )
      {
        v14 = wl_nvname("nbw_cap", a2, 0);
        v9 = (const char *)nvram_get(v14);
      }
      if ( !v12 || !*v12 )
      {
        v15 = wl_nvname("nctrlsb", a2, 0);
        v12 = (char *)nvram_get(v15);
      }
      v16 = Var == 0;
      if ( Var )
        v16 = v9 == 0;
      if ( v16 || !v12 || !*Var || !*v9 || !*v12 )
        return 1;
      memset(v23, 0, 0x20u);
      strncpy(v23, Var, 0x20u);
      v17 = atoi(v9);
      switch ( v17 )
      {
        case 1:
          if ( v5 )
          {
            v19 = wl_nvname("bw_cap", a2, 0);
            nvram_set(v19, (int)"3");
          }
          if ( *Var != 48 )
            v23[strlen(v23)] = *v12;
          break;
        case 3:
          if ( v5 )
          {
            v20 = wl_nvname("bw_cap", a2, 0);
            nvram_set(v20, (int)"7");
          }
          if ( *Var != 48 )
          {
            v21 = strlen(v23);
            strcpy(&v23[v21], "/80");
          }
          break;
        case 0:
          if ( v5 )
          {
            v18 = wl_nvname("bw_cap", a2, v17);
            nvram_set(v18, (int)"1");
LABEL_36:
            v22 = wl_nvname("chanspec", a2, 0);
            nvram_set(v22, (int)v23);
            return 0;
          }
          return v5;
      }
      if ( v5 )
        goto LABEL_36;
      return v5;
    }
LABEL_6:
    v13 = wl_nvname("channel", a2, 0);
    Var = (const char *)nvram_get(v13);
    goto LABEL_7;
  }
  if ( result )
    goto LABEL_6;
  return result;
}
