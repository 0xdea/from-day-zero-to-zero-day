__int64 *__fastcall sub_415220(char a1)
{
  int v2; // w0
  unsigned __int64 v3; // x4
  unsigned __int64 v4; // x0
  __int64 *result; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned __int64 v9; // [xsp+8h] [xbp-18h] BYREF
  __int64 v10; // [xsp+18h] [xbp-8h]

  v10 = qword_48DD60;
  sub_41F330(0);
  byte_490F08 = a1;
  v2 = sub_4310B0(3, &v9);
  v3 = 0x200000;
  if ( !v2 && v9 != -1 )
  {
    v3 = 0x20000;
    if ( v9 >= 0x20000 )
      v3 = v9;
  }
  qword_4969C0 = qword_490F10;
  v4 = qword_490F10 + 2048 + (qword_4921C0 + qword_4921B0 - 1) / (unsigned __int64)qword_4921C0 * qword_4921C0;
  if ( v4 < v3 )
    v4 = v3;
  v9 = (v4 + qword_490F10 - 1) & -qword_490F10;
  qword_4969D0 = v9;
  sub_42C940();
  result = &qword_48DD60;
  if ( v10 != qword_48DD60 )
  {
    v6 = sub_412340();
    return (__int64 *)sub_415320(v6, v7, v8);
  }
  return result;
}
