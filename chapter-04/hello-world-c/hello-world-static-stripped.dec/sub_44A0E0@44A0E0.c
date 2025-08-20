__int64 *__fastcall sub_44A0E0(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *v5; // x0
  __int64 *result; // x0
  _QWORD *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD v11[2]; // [xsp+0h] [xbp-10020h] BYREF
  _BYTE v12[1008]; // [xsp+10h] [xbp-10010h] BYREF
  __int64 v13; // [xsp+400h] [xbp-FC20h]
  _BYTE v14[24]; // [xsp+10000h] [xbp-20h] BYREF
  __int64 v15; // [xsp+10018h] [xbp-8h]

  v15 = qword_48DD60;
  if ( a2 == a3 )
  {
    if ( a4 <= 31 )
    {
      sub_449C80((unsigned __int64)a1, a2, a4);
    }
    else
    {
      v7 = &v14[-((16 * a4) & 0xFFFFFFFFFFFF0000LL)];
      if ( v14 != (_BYTE *)v7 )
      {
        do
          v13 = 0;
        while ( v11 != v7 );
      }
      v11[0] = 0;
      if ( (unsigned __int16)(16 * a4) >= 0x400uLL )
        v13 = 0;
      sub_449D90(a1, a2, a4, (unsigned __int64)v12);
    }
  }
  else if ( a4 <= 31 )
  {
    sub_449780((unsigned __int64)a1, (__int64)a2, a3, a4);
  }
  else
  {
    v5 = &v14[-((16 * a4) & 0xFFFFFFFFFFFF0000LL)];
    if ( v14 != (_BYTE *)v5 )
    {
      do
        v13 = 0;
      while ( v11 != v5 );
    }
    v11[0] = 0;
    if ( (unsigned __int16)(16 * a4) >= 0x400uLL )
      v13 = 0;
    sub_4498A0((unsigned __int64)a1, (__int64)a2, a3, a4, (unsigned __int64)v12);
  }
  result = &qword_48DD60;
  if ( v15 != qword_48DD60 )
  {
    v8 = sub_412340();
    return (__int64 *)sub_44A210(v8, v9, v10);
  }
  return result;
}
