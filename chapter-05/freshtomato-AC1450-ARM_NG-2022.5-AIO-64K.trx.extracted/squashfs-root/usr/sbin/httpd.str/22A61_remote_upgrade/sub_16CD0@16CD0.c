void __fastcall __spoils<R2,R3,R12> sub_16CD0(int a1, int a2, const char *a3, int a4)
{
  const char *Var; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r0
  const char *v8; // [sp+4h] [bp-14h] BYREF
  const char *v9; // [sp+8h] [bp-10h]
  int v10; // [sp+Ch] [bp-Ch]

  v9 = a3;
  v10 = a4;
  Var = (const char *)WebsGetVar("mode");
  if ( Var )
  {
    v5 = atoi(Var);
    if ( (unsigned int)(v5 - 1) <= 1 )
    {
      sub_10BFC();
      do_led(1, 1);
      v6 = sub_111F4((int)"reboot-default.asp");
      sub_13CC8(v6);
      if ( nvram_get_int("remote_upgrade") )
      {
        killall("xl2tpd", 15);
        killall("pppd", 15);
      }
      sleep(2u);
      if ( v5 == 1 )
      {
        v7 = nvram_set("restore_defaults", "1");
        nvram_commit(v7);
      }
      else
      {
        v8 = "mtd-erase2";
        v9 = "nvram";
        v10 = 0;
        eval(&v8, 0, 0, 0);
      }
      set_action(8);
      sync();
      reboot(19088743);
      exit(0);
    }
  }
  sub_C30C("/admin-config.asp");
}
