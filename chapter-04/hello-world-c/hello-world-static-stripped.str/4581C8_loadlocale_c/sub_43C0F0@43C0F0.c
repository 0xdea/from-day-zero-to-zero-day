void sub_43C0F0()
{
  _QWORD *v0; // x21
  _QWORD *v1; // x22
  _QWORD *v2; // x20
  __int64 v3; // x19
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x19
  _QWORD *v7; // x20
  __int64 v8; // x1

  v0 = (_QWORD *)qword_496A88;
  if ( qword_496A88 )
  {
    do
    {
      v1 = v0;
      v2 = v0 + 2;
      v0 = (_QWORD *)*v0;
      v3 = 0;
      sub_40C1A0(v1[1]);
      do
      {
        if ( v3 == 6 )
          v3 = 7;
        if ( v2[v3] )
          sub_43CB64((unsigned int)v3);
        ++v3;
      }
      while ( v3 != 13 );
      sub_40C1A0(v1);
    }
    while ( v0 );
  }
  qword_496A88 = 0;
  v4 = qword_496A90;
  if ( qword_496A90 )
  {
    if ( (__int64 *)qword_496A90 != &qword_496A98 )
      sub_41F250("archmapped == &headmap", (__int64)"loadarchive.c", 0x210u, (__int64)"_nl_archive_subfreeres");
    v5 = *(_QWORD *)qword_496A90;
    qword_496A90 = 0;
    sub_4118C0(v5, *(unsigned int *)(v4 + 12));
    v6 = *(_QWORD *)(v4 + 16);
    while ( v6 )
    {
      v7 = (_QWORD *)v6;
      v8 = *(unsigned int *)(v6 + 12);
      v6 = *(_QWORD *)(v6 + 16);
      sub_4118C0(*v7, v8);
      sub_40C1A0(v7);
    }
  }
}
