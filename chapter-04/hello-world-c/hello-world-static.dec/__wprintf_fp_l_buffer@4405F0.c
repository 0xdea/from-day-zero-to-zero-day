__int64 *__fastcall _wprintf_fp_l_buffer(__int64 a1, __int64 *a2, __int64 a3, double **a4)
{
  __int16 v6; // w5
  __int64 v7; // x2
  int v8; // w0
  __int64 v9; // x9
  double *v10; // x5
  __int64 v12; // x0
  int v13; // w2
  _QWORD v14[4]; // [xsp+8h] [xbp-88h] BYREF
  int v15; // [xsp+28h] [xbp-68h]
  int v16; // [xsp+30h] [xbp-60h]
  int v17; // [xsp+34h] [xbp-5Ch]
  __int64 v18; // [xsp+38h] [xbp-58h]
  __int64 v19; // [xsp+40h] [xbp-50h]
  _BYTE v20[64]; // [xsp+48h] [xbp-48h] BYREF
  __int64 v21; // [xsp+88h] [xbp-8h] BYREF

  v6 = *(_WORD *)(a3 + 12);
  if ( (v6 & 0x100) != 0 )
  {
    v7 = a2[4];
    v8 = *(_DWORD *)(v7 + 400);
    v16 = *(_DWORD *)(v7 + 408);
    v17 = v8;
    if ( !v8 )
      v17 = *(_DWORD *)(a2[1] + 80);
  }
  else
  {
    v12 = a2[1];
    v13 = *(_DWORD *)(v12 + 80);
    v16 = *(_DWORD *)(v12 + 88);
    v17 = v13;
  }
  v9 = 0;
  if ( (v6 & 0x800) != 0 )
    v9 = *a2;
  v10 = *a4;
  v14[0] = v20;
  v14[1] = v20;
  v14[2] = &v21;
  v14[3] = 0;
  v15 = 9;
  v18 = a1;
  v19 = v9;
  _printf_fp_buffer_1_isra_0((unsigned __int64)v14, (__int64)a2, 0x2Cu, 0x2Eu, a3, v10);
  if ( v15 )
    _printf_buffer_flush(v14);
  else
    *(_DWORD *)(v18 + 32) = 0;
  return &_stack_chk_guard;
}
