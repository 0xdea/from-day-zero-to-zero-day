_BYTE *__fastcall _gconv_create_spec(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v6; // x22
  unsigned __int8 *v7; // x0
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  bool v16; // zf
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  void *v21; // x4
  void *v22; // x5
  void *v23; // x6
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  __int64 v32; // x0
  _BYTE *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  void *v38; // x4
  void *v39; // x5
  void *v40; // x6
  double v41; // d0
  double v42; // d1
  double v43; // d2
  double v44; // d3
  double v45; // d4
  double v46; // d5
  double v47; // d6
  double v48; // d7
  __int64 v49; // x0
  _BYTE *v50; // x20
  unsigned __int8 *v51; // x21
  int v52; // w2
  unsigned __int8 *v53; // x4
  int v54; // w9
  int v55; // t1
  unsigned int v56; // w1
  int v57; // t1
  int v58; // w0
  __int64 v59; // x24
  _BYTE *v60; // x0
  int v61; // w2
  unsigned __int8 *v62; // x0
  int v63; // w8
  int v64; // t1
  unsigned int v65; // w1
  int v66; // t1
  int v67; // w0
  __int64 v68; // x23
  _BYTE *v69; // x0
  double v70; // d0
  double v71; // d1
  double v72; // d2
  double v73; // d3
  double v74; // d4
  double v75; // d5
  double v76; // d6
  double v77; // d7
  __int64 v79; // x0
  unsigned __int8 *v80; // [xsp+8h] [xbp-28h] BYREF
  unsigned __int8 *v81; // [xsp+18h] [xbp-18h] BYREF
  __int16 v82; // [xsp+20h] [xbp-10h]

  v6 = (unsigned __int8 *)strdup(a2);
  v80 = v6;
  v7 = (unsigned __int8 *)strdup(a3);
  v81 = v7;
  if ( v7 )
    v16 = v6 == 0;
  else
    v16 = 1;
  if ( v16 )
  {
    v51 = v7;
    v33 = 0;
  }
  else
  {
    gconv_parse_code(&v80);
    gconv_parse_code(&v81);
    *(_WORD *)(a1 + 16) = v82;
    v17 = strlen(a2);
    v32 = malloc(v17 + 3, v24, v25, v26, v27, v28, v29, v30, v31, v18, v19, v20, v21, v22, v23);
    *(_QWORD *)a1 = v32;
    v33 = (_BYTE *)v32;
    if ( v32 )
    {
      v34 = strlen(a3);
      v49 = malloc(v34 + 3, v41, v42, v43, v44, v45, v46, v47, v48, v35, v36, v37, v38, v39, v40);
      *(_QWORD *)(a1 + 8) = v49;
      v50 = (_BYTE *)v49;
      v6 = v80;
      v51 = v81;
      if ( v49 )
      {
        v52 = *v80;
        if ( *v80 )
        {
          v53 = v80;
          v54 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              v56 = (unsigned __int8)(v52 - 44);
              if ( v56 <= 0x33 )
                break;
              if ( (word_45E6A0[(unsigned __int8)v52] & 8) != 0 )
                goto LABEL_10;
LABEL_11:
              v55 = *++v53;
              v52 = v55;
              if ( !v55 )
                goto LABEL_17;
            }
            if ( (word_45E6A0[(unsigned __int8)v52] & 8) != 0 || !(((__int64)0xFFF7FFFFFFFFBFF8LL >> v56) & 1) )
            {
LABEL_10:
              *v33++ = dword_45DDA0[v52];
              goto LABEL_11;
            }
            if ( v52 != 47 )
              goto LABEL_11;
            if ( v54 == 2 )
              goto LABEL_19;
            ++v54;
            *v33 = 47;
            v57 = *++v53;
            v52 = v57;
            ++v33;
            if ( !v57 )
            {
LABEL_17:
              v58 = v54 + 1;
              if ( v54 <= 1 )
                goto LABEL_18;
              goto LABEL_19;
            }
          }
        }
        v58 = 1;
LABEL_18:
        v59 = (unsigned int)(3 - v58);
        v60 = v33;
        v33 += v59;
        memset(v60, 47, v59);
LABEL_19:
        *v33 = 0;
        v61 = *v51;
        if ( *v51 )
        {
          v62 = v51;
          v63 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              v65 = (unsigned __int8)(v61 - 44);
              if ( v65 <= 0x33 )
                break;
              if ( (word_45E6A0[(unsigned __int8)v61] & 8) != 0 )
                goto LABEL_22;
LABEL_23:
              v64 = *++v62;
              v61 = v64;
              if ( !v64 )
                goto LABEL_29;
            }
            if ( (word_45E6A0[(unsigned __int8)v61] & 8) != 0 || !(((__int64)0xFFF7FFFFFFFFBFF8LL >> v65) & 1) )
            {
LABEL_22:
              *v50++ = dword_45DDA0[v61];
              goto LABEL_23;
            }
            if ( v61 != 47 )
              goto LABEL_23;
            if ( v63 == 2 )
              goto LABEL_31;
            *v50++ = 47;
            ++v63;
            v66 = *++v62;
            v61 = v66;
            if ( !v66 )
            {
LABEL_29:
              v67 = v63 + 1;
              if ( v63 <= 1 )
                goto LABEL_30;
              goto LABEL_31;
            }
          }
        }
        v67 = 1;
LABEL_30:
        v68 = (unsigned int)(3 - v67);
        v69 = v50;
        v50 += v68;
        memset(v69, 47, v68);
LABEL_31:
        v33 = (_BYTE *)a1;
        *v50 = 0;
      }
      else
      {
        v79 = (__int64)v33;
        v33 = 0;
        free(v79, v8, v9, v10, v11, v12, v13, v14, v15);
        *(_QWORD *)a1 = 0;
      }
    }
    else
    {
      v6 = v80;
      v51 = v81;
    }
  }
  free((__int64)v6, v8, v9, v10, v11, v12, v13, v14, v15);
  free((__int64)v51, v70, v71, v72, v73, v74, v75, v76, v77);
  return v33;
}
