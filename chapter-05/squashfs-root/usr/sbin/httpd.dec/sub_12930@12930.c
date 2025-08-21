int sub_12930()
{
  int *v0; // r4
  int *v1; // r6
  const char *wanface; // r0
  int i; // r2
  int v4; // t1
  int *v5; // r6
  int j; // r2
  int v7; // t1
  const char *v8; // r0
  int *v9; // r6
  int k; // r2
  int v11; // t1
  int *v12; // r6
  int m; // r2
  int v14; // t1
  const char *v15; // r0
  int *v16; // r6
  int n; // r2
  int v18; // t1
  int *v19; // r6
  int ii; // r2
  int v21; // t1
  const char *v22; // r0
  int *v23; // r6
  int jj; // r2
  int v25; // t1
  int kk; // r2
  int v27; // t1
  int v29; // [sp+0h] [bp-40h] BYREF
  _BYTE v30[40]; // [sp+4h] [bp-3Ch] BYREF
  const char *v31; // [sp+2Ch] [bp-14h] BYREF

  v0 = &v29;
  v1 = &v29;
  v31 = "1";
  sub_1193C(1, &v31);
  memset(v30, 0, sizeof(v30));
  wanface = (const char *)get_wanface("wan");
  sub_1171C(wanface, (int)v30);
  sub_13954("\nqrates1_out = [0,");
  for ( i = 32; ; i = 44 )
  {
    v4 = v1[1];
    ++v1;
    sub_13970(0, "%c%lu", i, v4);
    if ( v1 == (int *)&v30[36] )
      break;
  }
  sub_13954("];");
  memset(v30, 0, sizeof(v30));
  sub_1171C("ifb0", (int)v30);
  v5 = &v29;
  sub_13954("\nqrates1_in = [0,");
  for ( j = 32; ; j = 44 )
  {
    v7 = v5[1];
    ++v5;
    sub_13970(0, "%c%lu", j, v7);
    if ( v5 == (int *)&v30[36] )
      break;
  }
  sub_13954("];");
  memset(v30, 0, sizeof(v30));
  v8 = (const char *)get_wanface("wan2");
  v9 = &v29;
  sub_1171C(v8, (int)v30);
  sub_13954("\nqrates2_out = [0,");
  for ( k = 32; ; k = 44 )
  {
    v11 = v9[1];
    ++v9;
    sub_13970(0, "%c%lu", k, v11);
    if ( v9 == (int *)&v30[36] )
      break;
  }
  sub_13954("];");
  memset(v30, 0, sizeof(v30));
  sub_1171C("ifb1", (int)v30);
  v12 = &v29;
  sub_13954("\nqrates2_in = [0,");
  for ( m = 32; ; m = 44 )
  {
    v14 = v12[1];
    ++v12;
    sub_13970(0, "%c%lu", m, v14);
    if ( v12 == (int *)&v30[36] )
      break;
  }
  sub_13954("];");
  memset(v30, 0, sizeof(v30));
  v15 = (const char *)get_wanface("wan3");
  v16 = &v29;
  sub_1171C(v15, (int)v30);
  sub_13954("\nqrates3_out = [0,");
  for ( n = 32; ; n = 44 )
  {
    v18 = v16[1];
    ++v16;
    sub_13970(0, "%c%lu", n, v18);
    if ( v16 == (int *)&v30[36] )
      break;
  }
  sub_13954("];");
  memset(v30, 0, sizeof(v30));
  sub_1171C("ifb2", (int)v30);
  v19 = &v29;
  sub_13954("\nqrates3_in = [0,");
  for ( ii = 32; ; ii = 44 )
  {
    v21 = v19[1];
    ++v19;
    sub_13970(0, "%c%lu", ii, v21);
    if ( v19 == (int *)&v30[36] )
      break;
  }
  sub_13954("];");
  memset(v30, 0, sizeof(v30));
  v22 = (const char *)get_wanface("wan4");
  v23 = &v29;
  sub_1171C(v22, (int)v30);
  sub_13954("\nqrates4_out = [0,");
  for ( jj = 32; ; jj = 44 )
  {
    v25 = v23[1];
    ++v23;
    sub_13970(0, "%c%lu", jj, v25);
    if ( v23 == (int *)&v30[36] )
      break;
  }
  sub_13954("];");
  memset(v30, 0, sizeof(v30));
  sub_1171C("ifb3", (int)v30);
  sub_13954("\nqrates4_in = [0,");
  for ( kk = 32; ; kk = 44 )
  {
    v27 = v0[1];
    ++v0;
    sub_13970(0, "%c%lu", kk, v27);
    if ( v0 == (int *)&v30[36] )
      break;
  }
  return sub_13954("];");
}
