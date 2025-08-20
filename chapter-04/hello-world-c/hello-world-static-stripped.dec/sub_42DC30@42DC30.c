__int64 __fastcall sub_42DC30(__int64 a1)
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
