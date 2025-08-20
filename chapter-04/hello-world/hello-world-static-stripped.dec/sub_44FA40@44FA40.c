__int64 __fastcall sub_44FA40(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // x2
  __int64 v5; // x0
  unsigned int *v6; // x23
  unsigned __int8 *v7; // x24
  unsigned __int8 *v8; // x19
  char *v9; // x2
  unsigned int v10; // w1
  __int64 v11; // x21
  int v12; // w4
  char v13; // t1
  unsigned __int64 v14; // x3
  __int64 v15; // x26
  unsigned int v16; // w4
  char *v17; // x0
  char v18; // w5
  char v19; // t1
  unsigned __int64 v20; // x3
  __int64 v21; // x6
  int v22; // w4
  char v23; // t1
  unsigned __int64 v24; // x3
  int v25; // w3
  char *v26; // x27
  unsigned __int8 *v27; // x19
  int v28; // t1
  char v29; // t1
  int v30; // t1
  unsigned __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  int v35; // w0
  __int64 v36; // x0
  __int64 v37; // x19
  char *v38; // x19
  int v39; // w1
  __int64 v40; // x21
  int v41; // w0
  char v42; // t1
  unsigned __int64 v43; // x2
  unsigned __int64 v44; // x1
  __int64 v46; // t1
  __int64 v47; // x4
  int v48; // w1
  char v49; // t1
  unsigned __int64 v50; // x0
  __int64 v51; // x6
  char v52; // t1
  _DWORD *v53; // x0
  __int64 v54; // x5
  __int64 v55; // x0
  unsigned __int64 v56; // x6
  int v57; // w1
  int *v58; // x0
  int64x2_t v59; // q24
  int32x4_t v60; // q22
  int32x4_t v61; // q21
  int32x4_t v62; // q20
  int32x4_t v63; // q19
  __int128 v64; // q18
  int32x4_t v65; // q5
  int64x2_t *v66; // x1
  int32x4_t v67; // q4
  _OWORD *v68; // x3
  int64x2_t v69; // q0
  int32x4_t v70; // q3
  int32x4_t v71; // q2
  int32x4_t v72; // q1
  int64x2_t v73; // q16
  int64x2_t v74; // q3
  __int64 v75; // x0
  unsigned __int64 v76; // [xsp+68h] [xbp+68h] BYREF

  *(_OWORD *)(a2 + 784) = 0u;
  *(_OWORD *)(a2 + 800) = 0u;
  *(_OWORD *)(a2 + 816) = 0u;
  *(_OWORD *)(a2 + 832) = 0u;
  *(_OWORD *)(a2 + 848) = 0u;
  *(_OWORD *)(a2 + 864) = 0u;
  *(_OWORD *)(a2 + 880) = 0u;
  *(_OWORD *)(a2 + 896) = 0u;
  *(_OWORD *)(a2 + 912) = 0u;
  *(_OWORD *)(a2 + 928) = 0u;
  *(_OWORD *)(a2 + 944) = 0u;
  *(_OWORD *)(a2 + 960) = 0u;
  v2 = a1[99];
  a1[100] = 0;
  a1[106] = 0;
  if ( !v2 )
    return 5;
  v5 = sub_453280(v2 + vcgezd_s64(a1[104]), a1 + 101);
  v6 = (unsigned int *)v5;
  if ( v5 )
  {
    v7 = (unsigned __int8 *)(v5 + 4 - *(int *)(v5 + 4));
    *(_QWORD *)(a2 + 920) = a1[103];
    v8 = v7 + 9;
    v9 = (char *)&v7[ifunc_40DFD0(v7 + 9) + 10];
    if ( v7[9] == 101 && v7[10] == 104 )
    {
      v46 = *(_QWORD *)v9;
      v9 += 8;
      v8 = v7 + 11;
      *(_QWORD *)(a2 + 968) = v46;
    }
    v10 = v7[8];
    if ( v10 > 3 )
    {
      if ( *v9 != 8 || v9[1] )
        return 3;
      v9 += 2;
    }
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = *v9++;
      v14 = (unsigned __int64)(v13 & 0x7F) << v12;
      v12 += 7;
      v11 |= v14;
    }
    while ( v13 < 0 );
    v15 = 0;
    v16 = 0;
    *(_QWORD *)(a2 + 944) = v11;
    do
    {
      v17 = v9;
      v19 = *v9++;
      v18 = v19;
      v20 = (unsigned __int64)(v19 & 0x7F) << v16;
      v16 += 7;
      v15 |= v20;
    }
    while ( v19 < 0 );
    if ( v16 <= 0x3F && (v18 & 0x40) != 0 )
      v15 |= -1LL << v16;
    *(_QWORD *)(a2 + 936) = v15;
    v21 = 0;
    v22 = 0;
    if ( v10 == 1 )
    {
      v51 = (unsigned __int8)*v9;
      v9 = v17 + 2;
      *(_QWORD *)(a2 + 952) = v51;
      *(_BYTE *)(a2 + 961) = -1;
      v25 = *v8;
      if ( v25 != 122 )
        goto LABEL_15;
    }
    else
    {
      do
      {
        v23 = *v9++;
        v24 = (unsigned __int64)(v23 & 0x7F) << v22;
        v22 += 7;
        v21 |= v24;
      }
      while ( v23 < 0 );
      *(_QWORD *)(a2 + 952) = v21;
      *(_BYTE *)(a2 + 961) = -1;
      v25 = *v8;
      if ( v25 != 122 )
      {
LABEL_15:
        v26 = 0;
        if ( !v25 )
        {
LABEL_54:
          v26 = v9;
LABEL_25:
          v31 = (unsigned __int64)&v7[*(unsigned int *)v7 + 4];
          if ( v15 == -8 && v11 == 1 )
            sub_44EA10(v26, v31, (__int64)a1, a2);
          else
            sub_44F200(v26, v31, (__int64)a1, a2);
          v35 = *(unsigned __int8 *)(a2 + 960);
          if ( v35 == 255 )
          {
            v37 = 2;
          }
          else
          {
            v36 = v35 & 7;
            if ( (_DWORD)v36 == 2 )
            {
              v37 = 3;
            }
            else if ( (unsigned int)v36 <= 2 )
            {
              v37 = 6;
              if ( (_DWORD)v36 )
                sub_4002C0(v36, v32, v33, v34);
            }
            else
            {
              v37 = 4;
              if ( (_DWORD)v36 != 3 )
              {
                v37 = 6;
                if ( (_DWORD)v36 != 4 )
                  sub_4002C0(v36, v32, v33, v34);
              }
            }
          }
          v38 = (char *)&v6[v37];
          v39 = *(unsigned __int8 *)(a2 + 961);
          if ( *(_BYTE *)(a2 + 962) )
          {
            v40 = 0;
            v41 = 0;
            do
            {
              v42 = *v38++;
              v43 = (unsigned __int64)(v42 & 0x7F) << v41;
              v41 += 7;
              v40 |= v43;
            }
            while ( v42 < 0 );
            if ( v39 == 255 )
            {
              v38 += v40;
            }
            else
            {
              sub_44DBE0((__int64)a1, v39, v38, &v76);
              v38 += v40;
              a1[100] = v76;
            }
          }
          else if ( v39 != 255 )
          {
            v38 = sub_44DBE0((__int64)a1, v39, v38, &v76);
            a1[100] = v76;
          }
          v44 = (unsigned __int64)v6 + *v6 + 4;
          if ( *(_QWORD *)(a2 + 936) == -8 && *(_QWORD *)(a2 + 944) == 1 )
            sub_44EA10(v38, v44, (__int64)a1, a2);
          else
            sub_44F200(v38, v44, (__int64)a1, a2);
          return 0;
        }
        goto LABEL_16;
      }
    }
    v47 = 0;
    v48 = 0;
    do
    {
      v49 = *v9++;
      v50 = (unsigned __int64)(v49 & 0x7F) << v48;
      v48 += 7;
      v47 |= v50;
    }
    while ( v49 < 0 );
    *(_BYTE *)(a2 + 962) = 1;
    v26 = &v9[v47];
    v25 = v8[1];
    if ( !v8[1] )
      goto LABEL_25;
    ++v8;
LABEL_16:
    v27 = v8 + 1;
    do
    {
      while ( v25 == 76 )
      {
        v29 = *v9++;
        *(_BYTE *)(a2 + 961) = v29;
        v30 = *v27++;
        v25 = v30;
        if ( !v30 )
          goto LABEL_24;
      }
      switch ( v25 )
      {
        case 'R':
          v52 = *v9++;
          *(_BYTE *)(a2 + 960) = v52;
          break;
        case 'P':
          v9 = sub_44DBE0((__int64)a1, *v9, v9 + 1, &v76);
          *(_QWORD *)(a2 + 928) = v76;
          break;
        case 'S':
          *(_BYTE *)(a2 + 963) = 1;
          break;
        case 'B':
          break;
        default:
          v9 = v26;
          goto LABEL_53;
      }
      v28 = *v27++;
      v25 = v28;
    }
    while ( v28 );
LABEL_24:
    if ( v26 )
      goto LABEL_25;
LABEL_53:
    if ( v9 )
      goto LABEL_54;
    return 3;
  }
  v53 = (_DWORD *)a1[99];
  v54 = a1[98];
  if ( *v53 == -763358872 && v53[1] == -738197503 )
  {
    v55 = 1;
    v56 = v54 + 304;
    *(_BYTE *)(a2 + 882) = 1;
    *(_QWORD *)(a2 + 896) = 304;
    *(_QWORD *)(a2 + 904) = 31;
    do
    {
      *(_BYTE *)(a2 + 783 + v55) = 1;
      *(_QWORD *)(a2 - 8 + 8 * v55) = 8 * v55;
      ++v55;
    }
    while ( v55 != 32 );
    v57 = *(_DWORD *)(v54 + 592);
    v58 = (int *)(v54 + 592);
    if ( v57 )
    {
      v59 = vdupq_n_s64(v56);
      v60.n128_u64[0] = 0x1000000010LL;
      v60.n128_u64[1] = 0x1000000010LL;
      v61.n128_u64[0] = 0x400000004LL;
      v61.n128_u64[1] = 0x400000004LL;
      v62.n128_u64[0] = 0x800000008LL;
      v62.n128_u64[1] = 0x800000008LL;
      v63.n128_u64[0] = 0xC0000000CLL;
      v63.n128_u64[1] = 0xC0000000CLL;
      *(_QWORD *)&v64 = 0x101010101010101LL;
      *((_QWORD *)&v64 + 1) = 0x101010101010101LL;
      v65.n128_u64[0] = 0x100000001LL;
      v65.n128_u64[1] = 0x100000001LL;
      do
      {
        if ( v57 == 1179680769 )
        {
          v66 = (int64x2_t *)(a2 + 512);
          v67 = (int32x4_t)xmmword_45A950;
          v68 = (_OWORD *)(a2 + 848);
          v69 = vsubq_s64(vdupq_n_s64((unsigned __int64)v58), v59);
          do
          {
            v70 = vaddq_s32(v67, v61);
            *v68++ = v64;
            v71 = vaddq_s32(v67, v62);
            v72 = vaddq_s32(v67, v63);
            v66[2] = vaddq_s64(vshlq_n_s64(vaddl_s32((int32x2_t)v70.n128_u64[0], (int32x2_t)v65.n128_u64[0]), 4u), v69);
            v66[3] = vaddq_s64(vshlq_n_s64(vaddl_high_s32(v70, v65), 4u), v69);
            v73 = vaddq_s64(vshlq_n_s64(vaddl_s32((int32x2_t)v67.n128_u64[0], (int32x2_t)v65.n128_u64[0]), 4u), v69);
            v66[4] = vaddq_s64(vshlq_n_s64(vaddl_s32((int32x2_t)v71.n128_u64[0], (int32x2_t)v65.n128_u64[0]), 4u), v69);
            v66[5] = vaddq_s64(vshlq_n_s64(vaddl_high_s32(v71, v65), 4u), v69);
            v74 = vaddq_s64(vshlq_n_s64(vaddl_high_s32(v67, v65), 4u), v69);
            v66[6] = vaddq_s64(vshlq_n_s64(vaddl_s32((int32x2_t)v72.n128_u64[0], (int32x2_t)v65.n128_u64[0]), 4u), v69);
            v66[7] = vaddq_s64(vshlq_n_s64(vaddl_high_s32(v72, v65), 4u), v69);
            v66 += 8;
            v67 = vaddq_s32(v67, v60);
            v66[-8] = v73;
            v66[-7] = v74;
          }
          while ( (_OWORD *)(a2 + 880) != v68 );
        }
        v58 = (int *)((char *)v58 + (unsigned int)v58[1]);
        v57 = *v58;
      }
      while ( *v58 );
    }
    *(_BYTE *)(a2 + 815) = 1;
    *(_BYTE *)(a2 + 880) = 4;
    *(_BYTE *)(a2 + 963) = 1;
    *(_QWORD *)(a2 + 248) = 256;
    v75 = *(_QWORD *)(v54 + 568);
    *(_QWORD *)(a2 + 952) = 96;
    *(_QWORD *)(a2 + 768) = v75 - v56;
    return 0;
  }
  return 5;
}
