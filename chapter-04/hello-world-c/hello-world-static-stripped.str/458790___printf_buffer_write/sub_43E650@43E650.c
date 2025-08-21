unsigned __int64 __fastcall sub_43E650(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // x0
  unsigned __int64 v5; // x20
  unsigned __int64 v7; // x19
  __int64 v8; // x1
  __int64 v9; // x19

  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result )
  {
    v5 = a3;
    if ( a3 )
    {
      result = *(_QWORD *)(a1 + 8);
      do
      {
        v9 = *(_QWORD *)(a1 + 16);
        if ( v9 == result )
        {
          result = sub_44A770(a1);
          if ( (result & 1) == 0 )
            return result;
          result = *(_QWORD *)(a1 + 8);
          v9 = *(_QWORD *)(a1 + 16);
          if ( result == v9 )
            sub_41F250(
              "buf->write_ptr != buf->write_end",
              (__int64)"Xprintf_buffer_write.c",
              0x23u,
              (__int64)"__printf_buffer_write");
        }
        v7 = v9 - result;
        v8 = a2;
        if ( v7 > v5 )
          v7 = v5;
        a2 += v7;
        j_ifunc_40DC90(result, v8, v7);
        v5 -= v7;
        result = *(_QWORD *)(a1 + 8) + v7;
        *(_QWORD *)(a1 + 8) = result;
      }
      while ( v5 );
    }
  }
  return result;
}
