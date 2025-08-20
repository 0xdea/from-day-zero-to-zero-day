__int64 __fastcall sub_42E1E0(__int64 a1)
{
  _DWORD *v2; // x22
  int v3; // w1
  unsigned __int64 v4; // x21
  int *v5; // x24
  unsigned int v6; // w20
  int v7; // w23
  int v8; // w0
  int v9; // w0
  unsigned int v10; // w0
  unsigned int v11; // w20
  int v13; // w26
  unsigned int *v14; // x25
  int v15; // w27
  unsigned int v16; // w0
  int v17; // w23
  unsigned int v18; // w20
  unsigned int v19; // w0
  bool v20; // zf
  unsigned int *v21; // x28
  unsigned int v22; // w24
  _DWORD *v23; // x27
  int v24; // w26
  unsigned int v25; // w23
  unsigned int v26; // w0
  unsigned int v28; // w25
  unsigned int v29; // w20
  int v30; // w26
  int v31; // w25
  unsigned int v32; // w0
  void *v33; // x5
  void *v34; // x6
  double v35; // d0
  double v36; // d1
  double v37; // d2
  double v38; // d3
  double v39; // d4
  double v40; // d5
  double v41; // d6
  double v42; // d7
  void *v43; // x4
  unsigned __int64 v44; // x0
  unsigned __int64 v45; // x0
  char v46; // w0
  int v47; // w28
  unsigned int v48; // w0
  void *v49; // x4
  void *v50; // x5
  void *v51; // x6
  unsigned __int64 v52; // x0
  unsigned int v53; // w23
  unsigned int v54; // w1
  unsigned int v55; // w0

  v2 = (_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = _ReadStatusReg(TPIDR_EL0) - 1856;
  if ( v3 == *(_DWORD *)(v4 + 0xD0) )
    return 35;
  v5 = (int *)(a1 + 12);
  v6 = sub_44D5C0(2, a1);
  v7 = v6 & 2;
  v8 = 1;
  if ( (v6 & 2) == 0 )
  {
LABEL_3:
    *v5 = v8;
    v9 = v6 & 1;
    if ( (v6 & 1) == 0 )
    {
      while ( !(v9 | (v6 >> 3)) )
      {
        v10 = _aarch64_cas4_acq(v6, v6 | 1, (atomic_uint *)a1);
        v20 = v10 == v6;
        v6 = v10;
        if ( v20 )
        {
          *(_DWORD *)(a1 + 8) = 1;
          goto LABEL_8;
        }
        v9 = v10 & 1;
      }
      v23 = (_DWORD *)(a1 + 8);
      v24 = 0;
      while ( 1 )
      {
        while ( (*v23 & 0xFFFFFFFD) != 0 )
        {
          if ( v24 )
            goto LABEL_8;
          v46 = atomic_load((unsigned int *)a1);
          v24 = v46 & 1;
        }
        v25 = (*(_DWORD *)(a1 + 28) != 0) << 7;
        if ( (*v23 & 2) != 0 || !_dl___aarch64_cas4_relax(0, 2u, (atomic_uint *)(a1 + 8)) )
        {
          v26 = sub_442550(a1 + 8, 2, 0, 0, v25);
          v11 = v26;
          if ( v26 == 110 || v26 == 75 )
            break;
        }
      }
      if ( *(_DWORD *)(a1 + 48) )
      {
        v28 = *(_DWORD *)(a1 + 4);
        if ( v28 )
        {
          v47 = _dl___aarch64_swp4_relax(0, v5);
          while ( 1 )
          {
            v48 = _dl___aarch64_cas4_rel(v28, v28 | 0x80000000, (atomic_uint *)(a1 + 4));
            if ( v48 == v28 )
              break;
            v28 = v48;
            if ( !v48 )
            {
              *v5 = v47;
              goto LABEL_48;
            }
          }
          if ( (v47 & 2) != 0 )
          {
            v52 = linux_eabi_syscall(__NR_futex, v5, (void *)(v25 ^ 0x81), (void *)1, 0, v49, v50, v51);
            if ( v52 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v52 + 22) & 0xFFFFFFF7) != 0 )
              goto LABEL_59;
          }
          return v11;
        }
      }
LABEL_48:
      v29 = *(_DWORD *)a1;
      v30 = *(_DWORD *)a1 & 1;
      if ( !v30 )
      {
        v31 = _dl___aarch64_swp4_relax(0, v5);
        while ( !v30 )
        {
          v32 = _dl___aarch64_cas4_rel(v29, (v29 ^ 2) & 0xFFFFFFFB, (atomic_uint *)a1);
          v20 = v32 == v29;
          v43 = (void *)v32;
          v29 = v32;
          if ( v20 )
          {
            if ( (v31 & 2) == 0
              || (v44 = linux_eabi_syscall(__NR_futex, v5, (void *)(v25 ^ 0x81), (void *)1, 0, (void *)v32, v33, v34),
                  v44 <= 0xFFFFFFFFFFFFF000LL)
              || (((_DWORD)v44 + 22) & 0xFFFFFFF7) == 0 )
            {
              if ( ((unsigned __int8)v43 & 4) == 0 )
                return 110;
              v45 = linux_eabi_syscall(
                      __NR_futex,
                      (void *)a1,
                      (void *)(v25 ^ 0x81),
                      (void *)0x7FFFFFFF,
                      0,
                      v43,
                      v33,
                      v34);
              if ( v45 <= 0xFFFFFFFFFFFFF000LL || (((_DWORD)v45 + 22) & 0xFFFFFFF7) == 0 )
                return 110;
            }
LABEL_59:
            sub_401A30(
              (__int64)"The futex facility returned an unexpected error code.\n",
              v35,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
          }
          v30 = v32 & 1;
        }
        *v5 = v31;
      }
      __dmb(9u);
      while ( (*v23 & 0xFFFFFFFD) == 0 )
        ;
    }
LABEL_8:
    *v2 = *(_DWORD *)(v4 + 0xD0);
    return 0;
  }
  v13 = *(_DWORD *)(a1 + 48);
  if ( v13 )
    _dl___aarch64_ldadd4_relax(1u, (atomic_uint *)(a1 + 4));
  v14 = (unsigned int *)(a1 + 12);
  v15 = 0;
  while ( 1 )
  {
    while ( !v7 )
    {
      v16 = _aarch64_cas4_acq(v6, v6 | 2, (atomic_uint *)a1);
      v20 = v16 == v6;
      v6 = v16;
      if ( v20 )
      {
        if ( v13 )
          _dl___aarch64_ldadd4_relax(0xFFFFFFFF, (atomic_uint *)(a1 + 4));
LABEL_19:
        v5 = (int *)(a1 + 12);
        v6 |= 2u;
        if ( v15 )
          v8 = 3;
        else
          v8 = 1;
        goto LABEL_3;
      }
LABEL_31:
      v7 = v6 & 2;
    }
    if ( v13 )
    {
      v21 = (unsigned int *)(a1 + 4);
      while ( (*v21 & 0x80000000) != 0 )
      {
        v22 = *v21;
        if ( _aarch64_cas4_acq(v22, v22 + 0x7FFFFFFF, (atomic_uint *)(a1 + 4)) == v22 )
        {
          v6 = *(_DWORD *)a1;
          goto LABEL_19;
        }
      }
    }
    v17 = *(_DWORD *)(a1 + 28);
    v5 = (int *)(a1 + 12);
    v18 = *v14;
    if ( (*v14 & 0xFFFFFFFD) == 1 && (v18 == 3 || _dl___aarch64_cas4_relax(v18, 3u, (atomic_uint *)(a1 + 12)) == v18) )
      break;
    v6 = *(_DWORD *)a1;
    v7 = *(_DWORD *)a1 & 2;
  }
  v19 = sub_442550(a1 + 12, 3, 0, 0, (unsigned __int8)(v17 != 0) << 7);
  v11 = v19;
  v20 = v19 == 110 || v19 == 75;
  if ( !v20 )
  {
    v6 = *(_DWORD *)a1;
    v15 = 1;
    goto LABEL_31;
  }
  if ( v13 )
  {
    v53 = *(_DWORD *)(a1 + 4);
    do
    {
      v54 = v53 - 1;
      if ( v53 == -2147483647 )
        v54 = 0;
      v55 = _aarch64_cas4_acq(v53, v54, (atomic_uint *)(a1 + 4));
      v20 = v55 == v53;
      v53 = v55;
    }
    while ( !v20 );
    if ( v55 == -2147483647 )
    {
      v6 = *(_DWORD *)a1 | 2;
      v8 = 3;
      goto LABEL_3;
    }
  }
  return v11;
}
