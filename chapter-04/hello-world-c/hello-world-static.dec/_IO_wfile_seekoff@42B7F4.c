__int64 __fastcall IO_wfile_seekoff(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  __int64 v12; // x23
  __int64 v13; // x24
  unsigned __int64 *v16; // x1
  unsigned __int64 v18; // x0
  unsigned __int64 v19; // x2
  _BOOL4 v20; // w24
  __int64 v21; // x23
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  __int64 v30; // x0
  int v31; // w1
  __int64 v32; // x0
  __int64 v33; // x2
  __int64 v34; // x25
  __int64 v35; // x23
  __int64 v36; // x25
  double v37; // d0
  double v38; // d1
  double v39; // d2
  double v40; // d3
  double v41; // d4
  double v42; // d5
  double v43; // d6
  double v44; // d7
  __int64 v45; // x26
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x0
  __int64 v49; // x24
  _QWORD *v50; // x2
  __int64 v51; // x4
  __int64 v52; // x3
  __int64 result; // x0
  __int64 v54; // x22
  int v55; // w0
  double v56; // d0
  double v57; // d1
  double v58; // d2
  double v59; // d3
  double v60; // d4
  double v61; // d5
  double v62; // d6
  double v63; // d7
  __int64 v64; // x0
  double v65; // d0
  double v66; // d1
  double v67; // d2
  double v68; // d3
  double v69; // d4
  double v70; // d5
  double v71; // d6
  double v72; // d7
  __int64 v73; // x23
  _QWORD *v74; // x1
  __int64 v75; // x3
  __int64 v76; // x2
  __int64 v77; // x0
  unsigned __int64 **v78; // x0
  __int64 v79; // x2
  unsigned __int64 v80; // x20
  unsigned __int64 v81; // x22
  int v82; // w2
  int v83; // w21
  bool v84; // cc
  __int64 v85; // x23
  __int64 v86; // x0
  unsigned __int64 v87; // x25
  unsigned __int64 v88; // x26
  unsigned __int64 v89; // x24
  __int64 v90; // x23
  int v91; // w0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  void *v95; // x4
  void *v96; // x5
  void *v97; // x6
  __int64 v98; // x3
  __int64 v99; // x20
  __int64 v100; // x0
  __int64 v101; // x3
  __int64 v102; // x0
  _QWORD *v104; // x2
  __int64 v105; // x4
  double v106; // d0
  double v107; // d1
  double v108; // d2
  double v109; // d3
  double v110; // d4
  double v111; // d5
  double v112; // d6
  double v113; // d7
  __int64 v114; // x1
  __int64 v115; // x21
  __int64 v116; // x2
  __int64 v117; // x3
  _QWORD *v118; // x1
  __int64 v119; // x4
  int v120; // w0
  __int64 v121; // x2
  __int64 *v122; // x3
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x0
  _QWORD *v127; // x22
  __int64 v128; // x24
  __int64 v129; // x25
  __int64 v130; // x20
  __int64 v131; // x20
  __int64 v132; // x1
  __int64 v133; // x21
  __int64 v134; // x0
  __int64 v135; // x8
  __int64 v136; // x22
  double v137; // d0
  double v138; // d1
  double v139; // d2
  double v140; // d3
  double v141; // d4
  double v142; // d5
  double v143; // d6
  double v144; // d7
  int v145; // w0
  __int64 v146; // x2
  __int64 v147; // [xsp+18h] [xbp-98h] BYREF
  __int64 v148; // [xsp+20h] [xbp-90h] BYREF
  _QWORD v149[2]; // [xsp+28h] [xbp-88h] BYREF
  int v150; // [xsp+38h] [xbp-78h]
  __int64 v151; // [xsp+58h] [xbp-58h]
  __int64 v152; // [xsp+E0h] [xbp+30h]
  __int64 v153; // [xsp+E8h] [xbp+38h]

  v16 = *(unsigned __int64 **)(a1 + 160);
  if ( a4 )
  {
    v19 = v16[3];
    v18 = v16[4];
    v20 = 0;
    if ( v16[2] == v16[1] )
      v20 = v19 == v18;
    if ( v19 >= v18 && (*(_DWORD *)a1 & 0x800) == 0 )
    {
LABEL_8:
      if ( v16[6] )
      {
        if ( a3 != 1 )
          goto LABEL_10;
      }
      else
      {
        v77 = v16[2];
        if ( v77 )
        {
          free(v77, a5, a6, a7, a8, a9, a10, a11, a12);
          *(_DWORD *)a1 &= ~0x100u;
        }
        IO_doallocbuf((int *)a1, a5, a6, a7, a8, a9, a10, a11, a12);
        v78 = *(unsigned __int64 ***)(a1 + 160);
        v79 = *(_QWORD *)(a1 + 56);
        v16 = v78[6];
        *(_QWORD *)(a1 + 8) = v79;
        *(_QWORD *)(a1 + 16) = v79;
        *(_QWORD *)(a1 + 24) = v79;
        *(_QWORD *)(a1 + 32) = v79;
        *(_QWORD *)(a1 + 40) = v79;
        *(_QWORD *)(a1 + 48) = v79;
        *v78 = v16;
        v78[1] = v16;
        v78[2] = v16;
        v78[3] = v16;
        v78[4] = v16;
        v78[5] = v16;
        if ( a3 != 1 )
        {
LABEL_10:
          if ( a3 == 2 )
          {
            v21 = *(_QWORD *)(a1 + 216);
            if ( (unsigned __int64)(v21 - (_QWORD)&_io_vtables) > 0x92F )
              IO_vtable_check(a5, a6, a7, a8, a9, a10, a11, a12);
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD *))(v21 + 144))(a1, v149) || (v150 & 0xF000) != 0x8000 )
              goto LABEL_39;
            a3 = 0;
            a2 += v151;
          }
          IO_free_wbackup_area((unsigned int *)a1, a5, a6, a7, a8, a9, a10, a11, a12);
          v30 = *(_QWORD *)(a1 + 144);
          if ( v30 != -1 )
            goto LABEL_17;
          goto LABEL_38;
        }
      }
      v54 = *(_QWORD *)(a1 + 152);
      v55 = _libio_codecvt_encoding(v54, v16);
      if ( v55 <= 0 )
      {
        v117 = *(_QWORD *)(a1 + 16);
        v116 = *(_QWORD *)(a1 + 24);
        v118 = *(_QWORD **)(a1 + 160);
        v119 = *v118 - v118[2];
        v118[11] = v118[12];
        v120 = _libio_codecvt_length(v54, v118 + 11, v116, v117, v119 >> 2);
        v121 = *(_QWORD *)(a1 + 24);
        v122 = *(__int64 **)(a1 + 160);
        v123 = *(_QWORD *)(a1 + 16) - v121;
        v124 = v121 + v120;
        v125 = v123 - v120;
        v126 = *v122;
        *(_QWORD *)(a1 + 8) = v124;
        a2 -= v125;
        v122[1] = v126;
      }
      else
      {
        a2 = a2
           - ((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) - **(_QWORD **)(a1 + 160)) >> 2) * v55
           - (*(_QWORD *)(a1 + 16)
            - *(_QWORD *)(a1 + 8));
      }
      v64 = *(_QWORD *)(a1 + 144);
      if ( v64 == -1 )
        goto LABEL_39;
      a2 += v64;
      IO_free_wbackup_area((unsigned int *)a1, v56, v57, v58, v59, v60, v61, v62, v63);
      a3 = 0;
      v30 = *(_QWORD *)(a1 + 144);
      if ( v30 != -1 )
      {
LABEL_17:
        v31 = *(_DWORD *)a1;
        if ( *(_QWORD *)(a1 + 24) && (v31 & 0x100) == 0 )
        {
          v84 = v30 <= a2;
          v101 = *(_QWORD *)(a1 + 56);
          v102 = v30 - (*(_QWORD *)(a1 + 16) - v101);
          if ( !v84 && a2 >= v102 )
          {
            v104 = *(_QWORD **)(a1 + 160);
            v105 = v104[6];
            *(_QWORD *)(a1 + 8) = v101 + a2 - v102;
            *(_QWORD *)(a1 + 24) = v101;
            *(_QWORD *)(a1 + 32) = v101;
            *(_QWORD *)(a1 + 40) = v101;
            *(_QWORD *)(a1 + 48) = v101;
            *v104 = v105;
            v104[1] = v105;
            v104[2] = v105;
            v104[3] = v105;
            v104[4] = v105;
            v104[5] = v105;
            if ( !(unsigned int)adjust_wide_data(a1, 0) )
            {
              v114 = *(_QWORD *)(a1 + 144);
              *(_DWORD *)a1 &= ~0x10u;
              if ( (v114 & 0x8000000000000000LL) == 0 )
              {
                v115 = *(_QWORD *)(a1 + 216);
                if ( (unsigned __int64)(v115 - (_QWORD)&_io_vtables) > 0x92F )
                  IO_vtable_check(v106, v107, v108, v109, v110, v111, v112, v113);
                (*(void (__fastcall **)(__int64))(v115 + 128))(a1);
              }
              return a2;
            }
            goto LABEL_39;
          }
        }
        if ( (v31 & 4) != 0 )
          goto LABEL_39;
        goto LABEL_20;
      }
LABEL_38:
      if ( (*(_DWORD *)a1 & 4) != 0 )
        goto LABEL_39;
LABEL_20:
      v33 = *(_QWORD *)(a1 + 56);
      v32 = *(_QWORD *)(a1 + 64);
      v34 = *(_QWORD *)(a1 + 216);
      v35 = a2 & ~(v33 - v32);
      if ( v32 - v33 < v35 )
        v35 = 0;
      if ( (unsigned __int64)(v34 - (_QWORD)&_io_vtables) > 0x92F )
        IO_vtable_check(v22, v23, v24, v25, v26, v27, v28, v29);
      v36 = (*(__int64 (__fastcall **)(__int64))(v34 + 128))(a1);
      if ( v36 < 0 )
        return -1;
      if ( !v35 )
      {
        v49 = 0;
        v48 = 0;
        goto LABEL_31;
      }
      v45 = *(_QWORD *)(a1 + 216);
      if ( (unsigned __int64)(v45 - (_QWORD)&_io_vtables) > 0x92F )
        IO_vtable_check(v37, v38, v39, v40, v41, v42, v43, v44);
      v46 = *(_QWORD *)(a1 + 56);
      v47 = v35;
      if ( !v20 )
        v47 = *(_QWORD *)(a1 + 64) - v46;
      v48 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v45 + 112))(a1, v46, v47);
      v49 = v48;
      if ( v35 <= v48 )
      {
LABEL_31:
        v50 = *(_QWORD **)(a1 + 160);
        v51 = *(_QWORD *)(a1 + 56);
        v52 = v50[6];
        *(_QWORD *)(a1 + 8) = v51 + v35;
        *(_QWORD *)(a1 + 16) = v51 + v48;
        *(_QWORD *)(a1 + 24) = v51;
        *(_QWORD *)(a1 + 32) = v51;
        *(_QWORD *)(a1 + 40) = v51;
        *(_QWORD *)(a1 + 48) = v51;
        *v50 = v52;
        v50[1] = v52;
        v50[2] = v52;
        v50[3] = v52;
        v50[4] = v52;
        v50[5] = v52;
        if ( !(unsigned int)adjust_wide_data(a1, 1) )
        {
          *(_DWORD *)a1 &= ~0x10u;
          *(_QWORD *)(a1 + 144) = v49 + v36;
          return a2;
        }
        goto LABEL_39;
      }
      if ( v48 == -1 )
        a2 = v35;
      else
        a2 = v35 - v48;
      a3 = 1;
LABEL_39:
      IO_unsave_markers(a1);
      v73 = *(_QWORD *)(a1 + 216);
      if ( (unsigned __int64)(v73 - (_QWORD)&_io_vtables) > 0x92F )
        IO_vtable_check(v65, v66, v67, v68, v69, v70, v71, v72);
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v73 + 128))(a1, a2, a3);
      if ( result != -1 )
      {
        v74 = *(_QWORD **)(a1 + 160);
        v75 = *(_QWORD *)(a1 + 56);
        v76 = v74[6];
        *(_DWORD *)a1 &= ~0x10u;
        *(_QWORD *)(a1 + 8) = v75;
        *(_QWORD *)(a1 + 16) = v75;
        *(_QWORD *)(a1 + 24) = v75;
        *(_QWORD *)(a1 + 32) = v75;
        *(_QWORD *)(a1 + 40) = v75;
        *(_QWORD *)(a1 + 48) = v75;
        *(_QWORD *)(a1 + 144) = result;
        *v74 = v76;
        v74[1] = v76;
        v74[2] = v76;
        v74[3] = v76;
        v74[4] = v76;
        v74[5] = v76;
      }
      return result;
    }
    if ( !(unsigned int)IO_switch_to_wget_mode((unsigned int *)a1) )
    {
      v16 = *(unsigned __int64 **)(a1 + 160);
      goto LABEL_8;
    }
    return 0xFFFFFFFFLL;
  }
  if ( v16[6] )
  {
    v80 = v16[3];
    v81 = v16[4];
    v152 = v12;
    v153 = v13;
    v82 = *(_DWORD *)a1;
    v83 = *(_DWORD *)a1 & 0x1000;
    if ( v83 )
      v84 = v81 > v80;
    else
      v84 = 0;
    if ( v84 )
    {
      v85 = *(_QWORD *)(a1 + 216);
      if ( (unsigned __int64)(v85 - (_QWORD)&_io_vtables) > 0x92F )
        IO_vtable_check(a5, a6, a7, a8, a9, a10, a11, a12);
      v86 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v85 + 128))(a1, 0, 2);
      if ( v86 == -1 )
        return -1;
      v16 = *(unsigned __int64 **)(a1 + 160);
      v82 = *(_DWORD *)a1;
      *(_QWORD *)(a1 + 144) = v86;
    }
    v88 = *v16;
    v87 = v16[1];
    if ( (v82 & 0x100) != 0 )
    {
      if ( v88 < v87 )
        goto LABEL_66;
      v89 = v16[8];
      v87 = v16[10];
      v88 = v89;
    }
    else
    {
      v89 = v16[2];
    }
    v90 = *(_QWORD *)(a1 + 152);
    v91 = _libio_codecvt_encoding(v90, v16);
    if ( v81 > v80 )
    {
      v127 = *(_QWORD **)(a1 + 160);
      v128 = v127[3];
      v129 = v127[4];
      v130 = v129 - v128;
      if ( v91 <= 0 )
      {
        v134 = malloc(v129 - v128, a5, a6, a7, a8, a9, a10, a11, a12, v92, v93, v94, v95, v96, v97);
        v135 = v127[12];
        v136 = v134;
        v147 = v134;
        v148 = v128;
        v149[0] = v135;
        v137 = _libio_codecvt_out(v90, v149, v128, v129, &v148, v147, v147 + v130, &v147);
        if ( v145 )
        {
          free(v136, v137, v138, v139, v140, v141, v142, v143, v144);
          return 0xFFFFFFFFLL;
        }
        v131 = v147 - v136;
        free(v136, v137, v138, v139, v140, v141, v142, v143, v144);
      }
      else
      {
        v131 = (v130 >> 2) * v91;
      }
      if ( v83 )
        v132 = *(_QWORD *)(a1 + 32);
      else
        v132 = *(_QWORD *)(a1 + 16);
      v99 = *(_QWORD *)(a1 + 40) - v132 + v131;
    }
    else
    {
      v98 = *(_QWORD *)(a1 + 16);
      if ( v91 <= 0 )
      {
        v146 = *(_QWORD *)(a1 + 24);
        v149[0] = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 96LL);
        v99 = (int)_libio_codecvt_length(v90, v149, v146, v98, (__int64)(v88 - v89) >> 2)
            - (*(_QWORD *)(a1 + 16)
             - *(_QWORD *)(a1 + 24));
      }
      else
      {
        v99 = -(v91 * ((__int64)(v87 - v88) >> 2)) - (v98 - *(_QWORD *)(a1 + 8));
      }
    }
  }
  else
  {
    v99 = 0;
  }
  v100 = *(_QWORD *)(a1 + 144);
  if ( v100 == -1 )
  {
    v133 = *(_QWORD *)(a1 + 216);
    if ( (unsigned __int64)(v133 - (_QWORD)&_io_vtables) > 0x92F )
      IO_vtable_check(a5, a6, a7, a8, a9, a10, a11, a12);
    v100 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v133 + 128))(a1, 0, 1);
    if ( v100 == -1 )
      return -1;
  }
  result = v99 + v100;
  if ( result < 0 )
  {
LABEL_66:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return -1;
  }
  return result;
}
