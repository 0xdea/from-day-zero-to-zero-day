__int64 __fastcall sub_4375D0(unsigned __int64 a1)
{
  _BYTE *v1; // x2
  char *v2; // x3
  unsigned int *v3; // x4

  v1 = &unk_45C310;
  v2 = (char *)&unk_45C388;
  while ( v2 != v1 )
  {
    v3 = (unsigned int *)&v1[4 * ((__int64)(((unsigned __int64)(v2 - v1) >> 63) + ((v2 - v1) >> 2)) >> 1)];
    if ( *v3 < a1 )
      v1 = v3 + 1;
    else
      v2 = &v1[4 * ((__int64)(((unsigned __int64)(v2 - v1) >> 63) + ((v2 - v1) >> 2)) >> 1)];
  }
  return *(unsigned int *)v2;
}
