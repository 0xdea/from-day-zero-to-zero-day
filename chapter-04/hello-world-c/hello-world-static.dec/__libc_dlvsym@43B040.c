__int64 __fastcall _libc_dlvsym(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // x4
  unsigned __int64 v4; // x3
  __int64 v5; // x5
  int v6; // w0
  __int64 v7; // x1
  __int64 v8; // x0
  unsigned int v10; // w0
  __int64 v11; // x1
  unsigned int v12; // t1
  _QWORD v13[2]; // [xsp+0h] [xbp-40h] BYREF
  __int64 *v14; // [xsp+10h] [xbp-30h]
  __int64 v15; // [xsp+18h] [xbp-28h]
  unsigned __int8 *v16; // [xsp+20h] [xbp-20h]
  int v17; // [xsp+28h] [xbp-18h]
  int v18; // [xsp+2Ch] [xbp-14h]
  __int64 v19; // [xsp+30h] [xbp-10h]

  v3 = (__int64)&_stack_chk_guard;
  v4 = 0;
  v5 = *a3;
  v13[0] = a1;
  v13[1] = a2;
  v16 = a3;
  v18 = 1;
  if ( (_DWORD)v5 )
  {
    v4 = (unsigned int)v5;
    if ( a3[1] )
    {
      v3 = a3[2];
      v4 = a3[1] + 16LL * (unsigned int)v5;
      if ( a3[2] )
      {
        v4 = v3 + 16 * v4;
        if ( a3[3] )
        {
          v4 = a3[3] + 16 * v4;
          if ( a3[4] )
          {
            v10 = a3[5];
            v4 = a3[4] + 16 * v4;
            a3 += 5;
            if ( v10 )
            {
              do
              {
                v11 = v10;
                v12 = *++a3;
                v10 = v12;
                v4 = (v11 + 16 * v4) ^ (((v11 + 16 * v4) & 0xF0000000) >> 24);
              }
              while ( v12 );
              v4 &= 0xFFFFFFFu;
            }
          }
        }
      }
    }
  }
  v17 = v4;
  v19 = 0;
  v6 = dlerror_run((void (__fastcall *)(__int64))do_dlvsym, (__int64)v13, (__int64)a3, v4, v3, v5, 1, 0);
  v7 = 0;
  if ( !v6 )
  {
    v7 = v15;
    if ( v15 )
    {
      if ( *(unsigned __int16 *)(v15 + 6) == 65521 )
      {
        v8 = 0;
      }
      else
      {
        v8 = 0;
        if ( v14 )
          v8 = *v14;
      }
      return v8 + *(_QWORD *)(v15 + 8);
    }
  }
  return v7;
}
