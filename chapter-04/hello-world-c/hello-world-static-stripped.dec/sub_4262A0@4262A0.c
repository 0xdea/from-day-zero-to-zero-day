__int64 *__fastcall sub_4262A0(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x25
  __int64 v7; // x26
  __int64 v8; // x27
  __int64 v9; // x28
  unsigned __int64 StatusReg; // x6
  __int64 v13; // x22
  __int128 v15; // q0
  __int128 v16; // q1
  int v18; // w1
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x2
  __int64 v21; // x1
  _BYTE *v22; // x21
  int v23; // w4
  __int128 v24; // q1
  __int64 *result; // x0
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  __int64 v34; // [xsp+0h] [xbp-560h]
  int v35; // [xsp+28h] [xbp-538h]
  unsigned __int64 v36; // [xsp+60h] [xbp-500h]
  int v38; // [xsp+88h] [xbp-4D8h]
  __int64 v39; // [xsp+A0h] [xbp-4C0h]
  __int64 v40; // [xsp+A8h] [xbp-4B8h]
  _BYTE *v42; // [xsp+B8h] [xbp-4A8h]
  int v43; // [xsp+D0h] [xbp-490h]
  _OWORD v44[2]; // [xsp+E0h] [xbp-480h] BYREF
  _BYTE *v45; // [xsp+100h] [xbp-460h]
  _OWORD v46[2]; // [xsp+138h] [xbp-428h] BYREF
  _BYTE v47[656]; // [xsp+170h] [xbp-3F0h] BYREF
  __int64 v48; // [xsp+400h] [xbp-160h]
  __int64 v49; // [xsp+558h] [xbp-8h]
  __int64 v50; // [xsp+590h] [xbp+30h]
  __int64 v51; // [xsp+598h] [xbp+38h]
  __int64 v52; // [xsp+5A0h] [xbp+40h]
  __int64 v53; // [xsp+5A8h] [xbp+48h]
  __int64 v54; // [xsp+5B0h] [xbp+50h]
  __int64 v55; // [xsp+5B8h] [xbp+58h]

  v48 = 0;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v13 = *a3;
  v39 = a3[1];
  v36 = StatusReg;
  v40 = a3[2];
  v43 = *(_DWORD *)(StatusReg + 40);
  v15 = *(_OWORD *)a3;
  v16 = *((_OWORD *)a3 + 1);
  v49 = qword_48DD60;
  v35 = *((_DWORD *)a3 + 6);
  v18 = *((_DWORD *)a3 + 7);
  v46[0] = v15;
  v46[1] = v16;
  v38 = v18;
  v19 = sub_40DF40(a2, 0x25u);
  v20 = v19 - a2;
  v21 = a2;
  v22 = (_BYTE *)v19;
  v42 = (_BYTE *)v19;
  v45 = (_BYTE *)v19;
  sub_43E650(a1, v21, v20);
  if ( *(_DWORD *)(a1 + 32) && *v22 )
  {
    if ( qword_496BF8 || qword_496BE8 || qword_496C10 )
      goto LABEL_8;
    v23 = (unsigned __int8)v22[1];
    v45 = v22 + 1;
    if ( (unsigned __int8)(v23 - 32) <= 0x5Au )
      __asm { BR              X1 }
    if ( v23 )
    {
LABEL_8:
      *a3 = v13;
      a3[1] = v39;
      a3[2] = v40;
      *((_DWORD *)a3 + 6) = v35;
      *((_DWORD *)a3 + 7) = v38;
      LODWORD(v34) = v43;
      v24 = *((_OWORD *)a3 + 1);
      v44[0] = *(_OWORD *)a3;
      v44[1] = v24;
      sub_424A10(a1, a2, 0, (__int64)v44, (__int64)v46, 0, v42, (__int64)v47, v34, -1, 0, a4);
    }
    else
    {
      *(_DWORD *)(v36 + 40) = 22;
      *(_DWORD *)(a1 + 32) = 0;
    }
  }
  result = &qword_48DD60;
  if ( v49 != qword_48DD60 )
  {
    v50 = v4;
    v51 = v5;
    v52 = v6;
    v53 = v7;
    v54 = v8;
    v55 = v9;
    sub_412340();
    sub_401A30((__int64)"*** %n in writable segment detected ***\n", v26, v27, v28, v29, v30, v31, v32, v33);
  }
  return result;
}
