__int64 *__fastcall dl_find_dso_for_object(unsigned __int64 a1)
{
  __int64 *v2; // x19

  if ( !dl_nns )
    return 0;
  v2 = dl_ns;
  if ( !dl_ns )
    return 0;
  while ( v2[115] > a1
       || v2[116] <= a1
       || (*((_BYTE *)v2 + 870) & 8) == 0 && !(unsigned int)dl_addr_inside_object(v2, a1) )
  {
    v2 = (__int64 *)v2[3];
    if ( !v2 )
      return 0;
  }
  if ( v2[6] )
    _libc_assert_fail("ns == l->l_ns", (__int64)"dl-open.c", 0xE0u, (__int64)"_dl_find_dso_for_object");
  return v2;
}
