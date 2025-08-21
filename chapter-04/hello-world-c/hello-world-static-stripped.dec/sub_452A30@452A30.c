__int64 __fastcall sub_452A30(__int64 result, __int64 a2, char *a3, __int64 a4)
{
  char *v5; // x20
  int v6; // w21
  __int64 v7; // x25
  __int64 v8; // x28
  unsigned int v9; // w19
  __int64 v10; // x27
  int v11; // w2
  __int64 v12; // x23
  __int64 v13; // x2
  __int64 v14; // x3
  char v15; // w26
  __int64 v16; // x1
  __int64 v17; // x1
  unsigned int v18; // w26
  unsigned __int64 v19; // [xsp+68h] [xbp+68h] BYREF

  v5 = a3;
  v6 = (unsigned __int8)((unsigned int)*(_QWORD *)(result + 32) >> 3);
  v7 = result;
  if ( v6 == 255 )
    goto LABEL_20;
  result = v6 & 0x70;
  if ( (_DWORD)result == 32 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    goto LABEL_6;
  }
  if ( (unsigned int)result <= 0x20 )
  {
LABEL_20:
    v8 = 0;
    goto LABEL_6;
  }
  if ( (_DWORD)result == 48 )
  {
    v8 = *(_QWORD *)(v7 + 16);
  }
  else
  {
    v8 = 0;
    if ( (_DWORD)result != 80 )
      sub_4002C0(result, a2, (__int64)a3, a4);
  }
LABEL_6:
  v9 = *(_DWORD *)a3;
  v10 = 0;
  if ( *(_DWORD *)a3 )
  {
    do
    {
      v11 = *((_DWORD *)v5 + 1);
      if ( !v11 )
        goto LABEL_18;
      if ( (*(_DWORD *)(v7 + 32) & 4) == 0 || (v12 = (__int64)&v5[-v11 + 4], v12 == v10) )
      {
        if ( !v6 )
          goto LABEL_15;
        v15 = v6;
        result = (__int64)sub_450F40(v6, v8, v5 + 8, &v19);
        if ( (unsigned __int8)v6 == 255 )
          goto LABEL_18;
      }
      else
      {
        v6 = sub_4519C4((unsigned __int8 *)&v5[-v11 + 4]);
        result = (unsigned __int8)v6;
        v15 = v6;
        if ( (unsigned __int8)v6 == 255 )
        {
          v10 = v12;
          v8 = 0;
          result = (__int64)sub_450F40(-1, 0, v5 + 8, &v19);
          goto LABEL_18;
        }
        v16 = v6 & 0x70;
        if ( (_DWORD)v16 == 32 )
        {
          v8 = *(_QWORD *)(v7 + 8);
          v10 = v12;
          if ( !v6 )
          {
LABEL_15:
            result = *((_QWORD *)v5 + 1);
            v6 = 0;
            if ( result )
              goto LABEL_16;
            goto LABEL_18;
          }
          goto LABEL_33;
        }
        if ( (unsigned int)v16 > 0x20 )
        {
          if ( (_DWORD)v16 == 48 )
          {
            v8 = *(_QWORD *)(v7 + 16);
            v10 = v12;
            if ( !v6 )
              goto LABEL_15;
LABEL_33:
            result = (__int64)sub_450F40(v6, v8, v5 + 8, &v19);
            goto LABEL_23;
          }
          if ( (_DWORD)v16 != 80 )
            goto LABEL_39;
        }
        v10 = v12;
        v8 = 0;
        if ( !v6 )
          goto LABEL_15;
        v15 = v6;
        result = (__int64)sub_450F40(v6, 0, v5 + 8, &v19);
      }
LABEL_23:
      v18 = v15 & 7;
      if ( v18 == 2 )
      {
        result = 0xFFFF;
      }
      else
      {
        if ( v18 <= 2 )
        {
          if ( v18 )
LABEL_39:
            sub_4002C0(result, v16, v13, v14);
        }
        else
        {
          result = 0xFFFFFFFFLL;
          if ( v18 == 3 )
            goto LABEL_26;
          if ( v18 != 4 )
            goto LABEL_39;
        }
        result = -1;
      }
LABEL_26:
      if ( (result & v19) != 0 )
      {
LABEL_16:
        if ( a2 )
        {
          v17 = *(_QWORD *)(a2 + 8);
          result = v17 + 2;
          *(_QWORD *)(a2 + 8) = v17 + 1;
          *(_QWORD *)(a2 + 8 * (v17 + 2)) = v5;
        }
      }
LABEL_18:
      v5 += v9 + 4;
      v9 = *(_DWORD *)v5;
    }
    while ( *(_DWORD *)v5 );
  }
  return result;
}
