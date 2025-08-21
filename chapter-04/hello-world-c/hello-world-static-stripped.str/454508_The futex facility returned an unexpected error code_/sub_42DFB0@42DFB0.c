__int64 __fastcall sub_42DFB0(unsigned int *a1)
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
  unsigned int v13; // w21
  void *v14; // x1
  unsigned int *v15; // x0
  __int64 v16; // x2
  unsigned __int64 v17; // x0
  unsigned __int64 v19; // x0
  int v20; // w21
  unsigned int *v21; // x23
  int v22; // w20
  unsigned int v23; // w22
  unsigned int v24; // w0
  unsigned int v25; // w22
  unsigned int v26; // w0
  void *v27; // x19
  unsigned __int64 v28; // x0
  __int64 v29; // x0

  v2 = a1 + 6;
  v3 = a1[6];
  v4 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) == v3;
  v5 = a1[7];
  if ( v4 )
  {
    v20 = (v5 != 0) << 7;
    *v2 = 0;
    v21 = a1 + 3;
    v22 = _dl___aarch64_swp4_relax(0, a1 + 3) & 2;
    if ( a1[12] )
    {
      v25 = a1[1];
      while ( v25 )
      {
        v26 = _dl___aarch64_cas4_rel(v25, v25 | 0x80000000, (atomic_uint *)(a1 + 1));
        v4 = v26 == v25;
        v25 = v26;
        if ( v4 )
          goto LABEL_23;
      }
    }
    v23 = *a1;
    do
    {
      v24 = _dl___aarch64_cas4_rel(v23, (v23 >> 3 != 0) ^ v23 ^ 2, (atomic_uint *)a1);
      v4 = v24 == v23;
      v23 = v24;
    }
    while ( !v4 );
    if ( v24 >> 3 )
    {
      v27 = a1 + 2;
      if ( (_dl___aarch64_swp4_relax(0, v27) & 2) != 0 )
      {
        v28 = linux_eabi_syscall(__NR_futex, v27, (void *)(v20 ^ 0x81u), (void *)0x7FFFFFFF, 0, v10, v11, v12);
        if ( v28 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v28 + 22) & 0xFFFFFFF7) != 0 )
          goto LABEL_34;
      }
    }
LABEL_23:
    if ( v22 )
    {
      v16 = 1;
      v14 = (void *)(v20 ^ 0x81u);
      v15 = v21;
      goto LABEL_9;
    }
    return 0;
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
    v13 = v9;
    v7 = v9;
  }
  while ( !v4 );
  if ( (v8 & 1) != 0 )
  {
    __dmb(9u);
    if ( (_dl___aarch64_swp4_relax(1, a1 + 2) & 2) != 0 )
    {
      v19 = linux_eabi_syscall(__NR_futex, a1 + 2, (void *)(v6 ^ 0x81u), (void *)0x7FFFFFFF, 0, v10, v11, v12);
      if ( v19 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v19 + 22) & 0xFFFFFFF7) != 0 )
        goto LABEL_34;
    }
  }
  if ( ((v8 ^ v13) & 4) == 0 )
    return 0;
  v14 = (void *)(v6 ^ 0x81u);
  v15 = a1;
  v16 = 0x7FFFFFFF;
LABEL_9:
  v17 = linux_eabi_syscall(__NR_futex, v15, v14, (void *)v16, 0, v10, v11, v12);
  if ( v17 <= 0xFFFFFFFFFFFFF000LL || (((_DWORD)v17 + 22) & 0xFFFFFFF7) == 0 )
    return 0;
LABEL_34:
  v29 = sub_401A30("The futex facility returned an unexpected error code.\n");
  return sub_42E1E0(v29);
}
