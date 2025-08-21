__int64 *__usercall sub_40D3C0@<X0>(
        _OWORD *a1@<X8>,
        long double a2@<Q0>,
        long double a3@<Q1>,
        long double a4@<Q2>,
        long double a5@<Q3>,
        long double a6@<Q4>,
        long double a7@<Q5>,
        long double a8@<Q6>,
        long double a9@<Q7>)
{
  __int64 v9; // x25
  __int64 v10; // x26
  __int64 v11; // x28
  __int64 v12; // x30
  atomic_uint *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  void *v18; // x4
  void *v19; // x5
  void *v20; // x6
  __int64 v21; // x3
  __int128 v22; // q4
  __int128 v23; // q1
  __int128 v24; // q2
  __int128 v25; // q0
  __int64 *result; // x0
  int32x4_t *v27; // x8
  int32x4_t *v28; // x19
  long double v29; // q0
  long double v30; // q1
  long double v31; // q2
  long double v32; // q3
  long double v33; // q4
  long double v34; // q5
  long double v35; // q6
  long double v36; // q7
  __int64 v37; // x3
  int32x4_t v38; // q1
  unsigned __int64 v39; // d0
  long double v40; // q0
  long double v41; // q1
  long double v42; // q2
  long double v43; // q3
  long double v44; // q4
  long double v45; // q5
  long double v46; // q6
  long double v47; // q7
  int v48; // w22
  int v49; // w23
  __int128 v50; // q0
  atomic_uint *v51; // x19
  unsigned int v52; // w21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  void *v56; // x4
  void *v57; // x5
  void *v58; // x6
  int v59; // w24
  int v60; // w0
  __int64 v61; // x3
  int v62; // w19
  long double v63; // q0
  long double v64; // q1
  long double v65; // q2
  long double v66; // q3
  long double v67; // q4
  long double v68; // q5
  long double v69; // q6
  long double v70; // q7
  int v71; // w1
  __int64 v72; // x20
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  void *v76; // x4
  void *v77; // x5
  void *v78; // x6
  unsigned int v79; // w19
  char v80; // w0
  int v81; // [xsp+5Ch] [xbp-1A4h]
  _OWORD v82[3]; // [xsp+68h] [xbp-198h] BYREF
  __int128 v83; // [xsp+98h] [xbp-168h]
  __int128 v84; // [xsp+A8h] [xbp-158h]
  __int64 v85; // [xsp+B8h] [xbp-148h]
  _QWORD *v86; // [xsp+C0h] [xbp-140h]
  __int64 v87; // [xsp+C8h] [xbp-138h]
  int32x4_t *v88; // [xsp+D0h] [xbp-130h]
  __int128 *v89; // [xsp+D8h] [xbp-128h]
  _DWORD *v90; // [xsp+E0h] [xbp-120h]
  _OWORD *v91; // [xsp+E8h] [xbp-118h]
  __int64 v92; // [xsp+100h] [xbp-100h]
  __int64 v93; // [xsp+108h] [xbp-F8h]
  __int64 v94; // [xsp+118h] [xbp-E8h]
  int32x4_t v95[5]; // [xsp+120h] [xbp-E0h] BYREF
  __int64 v96; // [xsp+178h] [xbp-88h]
  _QWORD v97[5]; // [xsp+180h] [xbp-80h] BYREF
  __int128 v98; // [xsp+1A8h] [xbp-58h] BYREF
  __int128 v99; // [xsp+1B8h] [xbp-48h]
  __int128 v100; // [xsp+1C8h] [xbp-38h]
  __int128 v101; // [xsp+1D8h] [xbp-28h]
  __int128 v102; // [xsp+1E8h] [xbp-18h]
  __int64 v103; // [xsp+1F8h] [xbp-8h]
  __int64 vars0; // [xsp+200h] [xbp+0h] BYREF

  v103 = qword_48DD60;
  if ( (byte_496690 & 1) == 0 )
    sub_407FA0(a2, a3, a4, a5, a6, a7, a8, a9);
  v14 = (atomic_uint *)&dword_490670;
  v98 = 0u;
  v99 = 0u;
  v100 = 0u;
  v101 = 0u;
  v102 = 0u;
  do
  {
    if ( _aarch64_cas4_acq(0, 1u, v14) )
      sub_406F40(v14, v15, v16, v17, v18, v19, v20);
    ((void (__fastcall *)(atomic_uint *, __int128 *))loc_407390)(v14, &v98);
    if ( (int)_aarch64_swp4_rel(0, v14) > 1 )
      sub_407040(v14);
    v14 = (atomic_uint *)*((_QWORD *)v14 + 270);
  }
  while ( v14 != (atomic_uint *)&dword_490670 );
  v22 = v99;
  v23 = v100;
  v24 = v101;
  v25 = v102;
  *a1 = v98;
  a1[1] = v22;
  result = &qword_48DD60;
  a1[2] = v23;
  a1[3] = v24;
  a1[4] = v25;
  if ( v103 != qword_48DD60 )
  {
    sub_412340(&qword_48DD60, 0, v103 - qword_48DD60, v21);
    v97[0] = &vars0;
    v97[1] = v12;
    v97[2] = v14;
    v28 = v27;
    v96 = qword_48DD60;
    sub_40D3C0(v95, v29, v30, v31, v32, v33, v34, v35, v36);
    v38 = vuzp1q_s32(v95[2], v95[3]);
    v39 = vmovn_s64(v95[4]).n64_u64[0];
    result = &qword_48DD60;
    *v28 = vuzp1q_s32(v95[0], v95[1]);
    v28[1] = v38;
    v28[2].n128_u64[0] = v39;
    if ( v96 != qword_48DD60 )
    {
      sub_412340(&qword_48DD60, 0, v96 - qword_48DD60, v37);
      v86 = v97;
      v87 = v12;
      v88 = v28;
      v89 = &v98;
      v90 = &dword_490670;
      v91 = a1;
      v92 = v9;
      v93 = v10;
      v94 = v11;
      v48 = qword_490620;
      v85 = qword_48DD60;
      v49 = qword_490620;
      if ( (byte_496690 & 1) == 0 )
        sub_407FA0(v40, v41, v42, v43, v44, v45, v46, v47);
      v50 = 0u;
      v51 = (atomic_uint *)&dword_490670;
      v52 = 0;
      v81 = *(_DWORD *)(*(_QWORD *)aXi + 0x74LL);
      *(_DWORD *)(*(_QWORD *)aXi + 0x74LL) = v81 | 2;
      while ( 1 )
      {
        v82[0] = v50;
        v82[1] = v50;
        v82[2] = v50;
        v83 = v50;
        v84 = v50;
        if ( _aarch64_cas4_acq(0, 1u, v51) )
          sub_406F40(v51, v53, v54, v55, v56, v57, v58);
        ((void (__fastcall *)(atomic_uint *, _OWORD *))loc_407390)(v51, v82);
        sub_412240(*(_QWORD *)aXi, 2, "Arena %d:\n", v52);
        v59 = v82[0];
        sub_412240(*(_QWORD *)aXi, 2, "system bytes     = %10u\n", LODWORD(v82[0]));
        v49 += v59;
        v48 += DWORD2(v83);
        sub_412240(*(_QWORD *)aXi, 2, "in use bytes     = %10u\n", DWORD2(v83));
        v60 = _aarch64_swp4_rel(0, v51);
        v50 = 0u;
        if ( v60 > 1 )
        {
          sub_407040(v51);
          v50 = 0u;
        }
        v51 = (atomic_uint *)*((_QWORD *)v51 + 270);
        if ( v51 == (atomic_uint *)&dword_490670 )
          break;
        ++v52;
      }
      sub_429110("Total (incl. mmap):\n", 1, 20, *(_QWORD *)aXi);
      sub_412240(*(_QWORD *)aXi, 2, "system bytes     = %10u\n", v49);
      sub_412240(*(_QWORD *)aXi, 2, "in use bytes     = %10u\n", v48);
      sub_412240(*(_QWORD *)aXi, 2, "max mmap regions = %10u\n", dword_490614);
      sub_412240(*(_QWORD *)aXi, 2, "max mmap bytes   = %10lu\n", qword_490628);
      result = &qword_48DD60;
      *(_DWORD *)(*(_QWORD *)aXi + 0x74LL) = v81;
      if ( v85 != qword_48DD60 )
      {
        v62 = sub_412340(&qword_48DD60, 0, v85 - qword_48DD60, v61);
        v72 = v71;
        if ( (byte_496690 & 1) != 0 )
        {
          if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)&dword_490670) )
            goto LABEL_23;
        }
        else
        {
          sub_407FA0(v63, v64, v65, v66, v67, v68, v69, v70);
          if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)&dword_490670) )
            goto LABEL_23;
        }
        sub_406F40(&dword_490670, v73, v74, v75, v76, v77, v78);
LABEL_23:
        sub_407D40((__int64)&dword_490670);
        if ( v62 == -3 )
        {
          v79 = 1;
          qword_4905E0 = v72;
          dword_490618 = 1;
          goto LABEL_39;
        }
        if ( v62 >= -2 )
        {
          switch ( v62 )
          {
            case -1:
              qword_4905D0 = v72;
              v79 = 1;
              dword_490618 = 1;
              goto LABEL_39;
            case 1:
              v79 = 0;
              if ( (unsigned __int64)(int)v72 <= 0xA0 )
              {
                v80 = (v72 + 8) & 0xF0;
                v79 = 1;
                if ( (unsigned __int64)(int)v72 <= 7 )
                  v80 = 16;
                byte_496688 = v80;
              }
              goto LABEL_39;
            case -2:
              v79 = 1;
              qword_4905D8 = v72;
              dword_490618 = 1;
              goto LABEL_39;
          }
        }
        else
        {
          if ( v62 == -6 )
          {
            v79 = 1;
            dword_49668C = v72;
            goto LABEL_39;
          }
          if ( v62 >= -5 )
          {
            if ( v62 == -4 )
            {
              v79 = 1;
              dword_490610 = v72;
              dword_490618 = 1;
              goto LABEL_39;
            }
          }
          else if ( v62 == -8 )
          {
            if ( (int)v72 > 0 )
            {
              v79 = 1;
              qword_4905F0 = v72;
              goto LABEL_39;
            }
          }
          else if ( v62 == -7 && (int)v72 > 0 )
          {
            qword_4905E8 = v72;
          }
        }
        v79 = 1;
LABEL_39:
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&dword_490670) > 1 )
          sub_407040(&dword_490670);
        return (__int64 *)v79;
      }
    }
  }
  return result;
}
