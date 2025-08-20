__int64 __fastcall _libc_mtag_tag_zero_region(__int64 result, unsigned __int64 a2)
{
  unsigned __int64 v6; // x2
  unsigned __int64 v7; // x1
  bool v8; // cc
  unsigned __int64 v9; // x1

  if ( a2 > 0x60 )
  {
    if ( a2 >= 0xA0 && (_ReadStatusReg(DCZID_EL0) & 0x1F) == 4 )
    {
      __asm
      {
        STZ2G           X0, [X0]
        STZ2G           X0, [X0,#0x20]
      }
      v6 = result & 0xFFFFFFFFFFFFFFC0LL;
      v7 = result + a2 - (result & 0xFFFFFFFFFFFFFFC0LL) - 128;
      do
      {
        v6 += 64LL;
        __asm { DC              GZVA, X2 }
        v8 = v7 > 0x40;
        v7 -= 64LL;
      }
      while ( v8 );
      __asm
      {
        STZ2G           X0, [X3,#-0x40]
        STZ2G           X0, [X3,#-0x20]
      }
    }
    else
    {
      v9 = a2 - 64;
      do
      {
        __asm
        {
          STZ2G           X0, [X2,#0x20]
          STZ2G           X0, [X2,#0x40]!
        }
        v8 = v9 > 0x40;
        v9 -= 64LL;
      }
      while ( v8 );
      __asm
      {
        STZ2G           X0, [X3,#-0x40]
        STZ2G           X0, [X3,#-0x20]
      }
    }
  }
  else if ( (a2 & 0x40) != 0 )
  {
    __asm
    {
      STZ2G           X0, [X0]
      STZ2G           X0, [X0,#0x20]
      STZ2G           X0, [X3,#-0x20]
    }
  }
  else if ( a2 )
  {
    __asm
    {
      STZG            X0, [X0]
      STZG            X0, [X4]
      STZG            X0, [X3,#-0x10]
    }
  }
  return result;
}
