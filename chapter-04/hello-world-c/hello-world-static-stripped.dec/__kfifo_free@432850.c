void __fastcall _kfifo_free(__kfifo *fifo)
{
  double v1; // d0
  double v2; // d1
  double v3; // d2
  double v4; // d3
  double v5; // d4
  double v6; // d5
  double v7; // d6
  double v8; // d7

  sub_40C1A0(*((_QWORD *)fifo + 2), v1, v2, v3, v4, v5, v6, v7, v8);
  *(_QWORD *)fifo = 0;
  *((_QWORD *)fifo + 1) = 0;
  *((_QWORD *)fifo + 2) = 0;
}
