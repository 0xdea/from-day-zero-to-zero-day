__int64 sub_411D70()
{
  __int64 v0; // x19
  __int64 v1; // x20
  __int64 v2; // x0
  unsigned int v3; // w20
  __int64 v4; // x3
  __int64 v5; // x0
  __int64 v6; // x20
  _BYTE *v7; // x1
  __int64 result; // x0
  int v9; // w2
  __int64 v10; // x0
  __int64 v11; // x1
  _BYTE v12[24]; // [xsp+0h] [xbp-20h] BYREF
  __int64 v13; // [xsp+18h] [xbp-8h]
  __int64 v14; // [xsp+30h] [xbp+10h]
  __int64 v15; // [xsp+38h] [xbp+18h]

  v13 = qword_48DD60;
  v2 = sub_410EE0("/sys/kernel/mm/transparent_hugepage/hpage_pmd_size", 0, &qword_48DD60);
  if ( (_DWORD)v2 == -1 )
    goto LABEL_8;
  v15 = v1;
  v3 = v2;
  v4 = sub_410FC0(v2, v12, 21);
  v5 = v3;
  v6 = v4;
  sub_410CD0(v5);
  if ( v6 <= 0 )
  {
    v1 = v15;
LABEL_8:
    result = 0;
    goto LABEL_9;
  }
  v7 = v12;
  result = 0;
  do
  {
    v9 = (unsigned __int8)*v7;
    if ( v9 == 10 )
      break;
    ++v7;
    result = v9 - 48 + 10 * result;
  }
  while ( &v12[v6] != v7 );
  v1 = v15;
LABEL_9:
  if ( v13 != qword_48DD60 )
  {
    v14 = v0;
    v15 = v1;
    v10 = sub_412340(result, &qword_48DD60, 0, v13 - qword_48DD60);
    return sub_411E50(v10, v11);
  }
  return result;
}
