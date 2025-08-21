// bad sp value at call has been detected, the output may be wrong!
void __fastcall sub_43B3B0(const char *a1, __int64 a2, unsigned int a3, const char **a4)
{
  const char *v8; // x19
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x20
  const char *v11; // x0
  __int64 v12; // x0
  const char *v13; // x0
  const char *v14; // x0
  const char *v15; // x0
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // x3
  unsigned __int16 v19; // w1
  __int64 *v20; // x0
  __int64 v21; // x0
  int v22; // w0
  int v23; // w26
  char *v24; // x25
  __int64 *v25; // x19
  _QWORD *v26; // x20
  _BYTE *v27; // x23
  _QWORD *v28; // x0
  _BYTE *v29; // x24
  __int64 v30; // x0
  unsigned __int64 v31; // x1
  unsigned __int16 v32; // w0
  char *v33; // x1
  int v34; // w2
  _BYTE *v35; // x4
  int v36; // w8
  int v37; // t1
  unsigned int v38; // w1
  int v39; // w0
  _BYTE *v40; // x4
  unsigned __int8 *v41; // x1
  int v42; // t1
  int v43; // w0
  unsigned __int8 *v44; // x1
  int v45; // t1
  int v46; // w0
  __int64 v47; // x0
  unsigned int v48; // w1
  int v49; // w0
  __int64 v50; // x0
  unsigned __int64 v51; // x1
  unsigned __int16 v52; // w0
  __int64 *v53; // x1
  int v54; // w2
  int v55; // w8
  int v56; // t1
  unsigned int v57; // w1
  __int64 v58; // x0
  __int64 **v59; // x20
  __int64 *v60; // x1
  __int64 v61; // t1
  __int64 v62; // x2
  __int64 v63; // x0
  int v64; // w1
  __int64 v65; // x1
  __int64 v66; // [xsp+0h] [xbp-30060h] BYREF
  _BYTE v67[992]; // [xsp+20h] [xbp-30040h] BYREF
  __int64 v68; // [xsp+400h] [xbp-2FC60h]
  _QWORD v69[4]; // [xsp+10000h] [xbp-20060h] BYREF
  _BYTE v70[992]; // [xsp+10020h] [xbp-20040h] BYREF
  __int64 v71; // [xsp+10400h] [xbp-1FC60h]
  __int64 v72; // [xsp+20000h] [xbp-10060h] BYREF
  char v73[992]; // [xsp+20020h] [xbp-10040h] BYREF
  __int64 v74; // [xsp+20400h] [xbp-FC60h]
  _BYTE v75[40]; // [xsp+30000h] [xbp-60h] BYREF
  const char *v76; // [xsp+30028h] [xbp-38h] BYREF
  __int64 v77; // [xsp+30030h] [xbp-30h] BYREF
  __int64 v78; // [xsp+30038h] [xbp-28h] BYREF
  __int64 v79; // [xsp+30040h] [xbp-20h] BYREF
  _BYTE *v80; // [xsp+30048h] [xbp-18h] BYREF
  __int64 v81; // [xsp+30050h] [xbp-10h] BYREF
  __int64 v82; // [xsp+30058h] [xbp-8h]

  v8 = *a4;
  v82 = qword_48DD60;
  v76 = v8;
  if ( !*v8 )
  {
    v13 = (const char *)sub_422890("LC_ALL");
    v76 = v13;
    if ( v13 && *v13
      || (v15 = (const char *)sub_422890(&aLcCollate[(unsigned __int8)asc_45B298[a3]]), (v76 = v15) != 0) && *v15 )
    {
      v14 = v76;
    }
    else
    {
      v14 = (const char *)sub_422890("LANG");
      v76 = v14;
      if ( !v14 )
      {
LABEL_29:
        v8 = "C";
        v76 = "C";
        goto LABEL_2;
      }
    }
    if ( *v14 )
    {
      v8 = v76;
      if ( !(unsigned int)sub_42F240(v76, "C") )
        goto LABEL_25;
      goto LABEL_3;
    }
    goto LABEL_29;
  }
LABEL_2:
  if ( !(unsigned int)sub_42F240(v8, "C") )
  {
LABEL_25:
    *a4 = "C";
    goto LABEL_13;
  }
LABEL_3:
  if ( !(unsigned int)sub_42F240(v8, "POSIX") )
    goto LABEL_25;
  v9 = ifunc_40DFD0(v8);
  v10 = v9;
  if ( v9 > 0xFF || sub_442E24(v8, v9, "/../", 4) )
    goto LABEL_18;
  if ( v10 == 2 )
  {
    if ( *v8 == 46 )
    {
      if ( v8[1] == 46 || ifunc_42EF50(v8, 47, 2) )
        goto LABEL_18;
      goto LABEL_11;
    }
  }
  else if ( v10 > 2 )
  {
    if ( *v8 == 46 && v8[1] == 46 && v8[2] == 47 )
      goto LABEL_18;
    v11 = &v8[v10];
    if ( v8[v10 - 3] == 47 && *(v11 - 2) == 46 && *(v11 - 1) == 46 )
      goto LABEL_18;
  }
  if ( ifunc_42EF50(v8, 47, v10) && *v8 != 47 )
  {
LABEL_18:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    goto LABEL_13;
  }
LABEL_11:
  v12 = (__int64)v76;
  *a4 = v76;
  if ( a1 )
  {
    v16 = sub_4210F0(v12);
    v76 = (const char *)v16;
    goto LABEL_31;
  }
  if ( sub_43BC10(a3, a4) )
    goto LABEL_13;
  v76 = (const char *)sub_4210F0((__int64)*a4);
  if ( v76 )
  {
    if ( sub_43BC10(a3, &v76) )
      goto LABEL_13;
    v16 = (__int64)v76;
    a2 = 16;
    a1 = "/usr/lib/locale";
LABEL_31:
    if ( v16 )
      goto LABEL_32;
    goto LABEL_65;
  }
  a1 = "/usr/lib/locale";
  a2 = 16;
LABEL_65:
  v16 = (__int64)*a4;
  v76 = *a4;
LABEL_32:
  v17 = ifunc_40DFD0(v16);
  v18 = v17 + 1;
  v19 = (v17 + 16) & 0xFFF0;
  v20 = (__int64 *)&v75[-((v17 + 16) & 0xFFFFFFFFFFFF0000LL)];
  if ( v75 != (_BYTE *)v20 )
  {
    do
      v74 = 0;
    while ( &v72 != v20 );
  }
  v72 = 0;
  if ( v19 >= 0x400uLL )
    v74 = 0;
  v21 = sub_412300(v73, v16, v18, v18);
  v22 = sub_421970(v21, &v77, &v78, &v79, &v80, &v81);
  v23 = v22;
  if ( v22 == -1 )
    goto LABEL_13;
  v24 = &aLcCollate[(unsigned __int8)asc_45B298[a3]];
  v25 = sub_421300(&qword_496A20[a3], (unsigned __int64)a1, a2, v22, v77, v79, (__int64)v80, v81, v78, (__int64)v24, 0);
  if ( !v25 )
  {
    v25 = sub_421300(
            &qword_496A20[a3],
            (unsigned __int64)a1,
            a2,
            v23,
            v77,
            v79,
            (__int64)v80,
            v81,
            v78,
            (__int64)v24,
            1);
    if ( !v25 )
      goto LABEL_13;
  }
  if ( (v23 & 1) != 0 )
    sub_40C1A0(v81);
  if ( !*((_DWORD *)v25 + 2) )
    sub_43C8A4(v25, a3);
  v26 = (_QWORD *)v25[2];
  if ( !v26 )
  {
    v58 = v25[4];
    if ( !v58 )
      goto LABEL_13;
    v59 = (__int64 **)(v25 + 4);
    while ( 1 )
    {
      if ( !*(_DWORD *)(v58 + 8) )
        sub_43C8A4((__int64 *)v58, a3);
      v60 = *v59;
      if ( (*v59)[2] )
        break;
      v61 = (__int64)v59[1];
      ++v59;
      v58 = v61;
      if ( !v61 )
      {
        v25[4] = 0;
        goto LABEL_13;
      }
    }
    v26 = (_QWORD *)(*v59)[2];
    v25[4] = (__int64)v60;
    v25 = v60;
  }
  v27 = v80;
  if ( !v80 )
  {
LABEL_76:
    if ( !*v26 )
    {
      v62 = sub_42F700(*v25, 47);
      v63 = v62 - 1;
      if ( *(_BYTE *)(v62 - 2) == 47 )
      {
        v65 = 1;
      }
      else
      {
        do
        {
          v64 = *(unsigned __int8 *)(v63 - 2);
          --v63;
        }
        while ( v64 != 47 );
        v65 = v62 - v63;
      }
      *v26 = ((__int64 (__fastcall *)(__int64, __int64))loc_443350)(v63, v65);
    }
    if ( !v78 || (unsigned int)sub_42F110(v78, "TRANSLIT", off_48FA10) )
    {
      v47 = v25[2];
    }
    else
    {
      v47 = v25[2];
      *(_DWORD *)(v47 + 44) = 1;
    }
    v48 = *(_DWORD *)(v47 + 40);
    if ( v48 <= 0xFFFFFFFD )
      *(_DWORD *)(v47 + 40) = v48 + 1;
    goto LABEL_13;
  }
  v28 = &v26[dword_45C3E0[a3]];
  v29 = (_BYTE *)v28[7];
  if ( !v29 )
    goto LABEL_121;
  v30 = ifunc_40DFD0(v28[7]) + 18;
  v31 = v30 & 0xFFFFFFFFFFFF0000LL;
  v32 = v30 & 0xFFF0;
  v33 = v73 - v31 + 16;
  if ( &v72 != (__int64 *)v33 )
  {
    do
      v71 = 0;
    while ( v69 != (_QWORD *)v33 );
  }
  v69[0] = 0;
  if ( v32 >= 0x400uLL )
    v71 = 0;
  v34 = (unsigned __int8)*v29;
  if ( *v29 )
  {
    v35 = v70;
    v36 = 0;
    while ( 1 )
    {
      v38 = (unsigned __int8)(v34 - 44);
      if ( v38 <= 0x33 )
        break;
      if ( (word_45E6A0[(unsigned __int8)v34] & 8) != 0 )
        goto LABEL_52;
LABEL_53:
      v37 = (unsigned __int8)*++v29;
      v34 = v37;
      if ( !v37 )
      {
        v49 = v36 + 1;
        if ( v36 <= 1 )
          goto LABEL_83;
        goto LABEL_84;
      }
    }
    if ( (word_45E6A0[(unsigned __int8)v34] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v38) & 1 )
    {
      if ( v34 == 47 )
      {
        if ( v36 == 2 )
          goto LABEL_84;
        ++v36;
        *v35++ = 47;
      }
      goto LABEL_53;
    }
LABEL_52:
    *v35++ = dword_45DDA0[v34];
    goto LABEL_53;
  }
  v35 = v70;
  v49 = 1;
LABEL_83:
  v35 = (_BYTE *)(ifunc_40DE70(v35, 47, (unsigned int)(3 - v49)) + (unsigned int)(3 - v49));
LABEL_84:
  *v35 = 0;
  v50 = ifunc_40DFD0(v27) + 18;
  v51 = v50 & 0xFFFFFFFFFFFF0000LL;
  v52 = v50 & 0xFFF0;
  v53 = (_QWORD *)((char *)v69 - v51);
  if ( v69 != v53 )
  {
    do
      v68 = 0;
    while ( &v66 != v53 );
  }
  v66 = 0;
  if ( v52 >= 0x400uLL )
    v68 = 0;
  v54 = (unsigned __int8)*v27;
  if ( *v27 )
  {
    v40 = v67;
    v55 = 0;
    while ( 1 )
    {
      v57 = (unsigned __int8)(v54 - 44);
      if ( v57 <= 0x33 )
        break;
      if ( (word_45E6A0[(unsigned __int8)v54] & 8) != 0 )
        goto LABEL_91;
LABEL_92:
      v56 = (unsigned __int8)*++v27;
      v54 = v56;
      if ( !v56 )
      {
        v39 = v55 + 1;
        if ( v55 <= 1 )
          goto LABEL_69;
        goto LABEL_70;
      }
    }
    if ( (word_45E6A0[(unsigned __int8)v54] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v57) & 1 )
    {
      if ( v54 == 47 )
      {
        if ( v55 == 2 )
          goto LABEL_70;
        ++v55;
        *v40++ = 47;
      }
      goto LABEL_92;
    }
LABEL_91:
    *v40++ = dword_45DDA0[v54];
    goto LABEL_92;
  }
  v40 = v67;
  v39 = 1;
LABEL_69:
  v40 = (_BYTE *)(ifunc_40DE70(v40, 47, (unsigned int)(3 - v39)) + (unsigned int)(3 - v39));
LABEL_70:
  v41 = v67;
  *v40 = 0;
  do
  {
    v42 = *v41++;
    v43 = (unsigned __int8)dword_45DDA0[v42];
    *(v41 - 1) = v43;
  }
  while ( v43 );
  v44 = v70;
  do
  {
    v45 = *v44++;
    v46 = (unsigned __int8)dword_45DDA0[v45];
    *(v44 - 1) = v46;
  }
  while ( v46 );
  if ( !(unsigned int)sub_415EA0(v67, v70) )
  {
    v26 = (_QWORD *)v25[2];
    goto LABEL_76;
  }
LABEL_13:
  if ( v82 != qword_48DD60 )
  {
    sub_412340();
LABEL_121:
    sub_41F250("locale_codeset != NULL", (__int64)"findlocale.c", 0x11Au, (__int64)"_nl_find_locale");
  }
}
