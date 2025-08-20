__int64 __fastcall IO_str_count(_QWORD *a1)
{
  unsigned __int64 v1; // x1
  unsigned __int64 v2; // x2
  __int64 v3; // x0

  v1 = a1[2];
  v2 = a1[5];
  v3 = a1[3];
  if ( v1 < v2 )
    v1 = v2;
  return v1 - v3;
}
