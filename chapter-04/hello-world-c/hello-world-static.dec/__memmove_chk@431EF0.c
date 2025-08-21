__int64 __fastcall _memmove_chk(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // x0

  if ( a4 >= a3 )
    return j_memmove(a1, a2, a3);
  v5 = _chk_fail();
  return _readonly_area(v5);
}
