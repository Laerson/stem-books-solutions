#include <stdio.h>

#define TAX 0.05f
int main(void)
{
    printf("Enter an amount: ");
    double amount;
    scanf("%lf", &amount);
    printf("With tax added: $%.2f\n", amount * (1 + TAX));

    return 0;
}
