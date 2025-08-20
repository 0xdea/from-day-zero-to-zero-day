__int64 __fastcall Unwind_DeleteException(__int64 result)
{
  __int64 (__fastcall *v1)(__int64, __int64); // x2

  v1 = *(__int64 (__fastcall **)(__int64, __int64))(result + 8);
  if ( v1 )
    return v1(1, result);
  return result;
}
