__int64 __fastcall pthread_mutex_lock(
        atomic_uint *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7)
{
  _DWORD *v7; // x21
  __int64 v8; // x2
  int v10; // w20
  __int64 v11; // x2
  __int64 v12; // x3
  void *v13; // x4
  void *v14; // x5
  void *v15; // x6
  unsigned __int64 v16; // x20
  int v17; // w0
  unsigned __int64 StatusReg; // x20
  int v20; // w1
  int v21; // w0
  int v22; // w21
  __int64 v23; // x2
  __int64 v24; // x3
  void *v25; // x4
  void *v26; // x5
  void *v27; // x6
  int v28; // w1
  int v29; // w22
  int v30; // w20
  __int64 v31; // x2
  __int64 v32; // x3
  void *v33; // x4
  void *v34; // x5
  void *v35; // x6

  v7 = (_DWORD *)((char *)a1 + 16);
  v8 = *((unsigned int *)a1 + 4);
  if ( (v8 & 0x7C) != 0 )
    return _pthread_mutex_lock_full((__int64)a1, v8 & 0x17F, v8, a4, a5, a6, a7);
  if ( (v8 & 0x17F) == 0 )
    goto LABEL_3;
  if ( (*v7 & 0x7F) == 1 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v20 = *((_DWORD *)a1 + 2);
    v16 = StatusReg - 1856;
    if ( v20 != *(_DWORD *)(v16 + 0xD0) )
    {
      v22 = *v7 & 0x80;
      if ( v22 || !_libc_single_threaded || *(_DWORD *)a1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, a1) )
          _lll_lock_wait(a1, v22, v23, v24, v25, v26, v27);
        v20 = *((_DWORD *)a1 + 2);
      }
      else
      {
        *(_DWORD *)a1 = 1;
      }
      if ( v20 )
        _libc_assert_fail(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0x82u,
          (__int64)"___pthread_mutex_lock");
      *((_DWORD *)a1 + 1) = 1;
      goto LABEL_8;
    }
    v21 = *((_DWORD *)a1 + 1);
    if ( v21 != -1 )
    {
      *((_DWORD *)a1 + 1) = v21 + 1;
      return 0;
    }
    return 11;
  }
  else
  {
    if ( (*v7 & 0x7F) == 3 )
    {
      if ( _aarch64_cas4_acq(0, 1u, a1) )
      {
        v29 = 2 * (*((_DWORD *)a1 + 5) + 5);
        if ( v29 > (__int16)_mutex_aconf )
          v29 = (__int16)_mutex_aconf;
        if ( v29 <= 1 )
        {
          v29 = 1;
LABEL_43:
          v30 = v29;
          if ( _aarch64_cas4_acq(0, 1u, a1) )
            _lll_lock_wait(a1, *v7 & 0x80, v31, v32, v33, v34, v35);
        }
        else
        {
          v30 = 1;
          while ( *(_DWORD *)a1 || _aarch64_cas4_acq(0, 1u, a1) )
          {
            if ( v29 == ++v30 )
              goto LABEL_43;
          }
        }
        *((_DWORD *)a1 + 5) += (v30 - *((_DWORD *)a1 + 5)) / 8;
      }
      if ( *((_DWORD *)a1 + 2) )
        _libc_assert_fail(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0xA7u,
          (__int64)"___pthread_mutex_lock");
      goto LABEL_7;
    }
    v28 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0);
    if ( (*v7 & 0x7F) != 2 )
      _libc_assert_fail(
        "PTHREAD_MUTEX_TYPE (mutex) == PTHREAD_MUTEX_ERRORCHECK_NP",
        (__int64)"pthread_mutex_lock.c",
        0xACu,
        (__int64)"___pthread_mutex_lock");
    if ( v28 != *((_DWORD *)a1 + 2) )
    {
LABEL_3:
      v10 = *v7 & 0x80;
      if ( v10 || !_libc_single_threaded || *(_DWORD *)a1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, a1) )
          _lll_lock_wait(a1, v10, v11, v12, v13, v14, v15);
      }
      else
      {
        *(_DWORD *)a1 = 1;
      }
      if ( *((_DWORD *)a1 + 2) )
        _libc_assert_fail(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0x5Eu,
          (__int64)"___pthread_mutex_lock");
LABEL_7:
      v16 = _ReadStatusReg(TPIDR_EL0) - 1856;
LABEL_8:
      v17 = *((_DWORD *)a1 + 3) + 1;
      *((_DWORD *)a1 + 2) = *(_DWORD *)(v16 + 0xD0);
      *((_DWORD *)a1 + 3) = v17;
      return 0;
    }
    return 35;
  }
}
