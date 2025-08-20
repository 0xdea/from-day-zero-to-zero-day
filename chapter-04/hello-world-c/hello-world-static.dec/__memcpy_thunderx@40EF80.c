__int64 __fastcall _memcpy_thunderx(__int64 result, __int64 *_X1, unsigned __int64 a3)
{
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  __int64 v12; // x12
  __int64 v13; // x13
  __int64 v14; // x9
  __int64 v15; // x10
  __int64 v16; // x11
  __int64 v17; // x7
  int v18; // w7
  char v19; // w7
  char v20; // w8
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x10
  __int64 v24; // x11
  __int64 v25; // x12
  __int64 v26; // x13
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // t2
  _QWORD *v32; // x3
  __int64 v33; // x12
  __int64 v34; // x13
  __int64 v37; // x6
  __int64 v38; // x7
  __int64 v39; // x8
  __int64 v40; // x9
  __int64 v41; // x10
  __int64 v42; // x11
  __int64 v44; // x12
  __int64 v45; // x13
  unsigned __int64 v46; // x2
  bool v48; // cc
  __int64 v49; // x12
  __int64 v50; // x13
  _QWORD *v51; // x1
  unsigned __int64 v52; // x2
  _QWORD *v53; // x1
  unsigned __int64 i; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x6
  __int64 v58; // x7
  __int64 v59; // x8
  __int64 v60; // x9
  __int64 v61; // x10
  __int64 v62; // x11

  __asm { PRFM            #0, [X1] }
  v8 = (__int64)_X1 + a3;
  v9 = result + a3;
  if ( a3 <= 0x10 )
  {
    if ( a3 < 8 )
    {
      if ( (a3 & 4) != 0 )
      {
        v18 = *(_DWORD *)(v8 - 4);
        *(_DWORD *)result = *(_DWORD *)_X1;
        *(_DWORD *)(v9 - 4) = v18;
      }
      else if ( a3 )
      {
        v19 = *(_BYTE *)(v8 - 1);
        v20 = *((_BYTE *)_X1 + (a3 >> 1));
        *(_BYTE *)result = *(_BYTE *)_X1;
        *(_BYTE *)(result + (a3 >> 1)) = v20;
        *(_BYTE *)(v9 - 1) = v19;
      }
    }
    else
    {
      v17 = *(_QWORD *)(v8 - 8);
      *(_QWORD *)result = *_X1;
      *(_QWORD *)(v9 - 8) = v17;
    }
  }
  else if ( a3 > 0x60 )
  {
    if ( a3 < 0x8000 )
    {
      v32 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
      v49 = *_X1;
      v50 = _X1[1];
      v51 = (__int64 *)((char *)_X1 - (result & 0xF));
      v52 = a3 + (result & 0xF);
      v37 = v51[2];
      v38 = v51[3];
      *(_QWORD *)result = v49;
      *(_QWORD *)(result + 8) = v50;
      v39 = v51[4];
      v40 = v51[5];
      v41 = v51[6];
      v42 = v51[7];
      v44 = v51[8];
      v45 = v51[9];
      v53 = v51 + 8;
      v48 = v52 > 0x90;
      for ( i = v52 - 144; v48; i -= 64LL )
      {
        v32[2] = v37;
        v32[3] = v38;
        v37 = v53[2];
        v38 = v53[3];
        v32[4] = v39;
        v32[5] = v40;
        v39 = v53[4];
        v40 = v53[5];
        v32[6] = v41;
        v32[7] = v42;
        v41 = v53[6];
        v42 = v53[7];
        v32[8] = v44;
        v32[9] = v45;
        v32 += 8;
        v44 = v53[8];
        v45 = v53[9];
        v53 += 8;
        v48 = i > 0x40;
      }
    }
    else
    {
      v32 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
      v33 = *_X1;
      v34 = _X1[1];
      _X1 = (__int64 *)((char *)_X1 - (result & 0xF));
      __asm { PRFM            #1, [X1,#0x180] }
      v37 = _X1[2];
      v38 = _X1[3];
      *(_QWORD *)result = v33;
      *(_QWORD *)(result + 8) = v34;
      v39 = _X1[4];
      v40 = _X1[5];
      v41 = _X1[6];
      v42 = _X1[7];
      v44 = _X1[8];
      v45 = _X1[9];
      _X1 = _X1 + 8;
      v46 = a3 + (result & 0xF) - 144;
      do
      {
        if ( ((unsigned __int8)_X1 & 0x40) != 0 )
          __asm { PRFM            #1, [X1,#0x200] }
        v32[2] = v37;
        v32[3] = v38;
        v37 = _X1[2];
        v38 = _X1[3];
        v32[4] = v39;
        v32[5] = v40;
        v39 = _X1[4];
        v40 = _X1[5];
        v32[6] = v41;
        v32[7] = v42;
        v41 = _X1[6];
        v42 = _X1[7];
        v32[8] = v44;
        v32[9] = v45;
        v32 += 8;
        v44 = _X1[8];
        v45 = _X1[9];
        _X1 += 8;
        v48 = v46 > 0x40;
        v46 -= 64LL;
      }
      while ( v48 );
    }
    v55 = *(_QWORD *)(v8 - 64);
    v56 = *(_QWORD *)(v8 - 56);
    v32[2] = v37;
    v32[3] = v38;
    v57 = *(_QWORD *)(v8 - 48);
    v58 = *(_QWORD *)(v8 - 40);
    v32[4] = v39;
    v32[5] = v40;
    v59 = *(_QWORD *)(v8 - 32);
    v60 = *(_QWORD *)(v8 - 24);
    v32[6] = v41;
    v32[7] = v42;
    v61 = *(_QWORD *)(v8 - 16);
    v62 = *(_QWORD *)(v8 - 8);
    v32[8] = v44;
    v32[9] = v45;
    *(_QWORD *)(v9 - 64) = v55;
    *(_QWORD *)(v9 - 56) = v56;
    *(_QWORD *)(v9 - 48) = v57;
    *(_QWORD *)(v9 - 40) = v58;
    *(_QWORD *)(v9 - 32) = v59;
    *(_QWORD *)(v9 - 24) = v60;
    *(_QWORD *)(v9 - 16) = v61;
    *(_QWORD *)(v9 - 8) = v62;
  }
  else
  {
    v10 = *_X1;
    v11 = _X1[1];
    if ( (((_DWORD)a3 - 1) & 0x40) != 0 )
    {
      v21 = _X1[2];
      v22 = _X1[3];
      v23 = _X1[4];
      v24 = _X1[5];
      v25 = _X1[6];
      v26 = _X1[7];
      v27 = *(_QWORD *)(v8 - 32);
      v28 = *(_QWORD *)(v8 - 24);
      v31 = v8 - 16;
      v30 = *(_QWORD *)(v8 - 16);
      v29 = *(_QWORD *)(v31 + 8);
      *(_QWORD *)result = v10;
      *(_QWORD *)(result + 8) = v11;
      *(_QWORD *)(result + 16) = v21;
      *(_QWORD *)(result + 24) = v22;
      *(_QWORD *)(result + 32) = v23;
      *(_QWORD *)(result + 40) = v24;
      *(_QWORD *)(result + 48) = v25;
      *(_QWORD *)(result + 56) = v26;
      *(_QWORD *)(v9 - 32) = v27;
      *(_QWORD *)(v9 - 24) = v28;
      *(_QWORD *)(v9 - 16) = v30;
      *(_QWORD *)(v9 - 8) = v29;
    }
    else
    {
      v12 = *(_QWORD *)(v8 - 16);
      v13 = *(_QWORD *)(v8 - 8);
      if ( (((_BYTE)a3 - 1) & 0x20) != 0 )
      {
        v14 = _X1[3];
        v15 = *(_QWORD *)(v8 - 32);
        v16 = *(_QWORD *)(v8 - 24);
        *(_QWORD *)(result + 16) = _X1[2];
        *(_QWORD *)(result + 24) = v14;
        *(_QWORD *)(v9 - 32) = v15;
        *(_QWORD *)(v9 - 24) = v16;
      }
      *(_QWORD *)result = v10;
      *(_QWORD *)(result + 8) = v11;
      *(_QWORD *)(v9 - 16) = v12;
      *(_QWORD *)(v9 - 8) = v13;
    }
  }
  return result;
}
