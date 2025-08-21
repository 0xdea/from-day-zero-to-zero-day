__int64 sub_42C940()
{
  __int64 v0; // x20
  __int64 v1; // x21
  __int64 v2; // x22
  __int64 v3; // x23
  __int64 v4; // x24
  __int64 v5; // x25
  __int64 v6; // x26
  __int64 v7; // x27
  __int64 v8; // x30
  __int64 result; // x0
  void *v10; // x4
  void *v11; // x5
  void *v12; // x6
  __int64 v13; // x21
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v15; // x19
  _DWORD *v16; // x24
  unsigned int v17; // w27
  int v18; // w1
  unsigned int v19; // w0
  __int64 v20; // x23
  unsigned int v21; // w22
  unsigned int i; // w25
  __int64 v23; // x0
  int v24; // w0
  __int64 v25; // x0
  unsigned int v26; // w20
  unsigned int v27; // w26
  unsigned int v28; // w20
  unsigned int v29; // w23
  unsigned int v30; // w22
  unsigned int v31; // w0
  void *v32; // x4
  void *v33; // x5
  void *v34; // x6
  __int64 v35; // x1
  void *v36; // x2
  unsigned __int64 v37; // x0
  int v38; // w23
  __int64 v39; // x22
  void *v40; // x4
  void *v41; // x5
  void *v42; // x6
  int v43; // w0
  int v44; // w19
  __int64 v45; // x4
  __int64 v46; // x5
  void *v47; // x6
  int v48; // w0
  int v49; // w0
  __int64 v50; // x0
  unsigned int v51; // w0
  __int64 v52; // x0
  unsigned __int64 v53; // x0
  __int64 v54; // x0
  int v55; // w0
  unsigned __int64 v56; // x0
  bool v57; // cf
  char v58; // w0
  atomic_uint *v59; // x0
  int v60; // [xsp+4h] [xbp-7Ch] BYREF
  __int64 v61; // [xsp+8h] [xbp-78h]
  __int64 *v62; // [xsp+10h] [xbp-70h]
  __int64 v63; // [xsp+18h] [xbp-68h]
  __int64 *v64; // [xsp+20h] [xbp-60h]
  __int64 v65; // [xsp+28h] [xbp-58h]
  __int64 v66; // [xsp+30h] [xbp-50h]
  __int64 v67; // [xsp+38h] [xbp-48h]
  __int64 v68; // [xsp+40h] [xbp-40h]
  __int64 v69; // [xsp+48h] [xbp-38h]
  __int64 v70; // [xsp+50h] [xbp-30h]
  __int64 v71; // [xsp+58h] [xbp-28h]
  __int64 v72; // [xsp+60h] [xbp-20h]
  __int64 v73; // [xsp+70h] [xbp-10h] BYREF
  __int64 v74; // [xsp+78h] [xbp-8h]
  __int64 v75; // [xsp+80h] [xbp+0h] BYREF

  v74 = qword_48DD60;
  sub_414684(26, &v73, sub_42C8E0);
  sub_414684(14, &v73, sub_42C900);
  sub_414684(20, &v73, sub_42C920);
  result = (__int64)&qword_48DD60;
  if ( v74 != qword_48DD60 )
  {
    v62 = &v75;
    v63 = v8;
    v66 = v1;
    v67 = v2;
    v13 = sub_412340();
    v64 = &v73;
    v65 = v0;
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v68 = v3;
    v69 = v4;
    v15 = StatusReg - 1856;
    v16 = (_DWORD *)(v13 + 16);
    v72 = v7;
    v17 = *(_DWORD *)(StatusReg - 1856 + 0xD0);
    v61 = qword_48DD60;
    v18 = *(_DWORD *)(v13 + 16);
    v19 = v18 & 0x7F;
    if ( v19 > 0x33 )
    {
      if ( v19 - 64 > 3 )
        goto LABEL_29;
      v70 = v5;
      v71 = v6;
      v25 = (unsigned int)*v16;
      LODWORD(v15) = *(_DWORD *)v13;
      v26 = -1;
      if ( *(_DWORD *)(v13 + 8) != v17 )
        goto LABEL_14;
      v25 &= 3u;
      if ( (_DWORD)v25 != 2 )
      {
        if ( (_DWORD)v25 != 1 )
        {
LABEL_14:
          while ( 1 )
          {
            v27 = (unsigned int)v15 >> 19;
            if ( (int)((unsigned int)v15 >> 19) < (int)sub_42EA40(v25) )
              break;
            result = sub_42E6C0(v26, v27);
            if ( (_DWORD)result )
              goto LABEL_30;
            v28 = v15 & 0xFFF80000;
            v29 = v15 & 0xFFF80000 | 1;
            if ( v28 == _aarch64_cas4_acq(v15 & 0xFFF80000, v28 | 1, (atomic_uint *)v13) )
            {
LABEL_25:
              if ( *(_DWORD *)(v13 + 8) )
                sub_41F250(
                  "mutex->__data.__owner == 0",
                  (__int64)"pthread_mutex_lock.c",
                  0x25Fu,
                  (__int64)"__pthread_mutex_lock_full");
              goto LABEL_26;
            }
            v30 = v28 | 2;
            while ( 1 )
            {
              v31 = _aarch64_cas4_acq(v29, v30, (atomic_uint *)v13);
              v15 = v31;
              v25 = v31 & 0xFFF80000;
              if ( (_DWORD)v25 != v28 )
                break;
              if ( v28 == (_DWORD)v15
                || (v35 = (unsigned __int8)~(unsigned __int8)*v16 & 0x80,
                    v36 = (void *)(v28 | 2),
                    v37 = linux_eabi_syscall(__NR_futex, (void *)v13, (void *)v35, v36, 0, v32, v33, v34),
                    v37 <= 0xFFFFFFFFFFFFF000LL)
                || (_DWORD)v37 == -11 )
              {
                if ( v28 == _aarch64_cas4_acq(v28, v30, (atomic_uint *)v13) )
                  goto LABEL_25;
              }
              else
              {
                if ( (_DWORD)v37 != -4 )
                  goto LABEL_92;
                if ( v28 == _aarch64_cas4_acq(v28, v30, (atomic_uint *)v13) )
                  goto LABEL_25;
              }
            }
            v26 = v27;
          }
          if ( v26 != -1 )
            sub_42E6C0(v26, 0xFFFFFFFFLL);
          goto LABEL_29;
        }
        v49 = *(_DWORD *)(v13 + 4);
        if ( v49 != -1 )
        {
LABEL_48:
          *(_DWORD *)(v13 + 4) = v49 + 1;
          result = 0;
          goto LABEL_30;
        }
        goto LABEL_73;
      }
      result = 35;
LABEL_30:
      if ( v61 != qword_48DD60 )
      {
        v59 = (atomic_uint *)sub_412340();
        return sub_42D0B0(v59);
      }
      return result;
    }
    if ( v19 <= 0x2F )
    {
      if ( v19 <= 0x13 )
      {
        if ( (v18 & 0x70) != 0 )
        {
          v70 = v5;
          v71 = v6;
          v20 = v13 + 32;
          *(_QWORD *)(v15 + 0xF0) = v13 + 32;
          v21 = *(_DWORD *)v13;
          for ( i = 0; ; i = 0x80000000 )
          {
            while ( 1 )
            {
              if ( !v21 )
              {
                v21 = _aarch64_cas4_acq(0, v17 | i, (atomic_uint *)v13);
                if ( !v21 )
                {
                  if ( *(_DWORD *)(v13 + 8) != 2147483646 )
                  {
                    *(_DWORD *)(v13 + 4) = 1;
                    v23 = *(_QWORD *)(v15 + 0xE0);
                    *(_QWORD *)((v23 & 0xFFFFFFFFFFFFFFFELL) - 8) = v20;
                    *(_QWORD *)(v13 + 24) = StatusReg - 1632;
                    *(_QWORD *)(v13 + 32) = v23;
                    *(_QWORD *)(v15 + 0xE0) = v20;
                    *(_QWORD *)(v15 + 0xF0) = 0;
                    goto LABEL_11;
                  }
                  *(_DWORD *)(v13 + 4) = 0;
                  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v13) > 1 )
                    goto LABEL_93;
                  goto LABEL_75;
                }
              }
              if ( (v21 & 0x40000000) == 0 )
                break;
              v51 = _aarch64_cas4_acq(v21, v21 & 0x80000000 | v17 | i, (atomic_uint *)v13);
              if ( v21 == v51 )
              {
                *(_QWORD *)(v13 + 4) = 0x7FFFFFFF00000001LL;
                v54 = *(_QWORD *)(v15 + 0xE0);
                *(_QWORD *)((v54 & 0xFFFFFFFFFFFFFFFELL) - 8) = v20;
                *(_QWORD *)(v13 + 24) = StatusReg - 1632;
                *(_QWORD *)(v13 + 32) = v54;
                *(_QWORD *)(v15 + 0xE0) = v20;
                goto LABEL_60;
              }
LABEL_57:
              v21 = v51;
            }
            if ( (v21 & 0x3FFFFFFF) == v17 )
            {
              if ( (*v16 & 0x7F) == 0x12 )
              {
                result = 35;
                *(_QWORD *)(StatusReg - 1616) = 0;
                goto LABEL_30;
              }
              if ( (*v16 & 0x7F) == 0x11 )
              {
                v49 = *(_DWORD *)(v13 + 4);
                *(_QWORD *)(v15 + 0xF0) = 0;
                if ( v49 != -1 )
                  goto LABEL_48;
                goto LABEL_73;
              }
            }
            if ( (v21 & 0x80000000) == 0 )
            {
              v51 = _aarch64_cas4_acq(v21, v21 | 0x80000000, (atomic_uint *)v13);
              if ( v21 != v51 )
                goto LABEL_57;
              v21 |= 0x80000000;
            }
            v36 = (void *)v21;
            v35 = 0;
            v53 = linux_eabi_syscall(__NR_futex, (void *)v13, 0, (void *)v21, 0, v10, v11, v12);
            if ( v53 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v53 != -11 && (_DWORD)v53 != -4 )
              goto LABEL_92;
            v21 = *(_DWORD *)v13;
          }
        }
        goto LABEL_29;
      }
      if ( v19 - 32 > 3 )
      {
LABEL_29:
        result = 22;
        goto LABEL_30;
      }
    }
    v38 = *v16 & 3;
    if ( (*v16 & 0x10) != 0 )
    {
      v39 = v13 + 32;
      *(_QWORD *)(v15 + 0xF0) = (v13 + 32) | 1;
      if ( v17 != (*(_DWORD *)v13 & 0x3FFFFFFF) )
      {
LABEL_34:
        if ( _aarch64_cas4_acq(0, v17, (atomic_uint *)v13) )
        {
          v43 = sub_442710((void *)v13, 0, 0, 0x80u, (__int64)v40, (__int64)v41, v42);
          if ( (v43 & 0xFFFFFFDF) == 3 )
          {
            if ( v43 != 35 )
            {
              v70 = v5;
              v71 = v6;
              sub_41F250(
                "e != ESRCH || !robust",
                (__int64)"pthread_mutex_lock.c",
                0x1C2u,
                (__int64)"__pthread_mutex_lock_full");
            }
            v44 = 128;
LABEL_38:
            if ( (unsigned int)(v38 - 1) <= 1 )
            {
              v70 = v5;
              v71 = v6;
              sub_41F250(
                "e != EDEADLK || (kind != PTHREAD_MUTEX_ERRORCHECK_NP && kind != PTHREAD_MUTEX_RECURSIVE_NP)",
                (__int64)"pthread_mutex_lock.c",
                0x1BDu,
                (__int64)"__pthread_mutex_lock_full");
            }
            while ( 1 )
            {
LABEL_39:
              v60 = 0;
              sub_442550(&v60, 0, 0, 0, v44, (__int64)v41, v42);
            }
          }
          if ( (*(_DWORD *)v13 & 0x40000000) != 0 )
          {
            sub_44D590(0x40000000, v13);
            *(_QWORD *)(v13 + 4) = 0x7FFFFFFF00000001LL;
            v52 = *(_QWORD *)(v15 + 0xE0);
            *(_QWORD *)((v52 & 0xFFFFFFFFFFFFFFFELL) - 8) = v39;
            *(_QWORD *)(v13 + 24) = StatusReg - 1632;
            *(_QWORD *)(v13 + 32) = v52;
            *(_QWORD *)(v15 + 0xE0) = v39 | 1;
LABEL_60:
            result = 130;
            *(_QWORD *)(v15 + 0xF0) = 0;
            goto LABEL_30;
          }
        }
        if ( *(_DWORD *)(v13 + 8) == 2147483646 )
        {
          v35 = 7;
          v36 = 0;
          *(_DWORD *)(v13 + 4) = 0;
          v56 = linux_eabi_syscall(__NR_futex, (void *)v13, (void *)7, 0, 0, v40, v41, v42);
          if ( v56 <= 0xFFFFFFFFFFFFF000LL )
            goto LABEL_75;
          if ( (_DWORD)v56 == -110 )
            goto LABEL_75;
          v57 = __CFADD__((_DWORD)v56, 38);
          v58 = v56 + 38;
          if ( v57 )
          {
            v35 = 0x2C08000009LL;
            if ( ((0x2C08000009uLL >> v58) & 1) != 0 )
              goto LABEL_75;
          }
          v70 = v5;
          v71 = v6;
LABEL_92:
          sub_401A30("The futex facility returned an unexpected error code.\n", v35, v36, 0);
LABEL_93:
          sub_407064(v13, 128);
LABEL_75:
          result = 131;
          *(_QWORD *)(v15 + 240) = 0;
          goto LABEL_30;
        }
        *(_DWORD *)(v13 + 4) = 1;
        v50 = *(_QWORD *)(v15 + 0xE0);
        *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFFELL) - 8) = v39;
        *(_QWORD *)(v13 + 24) = StatusReg - 1632;
        *(_QWORD *)(v13 + 32) = v50;
        *(_QWORD *)(v15 + 0xE0) = v39 | 1;
        *(_QWORD *)(v15 + 0xF0) = 0;
        goto LABEL_11;
      }
      if ( v38 != 2 )
      {
        if ( v38 != 1 )
          goto LABEL_34;
LABEL_78:
        v55 = *(_DWORD *)(v13 + 4);
        *(_QWORD *)(v15 + 0xF0) = 0;
        if ( v55 != -1 )
        {
          *(_DWORD *)(v13 + 4) = v55 + 1;
          result = 0;
          goto LABEL_30;
        }
LABEL_73:
        result = 11;
        goto LABEL_30;
      }
      goto LABEL_94;
    }
    if ( (*(_DWORD *)v13 & 0x3FFFFFFF) == v17 )
    {
      if ( v38 == 2 )
      {
LABEL_94:
        result = 35;
        *(_QWORD *)(v15 + 0xF0) = 0;
        goto LABEL_30;
      }
      if ( v38 == 1 )
        goto LABEL_78;
    }
    if ( _aarch64_cas4_acq(0, v17, (atomic_uint *)v13) )
    {
      v44 = *v16 & 0x80;
      v48 = sub_442710((void *)v13, 0, 0, v44, v45, v46, v47);
      if ( (v48 & 0xFFFFFFDF) == 3 )
      {
        if ( v48 != 35 )
          goto LABEL_39;
        goto LABEL_38;
      }
      if ( (*(_DWORD *)v13 & 0x40000000) != 0 )
      {
        v70 = v5;
        v71 = v6;
        sub_41F250(
          "robust || (oldval & FUTEX_OWNER_DIED) == 0",
          (__int64)"pthread_mutex_lock.c",
          0x1CCu,
          (__int64)"__pthread_mutex_lock_full");
      }
    }
LABEL_26:
    *(_DWORD *)(v13 + 4) = 1;
LABEL_11:
    v24 = *(_DWORD *)(v13 + 12) + 1;
    *(_DWORD *)(v13 + 8) = v17;
    *(_DWORD *)(v13 + 12) = v24;
    result = 0;
    goto LABEL_30;
  }
  return result;
}
