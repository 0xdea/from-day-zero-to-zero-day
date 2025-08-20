__int64 __fastcall free(
        __int64 result,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v10; // x19
  int v11; // w23
  unsigned __int64 v12; // x1
  __int64 v14; // x0
  int *v15; // x0

  if ( result )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v10 = result - 16;
    v11 = *(_DWORD *)(StatusReg + 40);
    if ( (mtag_enabled & 1) != 0 )
    {
      _X0 = result - 16;
      __asm { LDG             X0, [X0] }
      v10 = _X0;
    }
    v12 = *(_QWORD *)(v10 + 8);
    if ( (v12 & 2) != 0 )
    {
      if ( !dword_490618 && v12 > qword_4905E0 && v12 <= 0x2000000 )
      {
        qword_4905E0 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        mp_ = 2 * (v12 & 0xFFFFFFFFFFFFFFF8LL);
      }
      result = munmap_chunk((_QWORD *)v10, a2, a3, a4, a5, a6, a7, a8, a9);
      *(_DWORD *)(StatusReg + 40) = v11;
    }
    else
    {
      if ( !*(_QWORD *)(StatusReg + 48 + 8) && (*(_BYTE *)(StatusReg + 48 + 0x10) & 1) == 0 )
      {
        tcache_init_part_0();
        v12 = *(_QWORD *)(v10 + 8);
      }
      if ( (mtag_enabled & 1) != 0 )
      {
        _libc_mtag_tag_region(v10 + 16, (v12 & 0xFFFFFFFFFFFFFFF8LL) - 16);
        v12 = *(_QWORD *)(v10 + 8);
      }
      if ( (v12 & 4) != 0 )
      {
        v14 = -4 * qword_490600;
        if ( !qword_490600 )
          v14 = -67108864;
        v15 = *(int **)(v10 & v14);
      }
      else
      {
        v15 = &main_arena;
      }
      result = int_free((__int64)v15, v10, 0, a2, a3, a4, a5, a6, a7, a8, a9);
      *(_DWORD *)(StatusReg + 40) = v11;
    }
  }
  return result;
}
