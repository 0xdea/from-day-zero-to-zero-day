__int64 __fastcall IO_new_file_seekoff(
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
  __int64 v17; // x2
  __int64 v18; // x3
  _BOOL4 v19; // w24
  unsigned __int64 v20; // x0
  unsigned __int64 v21; // x1
  __int64 v22; // x23
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7
  __int64 v31; // x1
  int v32; // w2
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x23
  __int64 v36; // x21
  __int64 v37; // x23
  double v38; // d0
  double v39; // d1
  double v40; // d2
  double v41; // d3
  double v42; // d4
  double v43; // d5
  double v44; // d6
  double v45; // d7
  __int64 v46; // x25
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 result; // x0
  double v53; // d0
  double v54; // d1
  double v55; // d2
  double v56; // d3
  double v57; // d4
  double v58; // d5
  double v59; // d6
  double v60; // d7
  __int64 v61; // x23
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x0
  __int64 v65; // x0
  unsigned __int64 v66; // x2
  unsigned __int64 v67; // x20
  int v68; // w1
  bool v69; // cc
  __int64 v70; // x20
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x20
  unsigned __int64 v74; // x20
  __int64 v75; // x3
  __int64 v77; // x0
  __int64 v78; // x21
  __int64 v79; // x21
  char v80[16]; // [xsp+18h] [xbp-88h] BYREF
  int v81; // [xsp+28h] [xbp-78h]
  __int64 v82; // [xsp+48h] [xbp-58h]
  __int64 v83; // [xsp+C0h] [xbp+20h]
  __int64 v84; // [xsp+C8h] [xbp+28h]

  if ( !a4 )
  {
    if ( *((_QWORD *)a1 + 7) )
    {
      v66 = *((_QWORD *)a1 + 4);
      v67 = *((_QWORD *)a1 + 5);
      v68 = *a1 & 0x1000;
      if ( v68 )
        v69 = v67 > v66;
      else
        v69 = 0;
      if ( v69 )
      {
        v70 = *((_QWORD *)a1 + 27);
        if ( (unsigned __int64)(v70 - (_QWORD)&_io_vtables) > 0x92F )
          IO_vtable_check(a5, a6, a7, a8, a9, a10, a11, a12);
        v71 = (*(__int64 (__fastcall **)(int *, _QWORD, __int64))(v70 + 128))(a1, 0, 2);
        if ( v71 == -1 )
          return -1;
        v72 = *((_QWORD *)a1 + 4);
        v73 = *((_QWORD *)a1 + 5);
        *((_QWORD *)a1 + 18) = v71;
        v74 = v73 - v72;
        goto LABEL_56;
      }
      v71 = *((_QWORD *)a1 + 18);
      if ( v67 <= v66 )
      {
        v74 = *((_QWORD *)a1 + 1) - *((_QWORD *)a1 + 2);
      }
      else if ( v68 )
      {
        v74 = v67 - v66;
      }
      else
      {
        v74 = v67 - *((_QWORD *)a1 + 2);
      }
    }
    else
    {
      v71 = *((_QWORD *)a1 + 18);
      v74 = 0;
    }
    if ( v71 == -1 )
    {
      v83 = v12;
      v84 = v13;
      v79 = *((_QWORD *)a1 + 27);
      if ( (unsigned __int64)(v79 - (_QWORD)&_io_vtables) > 0x92F )
        IO_vtable_check(a5, a6, a7, a8, a9, a10, a11, a12);
      v71 = (*(__int64 (__fastcall **)(int *, _QWORD, __int64))(v79 + 128))(a1, 0, 1);
      if ( v71 == -1 )
        return -1;
    }
LABEL_56:
    result = v71 + v74;
    if ( result >= 0 )
      return result;
    goto LABEL_57;
  }
  v17 = *((_QWORD *)a1 + 2);
  v18 = *((_QWORD *)a1 + 3);
  v19 = 0;
  v21 = *((_QWORD *)a1 + 4);
  v20 = *((_QWORD *)a1 + 5);
  if ( v18 == v17 )
    v19 = v21 == v20;
  if ( (v21 < v20 || (*a1 & 0x800) != 0) && (unsigned int)IO_switch_to_get_mode(a1) )
    return -1;
  if ( !*((_QWORD *)a1 + 7) )
  {
    v64 = *((_QWORD *)a1 + 3);
    if ( v64 )
    {
      free(v64);
      *a1 &= ~0x100u;
    }
    IO_doallocbuf(a1);
    v65 = *((_QWORD *)a1 + 7);
    *((_QWORD *)a1 + 1) = v65;
    *((_QWORD *)a1 + 2) = v65;
    *((_QWORD *)a1 + 3) = v65;
    *((_QWORD *)a1 + 4) = v65;
    *((_QWORD *)a1 + 5) = v65;
    *((_QWORD *)a1 + 6) = v65;
  }
  if ( a3 == 1 )
  {
    v63 = *((_QWORD *)a1 + 18);
    a2 -= *((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1);
    if ( v63 == -1 )
      goto LABEL_34;
    a2 += v63;
    if ( a2 >= 0 )
    {
      IO_free_backup_area(a1);
      v31 = *((_QWORD *)a1 + 18);
      a3 = 0;
      if ( v31 != -1 )
      {
LABEL_15:
        v32 = *a1;
        if ( *((_QWORD *)a1 + 3) && (v32 & 0x100) == 0 )
        {
          v75 = *((_QWORD *)a1 + 7);
          if ( a2 >= v31 - (*((_QWORD *)a1 + 2) - v75) && v31 > a2 )
          {
            v77 = a2 - (v31 - *((_QWORD *)a1 + 2));
            *a1 = v32 & 0xFFFFFFEF;
            *((_QWORD *)a1 + 1) = v77;
            *((_QWORD *)a1 + 3) = v75;
            *((_QWORD *)a1 + 4) = v75;
            *((_QWORD *)a1 + 5) = v75;
            *((_QWORD *)a1 + 6) = v75;
            if ( (v31 & 0x8000000000000000LL) == 0 )
            {
              v78 = *((_QWORD *)a1 + 27);
              if ( (unsigned __int64)(v78 - (_QWORD)&_io_vtables) > 0x92F )
                IO_vtable_check(v23, v24, v25, v26, v27, v28, v29, v30);
              (*(void (__fastcall **)(int *))(v78 + 128))(a1);
            }
            return a2;
          }
        }
LABEL_17:
        if ( (v32 & 4) == 0 )
        {
          v34 = *((_QWORD *)a1 + 7);
          v33 = *((_QWORD *)a1 + 8);
          v35 = *((_QWORD *)a1 + 27);
          v36 = a2 & ~(v34 - v33);
          if ( v33 - v34 < v36 )
            v36 = 0;
          if ( (unsigned __int64)(v35 - (_QWORD)&_io_vtables) > 0x92F )
            IO_vtable_check(v23, v24, v25, v26, v27, v28, v29, v30);
          v37 = (*(__int64 (__fastcall **)(int *))(v35 + 128))(a1);
          if ( v37 < 0 )
            return -1;
          if ( !v36 )
          {
            v50 = 0;
            goto LABEL_30;
          }
          v46 = *((_QWORD *)a1 + 27);
          if ( (unsigned __int64)(v46 - (_QWORD)&_io_vtables) > 0x92F )
            IO_vtable_check(v38, v39, v40, v41, v42, v43, v44, v45);
          v47 = *((_QWORD *)a1 + 7);
          v48 = v36;
          if ( !v19 )
            v48 = *((_QWORD *)a1 + 8) - v47;
          v49 = (*(__int64 (__fastcall **)(int *, __int64, __int64))(v46 + 112))(a1, v47, v48);
          v50 = v49;
          if ( v36 <= v49 )
          {
            v37 += v49;
LABEL_30:
            v51 = *((_QWORD *)a1 + 7);
            *((_QWORD *)a1 + 3) = v51;
            *((_QWORD *)a1 + 4) = v51;
            *a1 &= ~0x10u;
            *((_QWORD *)a1 + 1) = v51 + v36;
            *((_QWORD *)a1 + 2) = v51 + v50;
            *((_QWORD *)a1 + 5) = v51;
            *((_QWORD *)a1 + 6) = v51;
            *((_QWORD *)a1 + 18) = v37;
            return a2;
          }
          if ( v49 == -1 )
            a2 = v36;
          else
            a2 = v36 - v49;
          a3 = 1;
        }
        goto LABEL_34;
      }
LABEL_58:
      v32 = *a1;
      goto LABEL_17;
    }
LABEL_57:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return -1;
  }
  if ( a3 != 2 )
    goto LABEL_14;
  v22 = *((_QWORD *)a1 + 27);
  if ( (unsigned __int64)(v22 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a5, a6, a7, a8, a9, a10, a11, a12);
  if ( !(*(unsigned int (__fastcall **)(int *, char *))(v22 + 144))(a1, v80) && (v81 & 0xF000) == 0x8000 )
  {
    a3 = 0;
    a2 += v82;
LABEL_14:
    IO_free_backup_area(a1);
    v31 = *((_QWORD *)a1 + 18);
    if ( v31 != -1 )
      goto LABEL_15;
    goto LABEL_58;
  }
LABEL_34:
  IO_unsave_markers(a1);
  v61 = *((_QWORD *)a1 + 27);
  if ( (unsigned __int64)(v61 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(v53, v54, v55, v56, v57, v58, v59, v60);
  result = (*(__int64 (__fastcall **)(int *, __int64, _QWORD))(v61 + 128))(a1, a2, a3);
  if ( result != -1 )
  {
    v62 = *((_QWORD *)a1 + 7);
    *a1 &= ~0x10u;
    *((_QWORD *)a1 + 1) = v62;
    *((_QWORD *)a1 + 2) = v62;
    *((_QWORD *)a1 + 3) = v62;
    *((_QWORD *)a1 + 4) = v62;
    *((_QWORD *)a1 + 5) = v62;
    *((_QWORD *)a1 + 6) = v62;
    *((_QWORD *)a1 + 18) = result;
  }
  return result;
}
