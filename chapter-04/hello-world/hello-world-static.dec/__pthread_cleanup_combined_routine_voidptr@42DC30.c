__int64 __fastcall _pthread_cleanup_combined_routine_voidptr(__int64 a1)
{
  __int64 result; // x0

  result = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 16) = 0;
  }
  return result;
}
