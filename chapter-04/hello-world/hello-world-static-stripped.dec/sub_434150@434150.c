_QWORD *__fastcall sub_434150(_QWORD *result, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // x6
  unsigned int *v4; // x3
  __int64 v5; // x5
  unsigned int v6; // w6
  int v7; // w5
  int *v8; // x3
  char *v9; // x6
  unsigned int v10; // w2
  char *v11; // x7
  unsigned int v12; // w8
  unsigned __int64 v13; // x4

  if ( a3[6] == 8 )
  {
    v3 = a3[5];
    if ( v3 > 0xC )
    {
      v4 = (unsigned int *)(a3[2] + *result);
      v5 = 12LL - (_QWORD)v4;
      while ( *v4 != 4 || v4[2] != 5 || v4[3] != 5590599 )
      {
        v4 = (unsigned int *)((char *)v4 + ((((*v4 + 19LL) & 0xFFFFFFFFFFFFFFF8LL) + v4[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL));
        if ( (unsigned __int64)v4 + v5 >= v3 )
          return result;
      }
      v6 = v4[1];
      if ( v6 > 7 )
      {
        v7 = v4[1] & 7;
        if ( (v6 & 7) == 0 )
        {
          v8 = (int *)(v4 + 4);
          v9 = (char *)v8 + v6;
          do
          {
            v10 = v7;
            v11 = (char *)(v8 + 2);
            v7 = *v8;
            v12 = v8[1];
            if ( v10 > *v8 )
              break;
            v13 = (v12 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v9 < &v11[v12] || (byte_496824 & 1) == 0 )
              break;
            if ( v7 == -1073741824 )
            {
              if ( v12 == 4 && (v8[2] & 1) != 0 )
                return (_QWORD *)sub_43A9A0();
              return result;
            }
            v8 = (int *)&v11[v13];
          }
          while ( v9 - &v11[v13] > 7 );
        }
      }
    }
  }
  return result;
}
