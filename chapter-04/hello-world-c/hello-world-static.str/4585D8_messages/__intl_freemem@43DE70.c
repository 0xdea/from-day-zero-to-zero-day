__int64 _intl_freemem()
{
  __int64 *i; // x19
  char *v1; // x0
  __int64 result; // x0
  _QWORD *v3; // x19
  _QWORD *v4; // x0

  for ( i = (__int64 *)nl_domain_bindings; nl_domain_bindings; i = (__int64 *)nl_domain_bindings )
  {
    v1 = (char *)i[1];
    nl_domain_bindings = *i;
    if ( v1 != "/usr/share/locale" )
      free(v1);
    free(i[2]);
    free(i);
  }
  if ( nl_current_default_domain != "messages" )
    free(nl_current_default_domain);
  result = tdestroy(root, free);
  root = 0;
  v3 = (_QWORD *)transmem_list;
  if ( transmem_list )
  {
    do
    {
      v4 = v3;
      v3 = (_QWORD *)*v3;
      transmem_list = (__int64)v3;
      result = free(v4);
    }
    while ( v3 );
  }
  return result;
}
