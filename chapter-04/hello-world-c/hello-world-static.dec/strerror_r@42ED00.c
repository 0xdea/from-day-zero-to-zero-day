__int64 __fastcall strerror_r(int a1, __int64 a2, __int64 a3)
{
  __int64 errlist; // x0
  const char *v8; // x0

  errlist = _get_errlist();
  if ( errlist )
    return dcgettext("libc", errlist, 5);
  v8 = (const char *)dcgettext("libc", "Unknown error ", 5);
  snprintf(a2, a3, "%s%d", v8, a1);
  return a2;
}
