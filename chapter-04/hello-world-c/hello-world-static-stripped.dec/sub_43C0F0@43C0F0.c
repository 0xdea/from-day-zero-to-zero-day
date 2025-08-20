void __fastcall sub_43C0F0(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8)
{
  _QWORD *v8; // x21
  unsigned __int64 v9; // x22
  _QWORD *v10; // x20
  __int64 v11; // x19
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7
  __int64 v20; // x19
  void *v21; // x0
  __int64 v22; // x19
  void **v23; // x20
  size_t v24; // x1
  double v25; // d0
  double v26; // d1
  double v27; // d2
  double v28; // d3
  double v29; // d4
  double v30; // d5
  double v31; // d6
  double v32; // d7

  v8 = (_QWORD *)qword_496A88;
  if ( qword_496A88 )
  {
    do
    {
      v9 = (unsigned __int64)v8;
      v10 = v8 + 2;
      v8 = (_QWORD *)*v8;
      v11 = 0;
      sub_40C1A0(*(_QWORD *)(v9 + 8), a1, a2, a3, a4, a5, a6, a7, a8);
      do
      {
        if ( v11 == 6 )
          v11 = 7;
        if ( v10[v11] )
          v12 = sub_43CB64((unsigned int)v11);
        ++v11;
      }
      while ( v11 != 13 );
      sub_40C1A0(v9, v12, v13, v14, v15, v16, v17, v18, v19);
    }
    while ( v8 );
  }
  qword_496A88 = 0;
  v20 = qword_496A90;
  if ( qword_496A90 )
  {
    if ( (__int64 *)qword_496A90 != &qword_496A98 )
      sub_41F250("archmapped == &headmap", (__int64)"loadarchive.c", 0x210u, (__int64)"_nl_archive_subfreeres");
    v21 = *(void **)qword_496A90;
    qword_496A90 = 0;
    sub_4118C0(v21, *(unsigned int *)(v20 + 12));
    v22 = *(_QWORD *)(v20 + 16);
    while ( v22 )
    {
      v23 = (void **)v22;
      v24 = *(unsigned int *)(v22 + 12);
      v22 = *(_QWORD *)(v22 + 16);
      sub_4118C0(*v23, v24);
      sub_40C1A0((unsigned __int64)v23, v25, v26, v27, v28, v29, v30, v31, v32);
    }
  }
}
