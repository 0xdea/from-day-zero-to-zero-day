__int64 __fastcall classify_object_over_fdes(__int64 a1, char *a2, unsigned __int64 *a3)
{
  unsigned int v3; // w19
  __int64 v6; // x24
  int v7; // w20
  __int64 v8; // x23
  char *v9; // x27
  __int64 v10; // x1
  int v11; // w0
  int v12; // w26
  __int64 v13; // x28
  int cie_encoding; // w0
  __int64 v15; // x1
  char *v16; // x2
  __int64 v17; // x3
  __int64 v18; // x0
  bool v19; // cc
  unsigned __int64 v20; // x2
  unsigned __int64 v21; // x0
  unsigned __int64 v23; // [xsp+60h] [xbp+60h]
  unsigned __int64 v24; // [xsp+70h] [xbp+70h] BYREF
  unsigned __int64 v25; // [xsp+78h] [xbp+78h] BYREF

  v3 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 )
  {
    v6 = 0;
    LOBYTE(v7) = 0;
    v8 = 0;
    v9 = a2;
    v10 = 0;
    while ( 1 )
    {
      v11 = *((_DWORD *)v9 + 1);
      if ( v11 )
        break;
LABEL_23:
      v9 += v3 + 4;
      v3 = *(_DWORD *)v9;
      if ( !*(_DWORD *)v9 )
        return v8;
    }
    v12 = (unsigned __int8)v7;
    v13 = (__int64)&v9[-v11 + 4];
    if ( v13 == v10 )
    {
LABEL_29:
      v16 = read_encoded_value_with_base(v12, v6, v9 + 8, &v24);
      if ( v12 == 255 )
        goto LABEL_22;
LABEL_30:
      v18 = v12 & 7;
      v19 = (unsigned int)v18 > 2;
      if ( (_DWORD)v18 != 2 )
        goto LABEL_14;
      goto LABEL_31;
    }
    cie_encoding = get_cie_encoding((unsigned __int8 *)&v9[-v11 + 4]);
    v7 = cie_encoding;
    if ( cie_encoding == 255 )
      return -1;
    v12 = (unsigned __int8)cie_encoding;
    if ( (unsigned __int8)cie_encoding == 255 )
    {
      if ( a3 )
      {
        v6 = 0;
        read_encoded_value_with_base(-1, 0, v9 + 8, &v24);
        goto LABEL_22;
      }
      v6 = 0;
      if ( (*(_DWORD *)(a1 + 32) & 0x7F8) != 0x7F8 )
      {
LABEL_28:
        *(_DWORD *)(a1 + 32) |= 4u;
        goto LABEL_29;
      }
LABEL_49:
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFF807 | (8 * (unsigned __int8)v12);
      v16 = read_encoded_value_with_base(v12, v6, v9 + 8, &v24);
      if ( v12 == 255 )
        goto LABEL_22;
      goto LABEL_30;
    }
    v18 = cie_encoding & 0x70;
    if ( (_DWORD)v18 != 32 )
    {
      if ( (unsigned int)v18 > 0x20 )
      {
        if ( (_DWORD)v18 == 48 )
        {
          v6 = *(_QWORD *)(a1 + 16);
          goto LABEL_11;
        }
        if ( (_DWORD)v18 != 80 )
          goto LABEL_47;
      }
      if ( a3 )
      {
        v6 = 0;
        v16 = read_encoded_value_with_base(v12, 0, v9 + 8, &v24);
LABEL_13:
        v18 = v12 & 7;
        v19 = (unsigned int)v18 > 2;
        if ( (_DWORD)v18 != 2 )
        {
LABEL_14:
          if ( v19 )
          {
            v15 = 0xFFFFFFFFLL;
            if ( (_DWORD)v18 == 3 )
              goto LABEL_17;
            if ( (_DWORD)v18 != 4 )
              goto LABEL_47;
          }
          else if ( (_DWORD)v18 )
          {
LABEL_47:
            abort(v18, v15, (__int64)v16, v17);
          }
          v15 = -1;
LABEL_17:
          if ( (v24 & v15) != 0 )
          {
            ++v8;
            if ( !a3 )
            {
              if ( *(_QWORD *)a1 > v24 )
                *(_QWORD *)a1 = v24;
              goto LABEL_22;
            }
            v23 = v24;
            read_encoded_value_with_base(v12 & 0xF, 0, v16, &v25);
            v20 = a3[1];
            v21 = v23 + v25;
            if ( *a3 )
            {
              if ( v23 < *a3 )
                *a3 = v23;
            }
            else if ( !v20 )
            {
              *a3 = v23;
              a3[1] = v21;
              goto LABEL_22;
            }
            if ( v20 < v21 )
              a3[1] = v21;
          }
LABEL_22:
          v10 = v13;
          goto LABEL_23;
        }
LABEL_31:
        v15 = 0xFFFF;
        goto LABEL_17;
      }
      v6 = 0;
LABEL_26:
      if ( (*(_DWORD *)(a1 + 32) & 0x7F8) != 0x7F8 )
      {
        if ( (unsigned __int8)((unsigned int)*(_QWORD *)(a1 + 32) >> 3) == v7 )
          goto LABEL_29;
        goto LABEL_28;
      }
      goto LABEL_49;
    }
    v6 = *(_QWORD *)(a1 + 8);
LABEL_11:
    if ( a3 )
    {
      v16 = read_encoded_value_with_base(v12, v6, v9 + 8, &v24);
      goto LABEL_13;
    }
    goto LABEL_26;
  }
  return 0;
}
