void __fastcall sub_40F614(
        double a1,
        double a2,
        int8x16_t a3,
        int8x16_t a4,
        int8x16_t a5,
        int8x16_t a6,
        int8x16_t a7,
        __int64 a8,
        _OWORD *_X1,
        __int64 a10,
        int8x16_t *a11)
{
  int8x16_t v11; // q0
  int8x16_t v12; // q1
  int8x16_t v13; // q7
  int8x16_t *v14; // x3
  long double *v20; // x1
  int8x16_t v21; // q2
  int8x16_t v22; // q3
  bool v23; // cc

  v11 = vextq_s8(a3, a4, 0xAu);
  v12 = vextq_s8(a4, a5, 0xAu);
  v13 = vextq_s8(a5, a6, 0xAu);
  do
  {
    *a11 = v11;
    a11[1] = v12;
    v14 = a11 + 2;
    __asm { PRFM            #1, [X1,#0x280] }
    v21 = *(int8x16_t *)_X1;
    v22 = *((int8x16_t *)_X1 + 1);
    v20 = (long double *)(_X1 + 2);
    *v14 = v13;
    v14[1] = vextq_s8(a6, a7, 0xAu);
    a11 = v14 + 2;
    v11 = vextq_s8(a7, v21, 0xAu);
    v12 = vextq_s8(v21, v22, 0xAu);
    a6 = *(int8x16_t *)v20;
    a7 = (int8x16_t)v20[1];
    _X1 = v20 + 2;
    v13 = vextq_s8(v22, a6, 0xAu);
    v23 = a10 < 64;
    a10 -= 64;
  }
  while ( !v23 );
  JUMPOUT(0x40F488);
}
