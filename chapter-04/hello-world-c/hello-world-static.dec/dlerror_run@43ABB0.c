__int64 __fastcall dlerror_run(
        void (__fastcall *a1)(__int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // w19
  double v9; // d0
  double v10; // d1
  double v11; // d2
  double v12; // d3
  double v13; // d4
  double v14; // d5
  double v15; // d6
  double v16; // d7
  bool v18; // [xsp+7h] [xbp-19h] BYREF
  __int64 v19; // [xsp+8h] [xbp-18h] BYREF
  __int64 v20; // [xsp+10h] [xbp-10h] BYREF

  v20 = 0;
  v8 = dl_catch_error(&v19, &v20, &v18, a1, a2, a6, a7, a8);
  if ( !v8 )
  {
    if ( !v20 )
      return v8;
    v8 = 1;
  }
  if ( v18 )
    dl_error_free(v20, v9, v10, v11, v12, v13, v14, v15, v16);
  return v8;
}
