int largest(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}

double average(int a[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum / n;
}

int pos_amount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            count++;
    
    return count;
}
