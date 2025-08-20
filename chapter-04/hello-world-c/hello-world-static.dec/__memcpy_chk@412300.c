__int64 __fastcall _memcpy_chk(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3

  if ( a4 >= a3 )
    return j_memcpy(a1);
  v5 = _chk_fail(a1, a2);
  return _memset_chk(v5, v6, v7, v8);
}
