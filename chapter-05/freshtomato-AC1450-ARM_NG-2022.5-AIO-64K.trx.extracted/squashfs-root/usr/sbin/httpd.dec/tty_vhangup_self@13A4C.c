void __fastcall tty_vhangup_self()
{
  char *v0; // r0
  char *v1; // r4

  v0 = (char *)sub_17C38();
  v1 = v0;
  if ( v0 )
  {
    sub_13954(v0);
    free(v1);
  }
}
