__int64 *__fastcall sub_411AE0(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x19
  __int64 v5; // x20
  __int64 *result; // x0
  __int64 v8; // x0
  int v9; // [xsp+4h] [xbp-Ch] BYREF
  __int64 v10; // [xsp+8h] [xbp-8h]
  __int64 v11; // [xsp+20h] [xbp+10h]
  __int64 v12; // [xsp+28h] [xbp+18h]

  v10 = qword_48DD60;
  if ( dword_490F0C )
  {
    v5 = a2;
    v4 = a3;
    sub_414684(28, &v9, 0);
    if ( !v9 || (a4 = v5, linux_eabi_syscall(__NR_prctl, 1398164801, 0, a1) == -22) )
      dword_490F0C = 0;
  }
  result = &qword_48DD60;
  if ( v10 != qword_48DD60 )
  {
    v11 = v4;
    v12 = v5;
    v8 = sub_412340(&qword_48DD60, 0, v10 - qword_48DD60, a4);
    return (__int64 *)sub_411BC0(v8);
  }
  return result;
}
