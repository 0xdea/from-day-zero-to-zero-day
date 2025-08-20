__int64 __fastcall _intl_freemem(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  __int64 *i; // x19
  char *v9; // x0
  double v10; // d0
  double v11; // d1
  double v12; // d2
  double v13; // d3
  double v14; // d4
  double v15; // d5
  double v16; // d6
  double v17; // d7
  __int64 result; // x0
  double v19; // d0
  double v20; // d1
  double v21; // d2
  double v22; // d3
  double v23; // d4
  double v24; // d5
  double v25; // d6
  double v26; // d7
  _QWORD *v27; // x19
  __int64 v28; // x0

  for ( i = (__int64 *)nl_domain_bindings; nl_domain_bindings; i = (__int64 *)nl_domain_bindings )
  {
    v9 = (char *)i[1];
    nl_domain_bindings = *i;
    if ( v9 != "/usr/share/locale" )
      free((__int64)v9, a1, a2, a3, a4, a5, a6, a7, a8);
    free(i[2], a1, a2, a3, a4, a5, a6, a7, a8);
    free((__int64)i, v10, v11, v12, v13, v14, v15, v16, v17);
  }
  if ( nl_current_default_domain != "messages" )
    free((__int64)nl_current_default_domain, a1, a2, a3, a4, a5, a6, a7, a8);
  result = (__int64)tdestroy((_QWORD *)root, (void (__fastcall *)(_QWORD))free);
  root = 0;
  v27 = (_QWORD *)transmem_list;
  if ( transmem_list )
  {
    do
    {
      v28 = (__int64)v27;
      v27 = (_QWORD *)*v27;
      transmem_list = (__int64)v27;
      result = free(v28, v19, v20, v21, v22, v23, v24, v25, v26);
    }
    while ( v27 );
  }
  return result;
}
