_DWORD *__fastcall sub_452C50(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // x20
  int v7; // w21
  __int64 v8; // x0
  __int64 v9; // x28
  unsigned int v10; // w19
  __int64 v11; // x27
  __int64 v12; // x26
  __int64 v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  char v16; // w25
  __int64 v17; // x1
  unsigned __int64 v18; // x1
  unsigned __int64 v19; // x2
  int v20; // w1
  char *v21; // x0
  unsigned int v22; // w25
  char *v24; // x0
  char *v25; // x0
  unsigned __int64 v26; // [xsp+70h] [xbp+70h] BYREF
  unsigned __int64 v27; // [xsp+78h] [xbp+78h] BYREF

  v5 = a2;
  v7 = (unsigned __int8)((unsigned int)a1[4] >> 3);
  if ( v7 == 255 )
    goto LABEL_27;
  v8 = v7 & 0x70;
  if ( (_DWORD)v8 == 32 )
  {
    v9 = a1[1];
    goto LABEL_6;
  }
  if ( (unsigned int)v8 <= 0x20 )
  {
LABEL_27:
    v9 = 0;
    goto LABEL_6;
  }
  if ( (_DWORD)v8 == 48 )
  {
    v9 = a1[2];
  }
  else
  {
    v9 = 0;
    if ( (_DWORD)v8 != 80 )
      sub_4002C0(v8, (__int64)a2, a3, a4);
  }
LABEL_6:
  v10 = *a2;
  v11 = 0;
  if ( *a2 )
  {
    do
    {
      v20 = v5[1];
      if ( !v20 )
        goto LABEL_16;
      if ( (a1[4] & 4) != 0 )
      {
        v12 = (__int64)v5 - v20 + 4;
        if ( v12 != v11 )
        {
          v13 = sub_4519C4((unsigned __int8 *)v5 - v20 + 4);
          v16 = v13;
          v7 = v13;
          if ( (unsigned __int8)v13 == 255 )
          {
            v25 = sub_450F40(-1, 0, (char *)v5 + 8, &v26);
            v11 = v12;
            v9 = 0;
            sub_450F40(15, 0, v25, &v27);
            goto LABEL_16;
          }
          v17 = v13 & 0x70;
          if ( (_DWORD)v17 == 32 )
          {
            v9 = a1[1];
            v11 = v12;
            if ( (_DWORD)v13 )
            {
LABEL_33:
              v24 = sub_450F40(v13, v9, (char *)v5 + 8, &v26);
              v13 = (__int64)sub_450F40(v16 & 0xF, 0, v24, &v27);
              goto LABEL_21;
            }
            goto LABEL_14;
          }
          if ( (unsigned int)v17 > 0x20 )
          {
            if ( (_DWORD)v17 == 48 )
            {
              v9 = a1[2];
              v11 = v12;
              if ( (_DWORD)v13 )
                goto LABEL_33;
              goto LABEL_14;
            }
            if ( (_DWORD)v17 != 80 )
              goto LABEL_38;
          }
          v11 = v12;
          v9 = 0;
        }
      }
      if ( v7 )
      {
        v16 = v7;
        v21 = sub_450F40(v7, v9, (char *)v5 + 8, &v26);
        v13 = (__int64)sub_450F40(v7 & 0xF, 0, v21, &v27);
        if ( (unsigned __int8)v7 == 255 )
          goto LABEL_16;
LABEL_21:
        v22 = v16 & 7;
        if ( v22 != 2 )
        {
          if ( v22 <= 2 )
          {
            if ( v22 )
              goto LABEL_38;
          }
          else
          {
            v14 = 0xFFFFFFFFLL;
            if ( v22 == 3 )
            {
LABEL_24:
              if ( (v26 & v14) != 0 && a3 - v26 < v27 )
                return v5;
              goto LABEL_16;
            }
            if ( v22 != 4 )
LABEL_38:
              sub_4002C0(v13, v17, v14, v15);
          }
          v14 = -1;
          goto LABEL_24;
        }
        v14 = 0xFFFF;
        goto LABEL_24;
      }
LABEL_14:
      v18 = *((_QWORD *)v5 + 1);
      v19 = *((_QWORD *)v5 + 2);
      v26 = v18;
      v27 = v19;
      v7 = 0;
      if ( v18 && a3 - v18 < v19 )
        return v5;
LABEL_16:
      v5 = (_DWORD *)((char *)v5 + v10 + 4);
      v10 = *v5;
    }
    while ( *v5 );
  }
  return 0;
}
