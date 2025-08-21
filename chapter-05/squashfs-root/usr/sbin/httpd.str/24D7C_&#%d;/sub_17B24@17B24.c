char *__fastcall sub_17B24(unsigned int a1, char *s)
{
  char v2; // r6
  _BOOL4 v3; // r3
  bool v6; // zf
  bool v7; // zf

  v2 = a1;
  v3 = a1 > 0xFF;
  if ( (unsigned __int8)a1 == 38 )
    v3 = 1;
  if ( v3 )
    return &s[sprintf(s, "&#%d;", a1)];
  v6 = (unsigned __int8)a1 == 60;
  if ( (unsigned __int8)a1 != 60 )
    v6 = (unsigned __int8)a1 == 62;
  if ( v6 )
    return &s[sprintf(s, "&#%d;", a1)];
  v7 = (unsigned __int8)a1 == 34;
  if ( (unsigned __int8)a1 != 34 )
    v7 = (unsigned __int8)a1 == 39;
  if ( v7 || ((*_ctype_b_loc())[(unsigned __int8)a1] & 0x40) == 0 )
    return &s[sprintf(s, "&#%d;", a1)];
  *s = v2;
  return s + 1;
}
