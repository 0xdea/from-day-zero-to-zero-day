char *__fastcall _memmove_thunderx2(char *result, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x14
  char *v5; // x5
  __int64 v6; // x14
  __int128 v7; // q3
  char *v8; // x4
  unsigned __int64 v9; // x2
  __int128 v10; // q0
  __int128 v11; // q1
  char *v12; // x4
  __int128 v13; // q2
  __int128 v14; // q3
  char *v15; // x5
  bool v16; // cc
  unsigned __int64 i; // x2
  __int128 v18; // q4
  __int128 v19; // q5
  __int128 v20; // q6
  __int128 v21; // q7

  if ( a3 <= 0x10 )
    JUMPOUT(0x40F2C0);
  v3 = result - a2;
  if ( a3 <= 0x60 || v3 >= a3 )
    return (char *)_memcpy_thunderx2();
  if ( v3 )
  {
    v5 = &result[a3];
    v6 = (unsigned __int64)&a2[a3] & 0xF;
    v7 = *(_OWORD *)&a2[a3 - 16];
    v8 = &a2[a3 - v6];
    v9 = a3 - v6;
    v10 = *((_OWORD *)v8 - 2);
    v11 = *((_OWORD *)v8 - 1);
    *((_OWORD *)v5 - 1) = v7;
    v13 = *((_OWORD *)v8 - 4);
    v14 = *((_OWORD *)v8 - 3);
    v12 = v8 - 64;
    v15 = &v5[-v6];
    v16 = v9 > 0x80;
    for ( i = v9 - 128; v16; v12 -= 64 )
    {
      v16 = i > 0x40;
      i -= 64LL;
      *((_OWORD *)v15 - 2) = v10;
      *((_OWORD *)v15 - 1) = v11;
      v10 = *((_OWORD *)v12 - 2);
      v11 = *((_OWORD *)v12 - 1);
      *((_OWORD *)v15 - 4) = v13;
      *((_OWORD *)v15 - 3) = v14;
      v15 -= 64;
      v13 = *((_OWORD *)v12 - 4);
      v14 = *((_OWORD *)v12 - 3);
    }
    v18 = *((_OWORD *)a2 + 2);
    v19 = *((_OWORD *)a2 + 3);
    v20 = *(_OWORD *)a2;
    v21 = *((_OWORD *)a2 + 1);
    *((_OWORD *)v15 - 2) = v10;
    *((_OWORD *)v15 - 1) = v11;
    *((_OWORD *)v15 - 4) = v13;
    *((_OWORD *)v15 - 3) = v14;
    *((_OWORD *)result + 2) = v18;
    *((_OWORD *)result + 3) = v19;
    *(_OWORD *)result = v20;
    *((_OWORD *)result + 1) = v21;
  }
  return result;
}
