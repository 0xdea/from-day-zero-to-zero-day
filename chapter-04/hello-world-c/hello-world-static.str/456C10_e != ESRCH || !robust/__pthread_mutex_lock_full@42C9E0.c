__int64 __fastcall _pthread_mutex_lock_full(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7)
{
  __int64 v7; // x25
  __int64 v8; // x26
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v11; // x19
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
  unsigned int v23; // w19
  unsigned int v24; // w20
  unsigned int v25; // w26
  unsigned int v26; // w20
  unsigned int v27; // w23
  unsigned int v28; // w22
  void *v29; // x4
  void *v30; // x5
  void *v31; // x6
  __int64 v32; // x1
  void *v33; // x2
  unsigned __int64 v34; // x0
  int v35; // w23
  __int64 v36; // x22
  void *v37; // x4
  void *v38; // x5
  void *v39; // x6
  int v40; // w0
  int v41; // w19
  __int64 v42; // x4
  __int64 v43; // x5
  void *v44; // x6
  int v45; // w0
  int v46; // w0
  __int64 v47; // x0
  unsigned int v48; // w0
  __int64 v49; // x0
  unsigned __int64 v50; // x0
  __int64 v51; // x0
  int v52; // w0
  unsigned __int64 v53; // x0
  bool v54; // cf
  char v55; // w0
  int v56; // [xsp+4h] [xbp-Ch] BYREF
  __int64 v57; // [xsp+50h] [xbp+40h]
  __int64 v58; // [xsp+58h] [xbp+48h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v11 = StatusReg - 1856;
  v12 = (_DWORD *)(a1 + 16);
  v13 = *(_DWORD *)(StatusReg - 1856 + 0xD0);
  v14 = *(_DWORD *)(a1 + 16);
  v15 = v14 & 0x7F;
  if ( v15 > 0x33 )
  {
    if ( v15 - 64 <= 3 )
    {
      v22 = (unsigned int)*v12;
      v23 = *(_DWORD *)a1;
      v24 = -1;
      if ( *(_DWORD *)(a1 + 8) == v13 )
      {
        v22 &= 3u;
        if ( (_DWORD)v22 == 2 )
          return 35;
        if ( (_DWORD)v22 == 1 )
        {
          v46 = *(_DWORD *)(a1 + 4);
          if ( v46 == -1 )
            return 11;
LABEL_45:
          *(_DWORD *)(a1 + 4) = v46 + 1;
          return 0;
        }
      }
      while ( 1 )
      {
        v25 = v23 >> 19;
        if ( (int)(v23 >> 19) < (int)_pthread_current_priority(v22) )
          break;
        result = _pthread_tpp_change_priority(v24, v25);
        if ( (_DWORD)result )
          return result;
        v26 = v23 & 0xFFF80000;
        v27 = v23 & 0xFFF80000 | 1;
        if ( (v23 & 0xFFF80000) == _aarch64_cas4_acq(v23 & 0xFFF80000, v27, (atomic_uint *)a1) )
        {
LABEL_24:
          if ( *(_DWORD *)(a1 + 8) )
            _libc_assert_fail(
              "mutex->__data.__owner == 0",
              (__int64)"pthread_mutex_lock.c",
              0x25Fu,
              (__int64)"__pthread_mutex_lock_full");
LABEL_25:
          *(_DWORD *)(a1 + 4) = 1;
LABEL_10:
          v20 = *(_DWORD *)(a1 + 12) + 1;
          *(_DWORD *)(a1 + 8) = v13;
          *(_DWORD *)(a1 + 12) = v20;
          return 0;
        }
        v28 = v26 | 2;
        while ( 1 )
        {
          v23 = _aarch64_cas4_acq(v27, v28, (atomic_uint *)a1);
          v22 = v23 & 0xFFF80000;
          if ( (_DWORD)v22 != v26 )
            break;
          if ( v26 == v23
            || (v32 = (unsigned __int8)~(unsigned __int8)*v12 & 0x80,
                v33 = (void *)(v26 | 2),
                v34 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)v32, v33, 0, v29, v30, v31),
                v34 <= 0xFFFFFFFFFFFFF000LL)
            || (_DWORD)v34 == -11 )
          {
            if ( v26 == _aarch64_cas4_acq(v26, v28, (atomic_uint *)a1) )
              goto LABEL_24;
          }
          else
          {
            if ( (_DWORD)v34 != -4 )
              goto LABEL_90;
            if ( v26 == _aarch64_cas4_acq(v26, v28, (atomic_uint *)a1) )
              goto LABEL_24;
          }
        }
        v24 = v25;
      }
      if ( v24 != -1 )
        _pthread_tpp_change_priority(v24, 0xFFFFFFFFLL);
    }
    return 22;
  }
  if ( v15 <= 0x2F )
  {
    if ( v15 <= 0x13 )
    {
      if ( (v14 & 0x70) != 0 )
      {
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
            v48 = _aarch64_cas4_acq(v17, v17 & 0x80000000 | v13 | i, (atomic_uint *)a1);
            if ( v17 == v48 )
            {
              *(_QWORD *)(a1 + 4) = 0x7FFFFFFF00000001LL;
              v51 = *(_QWORD *)(v11 + 0xE0);
              *(_QWORD *)((v51 & 0xFFFFFFFFFFFFFFFELL) - 8) = v16;
              *(_QWORD *)(a1 + 24) = StatusReg - 1632;
              *(_QWORD *)(a1 + 32) = v51;
              *(_QWORD *)(v11 + 0xE0) = v16;
              goto LABEL_56;
            }
LABEL_53:
            v17 = v48;
          }
          if ( (v17 & 0x3FFFFFFF) == v13 )
          {
            if ( (*v12 & 0x7F) == 0x12 )
            {
              result = 35;
              *(_QWORD *)(StatusReg - 1616) = 0;
              return result;
            }
            if ( (*v12 & 0x7F) == 0x11 )
            {
              v46 = *(_DWORD *)(a1 + 4);
              *(_QWORD *)(v11 + 0xF0) = 0;
              if ( v46 != -1 )
                goto LABEL_45;
              return 11;
            }
          }
          if ( (v17 & 0x80000000) == 0 )
          {
            v48 = _aarch64_cas4_acq(v17, v17 | 0x80000000, (atomic_uint *)a1);
            if ( v17 != v48 )
              goto LABEL_53;
            v17 |= 0x80000000;
          }
          v33 = (void *)v17;
          v32 = 0;
          v50 = linux_eabi_syscall(__NR_futex, (void *)a1, 0, (void *)v17, 0, a5, a6, a7);
          if ( v50 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v50 != -11 && (_DWORD)v50 != -4 )
            goto LABEL_90;
          v17 = *(_DWORD *)a1;
        }
      }
      return 22;
    }
    if ( v15 - 32 > 3 )
      return 22;
  }
  v35 = *v12 & 3;
  if ( (*v12 & 0x10) == 0 )
  {
    if ( (*(_DWORD *)a1 & 0x3FFFFFFF) == v13 )
    {
      if ( v35 == 2 )
        goto LABEL_91;
      if ( v35 == 1 )
        goto LABEL_76;
    }
    if ( !_aarch64_cas4_acq(0, v13, (atomic_uint *)a1) )
      goto LABEL_25;
    v41 = *v12 & 0x80;
    v45 = _futex_lock_pi64((void *)a1, 0, 0, v41, v42, v43, v44);
    if ( (v45 & 0xFFFFFFDF) != 3 )
    {
      if ( (*(_DWORD *)a1 & 0x40000000) != 0 )
      {
        v57 = v7;
        v58 = v8;
        _libc_assert_fail(
          "robust || (oldval & FUTEX_OWNER_DIED) == 0",
          (__int64)"pthread_mutex_lock.c",
          0x1CCu,
          (__int64)"__pthread_mutex_lock_full");
      }
      goto LABEL_25;
    }
    if ( v45 != 35 )
    {
      while ( 1 )
      {
LABEL_36:
        v56 = 0;
        _futex_abstimed_wait64(&v56, 0, 0, 0, v41, (__int64)v38, v39);
      }
    }
LABEL_35:
    if ( (unsigned int)(v35 - 1) <= 1 )
    {
      v57 = v7;
      v58 = v8;
      _libc_assert_fail(
        "e != EDEADLK || (kind != PTHREAD_MUTEX_ERRORCHECK_NP && kind != PTHREAD_MUTEX_RECURSIVE_NP)",
        (__int64)"pthread_mutex_lock.c",
        0x1BDu,
        (__int64)"__pthread_mutex_lock_full");
    }
    goto LABEL_36;
  }
  v36 = a1 + 32;
  *(_QWORD *)(v11 + 0xF0) = (a1 + 32) | 1;
  if ( v13 != (*(_DWORD *)a1 & 0x3FFFFFFF) )
    goto LABEL_31;
  if ( v35 == 2 )
  {
LABEL_91:
    result = 35;
    *(_QWORD *)(v11 + 0xF0) = 0;
    return result;
  }
  if ( v35 != 1 )
  {
LABEL_31:
    if ( _aarch64_cas4_acq(0, v13, (atomic_uint *)a1) )
    {
      v40 = _futex_lock_pi64((void *)a1, 0, 0, 0x80u, (__int64)v37, (__int64)v38, v39);
      if ( (v40 & 0xFFFFFFDF) == 3 )
      {
        if ( v40 != 35 )
        {
          v57 = v7;
          v58 = v8;
          _libc_assert_fail(
            "e != ESRCH || !robust",
            (__int64)"pthread_mutex_lock.c",
            0x1C2u,
            (__int64)"__pthread_mutex_lock_full");
        }
        v41 = 128;
        goto LABEL_35;
      }
      if ( (*(_DWORD *)a1 & 0x40000000) != 0 )
      {
        _aarch64_ldclr4_acq(0x40000000, a1);
        *(_QWORD *)(a1 + 4) = 0x7FFFFFFF00000001LL;
        v49 = *(_QWORD *)(v11 + 0xE0);
        *(_QWORD *)((v49 & 0xFFFFFFFFFFFFFFFELL) - 8) = v36;
        *(_QWORD *)(a1 + 24) = StatusReg - 1632;
        *(_QWORD *)(a1 + 32) = v49;
        *(_QWORD *)(v11 + 0xE0) = v36 | 1;
LABEL_56:
        result = 130;
        *(_QWORD *)(v11 + 0xF0) = 0;
        return result;
      }
    }
    if ( *(_DWORD *)(a1 + 8) == 2147483646 )
    {
      v32 = 7;
      v33 = 0;
      *(_DWORD *)(a1 + 4) = 0;
      v53 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)7, 0, 0, v37, v38, v39);
      if ( v53 <= 0xFFFFFFFFFFFFF000LL
        || (_DWORD)v53 == -110
        || (v54 = __CFADD__((_DWORD)v53, 38), v55 = v53 + 38, v54)
        && (v32 = 0x2C08000009LL, ((0x2C08000009uLL >> v55) & 1) != 0) )
      {
LABEL_73:
        result = 131;
        *(_QWORD *)(v11 + 0xF0) = 0;
        return result;
      }
      v57 = v7;
      v58 = v8;
LABEL_90:
      _libc_fatal("The futex facility returned an unexpected error code.\n", v32, v33, 0);
    }
    *(_DWORD *)(a1 + 4) = 1;
    v47 = *(_QWORD *)(v11 + 0xE0);
    *(_QWORD *)((v47 & 0xFFFFFFFFFFFFFFFELL) - 8) = v36;
    *(_QWORD *)(a1 + 24) = StatusReg - 1632;
    *(_QWORD *)(a1 + 32) = v47;
    *(_QWORD *)(v11 + 0xE0) = v36 | 1;
    *(_QWORD *)(v11 + 0xF0) = 0;
    goto LABEL_10;
  }
LABEL_76:
  v52 = *(_DWORD *)(a1 + 4);
  *(_QWORD *)(v11 + 0xF0) = 0;
  if ( v52 == -1 )
    return 11;
  *(_DWORD *)(a1 + 4) = v52 + 1;
  return 0;
}
