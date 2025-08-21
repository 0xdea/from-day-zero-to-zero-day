__int64 __fastcall sub_442814(
        unsigned __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 result; // x0
  __int64 *v11; // x19
  __int64 v12; // x20
  _QWORD *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  unsigned __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3

  result = qword_4967D8;
  v11 = *(__int64 **)(qword_4967D8 + 8);
  if ( (__int64 *)qword_4967D8 != &qword_4967D0 )
  {
    while ( 1 )
    {
      v12 = result - 192;
      if ( *(int *)(result + 16) <= 0 )
      {
        qword_4967C0 = result;
        __dmb(0xBu);
        v14 = *(_QWORD *)result;
        v13 = *(_QWORD **)(result + 8);
        *(_QWORD *)(v14 + 8) = v13;
        *v13 = v14;
        __dmb(0xBu);
        v15 = *(_QWORD *)(result + 984);
        qword_4967C0 = 0;
        qword_4967C8 -= v15;
        sub_412B44((void **)(result + 1664), 0, a2, a3, a4, a5, a6, a7, a8, a9);
        v16 = sub_4118C0(*(void **)(v12 + 1168), *(_QWORD *)(v12 + 1176));
        if ( (_DWORD)v16 )
          sub_4002C0(v16, v17, v18, v19);
        result = qword_4967C8;
        if ( qword_4967C8 <= a1 )
          break;
      }
      result = (__int64)v11;
      if ( v11 == &qword_4967D0 )
        break;
      v11 = (__int64 *)v11[1];
    }
  }
  return result;
}
