__int64 *__fastcall sub_415560(__int64 *result)
{
  __int64 v1; // x2
  __int64 *v2; // x19
  int v3; // w1
  void (*v4)(void); // x1
  long double v5; // q0

  v1 = *result;
  v2 = result;
  if ( *result )
  {
    v3 = *((_DWORD *)result + 4) - 1;
    *((_DWORD *)result + 4) = v3;
    if ( !v3 )
    {
      v4 = (void (*)(void))(result[8] ^ qword_48DD68);
      if ( v4 )
      {
        v4();
        v1 = *v2;
      }
      result = (__int64 *)sub_41E520(v1);
      *v2 = 0;
    }
  }
  else
  {
    result = (__int64 *)result[8];
    if ( result )
    {
      v5 = sub_41F250("step->__end_fct == NULL", "gconv_db.c", 221, "__gconv_release_step");
      return (__int64 *)sub_4155E4(v5);
    }
  }
  return result;
}
