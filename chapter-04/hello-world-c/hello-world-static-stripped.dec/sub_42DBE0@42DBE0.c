void __fastcall sub_42DBE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void (__fastcall *a9)(__int64),
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  __int64 v16; // x19

  if ( a11 )
  {
    a9(a10);
    sub_442510(v16, 0);
  }
  if ( a16 != qword_48DD60 )
    JUMPOUT(0x42DC20);
  JUMPOUT(0x42DC24);
}
