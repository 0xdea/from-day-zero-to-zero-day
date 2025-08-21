__int64 __fastcall sub_404890(unsigned int *a1)
{
  unsigned int v1; // w1
  __int64 v3; // x0
  __int64 v4; // x3
  __int64 v5; // x2
  __int64 result; // x0

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 9);
  if ( (v1 & 0x100) != 0 )
  {
    v4 = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 3) = v3;
    v5 = *((_QWORD *)a1 + 11);
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = v5;
    v3 = v4;
    *a1 = v1 & 0xFFFFFEFF;
  }
  result = sub_40C1A0(v3);
  *((_QWORD *)a1 + 9) = 0;
  *((_QWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 11) = 0;
  return result;
}
