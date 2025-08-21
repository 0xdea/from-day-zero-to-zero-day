// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_433E00(
        _BYTE *a1,
        __int64 a2,
        __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10,
        long double a11,
        long double a12,
        long double a13,
        long double a14)
{
  __int64 v16; // x0
  __int64 v17; // x1
  __int16 *v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  long double v22; // q0
  long double v23; // q1
  long double v24; // q2
  long double v25; // q3
  long double v26; // q4
  long double v27; // q5
  long double v28; // q6
  long double v29; // q7
  _QWORD *v30; // x19
  _QWORD *v31; // x0
  _QWORD *v32; // x3
  _QWORD *v33; // x7
  const char *v34; // x1
  _QWORD *v35; // x0
  __int64 v36; // x4
  _QWORD *v37; // x2
  int v38; // w6
  __int64 *v39; // x19
  char v40; // w0
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 result; // x0
  __int64 v44; // x0
  __int64 v45; // x2
  unsigned __int16 v46; // w1
  _QWORD *v47; // x0
  __int64 v48; // x2
  __int64 v49; // x1
  _BYTE *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  long double v55; // q0
  long double v56; // q1
  long double v57; // q2
  long double v58; // q3
  long double v59; // q4
  long double v60; // q5
  long double v61; // q6
  long double v62; // q7
  unsigned __int64 v63; // x2
  __int64 v64; // x20
  __int64 v65; // x3
  unsigned int v66; // t1
  unsigned __int64 v67; // x0
  const char *v68; // x3
  _QWORD v69[2]; // [xsp+FC00h] [xbp-10h] BYREF
  __int64 v70; // [xsp+FC10h] [xbp+0h] BYREF

  v16 = sub_40B890(0x28u, a7, a8, a9, a10, a11, a12, a13, a14, a2, a3, a4, a5, a6);
  qword_48FB08 = v16;
  if ( !v16 )
  {
    v68 = "cannot create search path array";
    goto LABEL_38;
  }
  v30 = (_QWORD *)v16;
  v31 = (_QWORD *)sub_40B890(0x140u, v22, v23, v24, v25, v26, v27, v28, v29, v17, v18, v19, v20, v21);
  *v30 = v31;
  if ( !v31 )
    goto LABEL_39;
  v32 = &unk_45C2E0;
  v33 = v31 + 30;
  qword_496790 = (__int64)v31;
  v31[1] = "system search path";
  v31[2] = 0;
  v34 = "/usr/lib/aarch64-linux-gnu/";
  v31[3] = "/lib/aarch64-linux-gnu/";
  v31[4] = 23;
  v35 = v31 + 10;
  v36 = 27;
  *((_DWORD *)v35 - 10) = 0;
  *(v35 - 10) = v35;
  v30[1] = v35;
  v37 = v30 + 2;
  v35[1] = "system search path";
  v35[2] = 0;
  dword_48FB10 = 0;
  v35[3] = "/usr/lib/aarch64-linux-gnu/";
  v35[4] = 27;
  while ( 1 )
  {
    *((_DWORD *)v35 + 10) = 0;
    if ( v33 == v35 )
      break;
    ++v32;
    v34 += v36 + 1;
    v35 += 10;
    *v37++ = v35;
    v36 = v32[1];
    *(v35 - 10) = v35;
    v38 = *(unsigned __int8 *)v34;
    v35[1] = "system search path";
    v35[2] = 0;
    v35[3] = v34;
    v35[4] = v36;
    if ( v38 != 47 )
      sub_41F250("pelem->dirname[0] == '/'", (__int64)"dl-load.c", 0x2FEu, (__int64)"_dl_init_paths");
  }
  *v37 = 0;
  v39 = off_4914A8;
  qword_496A00 = 27;
  v40 = *((_WORD *)off_4914A8 + 434);
  *v33 = 0;
  if ( (v40 & 3) == 2 )
    sub_41F250("l->l_type != lt_loaded", (__int64)"dl-load.c", 0x313u, (__int64)"_dl_init_paths");
  v41 = v39[37];
  if ( v41 )
  {
    v42 = 0;
    if ( (*((_BYTE *)v39 + 870) & 0x20) != 0 )
      v42 = *v39;
    sub_433BD0(
      (__int64)(v39 + 127),
      (_BYTE *)(*(_QWORD *)(v39[13] + 8) + *(_QWORD *)(v41 + 8) + v42),
      (__int64)v39,
      (__int64)"RUNPATH");
    *((_DWORD *)v39 + 256) = 0;
    v39[110] = -1;
  }
  else
  {
    v48 = v39[23];
    v39[127] = -1;
    if ( v48 )
    {
      v49 = 0;
      if ( (*((_BYTE *)v39 + 870) & 0x20) != 0 )
        v49 = *v39;
      sub_433BD0(
        (__int64)(v39 + 110),
        (_BYTE *)(*(_QWORD *)(v39[13] + 8) + *(_QWORD *)(v48 + 8) + v49),
        (__int64)v39,
        (__int64)"RPATH");
      *((_DWORD *)v39 + 222) = 0;
    }
    else
    {
      v39[110] = -1;
    }
  }
  if ( !a1 || !*a1 )
  {
    result = -1;
    qword_48FAF8 = -1;
    return result;
  }
  v44 = ifunc_40DFD0(a1);
  v45 = v44 + 1;
  v46 = (v44 + 16) & 0xFFF0;
  v47 = (_QWORD *)((char *)v69 - ((v44 + 16) & 0xFFFFFFFFFFFF0000LL));
  while ( v69 != v47 )
    ;
  v69[0] = 0;
  if ( v46 >= 0x400uLL )
    STACK[0x10000] = 0;
  v50 = (_BYTE *)j_ifunc_40DC90(&v70, a1, v45);
  v63 = (unsigned __int8)*v50;
  v64 = (__int64)v50;
  if ( *v50 )
  {
    v53 = (__int64)v50;
    v65 = 1;
    do
    {
      LOBYTE(v51) = v63 - 58;
      v66 = *(unsigned __int8 *)++v53;
      v63 = v66;
      v51 = (unsigned __int8)v51;
      if ( (unsigned __int8)v51 < 2u )
        ++v65;
    }
    while ( (_DWORD)v63 );
    v52 = v65 + 1;
    v67 = 8 * v52;
  }
  else
  {
    v67 = 16;
  }
  qword_48FAF8 = sub_40B890(v67, v55, v56, v57, v58, v59, v60, v61, v62, v51, (__int16 *)v63, v52, v53, v54);
  if ( !qword_48FAF8 )
  {
LABEL_39:
    v68 = "cannot create cache for search path";
LABEL_38:
    sub_432250(12, 0, v22, 0, v68);
  }
  sub_433970(v64, qword_48FAF8, (__int64)":;", a2, 0, (__int64)v39);
  result = qword_48FAF8;
  if ( !*(_QWORD *)qword_48FAF8 )
  {
    sub_40C1A0(qword_48FAF8);
    result = -1;
    qword_48FAF8 = -1;
  }
  dword_48FB00 = 0;
  return result;
}
