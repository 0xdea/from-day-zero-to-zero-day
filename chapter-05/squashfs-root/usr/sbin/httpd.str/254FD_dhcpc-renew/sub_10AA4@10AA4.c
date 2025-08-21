__int64 __fastcall sub_10AA4(int a1, int a2, int a3, int a4)
{
  const char *Var; // r0
  const char *v5; // r4
  const char *v6; // r3
  __int64 v8; // [sp+0h] [bp-18h] BYREF
  int v9; // [sp+8h] [bp-10h]
  int v10; // [sp+Ch] [bp-Ch] BYREF

  v10 = a4;
  v8 = 0;
  v9 = 0;
  Var = (const char *)WebsGetVar("exec");
  v5 = Var;
  if ( Var )
  {
    if ( !strcmp(Var, "release") )
    {
      v6 = "dhcpc-release";
    }
    else
    {
      if ( strcmp(v5, "renew") )
      {
LABEL_7:
        HIDWORD(v8) = WebsGetVar("prefix");
        eval(&v8, 0, 0, &v10);
        goto LABEL_8;
      }
      v6 = "dhcpc-renew";
    }
    LODWORD(v8) = v6;
    goto LABEL_7;
  }
LABEL_8:
  sub_DF94();
  return v8;
}
