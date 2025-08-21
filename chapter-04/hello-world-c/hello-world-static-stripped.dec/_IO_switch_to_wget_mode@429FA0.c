__int64 __fastcall IO_switch_to_wget_mode(unsigned int *a1)
{
  unsigned __int64 *v1; // x1
  unsigned __int64 v2; // x2
  __int64 result; // x0
  unsigned int v5; // w0
  unsigned __int64 v6; // x3
  unsigned int v7; // w3

  v1 = (unsigned __int64 *)*((_QWORD *)a1 + 20);
  v2 = v1[4];
  if ( v2 > v1[3] )
  {
    result = (*(__int64 (**)(void))(v1[28] + 24))();
    if ( (_DWORD)result == -1 )
      return result;
    v1 = (unsigned __int64 *)*((_QWORD *)a1 + 20);
    v2 = v1[4];
  }
  v5 = *a1;
  if ( (*a1 & 0x100) != 0 )
  {
    v1[2] = v1[9];
  }
  else
  {
    v6 = v1[1];
    v1[2] = v1[6];
    if ( v6 < v2 )
      v1[1] = v2;
  }
  *v1 = v2;
  v7 = v5 & 0xFFFFF7FF;
  v1[3] = v2;
  result = 0;
  v1[5] = v2;
  *a1 = v7;
  return result;
}
