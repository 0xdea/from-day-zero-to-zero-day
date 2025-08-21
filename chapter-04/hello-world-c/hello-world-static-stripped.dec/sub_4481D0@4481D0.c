__int64 __fastcall sub_4481D0(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  _BYTE *v5; // x22
  _BYTE *v6; // x23
  char v7; // w21
  int v8; // w20
  __int64 v9; // x26
  __int64 v10; // x25
  _QWORD *v11; // x0
  __int64 v12; // x26
  __int64 v13; // x25
  __int64 *v14; // x0
  __int64 v15; // x1
  unsigned __int64 v16; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  void *v20; // x4
  void *v21; // x5
  void *v22; // x6
  unsigned int v23; // w22
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  __int64 v33; // x25
  unsigned __int64 v34; // x19
  _QWORD *v35; // x0
  __int64 v36; // x2
  __int64 v37; // x0
  __int64 v38; // x3
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  void *v42; // x4
  void *v43; // x5
  void *v44; // x6
  double v45; // d0
  double v46; // d1
  double v47; // d2
  double v48; // d3
  double v49; // d4
  double v50; // d5
  double v51; // d6
  double v52; // d7
  int v53; // w20
  int v54; // w21
  unsigned __int64 v55; // x27
  unsigned __int64 v56; // x28
  __int64 v57; // x25
  unsigned __int64 v58; // x26
  __int64 v59; // x0
  unsigned __int64 v60; // x19
  __int64 v61; // x0
  bool v62; // zf
  unsigned __int64 StatusReg; // x22
  unsigned __int64 v64; // x20
  int v65; // w25
  unsigned __int64 v66; // x28
  unsigned __int64 v67; // x0
  __int64 v68; // [xsp+0h] [xbp-20040h] BYREF
  _BYTE v69[1008]; // [xsp+10h] [xbp-20030h] BYREF
  __int64 v70; // [xsp+400h] [xbp-1FC40h]
  _QWORD v71[2]; // [xsp+10000h] [xbp-10040h] BYREF
  _BYTE v72[1008]; // [xsp+10010h] [xbp-10030h] BYREF
  __int64 v73; // [xsp+10400h] [xbp-FC40h]
  _BYTE v74[16]; // [xsp+20000h] [xbp-40h] BYREF
  char *v75; // [xsp+20010h] [xbp-30h]
  char ***v76; // [xsp+20018h] [xbp-28h]
  __int64 v77; // [xsp+20028h] [xbp-18h] BYREF
  __int64 v78; // [xsp+20030h] [xbp-10h] BYREF
  __int64 v79; // [xsp+20038h] [xbp-8h]

  v6 = *(_BYTE **)a1;
  v5 = *(_BYTE **)(a1 + 8);
  v7 = *(_BYTE *)(a1 + 16);
  v79 = qword_48DD60;
  v8 = *(unsigned __int8 *)(a1 + 17);
  if ( *v5 == 47 && v5[1] == 47 && !v5[2] )
  {
    v9 = *(_QWORD *)(**(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16) + 168LL);
    v10 = ifunc_40DFD0(v9);
    v11 = &v74[-((v10 + 18) & 0xFFFFFFFFFFFF0000LL)];
    if ( v74 != (_BYTE *)v11 )
    {
      do
        v73 = 0;
      while ( v71 != v11 );
    }
    v71[0] = 0;
    if ( (((_WORD)v10 + 18) & 0xFFF0u) >= 0x400uLL )
      v73 = 0;
    v5 = v72;
    strcpy((char *)(j_ifunc_40DC90(v72, v9, v10) + v10), "//");
  }
  if ( *v6 == 47 && v6[1] == 47 && !v6[2] )
  {
    v12 = *(_QWORD *)(**(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16) + 168LL);
    v13 = ifunc_40DFD0(v12);
    v14 = (_QWORD *)((char *)v71 - ((v13 + 18) & 0xFFFFFFFFFFFF0000LL));
    if ( v71 != v14 )
    {
      do
        v70 = 0;
      while ( &v68 != v14 );
    }
    v68 = 0;
    if ( (((_WORD)v13 + 18) & 0xFFF0u) >= 0x400uLL )
      v70 = 0;
    v6 = v69;
    strcpy((char *)(j_ifunc_40DC90(v69, v12, v13) + v13), "//");
  }
  v15 = (__int64)v6;
  v16 = 0;
  v23 = sub_415FB0((unsigned __int64)v5, v15, &v77, (unsigned __int64 *)&v78, a3);
  if ( !v23 )
  {
    v33 = v78;
    v34 = 48 * v78 + 16;
    v35 = (_QWORD *)sub_40B890(v34, v24, v25, v26, v27, v28, v29, v30, v31, v17, v18, v19, v20, v21, v22);
    v36 = v77;
    v16 = (unsigned __int64)v35;
    if ( !v35 )
      goto LABEL_40;
    v35[1] = v77;
    *v35 = v33;
    v37 = (__int64)(v35 + 2);
    v38 = v34 < 0x10 ? 16LL : 48 * v33 + 16;
    sub_412320(v37, 0, 48 * v33, v38 - 16);
    if ( v33 )
    {
      v53 = 2 * v8;
      v54 = v7 & 1;
      v55 = v16 + 56;
      v56 = 0;
      v76 = off_48FA10;
      v57 = 0;
      v75 = "INTERNAL";
      do
      {
        *(_QWORD *)(v55 - 8) = v55;
        if ( v54 )
        {
          v62 = (unsigned int)sub_42F110(*(_QWORD *)(v77 + v57 + 24), (__int64)v75, (__int64)v76) == 0;
          v58 = v78;
          if ( v62 )
            v53 |= 8u;
          if ( v78 - 1 <= v56 )
          {
LABEL_33:
            *(_DWORD *)(v16 + 48 * v56 + 32) = v53 | 1;
            break;
          }
        }
        else
        {
          v58 = v78;
          if ( v78 - 1 <= v56 )
            goto LABEL_33;
        }
        v59 = v77;
        *(_DWORD *)(v55 - 24) = v53;
        v60 = 8160 * *(_DWORD *)(v59 + v57 + 84);
        v61 = sub_40B890(v60, v45, v46, v47, v48, v49, v50, v51, v52, v39, v40, v41, v42, v43, v44);
        *(_QWORD *)(v55 - 40) = v61;
        if ( !v61 )
        {
          StatusReg = _ReadStatusReg(TPIDR_EL0);
          v64 = v56 - 1;
          v65 = *(_DWORD *)(StatusReg + 40);
          if ( v56 )
          {
            v66 = v16 + 48 * v56;
            do
            {
              v67 = *(_QWORD *)(v66 - 32);
              --v64;
              v66 -= 48LL;
              sub_40C1A0(v67, v45, v46, v47, v48, v49, v50, v51, v52);
            }
            while ( v64 != -1 );
          }
          sub_40C1A0(v16, v45, v46, v47, v48, v49, v50, v51, v52);
          v36 = v77;
          goto LABEL_38;
        }
        ++v56;
        *(_QWORD *)(v55 - 32) = v61 + v60;
        v57 += 104;
        v55 += 48LL;
      }
      while ( v58 > v56 );
    }
  }
  while ( 1 )
  {
    *a2 = v16;
    if ( v79 == qword_48DD60 )
      break;
    sub_412340();
LABEL_40:
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v65 = *(_DWORD *)(StatusReg + 40);
LABEL_38:
    v16 = 0;
    sub_416234(v36, v78);
    *(_DWORD *)(StatusReg + 40) = v65;
    v23 = 3;
  }
  return v23;
}
