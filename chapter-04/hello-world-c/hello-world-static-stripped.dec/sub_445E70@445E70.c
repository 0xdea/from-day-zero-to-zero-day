__int64 *__fastcall sub_445E70(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8)
{
  _QWORD *v8; // x19
  unsigned __int64 v9; // x0
  __int64 *result; // x0
  _QWORD *v11; // x19
  unsigned __int64 v12; // x0

  v8 = (_QWORD *)qword_496C20[0];
  if ( qword_496C20[0] )
  {
    do
    {
      v9 = v8[1];
      v8 = (_QWORD *)*v8;
      sub_40C1A0(v9, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    while ( v8 );
  }
  result = qword_496C20;
  qword_496C20[0] = 0;
  v11 = (_QWORD *)qword_496C28;
  if ( qword_496C28 )
  {
    do
    {
      v12 = v11[1];
      v11 = (_QWORD *)*v11;
      result = (__int64 *)sub_40C1A0(v12, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    while ( v11 );
  }
  qword_496C28 = 0;
  return result;
}
