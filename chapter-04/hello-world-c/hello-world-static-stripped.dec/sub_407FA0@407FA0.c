__int64 *__fastcall sub_407FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  __int64 v7; // x21
  __int64 *v8; // x0
  __int64 v9; // x3
  __int64 *result; // x0
  __int64 v11; // x0
  __int64 v12; // [xsp+8h] [xbp-18h] BYREF
  __int64 v13; // [xsp+10h] [xbp-10h]
  __int64 v14; // [xsp+18h] [xbp-8h]

  v14 = qword_48DD60;
  byte_496690 = 1;
  if ( linux_eabi_syscall(__NR_getrandom, &qword_496698, (void *)8, (void *)1, (void *)1, a5, a6, a7) != 8 )
  {
    sub_410830(1, &v12);
    v7 = (unsigned int)v13 ^ (unsigned int)v12 ^ __ROR4__(v13 ^ v12, 8);
    qword_496698 = v7;
    sub_410830(1, &v12);
    qword_496698 = (unsigned int)v13 ^ (unsigned int)v12 ^ __ROR4__(v13 ^ v12, 8) | (unsigned __int64)(v7 << 32);
  }
  sub_414684(6, &v12, 0);
  if ( (v12 & 1) != 0 )
  {
    byte_4966A0 = 1;
    byte_4966A1 = 1;
    dword_4966A4 = 32;
  }
  v8 = &qword_4906D0;
  *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 48) = &unk_490670;
  do
  {
    v8[2] = (__int64)v8;
    v8[3] = (__int64)v8;
    v8 += 2;
  }
  while ( &unk_490EC0 != (_UNKNOWN *)v8 );
  byte_496688 = 0x80;
  dword_490678 = 0;
  qword_4906D0 = (__int64)&qword_4906D0;
  sub_414684(13, &v12, sub_407540);
  sub_414684(3, &v12, sub_4075D0);
  sub_414684(23, &v12, sub_407570);
  sub_414684(2, &v12, sub_407510);
  sub_414684(17, &v12, sub_4075A0);
  sub_414684(22, &v12, sub_407280);
  sub_414684(25, &v12, sub_4072A4);
  sub_414684(30, &v12, sub_4072D0);
  sub_414684(24, &v12, sub_407320);
  sub_414684(19, &v12, sub_407350);
  sub_414684(10, &v12, sub_4074C0);
  sub_414684(9, &v12, &loc_4076E0);
  if ( qword_490600 )
  {
    if ( (sub_414390(23) & 1) == 0 )
    {
      qword_4905E0 = qword_490600;
      dword_490618 = 1;
    }
    byte_4966A0 = 1;
  }
  result = &qword_48DD60;
  if ( v14 != qword_48DD60 )
  {
    v11 = sub_412340(&qword_48DD60, 0, v14 - qword_48DD60, v9);
    return (__int64 *)sub_408220(v11);
  }
  return result;
}
