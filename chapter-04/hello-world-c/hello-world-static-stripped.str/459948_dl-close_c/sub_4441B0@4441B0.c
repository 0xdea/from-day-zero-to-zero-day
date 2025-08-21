__int64 __fastcall sub_4441B0(__int64 a1, unsigned __int64 *a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // x4
  unsigned __int64 v7; // x2
  unsigned __int64 *v8; // x1
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x5
  unsigned __int64 *v13; // x0

  v4 = a1 - a3;
  v7 = *a2;
  if ( v4 < *a2 )
  {
    v13 = &a2[2 * v4 + 2];
    if ( v13[1] )
    {
      *v13 = qword_4921D0 + 1;
      v13[1] = 0;
    }
    if ( qword_4921A0 != a1 )
    {
      byte_4921E0 = 1;
      return 1;
    }
  }
  else
  {
    v8 = (unsigned __int64 *)a2[1];
    if ( v8 )
    {
      if ( (sub_4441B0(a1, v8, v7 + a3, a4) & 1) == 0 )
      {
        v4 = *a2;
        goto LABEL_5;
      }
      return 1;
    }
    if ( (a4 & 1) != 0 )
      sub_41F250("! should_be_there", (__int64)"dl-close.c", 0x37u, (__int64)"remove_slotinfo");
  }
LABEL_5:
  v9 = v4;
  if ( a3 )
    v10 = 0;
  else
    v10 = qword_4921C8 + 1;
  while ( 1 )
  {
    if ( v9 <= v10 )
      return 0;
    if ( a2[2 * v9 + 1] )
      break;
    --v9;
  }
  qword_4921A0 = a3 - 1 + v9;
  return 1;
}
