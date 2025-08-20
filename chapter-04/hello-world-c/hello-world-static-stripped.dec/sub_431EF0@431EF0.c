__int64 __fastcall sub_431EF0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x25
  __int64 v7; // x26
  __int64 v8; // x27
  __int64 v9; // x29
  __int64 v10; // x30
  __int64 result; // x0
  __int64 v12; // x0
  unsigned __int64 v13; // x1
  unsigned __int64 v14; // x20
  unsigned __int64 v15; // x22
  __int64 v16; // x3
  void *v17; // x4
  void *v18; // x5
  void *v19; // x6
  double v20; // d0
  double v21; // d1
  double v22; // d2
  double v23; // d3
  double v24; // d4
  double v25; // d5
  double v26; // d6
  double v27; // d7
  unsigned int *v28; // x0
  void *v29; // x4
  void *v30; // x5
  void *v31; // x6
  double v32; // d0
  double v33; // d1
  double v34; // d2
  double v35; // d3
  double v36; // d4
  double v37; // d5
  double v38; // d6
  double v39; // d7
  unsigned int *v40; // x21
  unsigned int v41; // w0
  unsigned __int64 v42; // x19
  unsigned __int8 *v43; // x1
  unsigned __int8 *v44; // x0
  unsigned __int64 v45; // x0
  unsigned __int8 *v46; // x2
  double v49; // d0
  double v50; // d1
  double v51; // d2
  double v52; // d3
  double v53; // d4
  double v54; // d5
  double v55; // d6
  double v56; // d7
  unsigned __int64 v57; // x1
  unsigned int v58; // w1
  double v59; // d0
  double v60; // d1
  double v61; // d2
  double v62; // d3
  double v63; // d4
  double v64; // d5
  double v65; // d6
  double v66; // d7
  __int64 v67; // x0
  unsigned __int8 *v68; // [xsp+8h] [xbp-98h] BYREF
  __int64 v69; // [xsp+10h] [xbp-90h] BYREF
  unsigned __int8 *v70; // [xsp+18h] [xbp-88h] BYREF
  unsigned __int8 *v71; // [xsp+20h] [xbp-80h] BYREF
  __int64 v72; // [xsp+28h] [xbp-78h]
  _QWORD *v73; // [xsp+30h] [xbp-70h]
  __int64 v74; // [xsp+38h] [xbp-68h]
  unsigned __int64 v75; // [xsp+60h] [xbp-40h]
  __int64 v76; // [xsp+68h] [xbp-38h]
  __int64 v77; // [xsp+70h] [xbp-30h]
  __int64 v78; // [xsp+78h] [xbp-28h]
  __int64 v79; // [xsp+80h] [xbp-20h]
  _QWORD v80[2]; // [xsp+90h] [xbp-10h] BYREF

  if ( a4 >= a3 )
    return j_ifunc_40DD80(a1, a2, a3);
  v80[0] = v9;
  v80[1] = v10;
  v12 = sub_431EB0();
  v73 = v80;
  v74 = v10;
  v14 = v13;
  v15 = v12;
  v72 = qword_48DD60;
  v28 = (unsigned int *)sub_428EF0(
                          (__int64)"/proc/self/maps",
                          "rce",
                          v20,
                          v21,
                          v22,
                          v23,
                          v24,
                          v25,
                          v26,
                          v27,
                          (__int64)&qword_48DD60,
                          v16,
                          v17,
                          v18,
                          v19);
  if ( v28 )
  {
    v40 = v28;
    v41 = *v28;
    *v40 = v41 | 0x8000;
    v68 = 0;
    v69 = 0;
    if ( (v41 & 0x10) == 0 )
    {
      v4 = v15 + v14;
      do
      {
        if ( sub_429370(
               (unsigned __int64 *)&v68,
               (__int64)&v69,
               10,
               (__int64)v40,
               v29,
               v30,
               v31,
               v32,
               v33,
               v34,
               v35,
               v36,
               v37,
               v38,
               v39) <= 0 )
          break;
        v42 = sub_423D50(v68, &v70, 16);
        v43 = v70;
        if ( v70 == v68 )
          break;
        v44 = ++v70;
        if ( *v43 != 45 )
          break;
        v45 = sub_423D50(v44, &v71, 16);
        v46 = v71;
        if ( v71 == v70 )
          break;
        ++v71;
        if ( *v46 != 32 )
          break;
        if ( v4 > v42 && v15 < v45 )
        {
          v71 = v46 + 2;
          if ( v46[1] != 114 )
            break;
          v71 = v46 + 3;
          if ( v46[2] != 45 )
            break;
          if ( v15 >= v42 && v4 <= v45 )
            goto LABEL_36;
          if ( v15 < v42 )
          {
            v57 = v14 - v4 + v42;
            v14 = v14 + v42 - v45;
            if ( v4 <= v45 )
              v14 = v57;
          }
          else
          {
            v14 = v15 + v14 - v45;
          }
          if ( !v14 )
          {
LABEL_36:
            sub_428AD0(v40, v32, v33, v34, v35, v36, v37, v38, v39);
            sub_40C1A0((unsigned __int64)v68, v59, v60, v61, v62, v63, v64, v65, v66);
            result = 1;
            goto LABEL_28;
          }
        }
      }
      while ( (*v40 & 0x10) == 0 );
    }
    sub_428AD0(v40, v32, v33, v34, v35, v36, v37, v38, v39);
    sub_40C1A0((unsigned __int64)v68, v49, v50, v51, v52, v53, v54, v55, v56);
    if ( v14 )
      goto LABEL_27;
  }
  else
  {
    v58 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( v58 > 0x18 || ((0x1002004uLL >> v58) & 1) == 0 )
    {
LABEL_27:
      result = 0xFFFFFFFFLL;
      goto LABEL_28;
    }
  }
  result = 1;
LABEL_28:
  if ( v72 != qword_48DD60 )
  {
    v75 = v4;
    v76 = v5;
    v77 = v6;
    v78 = v7;
    v79 = v8;
    v67 = sub_412340();
    sub_432150(v67);
  }
  return result;
}
