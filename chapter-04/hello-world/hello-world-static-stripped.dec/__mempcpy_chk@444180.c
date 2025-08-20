__int64 __fastcall _mempcpy_chk(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // x0

  if ( a4 >= a3 )
    return j_ifunc_40DC90(a1, a2, a3) + a3;
  v5 = sub_431EB0();
  return sub_4441B0(v5);
}
