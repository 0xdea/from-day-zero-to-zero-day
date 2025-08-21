_DWORD *__fastcall sub_421840(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  unsigned __int8 *v17; // x3
  unsigned __int8 *v18; // x20
  __int64 v19; // x5
  __int64 v20; // x0
  void *v21; // x4
  __int64 v22; // x2
  _DWORD *result; // x0
  _BYTE *v24; // x3
  unsigned __int8 *v25; // x1
  __int64 v26; // x7

  if ( !a2 )
  {
    result = (_DWORD *)sub_40B890(4u, a8, a9, a10, a11, a12, a13, a14, a15, 0, a3, a4, a5, a6, a7);
    if ( result )
      goto LABEL_19;
    return 0;
  }
  v17 = a1;
  v18 = &a1[a2];
  v19 = 1;
  v20 = 0;
  do
  {
    v21 = (void *)((unsigned int)*v17++ - 48);
    v22 = (unsigned __int16)word_45E6A0[*(v17 - 1)];
    if ( (v22 & 8) != 0 )
    {
      ++v20;
      if ( (unsigned int)v21 >= 0xA )
        v19 = 0;
      else
        v19 = (unsigned int)v19;
    }
  }
  while ( v17 != v18 );
  if ( !(_DWORD)v19 )
  {
    result = (_DWORD *)sub_40B890(
                         v20 + 1,
                         a8,
                         a9,
                         a10,
                         a11,
                         a12,
                         a13,
                         a14,
                         a15,
                         (__int64)off_48FA10,
                         v22,
                         (__int64)v17,
                         v21,
                         (void *)v19,
                         word_45E6A0);
    v24 = result;
    if ( result )
    {
LABEL_10:
      v25 = a1;
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = *v25;
          if ( (word_45E6A0[v26] & 0x400) == 0 )
            break;
          *v24++ = dword_45D7A0[v26];
LABEL_12:
          if ( v18 == ++v25 )
            goto LABEL_16;
        }
        if ( (unsigned int)(v26 - 48) > 9 )
          goto LABEL_12;
        *v24 = v26;
        ++v25;
        ++v24;
        if ( v18 == v25 )
          goto LABEL_16;
      }
    }
    return 0;
  }
  result = (_DWORD *)sub_40B890(
                       v20 + 4,
                       a8,
                       a9,
                       a10,
                       a11,
                       a12,
                       a13,
                       a14,
                       a15,
                       (__int64)off_48FA10,
                       v22,
                       (__int64)v17,
                       v21,
                       (void *)v19,
                       word_45E6A0);
  if ( !result )
    return 0;
LABEL_19:
  *result = 7304041;
  v24 = (char *)result + 3;
  if ( a2 )
  {
    v18 = &a1[a2];
    goto LABEL_10;
  }
LABEL_16:
  *v24 = 0;
  return result;
}
