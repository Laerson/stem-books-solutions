#include <stdio.h>

int main(void)
{
    int d;
    printf("Enter a two-digit number: ");
    scanf("%d", &d);
    
    int d1, d2;
    d1 = d / 10;
    d2 = d % 10;

    d = 10 * d2 + d1;
    printf("The reversal is: %d\n", d);

    return 0;
}
