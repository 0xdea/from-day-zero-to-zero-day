__int64 _malloc_thp_mode()
{
  __int64 v0; // x0
  unsigned int v1; // w19
  unsigned __int64 nocancel; // x20
  int v3; // w1
  __int64 result; // x0
  int v5; // w1
  _BYTE v6[24]; // [xsp+0h] [xbp-20h] BYREF

  v0 = _open_nocancel("/sys/kernel/mm/transparent_hugepage/enabled", 0, &_stack_chk_guard);
  if ( (_DWORD)v0 == -1 )
    return 3;
  v1 = v0;
  nocancel = _read_nocancel(v0, v6, 24);
  if ( nocancel > 0x17 )
    return 3;
  v6[nocancel] = 0;
  _close_nocancel(v1);
  if ( nocancel != 23 )
    return 3;
  v3 = strcmp(v6, "[always] madvise never\n");
  result = 0;
  if ( v3 )
  {
    v5 = strcmp(v6, "always [madvise] never\n");
    result = 1;
    if ( v5 )
    {
      if ( !(unsigned int)strcmp(v6, "always madvise [never]\n") )
        return 2;
      return 3;
    }
  }
  return result;
}
