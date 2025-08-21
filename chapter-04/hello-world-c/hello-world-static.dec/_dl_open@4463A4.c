__int64 __fastcall dl_open(
        const char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  int v15; // w20
  int v19; // w26
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  void *v27; // x6
  __int64 v28; // x7
  double v29; // d0
  double v30; // d1
  double v31; // d2
  double v32; // d3
  double v33; // d4
  double v34; // d5
  double v35; // d6
  double v36; // d7
  int v37; // w19
  __int64 **v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  void *v42; // x6
  double v43; // d0
  double v44; // d1
  double v45; // d2
  double v46; // d3
  double v47; // d4
  double v48; // d5
  double v49; // d6
  double v50; // d7
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  void *v57; // x6
  double v58; // d0
  double v59; // d1
  double v60; // d2
  double v61; // d3
  double v62; // d4
  double v63; // d5
  double v64; // d6
  double v65; // d7
  __int64 v67; // x1
  _QWORD v68[3]; // [xsp+50h] [xbp+50h] BYREF
  const char *v69; // [xsp+68h] [xbp+68h] BYREF
  int v70; // [xsp+70h] [xbp+70h]
  __int64 v71; // [xsp+78h] [xbp+78h]
  __int64 v72; // [xsp+80h] [xbp+80h]
  __int64 v73; // [xsp+88h] [xbp+88h]
  unsigned int v74; // [xsp+90h] [xbp+90h]
  unsigned __int8 v75; // [xsp+94h] [xbp+94h]
  int v76; // [xsp+98h] [xbp+98h]
  void *v77; // [xsp+A0h] [xbp+A0h]
  void *v78; // [xsp+A8h] [xbp+A8h]

  v15 = a2;
  if ( (a2 & 3) == 0 )
    dl_signal_error(22, a1, 0, "invalid mode for dlopen()");
  v19 = (int)a5;
  pthread_mutex_lock(dl_load_lock, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  if ( a4 == -1 )
  {
    pthread_mutex_unlock(dl_load_lock, v29, v30, v31, v32, v33, v34, v35, v36, v22, v23, v24, v25, v26, v27);
    dl_signal_error(22, a1, 0, "no more namespaces available for dlmopen()");
  }
  if ( ((a4 + 2) & 0xFFFFFFFFFFFFFFFDLL) != 0 )
    dl_signal_error(22, a1, 0, "invalid target namespace in dlmopen()");
  v69 = a1;
  v70 = v15;
  v71 = a3;
  v72 = 0;
  v73 = a4;
  v76 = v19;
  v77 = a6;
  v78 = a7;
  v37 = dl_catch_exception(
          v68,
          (void (__fastcall *)(__int64))dl_open_worker,
          (__int64)&v69,
          v24,
          v25,
          v26,
          (__int64)v27,
          v28);
  dl_unload_cache();
  v51 = v73;
  if ( (v73 & 0x8000000000000000LL) == 0 )
  {
    v38 = &dl_ns;
    v39 = v74;
    HIDWORD((&dl_ns)[21 * v73 + 3]) = v74;
  }
  if ( v68[1] )
  {
    v67 = v75;
    if ( (v75 & 1) == 0 )
    {
      v38 = &dl_ns;
      v67 = (__int64)&(&dl_ns)[21 * v51];
      *(_QWORD *)(v67 + 32) = 0;
    }
    if ( v72 )
      dl_close_worker(v72, 1u);
    pthread_mutex_unlock(dl_load_lock, v43, v44, v45, v46, v47, v48, v49, v50, v67, (__int64)v38, v39, v40, v41, v42);
    dl_signal_exception(v37, (__int64)v68, 0);
  }
  if ( dl_debug_update(v51)[6] )
    _libc_assert_fail("r_state == RT_CONSISTENT", (__int64)"dl-open.c", 0x3B9u, (__int64)"_dl_open");
  pthread_mutex_unlock(dl_load_lock, v58, v59, v60, v61, v62, v63, v64, v65, v52, v53, v54, v55, v56, v57);
  return v72;
}
