__int64 *__fastcall _printf_fp_l_buffer(unsigned __int64 a1, __int64 *a2, __int64 a3, double **a4)
{
  __int16 v5; // w20
  __int64 v9; // x0
  unsigned __int8 *v10; // x21
  unsigned __int8 *v11; // x25
  unsigned __int8 v12; // w0
  double *v13; // x24
  int v14; // w20
  bool v15; // cc
  __int64 v16; // x8
  __int64 v18; // x0
  _QWORD v19[4]; // [xsp+8h] [xbp-98h] BYREF
  int v20; // [xsp+28h] [xbp-78h]
  unsigned __int8 *v21; // [xsp+30h] [xbp-70h]
  unsigned __int8 *v22; // [xsp+38h] [xbp-68h]
  char v23; // [xsp+40h] [xbp-60h]
  unsigned __int8 v24; // [xsp+41h] [xbp-5Fh]
  unsigned __int64 v25; // [xsp+48h] [xbp-58h]
  __int64 v26; // [xsp+50h] [xbp-50h]
  _BYTE v27[64]; // [xsp+58h] [xbp-48h] BYREF
  __int64 v28; // [xsp+98h] [xbp-8h] BYREF

  v5 = *(_WORD *)(a3 + 12);
  if ( (v5 & 0x100) != 0 )
  {
    v9 = a2[4];
    v10 = *(unsigned __int8 **)(v9 + 72);
    v11 = *(unsigned __int8 **)(v9 + 80);
    v21 = v11;
    v22 = v10;
    if ( !*v10 )
    {
      v10 = *(unsigned __int8 **)(a2[1] + 56);
      v22 = v10;
    }
  }
  else
  {
    v18 = a2[1];
    v10 = *(unsigned __int8 **)(v18 + 56);
    v11 = *(unsigned __int8 **)(v18 + 64);
    v21 = v11;
    v22 = v10;
  }
  v12 = strlen(v11);
  v24 = v12;
  v13 = *a4;
  v14 = v5 & 0x800;
  if ( v10[1] )
    v15 = 1;
  else
    v15 = v12 > 1u;
  if ( v15 )
  {
    v23 = strlen(v10);
    v16 = 0;
    if ( !v14 )
      goto LABEL_10;
  }
  else
  {
    if ( !v14 )
    {
      _printf_fp_buffer_1_isra_0(a1, (__int64)a2, *v11, *v10, a3, v13);
      return &_stack_chk_guard;
    }
    v23 = strlen(v10);
  }
  v16 = *a2;
LABEL_10:
  v19[0] = v27;
  v19[1] = v27;
  v19[2] = &v28;
  v19[3] = 0;
  v20 = 8;
  v25 = a1;
  v26 = v16;
  _printf_fp_buffer_1_isra_0((unsigned __int64)v19, (__int64)a2, 0x2Cu, 0x2Eu, a3, v13);
  if ( v20 )
    _printf_buffer_flush_fp((__int64)v19);
  else
    *(_DWORD *)(v25 + 32) = 0;
  return &_stack_chk_guard;
}
