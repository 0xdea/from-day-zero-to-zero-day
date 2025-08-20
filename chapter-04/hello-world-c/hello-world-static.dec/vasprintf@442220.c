__int64 __fastcall vasprintf(__int64 *a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // q1
  __int128 v5[2]; // [xsp+10h] [xbp+10h] BYREF

  v3 = a3[1];
  v5[0] = *a3;
  v5[1] = v3;
  return _vasprintf_internal(a1, a2, v5, 0);
}
