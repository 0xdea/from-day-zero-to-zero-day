double __fastcall nl_remove_locale(__int64 a1, __int64 a2)
{
  int v2; // w2
  __int64 i; // x2
  double result; // d0

  v2 = *(_DWORD *)(a2 + 40) - 1;
  *(_DWORD *)(a2 + 40) = v2;
  if ( !v2 )
  {
    if ( *(_DWORD *)(a2 + 24) != 2 )
    {
      for ( i = nl_locale_file_list[(int)a1]; *(_QWORD *)(i + 16) != a2; i = *(_QWORD *)(i + 24) )
        ;
      *(_DWORD *)(i + 8) = 0;
      *(_QWORD *)(i + 16) = 0;
    }
    return nl_unload_locale(a1);
  }
  return result;
}
