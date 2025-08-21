__int64 __fastcall sub_408C20(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // x19
  __int64 v6; // x20
  signed int v7; // w21
  int v8; // w23
  unsigned __int64 v9; // x19
  __int64 v10; // x21
  unsigned __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x0

  v3 = (a2 + 7 + a1) & -a2;
  if ( a1 >= v3 )
    return -1;
  v6 = sub_4117E0(0, (a2 + 7 + a1) & -a2, dword_4966A4 | 3u, a3 | 0x22u, 0xFFFFFFFFLL, 0);
  if ( v6 == -1 )
    return -1;
  if ( (a3 & 0x40000) == 0 && qword_4905F8 - 1 < v3 )
  {
    v11 = v3;
    v12 = v6;
    if ( ((qword_490F10 - 1) & v6) != 0 )
    {
      v11 = v3 + ((qword_490F10 - 1) & v6);
      v12 = -qword_490F10 & v6;
    }
    sub_4117C0(v12, v11, 14);
  }
  sub_411AE0(v6, v3, " glibc: malloc");
  if ( (v6 & 0xF) != 0 )
  {
    sub_41F250("((INTERNAL_SIZE_T) chunk2mem (mm) & MALLOC_ALIGN_MASK) == 0", "malloc.c", 2448, "sysmalloc_mmap");
    return sub_408DD4(v13);
  }
  else
  {
    *(_QWORD *)v6 = 0;
    *(_QWORD *)(v6 + 8) = v3 | 2;
    v7 = _dl___aarch64_ldadd4_relax(1u, (atomic_uint *)&dword_49060C) + 1;
    do
      v8 = dword_490614;
    while ( v7 > dword_490614 && _aarch64_cas4_acq(dword_490614, v7, (atomic_uint *)&dword_490614) != v8 );
    v9 = _dl___aarch64_ldadd8_relax(v3, (atomic_ullong *)&qword_490620) + v3;
    do
      v10 = qword_490628;
    while ( v9 > qword_490628 && _aarch64_cas8_acq(qword_490628, v9, (atomic_ullong *)&qword_490628) != v10 );
    return v6 + 16;
  }
}
