__int64 *__fastcall _mpn_mul_n(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *v5; // x0
  _QWORD *v7; // x0
  _QWORD v8[2]; // [xsp+0h] [xbp-10020h] BYREF
  _BYTE v9[1008]; // [xsp+10h] [xbp-10010h] BYREF
  __int64 v10; // [xsp+400h] [xbp-FC20h]
  _BYTE v11[24]; // [xsp+10000h] [xbp-20h] BYREF

  if ( a2 == a3 )
  {
    if ( a4 <= 31 )
    {
      _mpn_impn_sqr_n_basecase((unsigned __int64)a1, a2, a4);
    }
    else
    {
      v7 = &v11[-((16 * a4) & 0xFFFFFFFFFFFF0000LL)];
      if ( v11 != (_BYTE *)v7 )
      {
        do
          v10 = 0;
        while ( v8 != v7 );
      }
      v8[0] = 0;
      if ( (unsigned __int16)(16 * a4) >= 0x400uLL )
        v10 = 0;
      _mpn_impn_sqr_n(a1, a2, a4, (unsigned __int64)v9);
    }
  }
  else if ( a4 <= 31 )
  {
    _mpn_impn_mul_n_basecase((unsigned __int64)a1, (__int64)a2, a3, a4);
  }
  else
  {
    v5 = &v11[-((16 * a4) & 0xFFFFFFFFFFFF0000LL)];
    if ( v11 != (_BYTE *)v5 )
    {
      do
        v10 = 0;
      while ( v8 != v5 );
    }
    v8[0] = 0;
    if ( (unsigned __int16)(16 * a4) >= 0x400uLL )
      v10 = 0;
    _mpn_impn_mul_n((unsigned __int64)a1, (__int64)a2, a3, a4, (unsigned __int64)v9);
  }
  return &_stack_chk_guard;
}
