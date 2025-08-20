__int64 __fastcall pthread_mutex_lock(
        _DWORD *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  _DWORD *v15; // x21
  __int64 v16; // x2
  int v18; // w20
  __int64 v19; // x2
  __int64 v20; // x3
  void *v21; // x4
  void *v22; // x5
  void *v23; // x6
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  unsigned __int64 v32; // x20
  int v33; // w0
  unsigned __int64 StatusReg; // x20
  int v36; // w1
  int v37; // w0
  int v38; // w21
  __int64 v39; // x2
  __int64 v40; // x3
  void *v41; // x4
  void *v42; // x5
  void *v43; // x6
  double v44; // d0
  double v45; // d1
  double v46; // d2
  double v47; // d3
  double v48; // d4
  double v49; // d5
  double v50; // d6
  double v51; // d7
  int v52; // w1
  int v53; // w22
  int v54; // w20
  __int64 v55; // x2
  __int64 v56; // x3
  void *v57; // x4
  void *v58; // x5
  void *v59; // x6
  double v60; // d0
  double v61; // d1
  double v62; // d2
  double v63; // d3
  double v64; // d4
  double v65; // d5
  double v66; // d6
  double v67; // d7

  v15 = a1 + 4;
  v16 = (unsigned int)a1[4];
  if ( (v16 & 0x7C) != 0 )
    return _pthread_mutex_lock_full((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9, v16 & 0x17F, v16, a12, a13, a14, a15);
  if ( (v16 & 0x17F) == 0 )
    goto LABEL_3;
  if ( (*v15 & 0x7F) == 1 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v36 = a1[2];
    v32 = StatusReg - 1856;
    if ( v36 != *(_DWORD *)(v32 + 0xD0) )
    {
      v38 = *v15 & 0x80;
      if ( v38 || !_libc_single_threaded || *a1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
          _lll_lock_wait(a1, v38, v44, v45, v46, v47, v48, v49, v50, v51, v39, v40, v41, v42, v43);
        v36 = a1[2];
      }
      else
      {
        *a1 = 1;
      }
      if ( v36 )
        _libc_assert_fail(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0x82u,
          (__int64)"___pthread_mutex_lock");
      a1[1] = 1;
      goto LABEL_8;
    }
    v37 = a1[1];
    if ( v37 != -1 )
    {
      a1[1] = v37 + 1;
      return 0;
    }
    return 11;
  }
  else
  {
    if ( (*v15 & 0x7F) == 3 )
    {
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
      {
        v53 = 2 * (a1[5] + 5);
        if ( v53 > (__int16)_mutex_aconf )
          v53 = (__int16)_mutex_aconf;
        if ( v53 <= 1 )
        {
          v53 = 1;
LABEL_43:
          v54 = v53;
          if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
            _lll_lock_wait(a1, *v15 & 0x80, v60, v61, v62, v63, v64, v65, v66, v67, v55, v56, v57, v58, v59);
        }
        else
        {
          v54 = 1;
          while ( *a1 || _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
          {
            if ( v53 == ++v54 )
              goto LABEL_43;
          }
        }
        a1[5] += (v54 - a1[5]) / 8;
      }
      if ( a1[2] )
        _libc_assert_fail(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0xA7u,
          (__int64)"___pthread_mutex_lock");
      goto LABEL_7;
    }
    v52 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0);
    if ( (*v15 & 0x7F) != 2 )
      _libc_assert_fail(
        "PTHREAD_MUTEX_TYPE (mutex) == PTHREAD_MUTEX_ERRORCHECK_NP",
        (__int64)"pthread_mutex_lock.c",
        0xACu,
        (__int64)"___pthread_mutex_lock");
    if ( v52 != a1[2] )
    {
LABEL_3:
      v18 = *v15 & 0x80;
      if ( v18 || !_libc_single_threaded || *a1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
          _lll_lock_wait(a1, v18, v24, v25, v26, v27, v28, v29, v30, v31, v19, v20, v21, v22, v23);
      }
      else
      {
        *a1 = 1;
      }
      if ( a1[2] )
        _libc_assert_fail(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0x5Eu,
          (__int64)"___pthread_mutex_lock");
LABEL_7:
      v32 = _ReadStatusReg(TPIDR_EL0) - 1856;
LABEL_8:
      v33 = a1[3] + 1;
      a1[2] = *(_DWORD *)(v32 + 0xD0);
      a1[3] = v33;
      return 0;
    }
    return 35;
  }
}
