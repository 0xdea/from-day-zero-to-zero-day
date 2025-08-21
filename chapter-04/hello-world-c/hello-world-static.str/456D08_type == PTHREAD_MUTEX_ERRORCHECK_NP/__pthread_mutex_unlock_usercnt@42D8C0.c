__int64 __fastcall _pthread_mutex_unlock_usercnt(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  int *v7; // x5
  __int64 v8; // x4
  __int64 v9; // x2
  unsigned int v11; // w20
  int v13; // w20
  int v14; // w0

  v7 = (int *)(a1 + 16);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = v8 & 0x17F;
  if ( (v8 & 0x7C) != 0 )
    return _pthread_mutex_unlock_full(a1, a2, v9, a4, v8, v7, a7);
  if ( (v8 & 0x17F) == 0 )
    goto LABEL_3;
  if ( (_DWORD)v9 == 256 )
  {
    v13 = *v7;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
      _lll_lock_wake(a1, v13 & 0x80);
    return 0;
  }
  if ( (*v7 & 0x7F) == 1 )
  {
    if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
    {
      v14 = *(_DWORD *)(a1 + 4) - 1;
      *(_DWORD *)(a1 + 4) = v14;
      if ( v14 )
        return 0;
LABEL_3:
      *(_DWORD *)(a1 + 8) = 0;
      if ( a2 )
        --*(_DWORD *)(a1 + 12);
      v11 = *v7 & 0x80;
      if ( v11 || !_libc_single_threaded )
      {
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
          _lll_lock_wake(a1, v11);
      }
      else
      {
        *(_DWORD *)a1 = 0;
      }
      return 0;
    }
    return 1;
  }
  if ( (*v7 & 0x7F) == 3 )
    goto LABEL_3;
  if ( (_DWORD)v9 != 2 )
    _libc_assert_fail(
      "type == PTHREAD_MUTEX_ERRORCHECK_NP",
      (__int64)"pthread_mutex_unlock.c",
      0x62u,
      (__int64)"__pthread_mutex_unlock_usercnt");
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
    return 1;
  if ( *(_DWORD *)a1 )
    goto LABEL_3;
  return 1;
}
