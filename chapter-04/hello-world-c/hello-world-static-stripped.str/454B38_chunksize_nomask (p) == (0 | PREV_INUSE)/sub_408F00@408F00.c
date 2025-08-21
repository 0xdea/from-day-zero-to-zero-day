__int64 *__fastcall sub_408F00(__int64 a1, long double a2)
{
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x23
  _QWORD *v5; // x24
  __int64 v6; // x25
  unsigned __int64 v7; // x26
  __int64 v8; // x27
  __int64 v9; // x28
  __int64 v10; // x19
  __int64 *v11; // x3
  __int64 v12; // x0
  _QWORD *v13; // x25
  __int64 v14; // x23
  unsigned __int64 v15; // x20
  _QWORD *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x4
  __int64 v19; // x22
  __int64 v20; // x1
  _QWORD *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x19
  unsigned __int64 v24; // x4
  double v26; // d1
  double v27; // d2
  double v28; // d3
  double v29; // d4
  double v30; // d5
  double v31; // d6
  double v32; // d7
  unsigned __int64 v33; // x0
  __int64 *result; // x0
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x0
  int v39; // w0
  __int64 v40; // x0
  unsigned __int64 v41; // [xsp+8h] [xbp-18h]
  char v42; // [xsp+17h] [xbp-9h] BYREF
  __int64 v43; // [xsp+18h] [xbp-8h]
  __int64 v44; // [xsp+40h] [xbp+20h]
  __int64 v45; // [xsp+48h] [xbp+28h]
  __int64 v46; // [xsp+50h] [xbp+30h]
  _QWORD *v47; // [xsp+58h] [xbp+38h]
  __int64 v48; // [xsp+60h] [xbp+40h]
  unsigned __int64 v49; // [xsp+68h] [xbp+48h]
  __int64 v50; // [xsp+70h] [xbp+50h]
  __int64 v51; // [xsp+78h] [xbp+58h]

  v10 = a1;
  v43 = qword_48DD60;
  v11 = 0;
  if ( *(_DWORD *)(a1 + 8) )
  {
    sub_407D40(a1);
    if ( (_UNKNOWN *)v10 != &unk_490670 )
    {
LABEL_3:
      v44 = v2;
      v45 = v3;
      v46 = v4;
      v47 = v5;
      v48 = v6;
      v49 = v7;
      v50 = v8;
      v51 = v9;
      if ( qword_490600 )
      {
        v7 = 4 * qword_490600;
        v12 = -4 * qword_490600;
      }
      else
      {
        v12 = -67108864;
        v7 = 0x4000000;
      }
      v5 = (_QWORD *)(*(_QWORD *)(v10 + 96) & v12);
      v8 = *v5;
      if ( v10 != *v5 )
      {
        sub_41F250("heap->ar_ptr == av", "malloc.c", 4794, "_int_free_maybe_consolidate", *(double *)&a2);
        goto LABEL_61;
      }
      v13 = *(_QWORD **)(v8 + 96);
      v41 = qword_4905D8;
      if ( v13 == v5 + 6 )
      {
        v14 = qword_4905D8 + 32;
        v15 = (unsigned __int64)&byte_496688;
        while ( 1 )
        {
          v16 = v5;
          v5 = (_QWORD *)v5[1];
          v17 = v5[2];
          v18 = ((_BYTE)v5 + (_BYTE)v17 - 16) & 0xF;
          v11 = (__int64 *)(v17 - 16 - v18);
          v19 = (__int64)v11 + (_QWORD)v5;
          if ( *(__int64 *)((char *)v11 + (_QWORD)v5 + 8) != 1 )
            break;
          v20 = *(__int64 *)((char *)v11 + (_QWORD)v5);
          v21 = (_QWORD *)(v19 - v20);
          v9 = -v20;
          v22 = *(_QWORD *)(v19 - v20 + 8);
          v23 = (v22 & 0xFFFFFFFFFFFFFFF8LL) + v18;
          v24 = v23 + 15;
          v10 = v23 + 16;
          if ( v24 > 0x3E )
            goto LABEL_55;
          if ( (v22 & 1) == 0 )
            v10 += *(_QWORD *)(v19 + v9);
          if ( v10 <= 0 || v7 <= v10 )
            goto LABEL_56;
          if ( v7 - v17 + v10 < v14 + v16[4] )
          {
            v10 = v13[1];
            v5 = v16;
            goto LABEL_27;
          }
          *(_QWORD *)(v8 + 2184) -= v16[2];
          if ( (_QWORD *)qword_4966A8 == (_QWORD *)((char *)v16 + v7) )
            qword_4966A8 = 0;
          sub_4118C0(v16, v7);
          v13 = v21;
          if ( (v21[1] & 1) == 0 )
          {
            v13 = (_QWORD *)((char *)v21 - *(_QWORD *)(v19 + v9));
            sub_407C70(v13, *(double *)&a2, v26, v27, v28, v29, v30, v31, v32);
          }
          if ( (((unsigned __int64)v13 + v10) & (v5[4] - 1LL)) != 0 )
          {
            a2 = sub_41F250(
                   "((unsigned long) ((char *) p + new_size) & (heap->pagesize - 1)) == 0",
                   "arena.c",
                   574,
                   "heap_trim");
LABEL_53:
            a2 = sub_41F250(
                   "((char *) p + new_size) == ((char *) heap + heap->size)",
                   "arena.c",
                   576,
                   "heap_trim",
                   *(double *)&a2);
            break;
          }
          if ( (char *)v13 + v10 != (char *)v5 + v5[2] )
            goto LABEL_53;
          *(_QWORD *)(v8 + 96) = v13;
          v10 |= 1uLL;
          v13[1] = v10;
          if ( v13 != v5 + 6 )
            goto LABEL_27;
        }
        a2 = sub_41F250("chunksize_nomask (p) == (0 | PREV_INUSE)", "arena.c", 553, "heap_trim", *(double *)&a2);
LABEL_55:
        a2 = sub_41F250("new_size > 0 && new_size < (long) (2 * MINSIZE)", "arena.c", 556, "heap_trim", *(double *)&a2);
LABEL_56:
        sub_41F250("new_size > 0 && new_size < max_size", "arena.c", 559, "heap_trim", *(double *)&a2);
      }
      else
      {
        v10 = v13[1];
LABEL_27:
        v10 &= 0xFFFFFFFFFFFFFFF8LL;
        if ( v10 < (unsigned __int64)qword_4905D0 )
          goto LABEL_33;
        v33 = v10 - 33;
        if ( v10 - 33 < 0 || v41 >= v33 )
          goto LABEL_33;
        v15 = -v5[4] & (v33 - v41);
        if ( !v15 )
          goto LABEL_33;
        v19 = v5[2] - v15;
        if ( v19 <= 47 )
          goto LABEL_33;
        if ( dword_490660 >= 0 )
        {
          if ( dword_490660 )
            goto LABEL_49;
          goto LABEL_43;
        }
        LODWORD(v7) = dword_491570;
        dword_490660 = dword_491570;
        if ( dword_491570 )
          goto LABEL_49;
        v38 = sub_410EE0("/proc/sys/vm/overcommit_memory", 0x80000, v41);
        LODWORD(v9) = v38;
        if ( (v38 & 0x80000000) != 0 )
        {
          v39 = dword_490660;
          goto LABEL_48;
        }
      }
      if ( sub_410FC0(v38, &v42, 1) > 0 )
        LODWORD(v7) = v42 == 50;
      dword_490660 = v7;
      sub_410CD0((unsigned int)v9);
      v39 = dword_490660;
LABEL_48:
      if ( v39 )
      {
LABEL_49:
        if ( sub_4117E0((char *)v5 + v19, v15, 0, 50, 0xFFFFFFFFLL, 0) != -1 )
        {
          v5[3] = v19;
          goto LABEL_44;
        }
LABEL_33:
        v2 = v44;
        v3 = v45;
        v4 = v46;
        v5 = v47;
        v6 = v48;
        v7 = v49;
        v8 = v50;
        v9 = v51;
        goto LABEL_34;
      }
LABEL_43:
      sub_4117C0((char *)v5 + v19, v15, 4);
LABEL_44:
      v5[2] = v19;
      v2 = v44;
      v3 = v45;
      v4 = v46;
      v5 = v47;
      *(_QWORD *)(v8 + 2184) -= v15;
      v8 = v50;
      v9 = v51;
      v13[1] = (v10 - v15) | 1;
      v6 = v48;
      v7 = v49;
      goto LABEL_34;
    }
  }
  else if ( (_UNKNOWN *)a1 != &unk_490670 )
  {
    goto LABEL_3;
  }
  v11 = &qword_4905D0;
  if ( (*(_QWORD *)(*(_QWORD *)(v10 + 96) + 8LL) & 0xFFFFFFFFFFFFFFF8LL) >= qword_4905D0 )
  {
    result = &qword_48DD60;
    v36 = v43 - qword_48DD60;
    v37 = 0;
    if ( v43 == qword_48DD60 )
      return (__int64 *)sub_408DD4(qword_4905D8);
    goto LABEL_61;
  }
LABEL_34:
  result = &qword_48DD60;
  v36 = v43 - qword_48DD60;
  v37 = 0;
  if ( v43 != qword_48DD60 )
  {
LABEL_61:
    v44 = v2;
    v45 = v3;
    v46 = v4;
    v47 = v5;
    v48 = v6;
    v49 = v7;
    v50 = v8;
    v51 = v9;
    v40 = sub_412340(result, v37, v36, v11);
    return (__int64 *)sub_409394(v40);
  }
  return result;
}
