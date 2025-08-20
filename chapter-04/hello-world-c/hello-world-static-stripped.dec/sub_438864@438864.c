void __fastcall __noreturn sub_438864(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // x19
  char *v5; // x0
  char *v6; // x4
  const char *v7; // x1
  char v8; // w5
  char v9; // w7
  char v10; // w6
  char v11; // w3
  char v12; // w2
  char v13; // w0
  _QWORD v14[5]; // [xsp+38h] [xbp+38h] BYREF

  v3 = a2;
  v5 = sub_42EFC0(v14, (unsigned __int64)&aUnexpectedRelo_0[38 * a3]);
  v6 = v5;
  if ( (unsigned int)v3 > 0xFF )
  {
    v9 = a0123456789abcd[(v3 >> 24) & 0xF];
    v6 = v5 + 6;
    v10 = a0123456789abcd[(v3 >> 20) & 0xF];
    v11 = a0123456789abcd[(v3 >> 16) & 0xF];
    v12 = a0123456789abcd[(unsigned __int16)v3 >> 12];
    v13 = a0123456789abcd[(v3 >> 8) & 0xF];
    *(v6 - 6) = a0123456789abcd[(unsigned int)v3 >> 28];
    *(v6 - 5) = v9;
    *(v6 - 4) = v10;
    *(v6 - 3) = v11;
    *(v6 - 2) = v12;
    *(v6 - 1) = v13;
  }
  v6[2] = 0;
  v7 = *(const char **)(a1 + 8);
  v8 = a0123456789abcd[v3 & 0xF];
  *v6 = a0123456789abcd[(unsigned __int8)v3 >> 4];
  v6[1] = v8;
  sub_432250(0, v7, 0, (const char *)v14);
}
