#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int main(void)
{
    int num, den, reduced_numerator, reduced_denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);
    reduce(num, den, &reduced_numerator, &reduced_denominator);
    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int m, n, tmp;

    m = numerator, n = denominator;
    while (n != 0) {
        tmp = m % n;
        m = n;
        n = tmp;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}
