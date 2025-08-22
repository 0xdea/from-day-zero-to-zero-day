int __fastcall sub_171F0(int a1, int a2)
{
  const char *Var; // r0
  const char *v3; // r9
  const char *v4; // r8
  const char *v5; // r10
  void *v6; // r6
  const char *v7; // r5
  signed int v8; // r5
  int v9; // r0
  void *v10; // r0
  int v11; // r7
  int result; // r0
  int v13; // [sp+Ch] [bp-64h] BYREF
  char v14[96]; // [sp+10h] [bp-60h] BYREF

  v13 = a2;
  sub_C450(a1);
  v14[0] = 0;
  Var = (const char *)WebsGetVar("_what");
  if ( Var )
    v3 = Var;
  else
    v3 = "bwm";
  v4 = "/var/lib/misc/cstats-history.gz";
  v5 = "cstats";
  if ( !strcmp(v3, "bwm") )
  {
    v4 = "/var/lib/misc/rstats-history.gz";
    v5 = "rstats";
  }
  v6 = (void *)sub_C358((unsigned int *)&v13);
  if ( v6 )
  {
    v8 = v13;
    if ( v13 <= 63 || (!strcmp(v3, "bwm") ? (v9 = 0x4000) : (v9 = 0x20000), v8 > v9) )
    {
      v7 = "Error reading file";
      v6 = 0;
    }
    else
    {
      v10 = malloc(v8);
      v6 = v10;
      if ( v10 )
      {
        v11 = sub_13B54(v10);
        v13 -= v11;
        snprintf(v14, 0x40u, "%s.new", v4);
        if ( f_write(v14, v6, v11, 0, 384) == v11 )
        {
          memset(v14, 0, 0x40u);
          snprintf(v14, 0x40u, "/var/tmp/%s-load", v5);
          v7 = 0;
          f_write(v14, 0, 0, 0, 384);
          killall(v5, 1);
          sleep(1u);
          dword_30C9C = 1;
        }
        else
        {
          v7 = "Error writing temporary file";
          unlink(v14);
        }
      }
      else
      {
        v7 = "Not enough memory";
      }
    }
  }
  else
  {
    v7 = "Error reading file";
  }
  free(v6);
  result = sub_13BF8(v13);
  if ( v7 )
    return sub_E088(v7);
  return result;
}
