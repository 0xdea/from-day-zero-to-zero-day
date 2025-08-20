unsigned __int64 __fastcall sub_445120(_QWORD *a1)
{
  unsigned __int64 result; // x0

  result = sub_411880((void *)(a1[146] + a1[148]), a1[147] - a1[148], 7);
  if ( (_DWORD)result )
    return *(unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 40);
  return result;
}
