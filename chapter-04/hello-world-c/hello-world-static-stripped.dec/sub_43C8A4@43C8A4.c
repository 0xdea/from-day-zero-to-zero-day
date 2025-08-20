double __fastcall sub_43C8A4(const char **a1, unsigned int a2)
{
  const char *v4; // x0
  int v5; // w0
  double result; // d0
  int v7; // w20
  size_t st_size; // x1
  unsigned __int64 StatusReg; // x23
  int v10; // w25
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  void *v14; // x4
  void *v15; // x5
  void *v16; // x6
  void *v17; // x21
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  __int64 v26; // x0
  int v27; // w1
  signed __int64 v28; // x26
  __int64 v29; // x0
  unsigned __int64 v30; // x27
  char *v31; // x28
  signed __int64 v32; // x0
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  signed __int64 v41; // x21
  const char *v42; // x23
  __int64 v43; // x20
  __int16 v44; // w24
  __int64 v45; // x3
  unsigned __int64 v46; // x0
  unsigned __int16 v47; // w3
  __int64 *v48; // x0
  __int64 v49; // x0
  __int64 v50; // x3
  int v51; // w0
  __int64 v52; // x0
  __int64 v53; // [xsp+0h] [xbp-100A0h] BYREF
  char v54[1008]; // [xsp+10h] [xbp-10090h] BYREF
  __int64 v55; // [xsp+400h] [xbp-FCA0h]
  _BYTE v56[24]; // [xsp+10000h] [xbp-A0h] BYREF
  struct stat var88; // [xsp+10018h] [xbp-88h] BYREF

  v4 = *a1;
  var88.__unused[1] = qword_48DD60;
  *((_DWORD *)a1 + 2) = 1;
  a1[2] = 0;
  v5 = sub_410EE0(v4, 0x80000);
  if ( v5 < 0 )
    goto LABEL_9;
  v7 = v5;
  if ( (sub_410930(v5, &var88) & 0x80000000) != 0 )
    goto LABEL_19;
  if ( (var88.st_nlink & 0xF000) == 0x4000 )
  {
    sub_410CD0(v7);
    v42 = *a1;
    v43 = ifunc_40DFD0(*a1);
    v44 = byte_456930[a2];
    v45 = v43 + (unsigned __int8)v44 + 21;
    v46 = v45 & 0xFFFFFFFFFFFF0000LL;
    v47 = v45 & 0xFFF0;
    v48 = (__int64 *)&v56[-v46];
    if ( v56 != (_BYTE *)v48 )
    {
      do
        v55 = 0;
      while ( &v53 != v48 );
    }
    v53 = 0;
    if ( v47 >= 0x400uLL )
      v55 = 0;
    v49 = j_ifunc_40DC90(v54, v42, v43);
    v50 = (unsigned __int8)asc_45B298[a2];
    qmemcpy((void *)(v49 + v43), "/SYS_", 5);
    j_ifunc_40DC90(v49 + v43 + 5, &aLcCollate[v50], (v44 + 1) & 0x1FF);
    v51 = sub_410EE0(v54, 0x80000);
    v7 = v51;
    if ( v51 < 0 )
      goto LABEL_9;
    if ( (sub_410930(v51, &var88) & 0x80000000) != 0 )
    {
LABEL_19:
      sub_410CD0(v7);
      goto LABEL_9;
    }
  }
  st_size = var88.st_size;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v10 = *(_DWORD *)(StatusReg + 40);
  v17 = (void *)sub_4117E0(0, st_size, 1, 2, v7, 0);
  if ( v17 == (void *)-1LL )
  {
    if ( *(_DWORD *)(StatusReg + 40) != 38 )
      goto LABEL_19;
    v28 = var88.st_size;
    v29 = sub_40B890(var88.st_size, v18, v19, v20, v21, v22, v23, v24, v25, v11, v12, v13, v14, v15, v16);
    v30 = v29;
    if ( !v29 )
      goto LABEL_19;
    v31 = (char *)v29;
    if ( v28 > 0 )
    {
      while ( 1 )
      {
        v32 = sub_410FC0(v7, v31, v28);
        v41 = v32;
        if ( v32 <= 0 )
          break;
        v28 -= v32;
        v31 += v32;
        if ( v28 <= 0 )
          goto LABEL_27;
      }
      sub_40C1A0(v30, v33, v34, v35, v36, v37, v38, v39, v40);
      if ( !v41 )
        *(_DWORD *)(StatusReg + 40) = 22;
      goto LABEL_19;
    }
LABEL_27:
    *(_DWORD *)(StatusReg + 40) = v10;
    sub_410CD0(v7);
    v26 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, __off_t))loc_43C1F0)(a2, v30, var88.st_size);
    v27 = 0;
    if ( v26 )
      goto LABEL_8;
  }
  else
  {
    sub_410CD0(v7);
    if ( !v17 )
      goto LABEL_9;
    v26 = ((__int64 (__fastcall *)(_QWORD, void *, __off_t))loc_43C1F0)(a2, v17, var88.st_size);
    if ( v26 )
    {
      v27 = 1;
LABEL_8:
      *(_QWORD *)v26 = 0;
      *(_DWORD *)(v26 + 24) = v27;
      a1[2] = (const char *)v26;
      goto LABEL_9;
    }
    sub_4118C0(v17, var88.st_size);
  }
LABEL_9:
  if ( var88.__unused[1] != qword_48DD60 )
  {
    v52 = sub_412340();
    return sub_43CB64(v52);
  }
  return result;
}
