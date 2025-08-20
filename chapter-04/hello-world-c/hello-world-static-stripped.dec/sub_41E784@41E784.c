char *__fastcall sub_41E784(
        int a1,
        char **a2,
        char **a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  __int64 v11; // x20
  char *result; // x0
  unsigned int v13; // w22
  unsigned __int64 *v15; // x19
  void (*v16)(void); // x0
  __int64 v17; // x20
  unsigned __int64 *v18; // x20
  unsigned __int64 v19; // x0
  double v20; // d0
  double v21; // d1
  double v22; // d2
  double v23; // d3
  double v24; // d4
  double v25; // d5
  double v26; // d6
  double v27; // d7
  char **v28; // x1
  double v30; // d0
  unsigned __int64 *v31; // x20
  double v32; // d1
  double v33; // d2
  double v34; // d3
  double v35; // d4
  double v36; // d5
  double v37; // d6
  double v38; // d7
  unsigned __int64 v39; // x0
  double v40; // d0
  double v41; // d1
  double v42; // d2
  double v43; // d3
  double v44; // d4
  double v45; // d5
  double v46; // d6
  double v47; // d7

  v11 = a1;
  result = (char *)qword_496A20;
  v13 = v11;
  v15 = (unsigned __int64 *)qword_496A20[v11];
  if ( a3 != a2 )
  {
    if ( qword_48F930[v11] )
    {
      v16 = (void (*)(void))off_48F9A0[v11];
      off_491820[v11] = a3;
      if ( v16 )
        v16();
    }
    v17 = v11 + 16;
    result = (char *)off_491820[v17];
    if ( result != "C" )
    {
      result = (char *)sub_40C1A0((unsigned __int64)result, a4, a5, a6, a7, a8, a9, a10, a11);
      off_491820[v17] = (char **)"C";
    }
  }
  if ( v15 )
  {
    do
    {
      while ( 1 )
      {
        v28 = (char **)v15[2];
        if ( v28 && a3 != v28 )
          break;
        v18 = (unsigned __int64 *)v15[3];
        sub_40C1A0(*v15, a4, a5, a6, a7, a8, a9, a10, a11);
        v19 = (unsigned __int64)v15;
        v15 = v18;
        result = (char *)sub_40C1A0(v19, v20, v21, v22, v23, v24, v25, v26, v27);
        if ( !v18 )
          return result;
      }
      v30 = sub_43CB64(v13);
      v31 = (unsigned __int64 *)v15[3];
      sub_40C1A0(*v15, v30, v32, v33, v34, v35, v36, v37, v38);
      v39 = (unsigned __int64)v15;
      v15 = v31;
      result = (char *)sub_40C1A0(v39, v40, v41, v42, v43, v44, v45, v46, v47);
    }
    while ( v31 );
  }
  return result;
}
