__int64 *__fastcall _gettext_extract_plural(int8x16_t *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // x22
  __int64 v7; // x0
  unsigned __int8 v9; // w3
  __int64 v10; // x19
  __int64 v11; // x1
  int v12; // t1
  __int64 v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  unsigned __int64 v16; // x4
  void *v17; // x5
  unsigned __int64 v18; // x6
  double v19; // d0
  double v20; // d1
  double v21; // d2
  double v22; // d3
  double v23; // d4
  double v24; // d5
  double v25; // d6
  double v26; // d7
  __int64 v27; // x1
  __int64 v29; // [xsp+0h] [xbp-20h] BYREF
  _QWORD v30[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( !a1 )
    goto LABEL_14;
  v6 = strstr(a1, (int8x16_t *)"plural=");
  v7 = strstr(a1, (int8x16_t *)"nplurals=");
  if ( !v6 || v7 == 0 )
    goto LABEL_14;
  v9 = *(_BYTE *)(v7 + 9);
  v10 = v7 + 9;
  if ( !v9 )
    goto LABEL_14;
  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 72);
  while ( (*(_WORD *)(v11 + 2LL * v9) & 0x2000) != 0 )
  {
    v12 = *(unsigned __int8 *)++v10;
    v9 = v12;
    if ( !v12 )
      goto LABEL_14;
  }
  if ( (unsigned __int8)(v9 - 48) > 9u
    || (v13 = _isoc23_strtoumax(v10, &v29, 10), v27 = v29, v29 == v10)
    || (*a3 = v13,
        v30[0] = v6 + 7,
        (unsigned int)_gettextparse((__int64)v30, v27, v19, v20, v21, v22, v23, v24, v25, v26, v14, v15, v16, v17, v18)) )
  {
LABEL_14:
    *a2 = &_gettext_germanic_plural;
    *a3 = 2;
  }
  else
  {
    *a2 = v30[1];
  }
  return &_stack_chk_guard;
}
