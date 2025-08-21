__int64 __fastcall _pthread_mutex_lock_full(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7)
{
  void *v7; // x25
  __int64 v8; // x26
  unsigned __int64 StatusReg; // x20
  __int64 v11; // x19
  _DWORD *v12; // x24
  unsigned int v13; // w27
  int v14; // w1
  unsigned int v15; // w0
  __int64 v16; // x23
  unsigned int v17; // w22
  unsigned int i; // w25
  __int64 v19; // x0
  int v20; // w0
  __int64 result; // x0
  __int64 v22; // x0
  __int64 v23; // x26
  unsigned int v24; // w20
  unsigned int v25; // w23
  unsigned int v26; // w22
  void *v27; // x4
  void *v28; // x5
  void *v29; // x6
  unsigned __int64 v30; // x0
  int v31; // w23
  __int64 v32; // x22
  void *v33; // x4
  void *v34; // x5
  void *v35; // x6
  int v36; // w0
  int v37; // w0
  int v38; // w0
  __int64 v39; // x0
  unsigned int v40; // w0
  __int64 v41; // x0
  unsigned __int64 v42; // x0
  __int64 v43; // x0
  int v44; // w0
  unsigned __int64 v45; // x0
  bool v46; // cf
  char v47; // w0
  int v48; // [xsp+4h] [xbp-Ch] BYREF
  void *v49; // [xsp+50h] [xbp+40h]
  __int64 v50; // [xsp+58h] [xbp+48h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v11 = StatusReg - 1856;
  v12 = (_DWORD *)(a1 + 16);
  v13 = *(_DWORD *)(StatusReg - 1856 + 0xD0);
  v14 = *(_DWORD *)(a1 + 16);
  v15 = v14 & 0x7F;
  if ( v15 > 0x33 )
  {
    if ( v15 - 64 > 3 )
      return 22;
    v49 = v7;
    v50 = v8;
    v22 = (unsigned int)*v12;
    LODWORD(v11) = *(_DWORD *)a1;
    LODWORD(StatusReg) = -1;
    if ( *(_DWORD *)(a1 + 8) != v13 )
      goto LABEL_13;
    goto LABEL_42;
  }
  if ( v15 <= 0x2F )
  {
    if ( v15 <= 0x13 )
    {
      if ( (v14 & 0x70) != 0 )
      {
        v49 = v7;
        v50 = v8;
        v16 = a1 + 32;
        *(_QWORD *)(v11 + 0xF0) = a1 + 32;
        v17 = *(_DWORD *)a1;
        for ( i = 0; ; i = 0x80000000 )
        {
          while ( 1 )
          {
            if ( !v17 )
            {
              v17 = _aarch64_cas4_acq(0, v13 | i, (atomic_uint *)a1);
              if ( !v17 )
              {
                if ( *(_DWORD *)(a1 + 8) != 2147483646 )
                {
                  *(_DWORD *)(a1 + 4) = 1;
                  v19 = *(_QWORD *)(v11 + 0xE0);
                  *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFFELL) - 8) = v16;
                  *(_QWORD *)(a1 + 24) = StatusReg - 1632;
                  *(_QWORD *)(a1 + 32) = v19;
                  *(_QWORD *)(v11 + 0xE0) = v16;
                  *(_QWORD *)(v11 + 0xF0) = 0;
                  goto LABEL_10;
                }
                *(_DWORD *)(a1 + 4) = 0;
                if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
                  _lll_lock_wake(a1, 128);
                goto LABEL_73;
              }
            }
            if ( (v17 & 0x40000000) == 0 )
              break;
            v40 = _aarch64_cas4_acq(v17, v17 & 0x80000000 | v13 | i, (atomic_uint *)a1);
            if ( v17 == v40 )
            {
              *(_QWORD *)(a1 + 4) = 0x7FFFFFFF00000001LL;
              v43 = *(_QWORD *)(v11 + 0xE0);
              *(_QWORD *)((v43 & 0xFFFFFFFFFFFFFFFELL) - 8) = v16;
              *(_QWORD *)(a1 + 24) = StatusReg - 1632;
              *(_QWORD *)(a1 + 32) = v43;
              *(_QWORD *)(v11 + 0xE0) = v16;
              goto LABEL_57;
            }
LABEL_54:
            v17 = v40;
          }
          if ( (v17 & 0x3FFFFFFF) == v13 )
          {
            if ( (*v12 & 0x7F) == 0x12 )
              goto LABEL_94;
            if ( (*v12 & 0x7F) == 0x11 )
            {
              v38 = *(_DWORD *)(a1 + 4);
              *(_QWORD *)(v11 + 0xF0) = 0;
              if ( v38 != -1 )
                goto LABEL_45;
              return 11;
            }
          }
          if ( (v17 & 0x80000000) == 0 )
          {
            v40 = _aarch64_cas4_acq(v17, v17 | 0x80000000, (atomic_uint *)a1);
            if ( v17 != v40 )
              goto LABEL_54;
            v17 |= 0x80000000;
          }
          v42 = linux_eabi_syscall(__NR_futex, (void *)a1, 0, (void *)v17, 0, a5, a6, a7);
          if ( v42 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v42 != -11 && (_DWORD)v42 != -4 )
            goto LABEL_90;
          v17 = *(_DWORD *)a1;
        }
      }
      return 22;
    }
    if ( v15 - 32 > 3 )
      return 22;
  }
  v31 = *v12 & 3;
  if ( (*v12 & 0x10) == 0 )
  {
    if ( (*(_DWORD *)a1 & 0x3FFFFFFF) == v13 )
    {
      if ( v31 == 2 )
        goto LABEL_91;
      if ( v31 == 1 )
        goto LABEL_76;
    }
    if ( !_aarch64_cas4_acq(0, v13, (atomic_uint *)a1) )
      goto LABEL_25;
    v11 = (unsigned __int8)*v12 & 0x80;
    v37 = _futex_lock_pi64(a1, 0, 0, v11);
    if ( (v37 & 0xFFFFFFDF) == 3 )
    {
      if ( v37 != 35 )
        goto LABEL_36;
      goto LABEL_35;
    }
    if ( (*(_DWORD *)a1 & 0x40000000) == 0 )
      goto LABEL_25;
    v49 = v7;
    v50 = v8;
    LOBYTE(v22) = _libc_assert_fail(
                    "robust || (oldval & FUTEX_OWNER_DIED) == 0",
                    "pthread_mutex_lock.c",
                    460,
                    "__pthread_mutex_lock_full");
LABEL_42:
    v22 &= 3u;
    if ( (_DWORD)v22 == 2 )
      return 35;
    if ( (_DWORD)v22 == 1 )
    {
      v38 = *(_DWORD *)(a1 + 4);
      if ( v38 == (_DWORD)StatusReg )
        return 11;
LABEL_45:
      *(_DWORD *)(a1 + 4) = v38 + 1;
      return 0;
    }
LABEL_13:
    while ( 1 )
    {
      v23 = (unsigned int)v11 >> 19;
      if ( (int)v23 < (int)_pthread_current_priority(v22) )
        break;
      result = _pthread_tpp_change_priority((unsigned int)StatusReg, (unsigned int)v23);
      if ( (_DWORD)result )
        return result;
      v24 = v11 & 0xFFF80000;
      v25 = v11 & 0xFFF80000 | 1;
      if ( (v11 & 0xFFF80000) == _aarch64_cas4_acq(v11 & 0xFFF80000, v25, (atomic_uint *)a1) )
      {
LABEL_24:
        if ( *(_DWORD *)(a1 + 8) )
        {
          _libc_assert_fail("mutex->__data.__owner == 0", "pthread_mutex_lock.c", 607, "__pthread_mutex_lock_full");
          v49 = v7;
          v50 = v23;
        }
LABEL_25:
        *(_DWORD *)(a1 + 4) = 1;
LABEL_10:
        v20 = *(_DWORD *)(a1 + 12) + 1;
        *(_DWORD *)(a1 + 8) = v13;
        *(_DWORD *)(a1 + 12) = v20;
        return 0;
      }
      v7 = (void *)(v24 | 2);
      v26 = v24 | 2;
      while ( 1 )
      {
        LODWORD(v11) = _aarch64_cas4_acq(v25, v26, (atomic_uint *)a1);
        v22 = (unsigned int)v11 & 0xFFF80000;
        if ( (_DWORD)v22 != v24 )
          break;
        if ( v24 == (_DWORD)v11
          || (v30 = linux_eabi_syscall(
                      __NR_futex,
                      (void *)a1,
                      (void *)((unsigned __int8)~(unsigned __int8)*v12 & 0x80),
                      v7,
                      0,
                      v27,
                      v28,
                      v29),
              v30 <= 0xFFFFFFFFFFFFF000LL)
          || (_DWORD)v30 == -11 )
        {
          if ( v24 == _aarch64_cas4_acq(v24, v26, (atomic_uint *)a1) )
            goto LABEL_24;
        }
        else
        {
          if ( (_DWORD)v30 != -4 )
            goto LABEL_90;
          if ( v24 == _aarch64_cas4_acq(v24, v26, (atomic_uint *)a1) )
            goto LABEL_24;
        }
      }
      LODWORD(StatusReg) = v23;
    }
    if ( (_DWORD)StatusReg != -1 )
      _pthread_tpp_change_priority((unsigned int)StatusReg, 0xFFFFFFFFLL);
    return 22;
  }
  v32 = a1 + 32;
  *(_QWORD *)(v11 + 0xF0) = (a1 + 32) | 1;
  if ( v13 != (*(_DWORD *)a1 & 0x3FFFFFFF) )
    goto LABEL_31;
  if ( v31 == 2 )
  {
LABEL_91:
    result = 35;
    *(_QWORD *)(v11 + 0xF0) = 0;
    return result;
  }
  if ( v31 != 1 )
  {
LABEL_31:
    if ( _aarch64_cas4_acq(0, v13, (atomic_uint *)a1) )
    {
      v36 = _futex_lock_pi64(a1, 0, 0, 128);
      if ( (v36 & 0xFFFFFFDF) == 3 )
      {
        if ( v36 != 35 )
          goto LABEL_93;
        v11 = 128;
LABEL_35:
        if ( (unsigned int)(v31 - 1) > 1 )
        {
          while ( 1 )
          {
LABEL_36:
            v48 = 0;
            _futex_abstimed_wait64(&v48, 0, 0, 0, (unsigned int)v11);
          }
        }
        v49 = v7;
        v50 = v8;
        _libc_assert_fail(
          "e != EDEADLK || (kind != PTHREAD_MUTEX_ERRORCHECK_NP && kind != PTHREAD_MUTEX_RECURSIVE_NP)",
          "pthread_mutex_lock.c",
          445,
          "__pthread_mutex_lock_full");
LABEL_93:
        v49 = v7;
        v50 = v8;
        _libc_assert_fail("e != ESRCH || !robust", "pthread_mutex_lock.c", 450, "__pthread_mutex_lock_full");
LABEL_94:
        result = 35;
        *(_QWORD *)(v11 + 240) = 0;
        return result;
      }
      if ( (*(_DWORD *)a1 & 0x40000000) != 0 )
      {
        _aarch64_ldclr4_acq(0x40000000, a1);
        *(_QWORD *)(a1 + 4) = 0x7FFFFFFF00000001LL;
        v41 = *(_QWORD *)(v11 + 0xE0);
        *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFFELL) - 8) = v32;
        *(_QWORD *)(a1 + 24) = StatusReg - 1632;
        *(_QWORD *)(a1 + 32) = v41;
        *(_QWORD *)(v11 + 0xE0) = v32 | 1;
LABEL_57:
        result = 130;
        *(_QWORD *)(v11 + 0xF0) = 0;
        return result;
      }
    }
    if ( *(_DWORD *)(a1 + 8) == 2147483646 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      v45 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)7, 0, 0, v33, v34, v35);
      if ( v45 <= 0xFFFFFFFFFFFFF000LL
        || (_DWORD)v45 == -110
        || (v46 = __CFADD__((_DWORD)v45, 38), v47 = v45 + 38, v46) && ((0x2C08000009uLL >> v47) & 1) != 0 )
      {
LABEL_73:
        result = 131;
        *(_QWORD *)(v11 + 0xF0) = 0;
        return result;
      }
      v49 = v7;
      v50 = v8;
LABEL_90:
      _libc_fatal("The futex facility returned an unexpected error code.\n");
    }
    *(_DWORD *)(a1 + 4) = 1;
    v39 = *(_QWORD *)(v11 + 0xE0);
    *(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFFELL) - 8) = v32;
    *(_QWORD *)(a1 + 24) = StatusReg - 1632;
    *(_QWORD *)(a1 + 32) = v39;
    *(_QWORD *)(v11 + 0xE0) = v32 | 1;
    *(_QWORD *)(v11 + 0xF0) = 0;
    goto LABEL_10;
  }
LABEL_76:
  v44 = *(_DWORD *)(a1 + 4);
  *(_QWORD *)(v11 + 0xF0) = 0;
  if ( v44 == -1 )
    return 11;
  *(_DWORD *)(a1 + 4) = v44 + 1;
  return 0;
}
