__int64 __fastcall nl_locale_subfreeres(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  double v16; // d0
  double v17; // d1
  double v18; // d2
  double v19; // d3
  double v20; // d4
  double v21; // d5
  double v22; // d6
  double v23; // d7
  char *v24; // x0

  free_category(0, **(char ****)(_ReadStatusReg(TPIDR_EL0) + 16), &nl_C_LC_CTYPE, a1, a2, a3, a4, a5, a6, a7, a8);
  free_category(
    1,
    **(char ****)(_ReadStatusReg(TPIDR_EL0) + 32),
    &nl_C_LC_NUMERIC,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v24 = off_4918D0[0];
  if ( off_4918D0[0] != "C" )
  {
    v24 = (char *)free((__int64)off_4918D0[0], v16, v17, v18, v19, v20, v21, v22, v23);
    off_4918D0[0] = "C";
  }
  return nl_archive_subfreeres(v24);
}
