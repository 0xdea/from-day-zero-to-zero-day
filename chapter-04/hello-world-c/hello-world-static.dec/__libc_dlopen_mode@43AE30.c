__int64 __fastcall _libc_dlopen_mode(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  bool v17; // [xsp+7h] [xbp-39h] BYREF
  __int64 v18; // [xsp+8h] [xbp-38h] BYREF
  __int64 v19; // [xsp+10h] [xbp-30h] BYREF
  __int64 v20; // [xsp+18h] [xbp-28h] BYREF
  unsigned int v21; // [xsp+20h] [xbp-20h]
  __int64 v22; // [xsp+30h] [xbp-10h]

  v19 = 0;
  v20 = a1;
  v21 = a2;
  if ( !(unsigned int)dl_catch_error(
                        &v18,
                        &v19,
                        &v17,
                        (void (__fastcall *)(__int64))do_dlopen,
                        (__int64)&v20,
                        a2,
                        a1,
                        a8)
    && !v19 )
  {
    return v22;
  }
  if ( v17 )
    dl_error_free(v19, v8, v9, v10, v11, v12, v13, v14, v15);
  return 0;
}
