// bad sp value at call has been detected, the output may be wrong!
void __fastcall sub_43B3B0(const char *a1, __int64 a2, unsigned int a3, const char **a4)
{
  const char *v8; // x19
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x20
  const char *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  const char *v14; // x0
  const char *v15; // x0
  const char *v16; // x0
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // x3
  unsigned __int16 v20; // w1
  __int64 *v21; // x0
  __int64 v22; // x0
  int v23; // w0
  int v24; // w26
  char *v25; // x25
  __int64 *v26; // x19
  _QWORD *v27; // x20
  _BYTE *v28; // x23
  _QWORD *v29; // x0
  _BYTE *v30; // x24
  __int64 v31; // x0
  unsigned __int64 v32; // x1
  unsigned __int16 v33; // w0
  char *v34; // x1
  int v35; // w2
  _BYTE *v36; // x4
  int v37; // w8
  int v38; // t1
  unsigned int v39; // w1
  __int64 v40; // x0
  int v41; // w0
  _BYTE *v42; // x4
  unsigned __int8 *v43; // x1
  int v44; // t1
  int v45; // w0
  unsigned __int8 *v46; // x1
  int v47; // t1
  int v48; // w0
  __int64 v49; // x0
  unsigned int v50; // w1
  int v51; // w0
  __int64 v52; // x0
  unsigned __int64 v53; // x1
  unsigned __int16 v54; // w0
  __int64 *v55; // x1
  int v56; // w2
  int v57; // w8
  int v58; // t1
  unsigned int v59; // w1
  __int64 v60; // x0
  __int64 **v61; // x20
  __int64 *v62; // x1
  __int64 v63; // t1
  __int64 v64; // x2
  __int64 v65; // x0
  int v66; // w1
  __int64 v67; // x1
  __int64 v68; // [xsp+0h] [xbp-30060h] BYREF
  _BYTE v69[992]; // [xsp+20h] [xbp-30040h] BYREF
  __int64 v70; // [xsp+400h] [xbp-2FC60h]
  _QWORD v71[4]; // [xsp+10000h] [xbp-20060h] BYREF
  _BYTE v72[992]; // [xsp+10020h] [xbp-20040h] BYREF
  __int64 v73; // [xsp+10400h] [xbp-1FC60h]
  __int64 v74; // [xsp+20000h] [xbp-10060h] BYREF
  char v75[992]; // [xsp+20020h] [xbp-10040h] BYREF
  __int64 v76; // [xsp+20400h] [xbp-FC60h]
  _BYTE v77[40]; // [xsp+30000h] [xbp-60h] BYREF
  const char *v78; // [xsp+30028h] [xbp-38h] BYREF
  __int64 v79; // [xsp+30030h] [xbp-30h] BYREF
  __int64 v80; // [xsp+30038h] [xbp-28h] BYREF
  __int64 v81; // [xsp+30040h] [xbp-20h] BYREF
  _BYTE *v82; // [xsp+30048h] [xbp-18h] BYREF
  __int64 v83; // [xsp+30050h] [xbp-10h] BYREF
  __int64 v84; // [xsp+30058h] [xbp-8h]

  v8 = *a4;
  v84 = qword_48DD60;
  v78 = v8;
  if ( !*v8 )
  {
    v14 = (const char *)sub_422890("LC_ALL");
    v78 = v14;
    if ( v14 && *v14
      || (v16 = (const char *)sub_422890(&aLcCollate[(unsigned __int8)asc_45B298[a3]]), (v78 = v16) != 0) && *v16 )
    {
      v15 = v78;
    }
    else
    {
      v15 = (const char *)sub_422890("LANG");
      v78 = v15;
      if ( !v15 )
      {
LABEL_29:
        v8 = "C";
        v78 = "C";
        goto LABEL_2;
      }
    }
    if ( *v15 )
    {
      v8 = v78;
      if ( !(unsigned int)sub_42F240(v78, "C") )
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
  v12 = (__int64)v78;
  *a4 = v78;
  if ( a1 )
  {
    v17 = sub_4210F0(v12);
    v78 = (const char *)v17;
    goto LABEL_31;
  }
  sub_43BC10(a3, a4);
  if ( v13 )
    goto LABEL_13;
  v78 = (const char *)sub_4210F0((__int64)*a4);
  if ( v78 )
  {
    sub_43BC10(a3, &v78);
    if ( v40 )
      goto LABEL_13;
    v17 = (__int64)v78;
    a2 = 16;
    a1 = "/usr/lib/locale";
LABEL_31:
    if ( v17 )
      goto LABEL_32;
    goto LABEL_65;
  }
  a1 = "/usr/lib/locale";
  a2 = 16;
LABEL_65:
  v17 = (__int64)*a4;
  v78 = *a4;
LABEL_32:
  v18 = ifunc_40DFD0(v17);
  v19 = v18 + 1;
  v20 = (v18 + 16) & 0xFFF0;
  v21 = (__int64 *)&v77[-((v18 + 16) & 0xFFFFFFFFFFFF0000LL)];
  if ( v77 != (_BYTE *)v21 )
  {
    do
      v76 = 0;
    while ( &v74 != v21 );
  }
  v74 = 0;
  if ( v20 >= 0x400uLL )
    v76 = 0;
  v22 = sub_412300(v75, v17, v19, v19);
  v23 = sub_421970(v22, &v79, &v80, &v81, &v82, &v83);
  v24 = v23;
  if ( v23 == -1 )
    goto LABEL_13;
  v25 = &aLcCollate[(unsigned __int8)asc_45B298[a3]];
  v26 = sub_421300(&qword_496A20[a3], (unsigned __int64)a1, a2, v23, v79, v81, (__int64)v82, v83, v80, (__int64)v25, 0);
  if ( !v26 )
  {
    v26 = sub_421300(
            &qword_496A20[a3],
            (unsigned __int64)a1,
            a2,
            v24,
            v79,
            v81,
            (__int64)v82,
            v83,
            v80,
            (__int64)v25,
            1);
    if ( !v26 )
      goto LABEL_13;
  }
  if ( (v24 & 1) != 0 )
    sub_40C1A0(v83);
  if ( !*((_DWORD *)v26 + 2) )
    sub_43C8A4(v26, a3);
  v27 = (_QWORD *)v26[2];
  if ( !v27 )
  {
    v60 = v26[4];
    if ( !v60 )
      goto LABEL_13;
    v61 = (__int64 **)(v26 + 4);
    while ( 1 )
    {
      if ( !*(_DWORD *)(v60 + 8) )
        sub_43C8A4((__int64 *)v60, a3);
      v62 = *v61;
      if ( (*v61)[2] )
        break;
      v63 = (__int64)v61[1];
      ++v61;
      v60 = v63;
      if ( !v63 )
      {
        v26[4] = 0;
        goto LABEL_13;
      }
    }
    v27 = (_QWORD *)(*v61)[2];
    v26[4] = (__int64)v62;
    v26 = v62;
  }
  v28 = v82;
  if ( !v82 )
  {
LABEL_76:
    if ( !*v27 )
    {
      v64 = sub_42F700(*v26, 47);
      v65 = v64 - 1;
      if ( *(_BYTE *)(v64 - 2) == 47 )
      {
        v67 = 1;
      }
      else
      {
        do
        {
          v66 = *(unsigned __int8 *)(v65 - 2);
          --v65;
        }
        while ( v66 != 47 );
        v67 = v64 - v65;
      }
      *v27 = ((__int64 (__fastcall *)(__int64, __int64))loc_443350)(v65, v67);
    }
    if ( !v80 || (unsigned int)sub_42F110(v80, "TRANSLIT", off_48FA10) )
    {
      v49 = v26[2];
    }
    else
    {
      v49 = v26[2];
      *(_DWORD *)(v49 + 44) = 1;
    }
    v50 = *(_DWORD *)(v49 + 40);
    if ( v50 <= 0xFFFFFFFD )
      *(_DWORD *)(v49 + 40) = v50 + 1;
    goto LABEL_13;
  }
  v29 = &v27[dword_45C3E0[a3]];
  v30 = (_BYTE *)v29[7];
  if ( !v30 )
    goto LABEL_121;
  v31 = ifunc_40DFD0(v29[7]) + 18;
  v32 = v31 & 0xFFFFFFFFFFFF0000LL;
  v33 = v31 & 0xFFF0;
  v34 = v75 - v32 + 16;
  if ( &v74 != (__int64 *)v34 )
  {
    do
      v73 = 0;
    while ( v71 != (_QWORD *)v34 );
  }
  v71[0] = 0;
  if ( v33 >= 0x400uLL )
    v73 = 0;
  v35 = (unsigned __int8)*v30;
  if ( *v30 )
  {
    v36 = v72;
    v37 = 0;
    while ( 1 )
    {
      v39 = (unsigned __int8)(v35 - 44);
      if ( v39 <= 0x33 )
        break;
      if ( (word_45E6A0[(unsigned __int8)v35] & 8) != 0 )
        goto LABEL_52;
LABEL_53:
      v38 = (unsigned __int8)*++v30;
      v35 = v38;
      if ( !v38 )
      {
        v51 = v37 + 1;
        if ( v37 <= 1 )
          goto LABEL_83;
        goto LABEL_84;
      }
    }
    if ( (word_45E6A0[(unsigned __int8)v35] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v39) & 1 )
    {
      if ( v35 == 47 )
      {
        if ( v37 == 2 )
          goto LABEL_84;
        ++v37;
        *v36++ = 47;
      }
      goto LABEL_53;
    }
LABEL_52:
    *v36++ = dword_45DDA0[v35];
    goto LABEL_53;
  }
  v36 = v72;
  v51 = 1;
LABEL_83:
  v36 = (_BYTE *)(ifunc_40DE70(v36, 47, (unsigned int)(3 - v51)) + (unsigned int)(3 - v51));
LABEL_84:
  *v36 = 0;
  v52 = ifunc_40DFD0(v28) + 18;
  v53 = v52 & 0xFFFFFFFFFFFF0000LL;
  v54 = v52 & 0xFFF0;
  v55 = (_QWORD *)((char *)v71 - v53);
  if ( v71 != v55 )
  {
    do
      v70 = 0;
    while ( &v68 != v55 );
  }
  v68 = 0;
  if ( v54 >= 0x400uLL )
    v70 = 0;
  v56 = (unsigned __int8)*v28;
  if ( *v28 )
  {
    v42 = v69;
    v57 = 0;
    while ( 1 )
    {
      v59 = (unsigned __int8)(v56 - 44);
      if ( v59 <= 0x33 )
        break;
      if ( (word_45E6A0[(unsigned __int8)v56] & 8) != 0 )
        goto LABEL_91;
LABEL_92:
      v58 = (unsigned __int8)*++v28;
      v56 = v58;
      if ( !v58 )
      {
        v41 = v57 + 1;
        if ( v57 <= 1 )
          goto LABEL_69;
        goto LABEL_70;
      }
    }
    if ( (word_45E6A0[(unsigned __int8)v56] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v59) & 1 )
    {
      if ( v56 == 47 )
      {
        if ( v57 == 2 )
          goto LABEL_70;
        ++v57;
        *v42++ = 47;
      }
      goto LABEL_92;
    }
LABEL_91:
    *v42++ = dword_45DDA0[v56];
    goto LABEL_92;
  }
  v42 = v69;
  v41 = 1;
LABEL_69:
  v42 = (_BYTE *)(ifunc_40DE70(v42, 47, (unsigned int)(3 - v41)) + (unsigned int)(3 - v41));
LABEL_70:
  v43 = v69;
  *v42 = 0;
  do
  {
    v44 = *v43++;
    v45 = (unsigned __int8)dword_45DDA0[v44];
    *(v43 - 1) = v45;
  }
  while ( v45 );
  v46 = v72;
  do
  {
    v47 = *v46++;
    v48 = (unsigned __int8)dword_45DDA0[v47];
    *(v46 - 1) = v48;
  }
  while ( v48 );
  if ( !(unsigned int)sub_415EA0(v69, v72) )
  {
    v27 = (_QWORD *)v26[2];
    goto LABEL_76;
  }
LABEL_13:
  if ( v84 != qword_48DD60 )
  {
    sub_412340();
LABEL_121:
    sub_41F250("locale_codeset != NULL", (__int64)"findlocale.c", 0x11Au, (__int64)"_nl_find_locale");
  }
}
