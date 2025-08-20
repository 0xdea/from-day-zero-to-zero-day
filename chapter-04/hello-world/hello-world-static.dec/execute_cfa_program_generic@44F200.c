char *__fastcall execute_cfa_program_generic(char *result, unsigned __int64 a2, __int64 a3, __int64 a4)
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
  int v88; // w1
  char v89; // t1
  unsigned __int64 v90; // x0
  unsigned int v91; // t1
  unsigned __int64 v92; // x0
  unsigned __int64 v93; // x3
  unsigned int v94; // t1
  unsigned __int64 v95; // x0
  unsigned __int64 v96; // x3
  unsigned int v97; // t1
  unsigned __int64 v98; // x0
  unsigned int v99; // t1
  unsigned __int64 v100; // x0
  __int64 v101; // x4
  int v102; // w1
  char v103; // t1
  unsigned __int64 v104; // x0
  __int64 v105; // x3
  int v106; // w1
  unsigned int v107; // t1
  unsigned __int64 v108; // x0
  unsigned __int64 v109; // x3
  int v110; // w1
  char v111; // t1
  unsigned __int64 v112; // x0
  __int64 v113; // x0
  char v114; // t1
  char v115; // [xsp+8h] [xbp-400h] BYREF
  __int64 v116; // [xsp+3A8h] [xbp-60h]
  __int64 v117; // [xsp+3B0h] [xbp-58h]
  __int64 v118; // [xsp+400h] [xbp-8h] BYREF

  *(_QWORD *)(a4 + 888) = 0;
  if ( (unsigned __int64)result < a2 )
  {
    v116 = v4;
    v117 = v5;
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
              result = read_encoded_value(v8, *(_BYTE *)(a4 + 960), result + 1, (unsigned __int64 *)&v118);
              v9 = v118;
              *(_QWORD *)(a4 + 920) = v118;
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
              v88 = 0;
              do
              {
                v89 = *v14++;
                v90 = (unsigned __int64)(v89 & 0x7F) << v88;
                v88 += 7;
                v40 |= v90;
              }
              while ( v89 < 0 );
              v44 = 0;
              LODWORD(v9) = 0;
              do
              {
                v91 = (unsigned __int8)*v14++;
                a3 = v91;
                v92 = (unsigned __int64)(v91 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v44 |= v92;
              }
              while ( (v91 & 0x80) != 0 );
              goto LABEL_51;
            case 6:
              __asm { BTI             j; jumptable 000000000044F29C case 6 }
              v93 = 0;
              LODWORD(v9) = 0;
              do
              {
                v94 = (unsigned __int8)*v14++;
                a3 = v94;
                v95 = (unsigned __int64)(v94 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v93 |= v95;
              }
              while ( (v94 & 0x80) != 0 );
              goto LABEL_101;
            case 7:
              __asm { BTI             j; jumptable 000000000044F29C case 7 }
              v96 = 0;
              LODWORD(v9) = 0;
              do
              {
                v97 = (unsigned __int8)*v14++;
                a3 = v97;
                v98 = (unsigned __int64)(v97 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v96 |= v98;
              }
              while ( (v97 & 0x80) != 0 );
              if ( v96 <= 0x61 )
                *(_BYTE *)(a4 + v96 + 784) = 7;
              goto LABEL_11;
            case 8:
              __asm { BTI             j; jumptable 000000000044F29C case 8 }
              v93 = 0;
              LODWORD(v9) = 0;
              do
              {
                v99 = (unsigned __int8)*v14++;
                a3 = v99;
                v100 = (unsigned __int64)(v99 & 0x7F) << v9;
                v9 = (unsigned int)(v9 + 7);
                v93 |= v100;
              }
              while ( (v99 & 0x80) != 0 );
LABEL_101:
              if ( v93 <= 0x61 )
                *(_BYTE *)(a4 + v93 + 784) = 0;
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
                v28 = &v115;
              }
              v29 = j_memcpy(v28);
              result = v14;
              *(_QWORD *)(a4 + 888) = v29;
              continue;
            case 11:
              __asm { BTI             j; jumptable 000000000044F29C case 11 }
              v30 = *(_QWORD *)(a4 + 888);
              j_memcpy(a4);
              result = v14;
              *(_QWORD *)(v30 + 888) = v10;
              v10 = v30;
              continue;
            case 12:
              __asm { BTI             j; jumptable 000000000044F29C case 12 }
              v101 = 0;
              v102 = 0;
              do
              {
                v103 = *v14++;
                v104 = (unsigned __int64)(v103 & 0x7F) << v102;
                v102 += 7;
                v101 |= v104;
              }
              while ( v103 < 0 );
              v105 = 0;
              v106 = 0;
              *(_QWORD *)(a4 + 904) = v101;
              do
              {
                v107 = (unsigned __int8)*v14++;
                a3 = v107;
                v108 = (unsigned __int64)(v107 & 0x7F) << v106;
                v106 += 7;
                v105 |= v108;
              }
              while ( (v107 & 0x80) != 0 );
              v9 = 1;
              result = v14;
              *(_BYTE *)(a4 + 882) = 1;
              *(_QWORD *)(a4 + 896) = v105;
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
              v109 = 0;
              v110 = 0;
              do
              {
                v111 = *v14++;
                v112 = (unsigned __int64)(v111 & 0x7F) << v110;
                v110 += 7;
                v109 |= v112;
              }
              while ( v111 < 0 );
              if ( v109 <= 0x61 )
              {
                *(_BYTE *)(a4 + v109 + 784) = 3;
                *(_QWORD *)(a4 + 8 * v109) = v14;
              }
              v113 = 0;
              LODWORD(a3) = 0;
              do
              {
                v114 = *v14++;
                v9 = (unsigned __int64)(v114 & 0x7F) << a3;
                a3 = (unsigned int)(a3 + 7);
                v113 |= v9;
              }
              while ( v114 < 0 );
              result = &v14[v113];
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
                abort(v25, v9, a3, v15);
              if ( *(_BYTE *)(a4 + 818) )
                v27 = 0;
              else
                v27 = 6;
              *(_BYTE *)(a4 + 818) = v27;
              goto LABEL_11;
            default:
              __asm { BTI             j; jumptable 000000000044F29C default case, cases 23-44 }
              abort((__int64)result, v9, a3, v15);
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
