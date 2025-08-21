void __fastcall __noreturn sub_438864(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // x19
  __int64 v5; // x0
  long double v6; // q0
  _BYTE *v7; // x4
  __int64 v8; // x1
  char v9; // w5
  char v10; // w7
  char v11; // w6
  char v12; // w3
  char v13; // w2
  char v14; // w0
  char v15[40]; // [xsp+38h] [xbp+38h] BYREF

  v3 = a2;
  v5 = sub_42EFC0(v15, &aUnexpectedRelo_0[38 * a3]);
  v7 = (_BYTE *)v5;
  if ( (unsigned int)v3 > 0xFF )
  {
    v10 = a0123456789abcd[(v3 >> 24) & 0xF];
    v7 = (_BYTE *)(v5 + 6);
    v11 = a0123456789abcd[(v3 >> 20) & 0xF];
    v12 = a0123456789abcd[(v3 >> 16) & 0xF];
    v13 = a0123456789abcd[(unsigned __int16)v3 >> 12];
    v14 = a0123456789abcd[(v3 >> 8) & 0xF];
    *(v7 - 6) = a0123456789abcd[(unsigned int)v3 >> 28];
    *(v7 - 5) = v10;
    *(v7 - 4) = v11;
    *(v7 - 3) = v12;
    *(v7 - 2) = v13;
    *(v7 - 1) = v14;
  }
  v7[2] = 0;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = a0123456789abcd[v3 & 0xF];
  *v7 = a0123456789abcd[(unsigned __int8)v3 >> 4];
  v7[1] = v9;
  sub_432250(0, v8, v6, 0, v15);
}
