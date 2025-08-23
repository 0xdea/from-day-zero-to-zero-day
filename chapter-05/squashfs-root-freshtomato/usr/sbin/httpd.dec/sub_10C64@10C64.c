int __fastcall sub_10C64(int a1, int a2)
{
  const char *Var; // r0
  int v3; // r6
  const char *v4; // r4
  FILE *v5; // r5
  int v6; // r7
  bool v7; // zf
  int result; // r0
  int v9; // [sp+4h] [bp-3FCh] BYREF
  _BYTE v10[8]; // [sp+8h] [bp-3F8h] BYREF
  char v11[20]; // [sp+408h] [bp+8h] BYREF
  _DWORD v12[4]; // [sp+41Ch] [bp+1Ch] BYREF
  _DWORD v13[3]; // [sp+42Ch] [bp+2Ch] BYREF
  int v14; // [sp+438h] [bp+38h] BYREF
  __pid_t pid[2]; // [sp+43Ch] [bp+3Ch] BYREF

  v9 = a2;
  strcpy(v11, "/tmp/flashXXXXXX");
  pid[0] = -1;
  sub_C450(a1);
  Var = (const char *)WebsGetVar("_reset");
  if ( !Var )
    Var = "0";
  v3 = strcmp(Var, "1");
  if ( !sub_C358((unsigned int *)&v9) )
  {
    v4 = "Error reading file";
LABEL_32:
    sub_E088(v4);
    goto LABEL_33;
  }
  if ( v9 < 0x100000 )
  {
    v4 = "Invalid file";
    goto LABEL_32;
  }
  dword_30C9C = 1;
  signal(15, (__sighandler_t)1);
  signal(2, (__sighandler_t)1);
  signal(1, (__sighandler_t)1);
  signal(3, (__sighandler_t)1);
  sub_10BFC();
  system("cp /www/reboot.asp /tmp");
  system("cp /www/*.css /tmp");
  system("cp /www/*.png /tmp");
  do_led(1, 1);
  v5 = (FILE *)mktemp(v11);
  if ( v5 )
  {
    if ( mkfifo(v11, 0x1C0u) >= 0 )
    {
      v5 = 0;
      v12[0] = "mtd-write2";
      v12[1] = v11;
      v12[3] = 0;
      v12[2] = "linux";
      if ( eval(v12, ">/tmp/.mtd-write", 0, pid) )
      {
        v4 = "Unable to start flash program";
      }
      else
      {
        v5 = fopen(v11, "w");
        if ( v5 )
        {
          do
          {
            if ( v9 <= 0 )
            {
              v4 = 0;
              goto LABEL_21;
            }
            v6 = sub_13B54(v10);
            if ( !v6 )
            {
              v4 = "Error reading file";
              goto LABEL_21;
            }
            v9 -= v6;
          }
          while ( safe_fwrite(v10, 1, v6, v5) == v6 );
          v4 = "Error writing to pipe";
        }
        else
        {
          v4 = "Unable to start pipe for mtd-write";
        }
      }
    }
    else
    {
      v4 = "Unable to create a fifo";
      v5 = 0;
    }
  }
  else
  {
    v4 = "Unable to create a fifo";
  }
LABEL_21:
  dword_30C9C = 1;
  if ( v5 )
    fclose(v5);
  if ( pid[0] != -1 )
    waitpid(pid[0], &v14, 0);
  v7 = v4 == 0;
  if ( !v4 )
    v7 = v3 == 0;
  if ( v7 )
  {
    set_action(0);
    v13[0] = "mtd-erase2";
    v13[1] = "nvram";
    v13[2] = 0;
    eval(v13, 0, 0, 0);
  }
  set_action(8);
  if ( !sub_E5AC((int)"/tmp/.mtd-write") && v4 )
    goto LABEL_32;
LABEL_33:
  result = sub_13BF8(v9);
  if ( v11[0] )
    return unlink(v11);
  return result;
}
