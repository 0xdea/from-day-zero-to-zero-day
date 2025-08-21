__int64 __fastcall IO_file_setbuf(_QWORD *a1)
{
  __int64 result; // x0
  __int64 v3; // x1

  result = sub_404FE4();
  if ( result )
  {
    v3 = a1[7];
    result = (__int64)a1;
    a1[1] = v3;
    a1[2] = v3;
    a1[3] = v3;
    a1[4] = v3;
    a1[5] = v3;
    a1[6] = v3;
  }
  return result;
}
