__int64 __fastcall sub_415560(__int64 result)
{
  __int64 v1; // x2
  __int64 *v2; // x19
  int v3; // w1
  void (*v4)(void); // x1
  __int64 v5; // x0

  v1 = *(_QWORD *)result;
  v2 = (__int64 *)result;
  if ( *(_QWORD *)result )
  {
    v3 = *(_DWORD *)(result + 16) - 1;
    *(_DWORD *)(result + 16) = v3;
    if ( !v3 )
    {
      v4 = (void (*)(void))(*(_QWORD *)(result + 64) ^ qword_48DD68);
      if ( v4 )
      {
        v4();
        v1 = *v2;
      }
      result = sub_41E520(v1);
      *v2 = 0;
    }
  }
  else
  {
    result = *(_QWORD *)(result + 64);
    if ( result )
    {
      v5 = sub_41F250("step->__end_fct == NULL", "gconv_db.c", 221, "__gconv_release_step");
      return sub_4155E4(v5);
    }
  }
  return result;
}
