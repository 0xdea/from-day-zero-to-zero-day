char *__fastcall execute_cfa_program_specialized(char *result, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x29
  __int64 v5; // x30
  unsigned __int64 v6; // x20
  __int64 v8; // x23
  __int64 v9; // x1
  __int64 v10; // x25
  unsigned __int64 v11; // x22
  unsigned __int64 v12; // x5
  char v13; // w4
  char *v14; // x19
  int v15; // w6
  __int64 v19; // x4
  __int64 v20; // x2
  int v21; // w6
  char v22; // t1
  unsigned __int64 v23; // x5
  __int64 v24; // x0
  char v26; // w0
  char *v27; // x3
  __int64 v28; // x26
  __int64 v29; // x0
  unsigned int v30; // t1
  int v31; // w1
  char v32; // t1
  unsigned __int64 v33; // x0
  __int64 v34; // x4
  unsigned int v35; // t1
  unsigned __int64 v36; // x0
  unsigned __int64 v37; // x4
  int v38; // w1
  char v39; // t1
  unsigned __int64 v40; // x0
  __int64 v41; // x3
  unsigned int v42; // t1
  unsigned __int64 v43; // x0
  __int64 v44; // x4
  int v45; // w1
  char v46; // t1
  unsigned __int64 v47; // x0
  __int64 v48; // x3
  unsigned int v49; // w1
  unsigned int v50; // t1
  unsigned __int64 v51; // x0
  __int64 v52; // x3
  unsigned int v53; // t1
  unsigned __int64 v54; // x0
  unsigned __int64 v55; // x4
  int v56; // w1
  char v57; // t1
  unsigned __int64 v58; // x0
  __int64 v59; // x3
  unsigned int v60; // t1
  unsigned __int64 v61; // x0
  int v62; // w1
  unsigned int v63; // t1
  unsigned __int64 v64; // x0
  unsigned int v65; // t1
  unsigned __int64 v66; // x0
  int v67; // w1
  char v68; // t1
  unsigned __int64 v69; // x0
  unsigned int v70; // t1
  unsigned __int64 v71; // x0
  unsigned __int64 v72; // x3
  int v73; // w1
  char v74; // t1
  unsigned __int64 v75; // x0
  __int64 v76; // x0
  unsigned int v77; // t1
  unsigned int v78; // t1
  unsigned __int64 v79; // x0
  unsigned __int64 v80; // x4
  int v81; // w1
  char v82; // t1
  unsigned __int64 v83; // x0
  __int64 v84; // x3
  unsigned int v85; // t1
  unsigned __int64 v86; // x0
  int v87; // w1
  char v88; // t1
  unsigned __int64 v89; // x0
  unsigned int v90; // t1
  unsigned __int64 v91; // x0
  unsigned int v92; // t1
  unsigned __int64 v93; // x0
  unsigned int v94; // t1
  unsigned __int64 v95; // x0
  unsigned int v96; // t1
  unsigned __int64 v97; // x0
  __int64 v98; // x4
  int v99; // w1
  char v100; // t1
  unsigned __int64 v101; // x0
  int v102; // w1
  unsigned int v103; // t1
  unsigned __int64 v104; // x0
  unsigned __int64 v105; // x3
  int v106; // w1
  char v107; // t1
  unsigned __int64 v108; // x0
  __int64 v109; // x0
  unsigned int v110; // t1
  char v111; // [xsp+8h] [xbp-400h] BYREF
  __int64 v112; // [xsp+3A8h] [xbp-60h]
  __int64 v113; // [xsp+3B0h] [xbp-58h]
  __int64 v114; // [xsp+400h] [xbp-8h] BYREF

  *(_QWORD *)(a4 + 888) = 0;
  if ( (unsigned __int64)result < a2 )
  {
    v112 = v4;
    v113 = v5;
    v6 = a4;
    v8 = a3;
    v9 = *(_QWORD *)(a3 + 792);
    v10 = 0;
    v11 = v9 + (*(_QWORD *)(a3 + 832) >> 63);
    do
    {
      v12 = *(_QWORD *)(v6 + 920);
      if ( v12 >= v11 )
        return result;
      v14 = result + 1;
      v13 = *result;
      v15 = *result & 0xC0;
      switch ( v15 )
      {
        case 64:
          *(_QWORD *)(v6 + 920) = v12 + (v13 & 0x3F);
          break;
        case 128:
          v19 = v13 & 0x3F;
          ++result;
          v20 = 0;
          v21 = 0;
          do
          {
            v22 = *result++;
            v23 = (unsigned __int64)(v22 & 0x7F) << v21;
            v21 += 7;
            v20 |= v23;
          }
          while ( v22 < 0 );
          v9 = v6 + v19;
          a4 = 1;
          a3 = -8 * v20;
          *(_BYTE *)(v6 + v19 + 784) = 1;
          *(_QWORD *)(v6 + 8 * v19) = a3;
          continue;
        case 192:
          *(_BYTE *)(v6 + (v13 & 0x3F) + 784) = 0;
          break;
        default:
          switch ( *result )
          {
            case 0:
              goto LABEL_11;
            case 1:
              __asm { BTI             j; jumptable 000000000044EAAC case 1 }
              result = read_encoded_value(v8, *(_BYTE *)(v6 + 960), result + 1, (unsigned __int64 *)&v114);
              v9 = v114;
              *(_QWORD *)(v6 + 920) = v114;
              continue;
            case 2:
              __asm { BTI             j; jumptable 000000000044EAAC case 2 }
              v9 = (unsigned __int8)result[1];
              result += 2;
              *(_QWORD *)(v6 + 920) = v12 + v9;
              continue;
            case 3:
              __asm { BTI             j; jumptable 000000000044EAAC case 3 }
              v9 = *(unsigned __int16 *)(result + 1);
              result += 3;
              *(_QWORD *)(v6 + 920) = v12 + v9;
              continue;
            case 4:
              __asm { BTI             j; jumptable 000000000044EAAC case 4 }
              v9 = *(unsigned int *)(result + 1);
              result += 5;
              *(_QWORD *)(v6 + 920) = v12 + v9;
              continue;
            case 5:
              __asm { BTI             j; jumptable 000000000044EAAC case 5 }
              v37 = 0;
              v87 = 0;
              do
              {
                v88 = *v14++;
                v89 = (unsigned __int64)(v88 & 0x7F) << v87;
                v87 += 7;
                v37 |= v89;
              }
              while ( v88 < 0 );
              v41 = 0;
              LODWORD(v9) = 0;
              do
              {
                v90 = (unsigned __int8)*v14++;
                a3 = v90;
                v91 = (unsigned __int64)(v90 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v41 |= v91;
              }
              while ( (v90 & 0x80) != 0 );
              goto LABEL_51;
            case 6:
              __asm { BTI             j; jumptable 000000000044EAAC case 6 }
              a4 = 0;
              LODWORD(v9) = 0;
              do
              {
                v92 = (unsigned __int8)*v14++;
                a3 = v92;
                v93 = (unsigned __int64)(v92 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                a4 |= v93;
              }
              while ( (v92 & 0x80) != 0 );
              goto LABEL_112;
            case 7:
              __asm { BTI             j; jumptable 000000000044EAAC case 7 }
              a4 = 0;
              LODWORD(v9) = 0;
              do
              {
                v94 = (unsigned __int8)*v14++;
                a3 = v94;
                v95 = (unsigned __int64)(v94 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                a4 |= v95;
              }
              while ( (v94 & 0x80) != 0 );
              if ( a4 <= 0x61 )
              {
                a4 += v6;
                *(_BYTE *)(a4 + 784) = 7;
              }
              goto LABEL_11;
            case 8:
              __asm { BTI             j; jumptable 000000000044EAAC case 8 }
              a4 = 0;
              LODWORD(v9) = 0;
              do
              {
                v96 = (unsigned __int8)*v14++;
                a3 = v96;
                v97 = (unsigned __int64)(v96 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                a4 |= v97;
              }
              while ( (v96 & 0x80) != 0 );
LABEL_112:
              if ( a4 <= 0x61 )
              {
                a4 += v6;
                *(_BYTE *)(a4 + 784) = 0;
              }
              goto LABEL_11;
            case 9:
              __asm { BTI             j; jumptable 000000000044EAAC case 9 }
              a4 = 0;
              v31 = 0;
              do
              {
                v32 = *v14++;
                v33 = (unsigned __int64)(v32 & 0x7F) << v31;
                v31 += 7;
                a4 |= v33;
              }
              while ( v32 < 0 );
              v34 = 0;
              LODWORD(v9) = 0;
              do
              {
                v35 = (unsigned __int8)*v14++;
                a3 = v35;
                v36 = (unsigned __int64)(v35 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v34 |= v36;
              }
              while ( (v35 & 0x80) != 0 );
              if ( a4 <= 0x61 )
              {
                v9 = 2;
                *(_BYTE *)(v6 + a4 + 784) = 2;
                *(_QWORD *)(v6 + 8 * a4) = v34;
              }
              goto LABEL_11;
            case 10:
              __asm { BTI             j; jumptable 000000000044EAAC case 10 }
              if ( v10 )
              {
                v27 = (char *)v10;
                v10 = *(_QWORD *)(v10 + 888);
              }
              else
              {
                v27 = &v111;
              }
              a4 = j_memcpy(v27);
              result = v14;
              *(_QWORD *)(v6 + 888) = a4;
              continue;
            case 11:
              __asm { BTI             j; jumptable 000000000044EAAC case 11 }
              v28 = *(_QWORD *)(v6 + 888);
              j_memcpy(v6);
              result = v14;
              *(_QWORD *)(v28 + 888) = v10;
              v10 = v28;
              continue;
            case 12:
              __asm { BTI             j; jumptable 000000000044EAAC case 12 }
              v98 = 0;
              v99 = 0;
              do
              {
                v100 = *v14++;
                v101 = (unsigned __int64)(v100 & 0x7F) << v99;
                v99 += 7;
                v98 |= v101;
              }
              while ( v100 < 0 );
              a4 = 0;
              v102 = 0;
              *(_QWORD *)(v6 + 904) = v98;
              do
              {
                v103 = (unsigned __int8)*v14++;
                a3 = v103;
                v104 = (unsigned __int64)(v103 & 0x7F) << v102;
                v102 += 7;
                a4 |= v104;
              }
              while ( (v103 & 0x80) != 0 );
              goto LABEL_61;
            case 13:
              __asm { BTI             j; jumptable 000000000044EAAC case 13 }
              a4 = 0;
              v62 = 0;
              do
              {
                v63 = (unsigned __int8)*v14++;
                a3 = v63;
                v64 = (unsigned __int64)(v63 & 0x7F) << v62;
                v62 += 7;
                a4 |= v64;
              }
              while ( (v63 & 0x80) != 0 );
              v9 = 1;
              result = v14;
              *(_BYTE *)(v6 + 882) = 1;
              *(_QWORD *)(v6 + 904) = a4;
              continue;
            case 14:
              __asm { BTI             j; jumptable 000000000044EAAC case 14 }
              a4 = 0;
              LODWORD(v9) = 0;
              do
              {
                v65 = (unsigned __int8)*v14++;
                a3 = v65;
                v66 = (unsigned __int64)(v65 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                a4 |= v66;
              }
              while ( (v65 & 0x80) != 0 );
              goto LABEL_68;
            case 15:
              __asm { BTI             j; jumptable 000000000044EAAC case 15 }
              v29 = 0;
              LODWORD(a3) = 0;
              *(_BYTE *)(v6 + 882) = 2;
              *(_QWORD *)(v6 + 912) = v14;
              do
              {
                v30 = (unsigned __int8)*v14++;
                a4 = v30;
                v9 = (unsigned __int64)(v30 & 0x7F) << a3;
                a3 = (unsigned int)(a3 + 7);
                v29 |= v9;
              }
              while ( (v30 & 0x80) != 0 );
              result = &v14[v29];
              continue;
            case 16:
              __asm { BTI             j; jumptable 000000000044EAAC case 16 }
              v105 = 0;
              v106 = 0;
              do
              {
                v107 = *v14++;
                v108 = (unsigned __int64)(v107 & 0x7F) << v106;
                v106 += 7;
                v105 |= v108;
              }
              while ( v107 < 0 );
              if ( v105 <= 0x61 )
              {
                *(_BYTE *)(v6 + v105 + 784) = 3;
                *(_QWORD *)(v6 + 8 * v105) = v14;
              }
              v109 = 0;
              LODWORD(a3) = 0;
              do
              {
                v110 = (unsigned __int8)*v14++;
                a4 = v110;
                v9 = (unsigned __int64)(v110 & 0x7F) << a3;
                a3 = (unsigned int)(a3 + 7);
                v109 |= v9;
              }
              while ( (v110 & 0x80) != 0 );
              result = &v14[v109];
              continue;
            case 17:
              __asm { BTI             j; jumptable 000000000044EAAC case 17 }
              v37 = 0;
              v38 = 0;
              do
              {
                v39 = *v14++;
                v40 = (unsigned __int64)(v39 & 0x7F) << v38;
                v38 += 7;
                v37 |= v40;
              }
              while ( v39 < 0 );
              v41 = 0;
              LODWORD(v9) = 0;
              do
              {
                v42 = (unsigned __int8)*v14++;
                a3 = v42;
                v43 = (unsigned __int64)(v42 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v41 |= v43;
              }
              while ( (v42 & 0x80) != 0 );
              if ( (unsigned int)v9 <= 0x3F && (a3 & 0x40) != 0 )
                v41 |= -1LL << v9;
LABEL_51:
              a4 = -8 * v41;
              if ( v37 <= 0x61 )
              {
                v9 = 1;
                *(_BYTE *)(v6 + v37 + 784) = 1;
                *(_QWORD *)(v6 + 8 * v37) = a4;
              }
              goto LABEL_11;
            case 18:
              __asm { BTI             j; jumptable 000000000044EAAC case 18 }
              v44 = 0;
              v45 = 0;
              do
              {
                v46 = *v14++;
                v47 = (unsigned __int64)(v46 & 0x7F) << v45;
                v45 += 7;
                v44 |= v47;
              }
              while ( v46 < 0 );
              v48 = 0;
              v49 = 0;
              *(_QWORD *)(v6 + 904) = v44;
              do
              {
                v50 = (unsigned __int8)*v14++;
                a3 = v50;
                v51 = (unsigned __int64)(v50 & 0x7F) << v49;
                v49 += 7;
                v48 |= v51;
              }
              while ( (v50 & 0x80) != 0 );
              if ( v49 <= 0x3F && (a3 & 0x40) != 0 )
                v48 |= -1LL << v49;
              a4 = -8 * v48;
LABEL_61:
              v9 = 1;
              result = v14;
              *(_BYTE *)(v6 + 882) = 1;
              *(_QWORD *)(v6 + 896) = a4;
              continue;
            case 19:
              __asm { BTI             j; jumptable 000000000044EAAC case 19 }
              v52 = 0;
              LODWORD(v9) = 0;
              do
              {
                v53 = (unsigned __int8)*v14++;
                a3 = v53;
                v54 = (unsigned __int64)(v53 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v52 |= v54;
              }
              while ( (v53 & 0x80) != 0 );
              if ( (unsigned int)v9 <= 0x3F && (a3 & 0x40) != 0 )
                v52 |= -1LL << v9;
              a4 = -8 * v52;
LABEL_68:
              result = v14;
              *(_QWORD *)(v6 + 896) = a4;
              continue;
            case 20:
              __asm { BTI             j; jumptable 000000000044EAAC case 20 }
              v55 = 0;
              v56 = 0;
              do
              {
                v57 = *v14++;
                v58 = (unsigned __int64)(v57 & 0x7F) << v56;
                v56 += 7;
                v55 |= v58;
              }
              while ( v57 < 0 );
              v59 = 0;
              LODWORD(v9) = 0;
              do
              {
                v60 = (unsigned __int8)*v14++;
                a3 = v60;
                v61 = (unsigned __int64)(v60 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v59 |= v61;
              }
              while ( (v60 & 0x80) != 0 );
              goto LABEL_73;
            case 21:
              __asm { BTI             j; jumptable 000000000044EAAC case 21 }
              v55 = 0;
              v67 = 0;
              do
              {
                v68 = *v14++;
                v69 = (unsigned __int64)(v68 & 0x7F) << v67;
                v67 += 7;
                v55 |= v69;
              }
              while ( v68 < 0 );
              v59 = 0;
              LODWORD(v9) = 0;
              do
              {
                v70 = (unsigned __int8)*v14++;
                a3 = v70;
                v71 = (unsigned __int64)(v70 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v59 |= v71;
              }
              while ( (v70 & 0x80) != 0 );
              if ( (unsigned int)v9 <= 0x3F && (a3 & 0x40) != 0 )
                v59 |= -1LL << v9;
LABEL_73:
              a4 = -8 * v59;
              if ( v55 <= 0x61 )
              {
                v9 = 4;
                *(_BYTE *)(v6 + v55 + 784) = 4;
                *(_QWORD *)(v6 + 8 * v55) = a4;
              }
              goto LABEL_11;
            case 22:
              __asm { BTI             j; jumptable 000000000044EAAC case 22 }
              v72 = 0;
              v73 = 0;
              do
              {
                v74 = *v14++;
                v75 = (unsigned __int64)(v74 & 0x7F) << v73;
                v73 += 7;
                v72 |= v75;
              }
              while ( v74 < 0 );
              if ( v72 <= 0x61 )
              {
                *(_BYTE *)(v6 + v72 + 784) = 5;
                *(_QWORD *)(v6 + 8 * v72) = v14;
              }
              v76 = 0;
              LODWORD(a3) = 0;
              do
              {
                v77 = (unsigned __int8)*v14++;
                a4 = v77;
                v9 = (unsigned __int64)(v77 & 0x7F) << a3;
                a3 = (unsigned int)(a3 + 7);
                v76 |= v9;
              }
              while ( (v77 & 0x80) != 0 );
              result = &v14[v76];
              continue;
            case 45:
              __asm { BTI             j; jumptable 000000000044EAAC case 45 }
              v24 = *(unsigned __int8 *)(v6 + 818);
              if ( *(_BYTE *)(v6 + 818) )
                _ZF = (_DWORD)v24 == 6;
              else
                _ZF = 1;
              if ( !_ZF )
                abort(v24, v9, a3, a4);
              if ( *(_BYTE *)(v6 + 818) )
                v26 = 0;
              else
                v26 = 6;
              *(_BYTE *)(v6 + 818) = v26;
              goto LABEL_11;
            case 46:
              __asm { BTI             j; jumptable 000000000044EAAC case 46 }
              a4 = 0;
              LODWORD(v9) = 0;
              do
              {
                v78 = (unsigned __int8)*v14++;
                a3 = v78;
                v79 = (unsigned __int64)(v78 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                a4 |= v79;
              }
              while ( (v78 & 0x80) != 0 );
              result = v14;
              *(_QWORD *)(v8 + 848) = a4;
              continue;
            case 47:
              __asm { BTI             j; jumptable 000000000044EAAC case 47 }
              v80 = 0;
              v81 = 0;
              do
              {
                v82 = *v14++;
                v83 = (unsigned __int64)(v82 & 0x7F) << v81;
                v81 += 7;
                v80 |= v83;
              }
              while ( v82 < 0 );
              v84 = 0;
              LODWORD(v9) = 0;
              do
              {
                v85 = (unsigned __int8)*v14++;
                a3 = v85;
                v86 = (unsigned __int64)(v85 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v84 |= v86;
              }
              while ( (v85 & 0x80) != 0 );
              a4 = -8 * v84;
              if ( v80 <= 0x61 )
              {
                v9 = 1;
                a4 = -(__int64)a4;
                *(_BYTE *)(v6 + v80 + 784) = 1;
                *(_QWORD *)(v6 + 8 * v80) = a4;
              }
              goto LABEL_11;
            default:
              __asm { BTI             j; jumptable 000000000044EAAC default case, cases 23-44 }
              abort((__int64)result, v9, a3, a4);
          }
      }
LABEL_11:
      __asm { BTI             j; jumptable 000000000044EAAC case 0 }
      result = v14;
    }
    while ( (unsigned __int64)result < a2 );
  }
  return result;
}
