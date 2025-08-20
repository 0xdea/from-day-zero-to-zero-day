_QWORD *__fastcall dl_new_object(unsigned __int8 *a1, __int64 a2, char a3, _QWORD *a4, char a5, __int64 a6)
{
  __int64 v11; // x24
  __int64 v12; // x2
  __int64 v13; // x3
  void *v14; // x4
  void *v15; // x5
  void *v16; // x6
  double v17; // d0
  double v18; // d1
  double v19; // d2
  double v20; // d3
  double v21; // d4
  double v22; // d5
  double v23; // d6
  double v24; // d7
  _QWORD *v25; // x0
  _QWORD *v26; // x20
  __int64 v27; // x0
  int v28; // w27
  __int16 v29; // w2
  unsigned __int8 *v30; // x0
  __int16 v31; // w1
  _QWORD *v32; // x2
  __int64 *v33; // x0
  __int64 *v34; // x1
  int v35; // w1
  _QWORD *v36; // x0
  _QWORD *v37; // x3
  __int64 v38; // x0
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
  __int64 v53; // x25
  __int64 v54; // x23
  unsigned __int64 v55; // x21
  __int64 v56; // x19
  _DWORD *v57; // x24
  char *v58; // x0
  __int64 v59; // x2
  __int64 v60; // x3
  void *v61; // x4
  void *v62; // x5
  void *v63; // x6
  __int64 v64; // x22
  __int64 v65; // x1
  __int64 v66; // x0
  _BYTE *v67; // x0
  _BYTE *v68; // x2
  int v69; // t1

  v11 = strlen(a2);
  v25 = (_QWORD *)calloc(v11 + 1249, 1u, v17, v18, v19, v20, v21, v22, v23, v24, v12, v13, v14, v15, v16);
  v26 = v25;
  if ( !v25 )
    return v26;
  v25[5] = v25;
  v25[7] = v25 + 153;
  v25[99] = v25 + 152;
  v27 = j_memcpy(v25 + 156);
  v28 = *a1;
  v29 = *((_WORD *)v26 + 434);
  v26[153] = v27;
  v30 = (unsigned __int8 *)(v27 + v11);
  v31 = dl_debug_mask;
  if ( v28 )
    v30 = a1;
  v26[1] = v30;
  *((_WORD *)v26 + 434) = v29 & 0xFFFC | a3 & 3;
  *((_DWORD *)v26 + 310) = 1;
  if ( (v31 & 0x100) == 0 )
    *((_DWORD *)v26 + 263) = 1;
  v32 = v26 + 117;
  v26[6] = a6;
  v26[101] = a4;
  v33 = (&dl_ns)[21 * a6];
  v26[121] = 4;
  v26[122] = v26 + 117;
  if ( v33 )
  {
    v34 = v33 + 97;
    v26[117] = v33 + 97;
    if ( !a4 )
    {
      v36 = v26;
      goto LABEL_27;
    }
    v35 = 1;
  }
  else
  {
    v35 = 0;
    if ( !a4 )
    {
      v37 = v26 + 97;
LABEL_11:
      *v32 = v37;
      goto LABEL_12;
    }
  }
  do
  {
    v36 = a4;
    a4 = (_QWORD *)a4[101];
  }
  while ( a4 );
  v37 = v36 + 97;
  if ( !v35 )
    goto LABEL_11;
  v34 = (__int64 *)v26[117];
LABEL_27:
  v37 = v36 + 97;
  if ( v34 != v36 + 97 )
  {
    if ( (a5 & 8) != 0 )
      v26[118] = v34;
    else
      v32 = v26 + 118;
    goto LABEL_11;
  }
LABEL_12:
  v26[123] = v26 + 97;
  if ( v28 )
  {
    v38 = strlen(a1);
    v53 = v38 + 1;
    v54 = v38;
    v55 = v38 + 1;
    v56 = 0;
    if ( v28 == 47 )
    {
      v66 = malloc(v38 + 1, v45, v46, v47, v48, v49, v50, v51, v52, v39, v40, v41, v42, v43, v44);
      v56 = v66;
      if ( !v66 )
      {
LABEL_35:
        v26[114] = -1;
        return v26;
      }
    }
    else
    {
      v57 = (_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      while ( 1 )
      {
        v55 += 128LL;
        v58 = (char *)realloc(v56, v55, v45, v46, v47, v48, v49, v50, v51, v52, v40, v41, v42, v43, v44);
        v64 = v56;
        v56 = (__int64)v58;
        if ( !v58 )
        {
          v56 = v64;
LABEL_37:
          free(v56, v45, v46, v47, v48, v49, v50, v51, v52);
          goto LABEL_35;
        }
        if ( getcwd(v58, v55 - v54 - 1, v45, v46, v47, v48, v49, v50, v51, v52, v59, v60, v61, v62, v63) )
          break;
        if ( *v57 != 34 )
          goto LABEL_37;
      }
      v65 = strlen(v56);
      v66 = v56 + v65;
      if ( *(_BYTE *)(v56 + v65 - 1) != 47 )
      {
        ++v66;
        *(_BYTE *)(v56 + v65) = 47;
      }
    }
    v67 = (_BYTE *)(j_memcpy(v66) + v53);
    do
    {
      v68 = v67;
      v69 = (unsigned __int8)*--v67;
    }
    while ( v69 != 47 );
    v26[114] = v56;
    if ( (_BYTE *)v56 == v67 )
      v67 = v68;
    *v67 = 0;
  }
  return v26;
}
