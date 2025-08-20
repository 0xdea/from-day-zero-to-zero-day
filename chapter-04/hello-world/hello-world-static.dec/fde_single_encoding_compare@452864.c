__int64 __fastcall fde_single_encoding_compare(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // w19
  __int64 v5; // x3
  __int64 v6; // x21
  __int64 result; // x0
  unsigned __int64 v8; // [xsp+30h] [xbp+30h] BYREF
  unsigned __int64 v9; // [xsp+38h] [xbp+38h] BYREF

  v4 = a1[4] >> 3;
  if ( v4 == 255 )
    goto LABEL_12;
  v5 = (a1[4] >> 3) & 0x70LL;
  if ( (_DWORD)v5 == 32 )
  {
    v6 = a1[1];
    goto LABEL_6;
  }
  if ( (unsigned int)v5 <= 0x20 )
  {
LABEL_12:
    v6 = 0;
    goto LABEL_6;
  }
  if ( (_DWORD)v5 == 48 )
  {
    v6 = a1[2];
  }
  else
  {
    v6 = 0;
    if ( (_DWORD)v5 != 80 )
      abort((__int64)a1, a2, a3, v5);
  }
LABEL_6:
  read_encoded_value_with_base(v4, v6, (char *)(a2 + 8), &v8);
  read_encoded_value_with_base(v4, v6, (char *)(a3 + 8), &v9);
  if ( v8 >= v9 )
    LODWORD(result) = 0;
  else
    LODWORD(result) = -1;
  if ( v8 > v9 )
    return 1;
  else
    return (unsigned int)result;
}
