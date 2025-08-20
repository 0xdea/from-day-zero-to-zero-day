__int64 __fastcall fde_single_encoding_extract(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // x0
  unsigned int v6; // w4
  __int64 v7; // x22
  __int64 *v8; // x21
  __int64 *v9; // x19
  unsigned __int64 *v10; // x20
  __int64 v11; // t1
  unsigned __int64 *v12; // x3

  result = (unsigned __int8)((unsigned int)a1[4] >> 3);
  if ( (_DWORD)result == 255 )
    goto LABEL_11;
  v6 = result & 0x70;
  if ( v6 == 32 )
  {
    v7 = a1[1];
    goto LABEL_6;
  }
  if ( v6 <= 0x20 )
  {
LABEL_11:
    v7 = 0;
    goto LABEL_6;
  }
  if ( v6 == 48 )
  {
    v7 = a1[2];
  }
  else
  {
    v7 = 0;
    if ( v6 != 80 )
      abort(result, a2, a3, a4);
  }
LABEL_6:
  if ( (int)a4 > 0 )
  {
    v8 = (__int64 *)(a3 + 8LL * (int)a4);
    v9 = (__int64 *)a3;
    v10 = (unsigned __int64 *)a2;
    while ( 1 )
    {
      v11 = *v9++;
      v12 = v10++;
      result = (__int64)read_encoded_value_with_base(result, v7, (char *)(v11 + 8), v12);
      if ( v9 == v8 )
        break;
      LOBYTE(result) = (unsigned int)a1[4] >> 3;
    }
  }
  return result;
}
