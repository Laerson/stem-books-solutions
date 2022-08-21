int *find_largest(int *a, int n)
{
    int *largest = a, *p;

    for (p = a + 1; p < a + n; p++)
        if (*p < *largest)
            largest = p;
    return largest;
}
