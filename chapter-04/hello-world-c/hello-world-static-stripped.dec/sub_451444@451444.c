double __fastcall sub_451444(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  __int64 v17; // x0
  _QWORD *v18; // x5
  __int128 *v19; // x4
  double result; // d0
  __int128 v21; // q1
  __int128 v22; // q2
  __int128 v23; // q2
  __int128 v24; // q2
  __int128 v25; // q2
  __int128 v26; // q2
  __int128 v27; // q2
  __int128 v28; // q2

  v17 = sub_451364(
          a1,
          *(_DWORD *)(*(_QWORD *)a2 + 12LL) == 0,
          (__int64)a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          a15);
  v18 = *(_QWORD **)a2;
  v19 = (__int128 *)(*(_QWORD *)a2 + 16LL);
  *(_QWORD *)&result = 1;
  v21 = *v19;
  v22 = *(_OWORD *)(*(_QWORD *)a2 + 32LL);
  *(_DWORD *)(v17 + 8) = *(_DWORD *)(*(_QWORD *)a2 + 8LL);
  *(_OWORD *)(v17 + 16) = v21;
  *(_OWORD *)(v17 + 32) = v22;
  v23 = v19[3];
  *(_OWORD *)(v17 + 48) = v19[2];
  *(_OWORD *)(v17 + 64) = v23;
  v24 = v19[5];
  *(_OWORD *)(v17 + 80) = v19[4];
  *(_OWORD *)(v17 + 96) = v24;
  v25 = v19[7];
  *(_OWORD *)(v17 + 112) = v19[6];
  *(_OWORD *)(v17 + 128) = v25;
  v26 = v19[9];
  *(_OWORD *)(v17 + 144) = v19[8];
  *(_OWORD *)(v17 + 160) = v26;
  v27 = v19[11];
  *(_OWORD *)(v17 + 176) = v19[10];
  *(_OWORD *)(v17 + 192) = v27;
  v28 = v19[13];
  *(_OWORD *)(v17 + 208) = v19[12];
  *(_OWORD *)(v17 + 224) = v28;
  *(_OWORD *)(v17 + 240) = v19[14];
  v18[1] = 1;
  v18[2] = -1;
  v18[3] = v17;
  *a3 = v18;
  *(_QWORD *)a2 = v17;
  return result;
}
