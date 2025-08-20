__int64 __fastcall fclose(
        unsigned int *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // x1
  __int64 v11; // x20
  __int64 v12; // x21
  double v13; // d0
  double v14; // d1
  double v15; // d2
  double v16; // d3
  double v17; // d4
  double v18; // d5
  double v19; // d6
  double v20; // d7
  __int64 *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  void *v25; // x4
  void *v26; // x5
  void *v27; // x6
  double v28; // d0
  double v29; // d1
  double v30; // d2
  double v31; // d3
  double v32; // d4
  double v33; // d5
  double v34; // d6
  double v35; // d7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  void *v39; // x4
  void *v40; // x5
  void *v41; // x6
  __int64 v45; // x0
  unsigned __int64 StatusReg; // x20
  __int64 v47; // x21
  unsigned __int64 v48; // x20
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  void *v53; // x4
  void *v54; // x5
  void *v55; // x6
  int v56; // w1
  _DWORD *v57; // x21
  int v58; // w0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  void *v62; // x4
  void *v63; // x5
  void *v64; // x6

  v9 = *a1;
  if ( (v9 & 0x2000) != 0 )
  {
    IO_un_link((__int64)a1);
    LODWORD(v9) = *a1;
    v45 = *a1;
    if ( (*a1 & 0x8000) != 0 )
      goto LABEL_24;
  }
  else
  {
    v11 = v9 << 58 >> 63;
    if ( (v9 & 0x8000) != 0 )
      goto LABEL_3;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v47 = *((_QWORD *)a1 + 17);
  v48 = StatusReg - 1856;
  v49 = *(_QWORD *)(v47 + 8);
  if ( _libc_single_threaded && !v49 )
  {
    v45 = (unsigned int)v9;
    *(_DWORD *)v47 = 1;
    *(_QWORD *)(v47 + 8) = v48;
    if ( (v9 & 0x2000) == 0 )
      goto LABEL_35;
LABEL_25:
    LODWORD(v11) = IO_new_file_close_it((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9);
    v56 = *a1 & 0x8000;
    goto LABEL_26;
  }
  if ( v48 == v49 )
  {
    v45 = (unsigned int)v9;
    ++*(_DWORD *)(v47 + 4);
  }
  else
  {
    if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)a1 + 17)) )
      _lll_lock_wait_private((_DWORD *)v47, a2, a3, a4, a5, a6, a7, a8, a9, v50, v51, v52, v53, v54, v55);
    v45 = *a1;
    *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) = v48;
  }
LABEL_24:
  if ( (v45 & 0x2000) != 0 )
    goto LABEL_25;
LABEL_35:
  v56 = v45 & 0x8000;
  v11 = v45 << 58 >> 63;
LABEL_26:
  if ( v56 )
    goto LABEL_3;
  v57 = (_DWORD *)*((_QWORD *)a1 + 17);
  v58 = v57[1];
  if ( !_libc_single_threaded )
  {
    if ( !v58 )
    {
      *((_QWORD *)v57 + 1) = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v57) > 1 )
        _lll_lock_wake_private(v57, v59, v60, v61, v62, v63, v64);
LABEL_3:
      v12 = *((_QWORD *)a1 + 27);
      if ( (unsigned __int64)(v12 - (_QWORD)&_io_vtables) <= 0x92F )
        goto LABEL_4;
LABEL_30:
      IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
      (*(void (__fastcall **)(unsigned int *, _QWORD))(v12 + 16))(a1, 0);
      if ( (int)a1[48] > 0 )
        goto LABEL_5;
      goto LABEL_31;
    }
LABEL_37:
    v57[1] = v58 - 1;
    goto LABEL_3;
  }
  if ( v58 )
    goto LABEL_37;
  *((_QWORD *)v57 + 1) = 0;
  *v57 = 0;
  v12 = *((_QWORD *)a1 + 27);
  if ( (unsigned __int64)(v12 - (_QWORD)&_io_vtables) > 0x92F )
    goto LABEL_30;
LABEL_4:
  (*(void (__fastcall **)(unsigned int *, _QWORD))(v12 + 16))(a1, 0);
  if ( (int)a1[48] > 0 )
  {
LABEL_5:
    v21 = (__int64 *)*((_QWORD *)a1 + 19);
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)_gconv_lock) )
      _lll_lock_wait_private(_gconv_lock, v28, v29, v30, v31, v32, v33, v34, v35, v22, v23, v24, v25, v26, v27);
    _gconv_release_step(*v21);
    _gconv_release_step(v21[7]);
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)_gconv_lock) > 1 )
      _lll_lock_wake_private(_gconv_lock, v36, v37, v38, v39, v40, v41);
    goto LABEL_9;
  }
LABEL_31:
  if ( *((_QWORD *)a1 + 9) )
    IO_free_backup_area(a1);
LABEL_9:
  if ( a1 != (unsigned int *)&IO_2_1_stdout_
    && a1 != (unsigned int *)&IO_2_1_stdin_
    && a1 != (unsigned int *)&IO_2_1_stderr_ )
  {
    free((__int64)a1, v13, v14, v15, v16, v17, v18, v19, v20);
  }
  return (unsigned int)v11;
}
