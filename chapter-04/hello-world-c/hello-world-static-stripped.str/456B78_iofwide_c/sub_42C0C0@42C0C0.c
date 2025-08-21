double __fastcall sub_42C0C0(__int64 a1, int a2)
{
  __int64 v2; // x21
  int v4; // w0
  __int64 v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x3
  __int64 v10; // x4
  double result; // d0
  __int64 v12; // x1
  _QWORD v13[4]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v14; // [xsp+28h] [xbp-8h]
  __int64 v15; // [xsp+50h] [xbp+20h]

  v14 = qword_48DD60;
  v4 = *(_DWORD *)(a1 + 192);
  if ( a2 < 0 )
  {
    if ( !v4 )
      *(_DWORD *)(a1 + 192) = -1;
  }
  else if ( !v4 && a2 )
  {
    v5 = *(_QWORD *)(a1 + 160);
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(a1 + 152) = v5 + 104;
    *(_QWORD *)(v5 + 88) = 0;
    *(_QWORD *)v5 = v6;
    v8 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(v5 + 32) = v7;
    *(_QWORD *)(v8 + 96) = 0;
    ((void (__fastcall *)(_QWORD *))loc_4105D0)(v13);
    if ( v13[1] != 1 )
      sub_41F250("fcts.towc_nsteps == 1", (__int64)"iofwide.c", 0x50u, (__int64)"_IO_fwide");
    if ( v13[3] != 1 )
LABEL_12:
      sub_41F250("fcts.tomb_nsteps == 1", (__int64)"iofwide.c", 0x51u, (__int64)"_IO_fwide");
    v9 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(v5 + 104) = v13[0];
    *(_DWORD *)(v5 + 136) = 1;
    v10 = v13[2];
    *(_QWORD *)(v5 + 128) = 1;
    *(_QWORD *)&result = 9;
    *(_QWORD *)(v5 + 144) = v9 + 88;
    *(_QWORD *)(v5 + 160) = v10;
    *(_DWORD *)(v5 + 192) = 1;
    v12 = *(_QWORD *)(v9 + 224);
    *(_QWORD *)(v5 + 184) = 9;
    *(_QWORD *)(v5 + 200) = v9 + 88;
    *(_DWORD *)(a1 + 192) = 1;
    *(_QWORD *)(a1 + 216) = v12;
  }
  if ( v14 != qword_48DD60 )
  {
    v15 = v2;
    sub_412340();
    goto LABEL_12;
  }
  return result;
}
