__int64 detach_arena_part_0()
{
  __int64 v0; // x0

  v0 = _libc_assert_fail("replaced_arena->attached_threads > 0", "arena.c", 621, "detach_arena");
  return _malloc_info_part_0(v0);
}
