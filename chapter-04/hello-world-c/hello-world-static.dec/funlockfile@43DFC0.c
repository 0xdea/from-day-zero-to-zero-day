signed __int64 __fastcall funlockfile(__int64 a1)
{
  __int64 v1; // x19
  signed __int64 result; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  void *v6; // x4
  void *v7; // x5
  void *v8; // x6

  v1 = *(_QWORD *)(a1 + 136);
  result = *(unsigned int *)(v1 + 4);
  if ( _libc_single_threaded )
  {
    if ( !(_DWORD)result )
    {
      *(_DWORD *)v1 = 0;
      *(_QWORD *)(v1 + 8) = 0;
      return result;
    }
    goto LABEL_3;
  }
  if ( (_DWORD)result )
  {
LABEL_3:
    result = (unsigned int)(result - 1);
    *(_DWORD *)(v1 + 4) = result;
    return result;
  }
  *(_QWORD *)(v1 + 8) = 0;
  result = _aarch64_swp4_rel(0, (atomic_uint *)v1);
  if ( (int)result > 1 )
    return _lll_lock_wake_private((void *)v1, v3, v4, v5, v6, v7, v8);
  return result;
}
