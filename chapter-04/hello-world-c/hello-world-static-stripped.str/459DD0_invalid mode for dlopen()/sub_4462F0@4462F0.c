__int64 *__fastcall sub_4462F0(unsigned __int64 a1)
{
  __int64 *v2; // x19

  if ( !qword_490F20 )
    return 0;
  v2 = off_4914A8;
  if ( !off_4914A8 )
    return 0;
  while ( v2[115] > a1 || v2[116] <= a1 || (*((_BYTE *)v2 + 870) & 8) == 0 && !(unsigned int)sub_448050(v2, a1) )
  {
    v2 = (__int64 *)v2[3];
    if ( !v2 )
      return 0;
  }
  if ( v2[6] )
    sub_41F250("ns == l->l_ns", (__int64)"dl-open.c", 0xE0u, (__int64)"_dl_find_dso_for_object");
  return v2;
}
