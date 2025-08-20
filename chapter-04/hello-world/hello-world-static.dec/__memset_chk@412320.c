__int64 __fastcall _memset_chk(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // x0

  if ( a4 < a3 )
  {
    v5 = _chk_fail(a1, a2);
    _stack_chk_fail_local(v5);
  }
  return memset(a1, a2, a3);
}
