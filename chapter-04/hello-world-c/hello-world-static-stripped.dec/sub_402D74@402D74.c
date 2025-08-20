__int64 __fastcall sub_402D74(
        __int64 a1,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  int v11; // w0
  __int64 v13; // x1
  _BYTE *v14; // x2
  __int64 result; // x0
  _BYTE *v17; // x1
  _BYTE *v18; // x3
  int v19; // w4
  unsigned __int64 v20; // x21
  __int64 v21; // x2
  __int64 v22; // x1
  unsigned __int64 v23; // x3
  __int64 v24; // x1
  __int64 v25; // x21
  unsigned __int64 StatusReg; // x2

  v11 = *(_DWORD *)a1;
  if ( (v11 & 8) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    if ( (v11 & 0x800) != 0 )
    {
      if ( v13 )
      {
        v14 = *(_BYTE **)(a1 + 40);
        goto LABEL_5;
      }
    }
    else if ( v13 )
    {
      v14 = *(_BYTE **)(a1 + 8);
      goto LABEL_15;
    }
    sub_404C44(a1);
    v14 = *(_BYTE **)(a1 + 56);
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 16) = v14;
    v11 = *(_DWORD *)a1;
    *(_QWORD *)(a1 + 24) = v14;
LABEL_15:
    if ( (v11 & 0x100) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 16) - (_QWORD)v14;
      sub_404890(a1);
      v21 = *(_QWORD *)(a1 + 24);
      v22 = *(_QWORD *)(a1 + 56);
      v11 = *(_DWORD *)a1;
      v23 = v21 - v22;
      v24 = v22 - v21;
      if ( v23 > v20 )
        v25 = -(__int64)v20;
      else
        v25 = v24;
      v14 = (_BYTE *)(v21 + v25);
    }
    v17 = *(_BYTE **)(a1 + 64);
    if ( v17 == v14 )
    {
      v14 = *(_BYTE **)(a1 + 56);
      *(_QWORD *)(a1 + 16) = v14;
      v18 = v14;
    }
    else
    {
      v18 = *(_BYTE **)(a1 + 16);
    }
    v19 = *(_DWORD *)(a1 + 192);
    *(_DWORD *)a1 = v11 | 0x800;
    *(_QWORD *)(a1 + 8) = v18;
    *(_QWORD *)(a1 + 24) = v18;
    *(_QWORD *)(a1 + 32) = v14;
    *(_QWORD *)(a1 + 40) = v14;
    *(_QWORD *)(a1 + 48) = v17;
    if ( v19 <= 0 && (v11 & 0x202) != 0 )
    {
      *(_QWORD *)(a1 + 48) = v14;
      if ( a2 != -1 )
      {
LABEL_6:
        if ( *(_BYTE **)(a1 + 64) != v14 )
          goto LABEL_7;
        if ( *(int *)(a1 + 192) <= 0 )
        {
          if ( (unsigned int)sub_402270(
                               a1,
                               *(_QWORD *)(a1 + 32),
                               (__int64)&v14[-*(_QWORD *)(a1 + 32)],
                               a3,
                               a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               a9,
                               a10) != -1 )
          {
            v14 = *(_BYTE **)(a1 + 40);
LABEL_7:
            *(_QWORD *)(a1 + 40) = v14 + 1;
            *v14 = a2;
            if ( (*(_DWORD *)a1 & 2) == 0 && ((*(_DWORD *)a1 & 0x200LL) == 0 || a2 != 10) )
              return (unsigned __int8)a2;
            if ( (unsigned int)sub_402270(
                                 a1,
                                 *(_QWORD *)(a1 + 32),
                                 *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32),
                                 a3,
                                 a4,
                                 a5,
                                 a6,
                                 a7,
                                 a8,
                                 a9,
                                 a10) != -1 )
              return (unsigned __int8)a2;
          }
        }
        else if ( (unsigned int)sub_42A900(
                                  a1,
                                  *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL),
                                  (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL)
                                          - *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL)) >> 2) != -1 )
        {
          v14 = *(_BYTE **)(a1 + 40);
          goto LABEL_7;
        }
        return 0xFFFFFFFFLL;
      }
      return sub_402270(a1, *(_QWORD *)(a1 + 32), (__int64)&v14[-*(_QWORD *)(a1 + 32)], a3, a4, a5, a6, a7, a8, a9, a10);
    }
LABEL_5:
    if ( a2 != -1 )
      goto LABEL_6;
    return sub_402270(a1, *(_QWORD *)(a1 + 32), (__int64)&v14[-*(_QWORD *)(a1 + 32)], a3, a4, a5, a6, a7, a8, a9, a10);
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  *(_DWORD *)a1 = v11 | 0x20;
  result = 0xFFFFFFFFLL;
  *(_DWORD *)(StatusReg + 40) = 9;
  return result;
}
