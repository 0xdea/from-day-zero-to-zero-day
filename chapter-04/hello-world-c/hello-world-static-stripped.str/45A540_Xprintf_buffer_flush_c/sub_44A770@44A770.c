__int64 __fastcall sub_44A770(__int64 a1)
{
  int v2; // w0
  int v3; // w0
  __int64 result; // x0
  unsigned __int64 StatusReg; // x1

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = v2 - 1;
    while ( 2 )
    {
      switch ( v3 )
      {
        case 0:
          goto LABEL_6;
        case 1:
          sub_442250(a1);
          if ( !*(_DWORD *)(a1 + 32) )
            return 0;
          goto LABEL_6;
        case 2:
          sub_431EB0();
          goto LABEL_25;
        case 3:
          sub_43E450(a1);
          if ( !*(_DWORD *)(a1 + 32) )
            return 0;
          goto LABEL_6;
        case 4:
          sub_442010(a1);
          if ( !*(_DWORD *)(a1 + 32) )
            return 0;
          goto LABEL_6;
        case 5:
          if ( !*(_DWORD *)(a1 + 32) )
            return 0;
          goto LABEL_6;
        case 6:
          StatusReg = _ReadStatusReg(TPIDR_EL0);
          *(_DWORD *)(a1 + 32) = 0;
          *(_DWORD *)(StatusReg + 40) = 7;
          return 0;
        case 7:
          sub_440264(a1);
          if ( !*(_DWORD *)(a1 + 32) )
            return 0;
          goto LABEL_6;
        case 8:
          sub_440500(a1);
          if ( *(_DWORD *)(a1 + 32) )
            goto LABEL_6;
          return 0;
        case 9:
          sub_441320(a1);
          if ( !*(_DWORD *)(a1 + 32) )
            return 0;
          goto LABEL_6;
        case 10:
          if ( !*(_DWORD *)(a1 + 32) )
            return 0;
LABEL_6:
          result = 1;
          if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
LABEL_25:
            sub_41F250(
              "buf->write_ptr != buf->write_end",
              (__int64)"Xprintf_buffer_flush.c",
              0x46u,
              (__int64)"__printf_buffer_flush");
          return result;
        default:
          __break(0x3E8u);
          continue;
      }
    }
  }
  return 0;
}
