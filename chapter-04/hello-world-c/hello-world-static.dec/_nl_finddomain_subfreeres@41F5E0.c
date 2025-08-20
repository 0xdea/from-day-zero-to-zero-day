void *__fastcall nl_finddomain_subfreeres(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  void *result; // x0
  __int64 *v9; // x19
  __int64 *v10; // x20
  __int64 v11; // x0
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7

  result = &unk_496000;
  v9 = (__int64 *)nl_loaded_domains;
  if ( nl_loaded_domains )
  {
    do
    {
      if ( v9[2] )
        a1 = nl_unload_domain();
      v10 = (__int64 *)v9[3];
      free(*v9, a1, a2, a3, a4, a5, a6, a7, a8);
      v11 = (__int64)v9;
      v9 = v10;
      result = (void *)free(v11, v12, v13, v14, v15, v16, v17, v18, v19);
    }
    while ( v10 );
  }
  return result;
}
