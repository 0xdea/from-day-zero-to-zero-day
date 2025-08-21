__int64 __fastcall sub_42E1E0(__int64 a1)
{
  _DWORD *v2; // x22
  int v3; // w1
  unsigned __int64 v4; // x21
  _DWORD *v5; // x24
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
  unsigned int v25; // w25
  unsigned int v26; // w23
  unsigned int v27; // w0
  unsigned int v29; // w20
  unsigned int v30; // w0
  void *v31; // x5
  void *v32; // x6
  void *v33; // x4
  unsigned __int64 v34; // x0
  unsigned __int64 v35; // x0
  char v36; // w0
  int v37; // w28
  unsigned int v38; // w0
  void *v39; // x4
  void *v40; // x5
  void *v41; // x6
  unsigned __int64 v42; // x0
  unsigned int v43; // w23
  unsigned int v44; // w1
  unsigned int v45; // w0

  v2 = (_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = _ReadStatusReg(TPIDR_EL0) - 1856;
  if ( v3 == *(_DWORD *)(v4 + 0xD0) )
    return 35;
  v5 = (_DWORD *)(a1 + 12);
  v6 = sub_44D5C0(2, a1);
  v7 = v6 & 2;
  v8 = 1;
  if ( (v6 & 2) == 0 )
    goto LABEL_3;
  v13 = *(_DWORD *)(a1 + 48);
  if ( v13 )
    _dl___aarch64_ldadd4_relax(1u, (atomic_uint *)(a1 + 4));
  v14 = (unsigned int *)(a1 + 12);
  v15 = 0;
  while ( v7 )
  {
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
    v5 = (_DWORD *)(a1 + 12);
    v18 = *v14;
    if ( (*v14 & 0xFFFFFFFD) == 1 && (v18 == 3 || _dl___aarch64_cas4_relax(v18, 3u, (atomic_uint *)(a1 + 12)) == v18) )
    {
      v19 = sub_442550(a1 + 12, 3, 0, 0, (unsigned __int8)(v17 != 0) << 7);
      v11 = v19;
      v20 = v19 == 110 || v19 == 75;
      if ( v20 )
      {
        if ( !v13 )
          return v11;
        v43 = *(_DWORD *)(a1 + 4);
        do
        {
          v44 = v43 - 1;
          if ( v43 == -2147483647 )
            v44 = 0;
          v45 = _aarch64_cas4_acq(v43, v44, (atomic_uint *)(a1 + 4));
          v20 = v45 == v43;
          v43 = v45;
        }
        while ( !v20 );
        if ( v45 != -2147483647 )
          return v11;
        v6 = *(_DWORD *)a1 | 2;
        v8 = 3;
        goto LABEL_3;
      }
      v6 = *(_DWORD *)a1;
      v15 = 1;
LABEL_31:
      v7 = v6 & 2;
    }
    else
    {
      v6 = *(_DWORD *)a1;
      v7 = *(_DWORD *)a1 & 2;
    }
  }
  v16 = _aarch64_cas4_acq(v6, v6 | 2, (atomic_uint *)a1);
  v20 = v16 == v6;
  v6 = v16;
  if ( !v20 )
    goto LABEL_31;
  if ( v13 )
    _dl___aarch64_ldadd4_relax(0xFFFFFFFF, (atomic_uint *)(a1 + 4));
LABEL_19:
  v5 = (_DWORD *)(a1 + 12);
  v6 |= 2u;
  if ( v15 )
    v8 = 3;
  else
    v8 = 1;
LABEL_3:
  *v5 = v8;
  v9 = v6 & 1;
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
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
  v25 = 75;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        if ( (*v23 & 0xFFFFFFFD) != 0 )
        {
LABEL_60:
          if ( v24 )
            goto LABEL_8;
          v36 = atomic_load((unsigned int *)a1);
          v24 = v36 & 1;
          continue;
        }
        break;
      }
      v26 = (*(_DWORD *)(a1 + 28) != 0) << 7;
      if ( (*v23 & 2) == 0 && _dl___aarch64_cas4_relax(0, 2u, (atomic_uint *)(a1 + 8)) )
        continue;
      break;
    }
    v27 = sub_442550(a1 + 8, 2, 0, 0, v26);
    v11 = v27;
    if ( v27 != 110 && v27 != v25 )
      continue;
    break;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    v24 = a1 + 4;
    v25 = *(_DWORD *)(a1 + 4);
    if ( v25 )
    {
      v37 = _dl___aarch64_swp4_relax(0, v5);
      while ( 1 )
      {
        v38 = _dl___aarch64_cas4_rel(v25, v25 | 0x80000000, (atomic_uint *)(a1 + 4));
        if ( v38 == v25 )
          break;
        v25 = v38;
        if ( !v38 )
        {
          *v5 = v37;
          goto LABEL_48;
        }
      }
      if ( (v37 & 2) == 0 )
        return v11;
      v42 = linux_eabi_syscall(__NR_futex, v5, (void *)(v26 ^ 0x81), (void *)1, 0, v39, v40, v41);
      if ( v42 <= 0xFFFFFFFFFFFFF000LL || (((_DWORD)v42 + 22) & 0xFFFFFFF7) == 0 )
        return v11;
LABEL_59:
      sub_401A30("The futex facility returned an unexpected error code.\n");
      goto LABEL_60;
    }
  }
LABEL_48:
  v29 = *(_DWORD *)a1;
  v24 = *(_DWORD *)a1 & 1;
  if ( !v24 )
  {
    v25 = _dl___aarch64_swp4_relax(0, v5);
    while ( 1 )
    {
      if ( v24 )
      {
        *v5 = v25;
        goto LABEL_63;
      }
      v30 = _dl___aarch64_cas4_rel(v29, (v29 ^ 2) & 0xFFFFFFFB, (atomic_uint *)a1);
      v20 = v30 == v29;
      v33 = (void *)v30;
      v29 = v30;
      if ( v20 )
        break;
      v24 = v30 & 1;
    }
    if ( (v25 & 2) == 0
      || (v34 = linux_eabi_syscall(__NR_futex, v5, (void *)(v26 ^ 0x81), (void *)1, 0, (void *)v30, v31, v32),
          v34 <= 0xFFFFFFFFFFFFF000LL)
      || (((_DWORD)v34 + 22) & 0xFFFFFFF7) == 0 )
    {
      if ( ((unsigned __int8)v33 & 4) == 0 )
        return 110;
      v35 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)(v26 ^ 0x81), (void *)0x7FFFFFFF, 0, v33, v31, v32);
      if ( v35 <= 0xFFFFFFFFFFFFF000LL || (((_DWORD)v35 + 22) & 0xFFFFFFF7) == 0 )
        return 110;
    }
    goto LABEL_59;
  }
LABEL_63:
  __dmb(9u);
  while ( (*v23 & 0xFFFFFFFD) == 0 )
    ;
LABEL_8:
  *v2 = *(_DWORD *)(v4 + 0xD0);
  return 0;
}
