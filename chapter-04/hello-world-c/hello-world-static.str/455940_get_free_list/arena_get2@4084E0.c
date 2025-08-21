int *__fastcall arena_get2(int *a1, int *a2)
{
  __int64 *v2; // x26
  atomic_ullong *v3; // x28
  unsigned __int64 StatusReg; // x22
  __int64 v5; // x21
  __int64 v8; // x25
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  void *v12; // x4
  void *v13; // x5
  void *v14; // x6
  int *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  void *v21; // x4
  void *v22; // x5
  void *v23; // x6
  __int64 v25; // x0
  unsigned __int64 v26; // x25
  int *v27; // x19
  __int64 v28; // x25
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  void *v32; // x4
  void *v33; // x5
  void *v34; // x6
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 *v37; // x3
  __int64 v38; // x2
  int nprocs; // w0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  void *v43; // x4
  void *v44; // x5
  void *v45; // x6
  int *v46; // x0
  __int64 v47; // x0
  __int64 v48; // x3
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  void *v52; // x4
  void *v53; // x5
  void *v54; // x6
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  void *v58; // x4
  void *v59; // x5
  void *v60; // x6
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  void *v65; // x4
  void *v66; // x5
  void *v67; // x6
  unsigned __int64 v68; // x20

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v5 = 48;
  v8 = *(_QWORD *)(StatusReg + 48);
  if ( !free_list )
    goto LABEL_15;
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&free_list_lock) )
    _lll_lock_wait_private(&free_list_lock, v9, v10, v11, v12, v13, v14);
  v15 = (int *)free_list;
  if ( !free_list )
  {
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&free_list_lock) > 1 )
      _lll_lock_wake_private(&free_list_lock);
LABEL_15:
    v2 = (__int64 *)&global_max_fast;
    v25 = narenas_limit_2;
    v26 = narenas;
    if ( narenas_limit_2 )
      goto LABEL_18;
    v25 = qword_4905F0;
    if ( !qword_4905F0 )
    {
      if ( qword_4905E8 >= (unsigned __int64)narenas )
        goto LABEL_18;
      nprocs = get_nprocs();
      if ( nprocs <= 0 )
      {
        v26 = narenas;
        v25 = 16;
        for ( narenas_limit_2 = 16; ; v25 = narenas_limit_2 )
        {
LABEL_18:
          if ( v25 - 1 < v26 )
          {
            v27 = (int *)next_to_use_5;
            if ( !next_to_use_5 )
            {
              v27 = (int *)&main_arena;
              next_to_use_5 = (__int64)&main_arena;
            }
            while ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v27) )
            {
              v27 = (int *)*((_QWORD *)v27 + 270);
              if ( v27 == (int *)next_to_use_5 )
              {
                if ( a2 != v27 )
                  goto LABEL_44;
                goto LABEL_75;
              }
            }
            goto LABEL_22;
          }
          v2 = &mp_;
          v3 = (atomic_ullong *)&narenas;
          if ( _aarch64_cas8_acq(v26, v26 + 1, (atomic_ullong *)&narenas) == v26 )
            break;
          v26 = narenas;
        }
        goto LABEL_50;
      }
      v26 = narenas;
      v25 = 8 * nprocs;
    }
    narenas_limit_2 = v25;
    goto LABEL_18;
  }
  v16 = *(_QWORD *)(free_list + 2176);
  free_list = *(_QWORD *)(free_list + 2168);
  if ( v16 )
  {
    _libc_assert_fail("result->attached_threads == 0", "arena.c", 715, "get_free_list");
    goto LABEL_77;
  }
  *((_QWORD *)v15 + 272) = 1;
  if ( !v8 )
    goto LABEL_9;
  v17 = *(_QWORD *)(v8 + 2176);
  if ( v17 )
  {
    *(_QWORD *)(v8 + 2176) = v17 - 1;
LABEL_9:
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&free_list_lock) > 1 )
      _lll_lock_wake_private(&free_list_lock);
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v15) )
      _lll_lock_wait_private(v15, v18, v19, v20, v21, v22, v23);
    *(_QWORD *)(StatusReg + 48) = v15;
    return v15;
  }
  do
  {
    while ( 1 )
    {
      detach_arena_part_0();
LABEL_75:
      v27 = (int *)*((_QWORD *)a2 + 270);
LABEL_44:
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v27) )
        _lll_lock_wait_private(v27, v40, v41, v42, v43, v44, v45);
LABEL_22:
      a1 = &free_list_lock;
      v28 = *(_QWORD *)(StatusReg + v5);
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&free_list_lock) )
        _lll_lock_wait_private(&free_list_lock, v29, v30, v31, v32, v33, v34);
      if ( !v28 )
        break;
      v35 = *(_QWORD *)(v28 + 2176);
      if ( v35 )
      {
        *(_QWORD *)(v28 + 2176) = v35 - 1;
        break;
      }
    }
    v36 = free_list;
    if ( !free_list )
    {
LABEL_34:
      ++*((_QWORD *)v27 + 272);
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&free_list_lock) > 1 )
        _lll_lock_wake_private(&free_list_lock);
      *(_QWORD *)(StatusReg + v5) = v27;
      next_to_use_5 = *((_QWORD *)v27 + 270);
      return v27;
    }
    v37 = &free_list;
    while ( !*(_QWORD *)(v36 + 2176) )
    {
      v38 = *(_QWORD *)(v36 + 2168);
      if ( (int *)v36 == v27 )
      {
        *v37 = v38;
        goto LABEL_34;
      }
      v37 = (__int64 *)(v36 + 2168);
      if ( !v38 )
        goto LABEL_34;
      v36 = *(_QWORD *)(v36 + 2168);
    }
    _libc_assert_fail("p->attached_threads == 0", "arena.c", 741, "remove_from_free_list");
LABEL_50:
    v15 = (int *)new_heap(a1 + 566, v2[1]);
    if ( !v15 )
    {
      v15 = (int *)new_heap(2264, v2[1]);
      if ( !v15 )
      {
        do
          v68 = v2[17];
        while ( v68 != _aarch64_cas8_acq(v68, v68 - 1, v3) );
        return v15;
      }
    }
    a2 = v15 + 12;
    *(_QWORD *)v15 = v15 + 12;
    v46 = v15 + 36;
    do
    {
      *((_QWORD *)v46 + 2) = v46;
      *((_QWORD *)v46 + 3) = v46;
      v46 += 4;
    }
    while ( v46 != v15 + 544 );
    if ( a2 == (int *)&main_arena )
      global_max_fast = 0x80;
    else
      v15[13] |= 2u;
    v15[14] = 0;
    v47 = (__int64)(v15 + 562);
    v48 = *((_QWORD *)v15 + 2);
    *((_QWORD *)v15 + 278) = 1;
    if ( (((_BYTE)v15 - 40) & 0xF) != 0 )
      v47 = (__int64)v15 - (((_BYTE)v15 - 40) & 0xF) + 2264;
    *((_QWORD *)v15 + 18) = v47;
    *((_QWORD *)v15 + 279) = v48;
    *((_QWORD *)v15 + 280) = v48;
    *(_QWORD *)(v47 + 8) = ((unsigned __int64)v15 + v48 - v47) | 1;
    a1 = *(int **)(StatusReg + v5);
    *(_QWORD *)(StatusReg + v5) = a2;
    v5 = (__int64)&list_lock;
    v15[12] = 0;
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&list_lock) )
      _lll_lock_wait_private(&list_lock, v49, v50, v51, v52, v53, v54);
    *((_QWORD *)v15 + 276) = off_490EE0;
    __dmb(0xBu);
    off_490EE0 = v15 + 12;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&list_lock) > 1 )
      _lll_lock_wake_private(&list_lock);
    v15 = &free_list_lock;
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&free_list_lock) )
LABEL_77:
      _lll_lock_wait_private(v15, v55, v56, v57, v58, v59, v60);
    if ( !a1 )
      goto LABEL_65;
    v61 = *((_QWORD *)a1 + 272);
  }
  while ( !v61 );
  *((_QWORD *)a1 + 272) = v61 - 1;
LABEL_65:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&free_list_lock) > 1 )
    _lll_lock_wake_private(&free_list_lock);
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a2) )
    _lll_lock_wait_private(a2, v62, v63, v64, v65, v66, v67);
  return a2;
}
