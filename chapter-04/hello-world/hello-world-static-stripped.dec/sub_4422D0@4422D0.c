__int64 __fastcall sub_4422D0(__int64 a1)
{
  _BYTE *v1; // x1

  v1 = *(_BYTE **)(a1 + 8);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 16) )
  {
    if ( (unsigned __int64)v1 > *(_QWORD *)a1 )
      *(v1 - 1) = 0;
  }
  else
  {
    *v1 = 0;
  }
  return sub_43E1D0(a1);
}
