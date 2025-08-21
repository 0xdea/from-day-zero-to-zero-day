__int64 __fastcall IO_fwide(__int64 a1, int a2)
{
  __int64 v2; // x21
  __int64 result; // x0
  __int64 v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x1
  __int64 v12; // x0
  _QWORD v13[11]; // [xsp+8h] [xbp-28h] BYREF

  result = *(unsigned int *)(a1 + 192);
  if ( a2 < 0 )
  {
    if ( !(_DWORD)result )
    {
      result = 0xFFFFFFFFLL;
      *(_DWORD *)(a1 + 192) = -1;
    }
  }
  else if ( !(_DWORD)result && a2 )
  {
    v5 = *(_QWORD *)(a1 + 160);
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 24);
    v13[9] = v2;
    *(_QWORD *)(a1 + 152) = v5 + 104;
    *(_QWORD *)(v5 + 88) = 0;
    *(_QWORD *)v5 = v6;
    v8 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(v5 + 32) = v7;
    *(_QWORD *)(v8 + 96) = 0;
    _wcsmbs_clone_conv(v13);
    if ( v13[1] == 1 )
    {
      if ( v13[3] == 1 )
      {
        v9 = *(_QWORD *)(a1 + 160);
        *(_QWORD *)(v5 + 104) = v13[0];
        *(_DWORD *)(v5 + 136) = 1;
        v10 = v13[2];
        result = 1;
        *(_QWORD *)(v5 + 128) = 1;
        *(_QWORD *)(v5 + 144) = v9 + 88;
        *(_QWORD *)(v5 + 160) = v10;
        *(_DWORD *)(v5 + 192) = 1;
        v11 = *(_QWORD *)(v9 + 224);
        *(_QWORD *)(v5 + 184) = 9;
        *(_QWORD *)(v5 + 200) = v9 + 88;
        *(_DWORD *)(a1 + 192) = 1;
        *(_QWORD *)(a1 + 216) = v11;
        return result;
      }
      _libc_assert_fail("fcts.tomb_nsteps == 1", "iofwide.c", 81, "_IO_fwide");
    }
    v12 = _libc_assert_fail("fcts.towc_nsteps == 1", "iofwide.c", 80, "_IO_fwide");
    return _libio_codecvt_out(v12);
  }
  return result;
}
