__int64 __fastcall sub_412480(void **a1, unsigned __int8 a2)
{
  _QWORD *v2; // x26
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  long double v6; // q0
  long double v7; // q1
  long double v8; // q2
  long double v9; // q3
  long double v10; // q4
  long double v11; // q5
  long double v12; // q6
  long double v13; // q7
  unsigned __int64 v14; // x21
  unsigned __int64 v15; // x0
  unsigned __int64 v16; // x28
  __int64 *v17; // x23
  unsigned __int64 v18; // x5
  unsigned __int64 v19; // x27
  __int64 *v20; // x20
  unsigned __int64 v21; // x24
  char *v22; // x0
  bool v23; // zf
  __int64 v24; // x0
  _QWORD *v25; // x19
  __int64 v26; // x2
  __int64 v27; // x0
  _OWORD *v28; // x6
  __int64 result; // x0
  __int16 *v30; // x2
  void *v31; // x1
  unsigned __int64 v32; // x0
  char *v33; // x26
  long double v34; // q0
  __int64 v35; // x23
  __int64 v36; // x0
  __int64 *v37; // x1
  int v39; // [xsp+74h] [xbp+74h]
  unsigned __int64 v40; // [xsp+78h] [xbp+78h]

  v39 = a2;
  v2 = *a1;
  sub_42D0B0((atomic_uint *)&unk_490F30);
  v14 = *(v2 - 2);
  v15 = qword_4921A0;
  if ( v14 < qword_4921A0 )
  {
    v17 = &qword_491990;
    v30 = (__int16 *)(qword_4921A0 + 16);
    v25 = (_QWORD *)(qword_4921A0 + 14);
    v31 = &unk_4919A0;
    v32 = 16 * (qword_4921A0 + 16);
    if ( v2 == (_QWORD *)&unk_4919A0 )
      goto LABEL_29;
    v33 = sub_40C434((__int64)(v2 - 2), v32, v6, v7, v8, v9, v10, v11, v12, v13, (__int64)v30, v3, v4, v5);
    if ( !v33 )
      goto LABEL_33;
    v35 = 16 * (v14 + 2);
LABEL_27:
    *(_QWORD *)v33 = v25;
    ifunc_40DE70(&v33[v35], 0, 16 * ((_QWORD)v25 - v14));
    v2 = v33 + 16;
    v15 = qword_4921A0;
    *a1 = v2;
  }
  v16 = 0;
  v40 = 0;
  v17 = (__int64 *)qword_4921A8;
  do
  {
    v18 = *v17;
    v19 = v40 == 0;
    if ( v19 < *v17 )
    {
      v14 = v40 + v19;
      v20 = &v17[2 * v19 + 2];
      do
      {
        while ( 1 )
        {
          if ( v15 < v14 )
            goto LABEL_23;
          v25 = (_QWORD *)v20[1];
          if ( v25 )
            break;
LABEL_12:
          ++v19;
          ++v14;
          v20 += 2;
          if ( v19 >= v18 )
            goto LABEL_20;
        }
        if ( *v20 > (unsigned __int64)qword_4921D0 )
        {
          v6 = sub_41F250("listp->slotinfo[cnt].gen <= GL(dl_tls_generation)", "dl-tls.c", 570, "_dl_allocate_tls_init");
LABEL_29:
          v36 = sub_40B890(v32, v6, v7, v8, v9, v10, v11, v12, v13, (__int64)v31, v30, v3, v4, v5);
          v33 = (char *)v36;
          if ( !v36 )
            goto LABEL_33;
          v37 = v17;
          v35 = 16 * (v14 + 2);
          j_ifunc_40DC90(v36, v37, v35);
          goto LABEL_27;
        }
        v26 = v25[147];
        v6 = *(long double *)&xmmword_45A900;
        if ( v16 < *v20 )
          v16 = *v20;
        v27 = v25[146];
        v28 = &v2[2 * v26];
        *v28 = xmmword_45A900;
        if ( (unsigned __int64)(v27 + 1) > 1 )
        {
          if ( v26 != v14 )
            goto LABEL_32;
          v21 = v25[142];
          if ( v25[143] < v21 )
          {
            v6 = sub_41F250(
                   "map->l_tls_blocksize >= map->l_tls_initimage_size",
                   "dl-tls.c",
                   581,
                   "_dl_allocate_tls_init",
                   NAN);
LABEL_32:
            v34 = sub_41F250(
                    "map->l_tls_modid == total + cnt",
                    "dl-tls.c",
                    580,
                    "_dl_allocate_tls_init",
                    *(double *)&v6);
LABEL_33:
            sub_4385C0("cannot allocate memory for thread-local data: ABORT\n", v34);
          }
          v23 = v25[6] == 0;
          v22 = (char *)a1 + v27;
          *(_QWORD *)v28 = v22;
          v23 = !v23 && v39 == 0;
          if ( !v23 )
          {
            v24 = j_ifunc_40DC90(v22, v25[141], v21);
            ifunc_40DE70(v24 + v21, 0, v25[143] - v25[142]);
            v15 = qword_4921A0;
            v18 = *v17;
            goto LABEL_12;
          }
        }
        ++v19;
        ++v14;
        v15 = qword_4921A0;
        v20 += 2;
      }
      while ( v19 < v18 );
    }
LABEL_20:
    v40 += v19;
    if ( v40 > v15 )
      goto LABEL_23;
    v17 = (__int64 *)v17[1];
  }
  while ( v17 );
  v6 = sub_41F250("listp != NULL", "dl-tls.c", 613, "_dl_allocate_tls_init");
LABEL_23:
  result = sub_42DA40(&unk_490F30, v6);
  *v2 = v16;
  return result;
}
