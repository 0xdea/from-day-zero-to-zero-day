int __fastcall sub_E5AC(int a1)
{
  char *v1; // r0
  int result; // r0
  char v3[264]; // [sp+0h] [bp-108h] BYREF

  f_read_string(a1, v3, 256);
  v1 = strchr(v3, 10);
  if ( v1 )
    *v1 = 0;
  result = (unsigned __int8)v3[0];
  if ( v3[0] )
  {
    sub_E088(v3);
    return 1;
  }
  return result;
}
