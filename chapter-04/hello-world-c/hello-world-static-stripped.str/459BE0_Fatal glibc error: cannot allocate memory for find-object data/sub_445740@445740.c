// write access to const memory has been detected, the output may be wrong!
__int64 sub_445740()
{
  unsigned __int64 v0; // x19
  __int64 v1; // x1
  __int16 *v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  long double v6; // q0
  long double v7; // q1
  long double v8; // q2
  long double v9; // q3
  long double v10; // q4
  long double v11; // q5
  long double v12; // q6
  long double v13; // q7
  void *v14; // x0
  __int64 v15; // x1
  __int16 *v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  long double v20; // q0
  long double v21; // q1
  long double v22; // q2
  long double v23; // q3
  long double v24; // q4
  long double v25; // q5
  long double v26; // q6
  long double v27; // q7
  _QWORD *v28; // x20
  __int64 result; // x0
  __int64 v30; // x1
  _QWORD *v31; // x0
  __int64 v32; // x12
  __int64 v33; // x1

  if ( (*((_BYTE *)off_4914A8 + 870) & 8) != 0 )
    sub_445160(off_4914A8, &xmmword_48FB98);
  else
    xmmword_48FB98 = 0u;
  v0 = sub_4451F0();
  v14 = (void *)sub_40B890(32 * qword_48FB90, v6, v7, v8, v9, v10, v11, v12, v13, v1, v2, v3, v4, v5);
  off_48FB88 = v14;
  v28 = v14;
  if ( !v0 )
  {
    if ( v14 )
    {
      qword_48FB90 = 0;
      result = sub_4451F0();
      if ( qword_48FB90 )
      {
        if ( qword_48FB90 == 1 )
        {
          result = v28[1];
        }
        else
        {
          sub_445390(v28);
          result = v28[4 * v30 - 3];
        }
        qword_48FBB8 = result;
      }
      return result;
    }
LABEL_23:
    sub_4385C0("Fatal glibc error: cannot allocate memory for find-object data\n", v20);
  }
  if ( v0 < 0x3F )
    v0 = 63;
  v31 = (_QWORD *)sub_40B890(32 * (v0 + 1), v20, v21, v22, v23, v24, v25, v26, v27, v15, v16, v17, v18, v19);
  if ( !v31 )
  {
    qword_496C20[0] = 0;
    goto LABEL_23;
  }
  *v31 = 0;
  v31[1] = 0;
  qword_496C20[0] = (__int64)v31;
  v31[2] = 0;
  v31[3] = v0;
  if ( !v28 )
    goto LABEL_23;
  qword_48FB90 = 0;
  sub_4451F0();
  if ( qword_48FB90 )
  {
    if ( qword_48FB90 == 1 )
    {
      qword_48FBB8 = v28[1];
    }
    else
    {
      sub_445390(v28);
      qword_48FBB8 = v28[4 * v33 - 3];
    }
  }
  result = *(_QWORD *)(v32 + 3104);
  if ( *(_QWORD *)(result + 16) > 1u )
    return sub_445390(result + 32);
  return result;
}
