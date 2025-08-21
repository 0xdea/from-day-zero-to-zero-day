unsigned __int64 *__fastcall _memset_emag(unsigned __int64 *result, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned int v3; // w1
  unsigned __int64 v4; // x1
  char *v5; // x4
  _QWORD *v6; // x3
  unsigned __int64 v7; // x2
  bool v8; // cf

  v3 = (unsigned __int16)(a2 | (a2 << 8)) | ((unsigned __int16)(a2 | (a2 << 8)) << 16);
  v4 = v3 | ((unsigned __int64)v3 << 32);
  v5 = (char *)result + a3;
  if ( a3 > 0x60 )
  {
    *result = v4;
    result[1] = v4;
    v6 = (_QWORD *)((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL);
    v7 = (unsigned __int64)&v5[-((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) - 81];
    do
    {
      v6[2] = v4;
      v6[3] = v4;
      v6[4] = v4;
      v6[5] = v4;
      v6[6] = v4;
      v6[7] = v4;
      v6[8] = v4;
      v6[9] = v4;
      v6 += 8;
      v8 = v7 >= 0x40;
      v7 -= 64LL;
    }
    while ( v8 );
    if ( (v7 & 0x20) != 0 )
    {
      v6[2] = v4;
      v6[3] = v4;
      v6[4] = v4;
      v6[5] = v4;
    }
    *((_QWORD *)v5 - 4) = v4;
    *((_QWORD *)v5 - 3) = v4;
    *((_QWORD *)v5 - 2) = v4;
    *((_QWORD *)v5 - 1) = v4;
  }
  else if ( a3 >= 0x10 )
  {
    *result = v4;
    result[1] = v4;
    if ( (a3 & 0x40) != 0 )
    {
      result[2] = v4;
      result[3] = v4;
      result[4] = v4;
      result[5] = v4;
      result[6] = v4;
      result[7] = v4;
      *((_QWORD *)v5 - 4) = v4;
      *((_QWORD *)v5 - 3) = v4;
      *((_QWORD *)v5 - 2) = v4;
      *((_QWORD *)v5 - 1) = v4;
    }
    else
    {
      *((_QWORD *)v5 - 2) = v4;
      *((_QWORD *)v5 - 1) = v4;
      if ( (a3 & 0x20) != 0 )
      {
        result[2] = v4;
        result[3] = v4;
        *((_QWORD *)v5 - 4) = v4;
        *((_QWORD *)v5 - 3) = v4;
      }
    }
  }
  else if ( (a3 & 8) != 0 )
  {
    *result = v4;
    *((_QWORD *)v5 - 1) = v4;
  }
  else if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)result = v4;
    *((_DWORD *)v5 - 1) = v4;
  }
  else if ( a3 )
  {
    *(_BYTE *)result = v4;
    if ( (a3 & 2) != 0 )
      *((_WORD *)v5 - 1) = v4;
  }
  return result;
}
