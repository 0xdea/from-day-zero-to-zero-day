__int64 __fastcall sub_43E140(int *a1)
{
  int v2; // w0
  int v3; // w2
  unsigned int v4; // w0
  unsigned __int8 *v5; // x2
  __int64 result; // x0

  v2 = a1[1];
  if ( !v2 )
    sub_41F250("it->remaining > 0", (__int64)"grouping_iterator.c", 0x6Fu, (__int64)"__grouping_iterator_next");
  v3 = *a1;
  v4 = v2 - 1;
  a1[1] = v4;
  if ( v3 )
  {
    result = 0;
    *a1 = v3 - 1;
  }
  else
  {
    v5 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
    if ( v4 < a1[4] )
      *((_QWORD *)a1 + 1) = --v5;
    result = 1;
    *a1 = *v5 - 1;
  }
  return result;
}
