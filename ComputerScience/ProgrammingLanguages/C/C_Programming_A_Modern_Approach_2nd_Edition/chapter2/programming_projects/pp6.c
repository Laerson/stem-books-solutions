#include <stdio.h>

int main(void)
{
    double x;
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    double result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The result is %f\n", result);

    return 0;
}
