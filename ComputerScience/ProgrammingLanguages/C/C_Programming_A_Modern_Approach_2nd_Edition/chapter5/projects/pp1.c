#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    int digits = 1;

    if (num >= 10)
        digits++;
    if (num >= 100)
        digits++;
    if (num >= 1000)
        digits++;

    printf("The number %d has %d digits\n", num, digits);

    return 0;
}
