void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    *largest = *second_largest = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        }
}
