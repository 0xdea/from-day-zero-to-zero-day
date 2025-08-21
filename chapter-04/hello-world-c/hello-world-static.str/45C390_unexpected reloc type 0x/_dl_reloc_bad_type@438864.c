void __fastcall __noreturn dl_reloc_bad_type(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // x19
  __int64 v5; // x0
  _BYTE *v6; // x4
  const char *v7; // x1
  char v8; // w5
  char v9; // w7
  char v10; // w6
  char v11; // w3
  char v12; // w2
  char v13; // w0
  char v14[40]; // [xsp+38h] [xbp+38h] BYREF

  v3 = a2;
  v5 = stpcpy(v14, &msg_0[38 * a3]);
  v6 = (_BYTE *)v5;
  if ( (unsigned int)v3 > 0xFF )
  {
    v9 = itoa_lower_digits[(v3 >> 24) & 0xF];
    v6 = (_BYTE *)(v5 + 6);
    v10 = itoa_lower_digits[(v3 >> 20) & 0xF];
    v11 = itoa_lower_digits[(v3 >> 16) & 0xF];
    v12 = itoa_lower_digits[(unsigned __int16)v3 >> 12];
    v13 = itoa_lower_digits[(v3 >> 8) & 0xF];
    *(v6 - 6) = itoa_lower_digits[(unsigned int)v3 >> 28];
    *(v6 - 5) = v9;
    *(v6 - 4) = v10;
    *(v6 - 3) = v11;
    *(v6 - 2) = v12;
    *(v6 - 1) = v13;
  }
  v6[2] = 0;
  v7 = *(const char **)(a1 + 8);
  v8 = itoa_lower_digits[v3 & 0xF];
  *v6 = itoa_lower_digits[(unsigned __int8)v3 >> 4];
  v6[1] = v8;
  dl_signal_error(0, v7, 0, v14);
}
