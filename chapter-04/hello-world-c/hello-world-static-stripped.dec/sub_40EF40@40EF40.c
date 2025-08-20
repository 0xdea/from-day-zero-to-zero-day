__int64 __fastcall sub_40EF40(__int64 result, __int64 *_X1, unsigned __int64 a3)
{
  unsigned __int64 v3; // x14
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  __int64 v13; // x12
  __int64 v14; // x13
  __int64 v15; // x9
  __int64 v16; // x10
  __int64 v17; // x11
  __int64 v18; // x7
  int v19; // w7
  char v20; // w7
  char v21; // w8
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x10
  __int64 v25; // x11
  __int64 v26; // x12
  __int64 v27; // x13
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // t2
  _QWORD *v33; // x3
  __int64 v34; // x12
  __int64 v35; // x13
  __int64 v38; // x6
  __int64 v39; // x7
  __int64 v40; // x8
  __int64 v41; // x9
  __int64 v42; // x10
  __int64 v43; // x11
  __int64 v45; // x12
  __int64 v46; // x13
  unsigned __int64 v47; // x2
  bool v49; // cc
  __int64 v50; // x12
  __int64 v51; // x13
  _QWORD *v52; // x1
  unsigned __int64 v53; // x2
  _QWORD *v54; // x1
  unsigned __int64 i; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x6
  __int64 v59; // x7
  __int64 v60; // x8
  __int64 v61; // x9
  __int64 v62; // x10
  __int64 v63; // x11
  __int64 v64; // x5
  __int64 v65; // x14
  __int64 v66; // x12
  __int64 v67; // x13
  unsigned __int64 v68; // x4
  unsigned __int64 v69; // x2
  __int64 v70; // x6
  __int64 v71; // x7
  __int64 v72; // x8
  __int64 v73; // x9
  __int64 v74; // x10
  __int64 v75; // x11
  unsigned __int64 v76; // x4
  __int64 v77; // x12
  __int64 v78; // x13
  __int64 v79; // x5
  unsigned __int64 j; // x2
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x6
  __int64 v84; // x7
  __int64 v85; // x8
  __int64 v86; // x9
  __int64 v87; // x10
  __int64 v88; // x11

  v3 = result - (_QWORD)_X1;
  if ( a3 <= 0x60 || v3 >= a3 )
  {
    __asm { PRFM            #0, [X1] }
    v9 = (__int64)_X1 + a3;
    v10 = result + a3;
    if ( a3 <= 0x10 )
    {
      if ( a3 < 8 )
      {
        if ( (a3 & 4) != 0 )
        {
          v19 = *(_DWORD *)(v9 - 4);
          *(_DWORD *)result = *(_DWORD *)_X1;
          *(_DWORD *)(v10 - 4) = v19;
        }
        else if ( a3 )
        {
          v20 = *(_BYTE *)(v9 - 1);
          v21 = *((_BYTE *)_X1 + (a3 >> 1));
          *(_BYTE *)result = *(_BYTE *)_X1;
          *(_BYTE *)(result + (a3 >> 1)) = v21;
          *(_BYTE *)(v10 - 1) = v20;
        }
      }
      else
      {
        v18 = *(_QWORD *)(v9 - 8);
        *(_QWORD *)result = *_X1;
        *(_QWORD *)(v10 - 8) = v18;
      }
    }
    else if ( a3 > 0x60 )
    {
      if ( a3 < 0x8000 )
      {
        v33 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
        v50 = *_X1;
        v51 = _X1[1];
        v52 = (__int64 *)((char *)_X1 - (result & 0xF));
        v53 = a3 + (result & 0xF);
        v38 = v52[2];
        v39 = v52[3];
        *(_QWORD *)result = v50;
        *(_QWORD *)(result + 8) = v51;
        v40 = v52[4];
        v41 = v52[5];
        v42 = v52[6];
        v43 = v52[7];
        v45 = v52[8];
        v46 = v52[9];
        v54 = v52 + 8;
        v49 = v53 > 0x90;
        for ( i = v53 - 144; v49; i -= 64LL )
        {
          v33[2] = v38;
          v33[3] = v39;
          v38 = v54[2];
          v39 = v54[3];
          v33[4] = v40;
          v33[5] = v41;
          v40 = v54[4];
          v41 = v54[5];
          v33[6] = v42;
          v33[7] = v43;
          v42 = v54[6];
          v43 = v54[7];
          v33[8] = v45;
          v33[9] = v46;
          v33 += 8;
          v45 = v54[8];
          v46 = v54[9];
          v54 += 8;
          v49 = i > 0x40;
        }
      }
      else
      {
        v33 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
        v34 = *_X1;
        v35 = _X1[1];
        _X1 = (__int64 *)((char *)_X1 - (result & 0xF));
        __asm { PRFM            #1, [X1,#0x180] }
        v38 = _X1[2];
        v39 = _X1[3];
        *(_QWORD *)result = v34;
        *(_QWORD *)(result + 8) = v35;
        v40 = _X1[4];
        v41 = _X1[5];
        v42 = _X1[6];
        v43 = _X1[7];
        v45 = _X1[8];
        v46 = _X1[9];
        _X1 = _X1 + 8;
        v47 = a3 + (result & 0xF) - 144;
        do
        {
          if ( ((unsigned __int8)_X1 & 0x40) != 0 )
            __asm { PRFM            #1, [X1,#0x200] }
          v33[2] = v38;
          v33[3] = v39;
          v38 = _X1[2];
          v39 = _X1[3];
          v33[4] = v40;
          v33[5] = v41;
          v40 = _X1[4];
          v41 = _X1[5];
          v33[6] = v42;
          v33[7] = v43;
          v42 = _X1[6];
          v43 = _X1[7];
          v33[8] = v45;
          v33[9] = v46;
          v33 += 8;
          v45 = _X1[8];
          v46 = _X1[9];
          _X1 += 8;
          v49 = v47 > 0x40;
          v47 -= 64LL;
        }
        while ( v49 );
      }
      v56 = *(_QWORD *)(v9 - 64);
      v57 = *(_QWORD *)(v9 - 56);
      v33[2] = v38;
      v33[3] = v39;
      v58 = *(_QWORD *)(v9 - 48);
      v59 = *(_QWORD *)(v9 - 40);
      v33[4] = v40;
      v33[5] = v41;
      v60 = *(_QWORD *)(v9 - 32);
      v61 = *(_QWORD *)(v9 - 24);
      v33[6] = v42;
      v33[7] = v43;
      v62 = *(_QWORD *)(v9 - 16);
      v63 = *(_QWORD *)(v9 - 8);
      v33[8] = v45;
      v33[9] = v46;
      *(_QWORD *)(v10 - 64) = v56;
      *(_QWORD *)(v10 - 56) = v57;
      *(_QWORD *)(v10 - 48) = v58;
      *(_QWORD *)(v10 - 40) = v59;
      *(_QWORD *)(v10 - 32) = v60;
      *(_QWORD *)(v10 - 24) = v61;
      *(_QWORD *)(v10 - 16) = v62;
      *(_QWORD *)(v10 - 8) = v63;
    }
    else
    {
      v11 = *_X1;
      v12 = _X1[1];
      if ( (((_DWORD)a3 - 1) & 0x40) != 0 )
      {
        v22 = _X1[2];
        v23 = _X1[3];
        v24 = _X1[4];
        v25 = _X1[5];
        v26 = _X1[6];
        v27 = _X1[7];
        v28 = *(_QWORD *)(v9 - 32);
        v29 = *(_QWORD *)(v9 - 24);
        v32 = v9 - 16;
        v31 = *(_QWORD *)(v9 - 16);
        v30 = *(_QWORD *)(v32 + 8);
        *(_QWORD *)result = v11;
        *(_QWORD *)(result + 8) = v12;
        *(_QWORD *)(result + 16) = v22;
        *(_QWORD *)(result + 24) = v23;
        *(_QWORD *)(result + 32) = v24;
        *(_QWORD *)(result + 40) = v25;
        *(_QWORD *)(result + 48) = v26;
        *(_QWORD *)(result + 56) = v27;
        *(_QWORD *)(v10 - 32) = v28;
        *(_QWORD *)(v10 - 24) = v29;
        *(_QWORD *)(v10 - 16) = v31;
        *(_QWORD *)(v10 - 8) = v30;
      }
      else
      {
        v13 = *(_QWORD *)(v9 - 16);
        v14 = *(_QWORD *)(v9 - 8);
        if ( (((_BYTE)a3 - 1) & 0x20) != 0 )
        {
          v15 = _X1[3];
          v16 = *(_QWORD *)(v9 - 32);
          v17 = *(_QWORD *)(v9 - 24);
          *(_QWORD *)(result + 16) = _X1[2];
          *(_QWORD *)(result + 24) = v15;
          *(_QWORD *)(v10 - 32) = v16;
          *(_QWORD *)(v10 - 24) = v17;
        }
        *(_QWORD *)result = v11;
        *(_QWORD *)(result + 8) = v12;
        *(_QWORD *)(v10 - 16) = v13;
        *(_QWORD *)(v10 - 8) = v14;
      }
    }
  }
  else if ( v3 )
  {
    v64 = result + a3;
    v65 = (result + a3) & 0xF;
    v66 = *(__int64 *)((char *)_X1 + a3 - 16);
    v67 = *(__int64 *)((char *)_X1 + a3 - 8);
    v68 = (unsigned __int64)_X1 + a3 - v65;
    v69 = a3 - v65;
    v70 = *(_QWORD *)(v68 - 16);
    v71 = *(_QWORD *)(v68 - 8);
    *(_QWORD *)(v64 - 16) = v66;
    *(_QWORD *)(v64 - 8) = v67;
    v72 = *(_QWORD *)(v68 - 32);
    v73 = *(_QWORD *)(v68 - 24);
    v74 = *(_QWORD *)(v68 - 48);
    v75 = *(_QWORD *)(v68 - 40);
    v77 = *(_QWORD *)(v68 - 64);
    v78 = *(_QWORD *)(v68 - 56);
    v76 = v68 - 64;
    v79 = v64 - v65;
    v49 = v69 > 0x80;
    for ( j = v69 - 128; v49; j -= 64LL )
    {
      *(_QWORD *)(v79 - 16) = v70;
      *(_QWORD *)(v79 - 8) = v71;
      v70 = *(_QWORD *)(v76 - 16);
      v71 = *(_QWORD *)(v76 - 8);
      *(_QWORD *)(v79 - 32) = v72;
      *(_QWORD *)(v79 - 24) = v73;
      v72 = *(_QWORD *)(v76 - 32);
      v73 = *(_QWORD *)(v76 - 24);
      *(_QWORD *)(v79 - 48) = v74;
      *(_QWORD *)(v79 - 40) = v75;
      v74 = *(_QWORD *)(v76 - 48);
      v75 = *(_QWORD *)(v76 - 40);
      *(_QWORD *)(v79 - 64) = v77;
      *(_QWORD *)(v79 - 56) = v78;
      v79 -= 64;
      v77 = *(_QWORD *)(v76 - 64);
      v78 = *(_QWORD *)(v76 - 56);
      v76 -= 64LL;
      v49 = j > 0x40;
    }
    v81 = _X1[6];
    v82 = _X1[7];
    *(_QWORD *)(v79 - 16) = v70;
    *(_QWORD *)(v79 - 8) = v71;
    v83 = _X1[4];
    v84 = _X1[5];
    *(_QWORD *)(v79 - 32) = v72;
    *(_QWORD *)(v79 - 24) = v73;
    v85 = _X1[2];
    v86 = _X1[3];
    *(_QWORD *)(v79 - 48) = v74;
    *(_QWORD *)(v79 - 40) = v75;
    v87 = *_X1;
    v88 = _X1[1];
    *(_QWORD *)(v79 - 64) = v77;
    *(_QWORD *)(v79 - 56) = v78;
    *(_QWORD *)(result + 48) = v81;
    *(_QWORD *)(result + 56) = v82;
    *(_QWORD *)(result + 32) = v83;
    *(_QWORD *)(result + 40) = v84;
    *(_QWORD *)(result + 16) = v85;
    *(_QWORD *)(result + 24) = v86;
    *(_QWORD *)result = v87;
    *(_QWORD *)(result + 8) = v88;
  }
  return result;
}
