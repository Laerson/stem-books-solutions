void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = (total_sec / 3600) % 24;
    *min = (total_sec % 3600) / 60;
    *sec = total_sec % 60;
}
