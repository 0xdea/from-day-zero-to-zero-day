__int64 __fastcall sub_402404(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x20
  int v8; // w4
  int v9; // w0
  __int64 v10; // x5
  int v11; // w3
  int v12; // w7
  __int64 v13; // x4
  unsigned __int8 *v14; // x0
  unsigned __int8 *v15; // x21
  unsigned int v16; // w6
  unsigned int v17; // t1
  bool v18; // cc
  __int64 v19; // x19
  __int64 v20; // x0
  __int64 v21; // x21
  __int64 v22; // x23
  __int64 v23; // x0
  unsigned __int8 *v24; // x22
  int v25; // w2
  unsigned __int8 *v26; // x5
  _BYTE *v27; // x4
  int v28; // w9
  int v29; // t1
  unsigned int v30; // w1
  __int64 v31; // x2
  int v33; // w0
  __int64 v34; // x0
  int v35; // w1
  _QWORD *v36; // x0
  __int64 v37; // x4
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x4
  unsigned __int64 StatusReg; // x21
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x19
  __int64 v48; // x20
  _QWORD v49[4]; // [xsp+28h] [xbp-28h] BYREF
  __int64 v50; // [xsp+48h] [xbp-8h]
  __int64 v51; // [xsp+70h] [xbp+20h]
  __int64 v52; // [xsp+78h] [xbp+28h]
  __int64 v53; // [xsp+80h] [xbp+30h]

  v7 = a1;
  v8 = *(_DWORD *)(a1 + 112);
  v50 = qword_48DD60;
  if ( v8 != -1 )
    goto LABEL_29;
  v9 = *a3;
  v10 = (unsigned int)a4;
  switch ( v9 )
  {
    case 'r':
      v11 = 0;
      v12 = 0;
      v13 = 8;
      v51 = v4;
      v52 = v5;
      break;
    case 'w':
      v11 = 576;
      v12 = 1;
      v13 = 4;
      v51 = v4;
      v52 = v5;
      break;
    case 'a':
      v11 = 1088;
      v12 = 1;
      v13 = 4100;
      v51 = v4;
      v52 = v5;
      break;
    default:
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
      goto LABEL_29;
  }
  v14 = a3 + 6;
  v15 = a3;
  do
  {
    v17 = *++a3;
    v16 = v17;
    v18 = v17 > 0x63;
    if ( v17 == 99 )
    {
      *(_DWORD *)(v7 + 116) |= 2u;
    }
    else if ( v18 )
    {
      switch ( v16 )
      {
        case 'm':
          *(_DWORD *)(v7 + 116) |= 1u;
          break;
        case 'x':
          v11 |= 0x80u;
          v15 = a3;
          break;
        case 'e':
          v11 |= 0x80000u;
          *(_DWORD *)(v7 + 116) |= 0x40u;
          break;
      }
    }
    else
    {
      if ( v16 == 44 )
        break;
      if ( v16 > 0x2C )
      {
        if ( v16 == 98 )
          v15 = a3;
      }
      else
      {
        if ( !v16 )
          break;
        if ( v16 == 43 )
        {
          v13 &= 0x1000u;
          v15 = a3;
          v12 = 2;
        }
      }
    }
  }
  while ( v14 != a3 );
  v19 = sub_401FF0(v7, a2, v11 | (unsigned int)v12, 438, v13, v10);
  if ( !v19 )
  {
    v4 = v51;
    v5 = v52;
    goto LABEL_29;
  }
  v20 = ((__int64 (__fastcall *)(unsigned __int8 *, const char *))loc_40E470)(v15 + 1, ",ccs=");
  if ( !v20 )
  {
    v4 = v51;
    v5 = v52;
    goto LABEL_30;
  }
  v21 = v20 + 5;
  v53 = v6;
  v22 = sub_40DF40(v20 + 5, 44) - (v20 + 5);
  v23 = sub_40B890(v22 + 3);
  v24 = (unsigned __int8 *)v23;
  if ( !v23 )
    goto LABEL_60;
  *(_BYTE *)(j_ifunc_40DC90(v23, v21, v22) + v22) = 0;
  v25 = *v24;
  if ( *v24 )
  {
    v26 = v24;
    v27 = v24;
    v28 = 0;
    while ( 1 )
    {
      v30 = (unsigned __int8)(v25 - 44);
      if ( v30 <= 0x33 )
        break;
      if ( (word_45E6A0[(unsigned __int8)v25] & 8) != 0 )
        goto LABEL_21;
LABEL_22:
      v29 = *++v26;
      v25 = v29;
      if ( !v29 )
      {
        v33 = v28 + 1;
        if ( v28 <= 1 )
          goto LABEL_44;
        goto LABEL_45;
      }
    }
    if ( (word_45E6A0[(unsigned __int8)v25] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v30) & 1 )
    {
      if ( v25 == 47 )
      {
        if ( v28 == 2 )
          goto LABEL_45;
        ++v28;
        *v27++ = 47;
      }
      goto LABEL_22;
    }
LABEL_21:
    *v27++ = dword_45DDA0[v25];
    goto LABEL_22;
  }
  v27 = v24;
  v33 = 1;
LABEL_44:
  v27 = (_BYTE *)(ifunc_40DE70(v27, 47, (unsigned int)(3 - v33)) + (unsigned int)(3 - v33));
LABEL_45:
  *v27 = 0;
  if ( !v24[2] )
  {
    v34 = 0;
    do
    {
      v35 = (unsigned __int8)dword_45DDA0[*(unsigned __int8 *)(v21 + v34)];
      v24[v34++] = v35;
    }
    while ( v35 );
  }
  if ( (unsigned int)sub_4106C4(v49, v24) )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v44 = v7;
    v7 = 22;
    sub_4022A4(v44);
    sub_40C1A0(v24);
    goto LABEL_56;
  }
  sub_40C1A0(v24);
  if ( v49[1] != 1 )
  {
LABEL_63:
    v31 = v50 - qword_48DD60;
    if ( v50 != qword_48DD60 )
      goto LABEL_59;
    v46 = sub_41F250("fcts.towc_nsteps == 1", "fileops.c", 322, "_IO_new_file_fopen");
    v47 = v46;
    if ( *(_DWORD *)(v46 + 112) != -1 )
    {
      if ( *(int *)(v46 + 192) <= 0 )
        sub_402270(v46, *(_QWORD *)(v46 + 32), *(_QWORD *)(v46 + 40) - *(_QWORD *)(v46 + 32));
      else
        sub_42A900(
          v46,
          *(_QWORD *)(*(_QWORD *)(v46 + 160) + 24LL),
          (__int64)(*(_QWORD *)(*(_QWORD *)(v46 + 160) + 32LL) - *(_QWORD *)(*(_QWORD *)(v46 + 160) + 24LL)) >> 2);
      if ( (*(_DWORD *)v47 & 0x40) == 0 )
      {
        v48 = *(_QWORD *)(v47 + 216);
        if ( (unsigned __int64)(v48 - (_QWORD)&unk_48DD70) > 0x92F )
          sub_401A50();
        (*(void (__fastcall **)(__int64))(v48 + 136))(v47);
      }
    }
    return sub_405410(v47, 0);
  }
  if ( v49[3] != 1 )
  {
    v31 = v50 - qword_48DD60;
    if ( v50 != qword_48DD60 )
      goto LABEL_59;
    sub_41F250("fcts.tomb_nsteps == 1", "fileops.c", 323, "_IO_new_file_fopen");
    goto LABEL_63;
  }
  v36 = *(_QWORD **)(v7 + 160);
  v37 = v49[0];
  v36[11] = 0;
  *v36 = v36[1];
  v38 = *(_QWORD *)(v7 + 160);
  v36[4] = v36[3];
  *(_QWORD *)(v38 + 96) = 0;
  v39 = *(_QWORD *)(v7 + 160);
  v4 = v51;
  v5 = v52;
  v6 = v53;
  v40 = *(_QWORD *)(v19 + 160);
  *(_QWORD *)(v7 + 152) = v39 + 104;
  *(_QWORD *)(v39 + 104) = v37;
  *(_QWORD *)(v39 + 128) = 1;
  a4 = v40 + 88;
  v41 = v49[2];
  *(_DWORD *)(v39 + 136) = 1;
  *(_QWORD *)(v39 + 144) = a4;
  *(_QWORD *)(v39 + 160) = v41;
  v42 = *(_QWORD *)(v39 + 224);
  *(_QWORD *)(v39 + 184) = 9;
  *(_DWORD *)(v39 + 192) = 1;
  *(_QWORD *)(v39 + 200) = a4;
  *(_QWORD *)(v7 + 216) = v42;
  *(_DWORD *)(v19 + 192) = 1;
LABEL_30:
  while ( 1 )
  {
    v31 = v50 - qword_48DD60;
    if ( v50 == qword_48DD60 )
      break;
    v51 = v4;
    v52 = v5;
    v53 = v6;
LABEL_59:
    sub_412340(&qword_48DD60, 0, v31, a4);
LABEL_60:
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v45 = v7;
    v7 = *(unsigned int *)(StatusReg + 40);
    sub_4022A4(v45);
LABEL_56:
    v6 = v53;
    *(_DWORD *)(StatusReg + 40) = v7;
    v4 = v51;
    v5 = v52;
LABEL_29:
    v19 = 0;
  }
  return v19;
}
