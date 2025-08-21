__int64 __fastcall malloc_info(int a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  if ( a1 )
    return 22;
  if ( (_malloc_initialized & 1) != 0 )
  {
    fputs("<malloc version=\"1\">\n", a2);
  }
  else
  {
    ptmalloc_init_part_0((unsigned __int8)_malloc_initialized, a2, a3, a4, a5, a6, a7);
    fputs("<malloc version=\"1\">\n", a2);
  }
  return _malloc_info_part_0(a2);
}
