/*I modified pp2.c instead of repdigit.c
 * However, the modiification is the same:
 * wrap the code inside an infinite loop, and add the possible
 * break statement after the numbe is read from the user
 * */
#include <stdio.h>

int main(void)
{
    int digit_seen[10] = {0};
    int digit;
    long n;

    for (;;) {
        printf("Enter a number: ");
        scanf("%ld", &n);
        if(n <= 0)
            break;

        while (n > 0) {
            digit = n % 10;
            digit_seen[digit]++;
            n /= 10;
        }

        printf("Digit:        ");
        for(int i = 0; i < 10; i++)
            printf("%d  ", i);
        printf("\nOccurrences:  ");
        for(int i = 0; i < 10; i++)
            printf("%d  ", digit_seen[i]);
        printf("\n");
    }

    return 0;
}
