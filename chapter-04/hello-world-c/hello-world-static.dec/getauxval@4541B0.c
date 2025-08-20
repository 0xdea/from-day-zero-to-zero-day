__int64 __fastcall getauxval(__int64 a1)
{
  __int64 v1; // x2
  __int64 v2; // x1
  __int64 v3; // t1
  __int64 result; // x0

  if ( a1 == 16 )
    return dl_hwcap;
  if ( a1 == 26 )
    return dl_hwcap2;
  v1 = dl_auxv;
  v2 = *(_QWORD *)dl_auxv;
  if ( *(_QWORD *)dl_auxv )
  {
    while ( a1 != v2 )
    {
      v3 = *(_QWORD *)(v1 + 16);
      v1 += 16;
      v2 = v3;
      if ( !v3 )
        goto LABEL_8;
    }
    return *(_QWORD *)(v1 + 8);
  }
  else
  {
LABEL_8:
    result = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 2;
  }
  return result;
}
