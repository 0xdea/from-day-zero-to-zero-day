__int64 __fastcall sub_433030(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8)
{
  _QWORD *v8; // x10
  __int64 v13; // x0
  unsigned __int64 v14; // x1
  unsigned __int16 v15; // w0
  _QWORD *v16; // x1
  int *v17; // x20
  const char *v18; // x19
  _QWORD *v20; // x21
  int v21; // w3
  __int64 v22; // x0
  unsigned __int64 v23; // x22
  unsigned int v24; // w0
  __int16 *v25; // x2
  __int64 v26; // x4
  __int64 v27; // x5
  long double v28; // q0
  long double v29; // q1
  long double v30; // q2
  long double v31; // q3
  long double v32; // q4
  long double v33; // q5
  long double v34; // q6
  long double v35; // q7
  unsigned int v36; // w23
  __int64 v37; // x1
  __int64 v38; // x3
  __int64 *v39; // x21
  __int64 v40; // x0
  unsigned int v41; // w24
  __int64 v43; // x0
  int v44; // w1
  __int64 *v45; // x3
  unsigned int v46; // w0
  int v47; // w0
  int v48; // w0
  const char *v49; // x1
  _QWORD *v50; // x2
  __int64 *v51; // x5
  _QWORD *v52; // x2
  _QWORD *v53; // x5
  const char *v54; // x1
  const char *v55; // x27
  int v56; // w24
  int *v57; // x21
  _QWORD *v58; // x20
  _QWORD *v59; // x19
  __int64 v60; // x0
  const char *v61; // x0
  _QWORD *v62; // t1
  bool v63; // zf
  __int64 v64; // x0
  __int64 v65; // [xsp+0h] [xbp-20010h] BYREF
  char v66; // [xsp+10h] [xbp-20000h] BYREF
  __int64 v67; // [xsp+400h] [xbp-1FC10h]
  _QWORD v68[2]; // [xsp+10000h] [xbp-10010h] BYREF
  char v69; // [xsp+10010h] [xbp-10000h] BYREF
  __int64 v70; // [xsp+10400h] [xbp-FC10h]
  _BYTE v71[16]; // [xsp+20000h] [xbp-10h] BYREF
  int *v72; // [xsp+20078h] [xbp+68h]
  __int64 *v73; // [xsp+20080h] [xbp+70h]
  __int64 v74; // [xsp+20088h] [xbp+78h]
  _QWORD *v75; // [xsp+20090h] [xbp+80h]
  _QWORD *v76; // [xsp+20098h] [xbp+88h]
  __int64 *v77; // [xsp+200A0h] [xbp+90h]
  const char *v78; // [xsp+200A8h] [xbp+98h]
  const char *v79; // [xsp+200B0h] [xbp+A0h]
  _QWORD *v80; // [xsp+200B8h] [xbp+A8h]
  int *v81; // [xsp+200C0h] [xbp+B0h]
  __int64 **v82; // [xsp+200C8h] [xbp+B8h]
  __int64 v83; // [xsp+200D0h] [xbp+C0h]
  int v84; // [xsp+200D8h] [xbp+C8h]
  int v85; // [xsp+200DCh] [xbp+CCh]
  _QWORD *v86; // [xsp+200E0h] [xbp+D0h]
  __int64 *v87; // [xsp+200E8h] [xbp+D8h]
  _BYTE v88[16]; // [xsp+200F0h] [xbp+E0h] BYREF
  int v89; // [xsp+20100h] [xbp+F0h]

  v8 = (_QWORD *)*a4;
  if ( *a4 )
  {
    v13 = a2 + qword_496A00 + 15;
    v14 = v13 & 0xFFFFFFFFFFFF0000LL;
    v15 = v13 & 0xFFF0;
    v16 = &v71[-v14];
    if ( v71 != (_BYTE *)v16 )
    {
      do
        v70 = 0;
      while ( v68 != v16 );
    }
    v68[0] = 0;
    if ( v15 >= 0x400uLL )
      v70 = 0;
    v17 = &dword_496770;
    v18 = &v69;
    v77 = a4;
    v78 = "\t\t(%s from file %s)\n";
    v79 = 0;
    v81 = &dword_491570;
    v82 = &off_4914A8;
    v83 = a7;
    v85 = 0;
    v86 = v8;
    LODWORD(v87) = a3;
    while ( 1 )
    {
      v20 = (_QWORD *)*v86;
      v21 = *v17 & 1;
      if ( v21 )
      {
        v49 = (const char *)v20[1];
        if ( v49 != v79 )
        {
          v80 = v68;
          v50 = (_QWORD *)v20[2];
          v51 = (_QWORD *)((char *)v68 - ((qword_496A00 + 15) & 0xFFFFFFFFFFFF0000LL));
          if ( v68 != v51 )
          {
            do
              v67 = 0;
            while ( &v65 != v51 );
          }
          v65 = 0;
          if ( (((_WORD)qword_496A00 + 15) & 0xFFF0u) >= 0x400uLL )
            v67 = 0;
          v79 = v49;
          v72 = (int *)&v66;
          v76 = v50;
          v84 = v21;
          sub_438334(" search path=");
          v52 = v76;
          v53 = (_QWORD *)*v86;
          v54 = v79;
          if ( *v86 )
          {
            v73 = a5;
            v74 = a1;
            v55 = v79;
            v56 = v84;
            v75 = v76;
            v76 = v20;
            v57 = v72;
            v72 = v17;
            v58 = v53;
            v79 = v18;
            v59 = v86;
            do
            {
              if ( v55 != (const char *)v58[1] )
                break;
              v60 = j_ifunc_40DC90(v57, v58[3], v58[4]);
              if ( *(_DWORD *)(*v59 + 40LL) != 1 )
              {
                v63 = v56 == 0;
                v56 = 0;
                *(_BYTE *)(v60 + v58[4]) = 0;
                if ( v63 )
                  v61 = ":%s";
                else
                  v61 = "%s";
                sub_4383C0(v61, v57);
              }
              v62 = (_QWORD *)v59[1];
              ++v59;
              v58 = v62;
            }
            while ( v62 );
            v17 = v72;
            a5 = v73;
            v54 = v55;
            a1 = v74;
            v52 = v75;
            v20 = v76;
            v18 = v79;
          }
          v79 = v54;
          if ( v52 )
            sub_4383C0(v78, v54);
          else
            sub_4383C0("\t\t(%s)\n", v54);
        }
      }
      v22 = j_ifunc_40DC90(v18, v20[3], v20[4]) + v20[4];
      if ( *((_DWORD *)v20 + 10) == 1 )
      {
        LODWORD(v38) = 0;
        goto LABEL_20;
      }
      v23 = j_ifunc_40DC90(v22, a1, a2) + a2 - (_QWORD)v18;
      if ( (*v17 & 1) != 0 )
        sub_438334("  trying file=%s\n", v18);
      v24 = sub_432B50((__int64)v18, a6, a8, 0);
      v36 = v24;
      v37 = *((unsigned int *)v20 + 10);
      if ( (_DWORD)v37 )
      {
        v38 = (_DWORD)v37 != 1;
        if ( v24 == -1 )
          goto LABEL_24;
      }
      else
      {
        if ( v24 == -1 )
        {
          if ( v83 && (*((_BYTE *)v82[21 * *(_QWORD *)(v83 + 48)] + 870) & 1) != 0 )
          {
            LODWORD(v38) = 1;
LABEL_25:
            v46 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
            if ( v46 > 0x14 )
              return (unsigned int)-1;
            if ( ((0x102004uLL >> v46) & 1) == 0 )
              return (unsigned int)-1;
            goto LABEL_20;
          }
          v18[v23 - a2] = 0;
          if ( (unsigned int)sub_443FD0(v18, v88) )
          {
            LODWORD(v38) = 0;
            *((_DWORD *)v20 + 10) = 1;
          }
          else
          {
            if ( (v89 & 0xF000) == 0x4000 )
              v47 = 2;
            else
              v47 = 1;
            LODWORD(v38) = (v89 & 0xF000) == 0x4000;
            *((_DWORD *)v20 + 10) = v47;
          }
          goto LABEL_24;
        }
        v38 = 1;
        *((_DWORD *)v20 + 10) = 2;
      }
      if ( ((unsigned int)v87 & 0x4000000) != 0
        && *v81
        && ((LODWORD(v80) = v38, v48 = sub_410930(v24, v88), v38 = (unsigned int)v80, v48) || (v89 & 0x800) == 0) )
      {
        sub_410CD0(v36);
        LODWORD(v38) = (_DWORD)v80;
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 2;
      }
      else if ( v36 != -1 )
      {
        v39 = a5;
        v40 = sub_40B890(v23, v28, v29, v30, v31, v32, v33, v34, v35, v37, v25, v38, v26, v27);
        v41 = v36;
        *v39 = v40;
        if ( v40 )
        {
          j_ifunc_40DC90(v40, v18, v23);
        }
        else
        {
          v41 = -1;
          sub_410CD0(v36);
        }
        return v41;
      }
LABEL_24:
      if ( (_DWORD)v38 )
        goto LABEL_25;
LABEL_20:
      v43 = v86[1];
      ++v86;
      v44 = v85 | v38;
      v85 |= v38;
      if ( !v43 )
      {
        v45 = v77;
        if ( v44 != 1 )
        {
          if ( *((_DWORD *)v77 + 2) )
          {
            v64 = *v77;
            v87 = v77;
            sub_40C1A0(v64);
            v45 = v87;
          }
          v63 = v45 == &qword_48FAF8 || v45 == &qword_48FB08;
          if ( !v63 )
          {
            v41 = -1;
            *v45 = -1;
            return v41;
          }
        }
        return (unsigned int)-1;
      }
    }
  }
  return (unsigned int)-1;
}
