int *find_largest(int a[], int n)
{
    int largest_index = 0;

    for (int i = 1; i < n; i++)
        if (a[i] > a[largest_index])
            largest_index = i;

    return &a[largest_index];
}
