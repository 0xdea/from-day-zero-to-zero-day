__int64 __fastcall sub_442310(_BYTE *a1, __int64 a2, __int64 a3, _OWORD *a4, char a5)
{
  __int64 v5; // x30
  __int128 v6; // q1
  __int64 result; // x0
  _BYTE *v8; // x0
  __int64 v9; // x2
  __int128 *v10; // x3
  __int128 v11; // q0
  __int128 v12; // q1
  __int64 v13; // x1
  unsigned __int64 v14; // x0
  unsigned __int64 v15; // x1
  _OWORD v16[2]; // [xsp+10h] [xbp-1E0h] BYREF
  __int128 v17; // [xsp+30h] [xbp-1C0h]
  __int128 v18; // [xsp+40h] [xbp-1B0h]
  _BYTE *v19; // [xsp+50h] [xbp-1A0h] BYREF
  _BYTE *v20; // [xsp+58h] [xbp-198h]
  _BYTE *v21; // [xsp+60h] [xbp-190h]
  __int64 v22; // [xsp+68h] [xbp-188h]
  int v23; // [xsp+70h] [xbp-180h]
  __int64 v24; // [xsp+F8h] [xbp-F8h]
  __int64 *v25; // [xsp+100h] [xbp-F0h]
  __int64 v26; // [xsp+108h] [xbp-E8h]
  _QWORD *v27; // [xsp+110h] [xbp-E0h]
  _OWORD v28[2]; // [xsp+120h] [xbp-D0h] BYREF
  _BYTE *v29; // [xsp+140h] [xbp-B0h] BYREF
  _BYTE *v30; // [xsp+148h] [xbp-A8h]
  _BYTE *v31; // [xsp+150h] [xbp-A0h]
  __int64 v32; // [xsp+158h] [xbp-98h]
  int v33; // [xsp+160h] [xbp-90h]
  __int64 v34; // [xsp+1E8h] [xbp-8h]
  __int64 v35; // [xsp+1F0h] [xbp+0h] BYREF

  v34 = qword_48DD60;
  v29 = a1;
  v30 = a1;
  v31 = &a1[a2];
  v32 = 0;
  v33 = 2;
  if ( a2 )
    *a1 = 0;
  v6 = a4[1];
  v28[0] = *a4;
  v28[1] = v6;
  sub_4262A0((__int64)&v29, a3, (__int64 *)v28, a5);
  if ( v30 >= v31 )
  {
    if ( v30 > v29 )
      *(v30 - 1) = 0;
  }
  else
  {
    *v30 = 0;
  }
  result = sub_43E1D0((__int64)&v29);
  if ( v34 != qword_48DD60 )
  {
    v8 = (_BYTE *)sub_412340();
    v25 = &v35;
    v26 = v5;
    v11 = *v10;
    v12 = v10[1];
    v27 = &v29;
    v24 = qword_48DD60;
    v19 = v8;
    v20 = v8;
    v21 = &v8[v13];
    v22 = 0;
    v23 = 2;
    v17 = v11;
    v18 = v12;
    if ( v13 )
      *v8 = 0;
    v16[0] = v17;
    v16[1] = v18;
    sub_4262A0((__int64)&v19, v9, (__int64 *)v16, 0);
    if ( v20 >= v21 )
    {
      if ( v20 > v19 )
        *(v20 - 1) = 0;
    }
    else
    {
      *v20 = 0;
    }
    result = sub_43E1D0((__int64)&v19);
    if ( v24 != qword_48DD60 )
    {
      v14 = sub_412340();
      v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0x498) >> 2;
      if ( v15 - 1 > 0xFFFF )
        v15 = 0x10000;
      return v15 >= v14;
    }
  }
  return result;
}
