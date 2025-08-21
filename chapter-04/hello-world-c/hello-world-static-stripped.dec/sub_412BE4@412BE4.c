__int64 __fastcall sub_412BE4(__int64 a1)
{
  unsigned __int64 v1; // x0
  _QWORD *v2; // x2
  __int64 result; // x0
  unsigned __int64 *v4; // x3
  unsigned __int64 v5; // x1
  unsigned __int64 i; // x4

  v1 = *(_QWORD *)(a1 + 1176);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD **)_ReadStatusReg(TPIDR_EL0);
  if ( *v2 != qword_4921D0 )
  {
    if ( v1 >= *(v2 - 2) )
      return 0;
    v4 = (unsigned __int64 *)qword_4921A8;
    v5 = v1;
    for ( i = *(_QWORD *)qword_4921A8; *v4 <= v5; i = *v4 )
    {
      v4 = (unsigned __int64 *)v4[1];
      v5 -= i;
    }
    if ( *v2 < v4[2 * v5 + 2] )
      return 0;
  }
  result = v2[2 * v1];
  if ( result == -1 )
    return 0;
  return result;
}
