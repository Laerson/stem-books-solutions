#include <stdio.h>

int main(void)
{
    int d;
    printf("Enter a number: ");
    scanf("%d", &d);
    
    printf("The reversal is: ");

    do {
        printf("%d", d % 10);
        d /= 10;
    } while (d > 0);
    printf("\n");

    return 0;
}
