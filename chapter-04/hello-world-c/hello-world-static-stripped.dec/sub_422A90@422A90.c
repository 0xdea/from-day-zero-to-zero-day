__int64 __fastcall sub_422A90(__int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x21
  unsigned __int64 v4; // x20
  __int64 *v6; // x19
  unsigned __int64 v7; // x27
  int v8; // w0
  __int64 v9; // x24
  int (__fastcall *v10)(__int64 *, __int64 *, __int64); // x25
  __int64 v11; // x26
  _QWORD *v12; // x28
  __int64 *v13; // x22
  bool v14; // zf
  int v15; // w4
  __int64 *v16; // x1
  __int64 v17; // x0
  bool v18; // zf
  int v20; // w0
  int v21; // t1
  bool v22; // zf
  int v23; // t1
  __int64 v24; // x0
  __int64 v25; // t1
  bool v26; // zf
  __int64 v27; // t1
  __int64 v28; // x0
  __int64 v29; // t1
  bool v30; // zf
  __int64 v31; // t1

  v3 = a3 >> 1;
  v4 = a3 - (a3 >> 1);
  v6 = (__int64 *)((char *)a2 + (a3 >> 1) * *a1);
  v7 = a3;
  if ( a3 >> 1 != 1 )
    sub_422A90(a1);
  if ( v4 > 1 )
  {
    sub_422A90(a1);
    v8 = *((_DWORD *)a1 + 2);
    v9 = *a1;
    v10 = (int (__fastcall *)(__int64 *, __int64 *, __int64))a1[2];
    v11 = a1[3];
    v12 = (_QWORD *)a1[4];
    if ( v8 != 1 )
    {
      if ( v8 != 2 )
        goto LABEL_6;
LABEL_34:
      v13 = a2;
      do
      {
        if ( v10((__int64 *)*v13, (__int64 *)*v6, v11) > 0 )
        {
          v25 = *v6++;
          v24 = v25;
          --v4;
        }
        else
        {
          v27 = *v13++;
          v24 = v27;
          --v3;
        }
        *v12++ = v24;
        if ( v3 )
          v26 = v4 == 0;
        else
          v26 = 1;
      }
      while ( !v26 );
      goto LABEL_19;
    }
LABEL_23:
    v13 = a2;
    do
    {
      if ( v10(v13, v6, v11) > 0 )
      {
        v21 = *(_DWORD *)v6;
        v6 = (__int64 *)((char *)v6 + 4);
        v20 = v21;
        --v4;
      }
      else
      {
        v23 = *(_DWORD *)v13;
        v13 = (__int64 *)((char *)v13 + 4);
        v20 = v23;
        --v3;
      }
      *(_DWORD *)v12 = v20;
      v12 = (_QWORD *)((char *)v12 + 4);
      if ( v3 )
        v22 = v4 == 0;
      else
        v22 = 1;
    }
    while ( !v22 );
    goto LABEL_19;
  }
  v8 = *((_DWORD *)a1 + 2);
  v9 = *a1;
  v10 = (int (__fastcall *)(__int64 *, __int64 *, __int64))a1[2];
  v11 = a1[3];
  v12 = (_QWORD *)a1[4];
  if ( v8 == 1 )
  {
    if ( v4 )
    {
      v4 = 1;
      goto LABEL_23;
    }
LABEL_42:
    v13 = a2;
    goto LABEL_43;
  }
  if ( v8 == 2 )
  {
    if ( v4 )
      goto LABEL_34;
    goto LABEL_42;
  }
LABEL_6:
  if ( v8 )
  {
    v13 = a2;
    if ( !v4 )
      goto LABEL_42;
    do
    {
      while ( 1 )
      {
        v15 = v10(v13, v6, v11);
        v16 = v6;
        if ( v15 > 0 )
          break;
        --v3;
        v17 = j_ifunc_40DC90(v12, v13, v9);
        v13 = (__int64 *)((char *)v13 + v9);
        v12 = (_QWORD *)(v17 + v9);
        if ( v3 )
          v18 = v4 == 0;
        else
          v18 = 1;
        if ( v18 )
          goto LABEL_19;
      }
      --v4;
      v6 = (__int64 *)((char *)v6 + v9);
      v12 = (_QWORD *)(j_ifunc_40DC90(v12, v16, v9) + v9);
      if ( v3 )
        v14 = v4 == 0;
      else
        v14 = 1;
    }
    while ( !v14 );
  }
  else
  {
    v13 = a2;
    if ( !v4 )
      goto LABEL_42;
    do
    {
      if ( v10(v13, v6, v11) > 0 )
      {
        v29 = *v6++;
        v28 = v29;
        --v4;
      }
      else
      {
        v31 = *v13++;
        v28 = v31;
        --v3;
      }
      *v12++ = v28;
      if ( v3 )
        v30 = v4 == 0;
      else
        v30 = 1;
    }
    while ( !v30 );
  }
LABEL_19:
  v7 -= v4;
  if ( v3 )
LABEL_43:
    j_ifunc_40DC90(v12, v13, v3 * v9);
  return j_ifunc_40DC90(a2, a1[4], v9 * v7);
}
