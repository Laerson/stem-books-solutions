/* At this point of the book, the %= and the % operators were not introduced yet.
 * you don't need them, I just used to make the code shorter
 * the % gives the remainder of a division
 * you could made the division, and subtract the result from amount
 * the %= does the "%" operation and assigns the result to the lvalue.
 * for example, line 14 could be written as:
 * amount = amount % 20
 */

#include <stdio.h>

int main(void)
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    printf("\n");

    printf("$20 bills: %d\n", amount / 20);
    amount %= 20;
    printf("$10 bills: %d\n", amount / 10);
    amount %= 10;
    printf("$5 bills: %d\n", amount / 5);
    printf("$1 bills: %d\n", amount % 5);

    return 0;
}
