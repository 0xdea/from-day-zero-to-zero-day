__int64 __fastcall sub_40F200(__int64 result, char *a2, unsigned __int64 a3)
{
  char *v3; // x4
  unsigned __int64 v4; // x14
  char *v6; // x4
  unsigned __int64 v7; // x1
  __int128 v8; // t1
  __int128 v9; // q0
  unsigned __int64 v10; // x5
  unsigned __int64 v11; // x14
  __int128 v12; // q4
  __int128 v13; // q1
  __int128 v14; // q2
  __int128 v15; // q1
  __int64 v16; // x7
  int v17; // w7
  char v18; // w6
  char v19; // w7
  __int128 *v20; // x1
  __int128 v21; // q1
  __int128 v22; // q2
  _OWORD *v23; // x3
  __int64 v24; // x2
  __int128 v25; // q3
  __int128 v26; // q3
  __int128 v27; // q6
  __int128 v28; // q5
  __int128 *v29; // x1
  __int128 v30; // q1
  __int128 v31; // q2
  __int64 v32; // x2
  __int64 v33; // x3
  __int128 v35; // q3
  __int128 v36; // q4
  bool v37; // cc
  __int64 v38; // x2
  __int64 v39; // x2
  __int128 v45; // q5
  __int128 v46; // q6
  _OWORD *v47; // x3
  __int128 v48; // q7
  __int128 v49; // q16
  __int128 *v51; // x1
  __int128 v52; // q5
  __int128 v53; // q6
  __int128 *v54; // x1
  __int128 v55; // q7
  __int128 v56; // q16
  _OWORD *v57; // x3
  _OWORD *v58; // x3
  __int64 v59; // x2
  __int128 *v60; // x1
  _OWORD *v61; // x3
  __int128 v62; // q5
  __int128 v63; // q6
  __int128 v64; // q7
  __int128 v65; // q16
  _OWORD *v66; // x3
  __int128 v67; // q1
  __int128 v68; // q2
  __int128 v69; // q3
  __int128 v70; // q4
  _OWORD *v71; // x3
  unsigned __int64 v72; // x5
  __int64 v73; // x14
  __int128 v74; // q3
  unsigned __int64 v75; // x4
  unsigned __int64 v76; // x2
  __int128 v77; // q0
  __int128 v78; // q1
  unsigned __int64 v79; // x4
  __int128 v80; // q2
  __int128 v81; // q3
  unsigned __int64 v82; // x5
  unsigned __int64 i; // x2
  __int128 v84; // q4
  __int128 v85; // q5
  __int128 v86; // q6
  __int128 v87; // q7

  v3 = &a2[a3];
  if ( a3 <= 0x10 )
  {
    if ( a3 < 8 )
    {
      if ( (a3 & 4) != 0 )
      {
        v17 = *((_DWORD *)v3 - 1);
        *(_DWORD *)result = *(_DWORD *)a2;
        *(_DWORD *)(result + a3 - 4) = v17;
      }
      else if ( a3 )
      {
        v18 = *a2;
        v19 = *(v3 - 1);
        *(_BYTE *)(result + (a3 >> 1)) = a2[a3 >> 1];
        *(_BYTE *)(result + a3 - 1) = v19;
        *(_BYTE *)result = v18;
      }
    }
    else
    {
      v16 = *((_QWORD *)v3 - 1);
      *(_QWORD *)result = *(_QWORD *)a2;
      *(_QWORD *)(result + a3 - 8) = v16;
    }
  }
  else
  {
    v4 = result - (_QWORD)a2;
    if ( a3 <= 0x60 || v4 >= a3 )
    {
      v6 = &a2[a3];
      v8 = *(_OWORD *)a2;
      v7 = (unsigned __int64)(a2 + 16);
      v9 = v8;
      v10 = result + a3;
      v11 = v7 & 0xF;
      if ( a3 > 0x60 )
      {
        v29 = (__int128 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
        v30 = *v29;
        v31 = v29[1];
        v29 += 2;
        v32 = a3 + v11;
        v33 = result - v11 + 16;
        v35 = *v29;
        v36 = v29[1];
        _X1 = v29 + 2;
        *(_OWORD *)result = v9;
        v37 = v32 < 144;
        v38 = v32 - 144;
        if ( v37 )
        {
LABEL_37:
          v62 = *((_OWORD *)v6 - 4);
          v63 = *((_OWORD *)v6 - 3);
          v64 = *((_OWORD *)v6 - 2);
          v65 = *((_OWORD *)v6 - 1);
          *(_OWORD *)v33 = v30;
          *(_OWORD *)(v33 + 16) = v31;
          v66 = (_OWORD *)(v33 + 32);
          *v66 = v35;
          v66[1] = v36;
          *(_OWORD *)(v10 - 64) = v62;
          *(_OWORD *)(v10 - 48) = v63;
          *(_OWORD *)(v10 - 32) = v64;
          *(_OWORD *)(v10 - 16) = v65;
        }
        else
        {
          if ( v38 < 736 )
            goto LABEL_34;
          if ( (v33 & 0xF) != 0 )
          {
            *(_OWORD *)v33 = v30;
            *(_OWORD *)(result - v11 + 32) = v31;
            return ((__int64 (*)(void))((char *)&dword_45A960[v33 & 0xF] + dword_45A960[v33 & 0xF]))();
          }
          else
          {
            v39 = v38 - 736;
            do
            {
              __asm { PRFM            #1, [X1,#0x280] }
              v45 = *_X1;
              v46 = _X1[1];
              _X1 = _X1 + 2;
              *(_OWORD *)v33 = v30;
              *(_OWORD *)(v33 + 16) = v31;
              v47 = (_OWORD *)(v33 + 32);
              v48 = *_X1;
              v49 = _X1[1];
              _X1 += 2;
              __asm { PRFM            #1, [X1,#0x280] }
              v30 = *_X1;
              v31 = _X1[1];
              _X1 += 2;
              *v47 = v35;
              v47[1] = v36;
              v47 += 2;
              v35 = *_X1;
              v36 = _X1[1];
              _X1 = _X1 + 2;
              *v47 = v45;
              v47[1] = v46;
              v47 += 2;
              *v47 = v48;
              v47[1] = v49;
              v33 = (__int64)(v47 + 2);
              v37 = v39 < 128;
              v39 -= 128;
            }
            while ( !v37 );
            v38 = v39 + 736;
LABEL_34:
            while ( 1 )
            {
              v52 = *_X1;
              v53 = _X1[1];
              v51 = _X1 + 2;
              v55 = *v51;
              v56 = v51[1];
              v54 = v51 + 2;
              *(_OWORD *)v33 = v30;
              *(_OWORD *)(v33 + 16) = v31;
              v57 = (_OWORD *)(v33 + 32);
              *v57 = v35;
              v57[1] = v36;
              v58 = v57 + 2;
              v37 = v38 < 64;
              v59 = v38 - 64;
              if ( v37 )
                break;
              v30 = *v54;
              v31 = v54[1];
              v60 = v54 + 2;
              v35 = *v60;
              v36 = v60[1];
              _X1 = v60 + 2;
              *v58 = v52;
              v58[1] = v53;
              v61 = v58 + 2;
              *v61 = v55;
              v61[1] = v56;
              v33 = (__int64)(v61 + 2);
              v37 = v59 < 64;
              v38 = v59 - 64;
              if ( v37 )
                goto LABEL_37;
            }
            v67 = *((_OWORD *)v6 - 4);
            v68 = *((_OWORD *)v6 - 3);
            v69 = *((_OWORD *)v6 - 2);
            v70 = *((_OWORD *)v6 - 1);
            *v58 = v52;
            v58[1] = v53;
            v71 = v58 + 2;
            *v71 = v55;
            v71[1] = v56;
            *(_OWORD *)(v10 - 64) = v67;
            *(_OWORD *)(v10 - 48) = v68;
            *(_OWORD *)(v10 - 32) = v69;
            *(_OWORD *)(v10 - 16) = v70;
          }
        }
      }
      else
      {
        v12 = *((_OWORD *)v6 - 1);
        if ( (__int64)a3 > 64 )
        {
          v20 = (__int128 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
          v21 = *v20;
          v22 = v20[1];
          v23 = (_OWORD *)(result - v11);
          v24 = a3 + v11;
          if ( v24 > 80 )
          {
            v26 = v20[2];
            v27 = v20[3];
            if ( v24 > 96 )
            {
              v28 = v20[4];
              v23[1] = v21;
              v23[2] = v22;
              v23[3] = v26;
              v23[4] = v27;
              v23[5] = v28;
            }
            else
            {
              v23[1] = v21;
              v23[2] = v22;
              v23[3] = v26;
              v23[4] = v27;
            }
            *(_OWORD *)result = v9;
            *(_OWORD *)(v10 - 16) = v12;
          }
          else
          {
            v25 = v20[2];
            v23[1] = v21;
            v23[2] = v22;
            v23[3] = v25;
            *(_OWORD *)result = v9;
            *(_OWORD *)(v10 - 16) = v12;
          }
        }
        else if ( (__int64)a3 <= 48 )
        {
          if ( (__int64)a3 > 32 )
          {
            v15 = *(_OWORD *)v7;
            *(_OWORD *)result = v9;
            *(_OWORD *)(v10 - 16) = v12;
            *(_OWORD *)(result + 16) = v15;
          }
          else
          {
            *(_OWORD *)result = v9;
            *(_OWORD *)(v10 - 16) = v12;
          }
        }
        else
        {
          v13 = *(_OWORD *)v7;
          v14 = *(_OWORD *)(v7 + 16);
          *(_OWORD *)(v10 - 16) = v12;
          *(_OWORD *)result = v9;
          *(_OWORD *)(result + 16) = v13;
          *(_OWORD *)(result + 32) = v14;
        }
      }
    }
    else if ( v4 )
    {
      v72 = result + a3;
      v73 = (unsigned __int64)&a2[a3] & 0xF;
      v74 = *(_OWORD *)&a2[a3 - 16];
      v75 = (unsigned __int64)&a2[a3 - v73];
      v76 = a3 - v73;
      v77 = *(_OWORD *)(v75 - 32);
      v78 = *(_OWORD *)(v75 - 16);
      *(_OWORD *)(v72 - 16) = v74;
      v80 = *(_OWORD *)(v75 - 64);
      v81 = *(_OWORD *)(v75 - 48);
      v79 = v75 - 64;
      v82 = v72 - v73;
      v37 = v76 > 0x80;
      for ( i = v76 - 128; v37; v79 -= 64LL )
      {
        v37 = i > 0x40;
        i -= 64LL;
        *(_OWORD *)(v82 - 32) = v77;
        *(_OWORD *)(v82 - 16) = v78;
        v77 = *(_OWORD *)(v79 - 32);
        v78 = *(_OWORD *)(v79 - 16);
        *(_OWORD *)(v82 - 64) = v80;
        *(_OWORD *)(v82 - 48) = v81;
        v82 -= 64LL;
        v80 = *(_OWORD *)(v79 - 64);
        v81 = *(_OWORD *)(v79 - 48);
      }
      v84 = *((_OWORD *)a2 + 2);
      v85 = *((_OWORD *)a2 + 3);
      v86 = *(_OWORD *)a2;
      v87 = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v82 - 32) = v77;
      *(_OWORD *)(v82 - 16) = v78;
      *(_OWORD *)(v82 - 64) = v80;
      *(_OWORD *)(v82 - 48) = v81;
      *(_OWORD *)(result + 32) = v84;
      *(_OWORD *)(result + 48) = v85;
      *(_OWORD *)result = v86;
      *(_OWORD *)(result + 16) = v87;
    }
  }
  return result;
}
