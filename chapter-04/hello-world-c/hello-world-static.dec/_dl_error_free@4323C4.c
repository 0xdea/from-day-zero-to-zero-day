__int64 __fastcall dl_error_free(
        __int64 result,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  if ( "out of memory" != (char *)result )
    return free(result, a2, a3, a4, a5, a6, a7, a8, a9);
  return result;
}
