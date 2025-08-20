__int64 *__usercall sub_40D3C0@<X0>(__int64 a1@<X3>, void *a2@<X4>, void *a3@<X5>, void *a4@<X6>, _OWORD *a5@<X8>)
{
  __int64 v5; // x25
  __int64 v6; // x26
  __int64 v7; // x28
  __int64 v8; // x30
  int *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  void *v14; // x4
  void *v15; // x5
  void *v16; // x6
  double v17; // d0
  double v18; // d1
  double v19; // d2
  double v20; // d3
  double v21; // d4
  double v22; // d5
  double v23; // d6
  double v24; // d7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  void *v28; // x4
  void *v29; // x5
  void *v30; // x6
  __int128 v31; // q4
  __int128 v32; // q1
  __int128 v33; // q2
  __int128 v34; // q0
  __int64 *result; // x0
  int32x4_t *v36; // x8
  int32x4_t *v37; // x19
  __int64 v38; // x3
  int32x4_t v39; // q1
  unsigned __int64 v40; // d0
  __int64 v41; // x3
  void *v42; // x4
  void *v43; // x5
  void *v44; // x6
  int v45; // w22
  int v46; // w23
  __int128 v47; // q0
  int *v48; // x19
  unsigned int v49; // w21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  void *v53; // x4
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
  int v64; // w24
  int v65; // w0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  void *v69; // x4
  void *v70; // x5
  void *v71; // x6
  __int64 v72; // x3
  __int64 v73; // x1
  __int64 v74; // x3
  void *v75; // x4
  void *v76; // x5
  void *v77; // x6
  int v78; // w19
  __int64 v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  void *v83; // x4
  void *v84; // x5
  void *v85; // x6
  double v86; // d0
  double v87; // d1
  double v88; // d2
  double v89; // d3
  double v90; // d4
  double v91; // d5
  double v92; // d6
  double v93; // d7
  unsigned int v94; // w19
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  void *v98; // x4
  void *v99; // x5
  void *v100; // x6
  char v101; // w0
  int v102; // [xsp+5Ch] [xbp-1A4h]
  _OWORD v103[3]; // [xsp+68h] [xbp-198h] BYREF
  __int128 v104; // [xsp+98h] [xbp-168h]
  __int128 v105; // [xsp+A8h] [xbp-158h]
  __int64 v106; // [xsp+B8h] [xbp-148h]
  _QWORD *v107; // [xsp+C0h] [xbp-140h]
  __int64 v108; // [xsp+C8h] [xbp-138h]
  int32x4_t *v109; // [xsp+D0h] [xbp-130h]
  __int128 *v110; // [xsp+D8h] [xbp-128h]
  int *v111; // [xsp+E0h] [xbp-120h]
  _OWORD *v112; // [xsp+E8h] [xbp-118h]
  __int64 v113; // [xsp+100h] [xbp-100h]
  __int64 v114; // [xsp+108h] [xbp-F8h]
  __int64 v115; // [xsp+118h] [xbp-E8h]
  int32x4_t v116[5]; // [xsp+120h] [xbp-E0h] BYREF
  __int64 v117; // [xsp+178h] [xbp-88h]
  _QWORD v118[5]; // [xsp+180h] [xbp-80h] BYREF
  __int128 v119; // [xsp+1A8h] [xbp-58h] BYREF
  __int128 v120; // [xsp+1B8h] [xbp-48h]
  __int128 v121; // [xsp+1C8h] [xbp-38h]
  __int128 v122; // [xsp+1D8h] [xbp-28h]
  __int128 v123; // [xsp+1E8h] [xbp-18h]
  __int64 v124; // [xsp+1F8h] [xbp-8h]
  __int64 vars0; // [xsp+200h] [xbp+0h] BYREF

  v124 = qword_48DD60;
  if ( (byte_496690 & 1) == 0 )
    sub_407FA0((__int64)&qword_48DD60, (unsigned __int8)byte_496690, 0, a1, a2, a3, a4);
  v10 = &dword_490670;
  v119 = 0u;
  v120 = 0u;
  v121 = 0u;
  v122 = 0u;
  v123 = 0u;
  do
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v10) )
      sub_406F40(v10, v17, v18, v19, v20, v21, v22, v23, v24, v11, v12, v13, v14, v15, v16);
    ((void (__fastcall *)(int *, __int128 *))loc_407390)(v10, &v119);
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v10) > 1 )
      sub_407040(v10, v25, v26, v27, v28, v29, v30);
    v10 = (int *)*((_QWORD *)v10 + 270);
  }
  while ( v10 != &dword_490670 );
  v31 = v120;
  v32 = v121;
  v33 = v122;
  v34 = v123;
  *a5 = v119;
  a5[1] = v31;
  result = &qword_48DD60;
  a5[2] = v32;
  a5[3] = v33;
  a5[4] = v34;
  if ( v124 != qword_48DD60 )
  {
    sub_412340(&qword_48DD60, 0, v124 - qword_48DD60, v27);
    v118[0] = &vars0;
    v118[1] = v8;
    v118[2] = v10;
    v37 = v36;
    v117 = qword_48DD60;
    sub_40D3C0(v116, &qword_48DD60, 0);
    v39 = vuzp1q_s32(v116[2], v116[3]);
    v40 = vmovn_s64(v116[4]).n64_u64[0];
    result = &qword_48DD60;
    *v37 = vuzp1q_s32(v116[0], v116[1]);
    v37[1] = v39;
    v37[2].n128_u64[0] = v40;
    if ( v117 != qword_48DD60 )
    {
      sub_412340(&qword_48DD60, 0, v117 - qword_48DD60, v38);
      v107 = v118;
      v108 = v8;
      v109 = v37;
      v110 = &v119;
      v111 = &dword_490670;
      v112 = a5;
      v113 = v5;
      v114 = v6;
      v115 = v7;
      v45 = qword_490620;
      v106 = qword_48DD60;
      v46 = qword_490620;
      if ( (byte_496690 & 1) == 0 )
        sub_407FA0((__int64)&qword_48DD60, (unsigned __int8)byte_496690, 0, v41, v42, v43, v44);
      v47 = 0u;
      v48 = &dword_490670;
      v49 = 0;
      v102 = *(_DWORD *)(*(_QWORD *)aXi + 0x74LL);
      *(_DWORD *)(*(_QWORD *)aXi + 0x74LL) = v102 | 2;
      while ( 1 )
      {
        v103[0] = v47;
        v103[1] = v47;
        v103[2] = v47;
        v104 = v47;
        v105 = v47;
        if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v48) )
          sub_406F40(v48, v56, v57, v58, v59, v60, v61, v62, v63, v50, v51, v52, v53, v54, v55);
        ((void (__fastcall *)(int *, _OWORD *))loc_407390)(v48, v103);
        sub_412240(*(_QWORD *)aXi, 2, "Arena %d:\n", v49);
        v64 = v103[0];
        sub_412240(*(_QWORD *)aXi, 2, "system bytes     = %10u\n", LODWORD(v103[0]));
        v46 += v64;
        v45 += DWORD2(v104);
        sub_412240(*(_QWORD *)aXi, 2, "in use bytes     = %10u\n", DWORD2(v104));
        v65 = _aarch64_swp4_rel(0, (atomic_uint *)v48);
        v47 = 0u;
        if ( v65 > 1 )
        {
          sub_407040(v48, v66, v67, v68, v69, v70, v71);
          v47 = 0u;
        }
        v48 = (int *)*((_QWORD *)v48 + 270);
        if ( v48 == &dword_490670 )
          break;
        ++v49;
      }
      sub_429110("Total (incl. mmap):\n", 1, 20, *(_QWORD *)aXi);
      sub_412240(*(_QWORD *)aXi, 2, "system bytes     = %10u\n", v46);
      sub_412240(*(_QWORD *)aXi, 2, "in use bytes     = %10u\n", v45);
      sub_412240(*(_QWORD *)aXi, 2, "max mmap regions = %10u\n", dword_490614);
      sub_412240(*(_QWORD *)aXi, 2, "max mmap bytes   = %10lu\n", qword_490628);
      result = &qword_48DD60;
      *(_DWORD *)(*(_QWORD *)aXi + 0x74LL) = v102;
      if ( v106 != qword_48DD60 )
      {
        v78 = sub_412340(&qword_48DD60, 0, v106 - qword_48DD60, v72);
        v79 = (int)v73;
        if ( (byte_496690 & 1) != 0 )
        {
          if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)&dword_490670) )
            goto LABEL_23;
        }
        else
        {
          sub_407FA0((unsigned __int8)byte_496690, v73, (__int64)&byte_496688, v74, v75, v76, v77);
          if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)&dword_490670) )
            goto LABEL_23;
        }
        sub_406F40(&dword_490670, v86, v87, v88, v89, v90, v91, v92, v93, v80, v81, v82, v83, v84, v85);
LABEL_23:
        sub_407D40((__int64)&dword_490670);
        if ( v78 == -3 )
        {
          v94 = 1;
          qword_4905E0 = v79;
          dword_490618 = 1;
          goto LABEL_39;
        }
        if ( v78 >= -2 )
        {
          switch ( v78 )
          {
            case -1:
              qword_4905D0 = v79;
              v94 = 1;
              dword_490618 = 1;
              goto LABEL_39;
            case 1:
              v94 = 0;
              if ( (unsigned __int64)(int)v79 <= 0xA0 )
              {
                v101 = (v79 + 8) & 0xF0;
                v94 = 1;
                if ( (unsigned __int64)(int)v79 <= 7 )
                  v101 = 16;
                byte_496688 = v101;
              }
              goto LABEL_39;
            case -2:
              v94 = 1;
              qword_4905D8 = v79;
              dword_490618 = 1;
              goto LABEL_39;
          }
        }
        else
        {
          if ( v78 == -6 )
          {
            v94 = 1;
            dword_49668C = v79;
            goto LABEL_39;
          }
          if ( v78 >= -5 )
          {
            if ( v78 == -4 )
            {
              v94 = 1;
              dword_490610 = v79;
              dword_490618 = 1;
              goto LABEL_39;
            }
          }
          else if ( v78 == -8 )
          {
            if ( (int)v79 > 0 )
            {
              v94 = 1;
              qword_4905F0 = v79;
              goto LABEL_39;
            }
          }
          else if ( v78 == -7 && (int)v79 > 0 )
          {
            qword_4905E8 = v79;
          }
        }
        v94 = 1;
LABEL_39:
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&dword_490670) > 1 )
          sub_407040(&dword_490670, v95, v96, v97, v98, v99, v100);
        return (__int64 *)v94;
      }
    }
  }
  return result;
}
