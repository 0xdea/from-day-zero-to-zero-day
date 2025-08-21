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
  unsigned int v17; // w23
  __int64 v18; // x0
  _BYTE *v19; // x19
  _BYTE *v20; // x27
  _BYTE *v21; // x26
  _BYTE *v22; // x0
  int v23; // w1
  int v24; // w4
  unsigned __int8 *v25; // x0
  __int64 v26; // x3
  int v27; // t1
  __int64 v28; // x2
  __int64 v29; // x23
  unsigned int v30; // w19
  __int64 v31; // x2
  __int64 v32; // x0
  __int64 v33; // x0
  int v34; // w2
  unsigned __int8 *v35; // x0
  int v36; // w1
  bool v38; // zf
  int v39; // t1
  __int64 v40; // x3
  unsigned __int64 v42; // x21
  _BYTE v43[1016]; // [xsp+8h] [xbp-488h] BYREF
  __int64 v44; // [xsp+400h] [xbp-90h]
  __int64 v45; // [xsp+408h] [xbp-88h]
  __int64 *v46; // [xsp+410h] [xbp-80h]
  __int64 v47; // [xsp+418h] [xbp-78h]
  __int64 v48; // [xsp+420h] [xbp-70h]
  __int64 v49; // [xsp+428h] [xbp-68h]
  __int64 v50; // [xsp+460h] [xbp-30h]
  _BYTE v51[24]; // [xsp+470h] [xbp-20h] BYREF
  __int64 v52; // [xsp+488h] [xbp-8h]
  __int64 v53; // [xsp+490h] [xbp+0h] BYREF
  __int64 v54; // [xsp+4A0h] [xbp+10h]
  __int64 v55; // [xsp+4A8h] [xbp+18h]
  __int64 v56; // [xsp+4B0h] [xbp+20h]

  v52 = qword_48DD60;
  v5 = sub_410EE0("/sys/kernel/mm/transparent_hugepage/enabled", 0, &qword_48DD60);
  if ( (_DWORD)v5 == -1 )
    goto LABEL_8;
  v54 = v0;
  v55 = v1;
  v6 = v5;
  v7 = sub_410FC0(v5, v51, 24);
  if ( v7 > 0x17 || (v51[v7] = 0, sub_410CD0(v6), v7 != 23) )
  {
LABEL_7:
    v0 = v54;
    v1 = v55;
LABEL_8:
    result = 3;
    goto LABEL_9;
  }
  v8 = sub_42F240(v51, "[always] madvise never\n");
  result = 0;
  if ( v8 && (v10 = sub_42F240(v51, "always [madvise] never\n"), result = 1, v10) )
  {
    if ( (unsigned int)sub_42F240(v51, "always madvise [never]\n") )
      goto LABEL_7;
    v0 = v54;
    v1 = v55;
    result = 2;
  }
  else
  {
    v0 = v54;
    v1 = v55;
  }
LABEL_9:
  if ( v52 == qword_48DD60 )
    return result;
  v54 = v0;
  v55 = v1;
  v56 = v2;
  v11 = sub_412340();
  v46 = &v53;
  v47 = v4;
  v44 = 0;
  v14 = v13;
  v15 = v11;
  v16 = v12;
  v45 = qword_48DD60;
  *v13 = 0;
  *v12 = 0;
  if ( v11 )
  {
    v17 = sub_410EE0("/sys/kernel/mm/hugepages", 0x4000, 0);
    if ( v17 != -1 )
    {
      v49 = v1;
      v48 = v0;
      v50 = v3;
LABEL_16:
      v18 = sub_430270(v17, v43, 1024);
      if ( (unsigned __int64)(v18 + 1) > 1 )
      {
        v19 = &v43[v18];
        v20 = v43;
        while ( 1 )
        {
          v21 = v20;
          v22 = v20 + 19;
          v20 += *((unsigned __int16 *)v20 + 8);
          if ( v21[19] != 46 && !(unsigned int)sub_42F424(v22, "hugepages-", 10) )
          {
            v23 = (unsigned __int8)v21[29];
            v24 = v23 - 48;
            if ( (unsigned __int8)(v23 - 48) <= 9u )
            {
              v25 = v21 + 30;
              v26 = 0;
              do
              {
                v27 = *v25++;
                v28 = v24;
                v24 = v27 - 48;
                v26 = v28 + 10 * v26;
              }
              while ( (unsigned __int8)(v27 - 48) <= 9u );
              if ( v15 == v26 << 10 )
                break;
            }
          }
          if ( v20 == v19 )
            goto LABEL_16;
        }
        *v14 = v15;
        *v16 = ((unsigned int)__clz(__rbit64(v15)) << 26) | 0x40000;
      }
      sub_410CD0(v17);
      v0 = v48;
      v1 = v49;
      v3 = v50;
    }
    goto LABEL_27;
  }
  v29 = 0;
  v48 = v0;
  v49 = v1;
  v30 = sub_410EE0("/proc/meminfo", 0, v12);
  if ( v30 != -1 )
  {
    v31 = sub_430F90(v30, v43, 511, 0);
    if ( (v31 & 0x8000000000000000LL) == 0 )
    {
      while ( 1 )
      {
        v43[v31] = 0;
        v32 = ((__int64 (__fastcall *)(_BYTE *, const char *))loc_40E470)(v43, "Hugepagesize:");
        if ( v32 )
          break;
        v33 = sub_42F700(v43, 10);
        if ( v33 )
        {
          v29 += v33 + 1 - (_QWORD)v43;
          v31 = sub_430F90(v30, v43, 511, v29);
          if ( (v31 & 0x8000000000000000LL) == 0 )
            continue;
        }
        goto LABEL_34;
      }
      v34 = *(unsigned __int8 *)(v32 + 14);
      v35 = (unsigned __int8 *)(v32 + 15);
      v36 = v34 - 48;
      if ( v34 == 32 || (unsigned __int8)(v34 - 48) <= 9u )
      {
        do
        {
          v38 = v34 == 32;
          v39 = *v35++;
          v34 = v39;
          v40 = v36 + 10 * v15;
          v36 = v39 - 48;
          if ( !v38 )
            v15 = v40;
        }
        while ( v34 == 32 || (unsigned __int8)v36 <= 9u );
        v42 = v15 << 10;
        sub_410CD0(v30);
        *v14 = v42;
        if ( !v42 )
          goto LABEL_50;
        v0 = v48;
        v1 = v49;
        *v16 = ((unsigned int)__clz(__rbit64(v42)) << 26) | 0x40000;
        goto LABEL_27;
      }
    }
LABEL_34:
    sub_410CD0(v30);
  }
  v0 = v48;
  v1 = v49;
  *v14 = 0;
LABEL_27:
  while ( 1 )
  {
    result = (__int64)&qword_48DD60;
    if ( v45 == qword_48DD60 )
      break;
    v48 = v0;
    v49 = v1;
    v50 = v3;
    sub_412340();
LABEL_50:
    v0 = v48;
    v1 = v49;
  }
  return result;
}
