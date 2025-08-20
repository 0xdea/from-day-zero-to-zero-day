__int64 __fastcall sub_402404(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x20
  int v8; // w4
  int v9; // w0
  int v10; // w3
  int v11; // w7
  int v12; // w4
  unsigned __int8 *v13; // x0
  unsigned __int8 *v14; // x21
  unsigned int v15; // w6
  unsigned int v16; // t1
  bool v17; // cc
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x21
  __int64 v21; // x23
  __int64 v22; // x0
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7
  unsigned __int8 *v31; // x22
  unsigned int v32; // w2
  unsigned __int8 *v33; // x5
  _BYTE *v34; // x4
  int v35; // w9
  unsigned int v36; // t1
  unsigned int v37; // w1
  __int64 v38; // x2
  int v40; // w0
  __int64 v41; // x0
  int v42; // w1
  double v43; // d0
  double v44; // d1
  double v45; // d2
  double v46; // d3
  double v47; // d4
  double v48; // d5
  double v49; // d6
  double v50; // d7
  _QWORD *v51; // x0
  __int64 v52; // x4
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x4
  unsigned __int64 StatusReg; // x21
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x0
  double v62; // d0
  double v63; // d1
  double v64; // d2
  double v65; // d3
  double v66; // d4
  double v67; // d5
  double v68; // d6
  double v69; // d7
  __int64 v70; // x19
  double v71; // d0
  double v72; // d1
  double v73; // d2
  double v74; // d3
  double v75; // d4
  double v76; // d5
  double v77; // d6
  double v78; // d7
  __int64 v79; // x20
  _QWORD v80[4]; // [xsp+28h] [xbp-28h] BYREF
  __int64 v81; // [xsp+48h] [xbp-8h]
  __int64 v82; // [xsp+70h] [xbp+20h]
  __int64 v83; // [xsp+78h] [xbp+28h]
  __int64 v84; // [xsp+80h] [xbp+30h]

  v7 = a1;
  v8 = *(_DWORD *)(a1 + 112);
  v81 = qword_48DD60;
  if ( v8 != -1 )
    goto LABEL_29;
  v9 = *a3;
  switch ( v9 )
  {
    case 'r':
      v10 = 0;
      v11 = 0;
      v12 = 8;
      v82 = v4;
      v83 = v5;
      break;
    case 'w':
      v10 = 576;
      v11 = 1;
      v12 = 4;
      v82 = v4;
      v83 = v5;
      break;
    case 'a':
      v10 = 1088;
      v11 = 1;
      v12 = 4100;
      v82 = v4;
      v83 = v5;
      break;
    default:
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
      goto LABEL_29;
  }
  v13 = a3 + 6;
  v14 = a3;
  do
  {
    v16 = *++a3;
    v15 = v16;
    v17 = v16 > 0x63;
    if ( v16 == 99 )
    {
      *(_DWORD *)(v7 + 116) |= 2u;
    }
    else if ( v17 )
    {
      switch ( v15 )
      {
        case 'm':
          *(_DWORD *)(v7 + 116) |= 1u;
          break;
        case 'x':
          v10 |= 0x80u;
          v14 = a3;
          break;
        case 'e':
          v10 |= 0x80000u;
          *(_DWORD *)(v7 + 116) |= 0x40u;
          break;
      }
    }
    else
    {
      if ( v15 == 44 )
        break;
      if ( v15 > 0x2C )
      {
        if ( v15 == 98 )
          v14 = a3;
      }
      else
      {
        if ( !v15 )
          break;
        if ( v15 == 43 )
        {
          v12 &= 0x1000u;
          v14 = a3;
          v11 = 2;
        }
      }
    }
  }
  while ( v13 != a3 );
  v18 = sub_401FF0(v7, a2, v10 | (unsigned int)v11, 0x1B6u, v12);
  if ( !v18 )
  {
    v4 = v82;
    v5 = v83;
    goto LABEL_29;
  }
  v19 = ((__int64 (__fastcall *)(unsigned __int8 *, const char *))loc_40E470)(v14 + 1, ",ccs=");
  if ( !v19 )
  {
    v4 = v82;
    v5 = v83;
    goto LABEL_30;
  }
  v20 = v19 + 5;
  v84 = v6;
  v21 = sub_40DF40(v19 + 5, 44) - (v19 + 5);
  v22 = sub_40B890(v21 + 3);
  v31 = (unsigned __int8 *)v22;
  if ( !v22 )
    goto LABEL_60;
  *(_BYTE *)(j_ifunc_40DC90(v22, v20, v21) + v21) = 0;
  v32 = *v31;
  if ( *v31 )
  {
    v33 = v31;
    v34 = v31;
    v35 = 0;
    while ( 1 )
    {
      v37 = (unsigned __int8)(v32 - 44);
      if ( v37 <= 0x33 )
        break;
      if ( (word_45E6A0[(unsigned __int8)v32] & 8) != 0 )
        goto LABEL_21;
LABEL_22:
      v36 = *++v33;
      v32 = v36;
      if ( !v36 )
      {
        v40 = v35 + 1;
        if ( v35 <= 1 )
          goto LABEL_44;
        goto LABEL_45;
      }
    }
    if ( (word_45E6A0[(unsigned __int8)v32] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v37) & 1 )
    {
      if ( v32 == 47 )
      {
        if ( v35 == 2 )
          goto LABEL_45;
        ++v35;
        *v34++ = 47;
      }
      goto LABEL_22;
    }
LABEL_21:
    *v34++ = dword_45DDA0[v32];
    goto LABEL_22;
  }
  v34 = v31;
  v40 = 1;
LABEL_44:
  v34 = (_BYTE *)(ifunc_40DE70(v34, 47, (unsigned int)(3 - v40)) + (unsigned int)(3 - v40));
LABEL_45:
  *v34 = 0;
  if ( !v31[2] )
  {
    v41 = 0;
    do
    {
      v42 = (unsigned __int8)dword_45DDA0[*(unsigned __int8 *)(v20 + v41)];
      v31[v41++] = v42;
    }
    while ( v42 );
  }
  if ( (unsigned int)sub_4106C4(v80, v31) )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v59 = v7;
    v7 = 22;
    sub_4022A4(v59, v43, v44, v45, v46, v47, v48, v49, v50);
    sub_40C1A0(v31);
    goto LABEL_56;
  }
  sub_40C1A0(v31);
  if ( v80[1] != 1 )
  {
LABEL_63:
    v38 = v81 - qword_48DD60;
    if ( v81 != qword_48DD60 )
      goto LABEL_59;
    v61 = sub_41F250("fcts.towc_nsteps == 1", "fileops.c", 322, "_IO_new_file_fopen");
    v70 = v61;
    if ( *(_DWORD *)(v61 + 112) != -1 )
    {
      if ( *(int *)(v61 + 192) <= 0 )
        sub_402270(
          v61,
          *(_QWORD *)(v61 + 32),
          *(_QWORD *)(v61 + 40) - *(_QWORD *)(v61 + 32),
          v62,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69);
      else
        sub_42A900(
          v61,
          *(_QWORD *)(*(_QWORD *)(v61 + 160) + 24LL),
          (__int64)(*(_QWORD *)(*(_QWORD *)(v61 + 160) + 32LL) - *(_QWORD *)(*(_QWORD *)(v61 + 160) + 24LL)) >> 2);
      if ( (*(_DWORD *)v70 & 0x40) == 0 )
      {
        v79 = *(_QWORD *)(v70 + 216);
        if ( (unsigned __int64)(v79 - (_QWORD)&unk_48DD70) > 0x92F )
          sub_401A50(v71, v72, v73, v74, v75, v76, v77, v78);
        (*(void (__fastcall **)(__int64))(v79 + 136))(v70);
      }
    }
    return sub_405410(v70, 0);
  }
  if ( v80[3] != 1 )
  {
    v38 = v81 - qword_48DD60;
    if ( v81 != qword_48DD60 )
      goto LABEL_59;
    sub_41F250("fcts.tomb_nsteps == 1", "fileops.c", 323, "_IO_new_file_fopen");
    goto LABEL_63;
  }
  v51 = *(_QWORD **)(v7 + 160);
  v52 = v80[0];
  v51[11] = 0;
  *v51 = v51[1];
  v53 = *(_QWORD *)(v7 + 160);
  v51[4] = v51[3];
  *(_QWORD *)(v53 + 96) = 0;
  v54 = *(_QWORD *)(v7 + 160);
  v4 = v82;
  v5 = v83;
  v6 = v84;
  v55 = *(_QWORD *)(v18 + 160);
  *(_QWORD *)(v7 + 152) = v54 + 104;
  *(_QWORD *)(v54 + 104) = v52;
  *(_QWORD *)(v54 + 128) = 1;
  a4 = v55 + 88;
  v56 = v80[2];
  *(_DWORD *)(v54 + 136) = 1;
  *(_QWORD *)(v54 + 144) = a4;
  *(_QWORD *)(v54 + 160) = v56;
  v57 = *(_QWORD *)(v54 + 224);
  *(_QWORD *)(v54 + 184) = 9;
  *(_DWORD *)(v54 + 192) = 1;
  *(_QWORD *)(v54 + 200) = a4;
  *(_QWORD *)(v7 + 216) = v57;
  *(_DWORD *)(v18 + 192) = 1;
LABEL_30:
  while ( 1 )
  {
    v38 = v81 - qword_48DD60;
    if ( v81 == qword_48DD60 )
      break;
    v82 = v4;
    v83 = v5;
    v84 = v6;
LABEL_59:
    sub_412340(&qword_48DD60, 0, v38, a4);
LABEL_60:
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v60 = v7;
    v7 = *(unsigned int *)(StatusReg + 40);
    sub_4022A4(v60, v23, v24, v25, v26, v27, v28, v29, v30);
LABEL_56:
    v6 = v84;
    *(_DWORD *)(StatusReg + 40) = v7;
    v4 = v82;
    v5 = v83;
LABEL_29:
    v18 = 0;
  }
  return v18;
}
