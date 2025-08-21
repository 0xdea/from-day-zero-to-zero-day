__int64 __fastcall sub_433BD0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // x6
  unsigned __int8 *v8; // x24
  _BYTE *v10; // x0
  __int16 *v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  long double v15; // q0
  long double v16; // q1
  long double v17; // q2
  long double v18; // q3
  long double v19; // q4
  long double v20; // q5
  long double v21; // q6
  long double v22; // q7
  __int64 v23; // x22
  __int64 v24; // x1
  __int64 v25; // x6
  unsigned int v26; // t1
  unsigned __int64 v27; // x0
  __int64 v28; // x0
  _QWORD *v29; // x23
  int v30; // w8
  __int64 v31; // x9
  int v32; // w7
  int v33; // t1
  int v34; // t1
  int v35; // w7
  bool v36; // zf
  const char *v37; // x3

  v4 = (_BYTE *)qword_496840;
  v8 = *(unsigned __int8 **)(a3 + 8);
  if ( qword_496840 && !dword_491570 )
  {
    v30 = *(unsigned __int8 *)qword_496840;
    do
    {
      v31 = *(_QWORD *)(a3 + 8);
      v32 = v30;
      if ( v30 == *v8 )
      {
        while ( v32 )
        {
          v33 = (unsigned __int8)*++v4;
          v30 = v33;
          v34 = *(unsigned __int8 *)++v31;
          v32 = v34;
          if ( v30 != v34 )
            goto LABEL_19;
        }
      }
      else
      {
        v32 = *v8;
LABEL_19:
        if ( v32 )
          goto LABEL_20;
      }
      v36 = v30 == 58 || v30 == 0;
      if ( v36 )
        goto LABEL_3;
      do
      {
LABEL_20:
        v35 = (unsigned __int8)*v4;
        if ( !*v4 )
          goto LABEL_2;
        ++v4;
      }
      while ( v35 != 58 );
      v30 = (unsigned __int8)*v4;
    }
    while ( *v4 );
  }
LABEL_2:
  if ( !*a2 )
  {
LABEL_3:
    *(_QWORD *)a1 = -1;
    return 0;
  }
  v10 = (_BYTE *)sub_42F380(a2);
  v23 = (__int64)v10;
  if ( !v10 )
  {
    v37 = "cannot create RUNPATH/RPATH copy";
LABEL_34:
    sub_432250(12, 0, v15, 0, v37);
  }
  v24 = (unsigned __int8)*v10;
  if ( *v10 )
  {
    v12 = (__int64)v10;
    v25 = 0;
    do
    {
      v36 = (_DWORD)v24 == 58;
      v26 = *(unsigned __int8 *)++v12;
      v24 = v26;
      if ( v36 )
        ++v25;
    }
    while ( (_DWORD)v24 );
    v27 = 8 * (v25 + 2);
  }
  else
  {
    v27 = 16;
  }
  v28 = sub_40B890(v27, v15, v16, v17, v18, v19, v20, v21, v22, v24, v11, v12, v13, v14);
  v29 = (_QWORD *)v28;
  if ( !v28 )
  {
    sub_40C1A0(v23);
    v37 = "cannot create cache for search path";
    goto LABEL_34;
  }
  sub_433970(v23, v28, (__int64)":", a4, (__int64)v8, a3);
  sub_40C1A0(v23);
  if ( !*v29 )
  {
    sub_40C1A0(v29);
    goto LABEL_3;
  }
  *(_QWORD *)a1 = v29;
  *(_DWORD *)(a1 + 8) = 1;
  return 1;
}
