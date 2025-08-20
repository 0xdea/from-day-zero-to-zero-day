__int64 __fastcall sub_4298E0(__int64 a1, __int64 a2)
{
  __int64 **v2; // x2
  __int64 result; // x0
  __int64 v4; // x1

  v2 = *(__int64 ***)(a1 + 96);
  result = (a2 - *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL)) >> 2;
  while ( v2 )
  {
    v4 = *((int *)v2 + 4);
    v2 = (__int64 **)*v2;
    if ( result > v4 )
      result = v4;
  }
  return result;
}
