_BYTE *__fastcall sub_42F820(_BYTE *a1, __int64 a2, _BYTE **a3)
{
  _BYTE *v3; // x19
  _BYTE *v6; // x20
  __int64 v7; // x0
  _BYTE *v8; // x19

  v3 = a1;
  if ( !a1 )
    v3 = *a3;
  if ( !*v3 )
    goto LABEL_9;
  v6 = &v3[sub_443410(v3, a2)];
  if ( !*v6 )
  {
    v3 = v6;
LABEL_9:
    *a3 = v3;
    return 0;
  }
  v7 = sub_4431F0(v6, a2);
  v8 = &v6[v7];
  if ( v6[v7] )
  {
    ++v8;
    v6[v7] = 0;
  }
  *a3 = v8;
  return v6;
}
