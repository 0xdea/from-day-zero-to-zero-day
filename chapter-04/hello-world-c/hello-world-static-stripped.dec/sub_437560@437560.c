__int64 __fastcall sub_437560(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 *v4; // x19

  if ( !(unsigned int)sub_42F240(a1, *(_QWORD *)(a2 + 8)) )
    return 1;
  v4 = *(unsigned __int64 **)(a2 + 56);
  if ( v4 )
  {
    while ( (unsigned int)sub_42F240(a1, *v4) )
    {
      v4 = (unsigned __int64 *)atomic_load(v4 + 1);
      if ( !v4 )
        return 0;
    }
    return 1;
  }
  return 0;
}
