__int64 *__fastcall sub_416880(unsigned __int8 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // x23
  unsigned int v8; // w4
  __int64 v9; // x6
  unsigned int v10; // t1
  _BYTE *v11; // x20
  unsigned int v12; // w4
  unsigned int v13; // t1
  _BYTE *v14; // x27
  __int64 v15; // x6
  _BYTE *v16; // x19
  unsigned int v17; // w4
  unsigned int v18; // t1
  _BYTE *v19; // x26
  unsigned int v20; // w4
  unsigned int v21; // t1
  _BYTE *v22; // x25
  int v23; // w4
  int v24; // t1
  int v25; // w1
  _BYTE *v26; // x2
  _BYTE *v27; // x0
  int v28; // t1
  _BYTE *v29; // x24
  int v30; // w0
  int v31; // w0
  __int64 *result; // x0
  int v33; // w19
  unsigned __int64 v34; // x2
  __int64 *v35; // x1
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
  __int64 v50; // x24
  __int64 v51; // x1
  __int64 v52; // x0
  _BYTE *v53; // x23
  _BYTE *v54; // x0
  __int64 v55; // x0
  __int64 v56; // x20
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // [xsp+0h] [xbp-10050h] BYREF
  _BYTE v60[1008]; // [xsp+10h] [xbp-10040h] BYREF
  __int64 v61; // [xsp+400h] [xbp-FC50h]
  _BYTE v62[24]; // [xsp+10000h] [xbp-50h] BYREF
  _BYTE *v63; // [xsp+10018h] [xbp-38h]
  __int64 v64; // [xsp+10020h] [xbp-30h]
  int v65; // [xsp+1002Ch] [xbp-24h]
  _QWORD v66[2]; // [xsp+10038h] [xbp-18h] BYREF
  __int64 v67; // [xsp+10048h] [xbp-8h]

  v4 = (__int64)a1;
  v8 = *a1;
  v67 = qword_48DD60;
  if ( (word_45E6A0[(unsigned __int8)v8] & 0x2000) != 0 )
  {
    do
    {
      v10 = *(unsigned __int8 *)++v4;
      v9 = v10;
      v8 = v10;
    }
    while ( (word_45E6A0[(unsigned __int8)v10] & 0x2000) != 0 );
  }
  else
  {
    v9 = v8;
  }
  if ( v8 )
  {
    v11 = (_BYTE *)v4;
    while ( (word_45E6A0[v9] & 0x2000) == 0 )
    {
      *v11 = dword_45DDA0[v9];
      v13 = (unsigned __int8)*++v11;
      v12 = v13;
      if ( !v13 )
        goto LABEL_26;
      v9 = v12;
    }
    *v11 = 0;
    v14 = v11 + 1;
    v15 = (unsigned __int8)v11[1];
    v16 = v11 + 1;
    v17 = (unsigned __int8)v11[1];
    if ( (word_45E6A0[v15] & 0x2000) != 0 )
    {
      do
      {
        v18 = (unsigned __int8)*++v16;
        v15 = v18;
        v17 = v18;
      }
      while ( (word_45E6A0[(unsigned __int8)v18] & 0x2000) != 0 );
    }
    v19 = v11 + 1;
    if ( v17 )
    {
      while ( (word_45E6A0[v15] & 0x2000) == 0 )
      {
        *v19++ = dword_45DDA0[v15];
        v21 = (unsigned __int8)*++v16;
        v20 = v21;
        if ( !v21 )
          goto LABEL_26;
        v15 = v20;
      }
      *v19 = 0;
      v22 = v19 + 1;
      do
      {
        v24 = (unsigned __int8)*++v16;
        v23 = v24;
        v25 = word_45E6A0[(unsigned __int8)v24] & 0x2000;
      }
      while ( (word_45E6A0[(unsigned __int8)v24] & 0x2000) != 0 );
      v26 = v19 + 1;
      v27 = v19 + 1;
      if ( v23 )
      {
        while ( 1 )
        {
          v29 = v26 + 1;
          v27 = v26 + 1;
          if ( v25 )
            break;
          *v26 = v23;
          v28 = (unsigned __int8)*++v16;
          LOBYTE(v23) = v28;
          if ( !v28 )
            goto LABEL_28;
          ++v26;
          v25 = word_45E6A0[(unsigned __int8)v23] & 0x2000;
        }
        *v26 = 0;
        v30 = sub_423790(v16, v66, 10);
        v65 = 1;
        if ( (_BYTE *)v66[0] != v16 )
        {
          if ( v30 <= 0 )
            v30 = v65;
          v65 = v30;
          v31 = (unsigned __int8)v19[1];
          if ( !v19[1] )
            goto LABEL_26;
LABEL_30:
          v64 = v29 - v22;
          if ( v31 == 47 )
            a3 = 0;
          v33 = 3;
          if ( v29 - v22 > 3 )
          {
            if ( *((_DWORD *)v29 - 1) == 7303982 )
              v33 = 0;
            else
              v33 = 3;
          }
          v63 = &v14[-v4];
          v34 = sub_42F640(v4);
          v35 = (__int64 *)&v62[-((v34 + 16) & 0xFFFFFFFFFFFF0000LL)];
          if ( v62 != (_BYTE *)v35 )
          {
            do
              v61 = 0;
            while ( &v59 != v35 );
          }
          v59 = 0;
          if ( (((_WORD)v34 + 16) & 0xFFF0u) >= 0x400uLL )
            v61 = 0;
          v60[v34] = 0;
          v66[0] = sub_412300((__int64)v60, v4, v34, v34 + 1);
          if ( !sub_431690(v66, &qword_496860, sub_4153B0) )
          {
            v49 = sub_40CCB0(
                    1u,
                    (unsigned __int64)&v29[v33 + 56 + a3 - v4],
                    v41,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46,
                    v47,
                    v48,
                    v36,
                    v37,
                    v38,
                    v39,
                    v40);
            v50 = v49;
            if ( v49 )
            {
              v51 = v4;
              v52 = v49 + 56;
              v53 = v63;
              *(_QWORD *)v50 = v52;
              v54 = &v53[j_ifunc_40DC90(v52, v51, v53)];
              *(_QWORD *)(v50 + 8) = v54;
              v55 = j_ifunc_40DC90(v54, v14, v19 - v11) + v19 - v11;
              *(_DWORD *)(v50 + 16) = v65;
              *(_DWORD *)(v50 + 20) = a4;
              *(_QWORD *)(v50 + 24) = v55;
              if ( a3 )
                v55 = j_ifunc_40DC90(v55, a2, a3) + a3;
              v56 = v64;
              v57 = j_ifunc_40DC90(v55, v19 + 1, v64) + v56;
              if ( v33 )
                *(_DWORD *)(v57 - 1) = 7303982;
              sub_416760(v50, 1);
            }
          }
          goto LABEL_26;
        }
      }
      else
      {
LABEL_28:
        v65 = 1;
        *v27 = 0;
        v29 = v27 + 1;
      }
      v31 = (unsigned __int8)v19[1];
      if ( !v19[1] )
        goto LABEL_26;
      goto LABEL_30;
    }
  }
LABEL_26:
  result = &qword_48DD60;
  if ( v67 != qword_48DD60 )
  {
    v58 = sub_412340();
    return (__int64 *)sub_416C00(v58);
  }
  return result;
}
