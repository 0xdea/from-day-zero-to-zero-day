unsigned __int8 *__fastcall Unwind_Find_FDE(
        unsigned __int64 a1,
        __int64 *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        void *a15)
{
  unsigned __int8 *v16; // x22
  int v17; // w0
  char *v18; // x2
  char *v19; // x0
  int v20; // w1
  unsigned __int8 *v21; // x0
  char v22; // w0
  unsigned __int64 v23; // x0
  unsigned __int64 v25; // x0
  __int64 v26; // x1
  unsigned __int64 v27; // x2
  unsigned __int64 v28; // x8
  unsigned __int64 v29; // x2
  int v30; // w3
  unsigned int v31; // w0
  unsigned __int64 *v32; // x7
  unsigned __int64 v33; // x2
  __int64 v34; // x0
  unsigned __int64 *v35; // x3
  __int64 i; // x2
  unsigned __int64 v37; // x4
  unsigned __int64 v38; // x0
  unsigned __int64 v39; // x0
  unsigned __int64 v40; // x2
  __int64 v41; // x0
  unsigned __int64 v42; // x1
  unsigned int v43; // t1
  unsigned __int64 v44; // x3
  unsigned __int8 *v45; // x19
  unsigned __int64 v46; // x1
  int *v47; // x20
  unsigned __int64 v48; // x2
  _QWORD *v49; // x2
  unsigned __int64 v50; // x4
  unsigned __int64 *v51; // x5
  unsigned __int64 v52; // x0
  __int64 v53; // x3
  char *j; // x2
  __int64 v55; // x19
  __int64 v56; // x1
  unsigned __int64 v57; // x0
  int v58; // w25
  __int64 v59; // x20
  _DWORD *v60; // x1
  _DWORD *v61; // t1
  _DWORD *v62; // x22
  int v63; // w7
  __int64 v64; // x5
  __int64 v65; // x20
  __int64 v66; // x19
  int cie_encoding; // w26
  __int64 v68; // x0
  __int64 v69; // x5
  unsigned __int64 v70; // x3
  unsigned __int64 v71; // x0
  unsigned __int64 v72; // x1
  unsigned __int8 *v73; // x28
  __int64 v74; // x26
  __int64 v75; // x23
  __int64 v76; // x0
  unsigned __int64 v77; // x27
  unsigned __int64 v78; // x28
  unsigned __int64 v79; // x21
  char *v80; // x0
  unsigned __int64 v81; // x20
  __int64 *v82; // x26
  __int64 v83; // t1
  __int64 v84; // x0
  unsigned __int64 v85; // x23
  unsigned __int64 v86; // x27
  unsigned __int64 v87; // x21
  __int64 v88; // t1
  int v89; // w20
  __int64 v90; // x1
  char *encoded_value_with_base; // x0
  int v92; // w0
  __int64 v93; // x0
  void *v94; // x4
  void *v95; // x5
  void *v96; // x6
  double v97; // d0
  double v98; // d1
  double v99; // d2
  double v100; // d3
  double v101; // d4
  double v102; // d5
  double v103; // d6
  double v104; // d7
  _QWORD *v105; // x25
  __int64 v106; // x27
  int v107; // w28
  char **v108; // x26
  char *v109; // t1
  unsigned __int64 v110; // x26
  void (__fastcall *v111)(__int64, char *, __int64); // x1
  double v112; // d0
  double v113; // d1
  double v114; // d2
  double v115; // d3
  double v116; // d4
  double v117; // d5
  double v118; // d6
  double v119; // d7
  __int64 v120; // x0
  __int64 (__fastcall *v121)(__int64, _QWORD, __int64); // x20
  _QWORD *v122; // x27
  int v123; // w28
  int v124; // w3
  int v125; // w0
  __int64 v126; // x26
  int v127; // w4
  __int64 v128; // x5
  int v129; // w5
  unsigned __int64 v130; // x0
  unsigned __int8 *v131; // x1
  __int64 v133; // [xsp+70h] [xbp+70h]
  __int64 v134; // [xsp+70h] [xbp+70h]
  int v135; // [xsp+70h] [xbp+70h]
  char *v136; // [xsp+80h] [xbp+80h] BYREF
  unsigned __int64 v137; // [xsp+88h] [xbp+88h] BYREF
  unsigned __int64 v138[6]; // [xsp+90h] [xbp+90h] BYREF
  unsigned __int64 v139[4]; // [xsp+C0h] [xbp+C0h] BYREF
  __int64 v140; // [xsp+E0h] [xbp+E0h]

  if ( !registered_frames )
    goto LABEL_2;
  do
  {
    while ( 1 )
    {
      do
      {
        do
LABEL_13:
          v25 = atomic_load((unsigned __int64 *)&qword_496D30);
        while ( (v25 & 1) != 0 );
        v26 = registered_frames;
        __dmb(9u);
        v27 = atomic_load((unsigned __int64 *)&qword_496D30);
      }
      while ( v25 != v27 );
      if ( !v26 )
        goto LABEL_2;
      v28 = atomic_load((unsigned __int64 *)v26);
      if ( (v28 & 1) == 0 )
      {
        __dmb(9u);
        v29 = atomic_load((unsigned __int64 *)&qword_496D30);
        if ( v25 == v29 )
          break;
      }
    }
    while ( 1 )
    {
      v30 = *(_DWORD *)(v26 + 12);
      v31 = *(_DWORD *)(v26 + 8);
      __dmb(9u);
      v32 = (unsigned __int64 *)v26;
      v33 = atomic_load((unsigned __int64 *)v26);
      if ( v28 != v33 )
        goto LABEL_13;
      if ( !v31 )
        goto LABEL_2;
      if ( v30 )
        break;
      v34 = v31 - 1;
      v35 = (unsigned __int64 *)(v26 + 16);
      for ( i = 0; v34 != i; ++i )
      {
        v37 = *v35;
        v35 += 2;
        if ( a1 <= v37 )
          break;
      }
      v26 = *(_QWORD *)(v26 + 16 * i + 24);
      __dmb(9u);
      v38 = atomic_load(v32);
      if ( v28 != v38 )
        goto LABEL_13;
      v39 = atomic_load((unsigned __int64 *)v26);
      if ( (v39 & 1) != 0 )
        goto LABEL_13;
      __dmb(9u);
      v40 = atomic_load(v32);
      if ( v28 != v40 )
        goto LABEL_13;
      v28 = v39;
    }
    v49 = (_QWORD *)(v26 + 24);
    LODWORD(v50) = 0;
    while ( 1 )
    {
      v50 = (unsigned int)(v50 + 1);
      v51 = v49 - 1;
      if ( v31 <= (unsigned int)v50 || a1 < *v51 + *v49 )
        break;
      v49 += 3;
    }
    v52 = *v51;
    v53 = *v49;
    j = (char *)(v49 + 1);
    v55 = *(_QWORD *)j;
    __dmb(9u);
    v56 = atomic_load((unsigned __int64 *)v26);
  }
  while ( v28 != v56 );
  if ( a1 < v52 || a1 >= v52 + v53 || !v55 )
    goto LABEL_2;
  v57 = atomic_load((unsigned __int64 *)(v55 + 32));
  v140 = v57;
  if ( (v57 & 1) != 0 )
    goto LABEL_54;
  v58 = *(_DWORD *)(v55 + 32);
  if ( (v58 & 1) == 0 )
  {
    v81 = (unsigned int)*(_QWORD *)(v55 + 32) >> 11;
    if ( !((unsigned int)*(_QWORD *)(v55 + 32) >> 11) )
    {
      v82 = *(__int64 **)(v55 + 24);
      if ( (v58 & 2) != 0 )
      {
        v56 = *v82;
        if ( !*v82 )
        {
LABEL_54:
          v58 = *(_DWORD *)(v55 + 32);
          if ( (v58 & 1) != 0 )
            goto LABEL_67;
          v59 = *(_QWORD *)(v55 + 24);
          if ( (v58 & 2) != 0 )
          {
            v60 = *(_DWORD **)v59;
            if ( !*(_QWORD *)v59 )
              goto LABEL_2;
            while ( 1 )
            {
              v62 = linear_search_fdes((_QWORD *)v55, v60, a1, v53);
              if ( v62 )
                break;
              v61 = *(_DWORD **)(v59 + 8);
              v59 += 8;
              v60 = v61;
              if ( !v61 )
                goto LABEL_2;
            }
          }
          else
          {
            v62 = linear_search_fdes((_QWORD *)v55, *(_DWORD **)(v55 + 24), a1, v53);
            if ( !v62 )
              goto LABEL_2;
          }
          v63 = v58 & 4;
LABEL_61:
          v64 = *(_QWORD *)(v55 + 32);
          v65 = *(_QWORD *)(v55 + 8);
          v66 = *(_QWORD *)(v55 + 16);
          *a2 = v65;
          a2[1] = v66;
          cie_encoding = (unsigned __int8)((unsigned int)v64 >> 3);
          if ( v63 )
          {
            v73 = (unsigned __int8 *)(v62 + 1);
            v74 = -(__int64)(int)v62[1];
LABEL_80:
            cie_encoding = (unsigned __int8)get_cie_encoding(&v73[v74]);
          }
LABEL_62:
          if ( cie_encoding == 255 )
            goto LABEL_78;
          v68 = cie_encoding & 0x70;
          if ( (_DWORD)v68 == 32 )
          {
            v56 = v65;
            goto LABEL_66;
          }
          if ( (unsigned int)v68 <= 0x20 )
          {
LABEL_78:
            v56 = 0;
          }
          else
          {
            v56 = v66;
            if ( (_DWORD)v68 != 48 )
            {
              v56 = 0;
              if ( (_DWORD)v68 != 80 )
                goto LABEL_137;
            }
          }
LABEL_66:
          read_encoded_value_with_base(cie_encoding, v56, (char *)v62 + 8, v139);
          a2[2] = v139[0];
          return (unsigned __int8 *)v62;
        }
        while ( 1 )
        {
          v84 = classify_object_over_fdes(v55, (char *)v56, 0);
          if ( v84 == -1 )
            break;
          v83 = v82[1];
          ++v82;
          v56 = v83;
          v81 += v84;
          if ( !v83 )
            goto LABEL_121;
        }
LABEL_100:
        v56 = 2040;
        *(_QWORD *)(v55 + 24) = &terminator_1;
        *(_QWORD *)(v55 + 32) = 2040;
        goto LABEL_54;
      }
      v81 = classify_object_over_fdes(v55, *(char **)(v55 + 24), 0);
      if ( v81 == -1 )
        goto LABEL_100;
LABEL_121:
      v56 = 0x1FFFFF;
      v92 = *(_DWORD *)(v55 + 32) & 0x7FF | ((_DWORD)v81 << 11);
      *(_DWORD *)(v55 + 32) = v92;
      if ( v81 <= 0x1FFFFF )
      {
        if ( !v81 )
          goto LABEL_54;
      }
      else
      {
        *(_DWORD *)(v55 + 32) = v92 & 0x7FF;
      }
    }
    v93 = malloc(8 * (v81 + 2), a3, a4, a5, a6, a7, a8, a9, a10, v56, (__int64)j, v53, (void *)v50, v51, a15);
    v105 = (_QWORD *)v93;
    if ( v93 )
    {
      *(_QWORD *)(v93 + 8) = 0;
      v68 = malloc(8 * (v81 + 2), v97, v98, v99, v100, v101, v102, v103, v104, v56, (__int64)j, v53, v94, v95, v96);
      v106 = v68;
      if ( v68 )
        *(_QWORD *)(v68 + 8) = 0;
      v107 = *(_DWORD *)(v55 + 32);
      v108 = *(char ***)(v55 + 24);
      if ( (v107 & 2) != 0 )
      {
        j = *v108;
        if ( !*v108 )
          goto LABEL_137;
        do
        {
          v68 = add_fdes_isra_0(v55, (__int64)v105, j, v53);
          v109 = v108[1];
          ++v108;
          j = v109;
        }
        while ( v109 );
      }
      else
      {
        v68 = add_fdes_isra_0(v55, (__int64)v105, *(char **)(v55 + 24), v53);
      }
      v110 = v105[1];
      if ( v81 != v110 )
LABEL_137:
        abort(v68, v56, (__int64)j, v53);
      if ( v106 )
      {
        if ( (v107 & 4) != 0 )
        {
          v111 = (void (__fastcall *)(__int64, char *, __int64))fde_mixed_encoding_extract;
        }
        else
        {
          v111 = (void (__fastcall *)(__int64, char *, __int64))fde_single_encoding_extract;
          if ( (v107 & 0x7F8) == 0 )
            v111 = (void (__fastcall *)(__int64, char *, __int64))fde_unencoded_extract;
        }
        fde_radixsort(v55, v111, (__int64)v105, v106);
        free(v106, v112, v113, v114, v115, v116, v117, v118, v119);
      }
      else
      {
        if ( (v107 & 4) != 0 )
        {
          v121 = fde_mixed_encoding_compare;
        }
        else
        {
          v121 = (__int64 (__fastcall *)(__int64, _QWORD, __int64))fde_single_encoding_compare;
          if ( (v107 & 0x7F8) == 0 )
            v121 = fde_unencoded_compare;
        }
        v135 = v105[1];
        v122 = v105 + 2;
        v123 = (v110 >> 1) - 1;
        if ( v123 >= 0 )
        {
          do
          {
            v124 = v123--;
            frame_downheap(v55, v121, (__int64)(v105 + 2), v124, v135);
          }
          while ( v123 != -1 );
        }
        v125 = v110 - 1;
        v126 = (unsigned int)(v110 - 1);
        if ( v125 > 0 )
        {
          do
          {
            v127 = v126;
            v128 = v105[2];
            v105[2] = v122[v126];
            v122[v126--] = v128;
            frame_downheap(v55, v121, (__int64)(v105 + 2), 0, v127);
          }
          while ( (int)v126 > 0 );
        }
      }
      *v105 = *(_QWORD *)(v55 + 24);
      v120 = *(_QWORD *)(v55 + 32);
      *(_QWORD *)(v55 + 24) = v105;
      v140 = v120 | 1;
      atomic_store(v120 | 1, (unsigned __int64 *)(v55 + 32));
    }
    goto LABEL_54;
  }
LABEL_67:
  v63 = v58 & 4;
  if ( (v58 & 4) != 0 )
  {
    v134 = *(_QWORD *)(v55 + 24);
    v85 = *(_QWORD *)(v134 + 8);
    if ( !v85 )
      goto LABEL_2;
    v86 = 0;
    while ( 1 )
    {
      v87 = (v85 + v86) >> 1;
      v62 = *(_DWORD **)(v134 + 8 * (v87 + 2));
      v88 = (int)v62[1];
      v73 = (unsigned __int8 *)(v62 + 1);
      v74 = -v88;
      v89 = (unsigned __int8)get_cie_encoding((unsigned __int8 *)v62 - v88 + 4);
      if ( v89 == 255 )
        goto LABEL_115;
      v68 = v89 & 0x70;
      if ( (_DWORD)v68 != 32 )
        break;
      v90 = *(_QWORD *)(v55 + 8);
LABEL_112:
      encoded_value_with_base = read_encoded_value_with_base(v89, v90, (char *)v62 + 8, v138);
      read_encoded_value_with_base(v89 & 0xF, 0, encoded_value_with_base, v139);
      if ( a1 >= v138[0] )
      {
        if ( a1 < v138[0] + v139[0] )
        {
          v65 = *(_QWORD *)(v55 + 8);
          v66 = *(_QWORD *)(v55 + 16);
          *a2 = v65;
          a2[1] = v66;
          goto LABEL_80;
        }
        v86 = v87 + 1;
      }
      else
      {
        v85 = (v85 + v86) >> 1;
      }
      if ( v86 >= v85 )
        goto LABEL_2;
    }
    if ( (unsigned int)v68 > 0x20 )
    {
      if ( (_DWORD)v68 == 48 )
      {
        v90 = *(_QWORD *)(v55 + 16);
        goto LABEL_112;
      }
      if ( (_DWORD)v68 != 80 )
        goto LABEL_137;
    }
LABEL_115:
    v90 = 0;
    goto LABEL_112;
  }
  if ( (v58 & 0x7F8) == 0 )
  {
    v69 = *(_QWORD *)(v55 + 24);
    v70 = 0;
    for ( j = *(char **)(v69 + 8); v70 < (unsigned __int64)j; j = (char *)((unsigned __int64)&j[v70] >> 1) )
    {
      while ( 1 )
      {
        v71 = (unsigned __int64)&j[v70] >> 1;
        v62 = *(_DWORD **)(v69 + 8 * (v71 + 2));
        v72 = *((_QWORD *)v62 + 1);
        if ( a1 < v72 )
          break;
        v53 = *((_QWORD *)v62 + 2);
        if ( a1 < v72 + v53 )
          goto LABEL_61;
        v70 = v71 + 1;
        if ( v71 + 1 >= (unsigned __int64)j )
          goto LABEL_2;
      }
    }
    goto LABEL_2;
  }
  v75 = *(_QWORD *)(v55 + 24);
  cie_encoding = (unsigned __int8)((unsigned int)*(_QWORD *)(v55 + 32) >> 3);
  if ( cie_encoding != 255 )
  {
    v76 = cie_encoding & 0x70;
    if ( (_DWORD)v76 == 32 )
    {
      v133 = *(_QWORD *)(v55 + 8);
      goto LABEL_86;
    }
    if ( (unsigned int)v76 > 0x20 )
    {
      if ( (_DWORD)v76 == 48 )
      {
        v133 = *(_QWORD *)(v55 + 16);
      }
      else
      {
        v133 = 0;
        if ( (_DWORD)v76 != 80 )
          abort(v76, v56, (__int64)j, v53);
      }
      goto LABEL_86;
    }
  }
  v133 = 0;
LABEL_86:
  v77 = *(_QWORD *)(v75 + 8);
  if ( !v77 )
    goto LABEL_2;
  v78 = 0;
  while ( 1 )
  {
    v79 = (v78 + v77) >> 1;
    v62 = *(_DWORD **)(v75 + 8 * (v79 + 2));
    v80 = read_encoded_value_with_base(cie_encoding, v133, (char *)v62 + 8, v138);
    read_encoded_value_with_base(cie_encoding & 0xF, 0, v80, v139);
    if ( a1 < v138[0] )
    {
      v77 = (v78 + v77) >> 1;
      goto LABEL_90;
    }
    if ( a1 < v138[0] + v139[0] )
      break;
    v78 = v79 + 1;
LABEL_90:
    if ( v78 >= v77 )
      goto LABEL_2;
  }
  if ( v62 )
  {
    v65 = *(_QWORD *)(v55 + 8);
    v66 = *(_QWORD *)(v55 + 16);
    *a2 = v65;
    a2[1] = v66;
    goto LABEL_62;
  }
LABEL_2:
  if ( (unsigned int)dl_find_object(a1, (__int64)v139) )
    return 0;
  v16 = (unsigned __int8 *)v140;
  if ( !v140 )
    return v16;
  if ( *(_BYTE *)v140 != 1 )
    return 0;
  v17 = *(unsigned __int8 *)(v140 + 1);
  v18 = (char *)(v140 + 4);
  if ( v17 == 27 )
  {
    v19 = (char *)(v140 + 8);
    v136 = &v18[*(int *)(v140 + 4)];
  }
  else
  {
    v19 = read_encoded_value_with_base(v17, 0, v18, (unsigned __int64 *)&v136);
  }
  v20 = v16[2];
  if ( v20 == 255 || v16[3] != 59 )
    goto LABEL_9;
  if ( v20 == 3 )
  {
    v43 = *(_DWORD *)v19;
    v41 = (__int64)(v19 + 4);
    v42 = v43;
    v137 = v43;
  }
  else
  {
    v41 = (__int64)read_encoded_value_with_base(v20, 0, v19, &v137);
    v42 = v137;
  }
  if ( !v42 )
    return 0;
  v44 = v41 & 3;
  if ( (v41 & 3) != 0 )
  {
LABEL_9:
    memset(v138, 0, 24);
    v138[3] = (unsigned __int64)v136;
    v138[4] = 4;
    v21 = (unsigned __int8 *)linear_search_fdes(v138, v136, a1, 4);
    v16 = v21;
    if ( v21 )
    {
      v22 = get_cie_encoding(&v21[-*((int *)v21 + 1) + 4]);
      read_encoded_value_with_base(v22, 0, (char *)v16 + 8, &v137);
      v23 = v137;
      *a2 = 0;
      a2[1] = 0;
      a2[2] = v23;
    }
    return v16;
  }
  v45 = v16;
  if ( a1 < (unsigned __int64)&v16[*(int *)v41] )
    return 0;
  v46 = v42 - 1;
  v47 = (int *)(v41 + 8 * v46);
  v48 = (unsigned __int64)&v16[*v47];
  if ( a1 >= v48 )
    goto LABEL_157;
  if ( !v46 )
LABEL_166:
    abort(v41, v46, v48, v44);
  while ( 2 )
  {
    v48 = (v46 + v44) >> 1;
    v47 = (int *)(v41 + 8 * v48);
    if ( a1 < (unsigned __int64)&v16[*v47] )
    {
      v46 = (v46 + v44) >> 1;
LABEL_40:
      if ( v46 <= v44 )
        goto LABEL_166;
      continue;
    }
    break;
  }
  ++v48;
  if ( a1 >= (unsigned __int64)&v16[v47[2]] )
  {
    v44 = v48;
    goto LABEL_40;
  }
  if ( v46 <= v44 )
    goto LABEL_166;
LABEL_157:
  v16 += v47[1];
  v129 = get_cie_encoding(&v16[-*((int *)v16 + 1) + 4]);
  v41 = (unsigned __int8)v129;
  if ( (unsigned __int8)v129 == 255 )
  {
    LODWORD(v46) = 0;
    goto LABEL_170;
  }
  v48 = v129 & 7;
  if ( (_DWORD)v48 == 2 )
  {
    LODWORD(v46) = 2;
    v44 = 10;
    goto LABEL_161;
  }
  if ( (unsigned int)v48 <= 2 )
  {
    if ( (v129 & 7) == 0 )
      goto LABEL_172;
    goto LABEL_166;
  }
  v44 = 12;
  v46 = 4;
  if ( (_DWORD)v48 == 3 )
    goto LABEL_161;
  if ( (_DWORD)v48 != 4 )
    goto LABEL_166;
LABEL_172:
  v44 = 16;
  LODWORD(v46) = 8;
LABEL_161:
  if ( v129 == 27 )
  {
    v130 = *(int *)&v16[v44];
    v138[0] = v130;
    goto LABEL_163;
  }
LABEL_170:
  read_encoded_value_with_base(v129 & 0xF, 0, (char *)&v16[(unsigned int)(v46 + 8)], v138);
  v130 = v138[0];
LABEL_163:
  v131 = &v45[*v47];
  if ( a1 < (unsigned __int64)&v131[v130] )
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = (__int64)v131;
    return v16;
  }
  return 0;
}
