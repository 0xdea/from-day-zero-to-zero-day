__int64 *__fastcall _gettext_extract_plural(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // x22
  __int64 v7; // x0
  unsigned __int8 v9; // w3
  __int64 v10; // x19
  __int64 v11; // x1
  int v12; // t1
  __int64 v13; // x0
  __int64 v15; // [xsp+0h] [xbp-20h] BYREF
  _QWORD v16[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( !a1 )
    goto LABEL_14;
  v6 = strstr(a1, "plural=");
  v7 = strstr(a1, "nplurals=");
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
    || (v13 = _isoc23_strtoumax(v10, &v15, 10), v15 == v10)
    || (*a3 = v13, v16[0] = v6 + 7, (unsigned int)_gettextparse(v16)) )
  {
LABEL_14:
    *a2 = &_gettext_germanic_plural;
    *a3 = 2;
  }
  else
  {
    *a2 = v16[1];
  }
  return &_stack_chk_guard;
}
