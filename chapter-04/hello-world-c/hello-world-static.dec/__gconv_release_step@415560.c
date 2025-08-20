__int64 __fastcall _gconv_release_step(__int64 result)
{
  __int64 v1; // x2
  __int64 *v2; // x19
  int v3; // w1
  void (*v4)(void); // x1
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5

  v1 = *(_QWORD *)result;
  v2 = (__int64 *)result;
  if ( *(_QWORD *)result )
  {
    v3 = *(_DWORD *)(result + 16) - 1;
    *(_DWORD *)(result + 16) = v3;
    if ( !v3 )
    {
      v4 = (void (*)(void))(*(_QWORD *)(result + 64) ^ _pointer_chk_guard_local);
      if ( v4 )
      {
        v4();
        v1 = *v2;
      }
      result = _gconv_release_shlib(v1);
      *v2 = 0;
    }
  }
  else
  {
    result = *(_QWORD *)(result + 64);
    if ( result )
    {
      v5 = _libc_assert_fail("step->__end_fct == NULL", "gconv_db.c", 221, "__gconv_release_step");
      return find_derivation(v5, v6, v7, v8, v9, v10);
    }
  }
  return result;
}
