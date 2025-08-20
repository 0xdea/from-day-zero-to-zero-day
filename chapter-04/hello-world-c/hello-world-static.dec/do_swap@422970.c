__int64 *__fastcall do_swap(__int128 *a1, __int128 *a2, unsigned __int64 a3, int a4)
{
  int v4; // w3
  unsigned __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x3
  __int128 *v9; // x3
  unsigned __int64 v10; // x7
  __int128 v11; // q2
  __int128 v12; // q3
  unsigned __int64 v13; // x6
  char v14; // w3
  __int128 v15; // [xsp+18h] [xbp-18h]

  if ( a4 )
  {
    if ( a4 == 1 )
    {
      do
      {
        a3 -= 4LL;
        v4 = *(_DWORD *)((char *)a1 + a3);
        *(_DWORD *)((char *)a1 + a3) = *(_DWORD *)((char *)a2 + a3);
        *(_DWORD *)((char *)a2 + a3) = v4;
      }
      while ( a3 );
    }
    else
    {
      if ( a3 > 0x20 )
      {
        v9 = a2;
        v10 = (a3 - 33) >> 5;
        do
        {
          v11 = *v9;
          v12 = v9[1];
          v15 = a1[1];
          *v9 = *a1;
          v9[1] = v15;
          v9 += 2;
          *a1 = v11;
          a1[1] = v12;
          a1 += 2;
        }
        while ( &a2[2 * v10 + 2] != v9 );
        v13 = ((a3 - 33) & 0xFFFFFFFFFFFFFFE0LL) + 32;
        a3 = a3 - 32 - 32 * v10;
        a2 = (__int128 *)((char *)a2 + v13);
      }
      while ( a3 )
      {
        --a3;
        v14 = *((_BYTE *)a2 + a3);
        *((_BYTE *)a2 + a3) = *((_BYTE *)a1 + a3);
        *((_BYTE *)a1 + a3) = v14;
      }
    }
  }
  else
  {
    do
    {
      v6 = a3 - 8;
      v7 = *(_QWORD *)((char *)a1 + v6);
      *(_QWORD *)((char *)a1 + v6) = *(_QWORD *)((char *)a2 + v6);
      *(_QWORD *)((char *)a2 + v6) = v7;
      if ( !v6 )
        break;
      a3 = v6 - 8;
      v8 = *(_QWORD *)((char *)a1 + a3);
      *(_QWORD *)((char *)a1 + a3) = *(_QWORD *)((char *)a2 + a3);
      *(_QWORD *)((char *)a2 + a3) = v8;
    }
    while ( a3 );
  }
  return &_stack_chk_guard;
}
