__int64 _gconv_db_freemem()
{
  __int64 v0; // x0
  double v1; // d0
  double v2; // d1
  double v3; // d2
  double v4; // d3
  double v5; // d4
  double v6; // d5
  double v7; // d6
  double v8; // d7
  __int64 result; // x0

  v0 = nl_locale_subfreeres();
  nl_finddomain_subfreeres(v0);
  if ( _gconv_alias_db )
    tdestroy(_gconv_alias_db, free);
  if ( _gconv_modules_db )
    free_modules_db((_QWORD *)_gconv_modules_db, v1, v2, v3, v4, v5, v6, v7, v8);
  result = known_derivations;
  if ( known_derivations )
    return tdestroy(known_derivations, free_derivation);
  return result;
}
