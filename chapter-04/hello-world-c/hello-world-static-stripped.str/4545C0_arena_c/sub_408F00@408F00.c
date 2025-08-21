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
  __int64 v12; // x1
  __int64 v13; // x0
  _QWORD *v14; // x25
  __int64 v15; // x23
  unsigned __int64 v16; // x20
  _QWORD *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x4
  __int64 v20; // x22
  __int64 v21; // x1
  _QWORD *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x19
  unsigned __int64 v25; // x4
  unsigned __int64 v27; // x0
  __int64 *result; // x0
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x0
  int v33; // w0
  __int64 v34; // x0
  unsigned __int64 v35; // [xsp+8h] [xbp-18h]
  char v36; // [xsp+17h] [xbp-9h] BYREF
  __int64 v37; // [xsp+18h] [xbp-8h]
  __int64 v38; // [xsp+40h] [xbp+20h]
  __int64 v39; // [xsp+48h] [xbp+28h]
  __int64 v40; // [xsp+50h] [xbp+30h]
  _QWORD *v41; // [xsp+58h] [xbp+38h]
  __int64 v42; // [xsp+60h] [xbp+40h]
  unsigned __int64 v43; // [xsp+68h] [xbp+48h]
  __int64 v44; // [xsp+70h] [xbp+50h]
  __int64 v45; // [xsp+78h] [xbp+58h]

  v10 = a1;
  v37 = qword_48DD60;
  v11 = 0;
  v12 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v12 )
  {
    sub_407D40(a1, v12, a1 + 8, 0);
    if ( (_UNKNOWN *)v10 != &unk_490670 )
    {
LABEL_3:
      v38 = v2;
      v39 = v3;
      v40 = v4;
      v41 = v5;
      v42 = v6;
      v43 = v7;
      v44 = v8;
      v45 = v9;
      if ( qword_490600 )
      {
        v7 = 4 * qword_490600;
        v13 = -4 * qword_490600;
      }
      else
      {
        v13 = -67108864;
        v7 = 0x4000000;
      }
      v5 = (_QWORD *)(*(_QWORD *)(v10 + 96) & v13);
      v8 = *v5;
      if ( v10 != *v5 )
      {
        sub_41F250("heap->ar_ptr == av", "malloc.c", 4794, "_int_free_maybe_consolidate", *(double *)&a2);
        goto LABEL_61;
      }
      v14 = *(_QWORD **)(v8 + 96);
      v35 = qword_4905D8;
      if ( v14 == v5 + 6 )
      {
        v15 = qword_4905D8 + 32;
        v16 = (unsigned __int64)&byte_496688;
        while ( 1 )
        {
          v17 = v5;
          v5 = (_QWORD *)v5[1];
          v18 = v5[2];
          v19 = ((_BYTE)v5 + (_BYTE)v18 - 16) & 0xF;
          v11 = (__int64 *)(v18 - 16 - v19);
          v20 = (__int64)v11 + (_QWORD)v5;
          if ( *(__int64 *)((char *)v11 + (_QWORD)v5 + 8) != 1 )
            break;
          v21 = *(__int64 *)((char *)v11 + (_QWORD)v5);
          v22 = (_QWORD *)(v20 - v21);
          v9 = -v21;
          v23 = *(_QWORD *)(v20 - v21 + 8);
          v24 = (v23 & 0xFFFFFFFFFFFFFFF8LL) + v19;
          v25 = v24 + 15;
          v10 = v24 + 16;
          if ( v25 > 0x3E )
            goto LABEL_55;
          if ( (v23 & 1) == 0 )
            v10 += *(_QWORD *)(v20 + v9);
          if ( v10 <= 0 || v7 <= v10 )
            goto LABEL_56;
          if ( v7 - v18 + v10 < v15 + v17[4] )
          {
            v10 = v14[1];
            v5 = v17;
            goto LABEL_27;
          }
          *(_QWORD *)(v8 + 2184) -= v17[2];
          if ( (_QWORD *)qword_4966A8 == (_QWORD *)((char *)v17 + v7) )
            qword_4966A8 = 0;
          sub_4118C0(v17, v7);
          v14 = v22;
          if ( (v22[1] & 1) == 0 )
          {
            v14 = (_QWORD *)((char *)v22 - *(_QWORD *)(v20 + v9));
            sub_407C70(v14);
          }
          if ( (((unsigned __int64)v14 + v10) & (v5[4] - 1LL)) != 0 )
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
          if ( (char *)v14 + v10 != (char *)v5 + v5[2] )
            goto LABEL_53;
          *(_QWORD *)(v8 + 96) = v14;
          v10 |= 1uLL;
          v14[1] = v10;
          if ( v14 != v5 + 6 )
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
        v10 = v14[1];
LABEL_27:
        v10 &= 0xFFFFFFFFFFFFFFF8LL;
        if ( v10 < (unsigned __int64)qword_4905D0 )
          goto LABEL_33;
        v27 = v10 - 33;
        if ( v10 - 33 < 0 || v35 >= v27 )
          goto LABEL_33;
        v16 = -v5[4] & (v27 - v35);
        if ( !v16 )
          goto LABEL_33;
        v20 = v5[2] - v16;
        if ( v20 <= 47 )
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
        v32 = sub_410EE0("/proc/sys/vm/overcommit_memory", 0x80000, v35);
        LODWORD(v9) = v32;
        if ( (v32 & 0x80000000) != 0 )
        {
          v33 = dword_490660;
          goto LABEL_48;
        }
      }
      if ( sub_410FC0(v32, &v36, 1) > 0 )
        LODWORD(v7) = v36 == 50;
      dword_490660 = v7;
      sub_410CD0((unsigned int)v9);
      v33 = dword_490660;
LABEL_48:
      if ( v33 )
      {
LABEL_49:
        if ( sub_4117E0((char *)v5 + v20, v16, 0, 50, 0xFFFFFFFFLL, 0) != -1 )
        {
          v5[3] = v20;
          goto LABEL_44;
        }
LABEL_33:
        v2 = v38;
        v3 = v39;
        v4 = v40;
        v5 = v41;
        v6 = v42;
        v7 = v43;
        v8 = v44;
        v9 = v45;
        goto LABEL_34;
      }
LABEL_43:
      sub_4117C0((char *)v5 + v20, v16, 4);
LABEL_44:
      v5[2] = v20;
      v2 = v38;
      v3 = v39;
      v4 = v40;
      v5 = v41;
      *(_QWORD *)(v8 + 2184) -= v16;
      v8 = v44;
      v9 = v45;
      v14[1] = (v10 - v16) | 1;
      v6 = v42;
      v7 = v43;
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
    v30 = v37 - qword_48DD60;
    v31 = 0;
    if ( v37 == qword_48DD60 )
      return (__int64 *)sub_408DD4(qword_4905D8);
    goto LABEL_61;
  }
LABEL_34:
  result = &qword_48DD60;
  v30 = v37 - qword_48DD60;
  v31 = 0;
  if ( v37 != qword_48DD60 )
  {
LABEL_61:
    v38 = v2;
    v39 = v3;
    v40 = v4;
    v41 = v5;
    v42 = v6;
    v43 = v7;
    v44 = v8;
    v45 = v9;
    v34 = sub_412340(result, v31, v30, v11);
    return (__int64 *)sub_409394(v34);
  }
  return result;
}
