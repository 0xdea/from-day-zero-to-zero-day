__int64 *__fastcall sub_4407D0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // d8
  __int16 v6; // w19
  __int64 v8; // x0
  int v9; // w20
  int v10; // w24
  int v11; // w25
  double v12; // d8
  double v13; // x21
  __int64 v14; // x22
  const char *v15; // x20
  int v16; // w0
  int v17; // w24
  _BOOL4 v18; // w21
  __int64 *result; // x0
  _BYTE *v21; // x0
  unsigned __int64 v22; // x27
  __int64 *v23; // x19
  _BOOL4 v24; // w26
  unsigned __int64 v25; // x0
  __int64 v26; // x4
  __int64 v27; // x21
  unsigned int v28; // w25
  __int64 v29; // x0
  unsigned __int64 v30; // x0
  __int64 v31; // x1
  unsigned __int64 v32; // x0
  int v33; // w1
  char *v34; // x1
  int v35; // w8
  unsigned int v36; // w3
  __int64 v37; // x3
  int v38; // w9
  __int64 v39; // x1
  int v40; // w8
  unsigned __int64 v41; // x7
  unsigned __int64 StatusReg; // x11
  int v43; // w1
  unsigned __int64 v44; // x13
  __int64 v45; // x8
  _BYTE *v46; // x1
  int v47; // w3
  bool v48; // zf
  _BYTE *v49; // x0
  __int64 v50; // x27
  __int64 v51; // x4
  int v52; // w2
  __int16 v53; // w0
  int v54; // w2
  int v55; // w24
  _BYTE *v57; // x0
  _BYTE *v58; // x1
  __int16 v59; // w2
  char *v60; // x0
  char v61; // w1
  _BYTE *v63; // x0
  char *v64; // x0
  char v65; // w1
  char *v66; // x0
  char v67; // w1
  int v68; // w1
  unsigned __int64 v69; // x2
  char *v70; // x19
  bool v71; // vf
  signed __int64 v72; // x20
  _BYTE *v73; // x0
  char v74; // w1
  __int64 v77; // x0
  long double v78; // [xsp+0h] [xbp-60h]
  __int64 v79; // [xsp+0h] [xbp-60h]
  __int64 v80; // [xsp+0h] [xbp-60h]
  __int64 v81; // [xsp+0h] [xbp-60h]
  __int64 v82; // [xsp+0h] [xbp-60h]
  __int64 v83; // [xsp+0h] [xbp-60h]
  __int64 v84; // [xsp+0h] [xbp-60h]
  __int64 v85; // [xsp+0h] [xbp-60h]
  __int64 v86; // [xsp+0h] [xbp-60h]
  __int64 v87; // [xsp+0h] [xbp-60h]
  __int64 v88; // [xsp+0h] [xbp-60h]
  long double v89; // [xsp+10h] [xbp-50h]
  __int64 v90; // [xsp+10h] [xbp-50h]
  _BYTE v92[7]; // [xsp+35h] [xbp-2Bh] BYREF
  _BYTE v93[12]; // [xsp+3Ch] [xbp-24h] BYREF
  _BYTE v94[3]; // [xsp+48h] [xbp-18h] BYREF
  _BYTE v95[13]; // [xsp+4Bh] [xbp-15h] BYREF
  __int64 v96; // [xsp+58h] [xbp-8h] BYREF
  __int64 v97; // [xsp+C0h] [xbp+60h]

  v6 = *(_WORD *)(a3 + 12);
  v96 = qword_48DD60;
  if ( (v6 & 0x100) != 0 )
  {
    v97 = v4;
    sub_41F250("info->extra == 0", (__int64)"../stdio-common/printf_fphex.c", 0x41u, (__int64)"__printf_fphex_buffer");
  }
  v8 = *a4;
  v9 = *(_DWORD *)a3;
  v10 = *(_DWORD *)(a3 + 4);
  v11 = *(_DWORD *)(a3 + 8);
  if ( (v6 & 1) == 0 )
  {
    v12 = *(double *)v8;
    v13 = *(double *)v8;
    v14 = *(_QWORD *)v8 >> 63;
    if ( fabs(*(double *)v8) > 1.79769313e308 )
    {
      v15 = "inf";
      v4 = v97;
      if ( (*(_WORD *)(*(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 72) + 2LL * v11) & 0x100) != 0 )
        v15 = "INF";
      goto LABEL_6;
    }
    v22 = *(_QWORD *)&v13 & 0xFFFFFFFFFFFFFLL;
    v23 = &v96;
    v24 = (*(_QWORD *)&v13 & 0xFFFFFFFFFFFFFLL) == 0;
    v25 = sub_4244D0(*(_QWORD *)&v13 & 0xFFFFFFFFFFFFFLL, (__int64)&v96, 0x10u, v11 == 65);
    v26 = v25;
    if ( v25 > (unsigned __int64)v95 )
      v26 = ifunc_40DE70(v95, 48, v25 - (_QWORD)v95);
    v27 = (*(_QWORD *)&v13 >> 52) & 0x7FFLL;
    v28 = ((*(_QWORD *)&v12 & 0x7FF0000000000000LL) != 0) + 48;
    if ( !(_DWORD)v27 )
    {
      if ( v22 )
      {
        v4 = v97;
        LODWORD(v27) = 1;
        v29 = 1022;
        goto LABEL_42;
      }
      v4 = v97;
      v23 = (__int64 *)v26;
LABEL_78:
      if ( v9 == -1 )
        v9 = 0;
      goto LABEL_80;
    }
    v4 = v97;
    if ( (int)v27 <= 1022 )
    {
      v29 = (unsigned int)(1023 - v27);
      LODWORD(v27) = 1;
    }
    else
    {
      v29 = (unsigned int)(v27 - 1023);
      LODWORD(v27) = 0;
    }
    goto LABEL_76;
  }
  v78 = *(long double *)v8;
  v14 = *(_QWORD *)(v8 + 8) >> 63;
  if ( (unsigned int)sub_44D7B0(v78, v78) )
  {
    v15 = "NAN";
    if ( (*(_WORD *)(*(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 72) + 2LL * v11) & 0x100) == 0 )
      v15 = "nan";
LABEL_6:
    v16 = v6 & 0x20;
    if ( !(_DWORD)v14 )
      goto LABEL_7;
    goto LABEL_26;
  }
  *(_QWORD *)&v89 = *(_QWORD *)&v78;
  *((_QWORD *)&v89 + 1) = *((_QWORD *)&v78 + 1) & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned int)sub_44D7B0(v89, *(long double *)&xmmword_45A930)
    || (int)sub_44D650(v89, *(long double *)&xmmword_45A930) <= 0 )
  {
    v23 = &v96;
    v90 = *((_QWORD *)&v78 + 1) & 0xFFFFFFFFFFFFLL | *(_QWORD *)&v78;
    v24 = v90 == 0;
    v30 = sub_4244D0(*(unsigned __int64 *)&v78, (__int64)&v96, 0x10u, v11 == 65);
    v31 = v30;
    if ( v30 > (unsigned __int64)v94 )
      v31 = ifunc_40DE70(v94, 48, v30 - (_QWORD)v94);
    v32 = sub_4244D0(*((_QWORD *)&v78 + 1) & 0xFFFFFFFFFFFFLL, v31, 0x10u, *(_DWORD *)(a3 + 8) == 65);
    v26 = v32;
    if ( v32 > (unsigned __int64)v93 )
      v26 = ifunc_40DE70(v93, 48, v32 - (_QWORD)v93);
    v27 = HIWORD(*((_QWORD *)&v78 + 1)) & 0x7FFFLL;
    v28 = ((*((_QWORD *)&v78 + 1) & 0x7FFF000000000000LL) != 0) + 48;
    if ( (_DWORD)v27 )
    {
      if ( (HIWORD(v78) & 0x7FFFu) <= 0x3FFE )
      {
        v29 = (unsigned int)(0x3FFF - v27);
        LODWORD(v27) = 1;
      }
      else
      {
        v29 = (unsigned int)(v27 - 0x3FFF);
        LODWORD(v27) = 0;
      }
    }
    else
    {
      if ( v90 )
      {
        LODWORD(v27) = 1;
        v29 = 16382;
        goto LABEL_42;
      }
      v29 = 0;
    }
LABEL_76:
    if ( v24 )
    {
      v22 = (int)v29;
      v23 = (__int64 *)v26;
      goto LABEL_78;
    }
LABEL_42:
    if ( v95[12] == 48 )
    {
      do
      {
        v33 = *((unsigned __int8 *)v23 - 2);
        v23 = (__int64 *)((char *)v23 - 1);
      }
      while ( v33 == 48 );
    }
    v34 = (char *)v23 - v26;
    if ( v9 == -1 )
    {
      v9 = (_DWORD)v23 - v26;
      v22 = (int)v29;
      goto LABEL_80;
    }
    if ( v9 >= (__int64)v34 )
      goto LABEL_132;
    v35 = *(unsigned __int8 *)(v26 + v9);
    if ( v9 <= 0 )
    {
      v36 = v28;
    }
    else
    {
      v36 = *(unsigned __int8 *)(v26 + v9 - 1);
      if ( (unsigned __int8)(v36 - 65) <= 5u )
      {
        v37 = v36 - 55;
        goto LABEL_50;
      }
      if ( (unsigned __int8)(v36 - 97) <= 5u )
      {
        v37 = v36 - 87;
LABEL_50:
        if ( (unsigned __int8)(v35 - 65) <= 5u || (unsigned __int8)(v35 - 97) <= 5u )
        {
          v39 = _ReadStatusReg(FPCR) & 0xC00000;
          if ( (_DWORD)v39 == 0x800000 )
          {
            if ( (_DWORD)v14 )
              goto LABEL_58;
            goto LABEL_168;
          }
          if ( (unsigned int)v39 > 0x800000 )
          {
            if ( (_DWORD)v39 == 12582912 )
              goto LABEL_132;
LABEL_178:
            v97 = v4;
            sub_4002C0(v29, v39, v9, v37);
          }
          if ( !(_DWORD)v39 )
          {
            v40 = 1;
LABEL_57:
            if ( (((unsigned int)v37 | v40) & 1) != 0 )
              goto LABEL_58;
LABEL_132:
            v22 = (int)v29;
            goto LABEL_80;
          }
          if ( (_DWORD)v14 )
            goto LABEL_155;
        }
        else
        {
          v38 = v35 - 48;
          if ( (v35 & 7) != 0 )
          {
            v39 = 1;
            v40 = 1;
          }
          else
          {
            v39 = (__int64)v34 > v9 + 1;
            v40 = v39;
          }
          v41 = _ReadStatusReg(FPCR) & 0xC00000;
          if ( (_DWORD)v41 != 0x400000 )
          {
            if ( (unsigned int)v41 <= 0x400000 )
            {
              if ( v38 <= 7 )
                goto LABEL_132;
              goto LABEL_57;
            }
            if ( (_DWORD)v41 != 0x800000 )
            {
              if ( (_DWORD)v41 == 12582912 )
                goto LABEL_132;
              goto LABEL_178;
            }
            if ( (_DWORD)v14 )
            {
              if ( v38 > 7 || (_DWORD)v39 != 0 )
                goto LABEL_58;
LABEL_155:
              v85 = v26;
              v50 = sub_4244D0((int)v29, (__int64)v92, 0xAu, 0);
              v51 = v85;
              v52 = 4;
LABEL_82:
              v53 = *(_WORD *)(a3 + 12);
              v54 = v10 - (v9 + v52 + (unsigned int)&v92[-v50]);
              if ( v9 <= 0 )
              {
                v55 = v54 - 2;
                if ( (v53 & 8) != 0 )
                  v55 = v54 - 3;
              }
              else
              {
                v55 = v54 - 3;
              }
              if ( (v53 & 0x20) == 0 && *(_DWORD *)(a3 + 16) != 48 && v55 > 0 )
              {
                v84 = v51;
                sub_43E240(a1, 0x20u, v55);
                v51 = v84;
              }
              v57 = *(_BYTE **)(a1 + 8);
              v58 = *(_BYTE **)(a1 + 16);
              if ( (_DWORD)v14 )
              {
                if ( v57 != v58 )
                {
                  *(_QWORD *)(a1 + 8) = v57 + 1;
                  *v57 = 45;
                  v57 = *(_BYTE **)(a1 + 8);
                  v58 = *(_BYTE **)(a1 + 16);
                  goto LABEL_93;
                }
                v74 = 45;
                v87 = v51;
              }
              else
              {
                v59 = *(_WORD *)(a3 + 12);
                if ( (v59 & 0x40) != 0 )
                {
                  if ( v57 != v58 )
                  {
                    *(_QWORD *)(a1 + 8) = v57 + 1;
                    *v57 = 43;
                    v57 = *(_BYTE **)(a1 + 8);
                    v58 = *(_BYTE **)(a1 + 16);
                    goto LABEL_93;
                  }
                  v74 = 43;
                  v87 = v51;
                }
                else
                {
                  if ( (v59 & 0x10) == 0 )
                  {
LABEL_93:
                    if ( v57 == v58 )
                    {
                      v83 = v51;
                      sub_43E2F0(a1, 48);
                      v51 = v83;
                    }
                    else
                    {
                      *(_QWORD *)(a1 + 8) = v57 + 1;
                      *v57 = 48;
                    }
                    v60 = *(char **)(a1 + 8);
                    v61 = *(_DWORD *)(a3 + 8) + 23;
                    if ( v60 == *(char **)(a1 + 16) )
                    {
                      v82 = v51;
                      sub_43E2F0(a1, v61);
                      v51 = v82;
                    }
                    else
                    {
                      *(_QWORD *)(a1 + 8) = v60 + 1;
                      *v60 = v61;
                    }
                    if ( (*(_WORD *)(a3 + 12) & 0x20) == 0 && *(_DWORD *)(a3 + 16) == 48 && v55 > 0 )
                    {
                      v86 = v51;
                      sub_43E240(a1, 0x30u, v55);
                      v51 = v86;
                    }
                    v63 = *(_BYTE **)(a1 + 8);
                    if ( v63 == *(_BYTE **)(a1 + 16) )
                    {
                      v81 = v51;
                      sub_43E2F0(a1, v28);
                      v51 = v81;
                    }
                    else
                    {
                      *(_QWORD *)(a1 + 8) = v63 + 1;
                      *v63 = v28;
                    }
                    v80 = v51;
                    if ( v9 > 0 )
                    {
                      ((void (__fastcall *)(unsigned __int64, __int64))loc_43E360)(a1, a2);
                      v69 = v9;
                      v70 = (char *)v23 - v80;
                      v71 = __OFSUB__(v9, v70);
                      v72 = v9 - (_QWORD)v70;
                      if ( !((v72 < 0) ^ v71 | (v72 == 0)) )
                        v69 = (unsigned __int64)v70;
                      sub_43E650(a1, v80, v69);
                      if ( v72 > 0 )
                        sub_43E240(a1, 0x30u, v72);
                    }
                    else if ( (*(_WORD *)(a3 + 12) & 8) != 0 )
                    {
                      ((void (__fastcall *)(unsigned __int64, __int64))loc_43E360)(a1, a2);
                    }
                    v64 = *(char **)(a1 + 8);
                    v65 = *(_DWORD *)(a3 + 8) + 15;
                    if ( v64 == *(char **)(a1 + 16) )
                    {
                      sub_43E2F0(a1, v65);
                    }
                    else
                    {
                      *(_QWORD *)(a1 + 8) = v64 + 1;
                      *v64 = v65;
                    }
                    v66 = *(char **)(a1 + 8);
                    if ( (_DWORD)v27 )
                      v67 = 45;
                    else
                      v67 = 43;
                    if ( v66 == *(char **)(a1 + 16) )
                    {
                      sub_43E2F0(a1, v67);
                    }
                    else
                    {
                      *(_QWORD *)(a1 + 8) = v66 + 1;
                      *v66 = v67;
                    }
                    sub_43E650(a1, v50, (unsigned __int64)&v92[-v50]);
                    if ( (*(_WORD *)(a3 + 12) & 0x20) != 0 )
                    {
                      v68 = *(_DWORD *)(a3 + 16);
                      if ( v68 != 48 && v55 > 0 )
                        sub_43E240(a1, v68, v55);
                    }
                    goto LABEL_18;
                  }
                  if ( v57 != v58 )
                  {
                    *(_QWORD *)(a1 + 8) = v57 + 1;
                    *v57 = 32;
                    v57 = *(_BYTE **)(a1 + 8);
                    v58 = *(_BYTE **)(a1 + 16);
                    goto LABEL_93;
                  }
                  v74 = 32;
                  v87 = v51;
                }
              }
              sub_43E2F0(a1, v74);
              v51 = v87;
              v57 = *(_BYTE **)(a1 + 8);
              v58 = *(_BYTE **)(a1 + 16);
              goto LABEL_93;
            }
LABEL_168:
            v88 = v26;
            v50 = sub_4244D0((int)v29, (__int64)v92, 0xAu, 0);
            v51 = v88;
LABEL_81:
            LODWORD(v14) = 0;
            v52 = ((*(_DWORD *)(a3 + 12) & 0x50) != 0) + 3;
            goto LABEL_82;
          }
          if ( (_DWORD)v14 )
            goto LABEL_155;
          if ( v38 <= 7 && (_DWORD)v39 == 0 )
            goto LABEL_168;
        }
LABEL_58:
        StatusReg = _ReadStatusReg(TPIDR_EL0);
        v43 = v9 - 1;
        if ( v9 - 1 < 0 )
        {
LABEL_63:
          if ( *(int *)(*(_QWORD *)(StatusReg + 88) + 4LL * v28) > 101 )
          {
            if ( (_DWORD)v27 )
            {
              LODWORD(v22) = v29 - 4;
              if ( (int)v29 - 4 <= 0 )
              {
                LOBYTE(v28) = 49;
                LODWORD(v27) = 0;
                v22 = 4 - (int)v29;
              }
              else
              {
                v22 = (int)v22;
                LOBYTE(v28) = 49;
              }
            }
            else
            {
              LOBYTE(v28) = 49;
              v22 = (int)v29 + 4;
            }
          }
          else
          {
            v22 = (int)v29;
            LOBYTE(v28) = v28 + 1;
          }
        }
        else
        {
          v44 = _ReadStatusReg(TPIDR_EL0);
          v45 = v26 - (unsigned int)v43 + v9 - 2LL;
          v46 = (_BYTE *)(v26 + v43);
          while ( 1 )
          {
            v47 = (unsigned __int8)*v46;
            if ( v47 == 57 )
            {
              v22 = (int)v29;
              *v46 = *(_DWORD *)(a3 + 8);
              goto LABEL_80;
            }
            StatusReg = v44;
            if ( *(int *)(*(_QWORD *)(v44 + 88) + 4LL * (unsigned __int8)*v46) <= 101 )
              break;
            *v46-- = 48;
            if ( (_BYTE *)v45 == v46 )
              goto LABEL_63;
          }
          v22 = (int)v29;
          *v46 = v47 + 1;
        }
LABEL_80:
        v79 = v26;
        v50 = sub_4244D0(v22, (__int64)v92, 0xAu, 0);
        v51 = v79;
        v52 = 4;
        if ( (_DWORD)v14 )
          goto LABEL_82;
        goto LABEL_81;
      }
    }
    v37 = v36 - 48;
    goto LABEL_50;
  }
  v15 = "inf";
  if ( (*(_WORD *)(*(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 72) + 2LL * v11) & 0x100) != 0 )
    v15 = "INF";
  v16 = v6 & 0x20;
  if ( !(_DWORD)v14 )
  {
LABEL_7:
    if ( (*(_DWORD *)(a3 + 12) & 0x50) != 0 )
    {
      v17 = v10 - 4;
      v18 = v17 > 0;
      if ( v16 )
        goto LABEL_11;
      if ( v17 <= 0 )
      {
        v18 = 0;
        goto LABEL_11;
      }
    }
    else
    {
      v17 = v10 - 3;
      v18 = v17 > 0;
      if ( v16 )
        v48 = 1;
      else
        v48 = v17 <= 0;
      if ( v48 )
      {
LABEL_11:
        if ( (v6 & 0x40) == 0 )
          goto LABEL_12;
        goto LABEL_72;
      }
    }
    sub_43E240(a1, 0x20u, v17);
    v6 = *(_WORD *)(a3 + 12);
    v18 = 1;
    if ( (v6 & 0x40) == 0 )
    {
LABEL_12:
      if ( (v6 & 0x10) != 0 )
      {
        v73 = *(_BYTE **)(a1 + 8);
        if ( v73 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 32);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v73 + 1;
          *v73 = 32;
        }
      }
      goto LABEL_13;
    }
LABEL_72:
    v49 = *(_BYTE **)(a1 + 8);
    if ( v49 == *(_BYTE **)(a1 + 16) )
    {
      sub_43E2F0(a1, 43);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v49 + 1;
      *v49 = 43;
    }
    goto LABEL_13;
  }
LABEL_26:
  v17 = v10 - 4;
  if ( !v16 && v17 > 0 )
    sub_43E240(a1, 0x20u, v17);
  v21 = *(_BYTE **)(a1 + 8);
  if ( v21 == *(_BYTE **)(a1 + 16) )
  {
    sub_43E2F0(a1, 45);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v21 + 1;
    *v21 = 45;
  }
  v18 = v17 > 0;
LABEL_13:
  ((void (__fastcall *)(unsigned __int64, const char *))loc_43E360)(a1, v15);
  if ( (*(_WORD *)(a3 + 12) & 0x20LL) != 0 && v18 )
  {
    if ( v96 == qword_48DD60 )
      return (__int64 *)sub_43E240(a1, 0x20u, v17);
    goto LABEL_194;
  }
LABEL_18:
  result = &qword_48DD60;
  if ( v96 != qword_48DD60 )
  {
LABEL_194:
    v97 = v4;
    v77 = sub_412340();
    return (__int64 *)sub_441304(v77);
  }
  return result;
}
