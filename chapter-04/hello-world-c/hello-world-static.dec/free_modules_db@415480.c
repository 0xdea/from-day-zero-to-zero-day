__int64 __fastcall free_modules_db(
        _QWORD *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  _QWORD *v9; // x19
  _BYTE *v10; // x1
  __int64 result; // x0

  v9 = a1;
  if ( a1[4] )
    free_modules_db();
  if ( v9[6] )
    free_modules_db();
  do
  {
    while ( 1 )
    {
      v10 = (_BYTE *)v9[3];
      result = (__int64)v9;
      v9 = (_QWORD *)v9[5];
      if ( *v10 == 47 )
        break;
      if ( !v9 )
        return result;
    }
    result = free(result, a2, a3, a4, a5, a6, a7, a8, a9);
  }
  while ( v9 );
  return result;
}
