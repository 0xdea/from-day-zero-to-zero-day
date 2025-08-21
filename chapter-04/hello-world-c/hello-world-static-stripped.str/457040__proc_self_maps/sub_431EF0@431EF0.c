__int64 __fastcall sub_431EF0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x25
  __int64 v7; // x26
  __int64 v8; // x27
  __int64 v9; // x29
  __int64 v10; // x30
  __int64 result; // x0
  __int64 v12; // x0
  unsigned __int64 v13; // x1
  unsigned __int64 v14; // x20
  unsigned __int64 v15; // x22
  int *v16; // x0
  int *v17; // x21
  int v18; // w0
  unsigned __int64 v19; // x19
  _BYTE *v20; // x1
  _BYTE *v21; // x0
  unsigned __int64 v22; // x0
  _BYTE *v23; // x2
  unsigned __int64 v26; // x1
  unsigned int v27; // w1
  __int64 v28; // x0
  _BYTE *v29; // [xsp+8h] [xbp-98h] BYREF
  __int64 v30; // [xsp+10h] [xbp-90h] BYREF
  _BYTE *v31; // [xsp+18h] [xbp-88h] BYREF
  _BYTE *v32; // [xsp+20h] [xbp-80h] BYREF
  __int64 v33; // [xsp+28h] [xbp-78h]
  _QWORD *v34; // [xsp+30h] [xbp-70h]
  __int64 v35; // [xsp+38h] [xbp-68h]
  unsigned __int64 v36; // [xsp+60h] [xbp-40h]
  __int64 v37; // [xsp+68h] [xbp-38h]
  __int64 v38; // [xsp+70h] [xbp-30h]
  __int64 v39; // [xsp+78h] [xbp-28h]
  __int64 v40; // [xsp+80h] [xbp-20h]
  _QWORD v41[2]; // [xsp+90h] [xbp-10h] BYREF

  if ( a4 >= a3 )
    return j_ifunc_40DD80(a1, a2, a3);
  v41[0] = v9;
  v41[1] = v10;
  v12 = sub_431EB0();
  v34 = v41;
  v35 = v10;
  v14 = v13;
  v15 = v12;
  v33 = qword_48DD60;
  v16 = (int *)sub_428EF0("/proc/self/maps");
  if ( v16 )
  {
    v17 = v16;
    v18 = *v16;
    *v17 = v18 | 0x8000;
    v29 = 0;
    v30 = 0;
    if ( (v18 & 0x10) == 0 )
    {
      v4 = v15 + v14;
      do
      {
        if ( sub_429370(&v29, &v30, 10, v17) <= 0 )
          break;
        v19 = sub_423D50(v29, &v31, 16);
        v20 = v31;
        if ( v31 == v29 )
          break;
        v21 = ++v31;
        if ( *v20 != 45 )
          break;
        v22 = sub_423D50(v21, &v32, 16);
        v23 = v32;
        if ( v32 == v31 )
          break;
        ++v32;
        if ( *v23 != 32 )
          break;
        if ( v4 > v19 && v15 < v22 )
        {
          v32 = v23 + 2;
          if ( v23[1] != 114 )
            break;
          v32 = v23 + 3;
          if ( v23[2] != 45 )
            break;
          if ( v15 >= v19 && v4 <= v22 )
            goto LABEL_36;
          if ( v15 < v19 )
          {
            v26 = v14 - v4 + v19;
            v14 = v14 + v19 - v22;
            if ( v4 <= v22 )
              v14 = v26;
          }
          else
          {
            v14 = v15 + v14 - v22;
          }
          if ( !v14 )
          {
LABEL_36:
            sub_428AD0(v17);
            sub_40C1A0(v29);
            result = 1;
            goto LABEL_28;
          }
        }
      }
      while ( (*v17 & 0x10) == 0 );
    }
    sub_428AD0(v17);
    sub_40C1A0(v29);
    if ( v14 )
      goto LABEL_27;
  }
  else
  {
    v27 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( v27 > 0x18 || ((0x1002004uLL >> v27) & 1) == 0 )
    {
LABEL_27:
      result = 0xFFFFFFFFLL;
      goto LABEL_28;
    }
  }
  result = 1;
LABEL_28:
  if ( v33 != qword_48DD60 )
  {
    v36 = v4;
    v37 = v5;
    v38 = v6;
    v39 = v7;
    v40 = v8;
    v28 = sub_412340();
    sub_432150(v28);
  }
  return result;
}
