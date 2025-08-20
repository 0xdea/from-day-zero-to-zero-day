unsigned __int64 __fastcall sub_407620(
        _QWORD *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // x2
  unsigned __int64 v10; // x19
  unsigned __int64 v11; // x20
  unsigned __int64 result; // x0
  __int64 v13; // x1

  v9 = a1[1];
  if ( (v9 & 2) != 0 )
  {
    v10 = (unsigned __int64)a1 - *a1;
    v11 = *a1 + (v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v10 | v11) & (qword_490F10 - 1)
       | (((unsigned __int64)(a1 + 2) & (qword_490F10 - 1)) - 1) & (unsigned __int64)(a1 + 2) & (qword_490F10 - 1) )
    {
      sub_407374((__int64)"munmap_chunk(): invalid pointer", a2, a3, a4, a5, a6, a7, a8, a9);
    }
    _dl___aarch64_ldadd4_relax(0xFFFFFFFF, (atomic_uint *)&dword_49060C);
    _dl___aarch64_ldadd8_relax(-(__int64)v11, (atomic_ullong *)&qword_490620);
    return sub_4118C0(v10, v11);
  }
  else
  {
    result = *(_QWORD *)sub_41F250("chunk_is_mmapped (p)", "malloc.c", 3028, "munmap_chunk");
    if ( result == 1 )
    {
      result = sub_411E50(1, v13);
      if ( (_DWORD)result == 1 )
      {
        result = sub_411D70();
        qword_4905F8 = result;
      }
    }
    else if ( result > 1 )
    {
      JUMPOUT(0x411F70);
    }
  }
  return result;
}
