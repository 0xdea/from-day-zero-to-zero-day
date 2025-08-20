__int64 __fastcall sub_43E710(__int64 a1)
{
  __int64 v2; // x5
  __int64 v3; // x2
  __int64 v4; // x21
  unsigned int v5; // w20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v10; // x0
  __int64 *v11; // x3
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x21
  __int64 v16; // x1
  __int64 v17; // x19
  __int64 v18; // x20
  int v19; // w0

  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)(a1 + 4) == 102 )
    {
      v19 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 8) = v19 - 1;
      if ( v19 > 0 )
        return 48;
    }
  }
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    v17 = 8 * v3 - 8;
    v18 = *(_QWORD *)(v4 + v17);
    *(_QWORD *)(v4 + v17) = sub_449700(v4, v16, v3 - 1, 10);
    return (unsigned __int8)(v18 + 48);
  }
  if ( v2 > v3 )
  {
    v5 = 48;
    v6 = sub_449700(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16), v3, 10);
    if ( v6 )
    {
LABEL_6:
      v8 = *(_QWORD *)(a1 + 16);
      v7 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v7 + 1;
      *(_QWORD *)(v8 + 8 * v7) = v6;
      return v5;
    }
    return v5;
  }
  v10 = sub_448C70(*(_QWORD *)(a1 + 48), 0, *(_QWORD *)(a1 + 16), v3, *(_QWORD *)(a1 + 32));
  v11 = *(__int64 **)(a1 + 48);
  v11[*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 40)] = v10;
  v12 = *(_QWORD *)(a1 + 40);
  v13 = *v11;
  *(_QWORD *)(a1 + 24) = v12;
  if ( v12 )
  {
    v14 = *(_QWORD *)(a1 + 16);
    while ( !*(_QWORD *)(v14 - 8 + 8 * v12--) )
    {
      *(_QWORD *)(a1 + 24) = v12;
      if ( !v12 )
        goto LABEL_16;
    }
    v5 = (unsigned __int8)(v13 + 48);
    v6 = sub_449700(v14, v14, *(_QWORD *)(a1 + 24), 10);
    if ( v6 )
      goto LABEL_6;
    return v5;
  }
LABEL_16:
  *(_QWORD *)(a1 + 24) = 1;
  return (unsigned __int8)(v13 + 48);
}
