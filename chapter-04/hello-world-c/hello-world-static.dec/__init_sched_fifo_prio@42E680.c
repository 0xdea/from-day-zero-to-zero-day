__int64 _init_sched_fifo_prio()
{
  __int64 result; // x0

  _sched_fifo_max_prio = sched_get_priority_max(1);
  result = sched_get_priority_min(1);
  _sched_fifo_min_prio = result;
  return result;
}
