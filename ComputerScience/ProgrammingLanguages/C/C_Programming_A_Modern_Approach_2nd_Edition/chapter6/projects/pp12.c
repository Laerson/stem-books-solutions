#include <stdio.h>

int main(void)
{
    int n, factorial;
    double e = 1.0;
    float epsilon;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter the value for epsilon: ");
    scanf("%f", &epsilon);

    for(int i = 1; i <= n; i++) {
        factorial = 1;
        for (int j = 2; j <= i; j++)
            factorial *= j;
        if (1.0 / factorial < epsilon)
            break;
        e += 1.0 / factorial;
    }
    printf("approximated value for e: %.15lf\n", e);

    return 0;
}
