__int64 __fastcall msort_with_tmp_part_0(__int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x21
  unsigned __int64 v4; // x20
  __int64 *v6; // x19
  int v7; // w0
  __int64 v8; // x24
  int (__fastcall *v9)(__int64, __int64, __int64); // x25
  __int64 v10; // x26
  _QWORD *v11; // x28
  __int64 *v12; // x22
  bool v13; // zf
  bool v14; // zf
  int *v16; // x22
  int v17; // w0
  int v18; // t1
  bool v19; // zf
  int v20; // t1
  __int64 *v21; // x22
  __int64 v22; // x0
  __int64 v23; // t1
  bool v24; // zf
  __int64 v25; // t1
  __int64 *v26; // x22
  __int64 v27; // x0
  __int64 v28; // t1
  bool v29; // zf
  __int64 v30; // t1

  v3 = a3 >> 1;
  v4 = a3 - (a3 >> 1);
  v6 = (__int64 *)((char *)a2 + (a3 >> 1) * *a1);
  if ( a3 >> 1 != 1 )
    ((void (*)(void))msort_with_tmp_part_0)();
  if ( v4 > 1 )
  {
    msort_with_tmp_part_0(a1, v6, v4);
    v7 = *((_DWORD *)a1 + 2);
    v8 = *a1;
    v9 = (int (__fastcall *)(__int64, __int64, __int64))a1[2];
    v10 = a1[3];
    v11 = (_QWORD *)a1[4];
    if ( v7 != 1 )
    {
      if ( v7 != 2 )
        goto LABEL_6;
LABEL_34:
      v21 = a2;
      do
      {
        if ( v9(*v21, *v6, v10) > 0 )
        {
          v23 = *v6++;
          v22 = v23;
          --v4;
        }
        else
        {
          v25 = *v21++;
          v22 = v25;
          --v3;
        }
        *v11++ = v22;
        if ( v3 )
          v24 = v4 == 0;
        else
          v24 = 1;
      }
      while ( !v24 );
      goto LABEL_19;
    }
LABEL_23:
    v16 = (int *)a2;
    do
    {
      if ( v9((__int64)v16, (__int64)v6, v10) > 0 )
      {
        v18 = *(_DWORD *)v6;
        v6 = (__int64 *)((char *)v6 + 4);
        v17 = v18;
        --v4;
      }
      else
      {
        v20 = *v16++;
        v17 = v20;
        --v3;
      }
      *(_DWORD *)v11 = v17;
      v11 = (_QWORD *)((char *)v11 + 4);
      if ( v3 )
        v19 = v4 == 0;
      else
        v19 = 1;
    }
    while ( !v19 );
    goto LABEL_19;
  }
  v7 = *((_DWORD *)a1 + 2);
  v8 = *a1;
  v9 = (int (__fastcall *)(__int64, __int64, __int64))a1[2];
  v10 = a1[3];
  v11 = (_QWORD *)a1[4];
  if ( v7 == 1 )
  {
    if ( !v4 )
      goto LABEL_42;
    v4 = 1;
    goto LABEL_23;
  }
  if ( v7 == 2 )
  {
    if ( !v4 )
      goto LABEL_42;
    goto LABEL_34;
  }
LABEL_6:
  if ( v7 )
  {
    v12 = a2;
    if ( !v4 )
      goto LABEL_42;
    do
    {
      while ( v9((__int64)v12, (__int64)v6, v10) <= 0 )
      {
        --v3;
        v12 = (__int64 *)((char *)v12 + v8);
        v11 = (_QWORD *)(j_memcpy(v11) + v8);
        if ( v3 )
          v14 = v4 == 0;
        else
          v14 = 1;
        if ( v14 )
          goto LABEL_19;
      }
      --v4;
      v6 = (__int64 *)((char *)v6 + v8);
      v11 = (_QWORD *)(j_memcpy(v11) + v8);
      if ( v3 )
        v13 = v4 == 0;
      else
        v13 = 1;
    }
    while ( !v13 );
  }
  else
  {
    v26 = a2;
    if ( !v4 )
      goto LABEL_42;
    do
    {
      if ( v9((__int64)v26, (__int64)v6, v10) > 0 )
      {
        v28 = *v6++;
        v27 = v28;
        --v4;
      }
      else
      {
        v30 = *v26++;
        v27 = v30;
        --v3;
      }
      *v11++ = v27;
      if ( v3 )
        v29 = v4 == 0;
      else
        v29 = 1;
    }
    while ( !v29 );
  }
LABEL_19:
  if ( v3 )
LABEL_42:
    j_memcpy(v11);
  return j_memcpy(a2);
}
