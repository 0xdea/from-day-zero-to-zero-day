_QWORD *__fastcall new_heap(unsigned __int64 a1, __int64 a2)
{
  _QWORD *result; // x0

  if ( !qword_490600 )
    return alloc_new_heap(a1, a2, dl_pagesize, 0);
  result = alloc_new_heap(a1, a2, qword_490600, dword_490608);
  if ( !result )
    return alloc_new_heap(a1, a2, dl_pagesize, 0);
  return result;
}
