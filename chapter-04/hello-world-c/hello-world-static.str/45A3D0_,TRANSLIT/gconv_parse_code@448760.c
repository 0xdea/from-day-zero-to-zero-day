__int64 __fastcall gconv_parse_code(unsigned __int8 **a1)
{
  unsigned __int64 StatusReg; // x21
  _BYTE *v3; // x23
  __int64 result; // x0
  int v5; // w1
  bool v6; // zf
  __int64 v8; // x2
  _BYTE *v9; // x1
  _BYTE *v10; // x23
  int v11; // w2
  unsigned int v12; // t1
  unsigned int v13; // t1

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  *((_WORD *)a1 + 4) = 0;
  while ( 1 )
  {
    v3 = *a1;
    for ( result = strlen(*a1); ; --result )
    {
      v8 = result - 1;
      if ( !result )
      {
        *v3 = 0;
        return result;
      }
      v5 = (unsigned __int8)v3[v8];
      v6 = v5 == 44 || v5 == 47;
      if ( !v6 && (*(_WORD *)(*(_QWORD *)(StatusReg + 72) + 2LL * (unsigned __int8)v3[v8]) & 0x2000) == 0 )
        break;
    }
    v3[result] = 0;
    v9 = *a1;
    result = **a1;
    if ( !**a1 )
      return result;
    v10 = 0;
    v11 = 0;
    do
    {
      while ( (_DWORD)result == 44 )
      {
        v10 = v9;
        v13 = (unsigned __int8)*++v9;
        result = v13;
        if ( !v13 )
          goto LABEL_21;
      }
      if ( (_DWORD)result == 47 )
      {
        ++v11;
        v10 = v9;
      }
      v12 = (unsigned __int8)*++v9;
      result = v12;
    }
    while ( v12 );
LABEL_21:
    if ( !v10 || v11 <= 1 )
      return result;
    if ( !(unsigned int)strcasecmp_l(v10, "/TRANSLIT", nl_C_locobj)
      || !(unsigned int)strcasecmp_l(v10, ",TRANSLIT", nl_C_locobj) )
    {
      *((_BYTE *)a1 + 8) = 1;
    }
    if ( (unsigned int)strcasecmp_l(v10, "/IGNORE", nl_C_locobj)
      && (unsigned int)strcasecmp_l(v10, ",IGNORE", nl_C_locobj) )
    {
      *v10 = 0;
    }
    else
    {
      *((_BYTE *)a1 + 9) = 1;
      *v10 = 0;
    }
  }
}
