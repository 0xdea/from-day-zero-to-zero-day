unsigned __int64 __fastcall sub_432880(_BYTE *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // x0
  unsigned __int64 v5; // x19
  unsigned int v6; // w0
  unsigned int v7; // w0
  unsigned __int64 v9; // x20
  int v10; // w0
  unsigned __int64 v11; // x19

  v4 = ifunc_40DFD0(a2);
  v5 = v4;
  if ( *a1 == 123 )
  {
    v9 = (unsigned __int64)(a1 + 1);
    if ( !(unsigned int)sub_42F424(v9, a2, v4) )
    {
      v10 = *(unsigned __int8 *)(v9 + v5);
      v11 = v5 + 2;
      if ( v10 != 125 )
        return 0;
      return v11;
    }
    return 0;
  }
  if ( (unsigned int)sub_42F424((unsigned __int64)a1, a2, v4) )
    return 0;
  v6 = (unsigned __int8)a1[v5];
  if ( v6 > 0x39 )
  {
    v7 = (unsigned __int8)(v6 - 65);
    if ( v7 <= 0x39 )
    {
      if ( ((0x3FFFFFF43FFFFFFuLL >> v7) & 1) != 0 )
        return 0;
      return v5;
    }
    return v5;
  }
  if ( v6 >= 0x30 )
    return 0;
  return v5;
}
