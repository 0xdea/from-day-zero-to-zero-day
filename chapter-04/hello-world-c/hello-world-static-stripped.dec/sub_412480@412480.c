__int64 __fastcall sub_412480(void **a1, unsigned __int8 a2)
{
  _QWORD *v2; // x26
  __int64 v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  double v7; // d0
  double v8; // d1
  double v9; // d2
  double v10; // d3
  double v11; // d4
  double v12; // d5
  double v13; // d6
  double v14; // d7
  unsigned __int64 v15; // x21
  unsigned __int64 v16; // x0
  unsigned __int64 v17; // x28
  __int64 *v18; // x23
  unsigned __int64 v19; // x5
  unsigned __int64 v20; // x27
  __int64 *v21; // x20
  unsigned __int64 v22; // x24
  char *v23; // x0
  bool v24; // zf
  __int64 v25; // x0
  _QWORD *v26; // x19
  __int64 v27; // x2
  __int64 v28; // x0
  _OWORD *v29; // x6
  __int64 result; // x0
  __int64 v31; // x2
  void *v32; // x1
  unsigned __int64 v33; // x0
  _QWORD *v34; // x26
  __int64 v35; // x23
  __int64 v36; // x0
  __int64 *v37; // x1
  int v39; // [xsp+74h] [xbp+74h]
  unsigned __int64 v40; // [xsp+78h] [xbp+78h]

  v39 = a2;
  v2 = *a1;
  sub_42D0B0(&unk_490F30);
  v15 = *(v2 - 2);
  v16 = qword_4921A0;
  if ( v15 < qword_4921A0 )
  {
    v18 = &qword_491990;
    v31 = qword_4921A0 + 16;
    v26 = (_QWORD *)(qword_4921A0 + 14);
    v32 = &unk_4919A0;
    v33 = 16 * (qword_4921A0 + 16);
    if ( v2 == (_QWORD *)&unk_4919A0 )
      goto LABEL_29;
    v34 = (_QWORD *)sub_40C434(
                      (unsigned __int64)(v2 - 2),
                      v33,
                      v7,
                      v8,
                      v9,
                      v10,
                      v11,
                      v12,
                      v13,
                      v14,
                      v31,
                      v3,
                      v4,
                      v5,
                      v6);
    if ( !v34 )
      goto LABEL_33;
    v35 = 2 * (v15 + 2);
LABEL_27:
    *v34 = v26;
    ifunc_40DE70(&v34[v35], 0, 16 * ((_QWORD)v26 - v15));
    v2 = v34 + 2;
    v16 = qword_4921A0;
    *a1 = v2;
  }
  v17 = 0;
  v40 = 0;
  v18 = (__int64 *)qword_4921A8;
  do
  {
    v19 = *v18;
    v20 = v40 == 0;
    if ( v20 < *v18 )
    {
      v15 = v40 + v20;
      v21 = &v18[2 * v20 + 2];
      do
      {
        while ( 1 )
        {
          if ( v16 < v15 )
            goto LABEL_23;
          v26 = (_QWORD *)v21[1];
          if ( v26 )
            break;
LABEL_12:
          ++v20;
          ++v15;
          v21 += 2;
          if ( v20 >= v19 )
            goto LABEL_20;
        }
        if ( *v21 > (unsigned __int64)qword_4921D0 )
        {
          v33 = sub_41F250(
                  "listp->slotinfo[cnt].gen <= GL(dl_tls_generation)",
                  "dl-tls.c",
                  570,
                  "_dl_allocate_tls_init");
LABEL_29:
          v36 = sub_40B890(v33, v7, v8, v9, v10, v11, v12, v13, v14, (__int64)v32, v31, v3, v4, v5, v6);
          v34 = (_QWORD *)v36;
          if ( !v36 )
            goto LABEL_33;
          v37 = v18;
          v35 = 2 * (v15 + 2);
          j_ifunc_40DC90(v36, v37, v35 * 8);
          goto LABEL_27;
        }
        v27 = v26[147];
        if ( v17 < *v21 )
          v17 = *v21;
        v28 = v26[146];
        v29 = &v2[2 * v27];
        *v29 = xmmword_45A900;
        if ( (unsigned __int64)(v28 + 1) > 1 )
        {
          if ( v27 != v15 )
            goto LABEL_32;
          v22 = v26[142];
          if ( v26[143] < v22 )
          {
            sub_41F250(
              "map->l_tls_blocksize >= map->l_tls_initimage_size",
              "dl-tls.c",
              581,
              "_dl_allocate_tls_init",
              NAN);
LABEL_32:
            sub_41F250("map->l_tls_modid == total + cnt", "dl-tls.c", 580, "_dl_allocate_tls_init");
LABEL_33:
            sub_4385C0("cannot allocate memory for thread-local data: ABORT\n");
          }
          v24 = v26[6] == 0;
          v23 = (char *)a1 + v28;
          *(_QWORD *)v29 = v23;
          v24 = !v24 && v39 == 0;
          if ( !v24 )
          {
            v25 = j_ifunc_40DC90(v23, v26[141], v22);
            ifunc_40DE70(v25 + v22, 0, v26[143] - v26[142]);
            v16 = qword_4921A0;
            v19 = *v18;
            goto LABEL_12;
          }
        }
        ++v20;
        ++v15;
        v16 = qword_4921A0;
        v21 += 2;
      }
      while ( v20 < v19 );
    }
LABEL_20:
    v40 += v20;
    if ( v40 > v16 )
      goto LABEL_23;
    v18 = (__int64 *)v18[1];
  }
  while ( v18 );
  sub_41F250("listp != NULL", "dl-tls.c", 613, "_dl_allocate_tls_init");
LABEL_23:
  result = sub_42DA40(&unk_490F30);
  *v2 = v17;
  return result;
}
