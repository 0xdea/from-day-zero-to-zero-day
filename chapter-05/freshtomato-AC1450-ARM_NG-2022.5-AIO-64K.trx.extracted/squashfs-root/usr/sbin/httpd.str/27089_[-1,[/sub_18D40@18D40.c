int __fastcall sub_18D40(int a1, int a2)
{
  int v4; // r2
  int v5; // r5

  if ( a2 )
  {
    sub_13954("[-1,[");
    v4 = 128;
  }
  else
  {
    v4 = 0;
  }
  v5 = exec_for_host(a1, 0, v4, sub_18B50);
  if ( a2 )
    sub_13954("]]");
  return v5;
}
