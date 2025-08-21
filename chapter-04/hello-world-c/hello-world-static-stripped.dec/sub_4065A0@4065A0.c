__int64 __fastcall sub_4065A0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // x22
  __int64 v4; // x21
  __int64 v6; // x26
  __int64 v7; // x27
  __int64 v9; // x25
  __int64 v12; // x0
  __int64 v13; // x23
  __int64 v14; // x26
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x0
  __int64 v20; // x4
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x0

  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 64) - v3;
  if ( v4 >= a2 )
    return 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 48);
  if ( (*(_DWORD *)a1 & 1) != 0 )
    return 1;
  v9 = a2 + 100;
  v12 = sub_40B890(a2 + 100);
  v13 = v12;
  if ( !v12 )
    return 1;
  if ( v3 )
  {
    sub_412300(v12, v3, v4, v9);
    sub_40C1A0(v3);
    *(_QWORD *)(a1 + 56) = 0;
  }
  IO_setb((int *)a1, v13, v13 + v9, 1);
  v14 = v7 - v6;
  v15 = *(_QWORD *)(a1 + 8);
  if ( a3 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    v21 = v13 + *(_QWORD *)(a1 + 32) - v3;
    v22 = v13 + *(_QWORD *)(a1 + 40) - v3;
    v23 = v13 + *(_QWORD *)(a1 + 48) - v3;
    *(_QWORD *)(a1 + 8) = v13 + v15 - v3;
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 24) = v13;
    *(_QWORD *)(a1 + 32) = v21;
    *(_QWORD *)(a1 + 40) = v22;
    *(_QWORD *)(a1 + 48) = v23;
    if ( a2 >= v14 )
      goto LABEL_9;
    goto LABEL_12;
  }
  v16 = *(_QWORD *)(a1 + 64);
  v17 = v13 + *(_QWORD *)(a1 + 24) - v3;
  v18 = v13 + *(_QWORD *)(a1 + 16) - v3;
  v19 = v13 + *(_QWORD *)(a1 + 40) - v3;
  *(_QWORD *)(a1 + 8) = v13 + v15 - v3;
  *(_QWORD *)(a1 + 16) = v18;
  *(_QWORD *)(a1 + 24) = v17;
  *(_QWORD *)(a1 + 32) = v13;
  *(_QWORD *)(a1 + 40) = v19;
  *(_QWORD *)(a1 + 48) = v16;
  if ( a2 < v14 )
  {
LABEL_12:
    sub_41F250("offset >= oldend", "strops.c", 225, "enlarge_userbuf");
    return 1;
  }
LABEL_9:
  ifunc_40DE70(v13 + v14, 0, a2 - v14);
  return 0;
}
