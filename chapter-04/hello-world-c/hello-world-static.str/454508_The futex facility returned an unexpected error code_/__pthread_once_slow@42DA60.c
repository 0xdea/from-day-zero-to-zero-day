__int64 __fastcall _pthread_once_slow(unsigned int *a1, void (__fastcall *a2)(__int64))
{
  unsigned int v4; // w19
  unsigned int v6; // w22
  unsigned int v7; // w0
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  bool v11; // zf
  unsigned __int64 v12; // x0
  __int64 v13; // x0
  void *v14; // x4
  void *v15; // x5
  void *v16; // x6
  unsigned __int64 v17; // x0
  _QWORD v18[2]; // [xsp+0h] [xbp-40h] BYREF
  int v19; // [xsp+10h] [xbp-30h]
  _BYTE v20[32]; // [xsp+14h] [xbp-2Ch] BYREF
  int v21; // [xsp+34h] [xbp-Ch]

  while ( 1 )
  {
    v4 = atomic_load(a1);
    do
    {
      if ( (v4 & 2) != 0 )
        return 0;
      v6 = _fork_generation | 1;
      v7 = _aarch64_cas4_acq(v4, _fork_generation | 1, (atomic_uint *)a1);
      v11 = v7 == v4;
      v4 = v7;
    }
    while ( !v11 );
    if ( ((unsigned __int8)v7 & (v6 == v7)) == 0 )
      break;
    v12 = linux_eabi_syscall(__NR_futex, a1, (void *)0x80, (void *)v6, 0, v8, v9, v10);
    if ( v12 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v12 != -11 && (_DWORD)v12 != -4 )
      goto LABEL_10;
  }
  v18[0] = clear_once_control;
  v18[1] = a1;
  memset(v20, 0, sizeof(v20));
  v19 = 1;
  v21 = 0;
  v13 = pthread_cleanup_push(&v20[4], _pthread_cleanup_combined_routine_voidptr, v18);
  a2(v13);
  pthread_cleanup_pop(&v20[4], 0);
  atomic_store(2u, a1);
  v17 = linux_eabi_syscall(__NR_futex, a1, (void *)0x81, (void *)0x7FFFFFFF, 0, v14, v15, v16);
  if ( v17 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v17 + 22) & 0xFFFFFFF7) != 0 )
LABEL_10:
    _libc_fatal("The futex facility returned an unexpected error code.\n");
  return 0;
}
