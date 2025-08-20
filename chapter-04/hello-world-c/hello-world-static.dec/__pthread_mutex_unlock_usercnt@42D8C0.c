__int64 __fastcall _pthread_mutex_unlock_usercnt(
        int *a1,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        void *a15)
{
  int *v15; // x5
  __int64 v16; // x4
  __int64 v17; // x2
  int v19; // w20
  __int64 v21; // x2
  __int64 v22; // x3
  void *v23; // x4
  void *v24; // x5
  void *v25; // x6
  int v26; // w20
  __int64 v27; // x2
  __int64 v28; // x3
  void *v29; // x4
  void *v30; // x5
  void *v31; // x6
  int v32; // w0

  v15 = a1 + 4;
  v16 = (unsigned int)a1[4];
  v17 = v16 & 0x17F;
  if ( (v16 & 0x7C) != 0 )
    return _pthread_mutex_unlock_full((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v17, a12, v16, v15, a15);
  if ( (v16 & 0x17F) == 0 )
    goto LABEL_3;
  if ( (_DWORD)v17 == 256 )
  {
    v26 = *v15;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
      _lll_lock_wake(a1, v26 & 0x80, v27, v28, v29, v30, v31);
    return 0;
  }
  if ( (*v15 & 0x7F) == 1 )
  {
    if ( a1[2] == *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
    {
      v32 = a1[1] - 1;
      a1[1] = v32;
      if ( v32 )
        return 0;
LABEL_3:
      a1[2] = 0;
      if ( a2 )
        --a1[3];
      v19 = *v15 & 0x80;
      if ( v19 || !_libc_single_threaded )
      {
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
          _lll_lock_wake(a1, v19, v21, v22, v23, v24, v25);
      }
      else
      {
        *a1 = 0;
      }
      return 0;
    }
    return 1;
  }
  if ( (*v15 & 0x7F) == 3 )
    goto LABEL_3;
  if ( (_DWORD)v17 != 2 )
    _libc_assert_fail(
      "type == PTHREAD_MUTEX_ERRORCHECK_NP",
      (__int64)"pthread_mutex_unlock.c",
      0x62u,
      (__int64)"__pthread_mutex_unlock_usercnt");
  if ( a1[2] != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
    return 1;
  if ( *a1 )
    goto LABEL_3;
  return 1;
}
