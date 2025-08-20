__int64 __fastcall _dlopen(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  __int64 v17; // [xsp+8h] [xbp-28h] BYREF
  unsigned int v18; // [xsp+10h] [xbp-20h]
  __int64 v19; // [xsp+18h] [xbp-18h]
  __int64 v20; // [xsp+20h] [xbp-10h]

  v17 = a1;
  v18 = a2;
  v20 = a3;
  if ( (unsigned int)dlerror_run(
                       (void (__fastcall *)(__int64))dlopen_doit,
                       (__int64)&v17,
                       a4,
                       a5,
                       a6,
                       a7,
                       a8,
                       a9,
                       a10,
                       a11,
                       a3,
                       (__int64)&_stack_chk_guard,
                       a2,
                       a1,
                       a15,
                       a16) )
    return 0;
  else
    return v19;
}
