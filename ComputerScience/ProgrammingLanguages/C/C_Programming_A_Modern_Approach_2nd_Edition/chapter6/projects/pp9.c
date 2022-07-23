#include <stdio.h>

#define BALANCE_UPDATE loan_amount = loan_amount * (1 + interest_rate) - monthly_payment;

int main(void)
{
    double loan_amount, interest_rate, monthly_payment;
    int number_payments;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%lf", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%d", &number_payments);
    printf("\n");

    interest_rate = interest_rate / 1200;

    for (int i = 1; i <= number_payments; i++) {
        BALANCE_UPDATE
        printf("Balance remaining after payment #%d: $%.2f\n",
                i, loan_amount);
    }


    return 0;
}
