__int64 *__fastcall sub_408F00(__int64 a1)
{
  __int64 v1; // x21
  __int64 v2; // x22
  __int64 v3; // x23
  _QWORD *v4; // x24
  __int64 v5; // x25
  unsigned __int64 v6; // x26
  __int64 v7; // x27
  __int64 v8; // x28
  __int64 v9; // x19
  __int64 *v10; // x3
  __int64 v11; // x1
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
  unsigned __int64 v26; // x0
  __int64 *result; // x0
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x0
  int v32; // w0
  __int64 v33; // x0
  unsigned __int64 v34; // [xsp+8h] [xbp-18h]
  char v35; // [xsp+17h] [xbp-9h] BYREF
  __int64 v36; // [xsp+18h] [xbp-8h]
  __int64 v37; // [xsp+40h] [xbp+20h]
  __int64 v38; // [xsp+48h] [xbp+28h]
  __int64 v39; // [xsp+50h] [xbp+30h]
  _QWORD *v40; // [xsp+58h] [xbp+38h]
  __int64 v41; // [xsp+60h] [xbp+40h]
  unsigned __int64 v42; // [xsp+68h] [xbp+48h]
  __int64 v43; // [xsp+70h] [xbp+50h]
  __int64 v44; // [xsp+78h] [xbp+58h]

  v9 = a1;
  v36 = qword_48DD60;
  v10 = 0;
  v11 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v11 )
  {
    sub_407D40(a1, v11, a1 + 8, 0);
    if ( (_UNKNOWN *)v9 != &unk_490670 )
    {
LABEL_3:
      v37 = v1;
      v38 = v2;
      v39 = v3;
      v40 = v4;
      v41 = v5;
      v42 = v6;
      v43 = v7;
      v44 = v8;
      if ( qword_490600 )
      {
        v6 = 4 * qword_490600;
        v12 = -4 * qword_490600;
      }
      else
      {
        v12 = -67108864;
        v6 = 0x4000000;
      }
      v4 = (_QWORD *)(*(_QWORD *)(v9 + 96) & v12);
      v7 = *v4;
      if ( v9 != *v4 )
      {
        result = (__int64 *)sub_41F250("heap->ar_ptr == av", "malloc.c", 4794, "_int_free_maybe_consolidate");
        goto LABEL_61;
      }
      v13 = *(_QWORD **)(v7 + 96);
      v34 = qword_4905D8;
      if ( v13 == v4 + 6 )
      {
        v14 = qword_4905D8 + 32;
        v15 = (unsigned __int64)&byte_496688;
        while ( 1 )
        {
          v16 = v4;
          v4 = (_QWORD *)v4[1];
          v17 = v4[2];
          v18 = ((_BYTE)v4 + (_BYTE)v17 - 16) & 0xF;
          v10 = (__int64 *)(v17 - 16 - v18);
          v19 = (__int64)v10 + (_QWORD)v4;
          if ( *(__int64 *)((char *)v10 + (_QWORD)v4 + 8) != 1 )
            break;
          v20 = *(__int64 *)((char *)v10 + (_QWORD)v4);
          v21 = (_QWORD *)(v19 - v20);
          v8 = -v20;
          v22 = *(_QWORD *)(v19 - v20 + 8);
          v23 = (v22 & 0xFFFFFFFFFFFFFFF8LL) + v18;
          v24 = v23 + 15;
          v9 = v23 + 16;
          if ( v24 > 0x3E )
            goto LABEL_55;
          if ( (v22 & 1) == 0 )
            v9 += *(_QWORD *)(v19 + v8);
          if ( v9 <= 0 || v6 <= v9 )
            goto LABEL_56;
          if ( v6 - v17 + v9 < v14 + v16[4] )
          {
            v9 = v13[1];
            v4 = v16;
            goto LABEL_27;
          }
          *(_QWORD *)(v7 + 2184) -= v16[2];
          if ( (_QWORD *)qword_4966A8 == (_QWORD *)((char *)v16 + v6) )
            qword_4966A8 = 0;
          sub_4118C0(v16, v6);
          v13 = v21;
          if ( (v21[1] & 1) == 0 )
          {
            v13 = (_QWORD *)((char *)v21 - *(_QWORD *)(v19 + v8));
            sub_407C70(v13);
          }
          if ( (((unsigned __int64)v13 + v9) & (v4[4] - 1LL)) != 0 )
          {
            sub_41F250(
              "((unsigned long) ((char *) p + new_size) & (heap->pagesize - 1)) == 0",
              "arena.c",
              574,
              "heap_trim");
LABEL_53:
            sub_41F250("((char *) p + new_size) == ((char *) heap + heap->size)", "arena.c", 576, "heap_trim");
            break;
          }
          if ( (char *)v13 + v9 != (char *)v4 + v4[2] )
            goto LABEL_53;
          *(_QWORD *)(v7 + 96) = v13;
          v9 |= 1uLL;
          v13[1] = v9;
          if ( v13 != v4 + 6 )
            goto LABEL_27;
        }
        sub_41F250("chunksize_nomask (p) == (0 | PREV_INUSE)", "arena.c", 553, "heap_trim");
LABEL_55:
        sub_41F250("new_size > 0 && new_size < (long) (2 * MINSIZE)", "arena.c", 556, "heap_trim");
LABEL_56:
        v31 = sub_41F250("new_size > 0 && new_size < max_size", "arena.c", 559, "heap_trim");
      }
      else
      {
        v9 = v13[1];
LABEL_27:
        v9 &= 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 < (unsigned __int64)qword_4905D0 )
          goto LABEL_33;
        v26 = v9 - 33;
        if ( v9 - 33 < 0 || v34 >= v26 )
          goto LABEL_33;
        v15 = -v4[4] & (v26 - v34);
        if ( !v15 )
          goto LABEL_33;
        v19 = v4[2] - v15;
        if ( v19 <= 47 )
          goto LABEL_33;
        if ( dword_490660 >= 0 )
        {
          if ( dword_490660 )
            goto LABEL_49;
          goto LABEL_43;
        }
        LODWORD(v6) = dword_491570;
        dword_490660 = dword_491570;
        if ( dword_491570 )
          goto LABEL_49;
        v31 = sub_410EE0("/proc/sys/vm/overcommit_memory", 0x80000, v34);
        LODWORD(v8) = v31;
        if ( (v31 & 0x80000000) != 0 )
        {
          v32 = dword_490660;
          goto LABEL_48;
        }
      }
      if ( sub_410FC0(v31, &v35, 1) > 0 )
        LODWORD(v6) = v35 == 50;
      dword_490660 = v6;
      sub_410CD0((unsigned int)v8);
      v32 = dword_490660;
LABEL_48:
      if ( v32 )
      {
LABEL_49:
        if ( sub_4117E0((char *)v4 + v19, v15, 0, 50, 0xFFFFFFFFLL, 0) != -1 )
        {
          v4[3] = v19;
          goto LABEL_44;
        }
LABEL_33:
        v1 = v37;
        v2 = v38;
        v3 = v39;
        v4 = v40;
        v5 = v41;
        v6 = v42;
        v7 = v43;
        v8 = v44;
        goto LABEL_34;
      }
LABEL_43:
      sub_4117C0((char *)v4 + v19, v15, 4);
LABEL_44:
      v4[2] = v19;
      v1 = v37;
      v2 = v38;
      v3 = v39;
      v4 = v40;
      *(_QWORD *)(v7 + 2184) -= v15;
      v7 = v43;
      v8 = v44;
      v13[1] = (v9 - v15) | 1;
      v5 = v41;
      v6 = v42;
      goto LABEL_34;
    }
  }
  else if ( (_UNKNOWN *)a1 != &unk_490670 )
  {
    goto LABEL_3;
  }
  v10 = &qword_4905D0;
  if ( (*(_QWORD *)(*(_QWORD *)(v9 + 96) + 8LL) & 0xFFFFFFFFFFFFFFF8LL) >= qword_4905D0 )
  {
    result = &qword_48DD60;
    v29 = v36 - qword_48DD60;
    v30 = 0;
    if ( v36 == qword_48DD60 )
      return (__int64 *)sub_408DD4(qword_4905D8);
    goto LABEL_61;
  }
LABEL_34:
  result = &qword_48DD60;
  v29 = v36 - qword_48DD60;
  v30 = 0;
  if ( v36 != qword_48DD60 )
  {
LABEL_61:
    v37 = v1;
    v38 = v2;
    v39 = v3;
    v40 = v4;
    v41 = v5;
    v42 = v6;
    v43 = v7;
    v44 = v8;
    v33 = sub_412340(result, v30, v29, v10);
    return (__int64 *)sub_409394(v33);
  }
  return result;
}
