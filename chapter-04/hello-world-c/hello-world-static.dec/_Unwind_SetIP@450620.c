__int64 __fastcall Unwind_SetIP(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 792) = a2;
  return result;
}
