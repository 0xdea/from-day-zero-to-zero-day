__int64 __fastcall pthread_rwlock_unlock(unsigned int *a1)
{
  _DWORD *v2; // x1
  unsigned int v3; // w2
  bool v4; // zf
  unsigned int v5; // w0
  int v6; // w23
  unsigned int v7; // w22
  unsigned int v8; // w20
  unsigned int v9; // w0
  void *v10; // x4
  void *v11; // x5
  void *v12; // x6
  double v13; // d0
  double v14; // d1
  double v15; // d2
  double v16; // d3
  double v17; // d4
  double v18; // d5
  double v19; // d6
  double v20; // d7
  unsigned int v21; // w21
  void *v22; // x1
  unsigned int *v23; // x0
  __int64 v24; // x2
  unsigned __int64 v25; // x0
  unsigned __int64 v27; // x0
  int v28; // w21
  unsigned int *v29; // x23
  int v30; // w20
  unsigned int v31; // w22
  unsigned int v32; // w0
  unsigned int v33; // w22
  unsigned int v34; // w0
  void *v35; // x19
  unsigned __int64 v36; // x0

  v2 = a1 + 6;
  v3 = a1[6];
  v4 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) == v3;
  v5 = a1[7];
  if ( v4 )
  {
    v28 = (v5 != 0) << 7;
    *v2 = 0;
    v29 = a1 + 3;
    v30 = _dl___aarch64_swp4_relax(0, a1 + 3) & 2;
    if ( a1[12] )
    {
      v33 = a1[1];
      while ( v33 )
      {
        v34 = _dl___aarch64_cas4_rel(v33, v33 | 0x80000000, (atomic_uint *)(a1 + 1));
        v4 = v34 == v33;
        v33 = v34;
        if ( v4 )
          goto LABEL_23;
      }
    }
    v31 = *a1;
    do
    {
      v32 = _dl___aarch64_cas4_rel(v31, (v31 >> 3 != 0) ^ v31 ^ 2, (atomic_uint *)a1);
      v4 = v32 == v31;
      v31 = v32;
    }
    while ( !v4 );
    if ( !(v32 >> 3)
      || (v35 = a1 + 2, (_dl___aarch64_swp4_relax(0, v35) & 2) == 0)
      || (v36 = linux_eabi_syscall(__NR_futex, v35, (void *)(v28 ^ 0x81u), (void *)0x7FFFFFFF, 0, v10, v11, v12),
          v36 <= 0xFFFFFFFFFFFFF000LL)
      || (((_DWORD)v36 + 22) & 0xFFFFFFF7) == 0 )
    {
LABEL_23:
      if ( !v30 )
        return 0;
      v24 = 1;
      v22 = (void *)(v28 ^ 0x81u);
      v23 = v29;
      goto LABEL_9;
    }
LABEL_34:
    _libc_fatal(
      (__int64)"The futex facility returned an unexpected error code.\n",
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v6 = (v5 != 0) << 7;
  v7 = *a1;
  do
  {
    v8 = v7 - 8;
    if ( !((v7 - 8) >> 3) )
    {
      if ( (v8 & 2) != 0 )
        v8 |= 1u;
      v8 &= ~4u;
    }
    v9 = _dl___aarch64_cas4_rel(v7, v8, (atomic_uint *)a1);
    v4 = v9 == v7;
    v21 = v9;
    v7 = v9;
  }
  while ( !v4 );
  if ( (v8 & 1) != 0 )
  {
    __dmb(9u);
    if ( (_dl___aarch64_swp4_relax(1, a1 + 2) & 2) != 0 )
    {
      v27 = linux_eabi_syscall(__NR_futex, a1 + 2, (void *)(v6 ^ 0x81u), (void *)0x7FFFFFFF, 0, v10, v11, v12);
      if ( v27 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v27 + 22) & 0xFFFFFFF7) != 0 )
        goto LABEL_34;
    }
  }
  if ( ((v8 ^ v21) & 4) == 0 )
    return 0;
  v22 = (void *)(v6 ^ 0x81u);
  v23 = a1;
  v24 = 0x7FFFFFFF;
LABEL_9:
  v25 = linux_eabi_syscall(__NR_futex, v23, v22, (void *)v24, 0, v10, v11, v12);
  if ( v25 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v25 + 22) & 0xFFFFFFF7) != 0 )
    goto LABEL_34;
  return 0;
}
