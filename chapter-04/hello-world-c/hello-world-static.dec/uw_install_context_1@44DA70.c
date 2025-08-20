__int64 __fastcall uw_install_context_1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // x0
  __int64 v7; // x23
  __int64 i; // x19
  __int64 v9; // x2
  __int64 v10; // x1
  bool v11; // zf
  __int64 result; // x0
  __int64 v14; // [xsp+48h] [xbp+48h] BYREF

  v5 = *(_QWORD *)(a2 + 832);
  if ( ((v5 & 0x4000000000000000LL) == 0 || !*(_BYTE *)(a2 + 887)) && !*(_QWORD *)(a2 + 248) )
  {
    v9 = *(_QWORD *)(a2 + 784);
    v10 = (unsigned __int8)byte_496C5F;
    if ( byte_496C5F != 8 )
      goto LABEL_34;
    v14 = *(_QWORD *)(a2 + 784);
    if ( (v5 & 0x4000000000000000LL) != 0 )
      *(_BYTE *)(a2 + 887) = 0;
    *(_QWORD *)(a2 + 248) = &v14;
  }
  v7 = a1 + 856;
  for ( i = 0; i != 97; ++i )
  {
    while ( 1 )
    {
      v9 = *(unsigned __int8 *)(v7 + i);
      v5 = *(_QWORD *)(a1 + 8 * i);
      v10 = *(_QWORD *)(a2 + 8 * i);
      if ( *(_BYTE *)(v7 + i) )
        goto LABEL_34;
      if ( *(_BYTE *)(a2 + 856 + i) )
      {
        if ( v5 )
        {
          v9 = (unsigned __int8)dwarf_reg_size_table[i];
          if ( (_DWORD)v9 != 8 )
            goto LABEL_34;
          *(_QWORD *)v5 = v10;
        }
        goto LABEL_8;
      }
      v11 = !v10 || v5 == 0;
      if ( !v11 && v5 != v10 )
        break;
LABEL_8:
      if ( ++i == 97 )
        goto LABEL_19;
    }
    j_memcpy(v5);
  }
LABEL_19:
  if ( (*(_QWORD *)(a1 + 832) & 0x4000000000000000LL) != 0 && *(_BYTE *)(a1 + 887) )
    return 0;
  result = 0;
  if ( !*(_QWORD *)(a1 + 248) )
  {
    v9 = *(_QWORD *)(a2 + 832);
    v5 = *(_QWORD *)(a2 + 248);
    v10 = (unsigned __int8)byte_496C5F;
    if ( (v9 & 0x4000000000000000LL) != 0 )
    {
      v9 = *(unsigned __int8 *)(a2 + 887);
      if ( *(_BYTE *)(a2 + 887) )
        return v5 - *(_QWORD *)(a1 + 784) + *(_QWORD *)(a2 + 848);
    }
    if ( byte_496C5F == 8 )
    {
      v5 = *(_QWORD *)v5;
      return v5 - *(_QWORD *)(a1 + 784) + *(_QWORD *)(a2 + 848);
    }
LABEL_34:
    abort(v5, v10, v9, a4);
  }
  return result;
}
