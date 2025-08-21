_DWORD *__fastcall _gettext_free_exp(
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
          return (_DWORD *)free((__int64)v9, a2, a3, a4, a5, a6, a7, a8, a9);
LABEL_5:
        a2 = _gettext_free_exp(v9[1]);
        return (_DWORD *)free((__int64)v9, a2, a3, a4, a5, a6, a7, a8, a9);
      }
      _gettext_free_exp(v9[3]);
    }
    _gettext_free_exp(v9[2]);
    goto LABEL_5;
  }
  return result;
}
