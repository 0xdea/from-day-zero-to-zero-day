__int64 __fastcall _readonly_area(
        unsigned __int64 a1,
        unsigned __int64 a2,
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
        void *a13,
        void *a14,
        void *a15)
{
  unsigned int *v17; // x0
  void *v18; // x4
  void *v19; // x5
  void *v20; // x6
  double v21; // d0
  double v22; // d1
  double v23; // d2
  double v24; // d3
  double v25; // d4
  double v26; // d5
  double v27; // d6
  double v28; // d7
  unsigned int *v29; // x21
  unsigned int v30; // w0
  unsigned __int64 v31; // x23
  unsigned __int64 v32; // x19
  _BYTE *v33; // x1
  __int64 v34; // x0
  unsigned __int64 v35; // x0
  _BYTE *v36; // x2
  double v39; // d0
  double v40; // d1
  double v41; // d2
  double v42; // d3
  double v43; // d4
  double v44; // d5
  double v45; // d6
  double v46; // d7
  unsigned __int64 v48; // x1
  unsigned int v49; // w1
  double v50; // d0
  double v51; // d1
  double v52; // d2
  double v53; // d3
  double v54; // d4
  double v55; // d5
  double v56; // d6
  double v57; // d7
  _BYTE *v58; // [xsp+8h] [xbp-28h] BYREF
  __int64 v59; // [xsp+10h] [xbp-20h] BYREF
  _BYTE *v60; // [xsp+18h] [xbp-18h] BYREF
  _BYTE *v61; // [xsp+20h] [xbp-10h] BYREF

  v17 = (unsigned int *)fopen64(
                          (__int64)"/proc/self/maps",
                          "rce",
                          a3,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          a9,
                          a10,
                          (__int64)&_stack_chk_guard,
                          a12,
                          a13,
                          a14,
                          a15);
  if ( v17 )
  {
    v29 = v17;
    v30 = *v17;
    *v29 = v30 | 0x8000;
    v58 = 0;
    v59 = 0;
    if ( (v30 & 0x10) == 0 )
    {
      v31 = a1 + a2;
      do
      {
        if ( getdelim(
               (__int64 *)&v58,
               (__int64)&v59,
               10,
               (__int64)v29,
               v18,
               v19,
               v20,
               v21,
               v22,
               v23,
               v24,
               v25,
               v26,
               v27,
               v28) <= 0 )
          break;
        v32 = _isoc23_strtoumax((__int64)v58, (__int64)&v60, 16);
        v33 = v60;
        if ( v60 == v58 )
          break;
        v34 = (__int64)++v60;
        if ( *v33 != 45 )
          break;
        v35 = _isoc23_strtoumax(v34, (__int64)&v61, 16);
        v36 = v61;
        if ( v61 == v60 )
          break;
        ++v61;
        if ( *v36 != 32 )
          break;
        if ( v31 > v32 && a1 < v35 )
        {
          v61 = v36 + 2;
          if ( v36[1] != 114 )
            break;
          v61 = v36 + 3;
          if ( v36[2] != 45 )
            break;
          if ( a1 >= v32 && v31 <= v35 )
            goto LABEL_33;
          if ( a1 < v32 )
          {
            v48 = a2 - v31 + v32;
            a2 = a2 + v32 - v35;
            if ( v31 <= v35 )
              a2 = v48;
          }
          else
          {
            a2 = a1 + a2 - v35;
          }
          if ( !a2 )
          {
LABEL_33:
            fclose(v29, v21, v22, v23, v24, v25, v26, v27, v28);
            free((__int64)v58, v50, v51, v52, v53, v54, v55, v56, v57);
            return 1;
          }
        }
      }
      while ( (*v29 & 0x10) == 0 );
    }
    fclose(v29, v21, v22, v23, v24, v25, v26, v27, v28);
    free((__int64)v58, v39, v40, v41, v42, v43, v44, v45, v46);
    if ( a2 )
      return 0xFFFFFFFFLL;
    return 1;
  }
  v49 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( v49 <= 0x18 && ((0x1002004uLL >> v49) & 1) != 0 )
    return 1;
  return 0xFFFFFFFFLL;
}
