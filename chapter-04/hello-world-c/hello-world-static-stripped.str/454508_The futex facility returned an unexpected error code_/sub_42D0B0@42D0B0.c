__int64 __fastcall sub_42D0B0(atomic_uint *a1)
{
  int v1; // w22
  unsigned __int64 v2; // x21
  int v3; // w2
  int v5; // w20
  __int64 v6; // x2
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  unsigned __int64 v11; // x20
  int v12; // w0
  __int64 result; // x0
  unsigned __int64 StatusReg; // x20
  int v15; // w1
  int v16; // w0
  int v17; // w2
  __int64 v18; // x2
  __int64 v19; // x3
  void *v20; // x4
  void *v21; // x5
  void *v22; // x6
  int v23; // w1
  int v24; // w20
  __int64 v25; // x2
  __int64 v26; // x3
  void *v27; // x4
  void *v28; // x5
  void *v29; // x6
  int v30; // w1
  void *v31; // x5
  void *v32; // x6
  atomic_uint *v33; // x19
  unsigned __int64 v34; // x20
  unsigned int v35; // w0
  unsigned int v36; // w2
  unsigned __int64 v37; // x4
  bool v38; // zf
  int v39; // w0
  unsigned int v40; // w3
  int v41; // w2
  int v42; // w0
  int v43; // w2
  __int64 v44; // x3
  void *v45; // x4
  void *v46; // x5
  void *v47; // x6
  int v48; // w22
  unsigned int v49; // w0
  void *v50; // x4
  void *v51; // x5
  void *v52; // x6
  unsigned __int64 v53; // x0
  int v54; // w0
  int v55; // w23
  unsigned __int64 v56; // x22
  unsigned int v57; // w0
  unsigned __int64 v58; // x3
  int v59; // w2
  bool v60; // zf
  __int64 v61; // x3
  unsigned __int64 v62; // x0
  int v63; // w0
  int v64; // w0
  unsigned __int64 v65; // x0
  bool v66; // cf
  char v67; // w0

  v2 = (unsigned __int64)a1 + 16;
  v3 = *((_DWORD *)a1 + 4);
  if ( (v3 & 0x7C) != 0 )
    JUMPOUT(0x42C9E0);
  if ( (v3 & 0x17F) == 0 )
  {
LABEL_3:
    v5 = *(_DWORD *)v2 & 0x80;
    if ( v5 || !byte_490F08 || *(_DWORD *)a1 )
    {
      if ( _aarch64_cas4_acq(0, 1u, a1) )
        sub_406FC0(a1, v5, v6, v7, v8, v9, v10);
    }
    else
    {
      *(_DWORD *)a1 = 1;
    }
    if ( !*((_DWORD *)a1 + 2) )
      goto LABEL_7;
    sub_41F250("mutex->__data.__owner == 0", "pthread_mutex_lock.c", 94, "___pthread_mutex_lock");
    goto LABEL_46;
  }
  if ( (*(_DWORD *)v2 & 0x7F) == 1 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v15 = *((_DWORD *)a1 + 2);
    v11 = StatusReg - 1856;
    if ( v15 == *(_DWORD *)(v11 + 0xD0) )
    {
      v16 = *((_DWORD *)a1 + 1);
      if ( v16 != -1 )
      {
        *((_DWORD *)a1 + 1) = v16 + 1;
        return 0;
      }
      return 11;
    }
    v17 = *(_DWORD *)v2;
    v2 = *(_DWORD *)v2 & 0x80;
    if ( (v17 & 0x80) != 0 || !byte_490F08 || *(_DWORD *)a1 )
    {
      if ( _aarch64_cas4_acq(0, 1u, a1) )
        sub_406FC0(a1, v2, v18, v19, v20, v21, v22);
      v15 = *((_DWORD *)a1 + 2);
    }
    else
    {
      *(_DWORD *)a1 = 1;
    }
    if ( !v15 )
    {
      *((_DWORD *)a1 + 1) = 1;
      goto LABEL_8;
    }
    sub_41F250("mutex->__data.__owner == 0", "pthread_mutex_lock.c", 130, "___pthread_mutex_lock");
    goto LABEL_48;
  }
  if ( (*(_DWORD *)v2 & 0x7F) == 3 )
  {
    if ( !_aarch64_cas4_acq(0, 1u, a1) )
    {
LABEL_29:
      if ( !*((_DWORD *)a1 + 2) )
      {
LABEL_7:
        v11 = _ReadStatusReg(TPIDR_EL0) - 1856;
LABEL_8:
        v12 = *((_DWORD *)a1 + 3) + 1;
        *((_DWORD *)a1 + 2) = *(_DWORD *)(v11 + 0xD0);
        *((_DWORD *)a1 + 3) = v12;
        return 0;
      }
      sub_41F250("mutex->__data.__owner == 0", "pthread_mutex_lock.c", 167, "___pthread_mutex_lock");
      return 11;
    }
    v1 = 2 * (*((_DWORD *)a1 + 5) + 5);
    if ( v1 > (__int16)dword_491908 )
      v1 = (__int16)dword_491908;
    if ( v1 > 1 )
    {
      v24 = 1;
      while ( *(_DWORD *)a1 || _aarch64_cas4_acq(0, 1u, a1) )
      {
        if ( v1 == ++v24 )
          goto LABEL_43;
      }
      goto LABEL_41;
    }
LABEL_48:
    v1 = 1;
LABEL_43:
    if ( !_aarch64_cas4_acq(0, 1u, a1) )
    {
      v24 = v1;
LABEL_41:
      *((_DWORD *)a1 + 5) += (v24 - *((_DWORD *)a1 + 5)) / 8;
      goto LABEL_29;
    }
LABEL_46:
    v24 = v1;
    sub_406FC0(a1, *(_DWORD *)v2 & 0x80, v25, v26, v27, v28, v29);
    goto LABEL_41;
  }
  v23 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0);
  if ( (*(_DWORD *)v2 & 0x7F) == 2 )
  {
    if ( v23 == *((_DWORD *)a1 + 2) )
      return 35;
    goto LABEL_3;
  }
  v33 = (atomic_uint *)sub_41F250(
                         "PTHREAD_MUTEX_TYPE (mutex) == PTHREAD_MUTEX_ERRORCHECK_NP",
                         "pthread_mutex_lock.c",
                         172,
                         "___pthread_mutex_lock");
  v34 = (unsigned __int64)v33 + 16;
  v35 = *((_DWORD *)v33 + 4);
  v36 = v35 & 0x7F;
  if ( v36 > 0x33 )
  {
    if ( v36 == 66 )
    {
      if ( *((_DWORD *)v33 + 2) != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0)
        || (*(_DWORD *)v33 & 0x7FFFF) == 0 )
      {
        return 1;
      }
    }
    else if ( v36 > 0x42 )
    {
      if ( v36 != 67 )
        return 22;
    }
    else if ( v36 != 64 )
    {
      if ( v36 != 65 )
        return 22;
      if ( *((_DWORD *)v33 + 2) != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
        return 1;
      v39 = *((_DWORD *)v33 + 1) - 1;
      *((_DWORD *)v33 + 1) = v39;
      if ( v39 )
        return 0;
    }
    *((_DWORD *)v33 + 2) = 0;
    if ( v30 )
      --*((_DWORD *)v33 + 3);
    LODWORD(v2) = *(_DWORD *)v33;
    do
    {
      v48 = v2 & 0xFFF80000;
      v49 = _dl___aarch64_cas4_rel(v2, v2 & 0xFFF80000, v33);
      v38 = v49 == (_DWORD)v2;
      v2 = v49;
    }
    while ( !v38 );
    if ( (v49 & 0x7FFFE) != 0 )
    {
      v53 = linux_eabi_syscall(__NR_futex, v33, (void *)(*(_DWORD *)v34 & 0x80 ^ 0x81u), (void *)1, 0, v50, v51, v52);
      if ( v53 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v53 + 22) & 0xFFFFFFF7) != 0 )
        goto LABEL_123;
    }
    return sub_42E6C0((unsigned int)(v48 >> 19), 0xFFFFFFFFLL);
  }
  if ( (v35 & 0x60) == 0 )
  {
    if ( v36 != 17 )
    {
      if ( v36 > 0x11 )
      {
        if ( v36 - 18 <= 1 )
          goto LABEL_58;
      }
      else if ( v36 == 16 )
      {
LABEL_58:
        v34 = _ReadStatusReg(TPIDR_EL0) - 1856;
        result = 1;
        if ( *(_DWORD *)v33 )
          v38 = (*(_DWORD *)v33 & 0x3FFFFFFF) == *(_DWORD *)(v34 + 0xD0);
        else
          v38 = 0;
        if ( !v38 )
          return result;
        if ( *((_DWORD *)v33 + 2) == 0x7FFFFFFF )
          v43 = 2147483646;
        else
          v43 = 0;
        goto LABEL_74;
      }
      return 22;
    }
    v34 = _ReadStatusReg(TPIDR_EL0) - 1856;
    v40 = *((_DWORD *)v33 + 2);
    v41 = *(_DWORD *)(v34 + 0xD0);
    if ( (*(_DWORD *)v33 & 0x3FFFFFFF) == v41 && v40 == 0x7FFFFFFF )
    {
      v43 = 2147483646;
      v64 = *((_DWORD *)v33 + 1) - 1;
      *((_DWORD *)v33 + 1) = v64;
      if ( v64 )
        return 131;
      goto LABEL_74;
    }
    if ( v41 == v40 )
    {
      v42 = *((_DWORD *)v33 + 1) - 1;
      *((_DWORD *)v33 + 1) = v42;
      if ( !v42 )
      {
        v43 = 0;
LABEL_74:
        *(_QWORD *)(v34 + 0xF0) = (char *)v33 + 32;
        v44 = *((_QWORD *)v33 + 3);
        *(_QWORD *)((*((_QWORD *)v33 + 4) & 0xFFFFFFFFFFFFFFFELL) - 8) = v44;
        *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFELL) = *((_QWORD *)v33 + 4);
        *((_DWORD *)v33 + 2) = v43;
        *((_QWORD *)v33 + 3) = 0;
        *((_QWORD *)v33 + 4) = 0;
        if ( v30 )
          --*((_DWORD *)v33 + 3);
        if ( (_aarch64_swp4_rel(0, v33) & 0x80000000) != 0 )
        {
          v62 = linux_eabi_syscall(__NR_futex, v33, (void *)1, (void *)1, 0, v45, v46, v47);
          if ( v62 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v62 + 22) & 0xFFFFFFF7) != 0 )
            goto LABEL_123;
        }
        *(_QWORD *)(v34 + 0xF0) = 0;
        return 0;
      }
      return 0;
    }
    return 1;
  }
  result = 1;
  v37 = 1LL << v36;
  if ( ((1LL << v36) & 0xD000D00000000LL) != 0 )
  {
    v2 = _ReadStatusReg(TPIDR_EL0);
    if ( *(_DWORD *)v33 )
      v60 = (*(_DWORD *)v33 & 0x3FFFFFFF) == *(_DWORD *)(v2 - 1856 + 0xD0);
    else
      v60 = 0;
    if ( v60 )
    {
      v54 = 0;
      if ( (*(_DWORD *)v34 & 0x10) != 0 && *((_DWORD *)v33 + 2) == 0x7FFFFFFF )
        goto LABEL_126;
      goto LABEL_117;
    }
  }
  else
  {
    if ( v36 == 49 )
    {
      v2 = _ReadStatusReg(TPIDR_EL0);
      v58 = v2 - 1856;
      v37 = *((unsigned int *)v33 + 2);
      v59 = *(_DWORD *)(v2 - 1856 + 0xD0);
      if ( (*(_DWORD *)v33 & 0x3FFFFFFF) == v59 )
        goto LABEL_124;
      goto LABEL_101;
    }
    if ( v36 != 33 )
      return 22;
    v2 = _ReadStatusReg(TPIDR_EL0);
    if ( *((_DWORD *)v33 + 2) == *(_DWORD *)(v2 - 1856 + 0xD0) )
    {
      v54 = *((_DWORD *)v33 + 1) - 1;
      *((_DWORD *)v33 + 1) = v54;
      if ( v54 )
        return 0;
      while ( 1 )
      {
        while ( 1 )
        {
          *((_DWORD *)v33 + 2) = v54;
          if ( v30 )
            --*((_DWORD *)v33 + 3);
          v55 = 128;
          if ( (*(_DWORD *)v34 & 0x10) == 0 )
            v55 = *(_DWORD *)v34 & 0x80;
          v34 = *(unsigned int *)v33;
          while ( (v34 & 0x80000000) == 0 )
          {
            v56 = v2 - 1856;
            if ( *(_DWORD *)(v2 - 1648) != (_DWORD)v34 )
              break;
            v57 = _dl___aarch64_cas4_rel(v34, 0, v33);
            v38 = v57 == (_DWORD)v34;
            v34 = v57;
            if ( v38 )
              goto LABEL_98;
          }
          v65 = linux_eabi_syscall(__NR_futex, v33, (void *)(v55 ^ 0x87u), 0, 0, (void *)v37, v31, v32);
          v56 = v2 - 1856;
          if ( v65 <= 0xFFFFFFFFFFFFF000LL )
            goto LABEL_98;
          if ( (_DWORD)v65 == -110
            || (v66 = __CFADD__((_DWORD)v65, 38), v67 = v65 + 38, v66) && ((0x2C08000009uLL >> v67) & 1) != 0 )
          {
            v56 = v2 - 1856;
LABEL_98:
            *(_QWORD *)(v56 + 240) = 0;
            return 0;
          }
LABEL_123:
          sub_401A30("The futex facility returned an unexpected error code.\n");
LABEL_124:
          if ( (_DWORD)v37 == 0x7FFFFFFF )
            break;
LABEL_101:
          if ( v59 != (_DWORD)v37 )
            return 1;
          v54 = *((_DWORD *)v33 + 1) - 1;
          *((_DWORD *)v33 + 1) = v54;
          if ( v54 )
            return 0;
LABEL_119:
          *(_QWORD *)(v58 + 240) = ((unsigned __int64)v33 + 32) | 1;
          v61 = *((_QWORD *)v33 + 3);
          v37 = v61 & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD *)((*((_QWORD *)v33 + 4) & 0xFFFFFFFFFFFFFFFELL) - 8) = v61;
          *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFELL) = *((_QWORD *)v33 + 4);
          *((_QWORD *)v33 + 3) = 0;
          *((_QWORD *)v33 + 4) = 0;
        }
        v63 = *((_DWORD *)v33 + 1) - 1;
        *((_DWORD *)v33 + 1) = v63;
        if ( v63 )
          return 131;
LABEL_126:
        v54 = 2147483646;
LABEL_117:
        if ( (*(_DWORD *)v34 & 0x10) != 0 )
        {
          v58 = v2 - 1856;
          goto LABEL_119;
        }
      }
    }
  }
  return result;
}
