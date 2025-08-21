void sub_10BFC()
{
  int v0; // r4
  _BYTE *v1; // r0

  v0 = 30;
  sub_DF08((int)"upgrade-start");
  do
  {
    sleep(1u);
    v1 = (_BYTE *)nvram_get("action_service");
    if ( v1 && !*v1 )
      break;
    --v0;
  }
  while ( v0 );
  unlink("/var/log/messages");
  unlink("/var/log/messages.0");
  sync();
}
