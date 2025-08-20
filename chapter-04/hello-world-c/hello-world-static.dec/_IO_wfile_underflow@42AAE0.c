__int64 __fastcall IO_wfile_underflow(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  int v10; // w1
  unsigned int **v11; // x1
  _BYTE *v12; // x2
  __int64 v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1
  int *v16; // x21
  int v17; // w0
  unsigned __int64 v18; // x23
  __int64 v19; // x20
  unsigned __int64 v20; // x23
  int v21; // w1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  void *v26; // x4
  void *v27; // x5
  void *v28; // x6
  int *v29; // x1
  int v30; // w0
  int v31; // w0
  __int64 result; // x0
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  _QWORD *v41; // x0
  unsigned __int64 v42; // x21
  __int64 v43; // x1
  __int64 v44; // x20
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x20
  __int64 v48; // x2
  int v49; // w0
  _BYTE *v50; // x3
  unsigned __int64 v51; // x1
  unsigned int **v52; // x2
  unsigned int *v53; // x5
  unsigned int *v54; // x4
  unsigned __int64 v55; // x20
  unsigned __int64 v56; // x27
  int v57; // w1
  __int64 v58; // x20
  __int64 v59; // x28
  _BYTE *v60; // x27
  _BYTE *v61; // x0
  __int64 v62; // x27
  unsigned __int64 v63; // x0
  __int64 v64; // x20
  unsigned __int64 v65; // x2
  int v66; // w0
  unsigned int *v67; // x5
  unsigned int *v68; // x0
  unsigned int **v69; // x1
  int v70; // w0
  unsigned int **v71; // x3
  unsigned int *v72; // x2
  unsigned __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x0
  __int64 v78; // x0
  __int64 v79; // x0
  unsigned __int64 StatusReg; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  void *v84; // x4
  void *v85; // x5
  void *v86; // x6
  unsigned __int64 v87; // x3
  int v88; // w1
  _BYTE *v89; // [xsp+0h] [xbp-20h]
  _BYTE v90[16]; // [xsp+8h] [xbp-18h] BYREF

  v10 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x10) != 0 )
    return 0xFFFFFFFFLL;
  if ( (v10 & 4) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *(_DWORD *)a1 = v10 | 0x20;
    *(_DWORD *)(StatusReg + 40) = 9;
    return 0xFFFFFFFFLL;
  }
  v11 = *(unsigned int ***)(a1 + 160);
  if ( *v11 < v11[1] )
    return **v11;
  v12 = *(_BYTE **)(a1 + 8);
  v13 = *(_QWORD *)(a1 + 152);
  if ( (unsigned __int64)v12 < *(_QWORD *)(a1 + 16) )
  {
    v67 = v11[6];
    v68 = v11[11];
    v89 = v12;
    *v11 = v67;
    v11[2] = v67;
    v69 = v11 + 11;
    v69[1] = v68;
    v70 = _libio_codecvt_in(v13, v69);
    v71 = *(unsigned int ***)(a1 + 160);
    v72 = *v71;
    v73 = (unsigned __int64)v71[1];
    v74 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v89;
    *(_QWORD *)(a1 + 24) = v74;
    if ( (unsigned __int64)v72 < v73 )
      return *v72;
    if ( v70 == 2 )
    {
      v87 = _ReadStatusReg(TPIDR_EL0);
      v88 = *(_DWORD *)a1 | 0x20;
      *(_DWORD *)(v87 + 40) = 84;
      result = 0xFFFFFFFFLL;
      *(_DWORD *)a1 = v88;
      return result;
    }
    j_memmove(*(_QWORD *)(a1 + 56), v89, *(_QWORD *)(a1 + 16) - (_QWORD)v89);
    v76 = *(_QWORD *)(a1 + 8);
    v75 = *(_QWORD *)(a1 + 16);
    v14 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 24) = v14;
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 16) = v14 + v75 - v76;
    if ( v14 )
    {
LABEL_6:
      v15 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 32) = v14;
      *(_QWORD *)(a1 + 40) = v14;
      *(_QWORD *)(a1 + 48) = v14;
      if ( *(_QWORD *)(v15 + 48) )
        goto LABEL_7;
      goto LABEL_68;
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 24) = v14;
    if ( v14 )
      goto LABEL_6;
  }
  v77 = *(_QWORD *)(a1 + 72);
  if ( v77 )
  {
    free(v77, a2, a3, a4, a5, a6, a7, a8, a9);
    *(_DWORD *)a1 &= ~0x100u;
  }
  IO_doallocbuf((int *)a1, a2, a3, a4, a5, a6, a7, a8, a9);
  v15 = *(_QWORD *)(a1 + 160);
  v78 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 8) = v78;
  *(_QWORD *)(a1 + 16) = v78;
  *(_QWORD *)(a1 + 24) = v78;
  *(_QWORD *)(a1 + 32) = v78;
  *(_QWORD *)(a1 + 40) = v78;
  *(_QWORD *)(a1 + 48) = v78;
  if ( !*(_QWORD *)(v15 + 48) )
  {
LABEL_68:
    v79 = *(_QWORD *)(v15 + 64);
    if ( v79 )
    {
      free(v79, a2, a3, a4, a5, a6, a7, a8, a9);
      *(_DWORD *)a1 &= ~0x100u;
    }
    IO_wdoallocbuf(a1);
  }
LABEL_7:
  if ( (*(_DWORD *)a1 & 0x202) == 0 )
    goto LABEL_22;
  v16 = stdout;
  v17 = *stdout;
  if ( (*stdout & 0x8000) != 0 )
  {
    if ( (*stdout & 0x288) != 0x280 )
      goto LABEL_22;
LABEL_57:
    v29 = v16;
LABEL_58:
    v64 = *((_QWORD *)v29 + 27);
    if ( (unsigned __int64)(v64 - (_QWORD)&_io_vtables) > 0x92F )
      IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
    (*(void (__fastcall **)(__int64, int, double, double, double, double, double, double, double, double))(v64 + 0x18))(
      (__int64)stdout,
      -1,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9);
    goto LABEL_15;
  }
  v18 = _ReadStatusReg(TPIDR_EL0);
  v19 = *((_QWORD *)v16 + 17);
  v20 = v18 - 1856;
  v21 = (unsigned __int8)_libc_single_threaded;
  v22 = *(_QWORD *)(v19 + 8);
  if ( _libc_single_threaded && !v22 )
  {
    *(_DWORD *)v19 = 1;
    *(_QWORD *)(v19 + 8) = v20;
    if ( (v17 & 0x288) != 0x280 )
    {
      v31 = *(_DWORD *)(v19 + 4);
      goto LABEL_75;
    }
    goto LABEL_57;
  }
  if ( v20 == v22 )
  {
    ++*(_DWORD *)(v19 + 4);
    if ( (v17 & 0x288) != 0x280 )
    {
LABEL_17:
      v31 = *(_DWORD *)(v19 + 4);
      if ( !v21 )
      {
        if ( !v31 )
        {
          *(_QWORD *)(v19 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v19) > 1 )
            _lll_lock_wake_private((void *)v19, v81, v82, v83, v84, v85, v86);
          goto LABEL_22;
        }
LABEL_19:
        *(_DWORD *)(v19 + 4) = v31 - 1;
        goto LABEL_22;
      }
LABEL_75:
      if ( !v31 )
      {
        *(_DWORD *)v19 = 0;
        *(_QWORD *)(v19 + 8) = 0;
        goto LABEL_22;
      }
      goto LABEL_19;
    }
    goto LABEL_57;
  }
  if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v16 + 17)) )
    _lll_lock_wait_private((_DWORD *)v19, a2, a3, a4, a5, a6, a7, a8, a9, v23, v24, v25, v26, v27, v28);
  v29 = stdout;
  v30 = *stdout & 0x288;
  *(_QWORD *)(*((_QWORD *)v16 + 17) + 8LL) = v20;
  if ( v30 == 640 )
    goto LABEL_58;
LABEL_15:
  if ( (*v16 & 0x8000) == 0 )
  {
    v19 = *((_QWORD *)v16 + 17);
    v21 = (unsigned __int8)_libc_single_threaded;
    goto LABEL_17;
  }
LABEL_22:
  IO_switch_to_get_mode((unsigned int *)a1, a2, a3, a4, a5, a6, a7, a8, a9);
  v41 = *(_QWORD **)(a1 + 160);
  v42 = 0;
  v43 = v41[6];
  *v41 = v43;
  v41[1] = v43;
  v41[2] = v43;
  v41[3] = v43;
  v41[4] = v43;
  v41[5] = v43;
LABEL_23:
  v44 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v44 - (_QWORD)&_io_vtables) > 0x92F )
  {
    while ( 1 )
    {
      IO_vtable_check(v33, v34, v35, v36, v37, v38, v39, v40);
      v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v44 + 112))(
              a1,
              *(_QWORD *)(a1 + 16),
              *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 16));
      if ( v45 <= 0 )
        goto LABEL_39;
LABEL_25:
      v46 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 16) += v45;
      if ( v46 != -1 )
        *(_QWORD *)(a1 + 144) = v46 + v45;
      v47 = *(_QWORD *)(a1 + 160);
      v48 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v47 + 96) = *(_QWORD *)(v47 + 88);
      *(_QWORD *)(a1 + 24) = v48;
      if ( !v42 )
        break;
      v59 = 16 - v42;
      v60 = &v90[v42];
      if ( 16 - v42 > v45 )
        v59 = v45;
      v61 = &v90[v42];
      v42 += v59;
      j_memcpy(v61);
      v49 = _libio_codecvt_in(v13, v47 + 88);
      if ( !v42 )
        goto LABEL_29;
      v50 = v89;
      v62 = v89 - v60;
      if ( v62 < 0 )
        v62 = 0;
      v51 = *(_QWORD *)(a1 + 8) + v62;
LABEL_30:
      v52 = *(unsigned int ***)(a1 + 160);
      v53 = v52[1];
      v54 = v52[6];
      *(_QWORD *)(a1 + 8) = v51;
      if ( v53 != v54 )
        return **v52;
      if ( v49 == 2 )
        goto LABEL_61;
      if ( v49 != 1 )
        _libc_assert_fail("status == __codecvt_partial", (__int64)"wfileops.c", 0x120u, (__int64)"_IO_wfile_underflow");
      if ( v42 )
      {
        if ( v50 != v90 )
        {
          v42 -= v50 - v90;
          _memmove_chk(v90, v50, v42, 16);
        }
        if ( v42 == 16 )
          goto LABEL_61;
        v58 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 8) = v58;
        *(_QWORD *)(a1 + 16) = v58;
      }
      else
      {
        v55 = *(_QWORD *)(a1 + 24);
        v56 = *(_QWORD *)(a1 + 16) - v51;
        if ( v55 < v51 )
        {
          j_memmove(*(_QWORD *)(a1 + 24), v51, *(_QWORD *)(a1 + 16) - v51);
          v63 = *(_QWORD *)(a1 + 16) - v56;
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 24);
          *(_QWORD *)(a1 + 16) = v63;
          goto LABEL_23;
        }
        if ( v56 > 0xF )
        {
LABEL_61:
          v65 = _ReadStatusReg(TPIDR_EL0);
          v66 = *(_DWORD *)a1 | 0x20;
          *(_DWORD *)(v65 + 40) = 84;
          *(_DWORD *)a1 = v66;
          return 0xFFFFFFFFLL;
        }
        v42 = *(_QWORD *)(a1 + 16) - v51;
        j_memcpy(v90);
        *(_QWORD *)(a1 + 8) = v55;
        *(_QWORD *)(a1 + 16) = v55;
      }
      v44 = *(_QWORD *)(a1 + 216);
      if ( (unsigned __int64)(v44 - (_QWORD)&_io_vtables) <= 0x92F )
        goto LABEL_24;
    }
    v49 = _libio_codecvt_in(v13, v47 + 88);
LABEL_29:
    v50 = v89;
    v42 = 0;
    v51 = (unsigned __int64)v89;
    goto LABEL_30;
  }
LABEL_24:
  v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v44 + 112))(
          a1,
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 16));
  if ( v45 > 0 )
    goto LABEL_25;
LABEL_39:
  v57 = *(_DWORD *)a1;
  if ( !(v42 | v45) )
  {
    *(_DWORD *)a1 = v57 | 0x10;
    *(_QWORD *)(a1 + 144) = -1;
    return 0xFFFFFFFFLL;
  }
  *(_DWORD *)a1 = v57 | 0x20;
  if ( v42 )
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 84;
  return 0xFFFFFFFFLL;
}
