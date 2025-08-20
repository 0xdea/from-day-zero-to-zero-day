__int64 __fastcall sub_436B10(
        const char *a1,
        __int64 a2,
        __int64 *a3,
        __int64 **a4,
        const char **a5,
        int a6,
        char a7,
        __int64 a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15,
        double a16)
{
  int v23; // w0
  const char *v24; // x3
  unsigned int v25; // w27
  int v26; // w4
  int v27; // w2
  int v28; // t1
  __int64 *v29; // x5
  __int64 **v30; // x19
  int i; // w0
  __int64 *v32; // x5
  __int64 *v33; // t1
  unsigned int *v34; // x7
  __int64 v35; // x0
  __int64 v36; // x28
  int v37; // w27
  __int64 result; // x0
  __int64 **v39; // x28
  __int64 *v40; // x5
  __int64 *v41; // t1
  const char *v42; // x1
  const char *v43; // x3
  const char *v44; // x5
  _DWORD *v45; // x10
  __int64 *v46; // x4
  __int64 v47; // x0
  int v48; // w1
  unsigned int v49; // w7
  _QWORD *v50; // x0
  __int64 v51; // x19
  __int64 v52; // x2
  __int64 v53; // x3
  void *v54; // x5
  void *v55; // x6
  double v56; // d0
  double v57; // d1
  double v58; // d2
  double v59; // d3
  double v60; // d4
  double v61; // d5
  double v62; // d6
  double v63; // d7
  unsigned int v64; // w7
  void *v65; // x4
  __int64 *v66; // x0
  bool v67; // zf
  bool v68; // zf
  unsigned int v69; // w0
  int v70; // w0
  unsigned int v71; // w22
  __int64 v72; // x0
  unsigned int v73; // w7
  _DWORD *v74; // x24
  __int64 v75; // x26
  __int64 v76; // x0
  const char *v77; // x3
  const char *v78; // x1
  __int64 v79; // x2
  const char *v80; // x1
  const char *v81; // x3
  unsigned __int64 StatusReg; // x1
  void *v83; // x19
  void *v84; // x5
  void *v85; // x6
  signed __int64 v86; // x0
  __int64 *v87; // x0
  bool v88; // zf
  __int64 v89; // x1
  __int64 v90; // x19
  char *v91; // x1
  char *v92; // x4
  unsigned int *v93; // x0
  __int64 *v94; // x0
  unsigned int *v95; // x10
  __int64 v96; // t1
  unsigned int *v97; // [xsp+80h] [xbp+60h]
  int v98; // [xsp+80h] [xbp+60h]
  __int64 v99; // [xsp+88h] [xbp+68h]
  int v100; // [xsp+88h] [xbp+68h]
  unsigned int v102; // [xsp+90h] [xbp+70h]
  __int64 v103; // [xsp+98h] [xbp+78h]
  unsigned int v104; // [xsp+A0h] [xbp+80h]
  unsigned __int64 v105; // [xsp+A0h] [xbp+80h]
  unsigned int *v106; // [xsp+A8h] [xbp+88h]
  __int64 *v107; // [xsp+B0h] [xbp+90h]
  unsigned int v108; // [xsp+BCh] [xbp+9Ch]
  unsigned __int64 v109; // [xsp+C8h] [xbp+A8h] BYREF
  unsigned int *v110; // [xsp+D0h] [xbp+B0h] BYREF
  __int64 v111; // [xsp+D8h] [xbp+B8h]
  unsigned int *v112; // [xsp+E0h] [xbp+C0h] BYREF
  __int64 v113; // [xsp+E8h] [xbp+C8h]

  while ( 1 )
  {
    v23 = *(unsigned __int8 *)a1;
    if ( *a1 )
    {
      v24 = a1;
      v25 = 5381;
      while ( 1 )
      {
        v26 = *((unsigned __int8 *)v24 + 1) + v23;
        if ( !v24[1] )
          break;
        v27 = 32 * v23;
        v28 = *((unsigned __int8 *)v24 + 2);
        v24 += 2;
        v23 = v28;
        v25 = v26 + v27 + 1089 * v25;
        if ( !v28 )
          goto LABEL_5;
      }
      v25 += v23 + 32 * v25;
    }
    else
    {
      v25 = 5381;
    }
LABEL_5:
    v109 = 0xFFFFFFFFLL;
    v110 = 0;
    v111 = 0;
    if ( a5 && (a7 & 2) != 0 )
      sub_41F250(
        "version == NULL || !(flags & DL_LOOKUP_RETURN_NEWEST)",
        (__int64)"dl-lookup.c",
        0x30Eu,
        (__int64)"_dl_lookup_symbol_x");
    v29 = *a4;
    if ( !a8 )
    {
      if ( v29 )
      {
        v99 = 0;
        goto LABEL_10;
      }
      v35 = *a3;
LABEL_39:
      if ( v35 && *(unsigned __int8 *)(v35 + 4) >> 4 == 2 || (dword_496770 & 0x100) != 0 )
      {
        v34 = 0;
        v36 = 0;
        goto LABEL_23;
      }
      if ( a2 )
      {
        v91 = *(char **)(a2 + 8);
        if ( !a5 )
        {
          v92 = "";
LABEL_152:
          if ( *v91 )
            goto LABEL_153;
          goto LABEL_172;
        }
        if ( *a5 )
        {
          v92 = ", version ";
          goto LABEL_152;
        }
LABEL_174:
        v92 = ", version ";
        goto LABEL_152;
      }
      if ( a5 )
      {
        if ( !*a5 )
        {
          v91 = "";
          goto LABEL_174;
        }
        v92 = ", version ";
      }
      else
      {
        v92 = "";
      }
LABEL_172:
      v91 = (char *)off_491918;
      if ( !off_491918 )
        v91 = "<main program>";
LABEL_153:
      sub_4324A0((const char **)&v112, v91, "undefined symbol: %s%s%s", a9, a10, a11, a12, a13, a14, a15, a16, a1, v92);
      sub_432204(0, (__int64)&v112, "symbol lookup error");
    }
    v99 = 0;
    if ( *(_QWORD *)*v29 != a8 )
    {
      do
        ++v99;
      while ( *(_QWORD *)(*v29 + 8 * v99) != a8 );
    }
LABEL_10:
    v30 = a4;
    for ( i = sub_436090(a1, v25, &v109, *a3, &v110, v29, v99, (__int64)a5, a7, a8, a6, a2);
          !i;
          i = sub_436090(a1, v25, &v109, *a3, &v110, v32, 0, (__int64)a5, a7, a8, a6, a2) )
    {
      v33 = v30[1];
      ++v30;
      v32 = v33;
      if ( !v33 )
        break;
    }
    v34 = (unsigned int *)*a3;
    v35 = *a3;
    if ( !v110 )
      goto LABEL_39;
    if ( v34 && (*((_BYTE *)v34 + 5) & 3) == 3 )
    {
      if ( a6 == 1 )
      {
        if ( v111 == a2 )
        {
          v34 = v110;
        }
        else
        {
          v110 = (unsigned int *)*a3;
          v111 = a2;
        }
        v36 = a2;
        v37 = 1;
        goto LABEL_20;
      }
      v112 = 0;
      v113 = 0;
      v39 = a4;
      v40 = *a4;
      if ( !*a4 )
        goto LABEL_94;
      while ( !(unsigned int)sub_436090(a1, v25, &v109, (__int64)v34, &v112, v40, v99, (__int64)a5, a7, a8, 1u, 0) )
      {
        v41 = v39[1];
        ++v39;
        v40 = v41;
        if ( !v41 )
          break;
        v34 = (unsigned int *)*a3;
        v99 = 0;
      }
      if ( v112 && v113 != a2 )
      {
        v36 = a2;
        v37 = 1;
        v110 = (unsigned int *)*a3;
        v111 = a2;
      }
      else
      {
LABEL_94:
        v36 = v111;
        v37 = 1;
      }
    }
    else
    {
      v36 = v111;
      v37 = 0;
    }
    if ( (*(_WORD *)(v36 + 868) & 3) != 2 )
      goto LABEL_19;
    if ( a2 == v36 || (a7 & 1) == 0 )
      goto LABEL_19;
    if ( (*(_BYTE *)(v36 + 871) & 1) != 0 )
      goto LABEL_19;
    v100 = a7 & 8;
    if ( (a7 & 8) != 0 && (*(_BYTE *)(v36 + 872) & 1) != 0 )
      goto LABEL_19;
    v45 = *(_DWORD **)(a2 + 1040);
    __dmb(0xBu);
    v46 = *(__int64 **)(a2 + 1032);
    if ( v46 )
    {
      v47 = *v46;
      if ( *v46 )
        break;
    }
LABEL_61:
    if ( v45 )
    {
      v49 = *v45;
      if ( *v45 )
      {
        v50 = v45 + 2;
        while ( *v50 != v36 )
        {
          if ( &v45[2 * v49 + 2] == (_DWORD *)++v50 )
            goto LABEL_66;
        }
        goto LABEL_19;
      }
    }
    else
    {
      v49 = 0;
    }
LABEL_66:
    v103 = *(_QWORD *)(v36 + 1208);
    v98 = a7 & 4;
    if ( (a7 & 4) == 0 )
    {
      v104 = v49;
      v51 = v36;
      sub_42D0B0(dword_490F90);
      v64 = v104;
      goto LABEL_68;
    }
    v107 = *(__int64 **)(a2 + 1032);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v83 = (void *)(StatusReg - 1852);
    v105 = StatusReg;
    v106 = v45;
    v108 = v49;
    if ( (unsigned int)_aarch64_swp4_rel(0, (atomic_uint *)(StatusReg - 1852)) == 2 )
      v86 = linux_eabi_syscall(__NR_futex, v83, (void *)0x81, (void *)1, 0, v107, v84, v85);
    v51 = v36;
    sub_42D0B0(dword_490F90);
    v87 = *(__int64 **)(a2 + 1032);
    v64 = v108;
    if ( v87 )
      v88 = v107 == v87;
    else
      v88 = 1;
    if ( v88 || (v89 = *v87) == 0 )
    {
LABEL_154:
      v93 = *(unsigned int **)(a2 + 1040);
      if ( v93 )
      {
        v52 = *v93;
        if ( v106 != v93 )
        {
          if ( (_DWORD)v52 )
          {
            v94 = (__int64 *)(v93 + 2);
            v53 = (__int64)&v94[(unsigned int)v52];
            do
            {
              v89 = *v94;
              if ( v36 == *v94 )
                goto LABEL_146;
              ++v94;
            }
            while ( v94 != (__int64 *)v53 );
            v64 = v52;
          }
          else
          {
            v64 = 0;
          }
          goto LABEL_68;
        }
        if ( v108 < (unsigned int)v52 )
        {
          v95 = &v106[2 * v108];
          do
          {
            v96 = *((_QWORD *)v95 + 1);
            v95 += 2;
            v89 = v96;
            if ( v36 == v96 )
              goto LABEL_146;
          }
          while ( ++v64 != (_DWORD)v52 );
        }
      }
LABEL_68:
      v65 = *(void **)(a2 + 48);
      v66 = (&off_4914A8)[21 * (_QWORD)v65];
      if ( v66 )
        v67 = v66 == (__int64 *)v51;
      else
        v67 = 1;
      if ( !v67 )
      {
        do
        {
          v66 = (__int64 *)v66[3];
          if ( v66 )
            v68 = v66 == (__int64 *)v51;
          else
            v68 = 1;
        }
        while ( !v68 );
      }
      if ( v66 )
      {
        if ( v103 == *(_QWORD *)(v51 + 1208) )
        {
          if ( (*(_BYTE *)(v51 + 871) & 1) != 0 || (a7 & 8) != 0 && (*(_BYTE *)(v51 + 872) & 1) != 0 )
          {
            sub_42DA40(dword_490F90);
            if ( (a7 & 4) == 0 )
              goto LABEL_19;
            goto LABEL_104;
          }
          if ( (*(_WORD *)(a2 + 868) & 3) == 2 )
          {
            v69 = *(_DWORD *)(a2 + 1048);
            if ( v69 > v64 )
            {
              *(_QWORD *)(*(_QWORD *)(a2 + 1040) + 8LL * v64 + 8) = v51;
              __dmb(0xBu);
              **(_DWORD **)(a2 + 1040) = v64 + 1;
              goto LABEL_85;
            }
            v67 = v69 == 0;
            v70 = 2 * v69;
            if ( v67 )
              v71 = 10;
            else
              v71 = v70;
            v102 = v64;
            v72 = sub_40B890(8 * (v71 + 1LL), v56, v57, v58, v59, v60, v61, v62, v63, 10, v52, v53, v65, v54, v55);
            v73 = v102;
            v74 = (_DWORD *)v72;
            if ( v72 )
            {
              if ( v102 )
              {
                v75 = v102;
                j_ifunc_40DC90(v72 + 8, *(_QWORD *)(a2 + 1040) + 8LL, 8LL * v102);
                v73 = v102;
              }
              else
              {
                v75 = 0;
              }
              *(_QWORD *)&v74[2 * v75 + 2] = v51;
              *v74 = v73 + 1;
              __dmb(0xBu);
              v76 = *(_QWORD *)(a2 + 1040);
              *(_QWORD *)(a2 + 1040) = v74;
              *(_DWORD *)(a2 + 1048) = v71;
              if ( v76 )
                sub_439EF0();
LABEL_85:
              if ( (dword_496770 & 0x40) != 0 )
              {
                v80 = *(const char **)(v51 + 8);
                if ( !*v80 )
                {
                  v80 = (const char *)off_491918;
                  if ( !off_491918 )
                    v80 = "<main program>";
                }
                v81 = *(const char **)(a2 + 8);
                if ( !*v81 )
                {
                  v81 = (const char *)off_491918;
                  if ( !off_491918 )
                    v81 = "<main program>";
                }
                sub_438334(
                  "\nfile=%s [%lu];  needed by %s [%lu] (relocation dependency)\n\n",
                  v80,
                  *(_QWORD *)(v51 + 48),
                  v81,
                  *(_QWORD *)(a2 + 48));
              }
              sub_42DA40(dword_490F90);
              if ( !v98 )
              {
                v34 = v110;
                goto LABEL_20;
              }
              goto LABEL_104;
            }
            if ( (dword_496770 & 4) != 0 )
            {
              if ( v100 && (*(_BYTE *)(v51 + 872) & 1) != 0 )
                goto LABEL_123;
              sub_438334(
                "marking %s [%lu] as NODELETE due to memory allocation failure\n",
                *(const char **)(v51 + 8),
                *(_QWORD *)(v51 + 48));
            }
          }
          else if ( (dword_496770 & 4) != 0 )
          {
            if ( (a7 & 8) != 0 && (*(_BYTE *)(v51 + 872) & 1) != 0 )
              goto LABEL_123;
            v77 = *(const char **)(a2 + 8);
            v78 = *(const char **)(v51 + 8);
            v79 = *(_QWORD *)(v51 + 48);
            if ( *v77 )
              sub_438334("marking %s [%lu] as NODELETE due to reference from %s [%lu]\n", v78, v79, v77, v65);
            else
              sub_438334("marking %s [%lu] as NODELETE due to reference from main program\n", v78, v79);
          }
          if ( !v100 )
          {
            *(_BYTE *)(v51 + 871) = 1;
            sub_42DA40(dword_490F90);
            if ( !v98 )
            {
              v34 = v110;
              goto LABEL_20;
            }
            goto LABEL_104;
          }
LABEL_123:
          *(_BYTE *)(v51 + 872) = 1;
          sub_42DA40(dword_490F90);
          if ( !v98 )
          {
            v34 = v110;
            goto LABEL_20;
          }
LABEL_104:
          *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 4) = 1;
          __dmb(0xBu);
          v34 = v110;
          goto LABEL_20;
        }
        sub_42DA40(dword_490F90);
        if ( (a7 & 4) != 0 )
        {
LABEL_98:
          *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 4) = 1;
          __dmb(0xBu);
          goto LABEL_99;
        }
      }
      else
      {
        sub_42DA40(dword_490F90);
        if ( (a7 & 4) != 0 )
          goto LABEL_98;
      }
    }
    else
    {
      LODWORD(v52) = 0;
      while ( v36 != v89 )
      {
        v52 = (unsigned int)(v52 + 1);
        v89 = v87[(unsigned int)v52];
        if ( !v89 )
          goto LABEL_154;
      }
LABEL_146:
      v90 = *(_QWORD *)(v89 + 1208);
      sub_42DA40(dword_490F90);
      *(_DWORD *)(v105 - 1852) = 1;
      __dmb(0xBu);
      if ( v103 == v90 )
      {
        v34 = v110;
        goto LABEL_20;
      }
LABEL_99:
      a4 = *(__int64 ***)(a2 + 976);
    }
  }
  v48 = 0;
  while ( v47 != v36 )
  {
    v47 = v46[++v48];
    if ( !v47 )
      goto LABEL_61;
  }
LABEL_19:
  v34 = v110;
LABEL_20:
  if ( !*(_DWORD *)(v36 + 1052) )
    *(_DWORD *)(v36 + 1052) = 1;
  if ( (dword_496770 & 4) != 0 )
  {
    v42 = *(const char **)(a2 + 8);
    if ( !*v42 )
    {
      v42 = (const char *)off_491918;
      if ( !off_491918 )
        v42 = "<main program>";
    }
    v43 = *(const char **)(v36 + 8);
    if ( !*v43 )
    {
      v43 = (const char *)off_491918;
      if ( !off_491918 )
        v43 = "<main program>";
    }
    v44 = "normal";
    if ( v37 )
      v44 = "protected";
    v97 = v34;
    sub_438334(
      "binding file %s [%lu] to %s [%lu]: %s symbol `%s'",
      v42,
      *(_QWORD *)(a2 + 48),
      v43,
      *(_QWORD *)(v36 + 48),
      v44,
      a1);
    if ( a5 )
      sub_4383C0(" [%s]\n", *a5);
    else
      sub_4383C0("\n");
    v34 = v97;
  }
LABEL_23:
  result = v36;
  *a3 = (__int64)v34;
  return result;
}
