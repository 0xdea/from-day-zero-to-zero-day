char *__fastcall read_encoded_value_with_base_0(char a1, __int64 a2, char *a3, unsigned __int64 *a4)
{
  __int64 v5; // x0
  char *result; // x0
  unsigned __int64 v7; // x4
  int v8; // w7
  char v9; // t1
  unsigned __int64 v10; // x6
  unsigned __int64 v11; // x2
  unsigned int v12; // w7
  char v13; // w8
  char v14; // t1
  unsigned __int64 v15; // x6

  if ( a1 == 80 )
  {
    v11 = (unsigned __int64)(a3 + 7);
    result = (char *)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    v7 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    goto LABEL_21;
  }
  v5 = a1 & 0xF;
  if ( (_DWORD)v5 == 4 )
    goto LABEL_23;
  if ( (unsigned int)v5 <= 4 )
  {
    if ( (_DWORD)v5 == 2 )
    {
      result = a3 + 2;
      v7 = *(unsigned __int16 *)a3;
      goto LABEL_9;
    }
    if ( (_DWORD)v5 == 3 )
    {
      result = a3 + 4;
      v7 = *(unsigned int *)a3;
      goto LABEL_9;
    }
    if ( (_DWORD)v5 )
    {
      result = a3;
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = *result++;
        v10 = (unsigned __int64)(v9 & 0x7F) << v8;
        v8 += 7;
        v7 |= v10;
      }
      while ( v9 < 0 );
      goto LABEL_9;
    }
LABEL_23:
    result = a3 + 8;
    v7 = *(_QWORD *)a3;
    goto LABEL_9;
  }
  if ( (_DWORD)v5 == 11 )
  {
    result = a3 + 4;
    v7 = *(int *)a3;
    goto LABEL_9;
  }
  if ( (unsigned int)v5 > 0xB )
  {
    if ( (_DWORD)v5 != 12 )
      goto LABEL_32;
    goto LABEL_23;
  }
  if ( (_DWORD)v5 != 9 )
  {
    if ( (_DWORD)v5 == 10 )
    {
      result = a3 + 2;
      v7 = *(__int16 *)a3;
      goto LABEL_9;
    }
LABEL_32:
    abort(v5, a2, (__int64)a3, (__int64)a4);
  }
  result = a3;
  v7 = 0;
  v12 = 0;
  do
  {
    v14 = *result++;
    v13 = v14;
    v15 = (unsigned __int64)(v14 & 0x7F) << v12;
    v12 += 7;
    v7 |= v15;
  }
  while ( v14 < 0 );
  if ( v12 > 0x3F || (v13 & 0x40) == 0 )
  {
LABEL_9:
    if ( !v7 )
      goto LABEL_21;
    goto LABEL_10;
  }
  v7 |= -1LL << v12;
LABEL_10:
  if ( (a1 & 0x70) == 0x10 )
    a2 = (__int64)a3;
  v7 += a2;
  if ( a1 < 0 )
  {
    *a4 = *(_QWORD *)v7;
    return result;
  }
LABEL_21:
  *a4 = v7;
  return result;
}
