void *__fastcall sub_41F380(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x0
  __int64 v9; // x19
  void *result; // x0
  __int64 v11; // x0
  _QWORD *v12; // x20
  __int64 v13; // t1
  __int64 v14; // x0
  __int64 v15; // x26
  unsigned __int64 v16; // x24
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  void *v20; // x4
  void *v21; // x5
  void *v22; // x6
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned int v34; // w24
  __int64 v35; // x0
  double v36; // d0
  double v37; // d1
  double v38; // d2
  double v39; // d3
  double v40; // d4
  double v41; // d5
  double v42; // d6
  double v43; // d7
  __int64 v44; // x0
  _QWORD *v45; // x20
  __int64 v46; // t1
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  double v50; // d0
  double v51; // d1
  double v52; // d2
  double v53; // d3
  double v54; // d4
  double v55; // d5
  double v56; // d6
  double v57; // d7
  unsigned __int64 *v58; // x19
  unsigned __int64 v59; // x0
  unsigned __int64 *v60; // x20
  unsigned __int64 v61; // x0
  double v62; // d0
  double v63; // d1
  double v64; // d2
  double v65; // d3
  double v66; // d4
  double v67; // d5
  double v68; // d6
  double v69; // d7
  __int64 v70; // [xsp+40h] [xbp-30h] BYREF
  __int64 v71; // [xsp+48h] [xbp-28h] BYREF
  __int64 v72; // [xsp+50h] [xbp-20h] BYREF
  __int64 v73; // [xsp+58h] [xbp-18h] BYREF
  unsigned __int64 v74; // [xsp+60h] [xbp-10h] BYREF
  __int64 v75; // [xsp+68h] [xbp-8h]

  v75 = qword_48DD60;
  sub_42DD20(&unk_4968F0, 0);
  v8 = ifunc_40DFD0(a1);
  v9 = sub_421300(&qword_496928, a1, v8 + 1, 0, a2, 0, 0, 0, 0, a3, 0);
  sub_42DFB0(&unk_4968F0);
  if ( v9 )
  {
    if ( *(int *)(v9 + 8) <= 0 )
      sub_41F630(v9, a4);
    if ( !*(_QWORD *)(v9 + 16) )
    {
      v11 = *(_QWORD *)(v9 + 32);
      if ( v11 )
      {
        v12 = (_QWORD *)(v9 + 32);
        do
        {
          if ( *(int *)(v11 + 8) <= 0 )
            sub_41F630(v11, a4);
          if ( *(_QWORD *)(*v12 + 16LL) )
            break;
          v13 = v12[1];
          ++v12;
          v11 = v13;
        }
        while ( v13 );
      }
    }
  }
  else
  {
    v14 = sub_4210F0(a2);
    v15 = v14;
    if ( v14 )
    {
      v16 = ifunc_40DFD0(v14) + 1;
      v31 = sub_40B890(v16, v23, v24, v25, v26, v27, v28, v29, v30, v17, v18, v19, v20, v21, v22);
      a2 = v31;
      if ( !v31 )
        goto LABEL_5;
      sub_412300(v31, v15, v16, v16);
    }
    v34 = sub_421970(a2, &v70, &v71, &v72, &v73, &v74);
    if ( v34 != -1 )
    {
      sub_42E1E0(&unk_4968F0, v32, v33);
      v35 = ifunc_40DFD0(a1);
      v9 = sub_421300(&qword_496928, a1, v35 + 1, v34, v70, v72, v73, v74, v71, a3, 1);
      sub_42DFB0(&unk_4968F0);
      if ( v9 )
      {
        if ( *(int *)(v9 + 8) <= 0 )
          sub_41F630(v9, a4);
        if ( !*(_QWORD *)(v9 + 16) )
        {
          v44 = *(_QWORD *)(v9 + 32);
          if ( v44 )
          {
            v45 = (_QWORD *)(v9 + 32);
            do
            {
              if ( *(int *)(v44 + 8) <= 0 )
                sub_41F630(v44, a4);
              if ( *(_QWORD *)(*v45 + 16LL) )
                break;
              v46 = v45[1];
              ++v45;
              v44 = v46;
            }
            while ( v46 );
          }
        }
        if ( v15 )
          sub_40C1A0(a2, v36, v37, v38, v39, v40, v41, v42, v43);
      }
      if ( (v34 & 1) != 0 )
        sub_40C1A0(v74, v36, v37, v38, v39, v40, v41, v42, v43);
    }
  }
LABEL_5:
  if ( v75 == qword_48DD60 )
    return (void *)v9;
  sub_412340();
  result = &unk_496000;
  v58 = (unsigned __int64 *)qword_496928;
  if ( qword_496928 )
  {
    do
    {
      v59 = v58[2];
      if ( v59 )
        v50 = sub_420B80(v59, v47, v48, v49);
      v60 = (unsigned __int64 *)v58[3];
      sub_40C1A0(*v58, v50, v51, v52, v53, v54, v55, v56, v57);
      v61 = (unsigned __int64)v58;
      v58 = v60;
      result = (void *)sub_40C1A0(v61, v62, v63, v64, v65, v66, v67, v68, v69);
    }
    while ( v60 );
  }
  return result;
}
