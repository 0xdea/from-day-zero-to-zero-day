__int64 *__fastcall sub_416CC0(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // x19
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x24
  __int64 v9; // x25
  __int64 v10; // x26
  __int64 v11; // x27
  __int64 v12; // x28
  int *v13; // x0
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  int v22; // w0
  __int64 v23; // x2
  __int64 v24; // x23
  unsigned __int8 *v25; // x28
  unsigned __int8 *v26; // x0
  void *v27; // x4
  int v28; // t1
  unsigned __int8 v29; // w3
  unsigned __int8 *v30; // x23
  int v31; // t1
  unsigned __int64 v32; // x0
  __int64 *result; // x0
  __int64 v34; // x2
  unsigned int v35; // w0
  unsigned int v36; // t1
  unsigned __int8 *v37; // x3
  _DWORD *v38; // x6
  unsigned __int64 v39; // x5
  __int64 v40; // x3
  int v41; // w0
  unsigned int v42; // t1
  _BYTE *v43; // x24
  unsigned int v44; // w0
  unsigned int v45; // t1
  _QWORD *v46; // x28
  int v47; // w0
  int v48; // w3
  __int64 v49; // x0
  __int64 v52; // [xsp+18h] [xbp-28h]
  unsigned __int8 *v53; // [xsp+28h] [xbp-18h] BYREF
  __int64 v54; // [xsp+30h] [xbp-10h] BYREF
  __int64 v55; // [xsp+38h] [xbp-8h]
  int *v56; // [xsp+50h] [xbp+10h]
  __int64 v57; // [xsp+58h] [xbp+18h]
  __int64 v58; // [xsp+60h] [xbp+20h]
  __int64 v59; // [xsp+68h] [xbp+28h]
  __int64 v60; // [xsp+70h] [xbp+30h]
  __int64 v61; // [xsp+78h] [xbp+38h]
  __int64 v62; // [xsp+80h] [xbp+40h]
  __int64 v63; // [xsp+88h] [xbp+48h]
  __int64 v64; // [xsp+90h] [xbp+50h]
  __int64 v65; // [xsp+98h] [xbp+58h]

  v55 = qword_48DD60;
  v13 = (int *)sub_428EF0(a1, "rce");
  v53 = 0;
  v54 = 0;
  if ( v13 )
  {
    v3 = v13;
    v22 = *v13;
    *v3 = v22 | 0x8000;
    if ( (v22 & 0x10) != 0 )
    {
      v32 = 0;
    }
    else
    {
      v65 = v12;
      v60 = v7;
      v61 = v8;
      do
      {
        v24 = sub_429370(&v53, &v54, 10, v3);
        if ( v24 < 0 )
          break;
        v25 = v53;
        v26 = (unsigned __int8 *)sub_42F180(v53, 35, v23);
        if ( v26 )
        {
          *v26 = 0;
        }
        else if ( v25[v24 - 1] == 10 )
        {
          v25[v24 - 1] = 0;
        }
        if ( (word_45E6A0[*v25] & 0x2000) != 0 )
        {
          do
            v28 = *++v25;
          while ( (word_45E6A0[v28] & 0x2000) != 0 );
        }
        if ( v26 != v25 )
        {
          v29 = *v25;
          v30 = v25;
          if ( *v25 )
          {
            do
            {
              if ( (word_45E6A0[v29] & 0x2000) != 0 )
                break;
              v31 = *++v30;
              v29 = v31;
            }
            while ( v31 );
            if ( v30 - v25 == 5 )
            {
              if ( *(_DWORD *)v25 == 1634298977 && v25[4] == 115 )
              {
                v34 = *v30;
                v35 = *v30;
                if ( (word_45E6A0[v34] & 0x2000) != 0 )
                {
                  do
                  {
                    v36 = *++v30;
                    v34 = v36;
                    v35 = v36;
                  }
                  while ( (word_45E6A0[(unsigned __int8)v36] & 0x2000) != 0 );
                }
                if ( v35 )
                {
                  v37 = v30;
                  v38 = dword_45DDA0;
                  while ( (word_45E6A0[v34] & 0x2000) == 0 )
                  {
                    *v37++ = dword_45DDA0[v34];
                    if ( !*v37 )
                      goto LABEL_17;
                    v34 = *v37;
                  }
                  *v37 = 0;
                  v39 = v37[1];
                  v40 = (__int64)(v37 + 1);
                  v52 = v40;
                  v41 = v39;
                  if ( (word_45E6A0[(unsigned __int8)v39] & 0x2000) != 0 )
                  {
                    do
                    {
                      v42 = *(unsigned __int8 *)++v40;
                      v39 = v42;
                      v41 = v42;
                    }
                    while ( (word_45E6A0[(unsigned __int8)v42] & 0x2000) != 0 );
                  }
                  v43 = (_BYTE *)v52;
                  if ( v41 )
                  {
                    while ( (word_45E6A0[v39] & 0x2000) == 0 )
                    {
                      *v43++ = dword_45DDA0[v39];
                      v45 = *(unsigned __int8 *)++v40;
                      v44 = v45;
                      if ( !v45 )
                        break;
                      v39 = v44;
                    }
                    if ( (_BYTE *)v52 != v43 )
                    {
                      *v43 = 0;
                      v46 = (_QWORD *)qword_496858;
LABEL_42:
                      if ( v46 )
                      {
                        while ( 1 )
                        {
                          v47 = sub_42F240(v30, *v46);
                          if ( !v47 )
                            break;
                          if ( v47 < 0 )
                          {
                            v46 = (_QWORD *)v46[4];
                            goto LABEL_42;
                          }
                          v46 = (_QWORD *)v46[6];
                          if ( !v46 )
                            goto LABEL_46;
                        }
                      }
                      else
                      {
LABEL_46:
                        sub_416C00(
                          (__int64)v30,
                          v52,
                          (__int64)(v43 + 1),
                          v40,
                          v27,
                          (void *)v39,
                          v38,
                          v14,
                          v15,
                          v16,
                          v17,
                          v18,
                          v19,
                          v20,
                          v21);
                      }
                    }
                  }
                }
              }
            }
            else if ( v30 - v25 == 6 && *(_DWORD *)v25 == 1969516397 && *((_WORD *)v25 + 2) == 25964 )
            {
              v48 = dword_496890++;
              sub_416880(v30, a2, a3, v48);
            }
          }
        }
LABEL_17:
        ;
      }
      while ( (*v3 & 0x10) == 0 );
      v7 = v60;
      v8 = v61;
      v12 = v65;
      v32 = (unsigned __int64)v53;
    }
    sub_40C1A0(v32, v14, v15, v16, v17, v18, v19, v20, v21);
    sub_428AD0(v3);
  }
  result = &qword_48DD60;
  if ( v55 != qword_48DD60 )
  {
    v56 = v3;
    v57 = v4;
    v58 = v5;
    v59 = v6;
    v60 = v7;
    v61 = v8;
    v62 = v9;
    v63 = v10;
    v64 = v11;
    v65 = v12;
    v49 = sub_412340();
    return (__int64 *)sub_416FD0(v49);
  }
  return result;
}
