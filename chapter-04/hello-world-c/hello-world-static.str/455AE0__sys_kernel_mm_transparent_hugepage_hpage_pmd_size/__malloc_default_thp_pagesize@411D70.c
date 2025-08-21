__int64 _malloc_default_thp_pagesize()
{
  __int64 v0; // x0
  unsigned int v1; // w20
  __int64 nocancel; // x3
  __int64 v3; // x0
  __int64 v4; // x20
  _BYTE *v5; // x1
  __int64 result; // x0
  int v7; // w2
  _BYTE v8[24]; // [xsp+0h] [xbp-20h] BYREF

  v0 = _open_nocancel("/sys/kernel/mm/transparent_hugepage/hpage_pmd_size", 0, &_stack_chk_guard);
  if ( (_DWORD)v0 == -1 )
    return 0;
  v1 = v0;
  nocancel = _read_nocancel(v0, v8, 21);
  v3 = v1;
  v4 = nocancel;
  _close_nocancel(v3);
  if ( v4 <= 0 )
    return 0;
  v5 = v8;
  result = 0;
  do
  {
    v7 = (unsigned __int8)*v5;
    if ( v7 == 10 )
      break;
    ++v5;
    result = v7 - 48 + 10 * result;
  }
  while ( &v8[v4] != v5 );
  return result;
}
