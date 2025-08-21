unsigned __int64 __fastcall sub_4106C4(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0
  unsigned __int64 v5; // x1
  unsigned __int64 result; // x0
  unsigned __int64 v7; // x1
  __int64 v8; // x2
  unsigned __int64 *v9; // x19
  _UNKNOWN **v10; // x2
  bool v11; // zf
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7
  unsigned __int64 v20; // [xsp+28h] [xbp-18h] BYREF
  __int64 v21; // [xsp+30h] [xbp-10h] BYREF
  __int64 v22; // [xsp+38h] [xbp-8h]

  v22 = qword_48DD60;
  if ( (unsigned int)sub_415FB0("INTERNAL", a2, &v21, &v20, 0) )
    goto LABEL_10;
  v5 = v20;
  v4 = v21;
  if ( v20 > 1 )
  {
    sub_416234(v21);
LABEL_10:
    *a1 = 0;
    goto LABEL_11;
  }
  *a1 = v21;
  a1[1] = v5;
  if ( !v4 )
  {
LABEL_11:
    result = 1;
    goto LABEL_7;
  }
  result = sub_415FB0(a2, "INTERNAL", &v21, &v20, 0);
  if ( !(_DWORD)result )
  {
    v7 = v20;
    v8 = v21;
    if ( v20 <= 1 )
    {
      a1[2] = v21;
      a1[3] = v7;
      if ( v8 )
        goto LABEL_7;
      goto LABEL_14;
    }
    sub_416234(v21);
  }
  a1[2] = 0;
LABEL_14:
  sub_416234(*a1);
  result = 1;
LABEL_7:
  if ( v22 != qword_48DD60 )
  {
    result = sub_412340(result, &qword_48DD60, 0, v22 - qword_48DD60);
    v9 = *(unsigned __int64 **)(result + 32);
    v10 = (_UNKNOWN **)*v9;
    if ( *v9 )
      v11 = v10 == &off_48C3A0;
    else
      v11 = 1;
    if ( !v11 )
    {
      sub_416234(v10[2]);
      sub_416234(*(_QWORD *)*v9);
      result = sub_40C1A0(*v9, v12, v13, v14, v15, v16, v17, v18, v19);
      *v9 = 0;
    }
  }
  return result;
}
