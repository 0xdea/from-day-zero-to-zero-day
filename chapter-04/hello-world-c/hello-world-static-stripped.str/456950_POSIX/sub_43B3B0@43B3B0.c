// bad sp value at call has been detected, the output may be wrong!
void __fastcall sub_43B3B0(const char *a1, __int64 a2, unsigned int a3, const char **a4)
{
  __int64 v4; // x30
  const char *v9; // x19
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x20
  const char *v12; // x0
  const char *v13; // x0
  const char *v14; // x0
  const char *v15; // x0
  const char *v16; // x0
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // x3
  unsigned __int16 v20; // w1
  __int64 *v21; // x0
  __int64 v22; // x0
  unsigned int v23; // w0
  unsigned int v24; // w26
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
  int v40; // w0
  _BYTE *v41; // x4
  unsigned __int8 *v42; // x1
  int v43; // t1
  int v44; // w0
  unsigned __int8 *v45; // x1
  int v46; // t1
  int v47; // w0
  __int64 v48; // x0
  unsigned int v49; // w1
  int v50; // w0
  __int64 v51; // x0
  unsigned __int64 v52; // x1
  unsigned __int16 v53; // w0
  __int64 *v54; // x1
  int v55; // w2
  int v56; // w8
  int v57; // t1
  unsigned int v58; // w1
  __int64 v59; // x0
  __int64 **v60; // x20
  __int64 *v61; // x1
  __int64 v62; // t1
  __int64 v63; // x2
  __int64 v64; // x0
  int v65; // w1
  __int64 v66; // x1
  __int64 v67; // x0
  __int64 v68; // x1
  int v69; // w2
  __int64 i; // x2
  __int64 v71; // [xsp+0h] [xbp-30060h] BYREF
  _BYTE v72[992]; // [xsp+20h] [xbp-30040h] BYREF
  __int64 v73; // [xsp+400h] [xbp-2FC60h]
  _QWORD v74[4]; // [xsp+10000h] [xbp-20060h] BYREF
  _BYTE v75[992]; // [xsp+10020h] [xbp-20040h] BYREF
  __int64 v76; // [xsp+10400h] [xbp-1FC60h]
  __int64 v77; // [xsp+20000h] [xbp-10060h] BYREF
  char v78[992]; // [xsp+20020h] [xbp-10040h] BYREF
  __int64 v79; // [xsp+20400h] [xbp-FC60h]
  __int64 *v80; // [xsp+2FFF0h] [xbp-70h]
  __int64 v81; // [xsp+2FFF8h] [xbp-68h]
  _BYTE v82[40]; // [xsp+30000h] [xbp-60h] BYREF
  const char *v83; // [xsp+30028h] [xbp-38h] BYREF
  __int64 v84; // [xsp+30030h] [xbp-30h] BYREF
  __int64 v85; // [xsp+30038h] [xbp-28h] BYREF
  __int64 v86; // [xsp+30040h] [xbp-20h] BYREF
  _BYTE *v87; // [xsp+30048h] [xbp-18h] BYREF
  __int64 v88; // [xsp+30050h] [xbp-10h] BYREF
  __int64 v89; // [xsp+30058h] [xbp-8h]
  __int64 vars0; // [xsp+30060h] [xbp+0h] BYREF

  v9 = *a4;
  v89 = qword_48DD60;
  v83 = v9;
  if ( !*v9 )
  {
    v14 = (const char *)sub_422890("LC_ALL");
    v83 = v14;
    if ( v14 && *v14
      || (v16 = (const char *)sub_422890(&aLcCollate[(unsigned __int8)asc_45B298[a3]]), (v83 = v16) != 0) && *v16 )
    {
      v15 = v83;
    }
    else
    {
      v15 = (const char *)sub_422890("LANG");
      v83 = v15;
      if ( !v15 )
      {
LABEL_29:
        v9 = "C";
        v83 = "C";
        goto LABEL_2;
      }
    }
    if ( *v15 )
    {
      v9 = v83;
      if ( !(unsigned int)sub_42F240(v83, "C") )
        goto LABEL_25;
      goto LABEL_3;
    }
    goto LABEL_29;
  }
LABEL_2:
  if ( !(unsigned int)sub_42F240(v9, "C") )
  {
LABEL_25:
    *a4 = "C";
    goto LABEL_13;
  }
LABEL_3:
  if ( !(unsigned int)sub_42F240(v9, "POSIX") )
    goto LABEL_25;
  v10 = ifunc_40DFD0(v9);
  v11 = v10;
  if ( v10 > 0xFF || sub_442E24(v9, v10, "/../", 4) )
    goto LABEL_18;
  if ( v11 == 2 )
  {
    if ( *v9 == 46 )
    {
      if ( v9[1] == 46 || ifunc_42EF50(v9, 47, 2) )
        goto LABEL_18;
LABEL_11:
      v13 = v83;
      *a4 = v83;
      if ( a1 )
      {
        v17 = sub_4210F0(v13);
        v83 = (const char *)v17;
      }
      else
      {
        if ( sub_43BC10(a3, a4) )
          goto LABEL_13;
        v83 = (const char *)sub_4210F0(*a4);
        if ( !v83 )
        {
          a1 = "/usr/lib/locale";
          a2 = 16;
LABEL_65:
          v17 = (__int64)*a4;
          v83 = *a4;
LABEL_32:
          v18 = ifunc_40DFD0(v17);
          v19 = v18 + 1;
          v20 = (v18 + 16) & 0xFFF0;
          v21 = (__int64 *)&v82[-((v18 + 16) & 0xFFFFFFFFFFFF0000LL)];
          if ( v82 != (_BYTE *)v21 )
          {
            do
              v79 = 0;
            while ( &v77 != v21 );
          }
          v77 = 0;
          if ( v20 >= 0x400uLL )
            v79 = 0;
          v22 = sub_412300(v78, v17, v19, v19);
          v23 = sub_421970(v22, &v84, &v85, &v86, &v87, &v88);
          v24 = v23;
          if ( v23 == -1 )
            goto LABEL_13;
          v25 = &aLcCollate[(unsigned __int8)asc_45B298[a3]];
          v26 = (__int64 *)sub_421300(&qword_496A20[a3], a1, a2, v23, v84, v86, v87, v88, v85, v25, 0);
          if ( !v26 )
          {
            v26 = (__int64 *)sub_421300(&qword_496A20[a3], a1, a2, v24, v84, v86, v87, v88, v85, v25, 1);
            if ( !v26 )
              goto LABEL_13;
          }
          if ( (v24 & 1) != 0 )
            sub_40C1A0(v88);
          if ( !*((_DWORD *)v26 + 2) )
            sub_43C8A4(v26, a3);
          v27 = (_QWORD *)v26[2];
          if ( !v27 )
          {
            v59 = v26[4];
            if ( !v59 )
              goto LABEL_13;
            v60 = (__int64 **)(v26 + 4);
            while ( 1 )
            {
              if ( !*(_DWORD *)(v59 + 8) )
                sub_43C8A4((__int64 *)v59, a3);
              v61 = *v60;
              if ( (*v60)[2] )
                break;
              v62 = (__int64)v60[1];
              ++v60;
              v59 = v62;
              if ( !v62 )
              {
                v26[4] = 0;
                goto LABEL_13;
              }
            }
            v27 = (_QWORD *)(*v60)[2];
            v26[4] = (__int64)v61;
            v26 = v61;
          }
          v28 = v87;
          if ( v87 )
          {
            v29 = &v27[dword_45C3E0[a3]];
            v30 = (_BYTE *)v29[7];
            if ( !v30 )
              goto LABEL_121;
            v31 = ifunc_40DFD0(v29[7]) + 18;
            v32 = v31 & 0xFFFFFFFFFFFF0000LL;
            v33 = v31 & 0xFFF0;
            v34 = v78 - v32 + 16;
            if ( &v77 != (__int64 *)v34 )
            {
              do
                v76 = 0;
              while ( v74 != (_QWORD *)v34 );
            }
            v74[0] = 0;
            if ( v33 >= 0x400uLL )
              v76 = 0;
            v35 = (unsigned __int8)*v30;
            if ( *v30 )
            {
              v36 = v75;
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
                  v50 = v37 + 1;
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
            v36 = v75;
            v50 = 1;
LABEL_83:
            v36 = (_BYTE *)(ifunc_40DE70(v36, 47, (unsigned int)(3 - v50)) + (unsigned int)(3 - v50));
LABEL_84:
            *v36 = 0;
            v51 = ifunc_40DFD0(v28) + 18;
            v52 = v51 & 0xFFFFFFFFFFFF0000LL;
            v53 = v51 & 0xFFF0;
            v54 = (_QWORD *)((char *)v74 - v52);
            if ( v74 != v54 )
            {
              do
                v73 = 0;
              while ( &v71 != v54 );
            }
            v71 = 0;
            if ( v53 >= 0x400uLL )
              v73 = 0;
            v55 = (unsigned __int8)*v28;
            if ( *v28 )
            {
              v41 = v72;
              v56 = 0;
              while ( 1 )
              {
                v58 = (unsigned __int8)(v55 - 44);
                if ( v58 <= 0x33 )
                  break;
                if ( (word_45E6A0[(unsigned __int8)v55] & 8) != 0 )
                  goto LABEL_91;
LABEL_92:
                v57 = (unsigned __int8)*++v28;
                v55 = v57;
                if ( !v57 )
                {
                  v40 = v56 + 1;
                  if ( v56 <= 1 )
                    goto LABEL_69;
                  goto LABEL_70;
                }
              }
              if ( (word_45E6A0[(unsigned __int8)v55] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v58) & 1 )
              {
                if ( v55 == 47 )
                {
                  if ( v56 == 2 )
                    goto LABEL_70;
                  ++v56;
                  *v41++ = 47;
                }
                goto LABEL_92;
              }
LABEL_91:
              *v41++ = dword_45DDA0[v55];
              goto LABEL_92;
            }
            v41 = v72;
            v40 = 1;
LABEL_69:
            v41 = (_BYTE *)(ifunc_40DE70(v41, 47, (unsigned int)(3 - v40)) + (unsigned int)(3 - v40));
LABEL_70:
            v42 = v72;
            *v41 = 0;
            do
            {
              v43 = *v42++;
              v44 = (unsigned __int8)dword_45DDA0[v43];
              *(v42 - 1) = v44;
            }
            while ( v44 );
            v45 = v75;
            do
            {
              v46 = *v45++;
              v47 = (unsigned __int8)dword_45DDA0[v46];
              *(v45 - 1) = v47;
            }
            while ( v47 );
            if ( (unsigned int)sub_415EA0(v72, v75) )
              goto LABEL_13;
            v27 = (_QWORD *)v26[2];
          }
          if ( !*v27 )
          {
            v63 = sub_42F700(*v26, 47);
            v64 = v63 - 1;
            if ( *(_BYTE *)(v63 - 2) == 47 )
            {
              v66 = 1;
            }
            else
            {
              do
              {
                v65 = *(unsigned __int8 *)(v64 - 2);
                --v64;
              }
              while ( v65 != 47 );
              v66 = v63 - v64;
            }
            *v27 = ((__int64 (__fastcall *)(__int64, __int64))loc_443350)(v64, v66);
          }
          if ( !v85 || (unsigned int)sub_42F110(v85, "TRANSLIT", off_48FA10) )
          {
            v48 = v26[2];
          }
          else
          {
            v48 = v26[2];
            *(_DWORD *)(v48 + 44) = 1;
          }
          v49 = *(_DWORD *)(v48 + 40);
          if ( v49 <= 0xFFFFFFFD )
            *(_DWORD *)(v48 + 40) = v49 + 1;
          goto LABEL_13;
        }
        if ( sub_43BC10(a3, &v83) )
          goto LABEL_13;
        v17 = (__int64)v83;
        a2 = 16;
        a1 = "/usr/lib/locale";
      }
      if ( v17 )
        goto LABEL_32;
      goto LABEL_65;
    }
  }
  else if ( v11 > 2 )
  {
    if ( *v9 == 46 && v9[1] == 46 && v9[2] == 47 )
      goto LABEL_18;
    v12 = &v9[v11];
    if ( v9[v11 - 3] == 47 && *(v12 - 2) == 46 && *(v12 - 1) == 46 )
      goto LABEL_18;
  }
  if ( !ifunc_42EF50(v9, 47, v11) || *v9 == 47 )
    goto LABEL_11;
LABEL_18:
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
LABEL_13:
  if ( v89 == qword_48DD60 )
    return;
  sub_412340();
LABEL_121:
  sub_41F250("locale_codeset != NULL", "findlocale.c", 282, "_nl_find_locale");
  v80 = &vars0;
  v81 = v4;
  v69 = *(_DWORD *)(v68 + 40) - 1;
  *(_DWORD *)(v68 + 40) = v69;
  if ( !v69 )
  {
    if ( *(_DWORD *)(v68 + 24) != 2 )
    {
      for ( i = qword_496A20[(int)v67]; *(_QWORD *)(i + 16) != v68; i = *(_QWORD *)(i + 24) )
        ;
      *(_DWORD *)(i + 8) = 0;
      *(_QWORD *)(i + 16) = 0;
    }
    sub_43CB64(v67);
  }
}
