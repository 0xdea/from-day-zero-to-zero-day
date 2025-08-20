__int64 __fastcall sub_41DCC0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // x19
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 result; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // [xsp+8h] [xbp-18h] BYREF
  __int64 v16; // [xsp+10h] [xbp-10h] BYREF
  __int64 v17; // [xsp+18h] [xbp-8h]
  __int64 v18; // [xsp+30h] [xbp+10h]
  __int64 v19; // [xsp+38h] [xbp+18h]
  __int64 v20; // [xsp+40h] [xbp+20h]

  v17 = qword_48DD60;
  if ( qword_496898 )
  {
    if ( (unsigned int)sub_41D830(a1, &v15) || (unsigned int)sub_41D830(a2, &v16) )
      *a3 = sub_42F240(a1, a2);
    else
      *a3 = v15 - v16;
    v3 = v18;
    v4 = v19;
    result = 0;
    v5 = v20;
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
  if ( v17 != qword_48DD60 )
  {
    v18 = v3;
    v19 = v4;
    v20 = v5;
    v10 = sub_412340();
    return sub_41DD84(v10, v11, v12, v13, v14);
  }
  return result;
}
