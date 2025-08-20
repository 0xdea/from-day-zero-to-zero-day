_DWORD *__fastcall sub_421BB0(
        _DWORD *result,
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
  int v10; // w0

  if ( result )
  {
    v9 = result;
    v10 = *result;
    if ( v10 != 2 )
    {
      if ( v10 != 3 )
      {
        if ( v10 != 1 )
          return (_DWORD *)sub_40C1A0((unsigned __int64)v9, a2, a3, a4, a5, a6, a7, a8, a9);
LABEL_5:
        a2 = sub_421BB0(v9[1]);
        return (_DWORD *)sub_40C1A0((unsigned __int64)v9, a2, a3, a4, a5, a6, a7, a8, a9);
      }
      sub_421BB0(v9[3]);
    }
    sub_421BB0(v9[2]);
    goto LABEL_5;
  }
  return result;
}
