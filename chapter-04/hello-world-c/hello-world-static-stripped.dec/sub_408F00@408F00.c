__int64 *__fastcall sub_408F00(int *a1)
{
  __int64 v1; // x28
  __int64 v2; // x19
  unsigned __int64 v3; // x26
  __int64 v4; // x0
  _QWORD *v5; // x24
  __int64 v6; // x27
  _QWORD *v7; // x25
  __int64 v8; // x23
  unsigned __int64 v9; // x20
  _QWORD *v10; // x0
  __int64 v11; // x2
  __int64 v12; // x4
  __int64 v13; // x3
  __int64 v14; // x22
  __int64 v15; // x1
  _QWORD *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x19
  unsigned __int64 v19; // x4
  double v21; // d0
  double v22; // d1
  double v23; // d2
  double v24; // d3
  double v25; // d4
  double v26; // d5
  double v27; // d6
  double v28; // d7
  unsigned __int64 v29; // x0
  __int64 v32; // x0
  int v33; // w0
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x0
  unsigned __int64 v39; // [xsp+8h] [xbp-18h]
  char v40; // [xsp+17h] [xbp-9h]

  v2 = (__int64)a1;
  if ( a1[2] )
  {
    sub_407D40((__int64)a1);
    if ( (int *)v2 != &dword_490670 )
      goto LABEL_3;
LABEL_35:
    if ( (*(_QWORD *)(*(_QWORD *)(v2 + 96) + 8LL) & 0xFFFFFFFFFFFFFFF8LL) < qword_4905D0 )
      return &qword_48DD60;
    return (__int64 *)sub_408DD4(qword_4905D8);
  }
  if ( a1 == &dword_490670 )
    goto LABEL_35;
LABEL_3:
  if ( qword_490600 )
  {
    v3 = 4 * qword_490600;
    v4 = -4 * qword_490600;
  }
  else
  {
    v4 = -67108864;
    v3 = 0x4000000;
  }
  v5 = (_QWORD *)(*(_QWORD *)(v2 + 96) & v4);
  v6 = *v5;
  if ( v2 == *v5 )
  {
    v7 = *(_QWORD **)(v6 + 96);
    v39 = qword_4905D8;
    if ( v7 == v5 + 6 )
    {
      v8 = qword_4905D8 + 32;
      v9 = (unsigned __int64)&byte_496688;
      while ( 1 )
      {
        v10 = v5;
        v5 = (_QWORD *)v5[1];
        v11 = v5[2];
        v12 = ((_BYTE)v5 + (_BYTE)v11 - 16) & 0xF;
        v13 = v11 - 16 - v12;
        v14 = (__int64)v5 + v13;
        if ( *(_QWORD *)((char *)v5 + v13 + 8) != 1 )
          break;
        v15 = *(_QWORD *)((char *)v5 + v13);
        v16 = (_QWORD *)(v14 - v15);
        v1 = -v15;
        v17 = *(_QWORD *)(v14 - v15 + 8);
        v18 = (v17 & 0xFFFFFFFFFFFFFFF8LL) + v12;
        v19 = v18 + 15;
        v2 = v18 + 16;
        if ( v19 > 0x3E )
          goto LABEL_52;
        if ( (v17 & 1) == 0 )
          v2 += *(_QWORD *)(v14 + v1);
        if ( v2 <= 0 || v3 <= v2 )
          goto LABEL_53;
        if ( v3 - v11 + v2 < v8 + v10[4] )
        {
          v2 = v7[1];
          v5 = v10;
          goto LABEL_27;
        }
        *(_QWORD *)(v6 + 2184) -= v10[2];
        if ( (_QWORD *)qword_4966A8 == (_QWORD *)((char *)v10 + v3) )
          qword_4966A8 = 0;
        sub_4118C0(v10, v3);
        v7 = v16;
        if ( (v16[1] & 1) == 0 )
        {
          v7 = (_QWORD *)((char *)v16 - *(_QWORD *)(v14 + v1));
          sub_407C70(v7, v21, v22, v23, v24, v25, v26, v27, v28);
        }
        if ( (((unsigned __int64)v7 + v2) & (v5[4] - 1LL)) != 0 )
        {
          sub_41F250(
            "((unsigned long) ((char *) p + new_size) & (heap->pagesize - 1)) == 0",
            "arena.c",
            574,
            "heap_trim");
LABEL_50:
          sub_41F250("((char *) p + new_size) == ((char *) heap + heap->size)", "arena.c", 576, "heap_trim");
          break;
        }
        if ( (char *)v7 + v2 != (char *)v5 + v5[2] )
          goto LABEL_50;
        *(_QWORD *)(v6 + 96) = v7;
        v2 |= 1uLL;
        v7[1] = v2;
        if ( v7 != v5 + 6 )
          goto LABEL_27;
      }
      sub_41F250("chunksize_nomask (p) == (0 | PREV_INUSE)", "arena.c", 553, "heap_trim");
LABEL_52:
      sub_41F250("new_size > 0 && new_size < (long) (2 * MINSIZE)", "arena.c", 556, "heap_trim");
LABEL_53:
      v32 = sub_41F250("new_size > 0 && new_size < max_size", "arena.c", 559, "heap_trim");
      goto LABEL_54;
    }
    v2 = v7[1];
LABEL_27:
    v2 &= 0xFFFFFFFFFFFFFFF8LL;
    if ( v2 < (unsigned __int64)qword_4905D0 )
      return &qword_48DD60;
    v29 = v2 - 33;
    if ( v2 - 33 < 0 || v39 >= v29 )
      return &qword_48DD60;
    v9 = -v5[4] & (v29 - v39);
    if ( !v9 )
      return &qword_48DD60;
    v14 = v5[2] - v9;
    if ( v14 <= 47 )
      return &qword_48DD60;
    if ( dword_490660 < 0 )
    {
      LODWORD(v3) = dword_491570;
      dword_490660 = dword_491570;
      if ( !dword_491570 )
      {
        v32 = sub_410EE0("/proc/sys/vm/overcommit_memory", 0x80000, v39);
        LODWORD(v1) = v32;
        if ( (v32 & 0x80000000) != 0 )
        {
          v33 = dword_490660;
          goto LABEL_45;
        }
LABEL_54:
        if ( sub_410FC0(v32) > 0 )
          LODWORD(v3) = v40 == 50;
        dword_490660 = v3;
        sub_410CD0((unsigned int)v1);
        v33 = dword_490660;
LABEL_45:
        if ( v33 )
          goto LABEL_46;
LABEL_40:
        sub_4117C0((char *)v5 + v14, v9, 4);
LABEL_41:
        v5[2] = v14;
        *(_QWORD *)(v6 + 2184) -= v9;
        v7[1] = (v2 - v9) | 1;
        return &qword_48DD60;
      }
    }
    else if ( !dword_490660 )
    {
      goto LABEL_40;
    }
LABEL_46:
    if ( sub_4117E0((char *)v5 + v14, v9, 0, 50, 0xFFFFFFFFLL, 0) == -1 )
      return &qword_48DD60;
    v5[3] = v14;
    goto LABEL_41;
  }
  v34 = sub_41F250("heap->ar_ptr == av", "malloc.c", 4794, "_int_free_maybe_consolidate");
  v38 = sub_412340(v34, v35, v36, v37);
  return (__int64 *)sub_409394(v38);
}
