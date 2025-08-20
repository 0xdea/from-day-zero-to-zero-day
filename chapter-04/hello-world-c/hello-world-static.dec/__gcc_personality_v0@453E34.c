__int64 __fastcall _gcc_personality_v0(int a1, char a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 TextRelBase; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  unsigned __int8 *LanguageSpecificData; // x19
  __int64 RegionStart; // x25
  char *encoded_value_with_base_0; // x19
  char v14; // w20
  int v15; // t1
  __int64 v16; // x0
  char *v17; // x19
  int v18; // t1
  unsigned __int64 v19; // x3
  int v20; // w1
  char v21; // t1
  unsigned __int64 v22; // x0
  char *v23; // x19
  char v24; // w20
  char v25; // t1
  __int64 v26; // x21
  int v27; // w1
  char v28; // t1
  unsigned __int64 v29; // x0
  unsigned __int64 v30; // x21
  __int64 IPInfo; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  unsigned __int64 v34; // x23
  __int64 v35; // x0
  char *v36; // x19
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x0
  char *v40; // x19
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x0
  int v44; // t1
  __int64 v45; // x19
  __int64 v46; // x3
  int v47; // [xsp+64h] [xbp+64h] BYREF
  unsigned __int64 v48; // [xsp+68h] [xbp+68h] BYREF
  unsigned __int64 v49; // [xsp+70h] [xbp+70h] BYREF
  unsigned __int64 v50[2]; // [xsp+78h] [xbp+78h] BYREF
  unsigned __int64 v51[4]; // [xsp+88h] [xbp+88h] BYREF
  char v52; // [xsp+A8h] [xbp+A8h]
  char v53; // [xsp+A9h] [xbp+A9h]

  v47 = 0;
  if ( a1 != 1 )
    return 3;
  if ( (a2 & 2) == 0 )
    return 8;
  LanguageSpecificData = (unsigned __int8 *)Unwind_GetLanguageSpecificData((__int64)a5);
  if ( !LanguageSpecificData )
    return 8;
  RegionStart = 0;
  if ( a5 )
    RegionStart = Unwind_GetRegionStart((__int64)a5);
  v15 = *LanguageSpecificData;
  encoded_value_with_base_0 = (char *)(LanguageSpecificData + 1);
  v14 = v15;
  v50[1] = RegionStart;
  if ( v15 != 255 )
  {
    v16 = v14 & 0x70;
    if ( (_DWORD)v16 != 48 )
    {
      if ( (unsigned int)v16 > 0x30 )
      {
        if ( (_DWORD)v16 == 64 )
        {
          TextRelBase = Unwind_GetRegionStart((__int64)a5);
          goto LABEL_15;
        }
        TextRelBase = 0;
        if ( (_DWORD)v16 == 80 )
          goto LABEL_15;
      }
      else
      {
        if ( (_DWORD)v16 == 32 )
        {
          TextRelBase = Unwind_GetTextRelBase((__int64)a5);
LABEL_15:
          encoded_value_with_base_0 = read_encoded_value_with_base_0(v14, TextRelBase, encoded_value_with_base_0, v51);
          goto LABEL_18;
        }
        if ( (unsigned int)v16 <= 0x20 )
        {
          TextRelBase = 0;
          goto LABEL_15;
        }
      }
      abort(v16, TextRelBase, v9, v10);
    }
    TextRelBase = Unwind_GetDataRelBase((__int64)a5);
    goto LABEL_15;
  }
  v51[0] = RegionStart;
LABEL_18:
  v18 = (unsigned __int8)*encoded_value_with_base_0;
  v17 = encoded_value_with_base_0 + 1;
  v19 = 0;
  v52 = v18;
  if ( v18 != 255 )
  {
    v20 = 0;
    do
    {
      v21 = *v17++;
      v22 = (unsigned __int64)(v21 & 0x7F) << v20;
      v20 += 7;
      v19 |= v22;
    }
    while ( v21 < 0 );
    v19 += (unsigned __int64)v17;
  }
  v25 = *v17;
  v23 = v17 + 1;
  v24 = v25;
  v26 = 0;
  v27 = 0;
  v51[2] = v19;
  v53 = v25;
  do
  {
    v28 = *v23++;
    v29 = (unsigned __int64)(v28 & 0x7F) << v27;
    v27 += 7;
    v26 |= v29;
  }
  while ( v28 < 0 );
  v30 = (unsigned __int64)&v23[v26];
  v51[3] = v30;
  IPInfo = Unwind_GetIPInfo((__int64)a5, &v47);
  v34 = IPInfo - (v47 == 0);
  if ( (unsigned __int64)v23 >= v30 )
    return 8;
  while ( 1 )
  {
    v35 = base_of_encoded_value(v24, 0, v32, v33);
    v36 = read_encoded_value_with_base_0(v24, v35, v23, &v48);
    v39 = base_of_encoded_value(v24, 0, v37, v38);
    v40 = read_encoded_value_with_base_0(v24, v39, v36, &v49);
    v43 = base_of_encoded_value(v24, 0, v41, v42);
    v23 = read_encoded_value_with_base_0(v24, v43, v40, v50);
    do
      v44 = *v23++;
    while ( v44 < 0 );
    if ( RegionStart + v48 > v34 )
      return 8;
    if ( RegionStart + v48 + v49 > v34 )
      break;
    if ( (unsigned __int64)v23 >= v30 )
      return 8;
  }
  if ( !v50[0] )
    return 8;
  v45 = v50[0] + v51[0];
  if ( !(v50[0] + v51[0]) )
    return 8;
  Unwind_SetGR(a5, 0, a4, v33);
  Unwind_SetGR(a5, 1, 0, v46);
  Unwind_SetIP((__int64)a5, v45);
  return 7;
}
