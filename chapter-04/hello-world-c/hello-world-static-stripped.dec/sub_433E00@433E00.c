// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_433E00(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  void *v21; // x4
  void *v22; // x5
  void *v23; // x6
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  _QWORD *v32; // x19
  _QWORD *v33; // x0
  _QWORD *v34; // x3
  _QWORD *v35; // x7
  const char *v36; // x1
  _QWORD *v37; // x0
  __int64 v38; // x4
  _QWORD *v39; // x2
  int v40; // w6
  __int64 *v41; // x19
  char v42; // w0
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 result; // x0
  __int64 v46; // x0
  __int64 v47; // x2
  unsigned __int16 v48; // w1
  _QWORD *v49; // x0
  __int64 v50; // x2
  __int64 v51; // x1
  unsigned __int8 *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x3
  unsigned __int8 *v55; // x4
  void *v56; // x5
  void *v57; // x6
  double v58; // d0
  double v59; // d1
  double v60; // d2
  double v61; // d3
  double v62; // d4
  double v63; // d5
  double v64; // d6
  double v65; // d7
  __int64 v66; // x2
  __int64 v67; // x20
  __int64 v68; // x3
  unsigned int v69; // t1
  unsigned __int64 v70; // x0
  double v71; // d0
  double v72; // d1
  double v73; // d2
  double v74; // d3
  double v75; // d4
  double v76; // d5
  double v77; // d6
  double v78; // d7
  const char *v79; // x3
  _QWORD v80[2]; // [xsp+FC00h] [xbp-10h] BYREF
  __int64 v81; // [xsp+FC10h] [xbp+0h] BYREF

  v17 = sub_40B890(0x28u, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  qword_48FB08 = v17;
  if ( !v17 )
  {
    v79 = "cannot create search path array";
    goto LABEL_38;
  }
  v32 = (_QWORD *)v17;
  v33 = (_QWORD *)sub_40B890(0x140u, v24, v25, v26, v27, v28, v29, v30, v31, v18, v19, v20, v21, v22, v23);
  *v32 = v33;
  if ( !v33 )
    goto LABEL_39;
  v34 = qword_45C2E0;
  v35 = v33 + 30;
  qword_496790 = (__int64)v33;
  v33[1] = "system search path";
  v33[2] = 0;
  v36 = "/usr/lib/aarch64-linux-gnu/";
  v33[3] = "/lib/aarch64-linux-gnu/";
  v33[4] = 23;
  v37 = v33 + 10;
  v38 = 27;
  *((_DWORD *)v37 - 10) = 0;
  *(v37 - 10) = v37;
  v32[1] = v37;
  v39 = v32 + 2;
  v37[1] = "system search path";
  v37[2] = 0;
  dword_48FB10 = 0;
  v37[3] = "/usr/lib/aarch64-linux-gnu/";
  v37[4] = 27;
  while ( 1 )
  {
    *((_DWORD *)v37 + 10) = 0;
    if ( v35 == v37 )
      break;
    ++v34;
    v36 += v38 + 1;
    v37 += 10;
    *v39++ = v37;
    v38 = v34[1];
    *(v37 - 10) = v37;
    v40 = *(unsigned __int8 *)v36;
    v37[1] = "system search path";
    v37[2] = 0;
    v37[3] = v36;
    v37[4] = v38;
    if ( v40 != 47 )
      sub_41F250("pelem->dirname[0] == '/'", (__int64)"dl-load.c", 0x2FEu, (__int64)"_dl_init_paths");
  }
  *v39 = 0;
  v41 = off_4914A8;
  qword_496A00 = 27;
  v42 = *((_WORD *)off_4914A8 + 434);
  *v35 = 0;
  if ( (v42 & 3) == 2 )
    sub_41F250("l->l_type != lt_loaded", (__int64)"dl-load.c", 0x313u, (__int64)"_dl_init_paths");
  v43 = v41[37];
  if ( v43 )
  {
    v44 = 0;
    if ( (*((_BYTE *)v41 + 870) & 0x20) != 0 )
      v44 = *v41;
    sub_433BD0(
      (__int64)(v41 + 127),
      (_BYTE *)(*(_QWORD *)(v41[13] + 8) + *(_QWORD *)(v43 + 8) + v44),
      (__int64)v41,
      (__int64)"RUNPATH");
    *((_DWORD *)v41 + 256) = 0;
    v41[110] = -1;
  }
  else
  {
    v50 = v41[23];
    v41[127] = -1;
    if ( v50 )
    {
      v51 = 0;
      if ( (*((_BYTE *)v41 + 870) & 0x20) != 0 )
        v51 = *v41;
      sub_433BD0(
        (__int64)(v41 + 110),
        (_BYTE *)(*(_QWORD *)(v41[13] + 8) + *(_QWORD *)(v50 + 8) + v51),
        (__int64)v41,
        (__int64)"RPATH");
      *((_DWORD *)v41 + 222) = 0;
    }
    else
    {
      v41[110] = -1;
    }
  }
  if ( !a1 || !*a1 )
  {
    result = -1;
    qword_48FAF8 = -1;
    return result;
  }
  v46 = ifunc_40DFD0(a1);
  v47 = v46 + 1;
  v48 = (v46 + 16) & 0xFFF0;
  v49 = (_QWORD *)((char *)v80 - ((v46 + 16) & 0xFFFFFFFFFFFF0000LL));
  while ( v80 != v49 )
    ;
  v80[0] = 0;
  if ( v48 >= 0x400uLL )
    STACK[0x10000] = 0;
  v52 = (unsigned __int8 *)j_ifunc_40DC90(&v81, a1, v47);
  v66 = *v52;
  v67 = (__int64)v52;
  if ( *v52 )
  {
    v55 = v52;
    v68 = 1;
    do
    {
      LOBYTE(v53) = v66 - 58;
      v69 = *++v55;
      v66 = v69;
      v53 = (unsigned __int8)v53;
      if ( (unsigned __int8)v53 < 2u )
        ++v68;
    }
    while ( (_DWORD)v66 );
    v54 = v68 + 1;
    v70 = 8 * v54;
  }
  else
  {
    v70 = 16;
  }
  qword_48FAF8 = sub_40B890(v70, v58, v59, v60, v61, v62, v63, v64, v65, v53, v66, v54, v55, v56, v57);
  if ( !qword_48FAF8 )
  {
LABEL_39:
    v79 = "cannot create cache for search path";
LABEL_38:
    sub_432250(12, 0, 0, v79);
  }
  sub_433970(v67, qword_48FAF8, (__int64)":;", a2, 0, (__int64)v41);
  result = qword_48FAF8;
  if ( !*(_QWORD *)qword_48FAF8 )
  {
    sub_40C1A0(qword_48FAF8, v71, v72, v73, v74, v75, v76, v77, v78);
    result = -1;
    qword_48FAF8 = -1;
  }
  dword_48FB00 = 0;
  return result;
}
