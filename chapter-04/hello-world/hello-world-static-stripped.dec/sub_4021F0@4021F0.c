__int64 __fastcall sub_4021F0(_QWORD *a1)
{
  __int64 v1; // x5
  __int64 result; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  v1 = a1[20];
  a1[27] = &unk_48DEC0;
  *(_QWORD *)(v1 + 224) = &unk_48E0B8;
  result = sub_404FE4();
  if ( result )
  {
    v4 = a1[7];
    a1[1] = v4;
    a1[2] = v4;
    result = (__int64)a1;
    a1[3] = v4;
    a1[4] = v4;
    a1[5] = v4;
    a1[6] = v4;
  }
  else
  {
    v5 = a1[20];
    a1[27] = &unk_48DF68;
    *(_QWORD *)(v5 + 224) = &unk_48E160;
  }
  return result;
}
