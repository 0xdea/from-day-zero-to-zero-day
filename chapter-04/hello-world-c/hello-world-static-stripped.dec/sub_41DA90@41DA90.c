__int64 sub_41DA90()
{
  __int64 v0; // x19
  __int64 v1; // x20
  __int64 v2; // x21
  __int64 v3; // x22
  int v4; // w0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  double v11; // d0
  double v12; // d1
  double v13; // d2
  double v14; // d3
  double v15; // d4
  double v16; // d5
  double v17; // d6
  double v18; // d7
  double v19; // d0
  double v20; // d1
  double v21; // d2
  double v22; // d3
  double v23; // d4
  double v24; // d5
  double v25; // d6
  double v26; // d7
  unsigned __int64 v27; // x3
  __int64 result; // x0
  __int64 v29; // x23
  __int64 v30; // x0
  unsigned __int64 v31; // x22
  unsigned __int64 v32; // x0
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  struct stat v41; // [xsp+8h] [xbp-88h] BYREF
  __int64 v42; // [xsp+A0h] [xbp+10h]
  __int64 v43; // [xsp+A8h] [xbp+18h]
  __int64 v44; // [xsp+B0h] [xbp+20h]
  __int64 v45; // [xsp+B8h] [xbp+28h]

  v41.__unused[1] = qword_48DD60;
  qword_496880 = sub_422890("GCONV_PATH");
  if ( qword_496880 )
  {
LABEL_19:
    result = 0xFFFFFFFFLL;
    goto LABEL_14;
  }
  v42 = v0;
  v43 = v1;
  v4 = sub_410EE0("/usr/lib/aarch64-linux-gnu/gconv/gconv-modules.cache", 0x80000);
  LODWORD(v0) = v4;
  if ( v4 != -1 )
  {
    if ( (sub_410930(v4, &v41) & 0x80000000) != 0 || v41.st_size <= 0xFuLL )
      goto LABEL_27;
    v44 = v2;
    v45 = v3;
    qword_4968A0 = v41.st_size;
    qword_496898 = sub_4117E0(0, v41.st_size, 1, 1, v0, 0);
    if ( qword_496898 == -1 )
    {
      v29 = qword_4968A0;
      v30 = sub_40B890(qword_4968A0, v11, v12, v13, v14, v15, v16, v17, v18, v5, v6, v7, v8, v9, v10);
      qword_496898 = v30;
      if ( !v30 )
        goto LABEL_31;
      v31 = 0;
      while ( 1 )
      {
        v32 = sub_410B30(v0, (void *)(v30 + v31), v29 - v31);
        if ( v32 == -1 )
        {
          sub_40C1A0(qword_496898, v33, v34, v35, v36, v37, v38, v39, v40);
          qword_496898 = 0;
          v2 = v44;
          v3 = v45;
          goto LABEL_27;
        }
        v29 = qword_4968A0;
        v31 += v32;
        if ( qword_4968A0 <= v31 )
          break;
        v30 = qword_496898;
      }
      dword_4968A8 = 1;
    }
    sub_410CD0(v0);
    if ( *(_DWORD *)qword_496898 == 536937252
      && *(unsigned __int16 *)(qword_496898 + 4) < (unsigned __int64)qword_4968A0 )
    {
      v27 = *(unsigned __int16 *)(qword_496898 + 6);
      if ( qword_4968A0 > v27 )
      {
        if ( *(_WORD *)(qword_496898 + 8) )
        {
          if ( qword_4968A0 >= v27 + 4LL * *(unsigned __int16 *)(qword_496898 + 8)
            && qword_4968A0 > (unsigned __int64)*(unsigned __int16 *)(qword_496898 + 10) )
          {
            result = 0;
            if ( qword_4968A0 >= (unsigned __int64)*(unsigned __int16 *)(qword_496898 + 12) )
            {
              v0 = v42;
              v1 = v43;
              v2 = v44;
              v3 = v45;
              goto LABEL_14;
            }
          }
        }
      }
    }
    if ( dword_4968A8 )
    {
      sub_40C1A0(qword_496898, v19, v20, v21, v22, v23, v24, v25, v26);
      dword_4968A8 = 0;
    }
    else
    {
      sub_4118C0((void *)qword_496898, qword_4968A0);
    }
    v2 = v44;
    v3 = v45;
    qword_496898 = 0;
    v0 = v42;
    v1 = v43;
    goto LABEL_19;
  }
  v0 = v42;
  v1 = v43;
  result = 0xFFFFFFFFLL;
LABEL_14:
  while ( v41.__unused[1] != qword_48DD60 )
  {
    v42 = v0;
    v43 = v1;
    v44 = v2;
    v45 = v3;
    sub_412340();
LABEL_31:
    v2 = v44;
    v3 = v45;
LABEL_27:
    sub_410CD0(v0);
    v0 = v42;
    v1 = v43;
    result = 0xFFFFFFFFLL;
  }
  return result;
}
