#include <stdio.h>

int main(void)
{
    long long num, factor = 1;
    printf("Enter a positive integer: ");
    scanf("%lld", &num);
    
    printf("Factorial of %lld: ", num);
    while(num)
        factor *= num--;

    printf("%lld\n", factor);

    return 0;


}
