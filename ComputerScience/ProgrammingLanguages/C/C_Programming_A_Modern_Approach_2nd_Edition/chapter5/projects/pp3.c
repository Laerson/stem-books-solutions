#include <stdio.h>

int main(void)
{
    float commission, value, num_shares, price_share, rival_commission;

    printf("Enter the number of shares and the price per share: ");
    scanf("%f%f", &num_shares, &price_share);
    value = num_shares * price_share;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if(commission < 39.00f)
        commission = 39.00f;

    if (num_shares < 2000)
        rival_commission = 33.00f + 0.03f * num_shares;
    else
        rival_commission = 33.00f + 0.02f * num_shares;

    printf("Commission: $%.2f\n", commission);
    printf("Rival's commission: $%.2f\n", rival_commission);

    return 0;
}
