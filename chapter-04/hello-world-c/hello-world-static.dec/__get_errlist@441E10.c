char *__fastcall _get_errlist(int a1)
{
  unsigned __int64 v1; // x1
  char *result; // x0

  if ( a1 < 0 )
    return 0;
  v1 = a1;
  result = 0;
  if ( v1 < 0x86 )
    return sys_errlist_internal[v1];
  return result;
}
