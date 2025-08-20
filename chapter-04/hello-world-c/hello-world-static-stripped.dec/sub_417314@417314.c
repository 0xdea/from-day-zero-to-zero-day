unsigned __int64 __fastcall sub_417314(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  unsigned __int64 result; // x0
  bool v9; // zf

  result = qword_496878;
  if ( qword_496878 )
    v9 = qword_496878 == (_QWORD)&unk_45AE10;
  else
    v9 = 1;
  if ( !v9 )
    return sub_40C1A0(qword_496878, a1, a2, a3, a4, a5, a6, a7, a8);
  return result;
}
