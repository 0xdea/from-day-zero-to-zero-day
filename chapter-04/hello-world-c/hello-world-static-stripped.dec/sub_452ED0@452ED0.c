_DWORD *__fastcall sub_452ED0(_DWORD *result, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5[2]; // [xsp+20h] [xbp+20h] BYREF

  if ( result )
  {
    if ( *result )
    {
      *a2 = -1;
      a2[1] = a3;
      a2[2] = a4;
      a2[3] = result;
      a2[4] = 2040;
      sub_4514F0((__int64)&unk_496D08, (unsigned __int64)result, 1, (__int64)a2);
      sub_452660((__int64)a2, v5);
      return (_DWORD *)sub_4514F0((__int64)&qword_496D20, v5[0], v5[1] - v5[0], (__int64)a2);
    }
  }
  return result;
}
