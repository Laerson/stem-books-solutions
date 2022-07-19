#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    int d1, d2, d3, d4, d5;
    d5 = num % 8;
    d4 = (num /= 8) % 8;
    d3 = (num /= 8) % 8;
    d2 = (num /= 8) % 8;
    d1 = (num /= 8) % 8; 

    printf("In octal, your number is: %d%d%d%d%d\n",
            d1, d2, d3, d4, d5);

    return 0;
}
