void __fastcall __noreturn fatal_error(int a1, const char *a2, const char *a3, const char *a4)
{
  const char *v5; // x19
  const char *v6; // x21
  const char *v8; // x20
  const char *v9; // x6
  const char *v10; // x7
  char v11; // [xsp+40h] [xbp+40h] BYREF

  v5 = a3;
  v6 = (const char *)program_invocation_short_name[0];
  if ( !program_invocation_short_name[0] )
    v6 = "<program name unknown>";
  if ( !a3 )
    v5 = "error while loading shared libraries";
  if ( *a2 )
    v8 = ": ";
  else
    v8 = (const char *)&qword_456B08;
  v9 = (const char *)&qword_456B08;
  v10 = (const char *)&qword_456B08;
  if ( a1 )
  {
    v10 = (const char *)strerror_r(a1, (__int64)&v11, 1024);
    v9 = ": ";
  }
  dl_fatal_printf("%s: %s: %s%s%s%s%s\n", v6, v5, a2, v8, a4, v9, v10);
}
