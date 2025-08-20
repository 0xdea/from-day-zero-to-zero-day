__int64 __fastcall getdelim(
        __int64 *a1,
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
  int v16; // w19
  unsigned __int64 *v18; // x23
  unsigned int v19; // w24
  unsigned __int64 StatusReg; // x1
  _DWORD *v21; // x21
  unsigned __int64 v22; // x25
  int v23; // w0
  bool v24; // zf
  __int64 v25; // x25
  __int64 v26; // x19
  __int64 v27; // x28
  __int64 v28; // x27
  unsigned __int64 v29; // x1
  __int64 v30; // x0
  unsigned __int64 v31; // x2
  unsigned __int64 v32; // x25
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  __int64 v41; // x0
  __int64 v42; // x3
  void *v43; // x4
  void *v44; // x5
  void *v45; // x6
  double v46; // d0
  double v47; // d1
  double v48; // d2
  double v49; // d3
  double v50; // d4
  double v51; // d5
  double v52; // d6
  double v53; // d7
  __int64 v54; // x21
  __int64 v55; // x0
  unsigned __int64 v56; // x1
  int v57; // w19
  int v58; // w1
  __int64 result; // x0
  __int64 v60; // x0
  int v61; // w19
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  void *v65; // x4
  void *v66; // x5
  void *v67; // x6
  int v68; // w19
  int v69; // w19

  v16 = *(_DWORD *)a4;
  v18 = (unsigned __int64 *)a2;
  v19 = a3;
  if ( (*(_DWORD *)a4 & 0x8000) != 0 )
  {
    if ( (v16 & 0x20) != 0 )
      return -1;
  }
  else
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v21 = *(_DWORD **)(a4 + 136);
    v22 = StatusReg - 1856;
    v23 = (unsigned __int8)_libc_single_threaded;
    a2 = *((_QWORD *)v21 + 1);
    if ( !_libc_single_threaded || a2 )
    {
      if ( v22 == a2 )
      {
        a2 = (unsigned int)(v21[1] + 1);
        v21[1] = a2;
        if ( (v16 & 0x20) != 0 )
        {
          v28 = -1;
LABEL_29:
          v58 = v21[1];
          if ( !v23 )
          {
            if ( !v58 )
            {
              *((_QWORD *)v21 + 1) = 0;
              if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v21) > 1 )
                _lll_lock_wake_private(v21, v62, v63, v64, v65, v66, v67);
              return v28;
            }
            goto LABEL_31;
          }
LABEL_41:
          if ( !v58 )
          {
            *v21 = 0;
            result = v28;
            *((_QWORD *)v21 + 1) = 0;
            return result;
          }
LABEL_31:
          v21[1] = v58 - 1;
          return v28;
        }
      }
      else
      {
        if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(a4 + 136)) )
          _lll_lock_wait_private(v21, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
        v16 = *(_DWORD *)a4;
        *(_QWORD *)(*(_QWORD *)(a4 + 136) + 8LL) = v22;
        if ( (v16 & 0x20) != 0 )
        {
          v28 = -1;
          if ( (v16 & 0x8000) != 0 )
            return v28;
          goto LABEL_28;
        }
      }
    }
    else
    {
      *v21 = 1;
      *((_QWORD *)v21 + 1) = v22;
      if ( (v16 & 0x20) != 0 )
      {
        v58 = v21[1];
        v28 = -1;
        goto LABEL_41;
      }
    }
  }
  if ( a1 )
    v24 = v18 == 0;
  else
    v24 = 1;
  if ( v24 )
  {
    v68 = v16 | 0x20;
    v28 = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    *(_DWORD *)a4 = v68;
    if ( (v68 & 0x8000) != 0 )
      return v28;
    goto LABEL_28;
  }
  if ( !*a1 || !*v18 )
  {
    *v18 = 120;
    v60 = malloc(0x78u, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
    *a1 = v60;
    if ( !v60 )
    {
      v61 = v16 | 0x20;
      *(_DWORD *)a4 = v61;
      v28 = -1;
      if ( (v61 & 0x8000) != 0 )
        return v28;
LABEL_28:
      v21 = *(_DWORD **)(a4 + 136);
      v23 = (unsigned __int8)_libc_single_threaded;
      goto LABEL_29;
    }
  }
  v25 = *(_QWORD *)(a4 + 8);
  v26 = *(_QWORD *)(a4 + 16) - v25;
  if ( v26 <= 0 )
  {
    if ( (unsigned int)_underflow(a4, a8, a9, a10, a11, a12, a13, a14, a15) == -1 )
    {
      v28 = -1;
      if ( (*(_DWORD *)a4 & 0x8000) != 0 )
        return v28;
      goto LABEL_28;
    }
    v25 = *(_QWORD *)(a4 + 8);
    v26 = *(_QWORD *)(a4 + 16) - v25;
  }
  v27 = 0;
  while ( 1 )
  {
    v41 = memchr(v25, v19, v26);
    v24 = v41 == 0;
    v54 = v41;
    v55 = v41 - v25;
    if ( !v24 )
      v26 = v55 + 1;
    if ( v26 >= 0x7FFFFFFFFFFFFFFFLL - v27 )
    {
      v56 = _ReadStatusReg(TPIDR_EL0);
      v28 = -1;
      v57 = *(_DWORD *)a4 | 0x20;
      *(_DWORD *)(v56 + 40) = 75;
      *(_DWORD *)a4 = v57;
      if ( (v57 & 0x8000) != 0 )
        return v28;
      goto LABEL_28;
    }
    v28 = v26 + v27;
    v29 = v26 + v27 + 1;
    v30 = *a1;
    if ( *v18 < v29 )
      break;
LABEL_21:
    j_memcpy(v30 + v27);
    *(_QWORD *)(a4 + 8) += v26;
    if ( v54 || (unsigned int)_underflow(a4, v33, v34, v35, v36, v37, v38, v39, v40) == -1 )
    {
      *(_BYTE *)(*a1 + v28) = 0;
      if ( (*(_DWORD *)a4 & 0x8000) == 0 )
        goto LABEL_28;
      return v28;
    }
    v25 = *(_QWORD *)(a4 + 8);
    v27 += v26;
    v26 = *(_QWORD *)(a4 + 16) - v25;
  }
  v31 = 2 * *v18;
  if ( v31 < v29 )
    v32 = v26 + v27 + 1;
  else
    v32 = 2 * *v18;
  v30 = realloc(v30, v32, v46, v47, v48, v49, v50, v51, v52, v53, v31, v42, v43, v44, v45);
  if ( v30 )
  {
    *a1 = v30;
    *v18 = v32;
    goto LABEL_21;
  }
  v28 = -1;
  v69 = *(_DWORD *)a4 | 0x20;
  *(_DWORD *)a4 = v69;
  if ( (v69 & 0x8000) == 0 )
    goto LABEL_28;
  return v28;
}
