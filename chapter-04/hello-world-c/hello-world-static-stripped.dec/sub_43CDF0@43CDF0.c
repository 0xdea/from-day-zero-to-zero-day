unsigned __int64 __fastcall sub_43CDF0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // x0
  unsigned __int64 v5; // x1
  unsigned __int64 result; // x0

  if ( *(_QWORD *)(a1 + 32) )
    v4 = (unsigned __int64 *)(a1 + 56);
  else
    v4 = *(unsigned __int64 **)(a1 + 56);
  if ( *(_QWORD *)(a2 + 32) )
    v5 = a2 + 56;
  else
    v5 = *(_QWORD *)(a2 + 56);
  result = sub_42F240(v4, v5);
  if ( !(_DWORD)result )
  {
    result = sub_42F240(*(unsigned __int64 **)a1, *(_QWORD *)a2);
    if ( !(_DWORD)result )
    {
      result = sub_42F240(*(unsigned __int64 **)(a1 + 16), *(_QWORD *)(a2 + 16));
      if ( !(_DWORD)result )
        return (unsigned int)(*(_DWORD *)(a1 + 8) - *(_DWORD *)(a2 + 8));
    }
  }
  return result;
}
