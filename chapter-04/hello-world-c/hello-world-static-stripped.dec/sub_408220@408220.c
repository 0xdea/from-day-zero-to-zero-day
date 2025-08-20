_QWORD *__fastcall sub_408220(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // x4
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x1
  unsigned __int64 v8; // x20
  unsigned int v9; // w25
  __int64 v10; // x0
  _QWORD *v11; // x19
  __int64 v13; // x0
  char *v14; // x25
  __int64 v15; // x0

  v4 = qword_490600;
  v6 = 4 * qword_490600;
  if ( !qword_490600 )
  {
    v4 = 0x8000;
    v6 = 0x4000000;
  }
  v7 = a1 + a2;
  if ( v7 >= v4 )
  {
    if ( v7 > v6 )
    {
      v4 = v6;
      if ( a1 > v6 )
        return 0;
    }
    else
    {
      v4 = v7;
    }
  }
  v8 = -a3 & (a3 - 1 + v4);
  v9 = a4 | 0x22;
  if ( qword_4966A8 )
  {
    v10 = sub_4117E0(qword_4966A8, v6, 0, v9, 0xFFFFFFFFLL, 0);
    qword_4966A8 = 0;
    v11 = (_QWORD *)v10;
    if ( v10 != -1 )
    {
      if ( (v10 & (v6 - 1)) == 0 )
        goto LABEL_10;
      sub_4118C0(v10, v6);
    }
  }
  v13 = sub_4117E0(0, 2 * v6, 0, v9, 0xFFFFFFFFLL, 0);
  if ( v13 == -1 )
  {
    v15 = sub_4117E0(0, v6, 0, v9, -1, 0);
    v11 = (_QWORD *)v15;
    if ( v15 == -1 )
      return 0;
    if ( (v15 & (v6 - 1)) != 0 )
    {
      v11 = 0;
      sub_4118C0(v15, v6);
      return v11;
    }
LABEL_10:
    if ( !(unsigned int)sub_411880(v11, v8, dword_4966A4 | 3u) )
      goto LABEL_11;
    goto LABEL_20;
  }
  v11 = (_QWORD *)((v13 + v6 - 1) & -(__int64)v6);
  v14 = (char *)v11 - v13;
  if ( v11 == (_QWORD *)v13 )
    qword_4966A8 = (__int64)v11 + v6;
  else
    sub_4118C0(v13, (char *)v11 - v13);
  sub_4118C0((char *)v11 + v6, v6 - (_QWORD)v14);
  if ( (unsigned int)sub_411880(v11, v8, dword_4966A4 | 3u) )
  {
LABEL_20:
    sub_4118C0(v11, v6);
    return 0;
  }
LABEL_11:
  sub_411AE0(v11, v8, " glibc: malloc arena");
  if ( qword_4905F8 - 1 < v8 )
    sub_4117C0();
  v11[2] = v8;
  v11[3] = v8;
  v11[4] = a3;
  return v11;
}
