__int64 sub_411E50()
{
  __int64 v0; // x19
  __int64 v1; // x20
  __int64 v2; // x21
  __int64 v3; // x27
  __int64 v4; // x30
  __int64 v5; // x0
  unsigned int v6; // w19
  unsigned __int64 v7; // x20
  int v8; // w1
  __int64 result; // x0
  int v10; // w1
  __int64 v11; // x0
  unsigned int *v12; // x2
  unsigned __int64 *v13; // x1
  unsigned __int64 *v14; // x24
  unsigned __int64 v15; // x21
  unsigned int *v16; // x25
  __int64 v17; // x3
  unsigned int v18; // w23
  __int64 v19; // x0
  _BYTE *v20; // x19
  _BYTE *v21; // x27
  _BYTE *v22; // x26
  _BYTE *v23; // x0
  int v24; // w1
  int v25; // w4
  unsigned __int8 *v26; // x0
  __int64 v27; // x3
  int v28; // t1
  __int64 v29; // x2
  __int64 v30; // x23
  unsigned int v31; // w19
  __int64 v32; // x2
  __int64 v33; // x0
  __int64 v34; // x0
  int v35; // w2
  unsigned __int8 *v36; // x0
  int v37; // w1
  bool v39; // zf
  int v40; // t1
  __int64 v41; // x3
  unsigned __int64 v43; // x21
  _BYTE v44[1016]; // [xsp+8h] [xbp-488h] BYREF
  __int64 v45; // [xsp+400h] [xbp-90h]
  __int64 v46; // [xsp+408h] [xbp-88h]
  __int64 *v47; // [xsp+410h] [xbp-80h]
  __int64 v48; // [xsp+418h] [xbp-78h]
  __int64 v49; // [xsp+420h] [xbp-70h]
  __int64 v50; // [xsp+428h] [xbp-68h]
  __int64 v51; // [xsp+460h] [xbp-30h]
  _BYTE v52[24]; // [xsp+470h] [xbp-20h] BYREF
  __int64 v53; // [xsp+488h] [xbp-8h]
  __int64 v54; // [xsp+490h] [xbp+0h] BYREF
  __int64 v55; // [xsp+4A0h] [xbp+10h]
  __int64 v56; // [xsp+4A8h] [xbp+18h]
  __int64 v57; // [xsp+4B0h] [xbp+20h]

  v53 = qword_48DD60;
  v5 = sub_410EE0("/sys/kernel/mm/transparent_hugepage/enabled", 0, &qword_48DD60);
  if ( (_DWORD)v5 == -1 )
    goto LABEL_8;
  v55 = v0;
  v56 = v1;
  v6 = v5;
  v7 = sub_410FC0(v5, v52, 24);
  if ( v7 > 0x17 || (v52[v7] = 0, sub_410CD0(v6), v7 != 23) )
  {
LABEL_7:
    v0 = v55;
    v1 = v56;
LABEL_8:
    result = 3;
    goto LABEL_9;
  }
  v8 = sub_42F240(v52, "[always] madvise never\n");
  result = 0;
  if ( v8 && (v10 = sub_42F240(v52, "always [madvise] never\n"), result = 1, v10) )
  {
    if ( (unsigned int)sub_42F240(v52, "always madvise [never]\n") )
      goto LABEL_7;
    v0 = v55;
    v1 = v56;
    result = 2;
  }
  else
  {
    v0 = v55;
    v1 = v56;
  }
LABEL_9:
  if ( v53 == qword_48DD60 )
    return result;
  v55 = v0;
  v56 = v1;
  v57 = v2;
  v11 = sub_412340(result, &qword_48DD60, 0, v53 - qword_48DD60);
  v47 = &v54;
  v48 = v4;
  v45 = 0;
  v14 = v13;
  v15 = v11;
  v16 = v12;
  v46 = qword_48DD60;
  *v13 = 0;
  *v12 = 0;
  if ( v11 )
  {
    v18 = sub_410EE0("/sys/kernel/mm/hugepages", 0x4000, 0);
    if ( v18 != -1 )
    {
      v50 = v1;
      v49 = v0;
      v51 = v3;
LABEL_16:
      v19 = sub_430270(v18, v44, 1024);
      if ( (unsigned __int64)(v19 + 1) > 1 )
      {
        v20 = &v44[v19];
        v21 = v44;
        while ( 1 )
        {
          v22 = v21;
          v23 = v21 + 19;
          v21 += *((unsigned __int16 *)v21 + 8);
          if ( v22[19] != 46 && !(unsigned int)sub_42F424(v23, "hugepages-", 10) )
          {
            v24 = (unsigned __int8)v22[29];
            v25 = v24 - 48;
            if ( (unsigned __int8)(v24 - 48) <= 9u )
            {
              v26 = v22 + 30;
              v27 = 0;
              do
              {
                v28 = *v26++;
                v29 = v25;
                v25 = v28 - 48;
                v27 = v29 + 10 * v27;
              }
              while ( (unsigned __int8)(v28 - 48) <= 9u );
              if ( v15 == v27 << 10 )
                break;
            }
          }
          if ( v21 == v20 )
            goto LABEL_16;
        }
        *v14 = v15;
        *v16 = ((unsigned int)__clz(__rbit64(v15)) << 26) | 0x40000;
      }
      sub_410CD0(v18);
      v0 = v49;
      v1 = v50;
      v3 = v51;
    }
    goto LABEL_27;
  }
  v30 = 0;
  v49 = v0;
  v50 = v1;
  v31 = sub_410EE0("/proc/meminfo", 0, v12);
  if ( v31 != -1 )
  {
    v32 = sub_430F90(v31, v44, 511, 0);
    if ( (v32 & 0x8000000000000000LL) == 0 )
    {
      while ( 1 )
      {
        v44[v32] = 0;
        v33 = ((__int64 (__fastcall *)(_BYTE *, const char *))loc_40E470)(v44, "Hugepagesize:");
        if ( v33 )
          break;
        v34 = sub_42F700(v44, 10);
        if ( v34 )
        {
          v30 += v34 + 1 - (_QWORD)v44;
          v32 = sub_430F90(v31, v44, 511, v30);
          if ( (v32 & 0x8000000000000000LL) == 0 )
            continue;
        }
        goto LABEL_34;
      }
      v35 = *(unsigned __int8 *)(v33 + 14);
      v36 = (unsigned __int8 *)(v33 + 15);
      v37 = v35 - 48;
      if ( v35 == 32 || (unsigned __int8)(v35 - 48) <= 9u )
      {
        do
        {
          v39 = v35 == 32;
          v40 = *v36++;
          v35 = v40;
          v41 = v37 + 10 * v15;
          v37 = v40 - 48;
          if ( !v39 )
            v15 = v41;
        }
        while ( v35 == 32 || (unsigned __int8)v37 <= 9u );
        v43 = v15 << 10;
        sub_410CD0(v31);
        *v14 = v43;
        if ( !v43 )
          goto LABEL_50;
        v0 = v49;
        v1 = v50;
        *v16 = ((unsigned int)__clz(__rbit64(v43)) << 26) | 0x40000;
        goto LABEL_27;
      }
    }
LABEL_34:
    sub_410CD0(v31);
  }
  v0 = v49;
  v1 = v50;
  *v14 = 0;
LABEL_27:
  while ( 1 )
  {
    result = (__int64)&qword_48DD60;
    if ( v46 == qword_48DD60 )
      break;
    v49 = v0;
    v50 = v1;
    v51 = v3;
    sub_412340(&qword_48DD60, 0, v46 - qword_48DD60, v17);
LABEL_50:
    v0 = v49;
    v1 = v50;
  }
  return result;
}
