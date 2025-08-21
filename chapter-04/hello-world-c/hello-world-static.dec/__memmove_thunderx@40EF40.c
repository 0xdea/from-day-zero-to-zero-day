char *__fastcall _memmove_thunderx(char *result, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x14
  bool v4; // cf
  char *v5; // x5
  __int64 v6; // x14
  __int64 v7; // x12
  __int64 v8; // x13
  char *v9; // x4
  unsigned __int64 v10; // x2
  __int64 v11; // x6
  __int64 v12; // x7
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x10
  __int64 v16; // x11
  char *v17; // x4
  __int64 v18; // x12
  __int64 v19; // x13
  char *v20; // x5
  bool v21; // zf
  unsigned __int64 i; // x2
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x6
  __int64 v26; // x7
  __int64 v27; // x8
  __int64 v28; // x9
  __int64 v29; // x10
  __int64 v30; // x11

  v3 = result - a2;
  v4 = a3 <= 0x60 || v3 >= a3;
  if ( v4 )
    return (char *)_memcpy_thunderx();
  if ( v3 )
  {
    v5 = &result[a3];
    v6 = (unsigned __int64)&result[a3] & 0xF;
    v7 = *(_QWORD *)&a2[a3 - 16];
    v8 = *(_QWORD *)&a2[a3 - 8];
    v9 = &a2[a3 - v6];
    v10 = a3 - v6;
    v11 = *((_QWORD *)v9 - 2);
    v12 = *((_QWORD *)v9 - 1);
    *((_QWORD *)v5 - 2) = v7;
    *((_QWORD *)v5 - 1) = v8;
    v13 = *((_QWORD *)v9 - 4);
    v14 = *((_QWORD *)v9 - 3);
    v15 = *((_QWORD *)v9 - 6);
    v16 = *((_QWORD *)v9 - 5);
    v18 = *((_QWORD *)v9 - 8);
    v19 = *((_QWORD *)v9 - 7);
    v17 = v9 - 64;
    v20 = &v5[-v6];
    v4 = v10 >= 0x80;
    v21 = v10 == 128;
    for ( i = v10 - 128; !v21 && v4; i -= 64LL )
    {
      *((_QWORD *)v20 - 2) = v11;
      *((_QWORD *)v20 - 1) = v12;
      v11 = *((_QWORD *)v17 - 2);
      v12 = *((_QWORD *)v17 - 1);
      *((_QWORD *)v20 - 4) = v13;
      *((_QWORD *)v20 - 3) = v14;
      v13 = *((_QWORD *)v17 - 4);
      v14 = *((_QWORD *)v17 - 3);
      *((_QWORD *)v20 - 6) = v15;
      *((_QWORD *)v20 - 5) = v16;
      v15 = *((_QWORD *)v17 - 6);
      v16 = *((_QWORD *)v17 - 5);
      *((_QWORD *)v20 - 8) = v18;
      *((_QWORD *)v20 - 7) = v19;
      v20 -= 64;
      v18 = *((_QWORD *)v17 - 8);
      v19 = *((_QWORD *)v17 - 7);
      v17 -= 64;
      v4 = i >= 0x40;
      v21 = i == 64;
    }
    v23 = *((_QWORD *)a2 + 6);
    v24 = *((_QWORD *)a2 + 7);
    *((_QWORD *)v20 - 2) = v11;
    *((_QWORD *)v20 - 1) = v12;
    v25 = *((_QWORD *)a2 + 4);
    v26 = *((_QWORD *)a2 + 5);
    *((_QWORD *)v20 - 4) = v13;
    *((_QWORD *)v20 - 3) = v14;
    v27 = *((_QWORD *)a2 + 2);
    v28 = *((_QWORD *)a2 + 3);
    *((_QWORD *)v20 - 6) = v15;
    *((_QWORD *)v20 - 5) = v16;
    v29 = *(_QWORD *)a2;
    v30 = *((_QWORD *)a2 + 1);
    *((_QWORD *)v20 - 8) = v18;
    *((_QWORD *)v20 - 7) = v19;
    *((_QWORD *)result + 6) = v23;
    *((_QWORD *)result + 7) = v24;
    *((_QWORD *)result + 4) = v25;
    *((_QWORD *)result + 5) = v26;
    *((_QWORD *)result + 2) = v27;
    *((_QWORD *)result + 3) = v28;
    *(_QWORD *)result = v29;
    *((_QWORD *)result + 1) = v30;
  }
  return result;
}
