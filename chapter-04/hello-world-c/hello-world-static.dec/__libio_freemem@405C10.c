__int64 _libio_freemem()
{
  __int64 result; // x0
  __int64 v1; // x19

  result = 1;
  v1 = freeres_list;
  for ( dealloc_buffers = 1; v1; freeres_list = v1 )
  {
    result = free(*(_QWORD *)(v1 + 176));
    v1 = *(_QWORD *)(v1 + 168);
  }
  return result;
}
