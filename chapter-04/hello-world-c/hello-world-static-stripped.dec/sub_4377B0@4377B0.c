__int64 __fastcall sub_4377B0(__int64 *a1, __int64 a2)
{
  __int64 *v4; // x2
  __int64 *v5; // x1
  __int64 **v6; // x1
  __int64 v7; // x3
  int v8; // w2

  sub_42D0B0(dword_490F60);
  v4 = (&off_4914A8)[21 * a2];
  if ( v4 )
  {
    do
    {
      v5 = v4;
      v4 = (__int64 *)v4[3];
    }
    while ( v4 );
    a1[4] = (__int64)v5;
    v5[3] = (__int64)a1;
  }
  else
  {
    (&off_4914A8)[21 * a2] = a1;
  }
  v6 = &(&off_4914A8)[21 * a2];
  v7 = qword_490FC8;
  v8 = *((_DWORD *)v6 + 2);
  ++qword_490FC8;
  *((_DWORD *)v6 + 2) = v8 + 1;
  a1[151] = v7;
  return sub_42DA40(dword_490F60);
}
