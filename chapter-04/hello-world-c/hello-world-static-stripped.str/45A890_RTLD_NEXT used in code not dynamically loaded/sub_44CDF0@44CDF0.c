__int64 (__fastcall *__fastcall sub_44CDF0(
        __int64 a1,
        const char *a2,
        unsigned __int64 a3,
        const char **a4,
        int a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10,
        long double a11,
        long double a12,
        long double a13))(__int64, __int64 *)
{
  __int64 v13; // x30
  __int64 (__fastcall **v18)(__int64, __int64 *); // x0
  __int64 (__fastcall *v19)(__int64, __int64 *); // x2
  bool v20; // zf
  __int64 (__fastcall *result)(__int64, __int64 *); // x0
  __int64 *v22; // x7
  long double v23; // q0
  long double v24; // q1
  long double v25; // q2
  long double v26; // q3
  long double v27; // q4
  long double v28; // q5
  long double v29; // q6
  long double v30; // q7
  __int64 *v31; // x2
  __int64 *v32; // x3
  __int64 *v33; // x1
  long double v34; // q0
  long double v35; // q1
  long double v36; // q2
  long double v37; // q3
  long double v38; // q4
  long double v39; // q5
  long double v40; // q6
  long double v41; // q7
  unsigned __int64 StatusReg; // x20
  void *v43; // x20
  unsigned int v44; // w19
  void *v45; // x4
  void *v46; // x5
  void *v47; // x6
  signed __int64 v48; // x0
  __int64 v49; // x0
  const char *v50; // x1
  long double v51; // q0
  long double v52; // q1
  long double v53; // q2
  long double v54; // q3
  long double v55; // q4
  long double v56; // q5
  long double v57; // q6
  long double v58; // q7
  const char *v59; // x2
  unsigned __int8 *v60; // x4
  unsigned int v61; // w6
  unsigned __int64 v62; // x3
  unsigned __int64 v63; // x2
  unsigned __int64 v64; // x5
  unsigned int v65; // w3
  unsigned __int8 *v66; // x4
  __int64 v67; // x6
  unsigned int v68; // t1
  __int64 v69; // x0
  const char *v70; // [xsp+0h] [xbp-90h] BYREF
  int v71; // [xsp+8h] [xbp-88h]
  int v72; // [xsp+Ch] [xbp-84h]
  __int64 v73; // [xsp+10h] [xbp-80h]
  __int64 v74; // [xsp+18h] [xbp-78h]
  __int64 *v75; // [xsp+20h] [xbp-70h]
  __int64 v76; // [xsp+28h] [xbp-68h]
  __int64 v77; // [xsp+38h] [xbp-58h] BYREF
  char v78[8]; // [xsp+40h] [xbp-50h] BYREF
  __int64 v79; // [xsp+48h] [xbp-48h]
  __int64 v80; // [xsp+58h] [xbp-38h] BYREF
  const char *v81; // [xsp+60h] [xbp-30h]
  const char **v82; // [xsp+68h] [xbp-28h]
  int v83; // [xsp+70h] [xbp-20h]
  __int64 *v84; // [xsp+80h] [xbp-10h]
  __int64 v85; // [xsp+88h] [xbp-8h]
  __int64 vars0; // [xsp+90h] [xbp+0h] BYREF

  v85 = qword_48DD60;
  v77 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
    {
      v18 = (__int64 (__fastcall **)(__int64, __int64 *))sub_436B10(
                                                           a2,
                                                           a1,
                                                           &v77,
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
                                                             &v77,
                                                             (__int64 **)v32 + 123,
                                                             a4,
                                                             0,
                                                             a5,
                                                             v22,
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
    sub_432250(0, 0, v23, 0, "RTLD_NEXT used in code not dynamically loaded");
  }
  v33 = sub_4462F0(a3);
  if ( !v33 )
    v33 = off_4914A8;
  if ( byte_490F08 )
  {
    v18 = (__int64 (__fastcall **)(__int64, __int64 *))sub_436B10(
                                                         a2,
                                                         (__int64)v33,
                                                         &v77,
                                                         (__int64 **)v33[122],
                                                         a4,
                                                         0,
                                                         a5 | 1u,
                                                         0,
                                                         v34,
                                                         v35,
                                                         v36,
                                                         v37,
                                                         v38,
                                                         v39,
                                                         v40,
                                                         v41);
  }
  else
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v80 = (__int64)v33;
    v81 = a2;
    *(_DWORD *)(StatusReg - 1856 + 4) = 1;
    v82 = a4;
    v83 = a5 | 5;
    v84 = &v77;
    __dmb(0xBu);
    v43 = (void *)(StatusReg - 1852);
    v44 = sub_4322A0(v78, sub_44CDB0, &v80);
    if ( (unsigned int)_aarch64_swp4_rel(0, (atomic_uint *)v43) == 2 )
      v48 = linux_eabi_syscall(__NR_futex, v43, (void *)0x81, (void *)1, 0, v45, v46, v47);
    if ( v79 )
      sub_432204(v44, v78, 0);
    v18 = (__int64 (__fastcall **)(__int64, __int64 *))v80;
  }
LABEL_4:
  v19 = 0;
  if ( v77 )
  {
    if ( v18 )
      v20 = *(unsigned __int16 *)(v77 + 6) == 65521;
    else
      v20 = 1;
    if ( !v20 )
      v19 = *v18;
    v19 = (__int64 (__fastcall *)(__int64, __int64 *))((char *)v19 + *(_QWORD *)(v77 + 8));
    if ( (*(_BYTE *)(v77 + 4) & 0xF) == 0xA )
    {
      v80 = 24;
      v81 = (const char *)*((_QWORD *)&xmmword_496728 + 1);
      v82 = (const char **)qword_496738;
      v19 = (__int64 (__fastcall *)(__int64, __int64 *))v19(
                                                          *((_QWORD *)&xmmword_496728 + 1) | 0x4000000000000000LL,
                                                          &v80);
    }
  }
  if ( v85 == qword_48DD60 )
    return v19;
  v49 = sub_412340();
  v60 = (unsigned __int8 *)v59;
  v75 = &vars0;
  v76 = v13;
  v61 = *(unsigned __int8 *)v59;
  v74 = qword_48DD60;
  v70 = v59;
  v72 = 1;
  v63 = v62;
  LODWORD(v64) = 0;
  if ( v61 )
  {
    if ( v60[1] )
    {
      v64 = v60[1] + 16LL * v61;
      if ( v60[2] )
      {
        v64 = v60[2] + 16 * v64;
        if ( v60[3] )
        {
          v64 = v60[3] + 16 * v64;
          if ( v60[4] )
          {
            v65 = v60[5];
            v64 = v60[4] + 16 * v64;
            v66 = v60 + 5;
            if ( v65 )
            {
              do
              {
                v67 = v65;
                v68 = *++v66;
                v65 = v68;
                v64 = (v67 + 16 * v64) ^ (((v67 + 16 * v64) & 0xF0000000) >> 24);
              }
              while ( v68 );
              LODWORD(v64) = v64 & 0xFFFFFFF;
            }
          }
        }
      }
    }
    else
    {
      LODWORD(v64) = v61;
    }
  }
  v71 = v64;
  v73 = 0;
  result = (__int64 (__fastcall *)(__int64, __int64 *))sub_44CDF0(
                                                         v49,
                                                         v50,
                                                         v63,
                                                         &v70,
                                                         0,
                                                         v51,
                                                         v52,
                                                         v53,
                                                         v54,
                                                         v55,
                                                         v56,
                                                         v57,
                                                         v58);
  if ( v74 != qword_48DD60 )
  {
    v69 = sub_412340();
    return (__int64 (__fastcall *)(__int64, __int64 *))sub_44D180(v69);
  }
  return result;
}
