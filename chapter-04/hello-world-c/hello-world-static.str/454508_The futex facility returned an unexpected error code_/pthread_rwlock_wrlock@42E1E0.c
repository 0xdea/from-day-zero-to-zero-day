int pthread_rwlock_wrlock(pthread_rwlock_t *rwlock)
{
  __int64 *v2; // x22
  int writer; // w1
  unsigned __int64 v4; // x21
  _DWORD *p_writer_wakeup; // x24
  unsigned int v6; // w20
  int v7; // w23
  int v8; // w0
  int v9; // w0
  unsigned int v10; // w0
  int v11; // w20
  unsigned int flags; // w26
  unsigned int *v14; // x25
  int v15; // w27
  unsigned int v16; // w0
  int shared; // w23
  unsigned int v18; // w20
  int v19; // w0
  bool v20; // zf
  unsigned int *p_nr_readers; // x28
  unsigned int v22; // w24
  __int64 *v23; // x27
  int v24; // w26
  unsigned int v25; // w23
  int v26; // w0
  unsigned int nr_readers; // w25
  unsigned int lock; // w20
  int v30; // w26
  int v31; // w25
  unsigned int v32; // w0
  void *v33; // x5
  void *v34; // x6
  void *v35; // x4
  unsigned __int64 v36; // x0
  unsigned __int64 v37; // x0
  char v38; // w0
  int v39; // w28
  unsigned int v40; // w0
  void *v41; // x4
  void *v42; // x5
  void *v43; // x6
  unsigned __int64 v44; // x0
  unsigned int v45; // w23
  unsigned int v46; // w1
  unsigned int v47; // w0

  v2 = &rwlock->__align + 3;
  writer = rwlock->__writer;
  v4 = _ReadStatusReg(TPIDR_EL0) - 1856;
  if ( writer == *(_DWORD *)(v4 + 0xD0) )
    return 35;
  p_writer_wakeup = &rwlock->__writer_wakeup;
  v6 = _aarch64_ldset4_acq(2, rwlock);
  v7 = v6 & 2;
  v8 = 1;
  if ( (v6 & 2) == 0 )
  {
LABEL_3:
    *p_writer_wakeup = v8;
    v9 = v6 & 1;
    if ( (v6 & 1) == 0 )
    {
      while ( !(v9 | (v6 >> 3)) )
      {
        v10 = _aarch64_cas4_acq(v6, v6 | 1, (atomic_uint *)rwlock);
        v20 = v10 == v6;
        v6 = v10;
        if ( v20 )
        {
          rwlock->__readers_wakeup = 1;
          goto LABEL_8;
        }
        v9 = v10 & 1;
      }
      v23 = &rwlock->__align + 1;
      v24 = 0;
      while ( 1 )
      {
        while ( (*(_DWORD *)v23 & 0xFFFFFFFD) != 0 )
        {
          if ( v24 )
            goto LABEL_8;
          v38 = atomic_load((unsigned int *)rwlock);
          v24 = v38 & 1;
        }
        v25 = (rwlock->__shared != 0) << 7;
        if ( (*(_DWORD *)v23 & 2) != 0 || !_dl___aarch64_cas4_relax(0, 2u, (atomic_uint *)(&rwlock->__align + 1)) )
        {
          v26 = _futex_abstimed_wait64(&rwlock->__align + 1, 2, 0, 0, v25);
          v11 = v26;
          if ( v26 == 110 || v26 == 75 )
            break;
        }
      }
      if ( rwlock->__flags )
      {
        nr_readers = rwlock->__nr_readers;
        if ( nr_readers )
        {
          v39 = _dl___aarch64_swp4_relax(0, p_writer_wakeup);
          while ( 1 )
          {
            v40 = _dl___aarch64_cas4_rel(
                    nr_readers,
                    nr_readers | 0x80000000,
                    (atomic_uint *)((char *)&rwlock->__align + 4));
            if ( v40 == nr_readers )
              break;
            nr_readers = v40;
            if ( !v40 )
            {
              *p_writer_wakeup = v39;
              goto LABEL_48;
            }
          }
          if ( (v39 & 2) != 0 )
          {
            v44 = linux_eabi_syscall(__NR_futex, p_writer_wakeup, (void *)(v25 ^ 0x81), (void *)1, 0, v41, v42, v43);
            if ( v44 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v44 + 22) & 0xFFFFFFF7) != 0 )
              goto LABEL_59;
          }
          return v11;
        }
      }
LABEL_48:
      lock = rwlock->__lock;
      v30 = rwlock->__lock & 1;
      if ( !v30 )
      {
        v31 = _dl___aarch64_swp4_relax(0, p_writer_wakeup);
        while ( !v30 )
        {
          v32 = _dl___aarch64_cas4_rel(lock, (lock ^ 2) & 0xFFFFFFFB, (atomic_uint *)rwlock);
          v20 = v32 == lock;
          v35 = (void *)v32;
          lock = v32;
          if ( v20 )
          {
            if ( (v31 & 2) == 0
              || (v36 = linux_eabi_syscall(
                          __NR_futex,
                          p_writer_wakeup,
                          (void *)(v25 ^ 0x81),
                          (void *)1,
                          0,
                          (void *)v32,
                          v33,
                          v34),
                  v36 <= 0xFFFFFFFFFFFFF000LL)
              || (((_DWORD)v36 + 22) & 0xFFFFFFF7) == 0 )
            {
              if ( ((unsigned __int8)v35 & 4) == 0 )
                return 110;
              v37 = linux_eabi_syscall(__NR_futex, rwlock, (void *)(v25 ^ 0x81), (void *)0x7FFFFFFF, 0, v35, v33, v34);
              if ( v37 <= 0xFFFFFFFFFFFFF000LL || (((_DWORD)v37 + 22) & 0xFFFFFFF7) == 0 )
                return 110;
            }
LABEL_59:
            _libc_fatal("The futex facility returned an unexpected error code.\n");
          }
          v30 = v32 & 1;
        }
        *p_writer_wakeup = v31;
      }
      __dmb(9u);
      while ( (*(_DWORD *)v23 & 0xFFFFFFFD) == 0 )
        ;
    }
LABEL_8:
    *(_DWORD *)v2 = *(_DWORD *)(v4 + 0xD0);
    return 0;
  }
  flags = rwlock->__flags;
  if ( flags )
    _dl___aarch64_ldadd4_relax(1u, (atomic_uint *)((char *)&rwlock->__align + 4));
  v14 = &rwlock->__writer_wakeup;
  v15 = 0;
  while ( 1 )
  {
    while ( !v7 )
    {
      v16 = _aarch64_cas4_acq(v6, v6 | 2, (atomic_uint *)rwlock);
      v20 = v16 == v6;
      v6 = v16;
      if ( v20 )
      {
        if ( flags )
          _dl___aarch64_ldadd4_relax(0xFFFFFFFF, (atomic_uint *)((char *)&rwlock->__align + 4));
LABEL_19:
        p_writer_wakeup = &rwlock->__writer_wakeup;
        v6 |= 2u;
        if ( v15 )
          v8 = 3;
        else
          v8 = 1;
        goto LABEL_3;
      }
LABEL_31:
      v7 = v6 & 2;
    }
    if ( flags )
    {
      p_nr_readers = &rwlock->__nr_readers;
      while ( (*p_nr_readers & 0x80000000) != 0 )
      {
        v22 = *p_nr_readers;
        if ( _aarch64_cas4_acq(v22, v22 + 0x7FFFFFFF, (atomic_uint *)((char *)&rwlock->__align + 4)) == v22 )
        {
          v6 = rwlock->__lock;
          goto LABEL_19;
        }
      }
    }
    shared = rwlock->__shared;
    p_writer_wakeup = &rwlock->__writer_wakeup;
    v18 = *v14;
    if ( (*v14 & 0xFFFFFFFD) == 1
      && (v18 == 3 || _dl___aarch64_cas4_relax(v18, 3u, (atomic_uint *)((char *)&rwlock->__align + 12)) == v18) )
    {
      break;
    }
    v6 = rwlock->__lock;
    v7 = rwlock->__lock & 2;
  }
  v19 = _futex_abstimed_wait64((char *)&rwlock->__align + 12, 3, 0, 0, (unsigned __int8)(shared != 0) << 7);
  v11 = v19;
  v20 = v19 == 110 || v19 == 75;
  if ( !v20 )
  {
    v6 = rwlock->__lock;
    v15 = 1;
    goto LABEL_31;
  }
  if ( flags )
  {
    v45 = rwlock->__nr_readers;
    do
    {
      v46 = v45 - 1;
      if ( v45 == -2147483647 )
        v46 = 0;
      v47 = _aarch64_cas4_acq(v45, v46, (atomic_uint *)((char *)&rwlock->__align + 4));
      v20 = v47 == v45;
      v45 = v47;
    }
    while ( !v20 );
    if ( v47 == -2147483647 )
    {
      v6 = rwlock->__lock | 2;
      v8 = 3;
      goto LABEL_3;
    }
  }
  return v11;
}
