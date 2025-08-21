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
  __int64 v9; // x3
  __int64 result; // x0
  void *v11; // x4
  void *v12; // x5
  void *v13; // x6
  __int64 v14; // x21
  unsigned __int64 StatusReg; // x20
  __int64 v16; // x19
  _DWORD *v17; // x24
  unsigned int v18; // w27
  int v19; // w1
  unsigned int v20; // w0
  __int64 v21; // x23
  unsigned int v22; // w22
  unsigned int i; // w25
  __int64 v24; // x0
  int v25; // w0
  __int64 v26; // x0
  unsigned int v27; // w26
  unsigned int v28; // w20
  unsigned int v29; // w23
  unsigned int v30; // w22
  unsigned int v31; // w0
  void *v32; // x4
  void *v33; // x5
  void *v34; // x6
  unsigned __int64 v35; // x0
  __int64 *v36; // x1
  __int64 v37; // x3
  __int64 v38; // x2
  int v39; // w23
  __int64 v40; // x22
  void *v41; // x4
  void *v42; // x5
  void *v43; // x6
  int v44; // w0
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
  __int64 v56; // x0
  int v57; // [xsp+4h] [xbp-7Ch] BYREF
  __int64 v58; // [xsp+8h] [xbp-78h]
  __int64 *v59; // [xsp+10h] [xbp-70h]
  __int64 v60; // [xsp+18h] [xbp-68h]
  __int64 *v61; // [xsp+20h] [xbp-60h]
  __int64 v62; // [xsp+28h] [xbp-58h]
  __int64 v63; // [xsp+30h] [xbp-50h]
  __int64 v64; // [xsp+38h] [xbp-48h]
  __int64 v65; // [xsp+40h] [xbp-40h]
  __int64 v66; // [xsp+48h] [xbp-38h]
  __int64 v67; // [xsp+50h] [xbp-30h]
  __int64 v68; // [xsp+58h] [xbp-28h]
  __int64 v69; // [xsp+60h] [xbp-20h]
  __int64 v70; // [xsp+70h] [xbp-10h] BYREF
  __int64 v71; // [xsp+78h] [xbp-8h]
  __int64 v72; // [xsp+80h] [xbp+0h] BYREF

  v71 = qword_48DD60;
  sub_414684(26, &v70, sub_42C8E0);
  sub_414684(14, &v70, sub_42C900);
  sub_414684(20, &v70, sub_42C920);
  result = (__int64)&qword_48DD60;
  if ( v71 != qword_48DD60 )
  {
    v59 = &v72;
    v60 = v8;
    v63 = v1;
    v64 = v2;
    v14 = sub_412340(&qword_48DD60, 0, v71 - qword_48DD60, v9);
    v61 = &v70;
    v62 = v0;
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v65 = v3;
    v66 = v4;
    v16 = StatusReg - 1856;
    v17 = (_DWORD *)(v14 + 16);
    v69 = v7;
    v18 = *(_DWORD *)(StatusReg - 1856 + 0xD0);
    v58 = qword_48DD60;
    v19 = *(_DWORD *)(v14 + 16);
    v20 = v19 & 0x7F;
    if ( v20 > 0x33 )
    {
      if ( v20 - 64 > 3 )
        goto LABEL_29;
      v67 = v5;
      v68 = v6;
      v26 = (unsigned int)*v17;
      LODWORD(v16) = *(_DWORD *)v14;
      LODWORD(StatusReg) = -1;
      if ( *(_DWORD *)(v14 + 8) != v18 )
        goto LABEL_14;
    }
    else
    {
      if ( v20 <= 0x2F )
      {
        if ( v20 <= 0x13 )
        {
          if ( (v19 & 0x70) != 0 )
          {
            v67 = v5;
            v68 = v6;
            v21 = v14 + 32;
            *(_QWORD *)(v16 + 0xF0) = v14 + 32;
            v22 = *(_DWORD *)v14;
            for ( i = 0; ; i = 0x80000000 )
            {
              while ( 1 )
              {
                if ( !v22 )
                {
                  v22 = _aarch64_cas4_acq(0, v18 | i, (atomic_uint *)v14);
                  if ( !v22 )
                  {
                    if ( *(_DWORD *)(v14 + 8) != 2147483646 )
                    {
                      *(_DWORD *)(v14 + 4) = 1;
                      v24 = *(_QWORD *)(v16 + 0xE0);
                      *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFFELL) - 8) = v21;
                      *(_QWORD *)(v14 + 24) = StatusReg - 1632;
                      *(_QWORD *)(v14 + 32) = v24;
                      *(_QWORD *)(v16 + 0xE0) = v21;
                      *(_QWORD *)(v16 + 0xF0) = 0;
                      goto LABEL_11;
                    }
                    *(_DWORD *)(v14 + 4) = 0;
                    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v14) > 1 )
                      goto LABEL_93;
                    goto LABEL_75;
                  }
                }
                if ( (v22 & 0x40000000) == 0 )
                  break;
                v48 = _aarch64_cas4_acq(v22, v22 & 0x80000000 | v18 | i, (atomic_uint *)v14);
                if ( v22 == v48 )
                {
                  *(_QWORD *)(v14 + 4) = 0x7FFFFFFF00000001LL;
                  v51 = *(_QWORD *)(v16 + 0xE0);
                  *(_QWORD *)((v51 & 0xFFFFFFFFFFFFFFFELL) - 8) = v21;
                  *(_QWORD *)(v14 + 24) = StatusReg - 1632;
                  *(_QWORD *)(v14 + 32) = v51;
                  *(_QWORD *)(v16 + 0xE0) = v21;
                  goto LABEL_60;
                }
LABEL_57:
                v22 = v48;
              }
              if ( (v22 & 0x3FFFFFFF) == v18 )
              {
                if ( (*v17 & 0x7F) == 0x12 )
                  goto LABEL_97;
                if ( (*v17 & 0x7F) == 0x11 )
                {
                  v46 = *(_DWORD *)(v14 + 4);
                  *(_QWORD *)(v16 + 0xF0) = 0;
                  if ( v46 != -1 )
                    goto LABEL_48;
                  goto LABEL_73;
                }
              }
              if ( (v22 & 0x80000000) == 0 )
              {
                v48 = _aarch64_cas4_acq(v22, v22 | 0x80000000, (atomic_uint *)v14);
                if ( v22 != v48 )
                  goto LABEL_57;
                v22 |= 0x80000000;
              }
              v50 = linux_eabi_syscall(__NR_futex, (void *)v14, 0, (void *)v22, 0, v11, v12, v13);
              if ( v50 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v50 != -11 && (_DWORD)v50 != -4 )
                goto LABEL_92;
              v22 = *(_DWORD *)v14;
            }
          }
          goto LABEL_29;
        }
        if ( v20 - 32 > 3 )
        {
LABEL_29:
          result = 22;
          goto LABEL_30;
        }
      }
      v39 = *v17 & 3;
      if ( (*v17 & 0x10) != 0 )
      {
        v40 = v14 + 32;
        *(_QWORD *)(v16 + 0xF0) = (v14 + 32) | 1;
        if ( v18 != (*(_DWORD *)v14 & 0x3FFFFFFF) )
          goto LABEL_34;
        if ( v39 != 2 )
        {
          if ( v39 != 1 )
          {
LABEL_34:
            if ( _aarch64_cas4_acq(0, v18, (atomic_uint *)v14) )
            {
              v44 = sub_442710(v14, 0, 0, 128);
              if ( (v44 & 0xFFFFFFDF) == 3 )
              {
                if ( v44 != 35 )
                {
LABEL_96:
                  v67 = v5;
                  v68 = v6;
                  sub_41F250("e != ESRCH || !robust", "pthread_mutex_lock.c", 450, "__pthread_mutex_lock_full");
LABEL_97:
                  result = 35;
                  *(_QWORD *)(v16 + 240) = 0;
                  goto LABEL_30;
                }
                v16 = 128;
LABEL_38:
                if ( (unsigned int)(v39 - 1) > 1 )
                {
                  while ( 1 )
                  {
LABEL_39:
                    v57 = 0;
                    sub_442550(&v57, 0, 0, 0, (unsigned int)v16);
                  }
                }
                v67 = v5;
                v68 = v6;
                sub_41F250(
                  "e != EDEADLK || (kind != PTHREAD_MUTEX_ERRORCHECK_NP && kind != PTHREAD_MUTEX_RECURSIVE_NP)",
                  "pthread_mutex_lock.c",
                  445,
                  "__pthread_mutex_lock_full");
                goto LABEL_96;
              }
              if ( (*(_DWORD *)v14 & 0x40000000) != 0 )
              {
                sub_44D590(0x40000000, v14);
                *(_QWORD *)(v14 + 4) = 0x7FFFFFFF00000001LL;
                v49 = *(_QWORD *)(v16 + 0xE0);
                *(_QWORD *)((v49 & 0xFFFFFFFFFFFFFFFELL) - 8) = v40;
                *(_QWORD *)(v14 + 24) = StatusReg - 1632;
                *(_QWORD *)(v14 + 32) = v49;
                *(_QWORD *)(v16 + 0xE0) = v40 | 1;
LABEL_60:
                result = 130;
                *(_QWORD *)(v16 + 0xF0) = 0;
                goto LABEL_30;
              }
            }
            if ( *(_DWORD *)(v14 + 8) == 2147483646 )
            {
              *(_DWORD *)(v14 + 4) = 0;
              v53 = linux_eabi_syscall(__NR_futex, (void *)v14, (void *)7, 0, 0, v41, v42, v43);
              if ( v53 <= 0xFFFFFFFFFFFFF000LL )
                goto LABEL_75;
              if ( (_DWORD)v53 == -110 )
                goto LABEL_75;
              v54 = __CFADD__((_DWORD)v53, 38);
              v55 = v53 + 38;
              if ( v54 && ((0x2C08000009uLL >> v55) & 1) != 0 )
                goto LABEL_75;
              v67 = v5;
              v68 = v6;
LABEL_92:
              sub_401A30("The futex facility returned an unexpected error code.\n");
LABEL_93:
              sub_407064(v14, 128);
LABEL_75:
              result = 131;
              *(_QWORD *)(v16 + 240) = 0;
LABEL_30:
              v36 = &qword_48DD60;
              v37 = v58 - qword_48DD60;
              v38 = 0;
              if ( v58 == qword_48DD60 )
                return result;
LABEL_99:
              v56 = sub_412340(result, v36, v38, v37);
              return sub_42D0B0(v56);
            }
            *(_DWORD *)(v14 + 4) = 1;
            v47 = *(_QWORD *)(v16 + 0xE0);
            *(_QWORD *)((v47 & 0xFFFFFFFFFFFFFFFELL) - 8) = v40;
            *(_QWORD *)(v14 + 24) = StatusReg - 1632;
            *(_QWORD *)(v14 + 32) = v47;
            *(_QWORD *)(v16 + 0xE0) = v40 | 1;
            *(_QWORD *)(v16 + 0xF0) = 0;
LABEL_11:
            v25 = *(_DWORD *)(v14 + 12) + 1;
            *(_DWORD *)(v14 + 8) = v18;
            *(_DWORD *)(v14 + 12) = v25;
            result = 0;
            goto LABEL_30;
          }
          goto LABEL_78;
        }
LABEL_94:
        result = 35;
        *(_QWORD *)(v16 + 0xF0) = 0;
        goto LABEL_30;
      }
      if ( (*(_DWORD *)v14 & 0x3FFFFFFF) == v18 )
      {
        if ( v39 == 2 )
          goto LABEL_94;
        if ( v39 == 1 )
        {
LABEL_78:
          v52 = *(_DWORD *)(v14 + 4);
          *(_QWORD *)(v16 + 0xF0) = 0;
          if ( v52 != -1 )
          {
            *(_DWORD *)(v14 + 4) = v52 + 1;
            result = 0;
            goto LABEL_30;
          }
          goto LABEL_73;
        }
      }
      if ( !_aarch64_cas4_acq(0, v18, (atomic_uint *)v14) )
        goto LABEL_26;
      v16 = (unsigned __int8)*v17 & 0x80;
      v45 = sub_442710(v14, 0, 0, v16);
      if ( (v45 & 0xFFFFFFDF) == 3 )
      {
        if ( v45 != 35 )
          goto LABEL_39;
        goto LABEL_38;
      }
      if ( (*(_DWORD *)v14 & 0x40000000) == 0 )
      {
LABEL_26:
        *(_DWORD *)(v14 + 4) = 1;
        goto LABEL_11;
      }
      v67 = v5;
      v68 = v6;
      LOBYTE(v26) = sub_41F250(
                      "robust || (oldval & FUTEX_OWNER_DIED) == 0",
                      "pthread_mutex_lock.c",
                      460,
                      "__pthread_mutex_lock_full");
    }
    v26 &= 3u;
    if ( (_DWORD)v26 == 2 )
    {
      result = 35;
      goto LABEL_30;
    }
    if ( (_DWORD)v26 != 1 )
    {
      while ( 1 )
      {
LABEL_14:
        v27 = (unsigned int)v16 >> 19;
        if ( (int)((unsigned int)v16 >> 19) < (int)sub_42EA40(v26) )
        {
          if ( (_DWORD)StatusReg != -1 )
            sub_42E6C0((unsigned int)StatusReg, 0xFFFFFFFFLL);
          goto LABEL_29;
        }
        result = sub_42E6C0((unsigned int)StatusReg, v27);
        if ( (_DWORD)result )
          goto LABEL_30;
        v28 = v16 & 0xFFF80000;
        v29 = v16 & 0xFFF80000 | 1;
        if ( v28 == _aarch64_cas4_acq(v16 & 0xFFF80000, v28 | 1, (atomic_uint *)v14) )
          break;
        v30 = v28 | 2;
        while ( 1 )
        {
          v31 = _aarch64_cas4_acq(v29, v30, (atomic_uint *)v14);
          v16 = v31;
          v26 = v31 & 0xFFF80000;
          if ( (_DWORD)v26 != v28 )
            break;
          if ( v28 == (_DWORD)v16
            || (v35 = linux_eabi_syscall(
                        __NR_futex,
                        (void *)v14,
                        (void *)((unsigned __int8)~(unsigned __int8)*v17 & 0x80),
                        (void *)(v28 | 2),
                        0,
                        v32,
                        v33,
                        v34),
                v35 <= 0xFFFFFFFFFFFFF000LL)
            || (_DWORD)v35 == -11 )
          {
            if ( v28 == _aarch64_cas4_acq(v28, v30, (atomic_uint *)v14) )
              goto LABEL_25;
          }
          else
          {
            if ( (_DWORD)v35 != -4 )
              goto LABEL_92;
            if ( v28 == _aarch64_cas4_acq(v28, v30, (atomic_uint *)v14) )
              goto LABEL_25;
          }
        }
        LODWORD(StatusReg) = v27;
      }
LABEL_25:
      if ( !*(_DWORD *)(v14 + 8) )
        goto LABEL_26;
      result = sub_41F250("mutex->__data.__owner == 0", "pthread_mutex_lock.c", 607, "__pthread_mutex_lock_full");
      goto LABEL_99;
    }
    v46 = *(_DWORD *)(v14 + 4);
    if ( v46 != (_DWORD)StatusReg )
    {
LABEL_48:
      *(_DWORD *)(v14 + 4) = v46 + 1;
      result = 0;
      goto LABEL_30;
    }
LABEL_73:
    result = 11;
    goto LABEL_30;
  }
  return result;
}
