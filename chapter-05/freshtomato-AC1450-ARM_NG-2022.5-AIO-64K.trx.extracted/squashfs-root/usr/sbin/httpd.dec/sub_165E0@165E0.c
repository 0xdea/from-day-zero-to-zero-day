const char *__fastcall sub_165E0(const char *a1)
{
  size_t v2; // r4
  size_t v3; // r6

  v2 = 0;
  v3 = strlen(a1);
  while ( v2 < v3 )
  {
    a1[v2] = *((_WORD *)*_ctype_toupper_loc() + (unsigned __int8)a1[v2]);
    ++v2;
  }
  return a1;
}
