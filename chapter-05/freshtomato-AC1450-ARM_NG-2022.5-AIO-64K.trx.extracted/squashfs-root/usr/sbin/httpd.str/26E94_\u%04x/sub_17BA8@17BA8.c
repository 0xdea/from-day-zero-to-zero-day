char *__fastcall sub_17BA8(unsigned int a1, char *s)
{
  int v3; // r5
  bool v4; // zf

  if ( a1 > 0xFF )
    return &s[sprintf(s, "\\u%04x", a1)];
  v3 = (unsigned __int8)a1;
  v4 = (unsigned __int8)a1 == 34;
  if ( (unsigned __int8)a1 != 34 )
    v4 = (unsigned __int8)a1 == 39;
  if ( v4 || (unsigned __int8)a1 == 92 || ((*_ctype_b_loc())[(unsigned __int8)a1] & 0x40) == 0 )
    return &s[sprintf(s, "\\x%02x", v3)];
  *s = v3;
  return s + 1;
}
