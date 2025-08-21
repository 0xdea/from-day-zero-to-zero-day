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
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v23; // x19
  _DWORD *v24; // x24
  unsigned int v25; // w27
  int v26; // w1
  unsigned int v27; // w0
  __int64 v28; // x23
  unsigned int v29; // w22
  unsigned int i; // w25
  __int64 v31; // x0
  int v32; // w0
  __int64 v33; // x0
  unsigned int v34; // w19
  unsigned int v35; // w20
  unsigned int v36; // w26
  unsigned int v37; // w20
  unsigned int v38; // w23
  unsigned int v39; // w22
  void *v40; // x4
  void *v41; // x5
  void *v42; // x6
  unsigned __int64 v43; // x0
  int v44; // w23
  __int64 v45; // x22
  void *v46; // x4
  void *v47; // x5
  void *v48; // x6
  int v49; // w0
  unsigned int v50; // w19
  int v51; // w0
  int v52; // w0
  __int64 v53; // x0
  unsigned int v54; // w0
  __int64 v55; // x0
  unsigned __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x2
  __int64 v59; // x3
  void *v60; // x4
  void *v61; // x5
  void *v62; // x6
  int v63; // w0
  unsigned __int64 v64; // x0
  bool v65; // cf
  char v66; // w0
  __int64 v67; // x0
  int v68; // [xsp+4h] [xbp-7Ch] BYREF
  __int64 v69; // [xsp+8h] [xbp-78h]
  __int64 *v70; // [xsp+10h] [xbp-70h]
  __int64 v71; // [xsp+18h] [xbp-68h]
  char **v72; // [xsp+20h] [xbp-60h]
  __int64 v73; // [xsp+28h] [xbp-58h]
  __int64 v74; // [xsp+30h] [xbp-50h]
  __int64 v75; // [xsp+38h] [xbp-48h]
  __int64 v76; // [xsp+40h] [xbp-40h]
  __int64 v77; // [xsp+48h] [xbp-38h]
  __int64 v78; // [xsp+50h] [xbp-30h]
  __int64 v79; // [xsp+58h] [xbp-28h]
  __int64 v80; // [xsp+60h] [xbp-20h]
  char *v81; // [xsp+70h] [xbp-10h] BYREF
  __int64 v82; // [xsp+78h] [xbp-8h]
  __int64 v83; // [xsp+80h] [xbp+0h] BYREF

  v82 = qword_48DD60;
  sub_414684(0x1Au, &v81, (__int64 (__fastcall *)(char *))sub_42C8E0);
  sub_414684(0xEu, &v81, (__int64 (__fastcall *)(char *))sub_42C900);
  sub_414684(0x14u, &v81, (__int64 (__fastcall *)(char *))sub_42C920);
  result = (__int64)&qword_48DD60;
  if ( v82 == qword_48DD60 )
    return result;
  v70 = &v83;
  v71 = v8;
  v74 = v1;
  v75 = v2;
  v13 = sub_412340();
  v72 = &v81;
  v73 = v0;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v76 = v3;
  v77 = v4;
  v23 = StatusReg - 1856;
  v24 = (_DWORD *)(v13 + 16);
  v80 = v7;
  v25 = *(_DWORD *)(StatusReg - 1856 + 0xD0);
  v69 = qword_48DD60;
  v26 = *(_DWORD *)(v13 + 16);
  v27 = v26 & 0x7F;
  if ( v27 > 0x33 )
  {
    if ( v27 - 64 <= 3 )
    {
      v78 = v5;
      v79 = v6;
      v33 = (unsigned int)*v24;
      v34 = *(_DWORD *)v13;
      v35 = -1;
      if ( *(_DWORD *)(v13 + 8) == v25 )
      {
        v33 &= 3u;
        if ( (_DWORD)v33 == 2 )
        {
          result = 35;
          goto LABEL_30;
        }
        if ( (_DWORD)v33 == 1 )
        {
          v52 = *(_DWORD *)(v13 + 4);
          if ( v52 == -1 )
            goto LABEL_73;
LABEL_48:
          *(_DWORD *)(v13 + 4) = v52 + 1;
          result = 0;
          goto LABEL_30;
        }
      }
      while ( 1 )
      {
        v36 = v34 >> 19;
        if ( (int)(v34 >> 19) < (int)sub_42EA40(v33) )
          break;
        result = sub_42E6C0(v35, v36);
        if ( (_DWORD)result )
          goto LABEL_30;
        v37 = v34 & 0xFFF80000;
        v38 = v34 & 0xFFF80000 | 1;
        if ( v37 == _aarch64_cas4_acq(v34 & 0xFFF80000, v37 | 1, (atomic_uint *)v13) )
        {
LABEL_25:
          if ( *(_DWORD *)(v13 + 8) )
            sub_41F250(
              "mutex->__data.__owner == 0",
              (__int64)"pthread_mutex_lock.c",
              0x25Fu,
              (__int64)"__pthread_mutex_lock_full");
LABEL_26:
          *(_DWORD *)(v13 + 4) = 1;
LABEL_11:
          v32 = *(_DWORD *)(v13 + 12) + 1;
          *(_DWORD *)(v13 + 8) = v25;
          *(_DWORD *)(v13 + 12) = v32;
          result = 0;
          goto LABEL_30;
        }
        v39 = v37 | 2;
        while ( 1 )
        {
          v34 = _aarch64_cas4_acq(v38, v39, (atomic_uint *)v13);
          v33 = v34 & 0xFFF80000;
          if ( (_DWORD)v33 != v37 )
            break;
          if ( v37 == v34
            || (v43 = linux_eabi_syscall(
                        __NR_futex,
                        (void *)v13,
                        (void *)((unsigned __int8)~(unsigned __int8)*v24 & 0x80),
                        (void *)(v37 | 2),
                        0,
                        v40,
                        v41,
                        v42),
                v43 <= 0xFFFFFFFFFFFFF000LL)
            || (_DWORD)v43 == -11 )
          {
            if ( v37 == _aarch64_cas4_acq(v37, v39, (atomic_uint *)v13) )
              goto LABEL_25;
          }
          else
          {
            if ( (_DWORD)v43 != -4 )
              goto LABEL_93;
            if ( v37 == _aarch64_cas4_acq(v37, v39, (atomic_uint *)v13) )
              goto LABEL_25;
          }
        }
        v35 = v36;
      }
      if ( v35 != -1 )
        sub_42E6C0(v35, 0xFFFFFFFFLL);
    }
    goto LABEL_29;
  }
  if ( v27 <= 0x2F )
  {
    if ( v27 <= 0x13 )
    {
      if ( (v26 & 0x70) != 0 )
      {
        v78 = v5;
        v79 = v6;
        v28 = v13 + 32;
        *(_QWORD *)(v23 + 0xF0) = v13 + 32;
        v29 = *(_DWORD *)v13;
        for ( i = 0; ; i = 0x80000000 )
        {
          while ( 1 )
          {
            if ( !v29 )
            {
              v29 = _aarch64_cas4_acq(0, v25 | i, (atomic_uint *)v13);
              if ( !v29 )
              {
                if ( *(_DWORD *)(v13 + 8) != 2147483646 )
                {
                  *(_DWORD *)(v13 + 4) = 1;
                  v31 = *(_QWORD *)(v23 + 0xE0);
                  *(_QWORD *)((v31 & 0xFFFFFFFFFFFFFFFELL) - 8) = v28;
                  *(_QWORD *)(v13 + 24) = StatusReg - 1632;
                  *(_QWORD *)(v13 + 32) = v31;
                  *(_QWORD *)(v23 + 0xE0) = v28;
                  *(_QWORD *)(v23 + 0xF0) = 0;
                  goto LABEL_11;
                }
                *(_DWORD *)(v13 + 4) = 0;
                if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v13) > 1 )
                  sub_407064((void *)v13, 128, v58, v59, v60, v61, v62);
                goto LABEL_76;
              }
            }
            if ( (v29 & 0x40000000) == 0 )
              break;
            v54 = _aarch64_cas4_acq(v29, v29 & 0x80000000 | v25 | i, (atomic_uint *)v13);
            if ( v29 == v54 )
            {
              *(_QWORD *)(v13 + 4) = 0x7FFFFFFF00000001LL;
              v57 = *(_QWORD *)(v23 + 0xE0);
              *(_QWORD *)((v57 & 0xFFFFFFFFFFFFFFFELL) - 8) = v28;
              *(_QWORD *)(v13 + 24) = StatusReg - 1632;
              *(_QWORD *)(v13 + 32) = v57;
              *(_QWORD *)(v23 + 0xE0) = v28;
              goto LABEL_60;
            }
LABEL_57:
            v29 = v54;
          }
          if ( (v29 & 0x3FFFFFFF) == v25 )
          {
            if ( (*v24 & 0x7F) == 0x12 )
            {
              result = 35;
              *(_QWORD *)(StatusReg - 1616) = 0;
              goto LABEL_30;
            }
            if ( (*v24 & 0x7F) == 0x11 )
            {
              v52 = *(_DWORD *)(v13 + 4);
              *(_QWORD *)(v23 + 0xF0) = 0;
              if ( v52 != -1 )
                goto LABEL_48;
LABEL_73:
              result = 11;
              goto LABEL_30;
            }
          }
          if ( (v29 & 0x80000000) == 0 )
          {
            v54 = _aarch64_cas4_acq(v29, v29 | 0x80000000, (atomic_uint *)v13);
            if ( v29 != v54 )
              goto LABEL_57;
            v29 |= 0x80000000;
          }
          v56 = linux_eabi_syscall(__NR_futex, (void *)v13, 0, (void *)v29, 0, v10, v11, v12);
          if ( v56 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v56 != -11 && (_DWORD)v56 != -4 )
            goto LABEL_93;
          v29 = *(_DWORD *)v13;
        }
      }
LABEL_29:
      result = 22;
      goto LABEL_30;
    }
    if ( v27 - 32 > 3 )
      goto LABEL_29;
  }
  v44 = *v24 & 3;
  if ( (*v24 & 0x10) != 0 )
  {
    v45 = v13 + 32;
    *(_QWORD *)(v23 + 0xF0) = (v13 + 32) | 1;
    if ( v25 != (*(_DWORD *)v13 & 0x3FFFFFFF) )
      goto LABEL_34;
    if ( v44 != 2 )
    {
      if ( v44 != 1 )
      {
LABEL_34:
        if ( _aarch64_cas4_acq(0, v25, (atomic_uint *)v13) )
        {
          v49 = sub_442710(v13, 0, 0, 128);
          if ( (v49 & 0xFFFFFFDF) == 3 )
          {
            if ( v49 != 35 )
            {
              v78 = v5;
              v79 = v6;
              sub_41F250(
                "e != ESRCH || !robust",
                (__int64)"pthread_mutex_lock.c",
                0x1C2u,
                (__int64)"__pthread_mutex_lock_full");
            }
            v50 = 128;
            goto LABEL_38;
          }
          if ( (*(_DWORD *)v13 & 0x40000000) != 0 )
          {
            sub_44D590(0x40000000, v13);
            *(_QWORD *)(v13 + 4) = 0x7FFFFFFF00000001LL;
            v55 = *(_QWORD *)(v23 + 0xE0);
            *(_QWORD *)((v55 & 0xFFFFFFFFFFFFFFFELL) - 8) = v45;
            *(_QWORD *)(v13 + 24) = StatusReg - 1632;
            *(_QWORD *)(v13 + 32) = v55;
            *(_QWORD *)(v23 + 0xE0) = v45 | 1;
LABEL_60:
            result = 130;
            *(_QWORD *)(v23 + 0xF0) = 0;
            goto LABEL_30;
          }
        }
        if ( *(_DWORD *)(v13 + 8) == 2147483646 )
        {
          *(_DWORD *)(v13 + 4) = 0;
          v64 = linux_eabi_syscall(__NR_futex, (void *)v13, (void *)7, 0, 0, v46, v47, v48);
          if ( v64 <= 0xFFFFFFFFFFFFF000LL
            || (_DWORD)v64 == -110
            || (v65 = __CFADD__((_DWORD)v64, 38), v66 = v64 + 38, v65) && ((0x2C08000009uLL >> v66) & 1) != 0 )
          {
LABEL_76:
            result = 131;
            *(_QWORD *)(StatusReg - 1616) = 0;
            goto LABEL_30;
          }
          v78 = v5;
          v79 = v6;
LABEL_93:
          sub_401A30(
            (__int64)"The futex facility returned an unexpected error code.\n",
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
        }
        *(_DWORD *)(v13 + 4) = 1;
        v53 = *(_QWORD *)(v23 + 0xE0);
        *(_QWORD *)((v53 & 0xFFFFFFFFFFFFFFFELL) - 8) = v45;
        *(_QWORD *)(v13 + 24) = StatusReg - 1632;
        *(_QWORD *)(v13 + 32) = v53;
        *(_QWORD *)(v23 + 0xE0) = v45 | 1;
        *(_QWORD *)(v23 + 0xF0) = 0;
        goto LABEL_11;
      }
      goto LABEL_79;
    }
LABEL_94:
    result = 35;
    *(_QWORD *)(v23 + 0xF0) = 0;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)v13 & 0x3FFFFFFF) != v25 )
    goto LABEL_41;
  if ( v44 == 2 )
    goto LABEL_94;
  if ( v44 != 1 )
  {
LABEL_41:
    if ( !_aarch64_cas4_acq(0, v25, (atomic_uint *)v13) )
      goto LABEL_26;
    v50 = *v24 & 0x80;
    v51 = sub_442710(v13, 0, 0, (unsigned __int8)*v24 & 0x80);
    if ( (v51 & 0xFFFFFFDF) != 3 )
    {
      if ( (*(_DWORD *)v13 & 0x40000000) != 0 )
      {
        v78 = v5;
        v79 = v6;
        sub_41F250(
          "robust || (oldval & FUTEX_OWNER_DIED) == 0",
          (__int64)"pthread_mutex_lock.c",
          0x1CCu,
          (__int64)"__pthread_mutex_lock_full");
      }
      goto LABEL_26;
    }
    if ( v51 != 35 )
    {
      while ( 1 )
      {
LABEL_39:
        v68 = 0;
        sub_442550(&v68, 0, 0, 0, v50);
      }
    }
LABEL_38:
    if ( (unsigned int)(v44 - 1) <= 1 )
    {
      v78 = v5;
      v79 = v6;
      sub_41F250(
        "e != EDEADLK || (kind != PTHREAD_MUTEX_ERRORCHECK_NP && kind != PTHREAD_MUTEX_RECURSIVE_NP)",
        (__int64)"pthread_mutex_lock.c",
        0x1BDu,
        (__int64)"__pthread_mutex_lock_full");
    }
    goto LABEL_39;
  }
LABEL_79:
  v63 = *(_DWORD *)(v13 + 4);
  *(_QWORD *)(v23 + 0xF0) = 0;
  if ( v63 == -1 )
    goto LABEL_73;
  *(_DWORD *)(v13 + 4) = v63 + 1;
  result = 0;
LABEL_30:
  if ( v69 != qword_48DD60 )
  {
    v67 = sub_412340();
    return sub_42D0B0(v67);
  }
  return result;
}
