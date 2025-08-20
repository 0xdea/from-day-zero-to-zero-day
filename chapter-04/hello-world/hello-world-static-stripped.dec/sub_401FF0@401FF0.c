__int64 __fastcall sub_401FF0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v7; // w20
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  unsigned int v16; // w1
  __int64 v17; // x21

  if ( (*(_DWORD *)(a1 + 116) & 2) != 0 )
    v7 = sub_410EE0(a2, a3, a4);
  else
    v7 = sub_4109D0(a2, a3, a4);
  if ( (v7 & 0x80000000) == 0 )
  {
    v16 = *(_DWORD *)a1 & 0xFFFFEFF3;
    *(_DWORD *)(a1 + 112) = v7;
    *(_DWORD *)a1 = v16 | a5 & 0x100C;
    if ( (~a5 & 0x1004) != 0 )
      goto LABEL_8;
    v17 = *(_QWORD *)(a1 + 216);
    if ( (unsigned __int64)(v17 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50(v8, v9, v10, v11, v12, v13, v14, v15);
    if ( (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v17 + 128))(a1, 0, 2) != -1
      || *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) == 29 )
    {
LABEL_8:
      sub_404430(a1);
      return a1;
    }
    sub_410CD0(v7);
  }
  return 0;
}
