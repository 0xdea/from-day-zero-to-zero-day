__int64 *_pthread_tunables_init()
{
  char *v1; // [xsp+0h] [xbp-10h] BYREF

  _tunable_get_val(0x1Au, &v1, (__int64 (__fastcall *)(char *))dl_tunable_set_mutex_spin_count);
  _tunable_get_val(0xEu, &v1, (__int64 (__fastcall *)(char *))dl_tunable_set_stack_cache_size);
  _tunable_get_val(0x14u, &v1, (__int64 (__fastcall *)(char *))dl_tunable_set_stack_hugetlb);
  return &_stack_chk_guard;
}
