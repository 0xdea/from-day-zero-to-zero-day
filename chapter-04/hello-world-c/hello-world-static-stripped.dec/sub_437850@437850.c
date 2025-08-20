_QWORD *__fastcall sub_437850(unsigned __int8 *a1, __int64 a2, char a3, _QWORD *a4, char a5, __int64 a6)
{
  __int64 v12; // x24
  __int64 v13; // x2
  __int64 v14; // x3
  void *v15; // x4
  void *v16; // x5
  void *v17; // x6
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  _QWORD *v26; // x0
  _QWORD *v27; // x20
  __int64 v28; // x0
  int v29; // w27
  __int16 v30; // w2
  unsigned __int8 *v31; // x0
  __int16 v32; // w1
  _QWORD *v33; // x2
  __int64 *v34; // x0
  __int64 *v35; // x1
  int v36; // w1
  _QWORD *v37; // x0
  _QWORD *v38; // x3
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  void *v43; // x4
  void *v44; // x5
  void *v45; // x6
  double v46; // d0
  double v47; // d1
  double v48; // d2
  double v49; // d3
  double v50; // d4
  double v51; // d5
  double v52; // d6
  double v53; // d7
  __int64 v54; // x25
  __int64 v55; // x23
  unsigned __int64 v56; // x21
  unsigned __int64 v57; // x19
  _DWORD *v58; // x24
  __int64 v59; // x0
  __int64 v60; // x2
  __int64 v61; // x3
  void *v62; // x4
  void *v63; // x5
  void *v64; // x6
  unsigned __int64 v65; // x22
  __int64 v66; // x1
  __int64 v67; // x0
  _BYTE *v68; // x0
  _BYTE *v69; // x2
  int v70; // t1

  v12 = ifunc_40DFD0(a2);
  v26 = (_QWORD *)sub_40CCB0(v12 + 1249, 1u, v18, v19, v20, v21, v22, v23, v24, v25, v13, v14, v15, v16, v17);
  v27 = v26;
  if ( !v26 )
    return v27;
  v26[5] = v26;
  v26[7] = v26 + 153;
  v26[99] = v26 + 152;
  v28 = j_ifunc_40DC90(v26 + 156, a2, v12 + 1);
  v29 = *a1;
  v30 = *((_WORD *)v27 + 434);
  v27[153] = v28;
  v31 = (unsigned __int8 *)(v28 + v12);
  v32 = dword_496770;
  if ( v29 )
    v31 = a1;
  v27[1] = v31;
  *((_WORD *)v27 + 434) = v30 & 0xFFFC | a3 & 3;
  *((_DWORD *)v27 + 310) = 1;
  if ( (v32 & 0x100) == 0 )
    *((_DWORD *)v27 + 263) = 1;
  v33 = v27 + 117;
  v27[6] = a6;
  v27[101] = a4;
  v34 = (&off_4914A8)[21 * a6];
  v27[121] = 4;
  v27[122] = v27 + 117;
  if ( v34 )
  {
    v35 = v34 + 97;
    v27[117] = v34 + 97;
    if ( !a4 )
    {
      v37 = v27;
      goto LABEL_27;
    }
    v36 = 1;
  }
  else
  {
    v36 = 0;
    if ( !a4 )
    {
      v38 = v27 + 97;
LABEL_11:
      *v33 = v38;
      goto LABEL_12;
    }
  }
  do
  {
    v37 = a4;
    a4 = (_QWORD *)a4[101];
  }
  while ( a4 );
  v38 = v37 + 97;
  if ( !v36 )
    goto LABEL_11;
  v35 = (__int64 *)v27[117];
LABEL_27:
  v38 = v37 + 97;
  if ( v35 != v37 + 97 )
  {
    if ( (a5 & 8) != 0 )
      v27[118] = v35;
    else
      v33 = v27 + 118;
    goto LABEL_11;
  }
LABEL_12:
  v27[123] = v27 + 97;
  if ( v29 )
  {
    v39 = ifunc_40DFD0(a1);
    v54 = v39 + 1;
    v55 = v39;
    v56 = v39 + 1;
    v57 = 0;
    if ( v29 == 47 )
    {
      v67 = sub_40B890(v39 + 1, v46, v47, v48, v49, v50, v51, v52, v53, v40, v41, v42, v43, v44, v45);
      v57 = v67;
      if ( !v67 )
      {
LABEL_35:
        v27[114] = -1;
        return v27;
      }
    }
    else
    {
      v58 = (_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      while ( 1 )
      {
        v56 += 128LL;
        v59 = sub_40C434(v57, v56, v46, v47, v48, v49, v50, v51, v52, v53, v41, v42, v43, v44, v45);
        v65 = v57;
        v57 = v59;
        if ( !v59 )
        {
          v57 = v65;
LABEL_37:
          sub_40C1A0(v57, v46, v47, v48, v49, v50, v51, v52, v53);
          goto LABEL_35;
        }
        if ( sub_4305A0(v59, v56 - v55 - 1, v46, v47, v48, v49, v50, v51, v52, v53, v60, v61, v62, v63, v64) )
          break;
        if ( *v58 != 34 )
          goto LABEL_37;
      }
      v66 = ifunc_40DFD0(v57);
      v67 = v57 + v66;
      if ( *(_BYTE *)(v57 + v66 - 1) != 47 )
      {
        ++v67;
        *(_BYTE *)(v57 + v66) = 47;
      }
    }
    v68 = (_BYTE *)(j_ifunc_40DC90(v67, a1, v54) + v54);
    do
    {
      v69 = v68;
      v70 = (unsigned __int8)*--v68;
    }
    while ( v70 != 47 );
    v27[114] = v57;
    if ( (_BYTE *)v57 == v68 )
      v68 = v69;
    *v68 = 0;
  }
  return v27;
}
