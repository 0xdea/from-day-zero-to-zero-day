__int64 __fastcall dl_catch_exception(
        _QWORD *a1,
        void (__fastcall *a2)(__int64),
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 StatusReg; // x3
  unsigned __int64 v9; // x19
  __int64 result; // x0
  __int64 v11; // [xsp+0h] [xbp+0h]
  __int64 v13; // [xsp+30h] [xbp+30h]
  unsigned __int64 v16; // [xsp+48h] [xbp+48h]
  unsigned int v17; // [xsp+54h] [xbp+54h] BYREF
  _QWORD v18[2]; // [xsp+58h] [xbp+58h] BYREF
  __int64 v19; // [xsp+68h] [xbp+68h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v9 = StatusReg - 1856;
  v13 = *(_QWORD *)(StatusReg - 1856 + 0x6F8);
  v16 = StatusReg;
  if ( a1 )
  {
    *(_QWORD *)(v9 + 0x6F8) = v18;
    v18[0] = a1;
    v18[1] = &v17;
    if ( (unsigned int)_sigsetjmp(&v19, 0, (__int64)&v17, (__int64)a1, a5, a6, a7, a8, v11) )
    {
      result = v17;
      *(_QWORD *)(v16 + 0xFFFFFFFFFFFFFFB8LL) = v13;
      return result;
    }
    a2(a3);
    *(_QWORD *)(v16 + 0xFFFFFFFFFFFFFFB8LL) = v13;
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 0x6F8) = 0;
    a2(a3);
    *(_QWORD *)(v9 + 0x6F8) = v13;
  }
  return 0;
}
