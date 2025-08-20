__int64 __fastcall _dlvsym(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  void *v30; // x6
  double v31; // d0
  double v32; // d1
  double v33; // d2
  double v34; // d3
  double v35; // d4
  double v36; // d5
  double v37; // d6
  double v38; // d7
  __int64 v39; // x19
  _QWORD v41[4]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v42; // [xsp+20h] [xbp-10h]

  v41[0] = a1;
  v41[1] = a2;
  v41[2] = a3;
  v41[3] = a4;
  pthread_mutex_lock(dl_load_lock, a5, a6, a7, a8, a9, a10, a11, a12, a2, a3, a4, &_stack_chk_guard, a1, 0);
  if ( (unsigned int)dlerror_run(
                       (void (__fastcall *)(__int64))dlvsym_doit,
                       (__int64)v41,
                       v18,
                       v19,
                       v20,
                       v21,
                       v22,
                       v23,
                       v24,
                       v25,
                       v12,
                       v13,
                       v14,
                       v15,
                       v16,
                       v17) )
    v39 = 0;
  else
    v39 = v42;
  pthread_mutex_unlock(dl_load_lock, v31, v32, v33, v34, v35, v36, v37, v38, v42, v26, v27, v28, v29, v30);
  return v39;
}
