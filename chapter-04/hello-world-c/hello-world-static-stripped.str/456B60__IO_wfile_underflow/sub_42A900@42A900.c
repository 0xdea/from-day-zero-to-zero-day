__int64 __fastcall sub_42A900(int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x22
  _BYTE *v6; // x24
  __int64 v7; // x25
  __int64 v8; // x26
  __int64 v9; // x27
  __int64 v10; // x28
  __int64 v11; // x30
  __int64 v13; // x23
  __int64 v14; // x21
  _BYTE *v15; // x5
  _BYTE *i; // x28
  int v17; // w22
  bool v18; // zf
  __int64 result; // x0
  _QWORD *v20; // x1
  int v21; // w4
  __int64 v22; // x2
  _BYTE *v23; // x1
  __int64 v24; // x19
  int v25; // w1
  unsigned int **v26; // x1
  _BYTE *v27; // x2
  unsigned __int64 v28; // x3
  __int64 v29; // x24
  __int64 v30; // x0
  __int64 v31; // x1
  int *v32; // x21
  int v33; // w0
  unsigned __int64 v34; // x23
  __int64 v35; // x20
  unsigned __int64 v36; // x23
  int v37; // w1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  void *v42; // x4
  void *v43; // x5
  void *v44; // x6
  int *v45; // x1
  int v46; // w0
  int v47; // w0
  _QWORD *v48; // x0
  unsigned __int64 v49; // x21
  __int64 v50; // x1
  __int64 v51; // x20
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  int v55; // w0
  _BYTE *v56; // x3
  unsigned __int64 v57; // x1
  unsigned int **v58; // x2
  unsigned int *v59; // x5
  unsigned int *v60; // x4
  unsigned __int64 v61; // x20
  unsigned __int64 v62; // x27
  int v63; // w1
  __int64 v64; // x20
  __int64 v65; // x28
  _BYTE *v66; // x27
  _BYTE *v67; // x0
  __int64 v68; // x27
  unsigned __int64 v69; // x0
  __int64 v70; // x20
  unsigned __int64 v71; // x2
  int v72; // w0
  unsigned int *v73; // x5
  unsigned int *v74; // x0
  int v75; // w0
  unsigned int **v76; // x3
  unsigned int *v77; // x2
  unsigned __int64 v78; // x3
  __int64 v79; // x4
  __int64 v80; // x0
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x0
  unsigned __int64 StatusReg; // x2
  unsigned __int64 v88; // x3
  int v89; // w1
  _BYTE *v90; // [xsp+0h] [xbp-B0h]
  _BYTE v91[16]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v92; // [xsp+18h] [xbp-98h]
  __int64 *v93; // [xsp+20h] [xbp-90h]
  __int64 v94; // [xsp+28h] [xbp-88h]
  int *v95; // [xsp+30h] [xbp-80h]
  __int64 v96; // [xsp+38h] [xbp-78h]
  __int64 v97; // [xsp+40h] [xbp-70h]
  __int64 v98; // [xsp+48h] [xbp-68h]
  __int64 v99; // [xsp+50h] [xbp-60h]
  _BYTE *v100; // [xsp+58h] [xbp-58h]
  __int64 v101; // [xsp+60h] [xbp-50h]
  __int64 v102; // [xsp+68h] [xbp-48h]
  __int64 v103; // [xsp+70h] [xbp-40h]
  __int64 v104; // [xsp+78h] [xbp-38h]
  __int64 v105; // [xsp+88h] [xbp-28h]
  _BYTE *v106; // [xsp+90h] [xbp-20h]
  _BYTE v107[16]; // [xsp+98h] [xbp-18h] BYREF
  __int64 v108; // [xsp+A8h] [xbp-8h]
  __int64 v109; // [xsp+B0h] [xbp+0h] BYREF
  __int64 v110; // [xsp+D0h] [xbp+20h]
  __int64 v111; // [xsp+D8h] [xbp+28h]
  __int64 v112; // [xsp+F0h] [xbp+40h]
  __int64 v113; // [xsp+F8h] [xbp+48h]
  __int64 v114; // [xsp+100h] [xbp+50h]
  __int64 v115; // [xsp+108h] [xbp+58h]

  v108 = qword_48DD60;
  v13 = *((_QWORD *)a1 + 19);
  if ( a3 )
  {
    v3 = a2;
    v14 = a3;
    v15 = (_BYTE *)*((_QWORD *)a1 + 5);
    if ( *((_BYTE **)a1 + 6) != v15 || (v23 = (_BYTE *)*((_QWORD *)a1 + 4), v15 == v23) )
    {
      v112 = v7;
      v113 = v8;
      v114 = v9;
      v115 = v10;
    }
    else
    {
      if ( (unsigned int)sub_402270(a1, v23, v15 - v23) == -1 )
      {
LABEL_31:
        result = 0xFFFFFFFFLL;
        v4 = v110;
        v5 = v111;
        goto LABEL_21;
      }
      v15 = (_BYTE *)*((_QWORD *)a1 + 5);
      v112 = v7;
      v113 = v8;
      v114 = v9;
      v115 = v10;
    }
    v6 = v107;
    if ( *((_QWORD *)a1 + 8) - (_QWORD)v15 <= 0xFu )
      goto LABEL_15;
LABEL_5:
    for ( i = (_BYTE *)*((_QWORD *)a1 + 4); ; i = v107 )
    {
      v106 = v15;
      v17 = sub_42C220(v13);
      if ( (unsigned int)sub_402270(a1, i, v106 - i) == -1 )
      {
        v7 = v112;
        v8 = v113;
        v9 = v114;
        v10 = v115;
        goto LABEL_31;
      }
      v14 -= (v105 - v3) >> 2;
      if ( v17 )
      {
        v18 = v105 != v3 && v17 == 1;
        if ( !v18 )
          break;
      }
      if ( !v14 )
      {
        v4 = v110;
        v5 = v111;
        v7 = v112;
        v8 = v113;
        v9 = v114;
        v10 = v115;
        goto LABEL_17;
      }
      v15 = (_BYTE *)*((_QWORD *)a1 + 5);
      v3 = v105;
      if ( *((_QWORD *)a1 + 8) - (_QWORD)v15 > 0xFu )
        goto LABEL_5;
LABEL_15:
      v15 = v107;
    }
    v18 = v14 == 0;
    v4 = v110;
    v5 = v111;
    if ( v18 )
      result = 0;
    else
      result = 0xFFFFFFFFLL;
    v7 = v112;
    v8 = v113;
    v9 = v114;
    v10 = v115;
  }
  else
  {
LABEL_17:
    result = 0;
  }
  v20 = (_QWORD *)*((_QWORD *)a1 + 20);
  v21 = *a1;
  v22 = v20[6];
  *v20 = v22;
  v20[1] = v22;
  v20[2] = v22;
  v20[3] = v22;
  v20[4] = v22;
  if ( (v21 & 0x202) == 0 )
    v22 = v20[7];
  v20[5] = v22;
LABEL_21:
  if ( v108 == qword_48DD60 )
    return result;
  v110 = v4;
  v111 = v5;
  v112 = v7;
  v113 = v8;
  v114 = v9;
  v115 = v10;
  v93 = &v109;
  v94 = v11;
  v95 = a1;
  v96 = v3;
  v24 = sub_412340();
  v25 = *(_DWORD *)v24;
  v92 = qword_48DD60;
  if ( (v25 & 0x10) != 0 )
    goto LABEL_74;
  if ( (v25 & 4) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *(_DWORD *)v24 = v25 | 0x20;
    *(_DWORD *)(StatusReg + 40) = 9;
    result = 0xFFFFFFFFLL;
    goto LABEL_52;
  }
  v26 = *(unsigned int ***)(v24 + 160);
  if ( *v26 < v26[1] )
  {
    result = **v26;
    goto LABEL_52;
  }
  v27 = *(_BYTE **)(v24 + 8);
  v28 = *(_QWORD *)(v24 + 16);
  v99 = v13;
  v100 = v6;
  v29 = *(_QWORD *)(v24 + 152);
  if ( (unsigned __int64)v27 < v28 )
  {
    v73 = v26[6];
    v74 = v26[11];
    v90 = v27;
    *v26 = v73;
    v26[2] = v73;
    v26[12] = v74;
    v75 = sub_42C310(v29);
    v76 = *(unsigned int ***)(v24 + 160);
    v77 = *v76;
    v78 = (unsigned __int64)v76[1];
    v79 = *(_QWORD *)(v24 + 8);
    *(_QWORD *)(v24 + 8) = v90;
    *(_QWORD *)(v24 + 24) = v79;
    if ( (unsigned __int64)v77 < v78 )
    {
      v13 = v99;
      v6 = v100;
      result = *v77;
      goto LABEL_52;
    }
    if ( v75 == 2 )
    {
      v88 = _ReadStatusReg(TPIDR_EL0);
      v13 = v99;
      v6 = v100;
      v89 = *(_DWORD *)v24 | 0x20;
      *(_DWORD *)(v88 + 40) = 84;
      result = 0xFFFFFFFFLL;
      *(_DWORD *)v24 = v89;
      goto LABEL_52;
    }
    v80 = *(_QWORD *)(v24 + 56);
    v97 = v4;
    v98 = v5;
    v81 = *(_QWORD *)(v24 + 16);
    v101 = v7;
    v102 = v8;
    v103 = v9;
    v104 = v10;
    j_ifunc_40DD80(v80, v90, v81 - (_QWORD)v90);
    v83 = *(_QWORD *)(v24 + 8);
    v82 = *(_QWORD *)(v24 + 16);
    v30 = *(_QWORD *)(v24 + 56);
    *(_QWORD *)(v24 + 24) = v30;
    *(_QWORD *)(v24 + 8) = v30;
    *(_QWORD *)(v24 + 16) = v30 + v82 - v83;
    if ( v30 )
    {
LABEL_37:
      v31 = *(_QWORD *)(v24 + 160);
      *(_QWORD *)(v24 + 32) = v30;
      *(_QWORD *)(v24 + 40) = v30;
      *(_QWORD *)(v24 + 48) = v30;
      if ( *(_QWORD *)(v31 + 48) )
        goto LABEL_38;
      goto LABEL_100;
    }
  }
  else
  {
    v30 = *(_QWORD *)(v24 + 56);
    v97 = v4;
    v98 = v5;
    v101 = v7;
    v102 = v8;
    v103 = v9;
    v104 = v10;
    *(_QWORD *)(v24 + 8) = v30;
    *(_QWORD *)(v24 + 16) = v30;
    *(_QWORD *)(v24 + 24) = v30;
    if ( v30 )
      goto LABEL_37;
  }
  v84 = *(_QWORD *)(v24 + 72);
  if ( v84 )
  {
    sub_40C1A0(v84);
    *(_DWORD *)v24 &= ~0x100u;
  }
  sub_404C44(v24);
  v31 = *(_QWORD *)(v24 + 160);
  v85 = *(_QWORD *)(v24 + 56);
  *(_QWORD *)(v24 + 8) = v85;
  *(_QWORD *)(v24 + 16) = v85;
  *(_QWORD *)(v24 + 24) = v85;
  *(_QWORD *)(v24 + 32) = v85;
  *(_QWORD *)(v24 + 40) = v85;
  *(_QWORD *)(v24 + 48) = v85;
  if ( !*(_QWORD *)(v31 + 48) )
  {
LABEL_100:
    v86 = *(_QWORD *)(v31 + 64);
    if ( v86 )
    {
      sub_40C1A0(v86);
      *(_DWORD *)v24 &= ~0x100u;
    }
    sub_429E80(v24);
  }
LABEL_38:
  if ( (*(_DWORD *)v24 & 0x202) == 0 )
    goto LABEL_55;
  v32 = off_4905B8;
  v33 = *off_4905B8;
  if ( (*off_4905B8 & 0x8000) != 0 )
  {
    if ( (*off_4905B8 & 0x288) != 0x280 )
      goto LABEL_55;
LABEL_89:
    v45 = v32;
LABEL_90:
    v70 = *((_QWORD *)v45 + 27);
    if ( (unsigned __int64)(v70 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50();
    (*(void (__fastcall **)(int *, __int64))(v70 + 0x18))(off_4905B8, 0xFFFFFFFFLL);
    goto LABEL_46;
  }
  v34 = _ReadStatusReg(TPIDR_EL0);
  v35 = *((_QWORD *)v32 + 17);
  v36 = v34 - 1856;
  v37 = (unsigned __int8)byte_490F08;
  v38 = *(_QWORD *)(v35 + 8);
  if ( byte_490F08 && !v38 )
  {
    *(_DWORD *)v35 = 1;
    *(_QWORD *)(v35 + 8) = v36;
    if ( (v33 & 0x288) != 0x280 )
    {
      v47 = *(_DWORD *)(v35 + 4);
      goto LABEL_107;
    }
    goto LABEL_89;
  }
  if ( v36 == v38 )
  {
    ++*(_DWORD *)(v35 + 4);
    if ( (v33 & 0x288) != 0x280 )
    {
LABEL_48:
      v47 = *(_DWORD *)(v35 + 4);
      if ( !v37 )
      {
        if ( !v47 )
        {
          *(_QWORD *)(v35 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v35) > 1 )
            sub_407040(v35);
          goto LABEL_55;
        }
LABEL_50:
        *(_DWORD *)(v35 + 4) = v47 - 1;
        goto LABEL_55;
      }
LABEL_107:
      if ( !v47 )
      {
        *(_DWORD *)v35 = 0;
        *(_QWORD *)(v35 + 8) = 0;
        goto LABEL_55;
      }
      goto LABEL_50;
    }
    goto LABEL_89;
  }
  if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v32 + 17)) )
    sub_406F40((_DWORD *)v35, v39, v40, v41, v42, v43, v44);
  v45 = off_4905B8;
  v46 = *off_4905B8 & 0x288;
  *(_QWORD *)(*((_QWORD *)v32 + 17) + 8LL) = v36;
  if ( v46 == 640 )
    goto LABEL_90;
LABEL_46:
  if ( (*v32 & 0x8000) == 0 )
  {
    v35 = *((_QWORD *)v32 + 17);
    v37 = (unsigned __int8)byte_490F08;
    goto LABEL_48;
  }
LABEL_55:
  sub_4047E0(v24);
  v48 = *(_QWORD **)(v24 + 160);
  v49 = 0;
  v50 = v48[6];
  *v48 = v50;
  v48[1] = v50;
  v48[2] = v50;
  v48[3] = v50;
  v48[4] = v50;
  v48[5] = v50;
LABEL_56:
  v51 = *(_QWORD *)(v24 + 216);
  if ( (unsigned __int64)(v51 - (_QWORD)&unk_48DD70) > 0x92F )
  {
    while ( 1 )
    {
      sub_401A50();
      v52 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v51 + 112))(
              v24,
              *(_QWORD *)(v24 + 16),
              *(_QWORD *)(v24 + 64) - *(_QWORD *)(v24 + 16));
      if ( v52 <= 0 )
        goto LABEL_72;
LABEL_58:
      v53 = *(_QWORD *)(v24 + 144);
      *(_QWORD *)(v24 + 16) += v52;
      if ( v53 != -1 )
        *(_QWORD *)(v24 + 144) = v53 + v52;
      v54 = *(_QWORD *)(v24 + 8);
      *(_QWORD *)(*(_QWORD *)(v24 + 160) + 96LL) = *(_QWORD *)(*(_QWORD *)(v24 + 160) + 88LL);
      *(_QWORD *)(v24 + 24) = v54;
      if ( !v49 )
        break;
      v65 = 16 - v49;
      v66 = &v91[v49];
      if ( 16 - v49 > v52 )
        v65 = v52;
      v67 = &v91[v49];
      v49 += v65;
      j_ifunc_40DC90(v67, v54, v65);
      v55 = sub_42C310(v29);
      if ( !v49 )
        goto LABEL_62;
      v56 = v90;
      v68 = v90 - v66;
      if ( v68 < 0 )
        v68 = 0;
      v57 = *(_QWORD *)(v24 + 8) + v68;
LABEL_63:
      v58 = *(unsigned int ***)(v24 + 160);
      v59 = v58[1];
      v60 = v58[6];
      *(_QWORD *)(v24 + 8) = v57;
      if ( v59 != v60 )
      {
        v4 = v97;
        v5 = v98;
        v13 = v99;
        v6 = v100;
        v7 = v101;
        v8 = v102;
        v9 = v103;
        v10 = v104;
        result = **v58;
        goto LABEL_52;
      }
      if ( v55 == 2 )
        goto LABEL_93;
      if ( v55 != 1 )
      {
        if ( v92 == qword_48DD60 )
          sub_41F250("status == __codecvt_partial", (__int64)"wfileops.c", 0x120u, (__int64)"_IO_wfile_underflow");
        goto LABEL_116;
      }
      if ( v49 )
      {
        if ( v56 != v91 )
        {
          v49 -= v56 - v91;
          sub_431EF0(v91, v56, v49, 16);
        }
        if ( v49 == 16 )
          goto LABEL_93;
        v64 = *(_QWORD *)(v24 + 24);
        *(_QWORD *)(v24 + 8) = v64;
        *(_QWORD *)(v24 + 16) = v64;
      }
      else
      {
        v61 = *(_QWORD *)(v24 + 24);
        v62 = *(_QWORD *)(v24 + 16) - v57;
        if ( v61 < v57 )
        {
          j_ifunc_40DD80(*(_QWORD *)(v24 + 24), v57, *(_QWORD *)(v24 + 16) - v57);
          v69 = *(_QWORD *)(v24 + 16) - v62;
          *(_QWORD *)(v24 + 8) = *(_QWORD *)(v24 + 24);
          *(_QWORD *)(v24 + 16) = v69;
          goto LABEL_56;
        }
        if ( v62 > 0xF )
        {
LABEL_93:
          v71 = _ReadStatusReg(TPIDR_EL0);
          v4 = v97;
          v5 = v98;
          v72 = *(_DWORD *)v24 | 0x20;
          v13 = v99;
          v6 = v100;
          v7 = v101;
          v8 = v102;
          v9 = v103;
          v10 = v104;
          *(_DWORD *)(v71 + 40) = 84;
          *(_DWORD *)v24 = v72;
          result = 0xFFFFFFFFLL;
          goto LABEL_52;
        }
        v49 = *(_QWORD *)(v24 + 16) - v57;
        j_ifunc_40DC90(v91, v57, v49);
        *(_QWORD *)(v24 + 8) = v61;
        *(_QWORD *)(v24 + 16) = v61;
      }
      v51 = *(_QWORD *)(v24 + 216);
      if ( (unsigned __int64)(v51 - (_QWORD)&unk_48DD70) <= 0x92F )
        goto LABEL_57;
    }
    v55 = sub_42C310(v29);
LABEL_62:
    v56 = v90;
    v49 = 0;
    v57 = (unsigned __int64)v90;
    goto LABEL_63;
  }
LABEL_57:
  v52 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v51 + 112))(
          v24,
          *(_QWORD *)(v24 + 16),
          *(_QWORD *)(v24 + 64) - *(_QWORD *)(v24 + 16));
  if ( v52 > 0 )
    goto LABEL_58;
LABEL_72:
  v63 = *(_DWORD *)v24;
  if ( !(v49 | v52) )
  {
    v4 = v97;
    v5 = v98;
    v13 = v99;
    v6 = v100;
    v7 = v101;
    v8 = v102;
    v9 = v103;
    v10 = v104;
    *(_DWORD *)v24 = v63 | 0x10;
    *(_QWORD *)(v24 + 144) = -1;
LABEL_74:
    result = 0xFFFFFFFFLL;
    goto LABEL_52;
  }
  *(_DWORD *)v24 = v63 | 0x20;
  if ( !v49 )
    goto LABEL_117;
  v4 = v97;
  v5 = v98;
  v13 = v99;
  v6 = v100;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 84;
  v7 = v101;
  v8 = v102;
  result = 0xFFFFFFFFLL;
  v9 = v103;
  v10 = v104;
LABEL_52:
  while ( v92 != qword_48DD60 )
  {
    v97 = v4;
    v98 = v5;
    v99 = v13;
    v100 = v6;
    v101 = v7;
    v102 = v8;
    v103 = v9;
    v104 = v10;
LABEL_116:
    sub_412340();
LABEL_117:
    v4 = v97;
    v5 = v98;
    result = 0xFFFFFFFFLL;
    v13 = v99;
    v6 = v100;
    v7 = v101;
    v8 = v102;
    v9 = v103;
    v10 = v104;
  }
  return result;
}
