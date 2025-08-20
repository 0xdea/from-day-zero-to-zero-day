__int64 __fastcall dl_vsym(
        __int64 a1,
        const char *a2,
        const char *a3,
        unsigned __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  unsigned int v13; // w6
  unsigned __int64 v15; // x5
  unsigned int v16; // w3
  unsigned __int8 *v17; // x4
  __int64 v18; // x6
  unsigned int v19; // t1
  const char *v21; // [xsp+0h] [xbp-20h] BYREF
  int v22; // [xsp+8h] [xbp-18h]
  int v23; // [xsp+Ch] [xbp-14h]
  __int64 v24; // [xsp+10h] [xbp-10h]

  v13 = *(unsigned __int8 *)a3;
  v21 = a3;
  v23 = 1;
  LODWORD(v15) = 0;
  if ( v13 )
  {
    if ( a3[1] )
    {
      v15 = *((unsigned __int8 *)a3 + 1) + 16LL * v13;
      if ( a3[2] )
      {
        v15 = *((unsigned __int8 *)a3 + 2) + 16 * v15;
        if ( a3[3] )
        {
          v15 = *((unsigned __int8 *)a3 + 3) + 16 * v15;
          if ( a3[4] )
          {
            v16 = *((unsigned __int8 *)a3 + 5);
            v15 = *((unsigned __int8 *)a3 + 4) + 16 * v15;
            v17 = (unsigned __int8 *)(a3 + 5);
            if ( v16 )
            {
              do
              {
                v18 = v16;
                v19 = *++v17;
                v16 = v19;
                v15 = (v18 + 16 * v15) ^ (((v18 + 16 * v15) & 0xF0000000) >> 24);
              }
              while ( v19 );
              LODWORD(v15) = v15 & 0xFFFFFFF;
            }
          }
        }
      }
    }
    else
    {
      LODWORD(v15) = v13;
    }
  }
  v22 = v15;
  v24 = 0;
  return do_sym(a1, a2, a4, &v21, 0, a5, a6, a7, a8, a9, a10, a11, a12);
}
