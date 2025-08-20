__int64 __fastcall sub_4035A4(
        unsigned int *a1,
        __int64 a2,
        int a3,
        int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  __int64 v13; // x20
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  unsigned int v18; // w3

  if ( !a4 )
    return *((_QWORD *)a1 + 18) - (*((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1));
  if ( a3 == 1 )
  {
    v13 = *((_QWORD *)a1 + 1) - *((_QWORD *)a1 + 3) + a2;
  }
  else
  {
    v13 = a2;
    if ( a3 == 2 )
      v13 = *((_QWORD *)a1 + 8) - *((_QWORD *)a1 + 7) + a2;
  }
  if ( v13 < 0 )
  {
    v13 = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  }
  else
  {
    v14 = *((_QWORD *)a1 + 27);
    if ( (unsigned __int64)(v14 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50(a5, a6, a7, a8, a9, a10, a11, a12);
    v15 = (*(__int64 (__fastcall **)(unsigned int *, __int64, _QWORD))(v14 + 128))(a1, v13, 0);
    if ( v15 < 0 )
    {
      return -1;
    }
    else
    {
      v17 = *((_QWORD *)a1 + 7);
      v16 = *((_QWORD *)a1 + 8);
      *((_QWORD *)a1 + 3) = v17;
      v18 = *a1;
      *((_QWORD *)a1 + 18) = v15;
      if ( v16 - v17 >= v13 )
        v16 = v17 + v13;
      *a1 = v18 & 0xFFFFFFEF;
      *((_QWORD *)a1 + 1) = v16;
      *((_QWORD *)a1 + 2) = v16;
    }
  }
  return v13;
}
