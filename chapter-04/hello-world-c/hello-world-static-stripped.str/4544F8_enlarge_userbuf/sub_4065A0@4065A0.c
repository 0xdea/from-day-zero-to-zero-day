__int64 __fastcall sub_4065A0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // x22
  __int64 v5; // x26
  __int64 v6; // x27
  __int64 v8; // x25
  __int64 v11; // x23
  __int64 v12; // x26
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x0
  __int64 v18; // x4
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x0

  v3 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 64) - v3 >= a2 )
    return 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 48);
  if ( (*(_DWORD *)a1 & 1) != 0 )
    return 1;
  v8 = a2 + 100;
  v11 = sub_40B890(a2 + 100);
  if ( !v11 )
    return 1;
  if ( v3 )
  {
    sub_412300();
    sub_40C1A0(v3);
    *(_QWORD *)(a1 + 56) = 0;
  }
  IO_setb(a1, v11, v11 + v8, 1);
  v12 = v6 - v5;
  v13 = *(_QWORD *)(a1 + 8);
  if ( a3 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    v19 = v11 + *(_QWORD *)(a1 + 32) - v3;
    v20 = v11 + *(_QWORD *)(a1 + 40) - v3;
    v21 = v11 + *(_QWORD *)(a1 + 48) - v3;
    *(_QWORD *)(a1 + 8) = v11 + v13 - v3;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v11;
    *(_QWORD *)(a1 + 32) = v19;
    *(_QWORD *)(a1 + 40) = v20;
    *(_QWORD *)(a1 + 48) = v21;
    if ( a2 >= v12 )
      goto LABEL_9;
    goto LABEL_12;
  }
  v14 = *(_QWORD *)(a1 + 64);
  v15 = v11 + *(_QWORD *)(a1 + 24) - v3;
  v16 = v11 + *(_QWORD *)(a1 + 16) - v3;
  v17 = v11 + *(_QWORD *)(a1 + 40) - v3;
  *(_QWORD *)(a1 + 8) = v11 + v13 - v3;
  *(_QWORD *)(a1 + 16) = v16;
  *(_QWORD *)(a1 + 24) = v15;
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 40) = v17;
  *(_QWORD *)(a1 + 48) = v14;
  if ( a2 < v12 )
  {
LABEL_12:
    sub_41F250("offset >= oldend", "strops.c", 225, "enlarge_userbuf");
    return 1;
  }
LABEL_9:
  ifunc_40DE70(v11 + v12, 0, a2 - v12);
  return 0;
}
