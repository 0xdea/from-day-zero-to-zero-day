unsigned __int64 __fastcall _nptl_change_stack_perm(_QWORD *a1)
{
  unsigned __int64 result; // x0

  result = mprotect((void *)(a1[146] + a1[148]), a1[147] - a1[148], 7);
  if ( (_DWORD)result )
    return *(unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 40);
  return result;
}
