#include <stdio.h>

double calculate_polynomial(double x);

int main(void)
{
    double x;
    printf("Type a value for x: ");
    scanf("%lf", &x);
    printf("The result of the polynomial is: %f\n", calculate_polynomial(x));

    return 0;
}

double calculate_polynomial(double x)
{
    return 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x)
        - x * x + 7 * x - 6;
}
