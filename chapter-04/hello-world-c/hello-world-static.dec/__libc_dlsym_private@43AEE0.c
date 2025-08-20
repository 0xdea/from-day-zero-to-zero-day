__int64 __fastcall _libc_dlsym_private(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // w0
  __int64 v9; // x1
  __int64 v10; // x0
  _QWORD v12[2]; // [xsp+8h] [xbp-28h] BYREF
  __int64 *v13; // [xsp+18h] [xbp-18h]
  __int64 v14; // [xsp+20h] [xbp-10h]

  v12[0] = a1;
  v12[1] = a2;
  v8 = dlerror_run(
         (void (__fastcall *)(__int64))do_dlsym_private,
         (__int64)v12,
         (__int64)&_stack_chk_guard,
         a2,
         a1,
         a6,
         a7,
         a8);
  v9 = 0;
  if ( !v8 )
  {
    v9 = v14;
    if ( v14 )
    {
      if ( *(unsigned __int16 *)(v14 + 6) == 65521 )
      {
        v10 = 0;
      }
      else
      {
        v10 = 0;
        if ( v13 )
          v10 = *v13;
      }
      return v10 + *(_QWORD *)(v14 + 8);
    }
  }
  return v9;
}
