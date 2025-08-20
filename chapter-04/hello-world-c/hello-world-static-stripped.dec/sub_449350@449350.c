__int64 __fastcall sub_449350(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v10; // x3
  __int64 v12; // x26
  _QWORD *v13; // x0
  __int64 v14; // x24
  __int64 v15; // x25
  __int64 v16; // x20
  _QWORD *v17; // x21
  __int64 *v18; // x1
  _QWORD *v19; // x28
  _QWORD *v20; // x1
  _QWORD *v21; // x0
  __int64 v22; // x0
  bool v23; // cf
  __int64 *v24; // x6
  __int64 *v25; // x1
  __int64 v26; // x2
  __int64 v27; // t1
  __int64 v28; // x21
  _QWORD *v29; // x19
  __int64 v30; // x23
  _QWORD *v31; // x1
  _BYTE *v32; // x19
  __int64 v33; // x0
  _QWORD *v34; // x21
  __int64 v35; // x2
  __int64 *v36; // x1
  __int64 *v37; // x21
  __int64 v38; // t1
  __int64 i; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // [xsp+0h] [xbp-20030h] BYREF
  _BYTE v45[1008]; // [xsp+10h] [xbp-20020h] BYREF
  __int64 v46; // [xsp+400h] [xbp-1FC30h]
  _QWORD v47[2]; // [xsp+10000h] [xbp-10030h] BYREF
  _BYTE v48[1008]; // [xsp+10010h] [xbp-10020h] BYREF
  __int64 v49; // [xsp+10400h] [xbp-FC30h]
  _BYTE v50[16]; // [xsp+20000h] [xbp-30h] BYREF
  __int64 *v51; // [xsp+20010h] [xbp-20h]
  _BYTE *v52; // [xsp+20018h] [xbp-18h]
  __int64 v53; // [xsp+20028h] [xbp-8h]

  v53 = qword_48DD60;
  if ( a5 <= 31 )
  {
    v10 = 0;
    if ( !a5 )
      goto LABEL_3;
    if ( *a4 > 1u )
    {
      v10 = sub_449700(a1, a2, a3, *a4);
    }
    else
    {
      if ( *a4 != 1 )
      {
        if ( a3 > 0 )
          ifunc_40DE70(a1, 0, 8 * a3);
        goto LABEL_9;
      }
      if ( a3 <= 0 )
      {
LABEL_9:
        v10 = 0;
        goto LABEL_29;
      }
      for ( i = 0; i != a3; ++i )
        *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)(a2 + 8 * i);
      v10 = 0;
    }
LABEL_29:
    *(_QWORD *)(a1 + 8 * a3) = v10;
    v28 = a1 + 8;
    if ( a5 > 1 )
    {
      v29 = a4 + 1;
      v30 = a1 + 8 * a5;
      do
      {
        if ( *v29 <= 1u )
        {
          v10 = 0;
          if ( *v29 == 1 )
            v10 = sub_44D1A0(v28, v28, a2, a3);
        }
        else
        {
          v10 = sub_44D1F0(v28, a2, a3);
        }
        *(_QWORD *)(v28 + 8 * a3) = v10;
        v28 += 8;
        ++v29;
      }
      while ( v28 != v30 );
    }
    goto LABEL_3;
  }
  v12 = 16 * a5 + 15;
  v13 = &v50[-((16 * a5) & 0xFFFFFFFFFFFF0000LL)];
  if ( v50 != (_BYTE *)v13 )
  {
    do
      v49 = 0;
    while ( v47 != v13 );
  }
  v47[0] = 0;
  if ( (unsigned __int16)(16 * a5) >= 0x400uLL )
    v49 = 0;
  v14 = 8 * a5;
  v15 = a3 - a5;
  v16 = a2 + 8 * a5;
  v17 = (_QWORD *)(a1 + 8 * a5);
  v52 = v48;
  sub_4498A0(a1, a2, a4, a5, v48);
  if ( a5 <= v15 )
  {
    v18 = (_QWORD *)((char *)v47 - (v12 & 0xFFFFFFFFFFFF0000LL));
    if ( v47 != v18 )
    {
      do
        v46 = 0;
      while ( &v44 != v18 );
    }
    v44 = 0;
    if ( ((unsigned __int16)v12 & 0xFFF0u) >= 0x400uLL )
      v46 = 0;
    v19 = &v45[v14];
    v51 = (__int64 *)&v45[v14 + 8];
    while ( 1 )
    {
      sub_4498A0(v45, v16, a4, a5, v52);
      v20 = v17;
      v21 = v17;
      v17 = (_QWORD *)((char *)v17 + v14);
      v22 = sub_44D1A0(v21, v20, v45, a5);
      v23 = __CFADD__(v22, *v19);
      *v17 = v22 + *v19;
      v24 = v17 + 1;
      if ( v23 )
        break;
      v26 = a5;
      v25 = v51;
      if ( v51 == v24 )
      {
LABEL_25:
        v15 -= a5;
        v16 += v14;
        if ( a5 > v15 )
          goto LABEL_26;
      }
      else
      {
LABEL_48:
        v15 -= a5;
        v16 += v14;
        j_ifunc_40DC90(v24, v25, 8 * (v26 - 1));
        if ( a5 > v15 )
          goto LABEL_26;
      }
    }
    v25 = v51;
    v26 = a5;
    while ( --v26 )
    {
      v27 = *v25++;
      *v24++ = v27 + 1;
      if ( v27 != -1 )
      {
        if ( v25 != v24 && v26 > 1 )
          goto LABEL_48;
        goto LABEL_25;
      }
    }
    goto LABEL_25;
  }
LABEL_26:
  if ( v15 )
  {
    v31 = a4;
    v32 = v52;
    sub_449350(v52, v31);
    v33 = sub_44D1A0(v17, v17, v32, a5);
    v34 = &v17[(unsigned __int64)v14 / 8];
    v35 = *(_QWORD *)&v32[8 * a5];
    v36 = (__int64 *)&v32[v14 + 8];
    *v34 = v33 + v35;
    v37 = v34 + 1;
    if ( __CFADD__(v33, v35) )
    {
      while ( --v15 )
      {
        v38 = *v36++;
        *v37++ = v38 + 1;
        if ( v38 != -1 )
          goto LABEL_37;
      }
    }
    else
    {
LABEL_37:
      if ( v37 != v36 && v15 > 1 )
        j_ifunc_40DC90(v37, v36, 8 * (v15 - 1));
    }
  }
  v10 = *(_QWORD *)(a1 + 8 * (a3 + a5) - 8);
LABEL_3:
  if ( v53 == qword_48DD60 )
    return v10;
  v40 = sub_412340();
  return sub_449700(v40, v41, v42, v43);
}
