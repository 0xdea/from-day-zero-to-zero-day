__int64 __fastcall _pthread_mutex_unlock_full(
        __int64 a1,
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
        void *a14,
        void *a15)
{
  _DWORD *v16; // x20
  int v17; // w0
  unsigned int v18; // w2
  __int64 result; // x0
  unsigned __int64 v20; // x4
  unsigned __int64 v21; // x20
  bool v22; // zf
  int v23; // w0
  int v24; // w3
  int v25; // w2
  int v26; // w0
  int v27; // w2
  __int64 v28; // x3
  void *v29; // x4
  void *v30; // x5
  void *v31; // x6
  unsigned int v32; // w21
  signed int v33; // w22
  unsigned int v34; // w0
  void *v35; // x4
  void *v36; // x5
  void *v37; // x6
  unsigned __int64 v38; // x0
  unsigned __int64 StatusReg; // x21
  int v40; // w0
  int v41; // w23
  unsigned int v42; // w20
  unsigned __int64 v43; // x22
  unsigned int v44; // w0
  unsigned __int64 v45; // x3
  int v46; // w2
  bool v47; // zf
  __int64 v48; // x3
  unsigned __int64 v49; // x0
  int v50; // w0
  int v51; // w0
  unsigned __int64 v52; // x0
  bool v53; // cf
  char v54; // w0

  v16 = (_DWORD *)(a1 + 16);
  v17 = *(_DWORD *)(a1 + 16);
  v18 = v17 & 0x7F;
  if ( v18 > 0x33 )
  {
    if ( v18 == 66 )
    {
      if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) || (*(_DWORD *)a1 & 0x7FFFF) == 0 )
        return 1;
    }
    else if ( v18 > 0x42 )
    {
      if ( v18 != 67 )
        return 22;
    }
    else if ( v18 != 64 )
    {
      if ( v18 != 65 )
        return 22;
      if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
        return 1;
      v23 = *(_DWORD *)(a1 + 4) - 1;
      *(_DWORD *)(a1 + 4) = v23;
      if ( v23 )
        return 0;
    }
    *(_DWORD *)(a1 + 8) = 0;
    if ( a2 )
      --*(_DWORD *)(a1 + 12);
    v32 = *(_DWORD *)a1;
    do
    {
      v33 = v32 & 0xFFF80000;
      v34 = _dl___aarch64_cas4_rel(v32, v32 & 0xFFF80000, (atomic_uint *)a1);
      v22 = v34 == v32;
      v32 = v34;
    }
    while ( !v22 );
    if ( (v34 & 0x7FFFE) == 0 )
      return _pthread_tpp_change_priority((unsigned int)(v33 >> 19), 0xFFFFFFFFLL);
    v38 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)(*v16 & 0x80 ^ 0x81u), (void *)1, 0, v35, v36, v37);
    if ( v38 <= 0xFFFFFFFFFFFFF000LL || (((_DWORD)v38 + 22) & 0xFFFFFFF7) == 0 )
      return _pthread_tpp_change_priority((unsigned int)(v33 >> 19), 0xFFFFFFFFLL);
    goto LABEL_75;
  }
  if ( (v17 & 0x60) == 0 )
  {
    if ( v18 != 17 )
    {
      if ( v18 > 0x11 )
      {
        if ( v18 - 18 <= 1 )
          goto LABEL_10;
      }
      else if ( v18 == 16 )
      {
LABEL_10:
        v21 = _ReadStatusReg(TPIDR_EL0) - 1856;
        result = 1;
        if ( *(_DWORD *)a1 )
          v22 = (*(_DWORD *)a1 & 0x3FFFFFFF) == *(_DWORD *)(v21 + 0xD0);
        else
          v22 = 0;
        if ( !v22 )
          return result;
        if ( *(_DWORD *)(a1 + 8) == 0x7FFFFFFF )
          v27 = 2147483646;
        else
          v27 = 0;
LABEL_26:
        *(_QWORD *)(v21 + 0xF0) = a1 + 32;
        v28 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFELL) - 8) = v28;
        *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFELL) = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 8) = v27;
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        if ( a2 )
          --*(_DWORD *)(a1 + 12);
        if ( (_aarch64_swp4_rel(0, (atomic_uint *)a1) & 0x80000000) == 0
          || (v49 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)1, (void *)1, 0, v29, v30, v31),
              v49 <= 0xFFFFFFFFFFFFF000LL)
          || (((_DWORD)v49 + 22) & 0xFFFFFFF7) == 0 )
        {
          *(_QWORD *)(v21 + 0xF0) = 0;
          return 0;
        }
        goto LABEL_75;
      }
      return 22;
    }
    v21 = _ReadStatusReg(TPIDR_EL0) - 1856;
    v24 = *(_DWORD *)(a1 + 8);
    v25 = *(_DWORD *)(v21 + 0xD0);
    if ( (*(_DWORD *)a1 & 0x3FFFFFFF) == v25 && v24 == 0x7FFFFFFF )
    {
      v27 = 2147483646;
      v51 = *(_DWORD *)(a1 + 4) - 1;
      *(_DWORD *)(a1 + 4) = v51;
      if ( v51 )
        return 131;
      goto LABEL_26;
    }
    if ( v25 == v24 )
    {
      v26 = *(_DWORD *)(a1 + 4) - 1;
      *(_DWORD *)(a1 + 4) = v26;
      if ( !v26 )
      {
        v27 = 0;
        goto LABEL_26;
      }
      return 0;
    }
    return 1;
  }
  result = 1;
  v20 = 1LL << v18;
  if ( ((1LL << v18) & 0xD000D00000000LL) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    if ( *(_DWORD *)a1 )
      v47 = (*(_DWORD *)a1 & 0x3FFFFFFF) == *(_DWORD *)(StatusReg - 1856 + 0xD0);
    else
      v47 = 0;
    if ( !v47 )
      return result;
    v40 = 0;
    if ( (*v16 & 0x10) == 0 || *(_DWORD *)(a1 + 8) != 0x7FFFFFFF )
      goto LABEL_69;
    goto LABEL_78;
  }
  if ( v18 == 49 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v45 = StatusReg - 1856;
    v20 = *(unsigned int *)(a1 + 8);
    v46 = *(_DWORD *)(StatusReg - 1856 + 0xD0);
    if ( (*(_DWORD *)a1 & 0x3FFFFFFF) != v46 || (_DWORD)v20 != 0x7FFFFFFF )
    {
      if ( v46 != (_DWORD)v20 )
        return 1;
      v40 = *(_DWORD *)(a1 + 4) - 1;
      *(_DWORD *)(a1 + 4) = v40;
      if ( v40 )
        return 0;
      goto LABEL_71;
    }
    v50 = *(_DWORD *)(a1 + 4) - 1;
    *(_DWORD *)(a1 + 4) = v50;
    if ( v50 )
      return 131;
LABEL_78:
    v40 = 2147483646;
LABEL_69:
    if ( (*v16 & 0x10) == 0 )
      goto LABEL_41;
    v45 = StatusReg - 1856;
LABEL_71:
    *(_QWORD *)(v45 + 0xF0) = (a1 + 32) | 1;
    v48 = *(_QWORD *)(a1 + 24);
    v20 = v48 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFELL) - 8) = v48;
    *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFELL) = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
LABEL_41:
    *(_DWORD *)(a1 + 8) = v40;
    if ( a2 )
      --*(_DWORD *)(a1 + 12);
    v41 = 128;
    if ( (*v16 & 0x10) == 0 )
      v41 = *v16 & 0x80;
    v42 = *(_DWORD *)a1;
    while ( (v42 & 0x80000000) == 0 )
    {
      v43 = StatusReg - 1856;
      if ( *(_DWORD *)(StatusReg - 1856 + 0xD0) != v42 )
        break;
      v44 = _dl___aarch64_cas4_rel(v42, 0, (atomic_uint *)a1);
      v22 = v44 == v42;
      v42 = v44;
      if ( v22 )
        goto LABEL_50;
    }
    v52 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)(v41 ^ 0x87u), 0, 0, (void *)v20, a14, a15);
    v43 = StatusReg - 1856;
    if ( v52 <= 0xFFFFFFFFFFFFF000LL )
      goto LABEL_50;
    if ( (_DWORD)v52 == -110
      || (v53 = __CFADD__((_DWORD)v52, 38), v54 = v52 + 38, v53) && ((0x2C08000009uLL >> v54) & 1) != 0 )
    {
      v43 = StatusReg - 1856;
LABEL_50:
      *(_QWORD *)(v43 + 0xF0) = 0;
      return 0;
    }
LABEL_75:
    _libc_fatal((__int64)"The futex facility returned an unexpected error code.\n", a3, a4, a5, a6, a7, a8, a9, a10);
  }
  if ( v18 != 33 )
    return 22;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(StatusReg - 1856 + 0xD0) )
  {
    v40 = *(_DWORD *)(a1 + 4) - 1;
    *(_DWORD *)(a1 + 4) = v40;
    if ( !v40 )
      goto LABEL_41;
    return 0;
  }
  return result;
}
