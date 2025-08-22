int __fastcall sub_16EB8(int a1, size_t a2)
{
  int v2; // r0
  void *v3; // r4
  const char *v4; // r5
  void *v5; // r0
  int v6; // r7
  int v7; // r0
  int result; // r0
  size_t size[2]; // [sp+Ch] [bp-74h] BYREF
  char v10; // [sp+14h] [bp-6Ch] BYREF
  char name[63]; // [sp+15h] [bp-6Bh] BYREF
  char dest[44]; // [sp+54h] [bp-2Ch] BYREF

  size[0] = a2;
  strcpy(dest, "/tmp/restoreXXXXXX");
  sub_C450(a1);
  v2 = mkstemp(dest);
  if ( v2 < 0 )
  {
    v4 = "Error creating file";
    goto LABEL_14;
  }
  close(v2);
  dword_30B30 = (int)dest;
  snprintf(&v10, 0x40u, ">%s.msg", dest);
  v3 = (void *)sub_C358(size);
  if ( !v3 )
  {
    v4 = "Error reading file";
    goto LABEL_15;
  }
  if ( size[0] - 64 > (unsigned int)&unk_1FFC0 )
  {
    v4 = "Invalid file";
LABEL_14:
    v3 = 0;
    goto LABEL_15;
  }
  v5 = malloc(size[0]);
  v3 = v5;
  if ( v5 )
  {
    v6 = sub_13B54(v5);
    size[0] -= v6;
    if ( f_write(dest, v3, v6, 0, 384) == v6 )
    {
      dword_30C9C = 1;
      sub_10BFC();
      v7 = eval(off_30B28, &v10, 0, 0);
      if ( v7 )
        v7 = sub_E5AC(name);
      nvram_commit(v7);
      v4 = 0;
      unlink(name);
    }
    else
    {
      v4 = "Error writing temporary file";
    }
  }
  else
  {
    v4 = "Not enough memory";
  }
LABEL_15:
  free(v3);
  if ( v4 )
    sub_E088(v4);
  result = sub_13BF8(size[0]);
  if ( dest[0] )
    return unlink(dest);
  return result;
}
