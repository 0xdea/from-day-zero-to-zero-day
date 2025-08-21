char *__fastcall sub_44DBE0(__int64 a1, unsigned __int8 a2, char *a3, unsigned __int64 *a4)
{
  unsigned int v4; // w6
  char *v5; // x9
  unsigned __int64 v6; // x2
  char *result; // x0
  unsigned __int64 v8; // x4
  int v9; // w7
  char v10; // t1
  unsigned __int64 v11; // x5
  unsigned int v12; // w7
  char v13; // w8
  char v14; // t1
  unsigned __int64 v15; // x5

  if ( a2 == 255 )
    goto LABEL_26;
  v4 = a2 & 0x70;
  if ( v4 == 48 )
  {
    v5 = *(char **)(a1 + 816);
LABEL_9:
    if ( a2 == 80 )
      goto LABEL_6;
    goto LABEL_10;
  }
  if ( v4 > 0x30 )
  {
    if ( v4 == 64 )
    {
      v5 = *(char **)(a1 + 824);
    }
    else
    {
      v5 = 0;
      if ( v4 != 80 )
        goto LABEL_26;
    }
    goto LABEL_9;
  }
  if ( v4 != 32 )
  {
    if ( v4 > 0x20 )
      goto LABEL_26;
    v5 = 0;
    goto LABEL_9;
  }
  v5 = *(char **)(a1 + 808);
  if ( a2 == 80 )
  {
LABEL_6:
    v6 = (unsigned __int64)(a3 + 7);
    result = (char *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    *a4 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    return result;
  }
LABEL_10:
  a1 = a2 & 0xF;
  if ( (_DWORD)a1 == 4 )
    goto LABEL_33;
  if ( (unsigned int)a1 <= 4 )
  {
    if ( (_DWORD)a1 == 2 )
    {
      result = a3 + 2;
      v8 = *(unsigned __int16 *)a3;
      goto LABEL_17;
    }
    if ( (_DWORD)a1 == 3 )
    {
      result = a3 + 4;
      v8 = *(unsigned int *)a3;
      goto LABEL_17;
    }
    if ( (a2 & 0xF) != 0 )
    {
      result = a3;
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = *result++;
        v11 = (unsigned __int64)(v10 & 0x7F) << v9;
        v9 += 7;
        v8 |= v11;
      }
      while ( v10 < 0 );
      goto LABEL_17;
    }
LABEL_33:
    result = a3 + 8;
    v8 = *(_QWORD *)a3;
    goto LABEL_17;
  }
  if ( (_DWORD)a1 == 11 )
  {
    result = a3 + 4;
    v8 = *(int *)a3;
    goto LABEL_17;
  }
  if ( (unsigned int)a1 > 0xB )
  {
    if ( (_DWORD)a1 == 12 )
      goto LABEL_33;
LABEL_26:
    sub_4002C0(a1, a2, (__int64)a3, (__int64)a4);
  }
  if ( (_DWORD)a1 != 9 )
  {
    if ( (_DWORD)a1 == 10 )
    {
      result = a3 + 2;
      v8 = *(__int16 *)a3;
      goto LABEL_17;
    }
    goto LABEL_26;
  }
  result = a3;
  v8 = 0;
  v12 = 0;
  do
  {
    v14 = *result++;
    v13 = v14;
    v15 = (unsigned __int64)(v14 & 0x7F) << v12;
    v12 += 7;
    v8 |= v15;
  }
  while ( v14 < 0 );
  if ( v12 <= 0x3F && (v13 & 0x40) != 0 )
  {
    v8 |= -1LL << v12;
    goto LABEL_18;
  }
LABEL_17:
  if ( v8 )
  {
LABEL_18:
    if ( v4 == 16 )
      v5 = a3;
    v8 += (unsigned __int64)v5;
    if ( (a2 & 0x80) != 0 )
      v8 = *(_QWORD *)v8;
  }
  *a4 = v8;
  return result;
}
