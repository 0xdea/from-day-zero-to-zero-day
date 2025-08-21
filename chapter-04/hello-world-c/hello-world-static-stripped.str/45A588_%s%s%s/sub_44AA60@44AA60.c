const char *sub_44AA60()
{
  const char *v0; // x21
  __int64 v1; // x22
  __int64 v2; // x23
  unsigned __int64 StatusReg; // x20
  int *v4; // x19
  char *v5; // x1
  int v6; // w3
  const char *v7; // x22
  const char *v8; // x0
  int v9; // w0
  const char *result; // x0
  const char *v11; // x20
  const char *v12; // x0
  int v13; // w0
  int v14; // w0
  int v15; // w0
  __int64 v16; // x0
  const char *v17; // [xsp+0h] [xbp-10h] BYREF
  __int64 v18; // [xsp+8h] [xbp-8h]
  const char *v19; // [xsp+30h] [xbp+20h]
  __int64 v20; // [xsp+38h] [xbp+28h]
  __int64 v21; // [xsp+40h] [xbp+30h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v18 = qword_48DD60;
  v4 = *(int **)(StatusReg + 96);
  if ( !v4 )
    goto LABEL_25;
  if ( v4 == (int *)-1LL )
  {
    result = "out of memory";
    *(_QWORD *)(StatusReg + 96) = 0;
    goto LABEL_10;
  }
  v5 = (char *)*((_QWORD *)v4 + 2);
  if ( !v5 )
    goto LABEL_25;
  if ( (*((_BYTE *)v4 + 5) & 1) != 0 )
  {
    *(_QWORD *)(StatusReg + 96) = 0;
    v15 = *((unsigned __int8 *)v4 + 4);
    if ( v15 == 1 )
    {
      sub_4323C4(v5);
    }
    else if ( v15 == 2 )
    {
      sub_40C1A0(v5);
    }
    sub_40C1A0(v4);
LABEL_25:
    result = 0;
    goto LABEL_10;
  }
  v6 = *v4;
  v20 = v1;
  v0 = (const char *)*((_QWORD *)v4 + 1);
  if ( v6 )
  {
    v7 = ": ";
    *(_DWORD *)(StatusReg + 40) = v6;
    if ( !*v0 )
      v7 = "";
    v8 = (const char *)sub_43CBF0("libc", v5, 5);
    v9 = sub_44D280(&v17, "%s%s%s: %m", v0, v7, v8);
    *(_DWORD *)(StatusReg + 40) = *v4;
    *((_BYTE *)v4 + 5) = 1;
    if ( v9 < 0 )
    {
LABEL_9:
      v1 = v20;
      result = (const char *)*((_QWORD *)v4 + 2);
      goto LABEL_10;
    }
  }
  else
  {
    v11 = ": ";
    if ( !*v0 )
      v11 = "";
    v12 = (const char *)sub_43CBF0("libc", v5, 5);
    v13 = sub_44D280(&v17, "%s%s%s", v0, v11, v12);
    *((_BYTE *)v4 + 5) = 1;
    if ( v13 < 0 )
      goto LABEL_9;
  }
  v14 = *((unsigned __int8 *)v4 + 4);
  if ( v14 == 1 )
  {
    sub_4323C4(*((char **)v4 + 2));
  }
  else if ( v14 == 2 )
  {
    sub_40C1A0(*((_QWORD *)v4 + 2));
  }
  result = v17;
  *((_BYTE *)v4 + 4) = 2;
  v1 = v20;
  *((_QWORD *)v4 + 2) = result;
LABEL_10:
  if ( v18 != qword_48DD60 )
  {
    v19 = v0;
    v20 = v1;
    v21 = v2;
    v16 = sub_412340();
    return (const char *)sub_44AC50(v16);
  }
  return result;
}
