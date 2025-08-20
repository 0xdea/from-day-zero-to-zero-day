__int64 __fastcall _dlsym(
        __int64 a1,
        __int64 a2,
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
        void *a15)
{
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  double v21; // d0
  double v22; // d1
  double v23; // d2
  double v24; // d3
  double v25; // d4
  double v26; // d5
  double v27; // d6
  double v28; // d7
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  void *v33; // x6
  double v34; // d0
  double v35; // d1
  double v36; // d2
  double v37; // d3
  double v38; // d4
  double v39; // d5
  double v40; // d6
  double v41; // d7
  __int64 v42; // x19
  _QWORD v44[3]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v45; // [xsp+20h] [xbp-10h]

  v44[0] = a1;
  v44[1] = a2;
  v44[2] = a3;
  pthread_mutex_lock(dl_load_lock, a4, a5, a6, a7, a8, a9, a10, a11, a2, a3, a1, &_stack_chk_guard, 0, a15);
  if ( (unsigned int)dlerror_run(
                       (void (__fastcall *)(__int64))dlsym_doit,
                       (__int64)v44,
                       v21,
                       v22,
                       v23,
                       v24,
                       v25,
                       v26,
                       v27,
                       v28,
                       v15,
                       v16,
                       v17,
                       v18,
                       v19,
                       v20) )
    v42 = 0;
  else
    v42 = v45;
  pthread_mutex_unlock(dl_load_lock, v34, v35, v36, v37, v38, v39, v40, v41, v45, v29, v30, v31, v32, v33);
  return v42;
}
