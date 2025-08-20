void __fastcall __noreturn Unwind_Resume_or_Rethrow(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // x30
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  char v15; // [xsp+0h] [xbp+0h]
  __int64 v16; // [xsp+C8h] [xbp+C8h] BYREF
  _BYTE v17[960]; // [xsp+D0h] [xbp+D0h] BYREF
  _QWORD v18[98]; // [xsp+490h] [xbp+490h] BYREF

  if ( a1[2] )
  {
    uw_init_context_1((__int64)v17, (__int64)&a9, v9);
    j_memcpy(v18);
    v11 = Unwind_ForcedUnwind_Phase2(a1, v18, &v16);
    if ( (_DWORD)v11 != 7 )
      abort(v11, v12, v13, v14);
    uw_install_context_1((__int64)v17, (__int64)v18, v13, v14);
    Unwind_DebugHook();
  }
  else
  {
    Unwind_RaiseException(a1, 0, a3, a4, a5, a6, a7, a8, v15);
  }
}
