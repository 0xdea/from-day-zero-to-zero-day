__int64 __fastcall _memcpy_thunderx2(__int64 result, _DWORD *a2, __int64 a3)
{
  char *v3; // x4
  unsigned __int64 v4; // x1
  __int128 v5; // t1
  __int128 v6; // q0
  __int64 v7; // x5
  unsigned __int64 v8; // x14
  __int128 v9; // q4
  __int128 v10; // q1
  __int128 v11; // q2
  __int128 v12; // q1
  __int64 v13; // x7
  int v14; // w7
  char v15; // w6
  char v16; // w7
  __int128 *v17; // x1
  __int128 v18; // q1
  __int128 v19; // q2
  _OWORD *v20; // x3
  __int64 v21; // x2
  __int128 v22; // q3
  __int128 v23; // q3
  __int128 v24; // q6
  __int128 v25; // q5
  __int128 *v26; // x1
  __int128 v27; // q1
  __int128 v28; // q2
  __int64 v29; // x2
  __int64 v30; // x3
  __int128 v32; // q3
  __int128 v33; // q4
  bool v34; // cc
  __int64 v35; // x2
  __int64 v36; // x2
  __int128 v43; // q5
  __int128 v44; // q6
  _OWORD *v45; // x3
  __int128 v46; // q7
  __int128 v47; // q16
  __int128 *v49; // x1
  __int128 v50; // q5
  __int128 v51; // q6
  __int128 *v52; // x1
  __int128 v53; // q7
  __int128 v54; // q16
  _OWORD *v55; // x3
  _OWORD *v56; // x3
  __int64 v57; // x2
  __int128 *v58; // x1
  _OWORD *v59; // x3
  __int128 v60; // q5
  __int128 v61; // q6
  __int128 v62; // q7
  __int128 v63; // q16
  _OWORD *v64; // x3
  __int128 v65; // q1
  __int128 v66; // q2
  __int128 v67; // q3
  __int128 v68; // q4
  _OWORD *v69; // x3

  v3 = (char *)a2 + a3;
  if ( (unsigned __int64)a3 <= 0x10 )
  {
    if ( (unsigned __int64)a3 < 8 )
    {
      if ( (a3 & 4) != 0 )
      {
        v14 = *((_DWORD *)v3 - 1);
        *(_DWORD *)result = *a2;
        *(_DWORD *)(result + a3 - 4) = v14;
      }
      else if ( a3 )
      {
        v15 = *(_BYTE *)a2;
        v16 = *(v3 - 1);
        *(_BYTE *)(result + ((unsigned __int64)a3 >> 1)) = *((_BYTE *)a2 + ((unsigned __int64)a3 >> 1));
        *(_BYTE *)(result + a3 - 1) = v16;
        *(_BYTE *)result = v15;
      }
    }
    else
    {
      v13 = *((_QWORD *)v3 - 1);
      *(_QWORD *)result = *(_QWORD *)a2;
      *(_QWORD *)(result + a3 - 8) = v13;
    }
  }
  else
  {
    v5 = *(_OWORD *)a2;
    v4 = (unsigned __int64)(a2 + 4);
    v6 = v5;
    v7 = result + a3;
    v8 = v4 & 0xF;
    if ( (unsigned __int64)a3 > 0x60 )
    {
      v26 = (__int128 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
      v27 = *v26;
      v28 = v26[1];
      v26 += 2;
      v29 = a3 + v8;
      v30 = result - v8 + 16;
      v32 = *v26;
      v33 = v26[1];
      _X1 = v26 + 2;
      *(_OWORD *)result = v6;
      v34 = v29 < 144;
      v35 = v29 - 144;
      if ( v34 )
      {
LABEL_32:
        v60 = *((_OWORD *)v3 - 4);
        v61 = *((_OWORD *)v3 - 3);
        v62 = *((_OWORD *)v3 - 2);
        v63 = *((_OWORD *)v3 - 1);
        *(_OWORD *)v30 = v27;
        *(_OWORD *)(v30 + 16) = v28;
        v64 = (_OWORD *)(v30 + 32);
        *v64 = v32;
        v64[1] = v33;
        *(_OWORD *)(v7 - 64) = v60;
        *(_OWORD *)(v7 - 48) = v61;
        *(_OWORD *)(v7 - 32) = v62;
        *(_OWORD *)(v7 - 16) = v63;
      }
      else
      {
        if ( v35 < 736 )
          goto LABEL_29;
        if ( (v30 & 0xF) != 0 )
        {
          *(_OWORD *)v30 = v27;
          *(_OWORD *)(result - v8 + 32) = v28;
          return ((__int64 (*)(void))((char *)&dword_45A960[v30 & 0xF] + dword_45A960[v30 & 0xF]))();
        }
        else
        {
          v36 = v35 - 736;
          do
          {
            __asm { PRFM            #1, [X1,#0x280] }
            v43 = *_X1;
            v44 = _X1[1];
            _X1 = _X1 + 2;
            *(_OWORD *)v30 = v27;
            *(_OWORD *)(v30 + 16) = v28;
            v45 = (_OWORD *)(v30 + 32);
            v46 = *_X1;
            v47 = _X1[1];
            _X1 += 2;
            __asm { PRFM            #1, [X1,#0x280] }
            v27 = *_X1;
            v28 = _X1[1];
            _X1 += 2;
            *v45 = v32;
            v45[1] = v33;
            v45 += 2;
            v32 = *_X1;
            v33 = _X1[1];
            _X1 = _X1 + 2;
            *v45 = v43;
            v45[1] = v44;
            v45 += 2;
            *v45 = v46;
            v45[1] = v47;
            v30 = (__int64)(v45 + 2);
            v34 = v36 < 128;
            v36 -= 128;
          }
          while ( !v34 );
          v35 = v36 + 736;
LABEL_29:
          while ( 1 )
          {
            v50 = *_X1;
            v51 = _X1[1];
            v49 = _X1 + 2;
            v53 = *v49;
            v54 = v49[1];
            v52 = v49 + 2;
            *(_OWORD *)v30 = v27;
            *(_OWORD *)(v30 + 16) = v28;
            v55 = (_OWORD *)(v30 + 32);
            *v55 = v32;
            v55[1] = v33;
            v56 = v55 + 2;
            v34 = v35 < 64;
            v57 = v35 - 64;
            if ( v34 )
              break;
            v27 = *v52;
            v28 = v52[1];
            v58 = v52 + 2;
            v32 = *v58;
            v33 = v58[1];
            _X1 = v58 + 2;
            *v56 = v50;
            v56[1] = v51;
            v59 = v56 + 2;
            *v59 = v53;
            v59[1] = v54;
            v30 = (__int64)(v59 + 2);
            v34 = v57 < 64;
            v35 = v57 - 64;
            if ( v34 )
              goto LABEL_32;
          }
          v65 = *((_OWORD *)v3 - 4);
          v66 = *((_OWORD *)v3 - 3);
          v67 = *((_OWORD *)v3 - 2);
          v68 = *((_OWORD *)v3 - 1);
          *v56 = v50;
          v56[1] = v51;
          v69 = v56 + 2;
          *v69 = v53;
          v69[1] = v54;
          *(_OWORD *)(v7 - 64) = v65;
          *(_OWORD *)(v7 - 48) = v66;
          *(_OWORD *)(v7 - 32) = v67;
          *(_OWORD *)(v7 - 16) = v68;
        }
      }
    }
    else
    {
      v9 = *((_OWORD *)v3 - 1);
      if ( a3 > 64 )
      {
        v17 = (__int128 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
        v18 = *v17;
        v19 = v17[1];
        v20 = (_OWORD *)(result - v8);
        v21 = a3 + v8;
        if ( v21 > 80 )
        {
          v23 = v17[2];
          v24 = v17[3];
          if ( v21 > 96 )
          {
            v25 = v17[4];
            v20[1] = v18;
            v20[2] = v19;
            v20[3] = v23;
            v20[4] = v24;
            v20[5] = v25;
          }
          else
          {
            v20[1] = v18;
            v20[2] = v19;
            v20[3] = v23;
            v20[4] = v24;
          }
          *(_OWORD *)result = v6;
          *(_OWORD *)(v7 - 16) = v9;
        }
        else
        {
          v22 = v17[2];
          v20[1] = v18;
          v20[2] = v19;
          v20[3] = v22;
          *(_OWORD *)result = v6;
          *(_OWORD *)(v7 - 16) = v9;
        }
      }
      else if ( a3 <= 48 )
      {
        if ( a3 > 32 )
        {
          v12 = *(_OWORD *)v4;
          *(_OWORD *)result = v6;
          *(_OWORD *)(v7 - 16) = v9;
          *(_OWORD *)(result + 16) = v12;
        }
        else
        {
          *(_OWORD *)result = v6;
          *(_OWORD *)(v7 - 16) = v9;
        }
      }
      else
      {
        v10 = *(_OWORD *)v4;
        v11 = *(_OWORD *)(v4 + 16);
        *(_OWORD *)(v7 - 16) = v9;
        *(_OWORD *)result = v6;
        *(_OWORD *)(result + 16) = v10;
        *(_OWORD *)(result + 32) = v11;
      }
    }
  }
  return result;
}
