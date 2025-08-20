__int64 __fastcall sub_4541B0(__int64 a1)
{
  __int64 v1; // x2
  __int64 v2; // x1
  __int64 v3; // t1
  __int64 result; // x0

  if ( a1 == 16 )
    return *((_QWORD *)&xmmword_496728 + 1);
  if ( a1 == 26 )
    return qword_496738;
  v1 = qword_496720;
  v2 = *(_QWORD *)qword_496720;
  if ( *(_QWORD *)qword_496720 )
  {
    while ( a1 != v2 )
    {
      v3 = *(_QWORD *)(v1 + 16);
      v1 += 16;
      v2 = v3;
      if ( !v3 )
        goto LABEL_8;
    }
    return *(_QWORD *)(v1 + 8);
  }
  else
  {
LABEL_8:
    result = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 2;
  }
  return result;
}
