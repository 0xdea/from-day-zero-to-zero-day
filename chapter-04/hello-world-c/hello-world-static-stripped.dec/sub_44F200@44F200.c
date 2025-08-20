char *__fastcall sub_44F200(char *result, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x29
  __int64 v5; // x30
  __int64 v8; // x23
  __int64 v9; // x1
  __int64 v10; // x25
  unsigned __int64 v11; // x22
  unsigned __int64 v12; // x5
  char v13; // w4
  char *v14; // x19
  __int64 v15; // x3
  __int64 v19; // x4
  __int64 v20; // x7
  int v21; // w3
  char v22; // t1
  unsigned __int64 v23; // x5
  __int64 v24; // x7
  __int64 v25; // x0
  char v27; // w0
  char *v28; // x3
  __int64 v29; // x3
  __int64 v30; // x26
  __int64 v31; // x0
  char v32; // t1
  unsigned __int64 v33; // x3
  int v34; // w1
  char v35; // t1
  unsigned __int64 v36; // x0
  __int64 v37; // x4
  unsigned int v38; // t1
  unsigned __int64 v39; // x0
  unsigned __int64 v40; // x4
  int v41; // w1
  char v42; // t1
  unsigned __int64 v43; // x0
  __int64 v44; // x3
  unsigned int v45; // t1
  unsigned __int64 v46; // x0
  __int64 v47; // x3
  __int64 v48; // x4
  int v49; // w1
  char v50; // t1
  unsigned __int64 v51; // x0
  __int64 v52; // x3
  unsigned int v53; // w1
  char v54; // w2
  char v55; // t1
  unsigned __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x3
  unsigned int v59; // w1
  unsigned int v60; // t1
  unsigned __int64 v61; // x0
  unsigned __int64 v62; // x4
  int v63; // w1
  char v64; // t1
  unsigned __int64 v65; // x0
  __int64 v66; // x3
  unsigned int v67; // t1
  unsigned __int64 v68; // x0
  __int64 v69; // x3
  __int64 v70; // x3
  int v71; // w1
  unsigned int v72; // t1
  unsigned __int64 v73; // x0
  __int64 v74; // x3
  unsigned int v75; // t1
  unsigned __int64 v76; // x0
  int v77; // w1
  char v78; // t1
  unsigned __int64 v79; // x0
  unsigned int v80; // t1
  unsigned __int64 v81; // x0
  unsigned __int64 v82; // x3
  int v83; // w1
  char v84; // t1
  unsigned __int64 v85; // x0
  __int64 v86; // x0
  char v87; // t1
  __int64 v88; // x3
  unsigned int v89; // t1
  unsigned __int64 v90; // x0
  unsigned __int64 v91; // x4
  int v92; // w1
  char v93; // t1
  unsigned __int64 v94; // x0
  __int64 v95; // x3
  unsigned int v96; // t1
  unsigned __int64 v97; // x0
  __int64 v98; // x3
  int v99; // w1
  char v100; // t1
  unsigned __int64 v101; // x0
  unsigned int v102; // t1
  unsigned __int64 v103; // x0
  unsigned __int64 v104; // x3
  unsigned int v105; // t1
  unsigned __int64 v106; // x0
  unsigned __int64 v107; // x3
  unsigned int v108; // t1
  unsigned __int64 v109; // x0
  unsigned int v110; // t1
  unsigned __int64 v111; // x0
  __int64 v112; // x4
  int v113; // w1
  char v114; // t1
  unsigned __int64 v115; // x0
  __int64 v116; // x3
  int v117; // w1
  unsigned int v118; // t1
  unsigned __int64 v119; // x0
  unsigned __int64 v120; // x3
  int v121; // w1
  char v122; // t1
  unsigned __int64 v123; // x0
  __int64 v124; // x0
  char v125; // t1
  char v126; // [xsp+8h] [xbp-400h] BYREF
  __int64 v127; // [xsp+3A8h] [xbp-60h]
  __int64 v128; // [xsp+3B0h] [xbp-58h]
  __int64 v129; // [xsp+400h] [xbp-8h] BYREF

  *(_QWORD *)(a4 + 888) = 0;
  if ( (unsigned __int64)result < a2 )
  {
    v127 = v4;
    v128 = v5;
    v8 = a3;
    v9 = *(_QWORD *)(a3 + 792);
    v10 = 0;
    v11 = v9 + (*(_QWORD *)(a3 + 832) >> 63);
    do
    {
      v12 = *(_QWORD *)(a4 + 920);
      if ( v12 >= v11 )
        return result;
      v14 = result + 1;
      v13 = *result;
      v15 = (unsigned __int8)*result & 0xC0;
      switch ( (_DWORD)v15 )
      {
        case 0x40:
          *(_QWORD *)(a4 + 920) = v12 + (v13 & 0x3F) * *(_QWORD *)(a4 + 944);
          break;
        case 0x80:
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
          v9 = a4 + v19;
          a3 = 1;
          v24 = v20 * *(_QWORD *)(a4 + 936);
          *(_BYTE *)(a4 + v19 + 784) = 1;
          *(_QWORD *)(a4 + 8 * v19) = v24;
          continue;
        case 0xC0:
          *(_BYTE *)(a4 + (v13 & 0x3F) + 784) = 0;
          break;
        default:
          switch ( *result )
          {
            case 0:
              goto LABEL_11;
            case 1:
              __asm { BTI             j; jumptable 000000000044F29C case 1 }
              result = sub_44DBE0(v8, *(_BYTE *)(a4 + 960), result + 1, (unsigned __int64 *)&v129);
              v9 = v129;
              *(_QWORD *)(a4 + 920) = v129;
              continue;
            case 2:
              __asm { BTI             j; jumptable 000000000044F29C case 2 }
              a3 = *(_QWORD *)(a4 + 944);
              result += 2;
              v9 = v12 + (unsigned __int8)*(result - 1) * a3;
              *(_QWORD *)(a4 + 920) = v9;
              continue;
            case 3:
              __asm { BTI             j; jumptable 000000000044F29C case 3 }
              a3 = *(_QWORD *)(a4 + 944);
              result += 3;
              v9 = v12 + *((unsigned __int16 *)result - 1) * a3;
              *(_QWORD *)(a4 + 920) = v9;
              continue;
            case 4:
              __asm { BTI             j; jumptable 000000000044F29C case 4 }
              a3 = *(_QWORD *)(a4 + 944);
              result += 5;
              v9 = v12 + *((unsigned int *)result - 1) * a3;
              *(_QWORD *)(a4 + 920) = v9;
              continue;
            case 5:
              __asm { BTI             j; jumptable 000000000044F29C case 5 }
              v40 = 0;
              v99 = 0;
              do
              {
                v100 = *v14++;
                v101 = (unsigned __int64)(v100 & 0x7F) << v99;
                v99 += 7;
                v40 |= v101;
              }
              while ( v100 < 0 );
              v44 = 0;
              LODWORD(v9) = 0;
              do
              {
                v102 = (unsigned __int8)*v14++;
                a3 = v102;
                v103 = (unsigned __int64)(v102 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v44 |= v103;
              }
              while ( (v102 & 0x80) != 0 );
              goto LABEL_51;
            case 6:
              __asm { BTI             j; jumptable 000000000044F29C case 6 }
              v104 = 0;
              LODWORD(v9) = 0;
              do
              {
                v105 = (unsigned __int8)*v14++;
                a3 = v105;
                v106 = (unsigned __int64)(v105 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v104 |= v106;
              }
              while ( (v105 & 0x80) != 0 );
              goto LABEL_110;
            case 7:
              __asm { BTI             j; jumptable 000000000044F29C case 7 }
              v107 = 0;
              LODWORD(v9) = 0;
              do
              {
                v108 = (unsigned __int8)*v14++;
                a3 = v108;
                v109 = (unsigned __int64)(v108 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v107 |= v109;
              }
              while ( (v108 & 0x80) != 0 );
              if ( v107 <= 0x61 )
                *(_BYTE *)(a4 + v107 + 784) = 7;
              goto LABEL_11;
            case 8:
              __asm { BTI             j; jumptable 000000000044F29C case 8 }
              v104 = 0;
              LODWORD(v9) = 0;
              do
              {
                v110 = (unsigned __int8)*v14++;
                a3 = v110;
                v111 = (unsigned __int64)(v110 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v104 |= v111;
              }
              while ( (v110 & 0x80) != 0 );
LABEL_110:
              if ( v104 <= 0x61 )
                *(_BYTE *)(a4 + v104 + 784) = 0;
              goto LABEL_11;
            case 9:
              __asm { BTI             j; jumptable 000000000044F29C case 9 }
              v33 = 0;
              v34 = 0;
              do
              {
                v35 = *v14++;
                v36 = (unsigned __int64)(v35 & 0x7F) << v34;
                v34 += 7;
                v33 |= v36;
              }
              while ( v35 < 0 );
              v37 = 0;
              LODWORD(v9) = 0;
              do
              {
                v38 = (unsigned __int8)*v14++;
                a3 = v38;
                v39 = (unsigned __int64)(v38 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v37 |= v39;
              }
              while ( (v38 & 0x80) != 0 );
              if ( v33 <= 0x61 )
              {
                v9 = 2;
                *(_BYTE *)(a4 + v33 + 784) = 2;
                *(_QWORD *)(a4 + 8 * v33) = v37;
              }
              goto LABEL_11;
            case 10:
              __asm { BTI             j; jumptable 000000000044F29C case 10 }
              if ( v10 )
              {
                v28 = (char *)v10;
                v10 = *(_QWORD *)(v10 + 888);
              }
              else
              {
                v28 = &v126;
              }
              v29 = j_ifunc_40DC90(v28, a4, 920);
              result = v14;
              *(_QWORD *)(a4 + 888) = v29;
              continue;
            case 11:
              __asm { BTI             j; jumptable 000000000044F29C case 11 }
              v30 = *(_QWORD *)(a4 + 888);
              j_ifunc_40DC90(a4, v30, 920);
              result = v14;
              *(_QWORD *)(v30 + 888) = v10;
              v10 = v30;
              continue;
            case 12:
              __asm { BTI             j; jumptable 000000000044F29C case 12 }
              v112 = 0;
              v113 = 0;
              do
              {
                v114 = *v14++;
                v115 = (unsigned __int64)(v114 & 0x7F) << v113;
                v113 += 7;
                v112 |= v115;
              }
              while ( v114 < 0 );
              v116 = 0;
              v117 = 0;
              *(_QWORD *)(a4 + 904) = v112;
              do
              {
                v118 = (unsigned __int8)*v14++;
                a3 = v118;
                v119 = (unsigned __int64)(v118 & 0x7F) << v117;
                v117 += 7;
                v116 |= v119;
              }
              while ( (v118 & 0x80) != 0 );
              v9 = 1;
              result = v14;
              *(_BYTE *)(a4 + 882) = 1;
              *(_QWORD *)(a4 + 896) = v116;
              continue;
            case 13:
              __asm { BTI             j; jumptable 000000000044F29C case 13 }
              v70 = 0;
              v71 = 0;
              do
              {
                v72 = (unsigned __int8)*v14++;
                a3 = v72;
                v73 = (unsigned __int64)(v72 & 0x7F) << v71;
                v71 += 7;
                v70 |= v73;
              }
              while ( (v72 & 0x80) != 0 );
              v9 = 1;
              result = v14;
              *(_BYTE *)(a4 + 882) = 1;
              *(_QWORD *)(a4 + 904) = v70;
              continue;
            case 14:
              __asm { BTI             j; jumptable 000000000044F29C case 14 }
              v74 = 0;
              LODWORD(v9) = 0;
              do
              {
                v75 = (unsigned __int8)*v14++;
                a3 = v75;
                v76 = (unsigned __int64)(v75 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v74 |= v76;
              }
              while ( (v75 & 0x80) != 0 );
              result = v14;
              *(_QWORD *)(a4 + 896) = v74;
              continue;
            case 15:
              __asm { BTI             j; jumptable 000000000044F29C case 15 }
              v31 = 0;
              LODWORD(a3) = 0;
              *(_BYTE *)(a4 + 882) = 2;
              *(_QWORD *)(a4 + 912) = v14;
              do
              {
                v32 = *v14++;
                v9 = (unsigned __int64)(v32 & 0x7F) << a3;
                a3 = (unsigned int)(a3 + 7);
                v31 |= v9;
              }
              while ( v32 < 0 );
              result = &v14[v31];
              continue;
            case 16:
              __asm { BTI             j; jumptable 000000000044F29C case 16 }
              v120 = 0;
              v121 = 0;
              do
              {
                v122 = *v14++;
                v123 = (unsigned __int64)(v122 & 0x7F) << v121;
                v121 += 7;
                v120 |= v123;
              }
              while ( v122 < 0 );
              if ( v120 <= 0x61 )
              {
                *(_BYTE *)(a4 + v120 + 784) = 3;
                *(_QWORD *)(a4 + 8 * v120) = v14;
              }
              v124 = 0;
              LODWORD(a3) = 0;
              do
              {
                v125 = *v14++;
                v9 = (unsigned __int64)(v125 & 0x7F) << a3;
                a3 = (unsigned int)(a3 + 7);
                v124 |= v9;
              }
              while ( v125 < 0 );
              result = &v14[v124];
              continue;
            case 17:
              __asm { BTI             j; jumptable 000000000044F29C case 17 }
              v40 = 0;
              v41 = 0;
              do
              {
                v42 = *v14++;
                v43 = (unsigned __int64)(v42 & 0x7F) << v41;
                v41 += 7;
                v40 |= v43;
              }
              while ( v42 < 0 );
              v44 = 0;
              LODWORD(v9) = 0;
              do
              {
                v45 = (unsigned __int8)*v14++;
                a3 = v45;
                v46 = (unsigned __int64)(v45 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v44 |= v46;
              }
              while ( (v45 & 0x80) != 0 );
              if ( (unsigned int)v9 <= 0x3F && (a3 & 0x40) != 0 )
                v44 |= -1LL << v9;
LABEL_51:
              v47 = v44 * *(_QWORD *)(a4 + 936);
              if ( v40 <= 0x61 )
              {
                v9 = 1;
                *(_BYTE *)(a4 + v40 + 784) = 1;
                *(_QWORD *)(a4 + 8 * v40) = v47;
              }
              goto LABEL_11;
            case 18:
              __asm { BTI             j; jumptable 000000000044F29C case 18 }
              v48 = 0;
              v49 = 0;
              do
              {
                v50 = *v14++;
                v51 = (unsigned __int64)(v50 & 0x7F) << v49;
                v49 += 7;
                v48 |= v51;
              }
              while ( v50 < 0 );
              v52 = 0;
              v53 = 0;
              *(_QWORD *)(a4 + 904) = v48;
              do
              {
                v55 = *v14++;
                v54 = v55;
                v56 = (unsigned __int64)(v55 & 0x7F) << v53;
                v53 += 7;
                v52 |= v56;
              }
              while ( v55 < 0 );
              if ( v53 <= 0x3F && (v54 & 0x40) != 0 )
                v52 |= -1LL << v53;
              v57 = *(_QWORD *)(a4 + 936);
              a3 = 1;
              result = v14;
              *(_BYTE *)(a4 + 882) = 1;
              v9 = v57 * v52;
              *(_QWORD *)(a4 + 896) = v9;
              continue;
            case 19:
              __asm { BTI             j; jumptable 000000000044F29C case 19 }
              v58 = 0;
              v59 = 0;
              do
              {
                v60 = (unsigned __int8)*v14++;
                a3 = v60;
                v61 = (unsigned __int64)(v60 & 0x7F) << v59;
                v59 += 7;
                v58 |= v61;
              }
              while ( (v60 & 0x80) != 0 );
              if ( v59 <= 0x3F && (a3 & 0x40) != 0 )
                v58 |= -1LL << v59;
              result = v14;
              v9 = *(_QWORD *)(a4 + 936) * v58;
              *(_QWORD *)(a4 + 896) = v9;
              continue;
            case 20:
              __asm { BTI             j; jumptable 000000000044F29C case 20 }
              v62 = 0;
              v63 = 0;
              do
              {
                v64 = *v14++;
                v65 = (unsigned __int64)(v64 & 0x7F) << v63;
                v63 += 7;
                v62 |= v65;
              }
              while ( v64 < 0 );
              v66 = 0;
              LODWORD(v9) = 0;
              do
              {
                v67 = (unsigned __int8)*v14++;
                a3 = v67;
                v68 = (unsigned __int64)(v67 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v66 |= v68;
              }
              while ( (v67 & 0x80) != 0 );
              goto LABEL_71;
            case 21:
              __asm { BTI             j; jumptable 000000000044F29C case 21 }
              v62 = 0;
              v77 = 0;
              do
              {
                v78 = *v14++;
                v79 = (unsigned __int64)(v78 & 0x7F) << v77;
                v77 += 7;
                v62 |= v79;
              }
              while ( v78 < 0 );
              v66 = 0;
              LODWORD(v9) = 0;
              do
              {
                v80 = (unsigned __int8)*v14++;
                a3 = v80;
                v81 = (unsigned __int64)(v80 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v66 |= v81;
              }
              while ( (v80 & 0x80) != 0 );
              if ( (unsigned int)v9 <= 0x3F && (a3 & 0x40) != 0 )
                v66 |= -1LL << v9;
LABEL_71:
              v69 = v66 * *(_QWORD *)(a4 + 936);
              if ( v62 <= 0x61 )
              {
                v9 = 4;
                *(_BYTE *)(a4 + v62 + 784) = 4;
                *(_QWORD *)(a4 + 8 * v62) = v69;
              }
              goto LABEL_11;
            case 22:
              __asm { BTI             j; jumptable 000000000044F29C case 22 }
              v82 = 0;
              v83 = 0;
              do
              {
                v84 = *v14++;
                v85 = (unsigned __int64)(v84 & 0x7F) << v83;
                v83 += 7;
                v82 |= v85;
              }
              while ( v84 < 0 );
              if ( v82 <= 0x61 )
              {
                *(_BYTE *)(a4 + v82 + 784) = 5;
                *(_QWORD *)(a4 + 8 * v82) = v14;
              }
              v86 = 0;
              LODWORD(a3) = 0;
              do
              {
                v87 = *v14++;
                v9 = (unsigned __int64)(v87 & 0x7F) << a3;
                a3 = (unsigned int)(a3 + 7);
                v86 |= v9;
              }
              while ( v87 < 0 );
              result = &v14[v86];
              continue;
            case 45:
              __asm { BTI             j; jumptable 000000000044F29C case 45 }
              v25 = *(unsigned __int8 *)(a4 + 818);
              if ( *(_BYTE *)(a4 + 818) )
                _ZF = (_DWORD)v25 == 6;
              else
                _ZF = 1;
              if ( !_ZF )
                sub_4002C0(v25, v9, a3, v15);
              if ( *(_BYTE *)(a4 + 818) )
                v27 = 0;
              else
                v27 = 6;
              *(_BYTE *)(a4 + 818) = v27;
              goto LABEL_11;
            case 46:
              __asm { BTI             j; jumptable 000000000044F29C case 46 }
              v88 = 0;
              LODWORD(v9) = 0;
              do
              {
                v89 = (unsigned __int8)*v14++;
                a3 = v89;
                v90 = (unsigned __int64)(v89 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v88 |= v90;
              }
              while ( (v89 & 0x80) != 0 );
              result = v14;
              *(_QWORD *)(v8 + 848) = v88;
              continue;
            case 47:
              __asm { BTI             j; jumptable 000000000044F29C case 47 }
              v91 = 0;
              v92 = 0;
              do
              {
                v93 = *v14++;
                v94 = (unsigned __int64)(v93 & 0x7F) << v92;
                v92 += 7;
                v91 |= v94;
              }
              while ( v93 < 0 );
              v95 = 0;
              LODWORD(v9) = 0;
              do
              {
                v96 = (unsigned __int8)*v14++;
                a3 = v96;
                v97 = (unsigned __int64)(v96 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v95 |= v97;
              }
              while ( (v96 & 0x80) != 0 );
              v98 = v95 * *(_QWORD *)(a4 + 936);
              if ( v91 <= 0x61 )
              {
                v9 = 1;
                *(_BYTE *)(a4 + v91 + 784) = 1;
                *(_QWORD *)(a4 + 8 * v91) = -v98;
              }
              goto LABEL_11;
            default:
              __asm { BTI             j; jumptable 000000000044F29C default case, cases 23-44 }
              sub_4002C0((__int64)result, v9, a3, v15);
          }
      }
LABEL_11:
      __asm { BTI             j; jumptable 000000000044F29C case 0 }
      result = v14;
    }
    while ( (unsigned __int64)result < a2 );
  }
  return result;
}
