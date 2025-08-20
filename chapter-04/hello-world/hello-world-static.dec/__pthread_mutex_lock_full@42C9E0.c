__int64 __fastcall _pthread_mutex_lock_full(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 v15; // x25
  __int64 v16; // x26
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v19; // x19
  _DWORD *v20; // x24
  unsigned int v21; // w27
  int v22; // w1
  unsigned int v23; // w0
  __int64 v24; // x23
  unsigned int v25; // w22
  unsigned int i; // w25
  __int64 v27; // x0
  int v28; // w0
  __int64 result; // x0
  __int64 v30; // x0
  unsigned int v31; // w19
  unsigned int v32; // w20
  unsigned int v33; // w26
  unsigned int v34; // w20
  unsigned int v35; // w23
  unsigned int v36; // w22
  void *v37; // x4
  void *v38; // x5
  void *v39; // x6
  unsigned __int64 v40; // x0
  int v41; // w23
  __int64 v42; // x22
  void *v43; // x4
  void *v44; // x5
  void *v45; // x6
  int v46; // w0
  unsigned int v47; // w19
  int v48; // w0
  int v49; // w0
  __int64 v50; // x0
  unsigned int v51; // w0
  __int64 v52; // x0
  unsigned __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  void *v57; // x4
  void *v58; // x5
  void *v59; // x6
  int v60; // w0
  unsigned __int64 v61; // x0
  bool v62; // cf
  char v63; // w0
  int v64; // [xsp+4h] [xbp-Ch] BYREF
  __int64 v65; // [xsp+50h] [xbp+40h]
  __int64 v66; // [xsp+58h] [xbp+48h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v19 = StatusReg - 1856;
  v20 = (_DWORD *)(a1 + 16);
  v21 = *(_DWORD *)(StatusReg - 1856 + 0xD0);
  v22 = *(_DWORD *)(a1 + 16);
  v23 = v22 & 0x7F;
  if ( v23 > 0x33 )
  {
    if ( v23 - 64 <= 3 )
    {
      v30 = (unsigned int)*v20;
      v31 = *(_DWORD *)a1;
      v32 = -1;
      if ( *(_DWORD *)(a1 + 8) == v21 )
      {
        v30 &= 3u;
        if ( (_DWORD)v30 == 2 )
          return 35;
        if ( (_DWORD)v30 == 1 )
        {
          v49 = *(_DWORD *)(a1 + 4);
          if ( v49 == -1 )
            return 11;
LABEL_45:
          *(_DWORD *)(a1 + 4) = v49 + 1;
          return 0;
        }
      }
      while ( 1 )
      {
        v33 = v31 >> 19;
        if ( (int)(v31 >> 19) < (int)_pthread_current_priority(v30) )
          break;
        result = _pthread_tpp_change_priority(v32, v33);
        if ( (_DWORD)result )
          return result;
        v34 = v31 & 0xFFF80000;
        v35 = v31 & 0xFFF80000 | 1;
        if ( (v31 & 0xFFF80000) == _aarch64_cas4_acq(v31 & 0xFFF80000, v35, (atomic_uint *)a1) )
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
          v28 = *(_DWORD *)(a1 + 12) + 1;
          *(_DWORD *)(a1 + 8) = v21;
          *(_DWORD *)(a1 + 12) = v28;
          return 0;
        }
        v36 = v34 | 2;
        while ( 1 )
        {
          v31 = _aarch64_cas4_acq(v35, v36, (atomic_uint *)a1);
          v30 = v31 & 0xFFF80000;
          if ( (_DWORD)v30 != v34 )
            break;
          if ( v34 == v31
            || (v40 = linux_eabi_syscall(
                        __NR_futex,
                        (void *)a1,
                        (void *)((unsigned __int8)~(unsigned __int8)*v20 & 0x80),
                        (void *)(v34 | 2),
                        0,
                        v37,
                        v38,
                        v39),
                v40 <= 0xFFFFFFFFFFFFF000LL)
            || (_DWORD)v40 == -11 )
          {
            if ( v34 == _aarch64_cas4_acq(v34, v36, (atomic_uint *)a1) )
              goto LABEL_24;
          }
          else
          {
            if ( (_DWORD)v40 != -4 )
              goto LABEL_90;
            if ( v34 == _aarch64_cas4_acq(v34, v36, (atomic_uint *)a1) )
              goto LABEL_24;
          }
        }
        v32 = v33;
      }
      if ( v32 != -1 )
        _pthread_tpp_change_priority(v32, 0xFFFFFFFFLL);
    }
    return 22;
  }
  if ( v23 <= 0x2F )
  {
    if ( v23 <= 0x13 )
    {
      if ( (v22 & 0x70) != 0 )
      {
        v24 = a1 + 32;
        *(_QWORD *)(v19 + 0xF0) = a1 + 32;
        v25 = *(_DWORD *)a1;
        for ( i = 0; ; i = 0x80000000 )
        {
          while ( 1 )
          {
            if ( !v25 )
            {
              v25 = _aarch64_cas4_acq(0, v21 | i, (atomic_uint *)a1);
              if ( !v25 )
              {
                if ( *(_DWORD *)(a1 + 8) != 2147483646 )
                {
                  *(_DWORD *)(a1 + 4) = 1;
                  v27 = *(_QWORD *)(v19 + 0xE0);
                  *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFFELL) - 8) = v24;
                  *(_QWORD *)(a1 + 24) = StatusReg - 1632;
                  *(_QWORD *)(a1 + 32) = v27;
                  *(_QWORD *)(v19 + 0xE0) = v24;
                  *(_QWORD *)(v19 + 0xF0) = 0;
                  goto LABEL_10;
                }
                *(_DWORD *)(a1 + 4) = 0;
                if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
                  _lll_lock_wake((void *)a1, 128, v55, v56, v57, v58, v59);
                goto LABEL_73;
              }
            }
            if ( (v25 & 0x40000000) == 0 )
              break;
            v51 = _aarch64_cas4_acq(v25, v25 & 0x80000000 | v21 | i, (atomic_uint *)a1);
            if ( v25 == v51 )
            {
              *(_QWORD *)(a1 + 4) = 0x7FFFFFFF00000001LL;
              v54 = *(_QWORD *)(v19 + 0xE0);
              *(_QWORD *)((v54 & 0xFFFFFFFFFFFFFFFELL) - 8) = v24;
              *(_QWORD *)(a1 + 24) = StatusReg - 1632;
              *(_QWORD *)(a1 + 32) = v54;
              *(_QWORD *)(v19 + 0xE0) = v24;
              goto LABEL_56;
            }
LABEL_53:
            v25 = v51;
          }
          if ( (v25 & 0x3FFFFFFF) == v21 )
          {
            if ( (*v20 & 0x7F) == 0x12 )
            {
              result = 35;
              *(_QWORD *)(StatusReg - 1616) = 0;
              return result;
            }
            if ( (*v20 & 0x7F) == 0x11 )
            {
              v49 = *(_DWORD *)(a1 + 4);
              *(_QWORD *)(v19 + 0xF0) = 0;
              if ( v49 != -1 )
                goto LABEL_45;
              return 11;
            }
          }
          if ( (v25 & 0x80000000) == 0 )
          {
            v51 = _aarch64_cas4_acq(v25, v25 | 0x80000000, (atomic_uint *)a1);
            if ( v25 != v51 )
              goto LABEL_53;
            v25 |= 0x80000000;
          }
          v53 = linux_eabi_syscall(__NR_futex, (void *)a1, 0, (void *)v25, 0, a13, a14, a15);
          if ( v53 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v53 != -11 && (_DWORD)v53 != -4 )
            goto LABEL_90;
          v25 = *(_DWORD *)a1;
        }
      }
      return 22;
    }
    if ( v23 - 32 > 3 )
      return 22;
  }
  v41 = *v20 & 3;
  if ( (*v20 & 0x10) == 0 )
  {
    if ( (*(_DWORD *)a1 & 0x3FFFFFFF) == v21 )
    {
      if ( v41 == 2 )
        goto LABEL_91;
      if ( v41 == 1 )
        goto LABEL_76;
    }
    if ( !_aarch64_cas4_acq(0, v21, (atomic_uint *)a1) )
      goto LABEL_25;
    v47 = *v20 & 0x80;
    v48 = _futex_lock_pi64(a1, 0, 0, (unsigned __int8)*v20 & 0x80);
    if ( (v48 & 0xFFFFFFDF) != 3 )
    {
      if ( (*(_DWORD *)a1 & 0x40000000) != 0 )
      {
        v65 = v15;
        v66 = v16;
        _libc_assert_fail(
          "robust || (oldval & FUTEX_OWNER_DIED) == 0",
          (__int64)"pthread_mutex_lock.c",
          0x1CCu,
          (__int64)"__pthread_mutex_lock_full");
      }
      goto LABEL_25;
    }
    if ( v48 != 35 )
    {
      while ( 1 )
      {
LABEL_36:
        v64 = 0;
        _futex_abstimed_wait64(&v64, 0, 0, 0, v47);
      }
    }
LABEL_35:
    if ( (unsigned int)(v41 - 1) <= 1 )
    {
      v65 = v15;
      v66 = v16;
      _libc_assert_fail(
        "e != EDEADLK || (kind != PTHREAD_MUTEX_ERRORCHECK_NP && kind != PTHREAD_MUTEX_RECURSIVE_NP)",
        (__int64)"pthread_mutex_lock.c",
        0x1BDu,
        (__int64)"__pthread_mutex_lock_full");
    }
    goto LABEL_36;
  }
  v42 = a1 + 32;
  *(_QWORD *)(v19 + 0xF0) = (a1 + 32) | 1;
  if ( v21 != (*(_DWORD *)a1 & 0x3FFFFFFF) )
    goto LABEL_31;
  if ( v41 == 2 )
  {
LABEL_91:
    result = 35;
    *(_QWORD *)(v19 + 0xF0) = 0;
    return result;
  }
  if ( v41 != 1 )
  {
LABEL_31:
    if ( _aarch64_cas4_acq(0, v21, (atomic_uint *)a1) )
    {
      v46 = _futex_lock_pi64(a1, 0, 0, 128);
      if ( (v46 & 0xFFFFFFDF) == 3 )
      {
        if ( v46 != 35 )
        {
          v65 = v15;
          v66 = v16;
          _libc_assert_fail(
            "e != ESRCH || !robust",
            (__int64)"pthread_mutex_lock.c",
            0x1C2u,
            (__int64)"__pthread_mutex_lock_full");
        }
        v47 = 128;
        goto LABEL_35;
      }
      if ( (*(_DWORD *)a1 & 0x40000000) != 0 )
      {
        _aarch64_ldclr4_acq(0x40000000, a1);
        *(_QWORD *)(a1 + 4) = 0x7FFFFFFF00000001LL;
        v52 = *(_QWORD *)(v19 + 0xE0);
        *(_QWORD *)((v52 & 0xFFFFFFFFFFFFFFFELL) - 8) = v42;
        *(_QWORD *)(a1 + 24) = StatusReg - 1632;
        *(_QWORD *)(a1 + 32) = v52;
        *(_QWORD *)(v19 + 0xE0) = v42 | 1;
LABEL_56:
        result = 130;
        *(_QWORD *)(v19 + 0xF0) = 0;
        return result;
      }
    }
    if ( *(_DWORD *)(a1 + 8) == 2147483646 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      v61 = linux_eabi_syscall(__NR_futex, (void *)a1, (void *)7, 0, 0, v43, v44, v45);
      if ( v61 <= 0xFFFFFFFFFFFFF000LL
        || (_DWORD)v61 == -110
        || (v62 = __CFADD__((_DWORD)v61, 38), v63 = v61 + 38, v62) && ((0x2C08000009uLL >> v63) & 1) != 0 )
      {
LABEL_73:
        result = 131;
        *(_QWORD *)(v19 + 0xF0) = 0;
        return result;
      }
      v65 = v15;
      v66 = v16;
LABEL_90:
      _libc_fatal((__int64)"The futex facility returned an unexpected error code.\n", a2, a3, a4, a5, a6, a7, a8, a9);
    }
    *(_DWORD *)(a1 + 4) = 1;
    v50 = *(_QWORD *)(v19 + 0xE0);
    *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFFELL) - 8) = v42;
    *(_QWORD *)(a1 + 24) = StatusReg - 1632;
    *(_QWORD *)(a1 + 32) = v50;
    *(_QWORD *)(v19 + 0xE0) = v42 | 1;
    *(_QWORD *)(v19 + 0xF0) = 0;
    goto LABEL_10;
  }
LABEL_76:
  v60 = *(_DWORD *)(a1 + 4);
  *(_QWORD *)(v19 + 0xF0) = 0;
  if ( v60 == -1 )
    return 11;
  *(_DWORD *)(a1 + 4) = v60 + 1;
  return 0;
}
