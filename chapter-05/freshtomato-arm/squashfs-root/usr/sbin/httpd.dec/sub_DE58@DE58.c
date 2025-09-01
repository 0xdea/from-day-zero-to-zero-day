void __fastcall sub_DE58(int a1, int a2)
{
  void *v3; // r0

  if ( dword_30C98 )
    free((void *)dword_30C98);
  dword_30C98 = 0;
  if ( dword_30CB0 )
  {
    if ( a2 >= 0x20000 )
    {
      syslog(4, "POST length exceeded maximum allowed");
      goto LABEL_10;
    }
    if ( a2 > 0 )
    {
      v3 = malloc(a2 + 1);
      dword_30C98 = (int)v3;
      if ( !v3 || sub_13BB0(v3) != a2 )
LABEL_10:
        exit(1);
      *(_BYTE *)(dword_30C98 + a2) = 0;
    }
  }
}
