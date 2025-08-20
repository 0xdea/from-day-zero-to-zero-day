__int64 __fastcall sub_44CDF0(
        __int64 a1,
        const char *a2,
        unsigned __int64 a3,
        const char **a4,
        int a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13)
{
  __int64 v13; // x30
  __int64 (__fastcall **v18)(__int64, __int64 *); // x0
  __int64 (__fastcall *v19)(__int64, __int64 *); // x2
  bool v20; // zf
  __int64 result; // x0
  __int64 *v22; // x7
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7
  __int64 *v31; // x2
  __int64 *v32; // x3
  __int64 *v33; // x1
  __int64 v34; // x5
  __int64 v35; // x7
  double v36; // d0
  double v37; // d1
  double v38; // d2
  double v39; // d3
  double v40; // d4
  double v41; // d5
  double v42; // d6
  double v43; // d7
  unsigned __int64 StatusReg; // x20
  void *v45; // x20
  int v46; // w19
  void *v47; // x4
  void *v48; // x5
  void *v49; // x6
  signed __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  unsigned __int8 *v53; // x2
  unsigned __int8 *v54; // x4
  unsigned int v55; // w6
  __int64 v56; // x3
  __int64 v57; // x2
  unsigned __int64 v58; // x5
  unsigned int v59; // w3
  unsigned __int8 *v60; // x4
  __int64 v61; // x6
  unsigned int v62; // t1
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  unsigned __int8 *v66; // [xsp+0h] [xbp-90h] BYREF
  int v67; // [xsp+8h] [xbp-88h]
  int v68; // [xsp+Ch] [xbp-84h]
  __int64 v69; // [xsp+10h] [xbp-80h]
  __int64 v70; // [xsp+18h] [xbp-78h]
  __int64 *v71; // [xsp+20h] [xbp-70h]
  __int64 v72; // [xsp+28h] [xbp-68h]
  __int64 v73; // [xsp+38h] [xbp-58h] BYREF
  _QWORD v74[3]; // [xsp+40h] [xbp-50h] BYREF
  __int64 v75; // [xsp+58h] [xbp-38h] BYREF
  const char *v76; // [xsp+60h] [xbp-30h]
  __int64 v77; // [xsp+68h] [xbp-28h]
  int v78; // [xsp+70h] [xbp-20h]
  __int64 *v79; // [xsp+80h] [xbp-10h]
  __int64 v80; // [xsp+88h] [xbp-8h]
  __int64 vars0; // [xsp+90h] [xbp+0h] BYREF

  v80 = qword_48DD60;
  v73 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
    {
      v18 = (__int64 (__fastcall **)(__int64, __int64 *))sub_436B10(
                                                           a2,
                                                           a1,
                                                           &v73,
                                                           (__int64 **)(a1 + 984),
                                                           a4,
                                                           0,
                                                           a5,
                                                           0,
                                                           a6,
                                                           a7,
                                                           a8,
                                                           a9,
                                                           a10,
                                                           a11,
                                                           a12,
                                                           a13);
      goto LABEL_4;
    }
    v22 = sub_4462F0(a3);
    if ( v22 )
    {
      if ( v22 != off_4914A8 )
      {
LABEL_16:
        v31 = v22;
        do
        {
          v32 = v31;
          v31 = (__int64 *)v31[101];
        }
        while ( v31 );
        v18 = (__int64 (__fastcall **)(__int64, __int64 *))sub_436B10(
                                                             a2,
                                                             (__int64)v22,
                                                             &v73,
                                                             (__int64 **)v32 + 123,
                                                             a4,
                                                             0,
                                                             a5,
                                                             (__int64)v22,
                                                             v23,
                                                             v24,
                                                             v25,
                                                             v26,
                                                             v27,
                                                             v28,
                                                             v29,
                                                             v30);
        goto LABEL_4;
      }
    }
    else
    {
      v22 = off_4914A8;
      if ( !off_4914A8 )
        goto LABEL_22;
    }
    if ( v22[115] <= a3 && v22[116] > a3 )
      goto LABEL_16;
LABEL_22:
    sub_432250(0, 0, 0, "RTLD_NEXT used in code not dynamically loaded");
  }
  v33 = sub_4462F0(a3);
  if ( !v33 )
    v33 = off_4914A8;
  if ( byte_490F08 )
  {
    v18 = (__int64 (__fastcall **)(__int64, __int64 *))sub_436B10(
                                                         a2,
                                                         (__int64)v33,
                                                         &v73,
                                                         (__int64 **)v33[122],
                                                         a4,
                                                         0,
                                                         a5 | 1u,
                                                         0,
                                                         v36,
                                                         v37,
                                                         v38,
                                                         v39,
                                                         v40,
                                                         v41,
                                                         v42,
                                                         v43);
  }
  else
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v75 = (__int64)v33;
    v76 = a2;
    *(_DWORD *)(StatusReg - 1856 + 4) = 1;
    v77 = (__int64)a4;
    v78 = a5 | 5;
    v79 = &v73;
    __dmb(0xBu);
    v45 = (void *)(StatusReg - 1852);
    v46 = sub_4322A0(v74, (void (__fastcall *)(__int64))sub_44CDB0, (__int64)&v75, 1, 5, v34, a5 | 5u, v35);
    if ( (unsigned int)_aarch64_swp4_rel(0, (atomic_uint *)v45) == 2 )
      v50 = linux_eabi_syscall(__NR_futex, v45, (void *)0x81, (void *)1, 0, v47, v48, v49);
    if ( v74[1] )
      sub_432204(v46, (__int64)v74, 0);
    v18 = (__int64 (__fastcall **)(__int64, __int64 *))v75;
  }
LABEL_4:
  v19 = 0;
  if ( v73 )
  {
    if ( v18 )
      v20 = *(unsigned __int16 *)(v73 + 6) == 65521;
    else
      v20 = 1;
    if ( !v20 )
      v19 = *v18;
    v19 = (__int64 (__fastcall *)(__int64, __int64 *))((char *)v19 + *(_QWORD *)(v73 + 8));
    if ( (*(_BYTE *)(v73 + 4) & 0xF) == 0xA )
    {
      v75 = 24;
      v76 = (const char *)*((_QWORD *)&xmmword_496728 + 1);
      v77 = qword_496738;
      v19 = (__int64 (__fastcall *)(__int64, __int64 *))v19(
                                                          *((_QWORD *)&xmmword_496728 + 1) | 0x4000000000000000LL,
                                                          &v75);
    }
  }
  if ( v80 == qword_48DD60 )
    return (__int64)v19;
  v51 = sub_412340();
  v54 = v53;
  v71 = &vars0;
  v72 = v13;
  v55 = *v53;
  v70 = qword_48DD60;
  v66 = v53;
  v68 = 1;
  v57 = v56;
  LODWORD(v58) = 0;
  if ( v55 )
  {
    if ( v54[1] )
    {
      v58 = v54[1] + 16LL * v55;
      if ( v54[2] )
      {
        v58 = v54[2] + 16 * v58;
        if ( v54[3] )
        {
          v58 = v54[3] + 16 * v58;
          if ( v54[4] )
          {
            v59 = v54[5];
            v58 = v54[4] + 16 * v58;
            v60 = v54 + 5;
            if ( v59 )
            {
              do
              {
                v61 = v59;
                v62 = *++v60;
                v59 = v62;
                v58 = (v61 + 16 * v58) ^ (((v61 + 16 * v58) & 0xF0000000) >> 24);
              }
              while ( v62 );
              LODWORD(v58) = v58 & 0xFFFFFFF;
            }
          }
        }
      }
    }
    else
    {
      LODWORD(v58) = v55;
    }
  }
  v67 = v58;
  v69 = 0;
  result = sub_44CDF0(v51, v52, v57, &v66, 0);
  if ( v70 != qword_48DD60 )
  {
    v63 = sub_412340();
    return sub_44D180(v63, v64, v65);
  }
  return result;
}
