__int64 *__fastcall ptmalloc_init_part_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  __int64 v7; // x21
  __int64 *v8; // x0
  __int64 v10; // [xsp+8h] [xbp-18h] BYREF
  __int64 v11; // [xsp+10h] [xbp-10h]

  _malloc_initialized = 1;
  if ( linux_eabi_syscall(__NR_getrandom, &tcache_key, (void *)8, (void *)1, (void *)1, a5, a6, a7) != 8 )
  {
    clock_gettime(1, &v10);
    v7 = (unsigned int)v11 ^ (unsigned int)v10 ^ __ROR4__(v11 ^ v10, 8);
    tcache_key = v7;
    clock_gettime(1, &v10);
    tcache_key = (unsigned int)v11 ^ (unsigned int)v10 ^ __ROR4__(v11 ^ v10, 8) | (unsigned __int64)(v7 << 32);
  }
  _tunable_get_val(6, &v10, 0);
  if ( (v10 & 1) != 0 )
  {
    _always_fail_morecore = 1;
    mtag_enabled = 1;
    mtag_mmap_flags = 32;
  }
  v8 = &qword_4906D0;
  *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 48) = &main_arena;
  do
  {
    v8[2] = (__int64)v8;
    v8[3] = (__int64)v8;
    v8 += 2;
  }
  while ( &unk_490EC0 != (_UNKNOWN *)v8 );
  global_max_fast = 0x80;
  dword_490678 = 0;
  qword_4906D0 = (__int64)&qword_4906D0;
  _tunable_get_val(13, &v10, dl_tunable_set_top_pad);
  _tunable_get_val(3, &v10, dl_tunable_set_perturb_byte);
  _tunable_get_val(23, &v10, dl_tunable_set_mmap_threshold);
  _tunable_get_val(2, &v10, dl_tunable_set_trim_threshold);
  _tunable_get_val(17, &v10, dl_tunable_set_mmaps_max);
  _tunable_get_val(22, &v10, dl_tunable_set_arena_max);
  _tunable_get_val(25, &v10, dl_tunable_set_arena_test);
  _tunable_get_val(30, &v10, dl_tunable_set_tcache_max);
  _tunable_get_val(24, &v10, dl_tunable_set_tcache_count);
  _tunable_get_val(19, &v10, dl_tunable_set_tcache_unsorted_limit);
  _tunable_get_val(10, &v10, dl_tunable_set_mxfast);
  _tunable_get_val(9, &v10, dl_tunable_set_hugetlb);
  if ( qword_490600 )
  {
    if ( (_tunable_is_initialized(23) & 1) == 0 )
    {
      qword_4905E0 = qword_490600;
      dword_490618 = 1;
    }
    _always_fail_morecore = 1;
  }
  return &_stack_chk_guard;
}
