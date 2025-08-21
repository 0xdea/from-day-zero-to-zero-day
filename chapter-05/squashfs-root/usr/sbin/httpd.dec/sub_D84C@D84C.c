void __fastcall sub_D84C(const char *a1)
{
  if ( !dword_30CB4 )
    sub_B928(200, 0, "text/html; charset=utf-8", 0);
  sub_D564(a1, 0, (const char *)dword_30C98, "/www", 0);
  if ( dword_30C98 )
  {
    free((void *)dword_30C98);
    dword_30C98 = 0;
  }
}
