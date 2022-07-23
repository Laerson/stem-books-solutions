#include <stdio.h>

int main(void)
{
    int m, n, tmp;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (n != 0) {
        tmp = m % n;
        m = n;
        n = tmp;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}
