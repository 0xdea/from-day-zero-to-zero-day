__int64 __fastcall IO_wdo_write(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  __int64 v12; // x23
  __int64 v14; // x21
  _BYTE *v15; // x5
  char *v16; // x6
  _BYTE *i; // x28
  __int64 v18; // x1
  double v19; // d0
  int v20; // w0
  int v21; // w22
  double v22; // d1
  double v23; // d2
  double v24; // d3
  double v25; // d4
  double v26; // d5
  double v27; // d6
  double v28; // d7
  __int64 result; // x0
  _QWORD *v31; // x1
  int v32; // w4
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // [xsp+8h] [xbp-28h] BYREF
  _BYTE *v36; // [xsp+10h] [xbp-20h] BYREF
  _BYTE v37[16]; // [xsp+18h] [xbp-18h] BYREF
  __int64 v38; // [xsp+28h] [xbp-8h] BYREF

  v12 = *(_QWORD *)(a1 + 152);
  if ( a3 )
  {
    v14 = a3;
    v15 = *(_BYTE **)(a1 + 40);
    if ( *(_BYTE **)(a1 + 48) == v15 )
    {
      v34 = *(_QWORD *)(a1 + 32);
      if ( v15 != (_BYTE *)v34 )
      {
        if ( (unsigned int)IO_new_do_write(a1, v34, (__int64)&v15[-v34], a4, a5, a6, a7, a8, a9, a10, a11) == -1 )
          return 0xFFFFFFFFLL;
        v15 = *(_BYTE **)(a1 + 40);
      }
    }
    v16 = *(char **)(a1 + 64);
    if ( (unsigned __int64)(v16 - v15) <= 0xF )
      goto LABEL_14;
LABEL_4:
    for ( i = *(_BYTE **)(a1 + 32); ; i = v37 )
    {
      v18 = *(_QWORD *)(a1 + 160) + 88LL;
      v36 = v15;
      v19 = _libio_codecvt_out(v12, v18, a2, a2 + 4 * v14, &v35, v15, v16, &v36);
      v21 = v20;
      if ( (unsigned int)IO_new_do_write(a1, (__int64)i, v36 - i, v19, v22, v23, v24, v25, v26, v27, v28) == -1 )
        break;
      v14 -= (v35 - a2) >> 2;
      if ( v21 )
      {
        if ( v35 == a2 || v21 != 1 )
        {
          if ( v14 )
            result = 0xFFFFFFFFLL;
          else
            result = 0;
          goto LABEL_16;
        }
      }
      if ( !v14 )
        goto LABEL_15;
      v15 = *(_BYTE **)(a1 + 40);
      a2 = v35;
      v16 = *(char **)(a1 + 64);
      if ( (unsigned __int64)(v16 - v15) > 0xF )
        goto LABEL_4;
LABEL_14:
      v15 = v37;
      v16 = (char *)&v38;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_15:
  result = 0;
LABEL_16:
  v31 = *(_QWORD **)(a1 + 160);
  v32 = *(_DWORD *)a1;
  v33 = v31[6];
  *v31 = v33;
  v31[1] = v33;
  v31[2] = v33;
  v31[3] = v33;
  v31[4] = v33;
  if ( (v32 & 0x202) == 0 )
    v33 = v31[7];
  v31[5] = v33;
  return result;
}
