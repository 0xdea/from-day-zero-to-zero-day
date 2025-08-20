__int64 __fastcall sub_454130(__int64 a1, __int64 *a2)
{
  __int64 v2; // x3
  __int64 v3; // x2
  __int64 v4; // t1
  __int64 v5; // x2
  __int64 result; // x0

  if ( a1 == 16 )
  {
    v5 = *((_QWORD *)&xmmword_496728 + 1);
LABEL_8:
    result = 1;
    *a2 = v5;
    return result;
  }
  if ( a1 == 26 )
  {
    v5 = qword_496738;
    goto LABEL_8;
  }
  v2 = qword_496720;
  v3 = *(_QWORD *)qword_496720;
  if ( *(_QWORD *)qword_496720 )
  {
    while ( a1 != v3 )
    {
      v4 = *(_QWORD *)(v2 + 16);
      v2 += 16;
      v3 = v4;
      if ( !v4 )
        return 0;
    }
    v5 = *(_QWORD *)(v2 + 8);
    goto LABEL_8;
  }
  return 0;
}
