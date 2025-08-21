__int64 __fastcall sub_41E260(__int64 result, int a2, __int64 a3, long double a4)
{
  bool v4; // zf
  __int64 v5; // x19
  long double v6; // q0
  __int64 v7; // x0
  __int64 v8; // x19

  if ( a2 )
    v4 = a2 == 3;
  else
    v4 = 1;
  v5 = *(_QWORD *)result;
  if ( v4 )
  {
    result = *(unsigned int *)(v5 + 8);
    if ( a3 == v5 )
    {
      if ( (int)result <= 0 )
      {
        v6 = sub_41F250("obj->counter > 0", "gconv_dl.c", 162, "do_release_shlib", *(double *)&a4);
        v8 = v7;
        if ( *(_QWORD *)(v7 + 16) )
          sub_43B170(v6);
        return sub_40C1A0(v8);
      }
      else
      {
        result = (unsigned int)(result - 1);
        *(_DWORD *)(a3 + 8) = result;
      }
    }
    else if ( (_DWORD)result == 0 || (unsigned int)result >= 0xFFFFFFFE )
    {
      result = (unsigned int)(result - 1);
      *(_DWORD *)(v5 + 8) = result;
      if ( (_DWORD)result == -3 )
      {
        result = *(_QWORD *)(v5 + 16);
        if ( result )
        {
          result = sub_43B170(a4);
          *(_QWORD *)(v5 + 16) = 0;
        }
      }
    }
  }
  return result;
}
