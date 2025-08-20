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
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  int *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  void *v29; // x4
  void *v30; // x5
  void *v31; // x6
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  void *v35; // x4
  void *v36; // x5
  void *v37; // x6
  double v38; // d0
  double v39; // d1
  double v40; // d2
  double v41; // d3
  double v42; // d4
  double v43; // d5
  double v44; // d6
  double v45; // d7
  __int64 v47; // x0
  unsigned __int64 v48; // x25
  int *v49; // x19
  __int64 v50; // x25
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  void *v54; // x4
  void *v55; // x5
  void *v56; // x6
  double v57; // d0
  double v58; // d1
  double v59; // d2
  double v60; // d3
  double v61; // d4
  double v62; // d5
  double v63; // d6
  double v64; // d7
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 *v67; // x3
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  void *v72; // x4
  void *v73; // x5
  void *v74; // x6
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  void *v78; // x4
  void *v79; // x5
  void *v80; // x6
  int nprocs; // w0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  void *v85; // x4
  void *v86; // x5
  void *v87; // x6
  double v88; // d0
  double v89; // d1
  double v90; // d2
  double v91; // d3
  double v92; // d4
  double v93; // d5
  double v94; // d6
  double v95; // d7
  int *v96; // x0
  __int64 v97; // x0
  __int64 v98; // x3
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  void *v102; // x4
  void *v103; // x5
  void *v104; // x6
  double v105; // d0
  double v106; // d1
  double v107; // d2
  double v108; // d3
  double v109; // d4
  double v110; // d5
  double v111; // d6
  double v112; // d7
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  void *v116; // x4
  void *v117; // x5
  void *v118; // x6
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  void *v122; // x4
  void *v123; // x5
  void *v124; // x6
  double v125; // d0
  double v126; // d1
  double v127; // d2
  double v128; // d3
  double v129; // d4
  double v130; // d5
  double v131; // d6
  double v132; // d7
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  void *v137; // x4
  void *v138; // x5
  void *v139; // x6
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  void *v143; // x4
  void *v144; // x5
  void *v145; // x6
  double v146; // d0
  double v147; // d1
  double v148; // d2
  double v149; // d3
  double v150; // d4
  double v151; // d5
  double v152; // d6
  double v153; // d7
  unsigned __int64 v154; // x20

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v5 = 48;
  v8 = *(_QWORD *)(StatusReg + 48);
  if ( !free_list )
    goto LABEL_15;
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&free_list_lock) )
    _lll_lock_wait_private(&free_list_lock, v15, v16, v17, v18, v19, v20, v21, v22, v9, v10, v11, v12, v13, v14);
  v23 = (int *)free_list;
  if ( !free_list )
  {
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&free_list_lock) > 1 )
      _lll_lock_wake_private(&free_list_lock, v75, v76, v77, v78, v79, v80);
LABEL_15:
    v2 = (__int64 *)&global_max_fast;
    v47 = narenas_limit_2;
    v48 = narenas;
    if ( narenas_limit_2 )
      goto LABEL_18;
    v47 = qword_4905F0;
    if ( !qword_4905F0 )
    {
      if ( qword_4905E8 >= (unsigned __int64)narenas )
        goto LABEL_18;
      nprocs = get_nprocs();
      if ( nprocs <= 0 )
      {
        v48 = narenas;
        v47 = 16;
        for ( narenas_limit_2 = 16; ; v47 = narenas_limit_2 )
        {
LABEL_18:
          if ( v47 - 1 < v48 )
          {
            v49 = (int *)next_to_use_5;
            if ( !next_to_use_5 )
            {
              v49 = (int *)&main_arena;
              next_to_use_5 = (__int64)&main_arena;
            }
            while ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v49) )
            {
              v49 = (int *)*((_QWORD *)v49 + 270);
              if ( v49 == (int *)next_to_use_5 )
              {
                if ( a2 != v49 )
                  goto LABEL_44;
                goto LABEL_75;
              }
            }
            goto LABEL_22;
          }
          v2 = &mp_;
          v3 = (atomic_ullong *)&narenas;
          if ( _aarch64_cas8_acq(v48, v48 + 1, (atomic_ullong *)&narenas) == v48 )
            break;
          v48 = narenas;
        }
        goto LABEL_50;
      }
      v48 = narenas;
      v47 = 8 * nprocs;
    }
    narenas_limit_2 = v47;
    goto LABEL_18;
  }
  v24 = *(_QWORD *)(free_list + 2176);
  free_list = *(_QWORD *)(free_list + 2168);
  if ( v24 )
  {
    _libc_assert_fail("result->attached_threads == 0", "arena.c", 715, "get_free_list");
    goto LABEL_77;
  }
  *((_QWORD *)v23 + 272) = 1;
  if ( !v8 )
    goto LABEL_9;
  v25 = *(_QWORD *)(v8 + 2176);
  if ( v25 )
  {
    *(_QWORD *)(v8 + 2176) = v25 - 1;
LABEL_9:
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&free_list_lock) > 1 )
      _lll_lock_wake_private(&free_list_lock, v26, v27, v28, v29, v30, v31);
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v23) )
      _lll_lock_wait_private(v23, v38, v39, v40, v41, v42, v43, v44, v45, v32, v33, v34, v35, v36, v37);
    *(_QWORD *)(StatusReg + 48) = v23;
    return v23;
  }
  do
  {
    while ( 1 )
    {
      detach_arena_part_0();
LABEL_75:
      v49 = (int *)*((_QWORD *)a2 + 270);
LABEL_44:
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v49) )
        _lll_lock_wait_private(v49, v88, v89, v90, v91, v92, v93, v94, v95, v82, v83, v84, v85, v86, v87);
LABEL_22:
      a1 = &free_list_lock;
      v50 = *(_QWORD *)(StatusReg + v5);
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&free_list_lock) )
        _lll_lock_wait_private(&free_list_lock, v57, v58, v59, v60, v61, v62, v63, v64, v51, v52, v53, v54, v55, v56);
      if ( !v50 )
        break;
      v65 = *(_QWORD *)(v50 + 2176);
      if ( v65 )
      {
        *(_QWORD *)(v50 + 2176) = v65 - 1;
        break;
      }
    }
    v66 = free_list;
    if ( !free_list )
    {
LABEL_34:
      ++*((_QWORD *)v49 + 272);
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&free_list_lock) > 1 )
        _lll_lock_wake_private(&free_list_lock, v69, v70, v71, v72, v73, v74);
      *(_QWORD *)(StatusReg + v5) = v49;
      next_to_use_5 = *((_QWORD *)v49 + 270);
      return v49;
    }
    v67 = &free_list;
    while ( !*(_QWORD *)(v66 + 2176) )
    {
      v68 = *(_QWORD *)(v66 + 2168);
      if ( (int *)v66 == v49 )
      {
        *v67 = v68;
        goto LABEL_34;
      }
      v67 = (__int64 *)(v66 + 2168);
      if ( !v68 )
        goto LABEL_34;
      v66 = *(_QWORD *)(v66 + 2168);
    }
    _libc_assert_fail("p->attached_threads == 0", "arena.c", 741, "remove_from_free_list");
LABEL_50:
    v23 = (int *)new_heap((unsigned __int64)(a1 + 566), v2[1]);
    if ( !v23 )
    {
      v23 = (int *)new_heap(0x8D8u, v2[1]);
      if ( !v23 )
      {
        do
          v154 = v2[17];
        while ( v154 != _aarch64_cas8_acq(v154, v154 - 1, v3) );
        return v23;
      }
    }
    a2 = v23 + 12;
    *(_QWORD *)v23 = v23 + 12;
    v96 = v23 + 36;
    do
    {
      *((_QWORD *)v96 + 2) = v96;
      *((_QWORD *)v96 + 3) = v96;
      v96 += 4;
    }
    while ( v96 != v23 + 544 );
    if ( a2 == (int *)&main_arena )
      global_max_fast = 0x80;
    else
      v23[13] |= 2u;
    v23[14] = 0;
    v97 = (__int64)(v23 + 562);
    v98 = *((_QWORD *)v23 + 2);
    *((_QWORD *)v23 + 278) = 1;
    if ( (((_BYTE)v23 - 40) & 0xF) != 0 )
      v97 = (__int64)v23 - (((_BYTE)v23 - 40) & 0xF) + 2264;
    *((_QWORD *)v23 + 18) = v97;
    *((_QWORD *)v23 + 279) = v98;
    *((_QWORD *)v23 + 280) = v98;
    *(_QWORD *)(v97 + 8) = ((unsigned __int64)v23 + v98 - v97) | 1;
    a1 = *(int **)(StatusReg + v5);
    *(_QWORD *)(StatusReg + v5) = a2;
    v5 = (__int64)&list_lock;
    v23[12] = 0;
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&list_lock) )
      _lll_lock_wait_private(
        &list_lock,
        v105,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
    *((_QWORD *)v23 + 276) = off_490EE0;
    __dmb(0xBu);
    off_490EE0 = v23 + 12;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&list_lock) > 1 )
      _lll_lock_wake_private(&list_lock, v113, v114, v115, v116, v117, v118);
    v23 = &free_list_lock;
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&free_list_lock) )
LABEL_77:
      _lll_lock_wait_private(v23, v125, v126, v127, v128, v129, v130, v131, v132, v119, v120, v121, v122, v123, v124);
    if ( !a1 )
      goto LABEL_65;
    v133 = *((_QWORD *)a1 + 272);
  }
  while ( !v133 );
  *((_QWORD *)a1 + 272) = v133 - 1;
LABEL_65:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&free_list_lock) > 1 )
    _lll_lock_wake_private(&free_list_lock, v134, v135, v136, v137, v138, v139);
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a2) )
    _lll_lock_wait_private(a2, v146, v147, v148, v149, v150, v151, v152, v153, v140, v141, v142, v143, v144, v145);
  return a2;
}
