unsigned __int64 __fastcall sub_43DE70(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  __int64 *i; // x19
  char *v9; // x0
  double v10; // d0
  double v11; // d1
  double v12; // d2
  double v13; // d3
  double v14; // d4
  double v15; // d5
  double v16; // d6
  double v17; // d7
  unsigned __int64 result; // x0
  double v19; // d0
  double v20; // d1
  double v21; // d2
  double v22; // d3
  double v23; // d4
  double v24; // d5
  double v25; // d6
  double v26; // d7
  _QWORD *v27; // x19
  unsigned __int64 v28; // x0

  for ( i = (__int64 *)qword_496BD8; qword_496BD8; i = (__int64 *)qword_496BD8 )
  {
    v9 = (char *)i[1];
    qword_496BD8 = *i;
    if ( v9 != "/usr/share/locale" )
      sub_40C1A0((unsigned __int64)v9, a1, a2, a3, a4, a5, a6, a7, a8);
    sub_40C1A0(i[2], a1, a2, a3, a4, a5, a6, a7, a8);
    sub_40C1A0((unsigned __int64)i, v10, v11, v12, v13, v14, v15, v16, v17);
  }
  if ( off_491928 != "messages" )
    sub_40C1A0((unsigned __int64)off_491928, a1, a2, a3, a4, a5, a6, a7, a8);
  result = (unsigned __int64)sub_431D74((_QWORD *)qword_496BD0, (void (__fastcall *)(_QWORD))sub_40C1A0);
  qword_496BD0 = 0;
  v27 = (_QWORD *)qword_496B58;
  if ( qword_496B58 )
  {
    do
    {
      v28 = (unsigned __int64)v27;
      v27 = (_QWORD *)*v27;
      qword_496B58 = (__int64)v27;
      result = sub_40C1A0(v28, v19, v20, v21, v22, v23, v24, v25, v26);
    }
    while ( v27 );
  }
  return result;
}
