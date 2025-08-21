int __fastcall sub_D564(const char *a1, const char *a2, const char *a3, const char *a4, int a5)
{
  int v9; // r10
  int v10; // r5
  char *v11; // r0
  FILE *v12; // r7
  const char *v13; // r10
  const char *v14; // r1
  char *v15; // r3
  const char *v16; // r0
  const char *v17; // r2
  FILE *v18; // r0
  FILE *v19; // r6
  char s[28]; // [sp+1Ch] [bp-2Ch] BYREF
  char v22[16]; // [sp+38h] [bp-10h] BYREF
  char name[16]; // [sp+48h] [bp+0h] BYREF

  strcpy(name, "/tmp/.wxXXXXXX");
  strcpy(v22, "/tmp/.wqXXXXXX");
  v9 = mkstemp(name);
  if ( v9 < 0 )
    goto LABEL_6;
  if ( a3 )
  {
    v10 = mkstemp(v22);
    if ( v10 < 0 )
    {
      close(v9);
      v11 = name;
LABEL_5:
      unlink(v11);
      goto LABEL_6;
    }
  }
  else
  {
    v10 = -1;
  }
  v12 = fdopen(v9, "wb");
  if ( !v12 )
  {
    close(v9);
    unlink(name);
    if ( a3 )
      goto LABEL_27;
LABEL_6:
    exit(1);
  }
  if ( dword_30CB0 )
    v13 = "POST";
  else
    v13 = "GET";
  v15 = getenv("PATH");
  if ( a2 )
  {
    v16 = &::s;
  }
  else
  {
    a2 = a1;
    v16 = "./";
  }
  if ( a3 )
  {
    v14 = v22;
    v17 = "<";
  }
  else
  {
    v17 = &::s;
  }
  if ( !a3 )
    v14 = v17;
  fprintf(
    v12,
    "#!/bin/sh\nexport REQUEST_METHOD=\"%s\"\nexport PATH=%s\n. /etc/profile\ncd %s\n%s%s %s%s\n",
    v13,
    v15,
    a4,
    v16,
    a2,
    v17,
    v14);
  fclose(v12);
  chmod(name, 0x1C0u);
  if ( a3 )
  {
    v18 = fdopen(v10, "wb");
    v19 = v18;
    if ( v18 )
    {
      fprintf(v18, "%s\n", a3);
      fclose(v19);
      goto LABEL_28;
    }
    unlink(name);
LABEL_27:
    close(v10);
    v11 = v22;
    goto LABEL_5;
  }
LABEL_28:
  snprintf(s, 0x19u, "%s 2>&1", name);
  sub_13D58(s, a5);
  unlink(v22);
  return unlink(name);
}
