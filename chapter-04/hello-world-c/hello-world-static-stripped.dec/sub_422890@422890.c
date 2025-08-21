unsigned __int8 *__fastcall sub_422890(_BYTE *a1)
{
  __int64 v1; // x20
  int v3; // w21
  __int64 v4; // x22
  unsigned __int8 *v5; // x19
  unsigned __int8 *v6; // t1

  v1 = qword_4966D8;
  if ( !qword_4966D8 )
    return 0;
  v3 = (unsigned __int8)*a1;
  if ( !*a1 )
    return 0;
  v4 = ifunc_40DFD0(a1);
  v5 = *(unsigned __int8 **)v1;
  if ( !*(_QWORD *)v1 )
    return v5;
  while ( *v5 != v3 || (unsigned int)sub_42F424(a1, v5, v4) || v5[v4] != 61 )
  {
    v6 = *(unsigned __int8 **)(v1 + 8);
    v1 += 8;
    v5 = v6;
    if ( !v6 )
      return v5;
  }
  return &v5[v4 + 1];
}
