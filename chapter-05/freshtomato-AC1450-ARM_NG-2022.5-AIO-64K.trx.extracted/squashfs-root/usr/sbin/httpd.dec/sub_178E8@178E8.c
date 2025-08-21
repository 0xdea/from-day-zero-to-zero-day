void *__fastcall sub_178E8(unsigned __int8 *a1, int a2, int (__fastcall *a3)(int, _BYTE *))
{
  unsigned __int8 *v4; // r4
  unsigned __int8 *v5; // r3
  int v6; // r2
  unsigned int v8; // r0
  void *v9; // r0
  void *v10; // r5
  void *v11; // r6
  _BYTE *i; // r1
  unsigned int v13; // r10
  unsigned __int8 v14; // r3
  int v15; // r7
  unsigned __int8 v16; // r3
  unsigned __int8 v17; // r2
  bool v18; // cc
  unsigned __int8 v19; // r2
  unsigned __int8 v20; // r3
  unsigned __int8 v21; // r0
  int v22; // r0
  unsigned int v23; // r10

  v4 = a1;
  v5 = a1;
  v6 = 0;
  while ( 1 )
  {
    v8 = *v5;
    if ( !*v5 )
      break;
    ++v5;
    ++v6;
    if ( v8 > 0xBF )
    {
      if ( v8 > 0xF4 )
      {
        *_errno_location() = 84;
        return 0;
      }
      if ( !*v5 )
        break;
      if ( !*++v5 )
        break;
      if ( v8 > 0xDF )
        ++v5;
      if ( !*v5 )
        break;
      if ( v8 > 0xEF )
      {
        ++v5;
        ++v6;
      }
    }
  }
  if ( v6 <= 0 )
    return 0;
  v9 = malloc(a2 * (v6 + 1) + 1);
  v10 = v9;
  v11 = v9;
  if ( v9 )
  {
    for ( i = v9; ; i = (_BYTE *)a3(v22, i) )
    {
      v13 = *v4;
      if ( !*v4 )
      {
        *i = v13;
        return v10;
      }
      if ( v13 <= 0x7F )
      {
        v15 = 1;
LABEL_38:
        v22 = (unsigned __int16)v13;
        goto LABEL_41;
      }
      if ( v13 <= 0xC1 )
        goto LABEL_36;
      if ( v13 > 0xDF )
      {
        if ( v13 > 0xEF )
        {
          if ( v13 > 0xF4 )
            goto LABEL_36;
          v19 = v4[1];
          if ( (v19 & 0xC0) != 0x80 )
            goto LABEL_36;
          v20 = v4[2];
          if ( (v20 & 0xC0) != 0x80 )
            goto LABEL_36;
          v21 = v4[3];
          if ( (v21 & 0xC0) != 0x80 )
            goto LABEL_36;
          v13 = v21 & 0x3F | ((v13 & 7) << 18) | ((v19 & 0x3F) << 12) | ((v20 & 0x3F) << 6);
          if ( v13 - 0x10000 > 0xFFFFF )
            goto LABEL_36;
          v15 = 4;
          goto LABEL_40;
        }
        v16 = v4[1];
        if ( (v16 & 0xC0) != 0x80 )
          goto LABEL_36;
        v17 = v4[2];
        if ( (v17 & 0xC0) != 0x80 )
          goto LABEL_36;
        v13 = v17 & 0x3F | (unsigned __int16)((_WORD)v13 << 12) | ((v16 & 0x3F) << 6);
        v18 = v13 - 2048 > 0xCFFF;
        if ( v13 - 2048 > 0xCFFF )
          v18 = v13 - 57344 > 0x1FFF;
        if ( v18 )
        {
LABEL_36:
          *_errno_location() = 84;
          free(v11);
          return 0;
        }
        v15 = 3;
      }
      else
      {
        v14 = v4[1];
        if ( (v14 & 0xC0) != 0x80 )
          goto LABEL_36;
        v13 = v14 & 0x3F | ((v13 & 0x1F) << 6);
        v15 = 2;
      }
      if ( v13 <= 0xFFFF )
        goto LABEL_38;
LABEL_40:
      v23 = v13 - 0x10000;
      i = (_BYTE *)a3((unsigned __int16)((v23 >> 10) - 10240), i);
      v22 = (unsigned __int16)((v23 & 0x3FF) - 9216);
LABEL_41:
      v4 += v15;
    }
  }
  return v10;
}
