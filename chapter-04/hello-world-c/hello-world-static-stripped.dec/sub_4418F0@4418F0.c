__int64 __fastcall sub_4418F0(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8)
{
  __int64 result; // x0
  __int64 i; // x20
  _QWORD *v10; // x19
  unsigned __int64 v11; // x0

  result = qword_496BE8;
  if ( qword_496BE8 )
  {
    for ( i = 0; i != 2040; i += 8 )
    {
      v10 = *(_QWORD **)(result + i);
      if ( v10 )
      {
        do
        {
          v11 = (unsigned __int64)v10;
          v10 = (_QWORD *)*v10;
          sub_40C1A0(v11, a1, a2, a3, a4, a5, a6, a7, a8);
        }
        while ( v10 );
        result = qword_496BE8;
      }
    }
    return sub_40C1A0(result, a1, a2, a3, a4, a5, a6, a7, a8);
  }
  return result;
}
