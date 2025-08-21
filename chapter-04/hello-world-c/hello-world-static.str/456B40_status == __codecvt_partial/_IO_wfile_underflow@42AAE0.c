__int64 __fastcall IO_wfile_underflow(int *a1)
{
  int v2; // w1
  unsigned int **v3; // x1
  _BYTE *v4; // x2
  __int64 v5; // x24
  __int64 v6; // x0
  __int64 v7; // x1
  int *v8; // x21
  int v9; // w0
  unsigned __int64 v10; // x23
  __int64 v11; // x20
  unsigned __int64 v12; // x23
  int v13; // w1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  void *v18; // x4
  void *v19; // x5
  void *v20; // x6
  int *v21; // x1
  int v22; // w0
  int v23; // w0
  __int64 result; // x0
  _QWORD *v25; // x0
  unsigned __int64 v26; // x21
  __int64 v27; // x1
  __int64 v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  int v32; // w0
  _BYTE *v33; // x3
  unsigned __int64 v34; // x1
  unsigned int **v35; // x2
  unsigned int *v36; // x5
  unsigned int *v37; // x4
  unsigned __int64 v38; // x20
  unsigned __int64 v39; // x27
  int v40; // w1
  __int64 v41; // x20
  __int64 v42; // x28
  _BYTE *v43; // x27
  _BYTE *v44; // x0
  __int64 v45; // x27
  unsigned __int64 v46; // x0
  __int64 v47; // x20
  unsigned __int64 v48; // x2
  int v49; // w0
  unsigned int *v50; // x5
  unsigned int *v51; // x0
  int v52; // w0
  unsigned int **v53; // x3
  _BYTE *v54; // x1
  unsigned int *v55; // x2
  unsigned __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x0
  unsigned __int64 StatusReg; // x2
  unsigned __int64 v64; // x3
  int v65; // w1
  _BYTE *v66; // [xsp+0h] [xbp-20h]
  _BYTE v67[16]; // [xsp+8h] [xbp-18h] BYREF

  v2 = *a1;
  if ( (*a1 & 0x10) != 0 )
    return 0xFFFFFFFFLL;
  if ( (v2 & 4) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *a1 = v2 | 0x20;
    *(_DWORD *)(StatusReg + 40) = 9;
    return 0xFFFFFFFFLL;
  }
  v3 = (unsigned int **)*((_QWORD *)a1 + 20);
  if ( *v3 < v3[1] )
    return **v3;
  v4 = (_BYTE *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 19);
  if ( (unsigned __int64)v4 < *((_QWORD *)a1 + 2) )
  {
    v50 = v3[6];
    v51 = v3[11];
    v66 = v4;
    *v3 = v50;
    v3[2] = v50;
    v3[12] = v51;
    v52 = _libio_codecvt_in(v5);
    v53 = (unsigned int **)*((_QWORD *)a1 + 20);
    v54 = v66;
    v55 = *v53;
    v56 = (unsigned __int64)v53[1];
    v57 = *((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 1) = v66;
    *((_QWORD *)a1 + 3) = v57;
    if ( (unsigned __int64)v55 < v56 )
      return *v55;
    if ( v52 == 2 )
    {
      v64 = _ReadStatusReg(TPIDR_EL0);
      v65 = *a1 | 0x20;
      *(_DWORD *)(v64 + 40) = 84;
      result = 0xFFFFFFFFLL;
      *a1 = v65;
      return result;
    }
    j_memmove(*((_QWORD *)a1 + 7), v54, *((_QWORD *)a1 + 2) - (_QWORD)v54);
    v59 = *((_QWORD *)a1 + 1);
    v58 = *((_QWORD *)a1 + 2);
    v6 = *((_QWORD *)a1 + 7);
    *((_QWORD *)a1 + 3) = v6;
    *((_QWORD *)a1 + 1) = v6;
    *((_QWORD *)a1 + 2) = v6 + v58 - v59;
    if ( v6 )
    {
LABEL_6:
      v7 = *((_QWORD *)a1 + 20);
      *((_QWORD *)a1 + 4) = v6;
      *((_QWORD *)a1 + 5) = v6;
      *((_QWORD *)a1 + 6) = v6;
      if ( *(_QWORD *)(v7 + 48) )
        goto LABEL_7;
      goto LABEL_68;
    }
  }
  else
  {
    v6 = *((_QWORD *)a1 + 7);
    *((_QWORD *)a1 + 1) = v6;
    *((_QWORD *)a1 + 2) = v6;
    *((_QWORD *)a1 + 3) = v6;
    if ( v6 )
      goto LABEL_6;
  }
  v60 = *((_QWORD *)a1 + 9);
  if ( v60 )
  {
    free(v60);
    *a1 &= ~0x100u;
  }
  IO_doallocbuf(a1);
  v7 = *((_QWORD *)a1 + 20);
  v61 = *((_QWORD *)a1 + 7);
  *((_QWORD *)a1 + 1) = v61;
  *((_QWORD *)a1 + 2) = v61;
  *((_QWORD *)a1 + 3) = v61;
  *((_QWORD *)a1 + 4) = v61;
  *((_QWORD *)a1 + 5) = v61;
  *((_QWORD *)a1 + 6) = v61;
  if ( !*(_QWORD *)(v7 + 48) )
  {
LABEL_68:
    v62 = *(_QWORD *)(v7 + 64);
    if ( v62 )
    {
      free(v62);
      *a1 &= ~0x100u;
    }
    IO_wdoallocbuf(a1);
  }
LABEL_7:
  if ( (*a1 & 0x202) == 0 )
    goto LABEL_22;
  v8 = stdout;
  v9 = *stdout;
  if ( (*stdout & 0x8000) != 0 )
  {
    if ( (*stdout & 0x288) != 0x280 )
      goto LABEL_22;
LABEL_57:
    v21 = v8;
LABEL_58:
    v47 = *((_QWORD *)v21 + 27);
    if ( (unsigned __int64)(v47 - (_QWORD)&_io_vtables) > 0x92F )
      IO_vtable_check();
    (*(void (__fastcall **)(int *, __int64))(v47 + 0x18))(stdout, 0xFFFFFFFFLL);
    goto LABEL_15;
  }
  v10 = _ReadStatusReg(TPIDR_EL0);
  v11 = *((_QWORD *)v8 + 17);
  v12 = v10 - 1856;
  v13 = (unsigned __int8)_libc_single_threaded;
  v14 = *(_QWORD *)(v11 + 8);
  if ( _libc_single_threaded && !v14 )
  {
    *(_DWORD *)v11 = 1;
    *(_QWORD *)(v11 + 8) = v12;
    if ( (v9 & 0x288) != 0x280 )
    {
      v23 = *(_DWORD *)(v11 + 4);
      goto LABEL_75;
    }
    goto LABEL_57;
  }
  if ( v12 == v14 )
  {
    ++*(_DWORD *)(v11 + 4);
    if ( (v9 & 0x288) != 0x280 )
    {
LABEL_17:
      v23 = *(_DWORD *)(v11 + 4);
      if ( !v13 )
      {
        if ( !v23 )
        {
          *(_QWORD *)(v11 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v11) > 1 )
            _lll_lock_wake_private(v11);
          goto LABEL_22;
        }
LABEL_19:
        *(_DWORD *)(v11 + 4) = v23 - 1;
        goto LABEL_22;
      }
LABEL_75:
      if ( !v23 )
      {
        *(_DWORD *)v11 = 0;
        *(_QWORD *)(v11 + 8) = 0;
        goto LABEL_22;
      }
      goto LABEL_19;
    }
    goto LABEL_57;
  }
  if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v8 + 17)) )
    _lll_lock_wait_private((_DWORD *)v11, v15, v16, v17, v18, v19, v20);
  v21 = stdout;
  v22 = *stdout & 0x288;
  *(_QWORD *)(*((_QWORD *)v8 + 17) + 8LL) = v12;
  if ( v22 == 640 )
    goto LABEL_58;
LABEL_15:
  if ( (*v8 & 0x8000) == 0 )
  {
    v11 = *((_QWORD *)v8 + 17);
    v13 = (unsigned __int8)_libc_single_threaded;
    goto LABEL_17;
  }
LABEL_22:
  IO_switch_to_get_mode(a1);
  v25 = (_QWORD *)*((_QWORD *)a1 + 20);
  v26 = 0;
  v27 = v25[6];
  *v25 = v27;
  v25[1] = v27;
  v25[2] = v27;
  v25[3] = v27;
  v25[4] = v27;
  v25[5] = v27;
LABEL_23:
  v28 = *((_QWORD *)a1 + 27);
  if ( (unsigned __int64)(v28 - (_QWORD)&_io_vtables) > 0x92F )
  {
    while ( 1 )
    {
      IO_vtable_check();
      v29 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v28 + 112))(
              a1,
              *((_QWORD *)a1 + 2),
              *((_QWORD *)a1 + 8) - *((_QWORD *)a1 + 2));
      if ( v29 <= 0 )
        goto LABEL_39;
LABEL_25:
      v30 = *((_QWORD *)a1 + 18);
      *((_QWORD *)a1 + 2) += v29;
      if ( v30 != -1 )
        *((_QWORD *)a1 + 18) = v30 + v29;
      v31 = *((_QWORD *)a1 + 1);
      *(_QWORD *)(*((_QWORD *)a1 + 20) + 96LL) = *(_QWORD *)(*((_QWORD *)a1 + 20) + 88LL);
      *((_QWORD *)a1 + 3) = v31;
      if ( !v26 )
        break;
      v42 = 16 - v26;
      v43 = &v67[v26];
      if ( 16 - v26 > v29 )
        v42 = v29;
      v44 = &v67[v26];
      v26 += v42;
      j_memcpy(v44);
      v32 = _libio_codecvt_in(v5);
      if ( !v26 )
        goto LABEL_29;
      v33 = v66;
      v45 = v66 - v43;
      if ( v45 < 0 )
        v45 = 0;
      v34 = *((_QWORD *)a1 + 1) + v45;
LABEL_30:
      v35 = (unsigned int **)*((_QWORD *)a1 + 20);
      v36 = v35[1];
      v37 = v35[6];
      *((_QWORD *)a1 + 1) = v34;
      if ( v36 != v37 )
        return **v35;
      if ( v32 == 2 )
        goto LABEL_61;
      if ( v32 != 1 )
        _libc_assert_fail("status == __codecvt_partial", (__int64)"wfileops.c", 0x120u, (__int64)"_IO_wfile_underflow");
      if ( v26 )
      {
        if ( v33 != v67 )
        {
          v26 -= v33 - v67;
          _memmove_chk(v67, v33, v26, 16);
        }
        if ( v26 == 16 )
          goto LABEL_61;
        v41 = *((_QWORD *)a1 + 3);
        *((_QWORD *)a1 + 1) = v41;
        *((_QWORD *)a1 + 2) = v41;
      }
      else
      {
        v38 = *((_QWORD *)a1 + 3);
        v39 = *((_QWORD *)a1 + 2) - v34;
        if ( v38 < v34 )
        {
          j_memmove(*((_QWORD *)a1 + 3), v34, *((_QWORD *)a1 + 2) - v34);
          v46 = *((_QWORD *)a1 + 2) - v39;
          *((_QWORD *)a1 + 1) = *((_QWORD *)a1 + 3);
          *((_QWORD *)a1 + 2) = v46;
          goto LABEL_23;
        }
        if ( v39 > 0xF )
        {
LABEL_61:
          v48 = _ReadStatusReg(TPIDR_EL0);
          v49 = *a1 | 0x20;
          *(_DWORD *)(v48 + 40) = 84;
          *a1 = v49;
          return 0xFFFFFFFFLL;
        }
        v26 = *((_QWORD *)a1 + 2) - v34;
        j_memcpy(v67);
        *((_QWORD *)a1 + 1) = v38;
        *((_QWORD *)a1 + 2) = v38;
      }
      v28 = *((_QWORD *)a1 + 27);
      if ( (unsigned __int64)(v28 - (_QWORD)&_io_vtables) <= 0x92F )
        goto LABEL_24;
    }
    v32 = _libio_codecvt_in(v5);
LABEL_29:
    v33 = v66;
    v26 = 0;
    v34 = (unsigned __int64)v66;
    goto LABEL_30;
  }
LABEL_24:
  v29 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v28 + 112))(
          a1,
          *((_QWORD *)a1 + 2),
          *((_QWORD *)a1 + 8) - *((_QWORD *)a1 + 2));
  if ( v29 > 0 )
    goto LABEL_25;
LABEL_39:
  v40 = *a1;
  if ( !(v26 | v29) )
  {
    *a1 = v40 | 0x10;
    *((_QWORD *)a1 + 18) = -1;
    return 0xFFFFFFFFLL;
  }
  *a1 = v40 | 0x20;
  if ( v26 )
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 84;
  return 0xFFFFFFFFLL;
}
