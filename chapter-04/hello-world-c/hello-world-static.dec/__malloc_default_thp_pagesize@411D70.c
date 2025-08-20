__int64 _malloc_default_thp_pagesize()
{
  int v0; // w0
  int v1; // w20
  unsigned __int64 nocancel; // x3
  int v3; // w0
  __int64 v4; // x20
  _BYTE *v5; // x1
  __int64 result; // x0
  int v7; // w2
  _BYTE v8[24]; // [xsp+0h] [xbp-20h] BYREF

  v0 = _open_nocancel("/sys/kernel/mm/transparent_hugepage/hpage_pmd_size", 0);
  if ( v0 == -1 )
    return 0;
  v1 = v0;
  nocancel = _read_nocancel(v0, v8, 0x15u);
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
