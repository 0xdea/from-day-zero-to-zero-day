__int64 *__fastcall sub_422520(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // x22
  __int64 v7; // x0
  unsigned __int8 v9; // w3
  __int64 v10; // x19
  __int64 v11; // x1
  int v12; // t1
  __int64 v13; // x0
  __int64 *result; // x0
  __int64 v15; // x0
  __int64 v16; // [xsp+0h] [xbp-20h] BYREF
  _QWORD v17[2]; // [xsp+8h] [xbp-18h] BYREF
  __int64 v18; // [xsp+18h] [xbp-8h]

  v18 = qword_48DD60;
  if ( !a1 )
    goto LABEL_14;
  v6 = ((__int64 (__fastcall *)(__int64, const char *, __int64 *, __int64 *, _QWORD))loc_40E470)(
         a1,
         "plural=",
         a3,
         &qword_48DD60,
         0);
  v7 = ((__int64 (__fastcall *)(__int64, const char *))loc_40E470)(a1, "nplurals=");
  if ( !v6 || v7 == 0 )
    goto LABEL_14;
  v9 = *(_BYTE *)(v7 + 9);
  v10 = v7 + 9;
  if ( !v9 )
    goto LABEL_14;
  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 72);
  while ( (*(_WORD *)(v11 + 2LL * v9) & 0x2000) != 0 )
  {
    v12 = *(unsigned __int8 *)++v10;
    v9 = v12;
    if ( !v12 )
      goto LABEL_14;
  }
  if ( (unsigned __int8)(v9 - 48) > 9u
    || (v13 = sub_423D50(v10, &v16, 10), v16 == v10)
    || (*a3 = v13, v17[0] = v6 + 7, (unsigned int)sub_421C10(v17)) )
  {
LABEL_14:
    *a2 = &unk_48C3D8;
    *a3 = 2;
  }
  else
  {
    *a2 = v17[1];
  }
  result = &qword_48DD60;
  if ( v18 != qword_48DD60 )
  {
    v15 = sub_412340();
    return (__int64 *)sub_422650(v15);
  }
  return result;
}
