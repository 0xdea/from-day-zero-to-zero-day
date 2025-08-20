__int64 __fastcall _pthread_once_slow(unsigned int *a1, void (__fastcall *a2)(__int64))
{
  unsigned int v4; // w19
  unsigned int v6; // w22
  unsigned int v7; // w0
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  double v11; // d0
  double v12; // d1
  double v13; // d2
  double v14; // d3
  double v15; // d4
  double v16; // d5
  double v17; // d6
  double v18; // d7
  bool v19; // zf
  unsigned __int64 v20; // x0
  __int64 v21; // x0
  void *v22; // x4
  void *v23; // x5
  void *v24; // x6
  unsigned __int64 v25; // x0
  _QWORD v26[2]; // [xsp+0h] [xbp-40h] BYREF
  int v27; // [xsp+10h] [xbp-30h]
  _BYTE v28[32]; // [xsp+14h] [xbp-2Ch] BYREF
  int v29; // [xsp+34h] [xbp-Ch]

  while ( 1 )
  {
    v4 = atomic_load(a1);
    do
    {
      if ( (v4 & 2) != 0 )
        return 0;
      v6 = _fork_generation | 1;
      v7 = _aarch64_cas4_acq(v4, _fork_generation | 1, (atomic_uint *)a1);
      v19 = v7 == v4;
      v4 = v7;
    }
    while ( !v19 );
    if ( ((unsigned __int8)v7 & (v6 == v7)) == 0 )
      break;
    v20 = linux_eabi_syscall(__NR_futex, a1, (void *)0x80, (void *)v6, 0, v8, v9, v10);
    if ( v20 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v20 != -11 && (_DWORD)v20 != -4 )
      goto LABEL_10;
  }
  v26[0] = clear_once_control;
  v26[1] = a1;
  memset(v28, 0, sizeof(v28));
  v27 = 1;
  v29 = 0;
  v21 = pthread_cleanup_push(&v28[4], _pthread_cleanup_combined_routine_voidptr, v26);
  a2(v21);
  pthread_cleanup_pop(&v28[4], 0);
  atomic_store(2u, a1);
  v25 = linux_eabi_syscall(__NR_futex, a1, (void *)0x81, (void *)0x7FFFFFFF, 0, v22, v23, v24);
  if ( v25 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v25 + 22) & 0xFFFFFFF7) != 0 )
LABEL_10:
    _libc_fatal(
      (__int64)"The futex facility returned an unexpected error code.\n",
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  return 0;
}
