__int64 __fastcall do_sym(
        __int64 a1,
        const char *a2,
        unsigned __int64 a3,
        const char **a4,
        int a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13)
{
  __int64 (__fastcall **v17)(__int64, __int64 *); // x0
  __int64 (__fastcall *v18)(__int64, __int64 *); // x2
  bool v19; // zf
  __int64 *dso_for_object; // x7
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  __int64 *v30; // x2
  __int64 *v31; // x3
  __int64 *v32; // x1
  __int64 v33; // x5
  __int64 v34; // x7
  double v35; // d0
  double v36; // d1
  double v37; // d2
  double v38; // d3
  double v39; // d4
  double v40; // d5
  double v41; // d6
  double v42; // d7
  unsigned __int64 StatusReg; // x20
  void *v44; // x20
  int v45; // w19
  void *v46; // x4
  void *v47; // x5
  void *v48; // x6
  signed __int64 v49; // x0
  __int64 v50; // [xsp+8h] [xbp-58h] BYREF
  _QWORD v51[3]; // [xsp+10h] [xbp-50h] BYREF
  __int64 v52; // [xsp+28h] [xbp-38h] BYREF
  __int64 v53; // [xsp+30h] [xbp-30h]
  __int64 v54; // [xsp+38h] [xbp-28h]
  int v55; // [xsp+40h] [xbp-20h]
  __int64 *v56; // [xsp+50h] [xbp-10h]

  v50 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
    {
      v17 = (__int64 (__fastcall **)(__int64, __int64 *))dl_lookup_symbol_x(
                                                           a2,
                                                           a1,
                                                           &v50,
                                                           (__int64 **)(a1 + 984),
                                                           a4,
                                                           0,
                                                           a5,
                                                           0,
                                                           a6,
                                                           a7,
                                                           a8,
                                                           a9,
                                                           a10,
                                                           a11,
                                                           a12,
                                                           a13);
      goto LABEL_4;
    }
    dso_for_object = dl_find_dso_for_object(a3);
    if ( dso_for_object )
    {
      if ( dso_for_object != dl_ns )
      {
LABEL_15:
        v30 = dso_for_object;
        do
        {
          v31 = v30;
          v30 = (__int64 *)v30[101];
        }
        while ( v30 );
        v17 = (__int64 (__fastcall **)(__int64, __int64 *))dl_lookup_symbol_x(
                                                             a2,
                                                             (__int64)dso_for_object,
                                                             &v50,
                                                             (__int64 **)v31 + 123,
                                                             a4,
                                                             0,
                                                             a5,
                                                             (__int64)dso_for_object,
                                                             v22,
                                                             v23,
                                                             v24,
                                                             v25,
                                                             v26,
                                                             v27,
                                                             v28,
                                                             v29);
        goto LABEL_4;
      }
    }
    else
    {
      dso_for_object = dl_ns;
      if ( !dl_ns )
        goto LABEL_21;
    }
    if ( dso_for_object[115] <= a3 && dso_for_object[116] > a3 )
      goto LABEL_15;
LABEL_21:
    dl_signal_error(0, 0, 0, "RTLD_NEXT used in code not dynamically loaded");
  }
  v32 = dl_find_dso_for_object(a3);
  if ( !v32 )
    v32 = dl_ns;
  if ( _libc_single_threaded )
  {
    v17 = (__int64 (__fastcall **)(__int64, __int64 *))dl_lookup_symbol_x(
                                                         a2,
                                                         (__int64)v32,
                                                         &v50,
                                                         (__int64 **)v32[122],
                                                         a4,
                                                         0,
                                                         a5 | 1u,
                                                         0,
                                                         v35,
                                                         v36,
                                                         v37,
                                                         v38,
                                                         v39,
                                                         v40,
                                                         v41,
                                                         v42);
  }
  else
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v52 = (__int64)v32;
    v53 = (__int64)a2;
    *(_DWORD *)(StatusReg - 1856 + 4) = 1;
    v54 = (__int64)a4;
    v55 = a5 | 5;
    v56 = &v50;
    __dmb(0xBu);
    v44 = (void *)(StatusReg - 1852);
    v45 = dl_catch_exception(v51, (void (__fastcall *)(__int64))call_dl_lookup, (__int64)&v52, 1, 5, v33, a5 | 5u, v34);
    if ( (unsigned int)_aarch64_swp4_rel(0, (atomic_uint *)v44) == 2 )
      v49 = linux_eabi_syscall(__NR_futex, v44, (void *)0x81, (void *)1, 0, v46, v47, v48);
    if ( v51[1] )
      dl_signal_exception(v45, (__int64)v51, 0);
    v17 = (__int64 (__fastcall **)(__int64, __int64 *))v52;
  }
LABEL_4:
  v18 = 0;
  if ( v50 )
  {
    if ( v17 )
      v19 = *(unsigned __int16 *)(v50 + 6) == 65521;
    else
      v19 = 1;
    if ( !v19 )
      v18 = *v17;
    v18 = (__int64 (__fastcall *)(__int64, __int64 *))((char *)v18 + *(_QWORD *)(v50 + 8));
    if ( (*(_BYTE *)(v50 + 4) & 0xF) == 0xA )
    {
      v52 = 24;
      v53 = dl_hwcap;
      v54 = dl_hwcap2;
      return v18(dl_hwcap | 0x4000000000000000LL, &v52);
    }
  }
  return (__int64)v18;
}
