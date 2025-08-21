__int64 sub_43DE70()
{
  __int64 *i; // x19
  char *v1; // x0
  __int64 result; // x0
  _QWORD *v3; // x19
  _QWORD *v4; // x0

  for ( i = (__int64 *)qword_496BD8; qword_496BD8; i = (__int64 *)qword_496BD8 )
  {
    v1 = (char *)i[1];
    qword_496BD8 = *i;
    if ( v1 != "/usr/share/locale" )
      sub_40C1A0(v1);
    sub_40C1A0(i[2]);
    sub_40C1A0(i);
  }
  if ( off_491928 != "messages" )
    sub_40C1A0(off_491928);
  result = sub_431D74(qword_496BD0, sub_40C1A0);
  qword_496BD0 = 0;
  v3 = (_QWORD *)qword_496B58;
  if ( qword_496B58 )
  {
    do
    {
      v4 = v3;
      v3 = (_QWORD *)*v3;
      qword_496B58 = (__int64)v3;
      result = sub_40C1A0(v4);
    }
    while ( v3 );
  }
  return result;
}
