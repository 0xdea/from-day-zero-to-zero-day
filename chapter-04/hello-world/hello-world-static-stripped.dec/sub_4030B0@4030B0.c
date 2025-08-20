__int64 __fastcall sub_4030B0(
        int *a1,
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
  __int64 v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  __int64 v16; // x25
  __int64 v20; // x2
  __int64 v21; // x3
  _BOOL4 v22; // w24
  unsigned __int64 v23; // x0
  unsigned __int64 v24; // x1
  __int64 v25; // x23
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  __int64 v34; // x1
  int v35; // w2
  __int64 v36; // x0
  __int64 v37; // x2
  __int64 v38; // x23
  __int64 v39; // x21
  __int64 v40; // x23
  double v41; // d0
  double v42; // d1
  double v43; // d2
  double v44; // d3
  double v45; // d4
  double v46; // d5
  double v47; // d6
  double v48; // d7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 result; // x0
  double v55; // d0
  double v56; // d1
  double v57; // d2
  double v58; // d3
  double v59; // d4
  double v60; // d5
  double v61; // d6
  double v62; // d7
  __int64 v63; // x23
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x0
  __int64 v67; // x0
  unsigned __int64 v68; // x2
  int v69; // w1
  bool v70; // cc
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x20
  __int64 v74; // x3
  __int64 v76; // x0
  __int64 v77; // x21
  __int64 v78; // x21
  char v79[16]; // [xsp+18h] [xbp-88h] BYREF
  int v80; // [xsp+28h] [xbp-78h]
  __int64 v81; // [xsp+48h] [xbp-58h]
  __int64 v82; // [xsp+98h] [xbp-8h]
  __int64 v83; // [xsp+C0h] [xbp+20h]
  __int64 v84; // [xsp+C8h] [xbp+28h]
  __int64 v85; // [xsp+D0h] [xbp+30h]
  __int64 v86; // [xsp+D8h] [xbp+38h]
  __int64 v87; // [xsp+E0h] [xbp+40h]

  v82 = qword_48DD60;
  if ( !a4 )
  {
    if ( !*((_QWORD *)a1 + 7) )
    {
      v71 = *((_QWORD *)a1 + 18);
      a2 = 0;
      goto LABEL_71;
    }
    v68 = *((_QWORD *)a1 + 4);
    a2 = *((_QWORD *)a1 + 5);
    v69 = *a1 & 0x1000;
    if ( v69 )
      v70 = a2 > v68;
    else
      v70 = 0;
    if ( !v70 )
    {
      v71 = *((_QWORD *)a1 + 18);
      if ( a2 <= v68 )
      {
        a2 = *((_QWORD *)a1 + 1) - *((_QWORD *)a1 + 2);
        goto LABEL_71;
      }
      if ( !v69 )
      {
        a2 -= *((_QWORD *)a1 + 2);
        goto LABEL_71;
      }
      goto LABEL_87;
    }
    a2 = *((_QWORD *)a1 + 27);
    if ( (unsigned __int64)(a2 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50(a5, a6, a7, a8, a9, a10, a11, a12);
    v71 = (*(__int64 (__fastcall **)(int *, _QWORD, __int64))(a2 + 128))(a1, 0, 2);
    if ( v71 != -1 )
    {
      v72 = *((_QWORD *)a1 + 4);
      v73 = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 18) = v71;
      a2 = v73 - v72;
      goto LABEL_58;
    }
    goto LABEL_34;
  }
  v20 = *((_QWORD *)a1 + 2);
  v21 = *((_QWORD *)a1 + 3);
  v22 = 0;
  v24 = *((_QWORD *)a1 + 4);
  v23 = *((_QWORD *)a1 + 5);
  if ( v21 == v20 )
    v22 = v24 == v23;
  if ( (v24 < v23 || (*a1 & 0x800) != 0) && (unsigned int)sub_4047E0(a1) )
  {
LABEL_33:
    v12 = v83;
    v13 = v84;
    v14 = v85;
    v15 = v86;
LABEL_34:
    result = -1;
    goto LABEL_39;
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    v66 = *((_QWORD *)a1 + 3);
    if ( v66 )
    {
      sub_40C1A0(v66);
      *a1 &= ~0x100u;
    }
    sub_404C44(a1);
    v67 = *((_QWORD *)a1 + 7);
    *((_QWORD *)a1 + 1) = v67;
    *((_QWORD *)a1 + 2) = v67;
    *((_QWORD *)a1 + 3) = v67;
    *((_QWORD *)a1 + 4) = v67;
    *((_QWORD *)a1 + 5) = v67;
    *((_QWORD *)a1 + 6) = v67;
  }
  if ( a3 == 1 )
  {
    v65 = *((_QWORD *)a1 + 18);
    a2 -= *((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1);
    if ( v65 == -1 )
      goto LABEL_35;
    a2 += v65;
    if ( a2 < 0 )
    {
      v12 = v83;
      v13 = v84;
      v14 = v85;
      v15 = v86;
      goto LABEL_59;
    }
    sub_404890(a1);
    v34 = *((_QWORD *)a1 + 18);
    a3 = 0;
    if ( v34 != -1 )
      goto LABEL_15;
LABEL_60:
    v35 = *a1;
    goto LABEL_17;
  }
  if ( a3 == 2 )
  {
    v25 = *((_QWORD *)a1 + 27);
    if ( (unsigned __int64)(v25 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50(a5, a6, a7, a8, a9, a10, a11, a12);
    if ( (*(unsigned int (__fastcall **)(int *, char *))(v25 + 144))(a1, v79) || (v80 & 0xF000) != 0x8000 )
      goto LABEL_35;
    a3 = 0;
    a2 += v81;
  }
  sub_404890(a1);
  v34 = *((_QWORD *)a1 + 18);
  if ( v34 == -1 )
    goto LABEL_60;
LABEL_15:
  v35 = *a1;
  if ( *((_QWORD *)a1 + 3) && (v35 & 0x100) == 0 )
  {
    v74 = *((_QWORD *)a1 + 7);
    if ( a2 >= v34 - (*((_QWORD *)a1 + 2) - v74) && v34 > a2 )
    {
      v76 = a2 - (v34 - *((_QWORD *)a1 + 2));
      *a1 = v35 & 0xFFFFFFEF;
      *((_QWORD *)a1 + 1) = v76;
      *((_QWORD *)a1 + 3) = v74;
      *((_QWORD *)a1 + 4) = v74;
      *((_QWORD *)a1 + 5) = v74;
      *((_QWORD *)a1 + 6) = v74;
      if ( (v34 & 0x8000000000000000LL) == 0 )
      {
        v77 = *((_QWORD *)a1 + 27);
        if ( (unsigned __int64)(v77 - (_QWORD)&unk_48DD70) > 0x92F )
          sub_401A50(v26, v27, v28, v29, v30, v31, v32, v33);
        (*(void (__fastcall **)(int *))(v77 + 128))(a1);
      }
      goto LABEL_31;
    }
  }
LABEL_17:
  if ( (v35 & 4) == 0 )
  {
    v37 = *((_QWORD *)a1 + 7);
    v36 = *((_QWORD *)a1 + 8);
    v38 = *((_QWORD *)a1 + 27);
    v39 = a2 & ~(v37 - v36);
    if ( v36 - v37 < v39 )
      v39 = 0;
    if ( (unsigned __int64)(v38 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50(v26, v27, v28, v29, v30, v31, v32, v33);
    v40 = (*(__int64 (__fastcall **)(int *))(v38 + 128))(a1);
    if ( v40 < 0 )
      goto LABEL_33;
    if ( !v39 )
    {
      v52 = 0;
      goto LABEL_30;
    }
    v16 = *((_QWORD *)a1 + 27);
    if ( (unsigned __int64)(v16 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50(v41, v42, v43, v44, v45, v46, v47, v48);
    v49 = *((_QWORD *)a1 + 7);
    v50 = v39;
    if ( !v22 )
      v50 = *((_QWORD *)a1 + 8) - v49;
    v51 = (*(__int64 (__fastcall **)(int *, __int64, __int64))(v16 + 112))(a1, v49, v50);
    v52 = v51;
    if ( v39 <= v51 )
    {
      v40 += v51;
LABEL_30:
      v53 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 3) = v53;
      *((_QWORD *)a1 + 4) = v53;
      *a1 &= ~0x10u;
      *((_QWORD *)a1 + 1) = v53 + v39;
      *((_QWORD *)a1 + 2) = v53 + v52;
      *((_QWORD *)a1 + 5) = v53;
      *((_QWORD *)a1 + 6) = v53;
      *((_QWORD *)a1 + 18) = v40;
LABEL_31:
      v12 = v83;
      v13 = v84;
      result = a2;
      v14 = v85;
      v15 = v86;
      goto LABEL_39;
    }
    if ( v51 == -1 )
      a2 = v39;
    else
      a2 = v39 - v51;
    a3 = 1;
  }
LABEL_35:
  sub_406170(a1);
  v63 = *((_QWORD *)a1 + 27);
  if ( (unsigned __int64)(v63 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(v55, v56, v57, v58, v59, v60, v61, v62);
  result = (*(__int64 (__fastcall **)(int *, __int64, _QWORD))(v63 + 128))(a1, a2, a3);
  if ( result == -1 )
  {
    v12 = v83;
    v13 = v84;
    v14 = v85;
    v15 = v86;
  }
  else
  {
    v64 = *((_QWORD *)a1 + 7);
    v12 = v83;
    v13 = v84;
    v14 = v85;
    v15 = v86;
    *a1 &= ~0x10u;
    *((_QWORD *)a1 + 1) = v64;
    *((_QWORD *)a1 + 2) = v64;
    *((_QWORD *)a1 + 3) = v64;
    *((_QWORD *)a1 + 4) = v64;
    *((_QWORD *)a1 + 5) = v64;
    *((_QWORD *)a1 + 6) = v64;
    *((_QWORD *)a1 + 18) = result;
  }
LABEL_39:
  while ( v82 != qword_48DD60 )
  {
    v83 = v12;
    v84 = v13;
    v85 = v14;
    v86 = v15;
    v87 = v16;
    v71 = sub_412340(result, &qword_48DD60, 0, v82 - qword_48DD60);
LABEL_87:
    a2 -= v68;
LABEL_71:
    if ( v71 != -1 )
      goto LABEL_58;
    v83 = v12;
    v84 = v13;
    v78 = *((_QWORD *)a1 + 27);
    if ( (unsigned __int64)(v78 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50(a5, a6, a7, a8, a9, a10, a11, a12);
    v71 = (*(__int64 (__fastcall **)(int *, _QWORD, __int64))(v78 + 128))(a1, 0, 1);
    v12 = v83;
    v13 = v84;
    if ( v71 == -1 )
    {
      result = -1;
    }
    else
    {
LABEL_58:
      result = v71 + a2;
      if ( result < 0 )
      {
LABEL_59:
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
        result = -1;
      }
    }
  }
  return result;
}
