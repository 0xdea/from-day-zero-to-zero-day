double __fastcall IO_fwide(__int64 a1, int a2)
{
  int v3; // w0
  __int64 v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x3
  __int64 v9; // x4
  double result; // d0
  __int64 v11; // x1
  __int128 v12; // [xsp+8h] [xbp-28h] BYREF
  __int64 v13; // [xsp+18h] [xbp-18h]
  __int64 v14; // [xsp+20h] [xbp-10h]

  v3 = *(_DWORD *)(a1 + 192);
  if ( a2 < 0 )
  {
    if ( !v3 )
      *(_DWORD *)(a1 + 192) = -1;
  }
  else if ( !v3 && a2 )
  {
    v4 = *(_QWORD *)(a1 + 160);
    v5 = *(_QWORD *)(v4 + 8);
    v6 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(a1 + 152) = v4 + 104;
    *(_QWORD *)(v4 + 88) = 0;
    *(_QWORD *)v4 = v5;
    v7 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(v4 + 32) = v6;
    *(_QWORD *)(v7 + 96) = 0;
    _wcsmbs_clone_conv(&v12);
    if ( *((_QWORD *)&v12 + 1) != 1 )
      _libc_assert_fail("fcts.towc_nsteps == 1", (__int64)"iofwide.c", 0x50u, (__int64)"_IO_fwide");
    if ( v14 != 1 )
      _libc_assert_fail("fcts.tomb_nsteps == 1", (__int64)"iofwide.c", 0x51u, (__int64)"_IO_fwide");
    v8 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(v4 + 104) = v12;
    *(_DWORD *)(v4 + 136) = 1;
    v9 = v13;
    *(_QWORD *)(v4 + 128) = 1;
    *(_QWORD *)&result = 9;
    *(_QWORD *)(v4 + 144) = v8 + 88;
    *(_QWORD *)(v4 + 160) = v9;
    *(_DWORD *)(v4 + 192) = 1;
    v11 = *(_QWORD *)(v8 + 224);
    *(_QWORD *)(v4 + 184) = 9;
    *(_QWORD *)(v4 + 200) = v8 + 88;
    *(_DWORD *)(a1 + 192) = 1;
    *(_QWORD *)(a1 + 216) = v11;
  }
  return result;
}
