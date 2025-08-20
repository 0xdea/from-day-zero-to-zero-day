unsigned __int64 __fastcall dl_tunable_set_hugetlb(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // x0

  result = *a1;
  if ( result == 1 )
  {
    result = _malloc_thp_mode(1, a2);
    if ( (_DWORD)result == 1 )
    {
      result = _malloc_default_thp_pagesize();
      qword_4905F8 = result;
    }
  }
  else if ( result > 1 )
  {
    if ( result == 2 )
      result = 0;
    return _malloc_hugepage_config(result, &qword_490600, &dword_490608);
  }
  return result;
}
