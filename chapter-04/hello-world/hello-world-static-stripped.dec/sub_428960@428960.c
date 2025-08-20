__int64 __fastcall sub_428960(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 v15; // x21
  __int64 v16; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 result; // x0
  unsigned __int64 StatusReg; // x20
  int v26; // w22
  int v27; // w0
  __int64 v28; // x0
  _BYTE v29[16]; // [xsp+8h] [xbp-88h] BYREF
  int v30; // [xsp+18h] [xbp-78h]
  unsigned int v31; // [xsp+28h] [xbp-68h]
  int v32; // [xsp+2Ch] [xbp-64h]
  int v33; // [xsp+40h] [xbp-50h]
  __int64 v34; // [xsp+88h] [xbp-8h]
  __int64 v35; // [xsp+B0h] [xbp+20h]
  __int64 v36; // [xsp+B8h] [xbp+28h]

  v18 = *(unsigned int *)(a1 + 112);
  v34 = qword_48DD60;
  v19 = 0;
  if ( (v18 & 0x80000000) == 0 )
  {
    v20 = *(_QWORD *)(a1 + 216);
    if ( (unsigned __int64)(v20 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50(a2, a3, a4, a5, a6, a7, a8, a9);
    if ( ((*(__int64 (__fastcall **)(__int64, _BYTE *))(v20 + 144))(a1, v29) & 0x80000000) == 0 )
    {
      if ( (v30 & 0xF000) != 0x2000
        || (v32 & 0xFFFFF000 | (v31 >> 8) & 0xFFF) - 136 > 7
        && (v36 = v16,
            StatusReg = _ReadStatusReg(TPIDR_EL0),
            v26 = *(_DWORD *)(StatusReg + 40),
            v27 = ((__int64 (__fastcall *)(_QWORD))loc_430CC0)(*(unsigned int *)(a1 + 112)),
            *(_DWORD *)(StatusReg + 40) = v26,
            v16 = v36,
            !v27) )
      {
        LODWORD(v21) = v33;
        v18 = (unsigned int)(v33 - 1);
        if ( (unsigned int)v18 > 0x1FFE )
          goto LABEL_7;
LABEL_11:
        v21 = (int)v21;
        v22 = sub_40B890((int)v21, a2, a3, a4, a5, a6, a7, a8, a9, v18, v19, a12, a13, a14, a15);
        v23 = v22;
        if ( v22 )
          goto LABEL_8;
        goto LABEL_12;
      }
      LODWORD(v21) = v33;
      *(_DWORD *)a1 |= 0x200u;
      v18 = (unsigned int)(v21 - 1);
      if ( (unsigned int)v18 <= 0x1FFE )
        goto LABEL_11;
    }
  }
LABEL_7:
  v21 = 0x2000;
  v22 = sub_40B890(0x2000u, a2, a3, a4, a5, a6, a7, a8, a9, v18, v19, a12, a13, a14, a15);
  v23 = v22;
  if ( v22 )
  {
LABEL_8:
    IO_setb((int *)a1, v23, v22 + v21, 1);
    result = 1;
    goto LABEL_9;
  }
LABEL_12:
  result = 0xFFFFFFFFLL;
LABEL_9:
  if ( v34 != qword_48DD60 )
  {
    v35 = v15;
    v36 = v16;
    v28 = sub_412340();
    return sub_428AD0(v28);
  }
  return result;
}
