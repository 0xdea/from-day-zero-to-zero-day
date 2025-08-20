unsigned __int64 __fastcall sub_44A210(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  bool v4; // zf
  unsigned __int64 v5; // x6
  unsigned __int64 *v6; // x4
  unsigned __int64 *v7; // x9
  unsigned __int64 result; // x0
  __int64 i; // x5
  unsigned __int64 v10; // x4

  if ( a3 )
    v4 = a4 == 0;
  else
    v4 = 1;
  if ( v4 )
    sub_41F250("usize != 0 && cnt != 0", (__int64)"rshift.c", 0x2Du, (__int64)"__mpn_rshift");
  v5 = *a2;
  v6 = a1;
  v7 = a1 - 1;
  result = *a2 << (64 - (unsigned __int8)a4);
  if ( a3 > 1 )
  {
    for ( i = 1; i != a3; ++i )
    {
      v10 = v5;
      v5 = a2[i];
      v7[i] = (v10 >> a4) | (v5 << (64 - (unsigned __int8)a4));
    }
    v6 = &v7[a3];
  }
  *v6 = v5 >> a4;
  return result;
}
