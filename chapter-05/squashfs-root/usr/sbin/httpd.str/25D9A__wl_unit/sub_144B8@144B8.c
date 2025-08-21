void __fastcall __spoils<R2,R3,R12> sub_144B8(const char *a1, int a2, int a3, int a4)
{
  const char *Var; // r3
  char s[4]; // [sp+4h] [bp-14h] BYREF
  int v6; // [sp+8h] [bp-10h]
  int v7; // [sp+Ch] [bp-Ch]

  v6 = a3;
  v7 = a4;
  dword_30CA0 = 0;
  dword_30CA4 = 0;
  Var = a1;
  if ( !a1 || !*a1 )
  {
    Var = (const char *)WebsGetVar("_wl_unit");
    if ( !Var )
      Var = (const char *)sub_13E24("wl_unit");
  }
  snprintf(s, 0xCu, "wl%s", Var);
  get_ifname_unit(s, &dword_30CA0, &dword_30CA4);
}
