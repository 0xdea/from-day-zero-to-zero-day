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
  _QWORD *v61; // t1
  bool v62; // zf
  __int64 v63; // x0
  __int64 v64; // [xsp+0h] [xbp-20010h] BYREF
  char v65; // [xsp+10h] [xbp-20000h] BYREF
  __int64 v66; // [xsp+400h] [xbp-1FC10h]
  _QWORD v67[2]; // [xsp+10000h] [xbp-10010h] BYREF
  char v68; // [xsp+10010h] [xbp-10000h] BYREF
  __int64 v69; // [xsp+10400h] [xbp-FC10h]
  _BYTE v70[16]; // [xsp+20000h] [xbp-10h] BYREF
  int *v71; // [xsp+20078h] [xbp+68h]
  __int64 *v72; // [xsp+20080h] [xbp+70h]
  __int64 v73; // [xsp+20088h] [xbp+78h]
  _QWORD *v74; // [xsp+20090h] [xbp+80h]
  _QWORD *v75; // [xsp+20098h] [xbp+88h]
  __int64 *v76; // [xsp+200A0h] [xbp+90h]
  const char *v77; // [xsp+200A8h] [xbp+98h]
  const char *v78; // [xsp+200B0h] [xbp+A0h]
  _QWORD *v79; // [xsp+200B8h] [xbp+A8h]
  int *v80; // [xsp+200C0h] [xbp+B0h]
  __int64 **v81; // [xsp+200C8h] [xbp+B8h]
  __int64 v82; // [xsp+200D0h] [xbp+C0h]
  int v83; // [xsp+200D8h] [xbp+C8h]
  int v84; // [xsp+200DCh] [xbp+CCh]
  _QWORD *v85; // [xsp+200E0h] [xbp+D0h]
  __int64 *v86; // [xsp+200E8h] [xbp+D8h]
  _BYTE v87[16]; // [xsp+200F0h] [xbp+E0h] BYREF
  int v88; // [xsp+20100h] [xbp+F0h]

  v8 = (_QWORD *)*a4;
  if ( *a4 )
  {
    v13 = a2 + qword_496A00 + 15;
    v14 = v13 & 0xFFFFFFFFFFFF0000LL;
    v15 = v13 & 0xFFF0;
    v16 = &v70[-v14];
    if ( v70 != (_BYTE *)v16 )
    {
      do
        v69 = 0;
      while ( v67 != v16 );
    }
    v67[0] = 0;
    if ( v15 >= 0x400uLL )
      v69 = 0;
    v17 = &dword_496770;
    v18 = &v68;
    v76 = a4;
    v77 = "\t\t(%s from file %s)\n";
    v78 = 0;
    v80 = &dword_491570;
    v81 = &off_4914A8;
    v82 = a7;
    v84 = 0;
    v85 = v8;
    LODWORD(v86) = a3;
    while ( 1 )
    {
      v20 = (_QWORD *)*v85;
      v21 = *v17 & 1;
      if ( v21 )
      {
        v49 = (const char *)v20[1];
        if ( v49 != v78 )
        {
          v79 = v67;
          v50 = (_QWORD *)v20[2];
          v51 = (_QWORD *)((char *)v67 - ((qword_496A00 + 15) & 0xFFFFFFFFFFFF0000LL));
          if ( v67 != v51 )
          {
            do
              v66 = 0;
            while ( &v64 != v51 );
          }
          v64 = 0;
          if ( (((_WORD)qword_496A00 + 15) & 0xFFF0u) >= 0x400uLL )
            v66 = 0;
          v78 = v49;
          v71 = (int *)&v65;
          v75 = v50;
          v83 = v21;
          sub_438334(" search path=");
          v52 = v75;
          v53 = (_QWORD *)*v85;
          v54 = v78;
          if ( *v85 )
          {
            v72 = a5;
            v73 = a1;
            v55 = v78;
            v56 = v83;
            v74 = v75;
            v75 = v20;
            v57 = v71;
            v71 = v17;
            v58 = v53;
            v78 = v18;
            v59 = v85;
            do
            {
              if ( v55 != (const char *)v58[1] )
                break;
              v60 = j_ifunc_40DC90(v57, v58[3], v58[4]);
              if ( *(_DWORD *)(*v59 + 40LL) != 1 )
              {
                v62 = v56 == 0;
                v56 = 0;
                *(_BYTE *)(v60 + v58[4]) = 0;
                if ( v62 )
                  sub_4383C0(":%s", v57);
                else
                  sub_4383C0("%s", v57);
              }
              v61 = (_QWORD *)v59[1];
              ++v59;
              v58 = v61;
            }
            while ( v61 );
            v17 = v71;
            a5 = v72;
            v54 = v55;
            a1 = v73;
            v52 = v74;
            v20 = v75;
            v18 = v78;
          }
          v78 = v54;
          if ( v52 )
            sub_4383C0(v77);
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
          if ( v82 && (*((_BYTE *)v81[21 * *(_QWORD *)(v82 + 48)] + 870) & 1) != 0 )
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
          if ( (unsigned int)sub_443FD0(v18, v87) )
          {
            LODWORD(v38) = 0;
            *((_DWORD *)v20 + 10) = 1;
          }
          else
          {
            if ( (v88 & 0xF000) == 0x4000 )
              v47 = 2;
            else
              v47 = 1;
            LODWORD(v38) = (v88 & 0xF000) == 0x4000;
            *((_DWORD *)v20 + 10) = v47;
          }
          goto LABEL_24;
        }
        v38 = 1;
        *((_DWORD *)v20 + 10) = 2;
      }
      if ( ((unsigned int)v86 & 0x4000000) != 0
        && *v80
        && ((LODWORD(v79) = v38, v48 = sub_410930(v24, v87), v38 = (unsigned int)v79, v48) || (v88 & 0x800) == 0) )
      {
        sub_410CD0(v36);
        LODWORD(v38) = (_DWORD)v79;
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
      v43 = v85[1];
      ++v85;
      v44 = v84 | v38;
      v84 |= v38;
      if ( !v43 )
      {
        v45 = v76;
        if ( v44 != 1 )
        {
          if ( *((_DWORD *)v76 + 2) )
          {
            v63 = *v76;
            v86 = v76;
            sub_40C1A0(v63);
            v45 = v86;
          }
          v62 = v45 == &qword_48FAF8 || v45 == &qword_48FB08;
          if ( !v62 )
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
