__int64 __fastcall malloc_info(int a1, __int64 a2)
{
  if ( a1 )
    return 22;
  if ( (_malloc_initialized & 1) != 0 )
  {
    fputs("<malloc version=\"1\">\n", a2);
  }
  else
  {
    ptmalloc_init_part_0((unsigned __int8)_malloc_initialized);
    fputs("<malloc version=\"1\">\n", a2);
  }
  return _malloc_info_part_0(a2);
}
