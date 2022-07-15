#include <stdio.h>

#define BALANCE_UPDATE loan_amount = loan_amount * (1 + interest_rate) - monthly_payment;

int main(void)
{
    double loan_amount, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%lf", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &monthly_payment);
    printf("\n");

    interest_rate = interest_rate / 1200;

    BALANCE_UPDATE
    printf("Balance remaining after first payment: $%.2f\n", loan_amount);
    BALANCE_UPDATE
    printf("Balance remaining after second payment: $%.2f\n", loan_amount);
    BALANCE_UPDATE
    printf("Balance remaining after third payment: $%.2f\n", loan_amount);

    return 0;
}
