__int64 __fastcall fde_unencoded_compare(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // x0
  unsigned __int64 v4; // x1
  bool v5; // cc
  __int64 result; // x0

  v3 = *(_QWORD *)(a3 + 8);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = v4 > v3;
  if ( v4 >= v3 )
    LODWORD(result) = 0;
  else
    LODWORD(result) = -1;
  if ( v5 )
    return 1;
  else
    return (unsigned int)result;
}
