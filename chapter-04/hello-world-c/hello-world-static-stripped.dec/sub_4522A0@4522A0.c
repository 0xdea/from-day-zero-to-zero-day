char *__fastcall sub_4522A0(char *result, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // x19
  __int64 v6; // x21
  char *v7; // x24
  __int64 v9; // x1
  unsigned __int64 *v10; // x3
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  unsigned __int64 *v16; // x3

  if ( a4 > 0 )
  {
    v4 = 0;
    v6 = 8LL * a4;
    v7 = result;
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(a3 + v4);
        v12 = (unsigned __int8)sub_4519C4((unsigned __int8 *)(v11 + 4 - *(int *)(v11 + 4)));
        if ( (_DWORD)v12 == 255 )
          goto LABEL_12;
        v15 = v12 & 0x70;
        if ( (_DWORD)v15 != 32 )
          break;
        v16 = (unsigned __int64 *)(a2 + v4);
        v4 += 8;
        result = sub_450F40(v12, *((_QWORD *)v7 + 1), (char *)(v11 + 8), v16);
        if ( v6 == v4 )
          return result;
      }
      if ( (unsigned int)v15 <= 0x20 )
        goto LABEL_12;
      if ( (_DWORD)v15 != 48 )
      {
        if ( (_DWORD)v15 != 80 )
          sub_4002C0(v12, v13, v14, v15);
LABEL_12:
        v9 = 0;
        goto LABEL_6;
      }
      v9 = *((_QWORD *)v7 + 2);
LABEL_6:
      v10 = (unsigned __int64 *)(a2 + v4);
      v4 += 8;
      result = sub_450F40(v12, v9, (char *)(v11 + 8), v10);
    }
    while ( v6 != v4 );
  }
  return result;
}
