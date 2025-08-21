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
  __int64 v19; // x0
  __int64 v20; // x2
  __int64 v21; // x1
  _BYTE *v22; // x21
  int v23; // w4
  __int128 v24; // q1
  __int64 *result; // x0
  _DWORD *v26; // x1
  __int64 v27; // x0
  __int64 v28; // [xsp+0h] [xbp-560h]
  int v29; // [xsp+28h] [xbp-538h]
  unsigned __int64 v30; // [xsp+60h] [xbp-500h]
  int v32; // [xsp+88h] [xbp-4D8h]
  __int64 v33; // [xsp+A0h] [xbp-4C0h]
  __int64 v34; // [xsp+A8h] [xbp-4B8h]
  char *v36; // [xsp+B8h] [xbp-4A8h]
  int v37; // [xsp+D0h] [xbp-490h]
  _OWORD v38[2]; // [xsp+E0h] [xbp-480h] BYREF
  _BYTE *v39; // [xsp+100h] [xbp-460h]
  _OWORD v40[2]; // [xsp+138h] [xbp-428h] BYREF
  _BYTE v41[656]; // [xsp+170h] [xbp-3F0h] BYREF
  __int64 v42; // [xsp+400h] [xbp-160h]
  __int64 v43; // [xsp+558h] [xbp-8h]
  __int64 v44; // [xsp+590h] [xbp+30h]
  __int64 v45; // [xsp+598h] [xbp+38h]
  __int64 v46; // [xsp+5A0h] [xbp+40h]
  __int64 v47; // [xsp+5A8h] [xbp+48h]
  __int64 v48; // [xsp+5B0h] [xbp+50h]
  __int64 v49; // [xsp+5B8h] [xbp+58h]

  v42 = 0;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v13 = *a3;
  v33 = a3[1];
  v30 = StatusReg;
  v34 = a3[2];
  v37 = *(_DWORD *)(StatusReg + 40);
  v15 = *(_OWORD *)a3;
  v16 = *((_OWORD *)a3 + 1);
  v43 = qword_48DD60;
  v29 = *((_DWORD *)a3 + 6);
  v18 = *((_DWORD *)a3 + 7);
  v40[0] = v15;
  v40[1] = v16;
  v32 = v18;
  v19 = sub_40DF40(a2, 37);
  v20 = v19 - a2;
  v21 = a2;
  v22 = (_BYTE *)v19;
  v36 = (char *)v19;
  v39 = (_BYTE *)v19;
  sub_43E650(a1, v21, v20);
  if ( *(_DWORD *)(a1 + 32) && *v22 )
  {
    if ( qword_496BF8 || qword_496BE8 || qword_496C10 )
      goto LABEL_8;
    v23 = (unsigned __int8)v22[1];
    v39 = v22 + 1;
    if ( (unsigned __int8)(v23 - 32) <= 0x5Au )
      __asm { BR              X1 }
    if ( v23 )
    {
LABEL_8:
      *a3 = v13;
      a3[1] = v33;
      a3[2] = v34;
      *((_DWORD *)a3 + 6) = v29;
      *((_DWORD *)a3 + 7) = v32;
      LODWORD(v28) = v37;
      v24 = *((_OWORD *)a3 + 1);
      v38[0] = *(_OWORD *)a3;
      v38[1] = v24;
      sub_424A10(a1, a2, 0, (__int64)v38, (__int64)v40, 0, v36, (__int64)v41, v28, -1, 0, a4);
    }
    else
    {
      *(_DWORD *)(v30 + 40) = 22;
      *(_DWORD *)(a1 + 32) = 0;
    }
  }
  result = &qword_48DD60;
  if ( v43 != qword_48DD60 )
  {
    v44 = v4;
    v45 = v5;
    v46 = v6;
    v47 = v7;
    v48 = v8;
    v49 = v9;
    sub_412340();
    v27 = sub_401A30("*** %n in writable segment detected ***\n", v26);
    return (__int64 *)sub_427E20(v27);
  }
  return result;
}
