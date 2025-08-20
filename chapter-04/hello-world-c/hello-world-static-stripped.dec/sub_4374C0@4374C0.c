__int64 __fastcall sub_4374C0(const char *a1, size_t *a2, int a3)
{
  int v5; // w0
  int v7; // w19
  size_t v8; // x1
  unsigned __int64 v9; // x20
  char v10; // [xsp+30h] [xbp+30h] BYREF
  size_t v11; // [xsp+60h] [xbp+60h]

  v5 = sub_410EE0(a1, 0x80000);
  if ( v5 < 0 )
    return -1;
  v7 = v5;
  if ( (sub_410930(v5, (struct stat *)&v10) & 0x80000000) == 0 && (v8 = v11, *a2 = v11, v8) )
    v9 = sub_4117E0(0, v8, a3, 2, v7, 0);
  else
    v9 = -1;
  sub_410CD0(v7);
  return v9;
}
