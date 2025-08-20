__int64 *__fastcall sub_401BC0(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // x21
  __int64 v10; // x30
  __int64 v12; // x20
  unsigned int v13; // w0
  __int64 v14; // x20
  __int64 v15; // x3
  void *v16; // x1
  __int64 *result; // x0
  int v18; // w0
  __int64 v19; // x4
  __int64 v20; // x1
  unsigned __int64 v21; // x2
  unsigned __int64 v22; // x1
  __int64 v23; // x5
  __int64 v24; // x0
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 v32; // x19
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  __int64 v41; // x20
  _QWORD *v42; // x3
  void *v43; // x1
  __int64 v44; // x0
  bool v45; // zf
  __int64 v46; // x20
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x0
  void *v52; // x2
  bool v53; // cc
  __int64 v54; // x0
  _BYTE v55[16]; // [xsp+8h] [xbp-138h] BYREF
  int v56; // [xsp+18h] [xbp-128h]
  __int64 v57; // [xsp+38h] [xbp-108h]
  __int64 v58; // [xsp+88h] [xbp-B8h]
  _QWORD *v59; // [xsp+90h] [xbp-B0h]
  __int64 v60; // [xsp+98h] [xbp-A8h]
  __int64 v61; // [xsp+A0h] [xbp-A0h]
  __int64 v62; // [xsp+A8h] [xbp-98h]
  _BYTE v63[16]; // [xsp+B8h] [xbp-88h] BYREF
  int v64; // [xsp+C8h] [xbp-78h]
  __int64 v65; // [xsp+E8h] [xbp-58h]
  __int64 v66; // [xsp+138h] [xbp-8h]
  _QWORD v67[6]; // [xsp+140h] [xbp+0h] BYREF

  v12 = *(_QWORD *)(a1 + 216);
  v66 = qword_48DD60;
  if ( (unsigned __int64)(v12 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(a2, a3, a4, a5, a6, a7, a8, a9);
  v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(v12 + 144))(a1, v63);
  v14 = v13;
  if ( !v13 && (v64 & 0xF000) == 0x8000 )
  {
    v9 = v65;
    if ( v65 )
    {
      v18 = sub_4110B0();
      v19 = *(_QWORD *)(a1 + 56);
      v20 = -(__int64)v18;
      v21 = (v9 - 1 + v18) & v20;
      v15 = *(_QWORD *)(a1 + 64) - v19 - 1 + v18;
      v22 = v15 & v20;
      if ( v21 < v22 )
      {
        sub_4118C0(v19 + v21, v22 - v21);
        v19 = *(_QWORD *)(a1 + 56);
        v9 = v65;
        v23 = v19 + v65;
LABEL_13:
        v25 = *(_QWORD *)(a1 + 8);
        v24 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v19;
        v26 = *(_QWORD *)(a1 + 144);
        *(_QWORD *)(a1 + 64) = v23;
        v27 = v26 - (v24 - v25);
        *(_QWORD *)(a1 + 144) = v27;
        if ( v27 >= v9 )
        {
          *(_QWORD *)(a1 + 8) = v23;
          *(_QWORD *)(a1 + 16) = v23;
        }
        else
        {
          v28 = *(unsigned int *)(a1 + 112);
          *(_QWORD *)(a1 + 8) = v19 + v27;
          *(_QWORD *)(a1 + 16) = v23;
          v29 = sub_410980(v28, v9, 0);
          v30 = *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56);
          if ( v30 == v29 )
            *(_QWORD *)(a1 + 144) = v30;
          else
            *(_DWORD *)a1 |= 0x20u;
        }
        goto LABEL_8;
      }
      v23 = v19 + v9;
      if ( v21 <= v22 )
        goto LABEL_13;
      v31 = sub_411980(*(_QWORD *)(a1 + 56));
      v19 = v31;
      if ( v31 != -1 )
      {
        v9 = v65;
        *(_QWORD *)(a1 + 56) = v31;
        v23 = v31 + v9;
        goto LABEL_13;
      }
    }
  }
  sub_4118C0(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56));
  v15 = *(_QWORD *)(a1 + 160);
  v16 = &unk_48E0B8;
  if ( *(int *)(a1 + 192) <= 0 )
    v16 = &unk_48DEC0;
  *(_OWORD *)(a1 + 8) = 0u;
  *(_QWORD *)(a1 + 24) = 0;
  v14 = 1;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_QWORD *)(a1 + 216) = v16;
  *(_QWORD *)(v15 + 224) = &unk_48E0B8;
LABEL_8:
  if ( v66 == qword_48DD60 )
    return (__int64 *)(unsigned int)v14;
  v67[4] = v9;
  v59 = v67;
  v60 = v10;
  v61 = a1;
  v62 = v14;
  v32 = sub_412340(&qword_48DD60, 0, v66 - qword_48DD60, v15);
  v41 = *(_QWORD *)(v32 + 216);
  v58 = qword_48DD60;
  if ( (unsigned __int64)(v41 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(v33, v34, v35, v36, v37, v38, v39, v40);
  if ( !(*(unsigned int (__fastcall **)(__int64, _BYTE *))(v41 + 144))(v32, v55) && (v56 & 0xF000) == 0x8000 && v57 )
  {
    v44 = *(_QWORD *)(v32 + 144);
    v45 = v57 >= v44 || v44 == -1;
    if ( v45 )
    {
      v46 = sub_4117E0(0, v57, 1, 1, *(unsigned int *)(v32 + 112), 0);
      if ( v46 != -1 )
      {
        v47 = sub_410980(*(unsigned int *)(v32 + 112), v57, 0);
        if ( v57 == v47 )
        {
          IO_setb(v32, v46, v46 + v57, 0);
          *(_QWORD *)(v32 + 24) = v46;
          v48 = *(_QWORD *)(v32 + 144);
          v49 = v57;
          v45 = v48 == -1;
          v50 = *(_QWORD *)(v32 + 160);
          v51 = v46 + v48;
          v52 = &unk_48E160;
          if ( v45 )
            v51 = v46;
          v53 = *(_DWORD *)(v32 + 192) <= 0;
          v42 = &unk_48DF68;
          *(_QWORD *)(v32 + 8) = v51;
          *(_QWORD *)(v32 + 16) = v46 + v49;
          if ( v53 )
            v52 = &unk_48DF68;
          *(_QWORD *)(v32 + 144) = v49;
          *(_QWORD *)(v32 + 216) = v52;
          *(_QWORD *)(v50 + 224) = &unk_48E160;
          goto LABEL_30;
        }
        sub_4118C0(v46, v57);
        *(_QWORD *)(v32 + 144) = -1;
      }
    }
  }
  v42 = *(_QWORD **)(v32 + 160);
  v43 = &unk_48E0B8;
  if ( *(int *)(v32 + 192) <= 0 )
    v43 = &unk_48DEC0;
  *(_QWORD *)(v32 + 216) = v43;
  v42[28] = &unk_48E0B8;
LABEL_30:
  result = &qword_48DD60;
  if ( v58 != qword_48DD60 )
  {
    v54 = sub_412340(&qword_48DD60, 0, v58 - qword_48DD60, v42);
    return (__int64 *)sub_401F70(v54);
  }
  return result;
}
