__int64 __fastcall decompose_rpath(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // x6
  unsigned __int8 *v8; // x24
  _BYTE *v10; // x0
  __int16 *v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x22
  __int64 v16; // x1
  __int64 v17; // x6
  unsigned int v18; // t1
  unsigned __int64 v19; // x0
  __int64 v20; // x0
  _QWORD *v21; // x23
  int v22; // w8
  __int64 v23; // x9
  int v24; // w7
  int v25; // t1
  int v26; // t1
  int v27; // w7
  bool v28; // zf
  const char *v29; // x3

  v4 = (_BYTE *)dl_inhibit_rpath;
  v8 = *(unsigned __int8 **)(a3 + 8);
  if ( dl_inhibit_rpath && !_libc_enable_secure )
  {
    v22 = *(unsigned __int8 *)dl_inhibit_rpath;
    do
    {
      v23 = *(_QWORD *)(a3 + 8);
      v24 = v22;
      if ( v22 == *v8 )
      {
        while ( v24 )
        {
          v25 = (unsigned __int8)*++v4;
          v22 = v25;
          v26 = *(unsigned __int8 *)++v23;
          v24 = v26;
          if ( v22 != v26 )
            goto LABEL_19;
        }
      }
      else
      {
        v24 = *v8;
LABEL_19:
        if ( v24 )
          goto LABEL_20;
      }
      v28 = v22 == 58 || v22 == 0;
      if ( v28 )
        goto LABEL_3;
      do
      {
LABEL_20:
        v27 = (unsigned __int8)*v4;
        if ( !*v4 )
          goto LABEL_2;
        ++v4;
      }
      while ( v27 != 58 );
      v22 = (unsigned __int8)*v4;
    }
    while ( *v4 );
  }
LABEL_2:
  if ( !*a2 )
  {
LABEL_3:
    *(_QWORD *)a1 = -1;
    return 0;
  }
  v10 = (_BYTE *)strdup(a2);
  v15 = (__int64)v10;
  if ( !v10 )
  {
    v29 = "cannot create RUNPATH/RPATH copy";
LABEL_34:
    dl_signal_error(12, 0, 0, v29);
  }
  v16 = (unsigned __int8)*v10;
  if ( *v10 )
  {
    v12 = (__int64)v10;
    v17 = 0;
    do
    {
      v28 = (_DWORD)v16 == 58;
      v18 = *(unsigned __int8 *)++v12;
      v16 = v18;
      if ( v28 )
        ++v17;
    }
    while ( (_DWORD)v16 );
    v19 = 8 * (v17 + 2);
  }
  else
  {
    v19 = 16;
  }
  v20 = malloc(v19, v16, v11, v12, v13, v14);
  v21 = (_QWORD *)v20;
  if ( !v20 )
  {
    free(v15);
    v29 = "cannot create cache for search path";
    goto LABEL_34;
  }
  fillin_rpath_isra_0(v15, v20, (__int64)":", a4, (__int64)v8, a3);
  free(v15);
  if ( !*v21 )
  {
    free(v21);
    goto LABEL_3;
  }
  *(_QWORD *)a1 = v21;
  *(_DWORD *)(a1 + 8) = 1;
  return 1;
}
