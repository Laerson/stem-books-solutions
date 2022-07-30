#include <stdio.h>

double power(double x, int n);

int main(void)
{
    printf("Enter the value for X and N, to calculate X ^ N: ");
    double x;
    int n;
    scanf("%lf%d", &x, &n);
    printf("The result is: %f\n", power(x, n));

    return 0;
}

double power(double x, int n)
{
    if (n == 1)
        return x;
    else if (n % 2 == 0)
        return power(x, n/2) * power(x, n/2);
    else
        return x * power(x, n - 1);
}
