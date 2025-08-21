__int64 __fastcall sub_436B10(
        const char *a1,
        __int64 a2,
        __int64 *a3,
        __int64 **a4,
        const char **a5,
        unsigned int a6,
        unsigned int a7,
        __int64 *a8,
        long double a9,
        long double a10,
        long double a11,
        long double a12,
        long double a13,
        long double a14,
        long double a15,
        long double a16)
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
  __int64 v34; // x7
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
  unsigned __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x5
  long double v55; // q0
  long double v56; // q1
  long double v57; // q2
  long double v58; // q3
  long double v59; // q4
  long double v60; // q5
  long double v61; // q6
  long double v62; // q7
  unsigned int v63; // w7
  __int64 v64; // x4
  __int64 *v65; // x0
  bool v66; // zf
  bool v67; // zf
  unsigned int v68; // w0
  int v69; // w0
  unsigned int v70; // w22
  __int64 v71; // x0
  unsigned int v72; // w7
  _DWORD *v73; // x24
  __int64 v74; // x26
  __int64 v75; // x0
  const char *v76; // x3
  const char *v77; // x1
  __int64 v78; // x2
  const char *v79; // x1
  const char *v80; // x3
  unsigned __int64 StatusReg; // x1
  void *v82; // x19
  void *v83; // x5
  void *v84; // x6
  signed __int64 v85; // x0
  __int64 *v86; // x0
  bool v87; // zf
  __int64 v88; // x1
  __int64 v89; // x19
  char *v90; // x1
  char *v91; // x4
  unsigned int *v92; // x0
  __int64 *v93; // x0
  unsigned int *v94; // x10
  __int64 v95; // t1
  __int64 v96; // [xsp+80h] [xbp+60h]
  unsigned int v97; // [xsp+80h] [xbp+60h]
  __int64 v98; // [xsp+88h] [xbp+68h]
  unsigned int v99; // [xsp+88h] [xbp+68h]
  unsigned int v101; // [xsp+90h] [xbp+70h]
  __int64 v102; // [xsp+98h] [xbp+78h]
  unsigned int v103; // [xsp+A0h] [xbp+80h]
  unsigned __int64 v104; // [xsp+A0h] [xbp+80h]
  unsigned int *v105; // [xsp+A8h] [xbp+88h]
  __int64 *v106; // [xsp+B0h] [xbp+90h]
  unsigned int v107; // [xsp+BCh] [xbp+9Ch]
  unsigned __int64 v108; // [xsp+C8h] [xbp+A8h] BYREF
  __int64 v109; // [xsp+D0h] [xbp+B0h] BYREF
  __int64 v110; // [xsp+D8h] [xbp+B8h]
  const char *v111; // [xsp+E0h] [xbp+C0h] BYREF
  __int64 v112; // [xsp+E8h] [xbp+C8h]

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
    v108 = 0xFFFFFFFFLL;
    v109 = 0;
    v110 = 0;
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
        v98 = 0;
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
        v90 = *(char **)(a2 + 8);
        if ( !a5 )
        {
          v91 = "";
LABEL_152:
          if ( *v90 )
            goto LABEL_153;
          goto LABEL_172;
        }
        if ( *a5 )
        {
          v91 = ", version ";
          goto LABEL_152;
        }
LABEL_174:
        v91 = ", version ";
        goto LABEL_152;
      }
      if ( a5 )
      {
        if ( !*a5 )
        {
          v90 = "";
          goto LABEL_174;
        }
        v91 = ", version ";
      }
      else
      {
        v91 = "";
      }
LABEL_172:
      v90 = (char *)off_491918;
      if ( !off_491918 )
        v90 = "<main program>";
LABEL_153:
      sub_4324A0(&v111, v90, "undefined symbol: %s%s%s", a9, a10, a11, a12, a13, a14, a15, a16, a1, v91);
      sub_432204(0, &v111, "symbol lookup error");
    }
    v98 = 0;
    if ( *(__int64 **)*v29 != a8 )
    {
      do
        ++v98;
      while ( *(__int64 **)(*v29 + 8 * v98) != a8 );
    }
LABEL_10:
    v30 = a4;
    for ( i = sub_436090(a1, v25, &v108, *a3, &v109, v29, v98, (__int64)a5, a7, a8, a6, a2);
          !i;
          i = sub_436090(a1, v25, &v108, *a3, &v109, v32, 0, (__int64)a5, a7, a8, a6, a2) )
    {
      v33 = v30[1];
      ++v30;
      v32 = v33;
      if ( !v33 )
        break;
    }
    v34 = *a3;
    v35 = *a3;
    if ( !v109 )
      goto LABEL_39;
    if ( v34 && (*(_BYTE *)(v34 + 5) & 3) == 3 )
    {
      if ( a6 == 1 )
      {
        if ( v110 == a2 )
        {
          v34 = v109;
        }
        else
        {
          v109 = *a3;
          v110 = a2;
        }
        v36 = a2;
        v37 = 1;
        goto LABEL_20;
      }
      v111 = 0;
      v112 = 0;
      v39 = a4;
      v40 = *a4;
      if ( !*a4 )
        goto LABEL_94;
      while ( !(unsigned int)sub_436090(a1, v25, &v108, v34, (__int64 *)&v111, v40, v98, (__int64)a5, a7, a8, 1u, 0) )
      {
        v41 = v39[1];
        ++v39;
        v40 = v41;
        if ( !v41 )
          break;
        v34 = *a3;
        v98 = 0;
      }
      if ( v111 && v112 != a2 )
      {
        v36 = a2;
        v37 = 1;
        v109 = *a3;
        v110 = a2;
      }
      else
      {
LABEL_94:
        v36 = v110;
        v37 = 1;
      }
    }
    else
    {
      v36 = v110;
      v37 = 0;
    }
    if ( (*(_WORD *)(v36 + 868) & 3) != 2 )
      goto LABEL_19;
    if ( a2 == v36 || (a7 & 1) == 0 )
      goto LABEL_19;
    if ( (*(_BYTE *)(v36 + 871) & 1) != 0 )
      goto LABEL_19;
    v99 = a7 & 8;
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
    v102 = *(_QWORD *)(v36 + 1208);
    v97 = a7 & 4;
    if ( (a7 & 4) == 0 )
    {
      v103 = v49;
      v51 = v36;
      sub_42D0B0((atomic_uint *)&unk_490F90);
      v63 = v103;
      goto LABEL_68;
    }
    v106 = *(__int64 **)(a2 + 1032);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v82 = (void *)(StatusReg - 1852);
    v104 = StatusReg;
    v105 = v45;
    v107 = v49;
    if ( (unsigned int)_aarch64_swp4_rel(0, (atomic_uint *)(StatusReg - 1852)) == 2 )
      v85 = linux_eabi_syscall(__NR_futex, v82, (void *)0x81, (void *)1, 0, v106, v83, v84);
    v51 = v36;
    sub_42D0B0((atomic_uint *)&unk_490F90);
    v86 = *(__int64 **)(a2 + 1032);
    v63 = v107;
    if ( v86 )
      v87 = v106 == v86;
    else
      v87 = 1;
    if ( v87 || (v88 = *v86) == 0 )
    {
LABEL_154:
      v92 = *(unsigned int **)(a2 + 1040);
      if ( v92 )
      {
        v52 = *v92;
        if ( v105 != v92 )
        {
          if ( (_DWORD)v52 )
          {
            v93 = (__int64 *)(v92 + 2);
            v53 = (__int64)&v93[(unsigned int)v52];
            do
            {
              v88 = *v93;
              if ( v36 == *v93 )
                goto LABEL_146;
              ++v93;
            }
            while ( v93 != (__int64 *)v53 );
            v63 = v52;
          }
          else
          {
            v63 = 0;
          }
          goto LABEL_68;
        }
        if ( v107 < (unsigned int)v52 )
        {
          v94 = &v105[2 * v107];
          do
          {
            v95 = *((_QWORD *)v94 + 1);
            v94 += 2;
            v88 = v95;
            if ( v36 == v95 )
              goto LABEL_146;
          }
          while ( ++v63 != (_DWORD)v52 );
        }
      }
LABEL_68:
      v64 = *(_QWORD *)(a2 + 48);
      v65 = (&off_4914A8)[21 * v64];
      if ( v65 )
        v66 = v65 == (__int64 *)v51;
      else
        v66 = 1;
      if ( !v66 )
      {
        do
        {
          v65 = (__int64 *)v65[3];
          if ( v65 )
            v67 = v65 == (__int64 *)v51;
          else
            v67 = 1;
        }
        while ( !v67 );
      }
      if ( v65 )
      {
        if ( v102 == *(_QWORD *)(v51 + 1208) )
        {
          if ( (*(_BYTE *)(v51 + 871) & 1) != 0 || (a7 & 8) != 0 && (*(_BYTE *)(v51 + 872) & 1) != 0 )
          {
            sub_42DA40((__int64)&unk_490F90);
            if ( (a7 & 4) == 0 )
              goto LABEL_19;
            goto LABEL_104;
          }
          if ( (*(_WORD *)(a2 + 868) & 3) == 2 )
          {
            v68 = *(_DWORD *)(a2 + 1048);
            if ( v68 > v63 )
            {
              *(_QWORD *)(*(_QWORD *)(a2 + 1040) + 8LL * v63 + 8) = v51;
              __dmb(0xBu);
              **(_DWORD **)(a2 + 1040) = v63 + 1;
              goto LABEL_85;
            }
            v66 = v68 == 0;
            v69 = 2 * v68;
            if ( v66 )
              v70 = 10;
            else
              v70 = v69;
            v101 = v63;
            v71 = sub_40B890(8 * (v70 + 1LL), v55, v56, v57, v58, v59, v60, v61, v62, 10, (__int16 *)v52, v53, v64, v54);
            v72 = v101;
            v73 = (_DWORD *)v71;
            if ( v71 )
            {
              if ( v101 )
              {
                v74 = v101;
                j_ifunc_40DC90(v71 + 8, *(_QWORD *)(a2 + 1040) + 8LL, 8LL * v101);
                v72 = v101;
              }
              else
              {
                v74 = 0;
              }
              *(_QWORD *)&v73[2 * v74 + 2] = v51;
              *v73 = v72 + 1;
              __dmb(0xBu);
              v75 = *(_QWORD *)(a2 + 1040);
              *(_QWORD *)(a2 + 1040) = v73;
              *(_DWORD *)(a2 + 1048) = v70;
              if ( v75 )
                sub_439EF0(v75);
LABEL_85:
              if ( (dword_496770 & 0x40) != 0 )
              {
                v79 = *(const char **)(v51 + 8);
                if ( !*v79 )
                {
                  v79 = (const char *)off_491918;
                  if ( !off_491918 )
                    v79 = "<main program>";
                }
                v80 = *(const char **)(a2 + 8);
                if ( !*v80 )
                {
                  v80 = (const char *)off_491918;
                  if ( !off_491918 )
                    v80 = "<main program>";
                }
                sub_438334(
                  "\nfile=%s [%lu];  needed by %s [%lu] (relocation dependency)\n\n",
                  v79,
                  *(_QWORD *)(v51 + 48),
                  v80,
                  *(_QWORD *)(a2 + 48));
              }
              sub_42DA40((__int64)&unk_490F90);
              if ( !v97 )
              {
                v34 = v109;
                goto LABEL_20;
              }
              goto LABEL_104;
            }
            if ( (dword_496770 & 4) != 0 )
            {
              if ( v99 && (*(_BYTE *)(v51 + 872) & 1) != 0 )
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
            v76 = *(const char **)(a2 + 8);
            v77 = *(const char **)(v51 + 8);
            v78 = *(_QWORD *)(v51 + 48);
            if ( *v76 )
              sub_438334("marking %s [%lu] as NODELETE due to reference from %s [%lu]\n", v77, v78, v76, v64);
            else
              sub_438334("marking %s [%lu] as NODELETE due to reference from main program\n", v77, v78);
          }
          if ( !v99 )
          {
            *(_BYTE *)(v51 + 871) = 1;
            sub_42DA40((__int64)&unk_490F90);
            if ( !v97 )
            {
              v34 = v109;
              goto LABEL_20;
            }
            goto LABEL_104;
          }
LABEL_123:
          *(_BYTE *)(v51 + 872) = 1;
          sub_42DA40((__int64)&unk_490F90);
          if ( !v97 )
          {
            v34 = v109;
            goto LABEL_20;
          }
LABEL_104:
          *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 4) = 1;
          __dmb(0xBu);
          v34 = v109;
          goto LABEL_20;
        }
        sub_42DA40((__int64)&unk_490F90);
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
        sub_42DA40((__int64)&unk_490F90);
        if ( (a7 & 4) != 0 )
          goto LABEL_98;
      }
    }
    else
    {
      LODWORD(v52) = 0;
      while ( v36 != v88 )
      {
        v52 = (unsigned int)(v52 + 1);
        v88 = v86[(unsigned int)v52];
        if ( !v88 )
          goto LABEL_154;
      }
LABEL_146:
      v89 = *(_QWORD *)(v88 + 1208);
      sub_42DA40((__int64)&unk_490F90);
      *(_DWORD *)(v104 - 1852) = 1;
      __dmb(0xBu);
      if ( v102 == v89 )
      {
        v34 = v109;
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
  v34 = v109;
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
    v96 = v34;
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
    v34 = v96;
  }
LABEL_23:
  result = v36;
  *a3 = v34;
  return result;
}
