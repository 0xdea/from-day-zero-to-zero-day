void __fastcall __noreturn sub_432150(int a1, const char *a2, const char *a3, const char *a4)
{
  const char *v5; // x19
  const char *v6; // x21
  const char *v8; // x20
  const char *v9; // x6
  const char *v10; // x7
  char v11; // [xsp+40h] [xbp+40h] BYREF

  v5 = a3;
  v6 = (const char *)off_491918;
  if ( !off_491918 )
    v6 = "<program name unknown>";
  if ( !a3 )
    v5 = "error while loading shared libraries";
  if ( *a2 )
    v8 = ": ";
  else
    v8 = "";
  v9 = "";
  v10 = "";
  if ( a1 )
  {
    v10 = (const char *)sub_42ED00(a1, (__int64)&v11, 1024);
    v9 = ": ";
  }
  sub_4385C0("%s: %s: %s%s%s%s%s\n", v6, v5, a2, v8, a4, v9, v10);
}
