int __fastcall sub_DBC8(int a1, int a2, int a3, int *a4)
{
  int v4; // r8
  char *v5; // r0
  const char *Var; // r5
  char *v7; // r0
  const char *v8; // r7
  char *v9; // r0
  int result; // r0
  char *v11; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  size_t v20; // r0
  int v21; // r0
  char v22[64]; // [sp+0h] [bp-40h] BYREF

  v4 = *a4;
  v5 = (char *)wl_nvname("channel");
  Var = (const char *)WebsGetVar(v5);
  v7 = (char *)wl_nvname("nbw_cap");
  v8 = (const char *)WebsGetVar(v7);
  v9 = (char *)wl_nvname("nctrlsb");
  result = (int)WebsGetVar(v9);
  v11 = (char *)result;
  if ( v8 != 0 || Var != 0 )
  {
    if ( Var && *Var )
    {
LABEL_7:
      if ( !v8 || !*v8 )
      {
        v13 = wl_nvname("nbw_cap");
        v8 = (const char *)nvram_get(v13);
      }
      if ( !v11 || !*v11 )
      {
        v14 = wl_nvname("nctrlsb");
        v11 = (char *)nvram_get(v14);
      }
      v15 = Var == 0;
      if ( Var )
        v15 = v8 == 0;
      if ( v15 || !v11 || !*Var || !*v8 || !*v11 )
        return 1;
      memset(v22, 0, 0x20u);
      strncpy(v22, Var, 0x20u);
      v16 = atoi(v8);
      switch ( v16 )
      {
        case 1:
          if ( v4 )
          {
            v18 = wl_nvname("bw_cap");
            nvram_set(v18, "3");
          }
          if ( *Var != 48 )
            v22[strlen(v22)] = *v11;
          break;
        case 3:
          if ( v4 )
          {
            v19 = wl_nvname("bw_cap");
            nvram_set(v19, "7");
          }
          if ( *Var != 48 )
          {
            v20 = strlen(v22);
            strcpy(&v22[v20], "/80");
          }
          break;
        case 0:
          if ( v4 )
          {
            v17 = wl_nvname("bw_cap");
            nvram_set(v17, "1");
LABEL_36:
            v21 = wl_nvname("chanspec");
            nvram_set(v21, v22);
            return 0;
          }
          return v4;
      }
      if ( v4 )
        goto LABEL_36;
      return v4;
    }
LABEL_6:
    v12 = wl_nvname("channel");
    Var = (const char *)nvram_get(v12);
    goto LABEL_7;
  }
  if ( result )
    goto LABEL_6;
  return result;
}
