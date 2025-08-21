// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall sub_414920(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
  __int64 v14; // x21
  __int64 v15; // x22
  int v16; // w23
  long double v17; // q0
  long double v18; // q1
  long double v19; // q2
  long double v20; // q3
  long double v21; // q4
  long double v22; // q5
  long double v23; // q6
  long double v24; // q7
  __int64 v25; // x0
  __int64 v26; // x19
  __int64 v27; // x6
  int v28; // w2
  __int64 v29; // x1
  __int64 v30; // x2
  int v31; // w0
  __int64 v32; // x0
  int v33; // w4
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x3
  __int64 v37; // x2
  __int64 v38; // x0
  __int64 v39; // x1
  unsigned __int64 v40; // x0
  unsigned __int64 v41; // t1
  __int64 v42; // x1
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x2
  __int64 v49; // x4
  __int64 v50; // x1
  __int64 v51; // x0
  __int64 *v52; // x0
  long double v53; // q0
  long double v54; // q1
  long double v55; // q2
  long double v56; // q3
  long double v57; // q4
  long double v58; // q5
  long double v59; // q6
  long double v60; // q7
  __int64 v61; // x2
  bool v62; // zf
  __int64 v63; // x1
  void *v64; // x2
  __int64 *v65; // x0
  long double v66; // q0
  long double v67; // q1
  long double v68; // q2
  long double v69; // q3
  long double v70; // q4
  long double v71; // q5
  long double v72; // q6
  long double v73; // q7
  __int64 v74; // x2
  bool v75; // zf
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 *v78; // x0
  __int64 v79; // x1
  bool v80; // zf
  __int64 v81; // x1
  const char *v82; // x19
  unsigned __int8 *v83; // x0
  _BOOL4 v84; // w1
  _BYTE *v85; // x0
  __int64 v86; // x4
  __int64 v87; // x5
  long double v88; // q0
  long double v89; // q1
  long double v90; // q2
  long double v91; // q3
  long double v92; // q4
  long double v93; // q5
  long double v94; // q6
  long double v95; // q7
  unsigned __int8 *v96; // x0
  _BOOL4 v97; // w2
  unsigned __int8 *v98; // x0
  _BOOL4 v99; // w2
  unsigned __int8 *v100; // x0
  _BOOL4 v101; // w1
  int v102; // w5
  int v103; // w6
  unsigned __int64 v104; // x0
  unsigned __int64 v105; // x2
  __int64 *result; // x0
  __int64 v107; // x0
  unsigned __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x3
  __int64 v117; // x0
  __int64 *v118; // [xsp+70h] [xbp+60h] BYREF
  __int64 v119; // [xsp+78h] [xbp+68h] BYREF
  __int64 v120; // [xsp+80h] [xbp+70h]
  __int64 v121; // [xsp+88h] [xbp+78h]

  qword_491360 = sub_437AD0(a7, a8, a9, a10, a11, a12, a13, a14, a1, a2, a3, a4, a5, a6);
  qword_4912C0 = qword_496760;
  word_4912D0 = qword_496768;
  if ( qword_496758 )
  {
    v25 = sub_437850("", "", 1, 0, 0x1000000, 0);
    v26 = v25;
    if ( v25 )
    {
      v27 = qword_496758;
      v28 = *(unsigned __int16 *)(qword_496758 + 56);
      v29 = v27 + *(_QWORD *)(v27 + 32);
      *(_QWORD *)(v25 + 752) = v29;
      *(_WORD *)(v25 + 768) = v28;
      if ( v28 )
      {
        v30 = v29 + 56 + 56LL * (unsigned int)(v28 - 1);
        do
        {
          while ( 1 )
          {
            v31 = *(_DWORD *)v29;
            if ( *(_DWORD *)v29 != 2 )
              break;
            v32 = *(unsigned int *)(v29 + 4);
            v29 += 56;
            v33 = *(_BYTE *)(v26 + 870) & 0xDF | (32 * (((v32 ^ 2uLL) >> 1) & 1));
            v34 = *(_QWORD *)(v29 - 16) >> 4;
            *(_QWORD *)(v26 + 16) = *(_QWORD *)(v29 - 40);
            *(_WORD *)(v26 + 770) = v34;
            *(_BYTE *)(v26 + 870) = v33;
            if ( v29 == v30 )
              goto LABEL_10;
          }
          if ( v31 == 1 )
          {
            v107 = *(_QWORD *)(v29 + 16);
            if ( !*(_QWORD *)v26 )
              *(_QWORD *)v26 = v107;
            v108 = v107 + *(_QWORD *)(v29 + 40);
            if ( v108 >= *(_QWORD *)(v26 + 928) )
              *(_QWORD *)(v26 + 928) = v108;
          }
          else if ( v31 == 7 )
          {
            sub_41F250("ph->p_type != PT_TLS", (__int64)"setup-vdso.h", 0x39u, (__int64)"setup_vdso");
          }
          v29 += 56;
        }
        while ( v29 != v30 );
      }
LABEL_10:
      v35 = *(_QWORD *)v26;
      *(_QWORD *)(v26 + 920) = v27;
      v36 = *(_QWORD *)(v26 + 16);
      v37 = v27 - v35;
      v38 = *(_QWORD *)(v26 + 928);
      v39 = v36 + v37;
      *(_QWORD *)v26 = v37;
      *(_QWORD *)(v26 + 16) = v36 + v37;
      *(_QWORD *)(v26 + 928) = v38 + v37;
      if ( !(v36 + v37) )
        goto LABEL_39;
      v40 = *(_QWORD *)(v36 + v37);
      if ( v40 )
      {
        do
        {
          if ( v40 > 0x25 )
          {
            if ( v40 - 1879048192 > 5 )
            {
              if ( 1879048191 - v40 > 0xF )
              {
                if ( (unsigned int)(2 * v40) <= 0xFFFFFFF8 )
                {
                  if ( 1879047679 - v40 <= 0xB )
                  {
                    v40 = 1879047742 - v40;
                  }
                  else
                  {
                    if ( 1879047935 - v40 > 0xA )
                      goto LABEL_16;
                    v40 = 1879048010 - v40;
                  }
                }
                else
                {
                  v40 = (unsigned int)(59 - ((2 * (int)v40) >> 1));
                }
              }
              else
              {
                v40 = 1879048235 - v40;
              }
            }
            else
            {
              v40 -= 1879048154LL;
            }
          }
          *(_QWORD *)(v26 + 64 + 8 * v40) = v39;
LABEL_16:
          v41 = *(_QWORD *)(v39 + 16);
          v39 += 16;
          v40 = v41;
        }
        while ( v41 );
      }
      if ( !v37 || (*(_BYTE *)(v26 + 870) & 0x20) != 0 )
      {
        v42 = *(_QWORD *)(v26 + 224);
        if ( !v42 )
          goto LABEL_20;
      }
      else
      {
        v109 = *(_QWORD *)(v26 + 96);
        if ( v109 )
          *(_QWORD *)(v109 + 8) += v37;
        v110 = *(_QWORD *)(v26 + 88);
        if ( v110 )
          *(_QWORD *)(v110 + 8) += v37;
        v111 = *(_QWORD *)(v26 + 104);
        if ( v111 )
          *(_QWORD *)(v111 + 8) += v37;
        v112 = *(_QWORD *)(v26 + 112);
        if ( v112 )
          *(_QWORD *)(v112 + 8) += v37;
        v43 = *(_QWORD *)(v26 + 352);
        if ( v43 )
          *(_QWORD *)(v43 + 8) += v37;
        v113 = *(_QWORD *)(v26 + 248);
        if ( v113 )
          *(_QWORD *)(v113 + 8) += v37;
        v114 = *(_QWORD *)(v26 + 536);
        if ( v114 )
          *(_QWORD *)(v114 + 8) += v37;
        v115 = *(_QWORD *)(v26 + 744);
        if ( v115 )
          *(_QWORD *)(v115 + 8) += v37;
        v116 = *(_QWORD *)(v26 + 120);
        v42 = *(_QWORD *)(v26 + 224);
        if ( v116 )
        {
          v117 = *(_QWORD *)(v116 + 8);
          if ( v117 )
            *(_QWORD *)(v116 + 8) = v37 + v117;
          if ( !v42 )
            goto LABEL_21;
        }
        else if ( !v42 )
        {
          goto LABEL_23;
        }
      }
      if ( *(_QWORD *)(v42 + 8) != 7 )
        sub_41F250(
          "info[DT_PLTREL]->d_un.d_val == DT_RELA",
          (__int64)"get-dynamic-info.h",
          0x73u,
          (__int64)"elf_get_dynamic_info");
LABEL_20:
      if ( !*(_QWORD *)(v26 + 120) )
      {
LABEL_22:
        v43 = *(_QWORD *)(v26 + 352);
LABEL_23:
        if ( v43 && *(_QWORD *)(*(_QWORD *)(v26 + 360) + 8LL) != 8 )
          sub_41F250(
            "info[DT_RELRENT]->d_un.d_val == sizeof (ElfW(Relr))",
            (__int64)"get-dynamic-info.h",
            0x82u,
            (__int64)"elf_get_dynamic_info");
        v44 = *(_QWORD *)(v26 + 304);
        if ( v44 )
        {
          v45 = *(_QWORD *)(v44 + 8);
          *(_DWORD *)(v26 + 1064) = v45;
          if ( (v45 & 2) != 0 )
            *(_QWORD *)(v26 + 192) = v44;
          if ( (v45 & 4) != 0 )
            *(_QWORD *)(v26 + 240) = v44;
          if ( (v45 & 8) != 0 )
            *(_QWORD *)(v26 + 256) = v44;
        }
        v46 = *(_QWORD *)(v26 + 448);
        if ( !v46 )
          goto LABEL_37;
        v47 = *(_QWORD *)(v46 + 8);
        *(_DWORD *)(v26 + 1060) = v47;
        if ( (v47 & 8) != 0 )
          *(_BYTE *)(v26 + 872) = 1;
        if ( (dword_496770 & 0x40) != 0 && (v47 & 0xF7FFF716) != 0 )
        {
          sub_438334("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n", v47 & 0xF7FFF716);
          if ( (*(_DWORD *)(v26 + 1060) & 1) == 0 )
          {
LABEL_37:
            if ( *(_QWORD *)(v26 + 296) )
              *(_QWORD *)(v26 + 184) = 0;
LABEL_39:
            sub_439FD0(v26);
            v48 = *(_QWORD *)(v26 + 984);
            v49 = *(_QWORD *)(v26 + 176);
            *(_WORD *)(v26 + 868) |= 8u;
            *(_DWORD *)(v26 + 1052) = 1;
            *(_QWORD *)v48 = v26 + 40;
            *(_DWORD *)(v48 + 8) = 1;
            if ( v49 )
            {
              v50 = 0;
              if ( (*(_BYTE *)(v26 + 870) & 0x20) != 0 )
                v50 = *(_QWORD *)v26;
              v51 = *(_QWORD *)(v49 + 8) + *(_QWORD *)(*(_QWORD *)(v26 + 104) + 8LL) + v50;
              **(_QWORD **)(v26 + 56) = v51;
              *(_QWORD *)(v26 + 8) = v51;
            }
            sub_4377B0(v26, 0);
            qword_490F20 = 1;
            qword_496778 = v26;
            goto LABEL_44;
          }
        }
        else if ( (v47 & 1) == 0 )
        {
          goto LABEL_37;
        }
        *(_QWORD *)(v26 + 256) = *(_QWORD *)(v26 + 448);
        goto LABEL_37;
      }
LABEL_21:
      if ( *(_QWORD *)(*(_QWORD *)(v26 + 136) + 8LL) != 24 )
        sub_41F250(
          "info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))",
          (__int64)"get-dynamic-info.h",
          0x7Bu,
          (__int64)"elf_get_dynamic_info");
      goto LABEL_22;
    }
  }
  v26 = qword_496778;
  if ( !qword_496778 )
  {
    v81 = 0;
    off_48F788 = 0;
    qword_48F790 = 0;
    goto LABEL_67;
  }
LABEL_44:
  v119 = 0x2000000000LL;
  v120 = 0;
  v118 = &v119;
  v121 = 0;
  v52 = (__int64 *)sub_436B10(
                     "__kernel_clock_gettime",
                     v26,
                     (__int64 *)&v118,
                     (__int64 **)(v26 + 984),
                     (const char **)&off_48C3C0,
                     0,
                     0,
                     0,
                     v17,
                     v18,
                     v19,
                     v20,
                     v21,
                     v22,
                     v23,
                     v24);
  if ( v118 )
  {
    v61 = 0;
    if ( v52 )
      v62 = *((unsigned __int16 *)v118 + 3) == 65521;
    else
      v62 = 1;
    if ( !v62 )
      v61 = *v52;
    v63 = qword_496778;
    v64 = (void *)(v61 + v118[1]);
  }
  else
  {
    v64 = 0;
    v63 = qword_496778;
  }
  off_48F788 = v64;
  if ( v63 )
  {
    v119 = 0x2000000000LL;
    v120 = 0;
    v118 = &v119;
    v121 = 0;
    v65 = (__int64 *)sub_436B10(
                       "__kernel_gettimeofday",
                       v63,
                       (__int64 *)&v118,
                       (__int64 **)(v63 + 984),
                       (const char **)&off_48C3C0,
                       0,
                       0,
                       0,
                       v53,
                       v54,
                       v55,
                       v56,
                       v57,
                       v58,
                       v59,
                       v60);
    if ( v118 )
    {
      v74 = 0;
      if ( v65 )
        v75 = *((unsigned __int16 *)v118 + 3) == 65521;
      else
        v75 = 1;
      if ( !v75 )
        v74 = *v65;
      v76 = qword_496778;
      v77 = v74 + v118[1];
    }
    else
    {
      v77 = 0;
      v76 = qword_496778;
    }
    qword_48F790 = v77;
    if ( v76
      && (v119 = 0x2000000000LL,
          v120 = 0,
          v118 = &v119,
          v121 = 0,
          v78 = (__int64 *)sub_436B10(
                             "__kernel_clock_getres",
                             v76,
                             (__int64 *)&v118,
                             (__int64 **)(v76 + 984),
                             (const char **)&off_48C3C0,
                             0,
                             0,
                             0,
                             v66,
                             v67,
                             v68,
                             v69,
                             v70,
                             v71,
                             v72,
                             v73),
          v118) )
    {
      v79 = 0;
      if ( v78 )
        v80 = *((unsigned __int16 *)v118 + 3) == 65521;
      else
        v80 = 1;
      if ( !v80 )
        v79 = *v78;
      v81 = v79 + v118[1];
    }
    else
    {
      v81 = 0;
    }
  }
  else
  {
    v81 = 0;
    qword_48F790 = 0;
  }
LABEL_67:
  qword_48F798 = v81;
  if ( dword_491570 )
  {
    v82 = "GCONV_PATH";
    do
    {
      sub_423500(v82);
      v82 += ifunc_40DFD0(v82) + 1;
    }
    while ( v82 < byte_45ACCE );
  }
  v83 = (unsigned __int8 *)sub_422890("LD_WARN");
  v84 = 0;
  if ( v83 )
    v84 = *v83 != 0;
  dword_496780 = v84;
  v85 = (_BYTE *)sub_422890("LD_LIBRARY_PATH");
  sub_433E00(v85, (__int64)"LD_LIBRARY_PATH", 0, 0, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95);
  qword_496788 = qword_496790;
  v96 = (unsigned __int8 *)sub_422890("LD_BIND_NOW");
  v97 = 1;
  if ( v96 )
    v97 = *v96 == 0;
  dword_496798 = v97;
  v98 = (unsigned __int8 *)sub_422890("LD_BIND_NOT");
  v99 = 0;
  if ( v98 )
    v99 = *v98 != 0;
  dword_49679C = v99;
  v100 = (unsigned __int8 *)sub_422890("LD_DYNAMIC_WEAK");
  v101 = 1;
  if ( v100 )
    v101 = *v100 == 0;
  dword_4967A0 = v101;
  if ( (_QWORD)xmmword_496728 )
  {
    if ( *(_BYTE *)xmmword_496728 )
      qword_4967A8 = ifunc_40DFD0(xmmword_496728);
    else
      *(_QWORD *)&xmmword_496728 = 0;
  }
  v102 = 0;
  v103 = 0;
  v104 = qword_496760;
  v105 = qword_496760 + 56 * qword_496768;
  if ( qword_496760 < v105 )
  {
    do
    {
      while ( *(_DWORD *)v104 == 1685382481 )
      {
        v16 = *(_DWORD *)(v104 + 4);
        v104 += 56LL;
        v103 = 1;
        if ( v104 >= v105 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)v104 == 1685382482 )
      {
        v14 = *(_QWORD *)(v104 + 16);
        v102 = 1;
        v15 = *(_QWORD *)(v104 + 40);
      }
      v104 += 56LL;
    }
    while ( v104 < v105 );
LABEL_88:
    if ( v102 )
    {
      unk_491478 = v14;
      unk_491480 = v15;
    }
    if ( v103 )
      dword_490F28 = v16;
  }
  if ( sub_445740 )
    sub_445740();
  result = &qword_490FD0;
  if ( unk_491480 )
    return (__int64 *)sub_4387E0(&qword_490FD0);
  return result;
}
