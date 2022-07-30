int digit(int n, int k)
{
    int power_10 = 1;
    for(int i = 0; i < k - 1; i++)
        power_10 * 10;

    return  (n / power_10) % 10;
}
