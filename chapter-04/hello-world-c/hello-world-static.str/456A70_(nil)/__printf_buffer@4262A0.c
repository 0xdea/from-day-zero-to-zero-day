__int64 *__fastcall _printf_buffer(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  unsigned __int64 StatusReg; // x6
  __int64 v7; // x22
  __int128 v9; // q1
  int v11; // w1
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x1
  _BYTE *v15; // x21
  int v16; // w4
  __int128 v17; // q1
  __int64 v19; // [xsp+0h] [xbp-560h]
  int v20; // [xsp+28h] [xbp-538h]
  unsigned __int64 v21; // [xsp+60h] [xbp-500h]
  int v23; // [xsp+88h] [xbp-4D8h]
  __int64 v24; // [xsp+A0h] [xbp-4C0h]
  __int64 v25; // [xsp+A8h] [xbp-4B8h]
  _BYTE *v27; // [xsp+B8h] [xbp-4A8h]
  int v28; // [xsp+D0h] [xbp-490h]
  _OWORD v29[2]; // [xsp+E0h] [xbp-480h] BYREF
  _BYTE *v30; // [xsp+100h] [xbp-460h]
  _OWORD v31[2]; // [xsp+138h] [xbp-428h] BYREF
  _BYTE v32[656]; // [xsp+170h] [xbp-3F0h] BYREF
  __int64 v33; // [xsp+400h] [xbp-160h]

  v33 = 0;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v7 = *a3;
  v24 = a3[1];
  v21 = StatusReg;
  v25 = a3[2];
  v28 = *(_DWORD *)(StatusReg + 40);
  v9 = *((_OWORD *)a3 + 1);
  v20 = *((_DWORD *)a3 + 6);
  v11 = *((_DWORD *)a3 + 7);
  v31[0] = *(_OWORD *)a3;
  v31[1] = v9;
  v23 = v11;
  v12 = strchrnul(a2, 37);
  v13 = v12 - a2;
  v14 = a2;
  v15 = (_BYTE *)v12;
  v27 = (_BYTE *)v12;
  v30 = (_BYTE *)v12;
  _printf_buffer_write(a1, v14, v13);
  if ( *(_DWORD *)(a1 + 32) && *v15 )
  {
    if ( _printf_function_table || _printf_modifier_table || _printf_va_arg_table )
      goto LABEL_8;
    v16 = (unsigned __int8)v15[1];
    v30 = v15 + 1;
    if ( (unsigned __int8)(v16 - 32) <= 0x5Au )
      __asm { BR              X1 }
    if ( v16 )
    {
LABEL_8:
      *a3 = v7;
      a3[1] = v24;
      a3[2] = v25;
      *((_DWORD *)a3 + 6) = v20;
      *((_DWORD *)a3 + 7) = v23;
      LODWORD(v19) = v28;
      v17 = *((_OWORD *)a3 + 1);
      v29[0] = *(_OWORD *)a3;
      v29[1] = v17;
      printf_positional(a1, a2, 0, (__int64)v29, (__int64)v31, 0, v27, (__int64)v32, v19, -1, 0, a4);
    }
    else
    {
      *(_DWORD *)(v21 + 40) = 22;
      *(_DWORD *)(a1 + 32) = 0;
    }
  }
  return &_stack_chk_guard;
}
