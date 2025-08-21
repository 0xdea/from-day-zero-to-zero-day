__int64 __fastcall _pthread_mutex_unlock_full(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        void *a7)
{
  _DWORD *v8; // x20
  int v9; // w0
  unsigned int v10; // w2
  __int64 result; // x0
  unsigned __int64 v12; // x4
  unsigned __int64 v13; // x20
  bool v14; // zf
  int v15; // w0
  int v16; // w3
  int v17; // w2
  int v18; // w0
  int v19; // w2
  __int64 v20; // x3
  void *v21; // x4
  void *v22; // x5
  void *v23; // x6
  unsigned int v24; // w21
  signed int v25; // w22
  unsigned int v26; // w0
  void *v27; // x4
  void *v28; // x5
  void *v29; // x6
  unsigned __int64 v30; // x0
  unsigned __int64 StatusReg; // x21
  int v32; // w0
  int v33; // w23
  unsigned int v34; // w20
  unsigned __int64 v35; // x22
  unsigned int v36; // w0
  unsigned __int64 v37; // x3
  int v38; // w2
  bool v39; // zf
  __int64 v40; // x3
  unsigned __int64 v41; // x0
  int v42; // w0
  int v43; // w0
  unsigned __int64 v44; // x0
  bool v45; // cf
  char v46; // w0

  v8 = (_DWORD *)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 16);
  v10 = v9 & 0x7F;
  if ( v10 > 0x33 )
  {
    if ( v10 == 66 )
    {
      if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) || (*(_DWORD *)a1 & 0x7FFFF) == 0 )
        return 1;
    }
    else if ( v10 > 0x42 )
    {
      if ( v10 != 67 )
        return 22;
    }
    else if ( v10 != 64 )
    {
      if ( v10 != 65 )
        return 22;
      if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
        return 1;
      v15 = *(_DWORD *)(a1 + 4) - 1;
      *(_DWORD *)(a1 + 4) = v15;
      if ( v15 )
        return 0;
    }
    *(_DWORD *)(a1 + 8) = 0;
    if ( a2 )
      --*(_DWORD *)(a1 + 12);
    v24 = *(_DWORD *)a1;
    do
    {
      v25 = v24 & 0xFFF80000;
      v26 = _dl___aarch64_cas4_rel(v24, v24 & 0xFFF80000, (atomic_uint *)a1);
      v14 = v26 == v24;
      v24 = v26;
    }
    while ( !v14 );
    if ( (v26 & 0x7FFFE) == 0 )
      return _pthread_tpp_change_priority((unsigned int)(v25 >> 19), 0xFFFFFFFFLL);
    v30 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)(*v8 & 0x80 ^ 0x81u), (void *)1, 0, v27, v28, v29);
    if ( v30 <= 0xFFFFFFFFFFFFF000LL || (((_DWORD)v30 + 22) & 0xFFFFFFF7) == 0 )
      return _pthread_tpp_change_priority((unsigned int)(v25 >> 19), 0xFFFFFFFFLL);
    goto LABEL_75;
  }
  if ( (v9 & 0x60) == 0 )
  {
    if ( v10 != 17 )
    {
      if ( v10 > 0x11 )
      {
        if ( v10 - 18 <= 1 )
          goto LABEL_10;
      }
      else if ( v10 == 16 )
      {
LABEL_10:
        v13 = _ReadStatusReg(TPIDR_EL0) - 1856;
        result = 1;
        if ( *(_DWORD *)a1 )
          v14 = (*(_DWORD *)a1 & 0x3FFFFFFF) == *(_DWORD *)(v13 + 0xD0);
        else
          v14 = 0;
        if ( !v14 )
          return result;
        if ( *(_DWORD *)(a1 + 8) == 0x7FFFFFFF )
          v19 = 2147483646;
        else
          v19 = 0;
LABEL_26:
        *(_QWORD *)(v13 + 0xF0) = a1 + 32;
        v20 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFELL) - 8) = v20;
        *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL) = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 8) = v19;
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        if ( a2 )
          --*(_DWORD *)(a1 + 12);
        if ( (_aarch64_swp4_rel(0, (atomic_uint *)a1) & 0x80000000) == 0
          || (v41 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)1, (void *)1, 0, v21, v22, v23),
              v41 <= 0xFFFFFFFFFFFFF000LL)
          || (((_DWORD)v41 + 22) & 0xFFFFFFF7) == 0 )
        {
          *(_QWORD *)(v13 + 0xF0) = 0;
          return 0;
        }
        goto LABEL_75;
      }
      return 22;
    }
    v13 = _ReadStatusReg(TPIDR_EL0) - 1856;
    v16 = *(_DWORD *)(a1 + 8);
    v17 = *(_DWORD *)(v13 + 0xD0);
    if ( (*(_DWORD *)a1 & 0x3FFFFFFF) == v17 && v16 == 0x7FFFFFFF )
    {
      v19 = 2147483646;
      v43 = *(_DWORD *)(a1 + 4) - 1;
      *(_DWORD *)(a1 + 4) = v43;
      if ( v43 )
        return 131;
      goto LABEL_26;
    }
    if ( v17 == v16 )
    {
      v18 = *(_DWORD *)(a1 + 4) - 1;
      *(_DWORD *)(a1 + 4) = v18;
      if ( !v18 )
      {
        v19 = 0;
        goto LABEL_26;
      }
      return 0;
    }
    return 1;
  }
  result = 1;
  v12 = 1LL << v10;
  if ( ((1LL << v10) & 0xD000D00000000LL) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    if ( *(_DWORD *)a1 )
      v39 = (*(_DWORD *)a1 & 0x3FFFFFFF) == *(_DWORD *)(StatusReg - 1856 + 0xD0);
    else
      v39 = 0;
    if ( !v39 )
      return result;
    v32 = 0;
    if ( (*v8 & 0x10) == 0 || *(_DWORD *)(a1 + 8) != 0x7FFFFFFF )
      goto LABEL_69;
    goto LABEL_78;
  }
  if ( v10 == 49 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v37 = StatusReg - 1856;
    v12 = *(unsigned int *)(a1 + 8);
    v38 = *(_DWORD *)(StatusReg - 1856 + 0xD0);
    if ( (*(_DWORD *)a1 & 0x3FFFFFFF) != v38 || (_DWORD)v12 != 0x7FFFFFFF )
    {
      if ( v38 != (_DWORD)v12 )
        return 1;
      v32 = *(_DWORD *)(a1 + 4) - 1;
      *(_DWORD *)(a1 + 4) = v32;
      if ( v32 )
        return 0;
      goto LABEL_71;
    }
    v42 = *(_DWORD *)(a1 + 4) - 1;
    *(_DWORD *)(a1 + 4) = v42;
    if ( v42 )
      return 131;
LABEL_78:
    v32 = 2147483646;
LABEL_69:
    if ( (*v8 & 0x10) == 0 )
      goto LABEL_41;
    v37 = StatusReg - 1856;
LABEL_71:
    *(_QWORD *)(v37 + 0xF0) = (a1 + 32) | 1;
    v40 = *(_QWORD *)(a1 + 24);
    v12 = v40 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFELL) - 8) = v40;
    *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFELL) = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
LABEL_41:
    *(_DWORD *)(a1 + 8) = v32;
    if ( a2 )
      --*(_DWORD *)(a1 + 12);
    v33 = 128;
    if ( (*v8 & 0x10) == 0 )
      v33 = *v8 & 0x80;
    v34 = *(_DWORD *)a1;
    while ( (v34 & 0x80000000) == 0 )
    {
      v35 = StatusReg - 1856;
      if ( *(_DWORD *)(StatusReg - 1856 + 0xD0) != v34 )
        break;
      v36 = _dl___aarch64_cas4_rel(v34, 0, (atomic_uint *)a1);
      v14 = v36 == v34;
      v34 = v36;
      if ( v14 )
        goto LABEL_50;
    }
    v44 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)(v33 ^ 0x87u), 0, 0, (void *)v12, a6, a7);
    v35 = StatusReg - 1856;
    if ( v44 <= 0xFFFFFFFFFFFFF000LL )
      goto LABEL_50;
    if ( (_DWORD)v44 == -110
      || (v45 = __CFADD__((_DWORD)v44, 38), v46 = v44 + 38, v45) && ((0x2C08000009uLL >> v46) & 1) != 0 )
    {
      v35 = StatusReg - 1856;
LABEL_50:
      *(_QWORD *)(v35 + 0xF0) = 0;
      return 0;
    }
LABEL_75:
    _libc_fatal("The futex facility returned an unexpected error code.\n");
  }
  if ( v10 != 33 )
    return 22;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(StatusReg - 1856 + 0xD0) )
  {
    v32 = *(_DWORD *)(a1 + 4) - 1;
    *(_DWORD *)(a1 + 4) = v32;
    if ( !v32 )
      goto LABEL_41;
    return 0;
  }
  return result;
}
