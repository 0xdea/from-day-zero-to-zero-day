char *__fastcall sub_446F70(
        __int64 *a1,
        unsigned int a2,
        long double a3,
        long double a4,
        long double a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10)
{
  __int64 v12; // x3
  __int64 v13; // x5
  __int64 v14; // x7
  __int64 *v15; // x4
  __int64 v16; // x0
  __int64 v17; // x19
  unsigned __int64 v18; // x4
  _QWORD *v19; // x19
  __int64 v20; // x6
  unsigned int *v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  char v24; // w6
  char **v25; // x20
  char *v26; // x3
  bool v27; // zf
  void *v29; // x21
  void *v30; // x4
  void *v31; // x5
  void *v32; // x6
  signed __int64 v33; // x0
  unsigned int *v34; // [xsp+30h] [xbp+30h] BYREF
  _QWORD v35[3]; // [xsp+38h] [xbp+38h] BYREF

  v12 = *a1;
  v13 = 0;
  v14 = *(_QWORD *)(a1[14] + 8);
  if ( (*((_BYTE *)a1 + 870) & 0x20) != 0 )
  {
    v14 += v12;
    v13 = *a1;
  }
  v15 = (__int64 *)(*(_QWORD *)(a1[31] + 8) + a2 + v13);
  v16 = v13 + *(_QWORD *)(a1[13] + 8);
  v17 = *v15;
  v18 = v15[1];
  v19 = (_QWORD *)(v12 + v17);
  v20 = 2 * HIDWORD(v18);
  v21 = (unsigned int *)(v14 + 24 * HIDWORD(v18));
  v34 = v21;
  if ( (_DWORD)v18 != 1026 )
    sub_41F250(
      "ELFW(R_TYPE)(reloc->r_info) == ELF_MACHINE_JMP_SLOT",
      (__int64)"dl-runtime.c",
      0x3Fu,
      (__int64)"_dl_fixup");
  if ( (*((_BYTE *)v21 + 5) & 3) != 0 )
  {
    if ( *((unsigned __int16 *)v21 + 3) == 65521 )
      v12 = 0;
    v26 = (char *)(v12 + *((_QWORD *)v21 + 1));
    goto LABEL_18;
  }
  v22 = a1[67];
  v23 = 0;
  if ( v22 )
  {
    v23 = a1[102] + 24LL * (*(_WORD *)(v20 + v13 + *(_QWORD *)(v22 + 8)) & 0x7FFF);
    if ( !*(_DWORD *)(v23 + 8) )
      v23 = 0;
  }
  v24 = 1;
  if ( !byte_490F08 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 4) = 1;
    __dmb(0xBu);
    v21 = v34;
    v24 = 5;
  }
  v25 = (char **)sub_436B10(
                   (const char *)(v16 + *v21),
                   (__int64)a1,
                   (__int64 *)&v34,
                   (__int64 **)a1[122],
                   (const char **)v23,
                   1u,
                   v24,
                   0,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8,
                   a9,
                   a10);
  if ( !byte_490F08 )
  {
    v29 = (void *)(_ReadStatusReg(TPIDR_EL0) - 1852);
    if ( (unsigned int)_aarch64_swp4_rel(0, (atomic_uint *)v29) == 2 )
      v33 = linux_eabi_syscall(__NR_futex, v29, (void *)0x81, (void *)1, 0, v30, v31, v32);
  }
  v21 = v34;
  v26 = 0;
  if ( v34 )
  {
    if ( v25 )
      v27 = *((unsigned __int16 *)v34 + 3) == 65521;
    else
      v27 = 1;
    if ( !v27 )
      v26 = *v25;
    v26 += *((_QWORD *)v34 + 1);
LABEL_18:
    if ( (v21[1] & 0xF) == 0xA )
    {
      v35[0] = 24;
      v35[1] = *((_QWORD *)&xmmword_496728 + 1);
      v35[2] = qword_496738;
      v26 = (char *)((__int64 (__fastcall *)(__int64, _QWORD *))v26)(
                      *((_QWORD *)&xmmword_496728 + 1) | 0x4000000000000000LL,
                      v35);
    }
  }
  if ( !dword_49679C )
    *v19 = v26;
  return v26;
}
