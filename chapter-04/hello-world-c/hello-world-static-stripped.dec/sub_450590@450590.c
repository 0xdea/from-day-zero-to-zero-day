__int64 *__fastcall sub_450590(__int64 *result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x4

  if ( (int)a2 > 97 )
    goto LABEL_7;
  a4 = (__int64)byte_496C40;
  v4 = (int)a2;
  a2 = (unsigned __int8)byte_496C40[(int)a2];
  if ( (result[104] & 0x4000000000000000LL) == 0
    || (a4 = *((unsigned __int8 *)result + v4 + 856), !*((_BYTE *)result + v4 + 856)) )
  {
    result = (__int64 *)result[v4];
    if ( (_DWORD)a2 == 8 )
    {
      *result = a3;
      return result;
    }
LABEL_7:
    sub_4002C0((__int64)result, a2, a3, a4);
  }
  result[v4] = a3;
  return result;
}
