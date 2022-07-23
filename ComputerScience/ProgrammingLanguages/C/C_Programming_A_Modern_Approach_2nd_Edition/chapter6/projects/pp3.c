#include <stdio.h>

int main(void)
{
    int m, n, tmp, num, den;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    m = num;
    n = den;
    while (n != 0) {
        tmp = m % n;
        m = n;
        n = tmp;
    }

    printf("In lowest terms: %d/%d\n", num/m, den/m);

    return 0;
}
