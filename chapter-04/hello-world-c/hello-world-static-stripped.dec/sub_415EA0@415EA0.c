__int64 __fastcall sub_415EA0(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 result; // x0
  __int64 v9; // x0
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  unsigned int v18; // [xsp+4h] [xbp-1Ch] BYREF
  _QWORD v19[2]; // [xsp+8h] [xbp-18h] BYREF
  __int64 v20; // [xsp+18h] [xbp-8h]
  __int64 v21; // [xsp+40h] [xbp+20h]
  __int64 v22; // [xsp+48h] [xbp+28h]
  __int64 v23; // [xsp+50h] [xbp+30h]
  __int64 v24; // [xsp+58h] [xbp+38h]

  v20 = qword_48DD60;
  sub_4172F0(0);
  if ( (unsigned int)sub_41DCC0(a1, a2, &v18) )
  {
    v22 = v3;
    v19[0] = a1;
    v9 = sub_431690(v19, &qword_496860, sub_4153B0);
    if ( v9 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)v9 + 8LL);
      if ( !v10 )
        v10 = a1;
    }
    else
    {
      v10 = a1;
    }
    v19[0] = a2;
    v11 = sub_431690(v19, &qword_496860, sub_4153B0);
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)v11 + 8LL);
      if ( !v12 )
        v12 = a2;
    }
    else
    {
      v12 = a2;
    }
    result = sub_42F240(v10, v12);
    v3 = v22;
  }
  else
  {
    result = v18;
  }
  if ( v20 != qword_48DD60 )
  {
    v21 = v2;
    v22 = v3;
    v23 = v4;
    v24 = v5;
    v13 = sub_412340();
    return sub_415FB0(v13, v14, v15, v16, v17);
  }
  return result;
}
