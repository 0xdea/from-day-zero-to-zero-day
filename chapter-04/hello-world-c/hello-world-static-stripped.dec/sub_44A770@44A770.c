__int64 __fastcall sub_44A770(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  int v16; // w0
  int v17; // w0
  __int64 result; // x0
  unsigned __int64 StatusReg; // x1

  v16 = *(_DWORD *)(a1 + 32);
  if ( v16 )
  {
    v17 = v16 - 1;
    while ( 2 )
    {
      switch ( v17 )
      {
        case 0:
          goto LABEL_6;
        case 1:
          sub_442250((_QWORD *)a1);
          if ( !*(_DWORD *)(a1 + 32) )
            return 0;
          goto LABEL_6;
        case 2:
          sub_431EB0();
          goto LABEL_25;
        case 3:
          sub_43E450(a1, a8, a9, a10, a11, a12, a13, a14, a15);
          if ( !*(_DWORD *)(a1 + 32) )
            return 0;
          goto LABEL_6;
        case 4:
          sub_442010(a1, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
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
