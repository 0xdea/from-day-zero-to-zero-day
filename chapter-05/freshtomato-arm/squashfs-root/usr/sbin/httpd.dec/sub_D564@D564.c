int __fastcall sub_D564(const char *a1, const char *a2, const char *a3, const char *a4)
{
  int v8; // r10
  int v9; // r5
  char *v10; // r0
  FILE *v11; // r7
  const char *v12; // r10
  const char *v13; // r1
  char *v14; // r3
  const char *v15; // r0
  const char *v16; // r2
  FILE *v17; // r0
  FILE *v18; // r6
  char s[28]; // [sp+1Ch] [bp-2Ch] BYREF
  char v21[16]; // [sp+38h] [bp-10h] BYREF
  char name[16]; // [sp+48h] [bp+0h] BYREF

  strcpy(name, "/tmp/.wxXXXXXX");
  strcpy(v21, "/tmp/.wqXXXXXX");
  v8 = mkstemp(name);
  if ( v8 < 0 )
    goto LABEL_6;
  if ( a3 )
  {
    v9 = mkstemp(v21);
    if ( v9 < 0 )
    {
      close(v8);
      v10 = name;
LABEL_5:
      unlink(v10);
      goto LABEL_6;
    }
  }
  else
  {
    v9 = -1;
  }
  v11 = fdopen(v8, "wb");
  if ( !v11 )
  {
    close(v8);
    unlink(name);
    if ( a3 )
      goto LABEL_27;
LABEL_6:
    exit(1);
  }
  if ( dword_30CB0 )
    v12 = "POST";
  else
    v12 = "GET";
  v14 = getenv("PATH");
  if ( a2 )
  {
    v15 = &::s;
  }
  else
  {
    a2 = a1;
    v15 = "./";
  }
  if ( a3 )
  {
    v13 = v21;
    v16 = "<";
  }
  else
  {
    v16 = &::s;
  }
  if ( !a3 )
    v13 = v16;
  fprintf(
    v11,
    "#!/bin/sh\nexport REQUEST_METHOD=\"%s\"\nexport PATH=%s\n. /etc/profile\ncd %s\n%s%s %s%s\n",
    v12,
    v14,
    a4,
    v15,
    a2,
    v16,
    v13); // VULN? cmd inj
  fclose(v11);
  chmod(name, 0x1C0u);
  if ( a3 )
  {
    v17 = fdopen(v9, "wb");
    v18 = v17;
    if ( v17 )
    {
      fprintf(v17, "%s\n", a3);
      fclose(v18);
      goto LABEL_28;
    }
    unlink(name);
LABEL_27:
    close(v9);
    v10 = v21;
    goto LABEL_5;
  }
LABEL_28:
  snprintf(s, 0x19u, "%s 2>&1", name);
  sub_13D58(s); // KKK
  unlink(v21);
  return unlink(name);
}
