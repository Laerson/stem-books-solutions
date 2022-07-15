#include <stdio.h>

int main(void)
{
    double x;
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    double result = 3 * x * x * x * x * x +
        2 * x * x * x * x -
        5 * x * x * x -
        x * x +
        7 * x - 6;
    printf("The result is %f\n", result);

    return 0;
}
