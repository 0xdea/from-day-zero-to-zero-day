unsigned __int64 __fastcall sub_4094D4(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  __int64 v12; // x0
  unsigned __int64 v14; // x20
  __int64 v15; // x4
  unsigned __int64 v17; // x1
  __int64 v18; // x3
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x5
  unsigned __int64 v21; // x2
  __int64 v22; // x4
  unsigned __int16 v23; // w1
  unsigned __int8 v24; // w0
  unsigned __int64 v25; // x0
  unsigned __int64 v26; // x24
  unsigned int v27; // w21
  __int64 v28; // x0
  unsigned __int64 v29; // x20
  unsigned __int64 result; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  void *v34; // x4
  void *v35; // x5
  void *v36; // x6
  double v37; // d0
  double v38; // d1
  double v39; // d2
  double v40; // d3
  double v41; // d4
  double v42; // d5
  double v43; // d6
  double v44; // d7
  unsigned __int64 v45; // x24
  atomic_ullong *v46; // x22
  unsigned __int64 v47; // x0
  __int64 v48; // x6
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  void *v52; // x4
  void *v53; // x5
  void *v54; // x6
  unsigned __int64 v55; // x0
  unsigned __int64 v56; // x25
  unsigned __int64 v57; // x24
  unsigned __int64 v58; // x1
  __int64 v59; // x6
  unsigned __int64 v60; // x7

  v12 = *(_QWORD *)(a2 + 8);
  v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( -(__int64)(v12 & 0xFFFFFFFFFFFFFFF8LL) < a2 || (a2 & 0xF) != 0 )
    sub_407374((__int64)"free(): invalid pointer", a4, a5, a6, a7, a8, a9, a10, a11);
  if ( v14 <= 0x1F || (v15 = *(_QWORD *)(a2 + 8) & 8LL, (v12 & 8) != 0) )
    sub_407374((__int64)"free(): invalid size", a4, a5, a6, a7, a8, a9, a10, a11);
  v17 = _ReadStatusReg(TPIDR_EL0) + 48;
  v18 = *(_QWORD *)(v17 + 8);
  if ( v18 )
  {
    v19 = (v14 - 17) >> 4;
    if ( qword_490638 > v19 )
    {
      v20 = a2 + 16;
      if ( *(_QWORD *)(a2 + 24) == qword_496698 )
      {
        v18 = *(_QWORD *)(v17 + 8);
        v21 = qword_490648;
        v58 = *(_QWORD *)(v18 + 8 * (v19 + 16));
        if ( v58 )
        {
          do
          {
            if ( v15 == qword_490648 )
              sub_407374((__int64)"free(): too many chunks detected in tcache", a4, a5, a6, a7, a8, a9, a10, a11);
            if ( (v58 & 0xF) != 0 )
              sub_407374((__int64)"free(): unaligned chunk detected in tcache 2", a4, a5, a6, a7, a8, a9, a10, a11);
            if ( v58 == v20 )
              sub_407374((__int64)"free(): double free detected in tcache 2", a4, a5, a6, a7, a8, a9, a10, a11);
            v59 = *(_QWORD *)v58;
            v60 = v58 >> 12;
            ++v15;
            v58 = (v58 >> 12) ^ *(_QWORD *)v58;
          }
          while ( v60 != v59 );
        }
      }
      else
      {
        v21 = qword_490648;
      }
      v22 = 2 * v19;
      v23 = *(_WORD *)(v18 + 2 * v19);
      if ( v21 > v23 )
      {
        result = v18 + 8 * v19;
        v48 = qword_496698;
        *(_QWORD *)(a2 + 16) = *(_QWORD *)(result + 128) ^ (v20 >> 12);
        *(_QWORD *)(a2 + 24) = v48;
        *(_QWORD *)(result + 128) = v20;
        *(_WORD *)(v18 + v22) = v23 + 1;
        return result;
      }
    }
    v24 = byte_496688;
  }
  else
  {
    v24 = byte_496688;
  }
  if ( v14 > v24 )
  {
    if ( (*(_QWORD *)(a2 + 8) & 2) != 0 )
      return sub_407620((_QWORD *)a2, a4, a5, a6, a7, a8, a9, a10, a11);
    if ( byte_490F08 || a3 )
      return (unsigned __int64)sub_409394(a1, (__int64 *)a2, v14, a4, a5, a6, a7, a8, a9, a10, a11);
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
      sub_406F40((_DWORD *)a1, v31, v32, v33, v34, v35, v36);
    sub_409394(a1, (__int64 *)a2, v14, v37, v38, v39, v40, v41, v42, v43, v44);
    result = _aarch64_swp4_rel(0, (atomic_uint *)a1);
    if ( (int)result > 1 )
      return sub_407040(a1);
    return result;
  }
  v25 = *(_QWORD *)(a2 + v14 + 8);
  if ( v25 <= 0x10 || (v25 & 0xFFFFFFFFFFFFFFF8LL) >= *(_QWORD *)(a1 + 2184) )
  {
    if ( !a3 )
    {
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
        sub_406F40((_DWORD *)a1, v49, v50, v51, v52, v53, v54);
      v55 = *(_QWORD *)(a2 + v14 + 8);
      if ( v55 <= 0x10 )
      {
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
          sub_407040(a1);
      }
      else
      {
        v56 = *(_QWORD *)(a1 + 2184);
        v57 = v55 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
          sub_407040(a1);
        if ( v57 < v56 )
          goto LABEL_14;
      }
    }
    sub_407374((__int64)"free(): invalid next size (fast)", a4, a5, a6, a7, a8, a9, a10, a11);
  }
LABEL_14:
  v26 = a2 + 16;
  if ( dword_49668C )
    ifunc_40DE70(a2 + 16, (unsigned int)dword_49668C, v14 - 16);
  *(_DWORD *)(a1 + 8) = 1;
  v27 = (unsigned int)v14 >> 4;
  v28 = a1 + 8LL * (((unsigned int)v14 >> 4) - 2);
  v29 = *(_QWORD *)(v28 + 16);
  if ( !byte_490F08 )
  {
    v45 = v26 >> 12;
    v46 = (atomic_ullong *)(a1 + 8LL * (v27 & 0xFFFFFFF));
    while ( v29 != a2 )
    {
      *(_QWORD *)(a2 + 16) = v45 ^ v29;
      v47 = _dl___aarch64_cas8_rel(v29, a2, v46);
      if ( v29 == v47 )
        goto LABEL_19;
      v29 = v47;
    }
LABEL_34:
    sub_407374((__int64)"double free or corruption (fasttop)", a4, a5, a6, a7, a8, a9, a10, a11);
  }
  if ( a2 == v29 )
    goto LABEL_34;
  *(_QWORD *)(a2 + 16) = v29 ^ (v26 >> 12);
  *(_QWORD *)(v28 + 16) = a2;
LABEL_19:
  result = v29 != 0;
  if ( (a3 & (unsigned int)result) != 0 )
  {
    result = *(_QWORD *)(v29 + 8);
    if ( v27 != (unsigned int)result >> 4 )
      sub_407374((__int64)"invalid fastbin entry (free)", a4, a5, a6, a7, a8, a9, a10, a11);
  }
  return result;
}
