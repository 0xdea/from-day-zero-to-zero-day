__int64 __fastcall dl_tls_static_surplus_init(unsigned __int64 a1)
{
  __int64 v2; // x19
  _BOOL8 v3; // x19
  __int64 result; // x0
  __int64 v5; // [xsp+28h] [xbp+28h] BYREF

  _tunable_get_val(0, &v5, 0);
  v2 = v5;
  _tunable_get_val(29, &v5, 0);
  v3 = v2 != 0;
  if ( !v3 < a1 )
    dl_fatal_printf("Failed loading %lu audit modules, %lu are supported.\n", a1, !v3);
  result = (int)v5 + 144 * ((int)v3 + (int)a1 - 1 + (int)v3 + (int)a1) + 144;
  dl_tls_static_optional = v5;
  dl_tls_static_surplus = (int)result;
  return result;
}
